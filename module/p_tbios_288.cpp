#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00011759(X86Cpu& c) {
    X86_TICK(c, 14);
    // 011759  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11759u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01175b  call 0x11bf0
    X86_AT(c, 0x1175bu);
    push32(c, 0x11760u); f_00011bf0(c); X86_RET(c, 0x11760u);
    X86_TICK(c, 16);
    // 011760  add ah, 4
    X86_AT(c, 0x11760u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011763  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11763u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011765  call 0x11bf0
    X86_AT(c, 0x11765u);
    push32(c, 0x1176au); f_00011bf0(c); X86_RET(c, 0x1176au);
    X86_TICK(c, 16);
    // 01176a  add ah, 4
    X86_AT(c, 0x1176au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01176d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1176du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01176f  call 0x11bf0
    X86_AT(c, 0x1176fu);
    push32(c, 0x11774u); f_00011bf0(c); X86_RET(c, 0x11774u);
    X86_TICK(c, 16);
    // 011774  add ah, 4
    X86_AT(c, 0x11774u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011777  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11777u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011779  call 0x11bf0
    X86_AT(c, 0x11779u);
    push32(c, 0x1177eu); f_00011bf0(c); X86_RET(c, 0x1177eu);
    X86_TICK(c, 16);
    // 01177e  add ah, 4
    X86_AT(c, 0x1177eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011781  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11781u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011783  call 0x11bf0
    X86_AT(c, 0x11783u);
    push32(c, 0x11788u); f_00011bf0(c); X86_RET(c, 0x11788u);
    X86_TICK(c, 16);
    // 011788  add ah, 4
    X86_AT(c, 0x11788u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01178b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1178bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01178d  call 0x11bf0
    X86_AT(c, 0x1178du);
    push32(c, 0x11792u); f_00011bf0(c); X86_RET(c, 0x11792u);
    X86_TICK(c, 16);
    // 011792  add ah, 4
    X86_AT(c, 0x11792u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011795  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11795u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011797  call 0x11bf0
    X86_AT(c, 0x11797u);
    push32(c, 0x1179cu); f_00011bf0(c); X86_RET(c, 0x1179cu);
    X86_TICK(c, 16);
    // 01179c  add ah, 4
    X86_AT(c, 0x1179cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01179f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1179fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117a1  call 0x11bf0
    X86_AT(c, 0x117a1u);
    push32(c, 0x117a6u); f_00011bf0(c); X86_RET(c, 0x117a6u);
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11759u, "ran off the end of a function");
}
void f_0001175b(X86Cpu& c) {
    X86_TICK(c, 7);
    // 01175b  call 0x11bf0
    X86_AT(c, 0x1175bu);
    push32(c, 0x11760u); f_00011bf0(c); X86_RET(c, 0x11760u);
    X86_TICK(c, 16);
    // 011760  add ah, 4
    X86_AT(c, 0x11760u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011763  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11763u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011765  call 0x11bf0
    X86_AT(c, 0x11765u);
    push32(c, 0x1176au); f_00011bf0(c); X86_RET(c, 0x1176au);
    X86_TICK(c, 16);
    // 01176a  add ah, 4
    X86_AT(c, 0x1176au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01176d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1176du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01176f  call 0x11bf0
    X86_AT(c, 0x1176fu);
    push32(c, 0x11774u); f_00011bf0(c); X86_RET(c, 0x11774u);
    X86_TICK(c, 16);
    // 011774  add ah, 4
    X86_AT(c, 0x11774u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011777  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11777u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011779  call 0x11bf0
    X86_AT(c, 0x11779u);
    push32(c, 0x1177eu); f_00011bf0(c); X86_RET(c, 0x1177eu);
    X86_TICK(c, 16);
    // 01177e  add ah, 4
    X86_AT(c, 0x1177eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011781  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11781u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011783  call 0x11bf0
    X86_AT(c, 0x11783u);
    push32(c, 0x11788u); f_00011bf0(c); X86_RET(c, 0x11788u);
    X86_TICK(c, 16);
    // 011788  add ah, 4
    X86_AT(c, 0x11788u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01178b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1178bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01178d  call 0x11bf0
    X86_AT(c, 0x1178du);
    push32(c, 0x11792u); f_00011bf0(c); X86_RET(c, 0x11792u);
    X86_TICK(c, 16);
    // 011792  add ah, 4
    X86_AT(c, 0x11792u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011795  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11795u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011797  call 0x11bf0
    X86_AT(c, 0x11797u);
    push32(c, 0x1179cu); f_00011bf0(c); X86_RET(c, 0x1179cu);
    X86_TICK(c, 16);
    // 01179c  add ah, 4
    X86_AT(c, 0x1179cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01179f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1179fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117a1  call 0x11bf0
    X86_AT(c, 0x117a1u);
    push32(c, 0x117a6u); f_00011bf0(c); X86_RET(c, 0x117a6u);
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1175bu, "ran off the end of a function");
}
void f_00011760(X86Cpu& c) {
    X86_TICK(c, 16);
    // 011760  add ah, 4
    X86_AT(c, 0x11760u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011763  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11763u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011765  call 0x11bf0
    X86_AT(c, 0x11765u);
    push32(c, 0x1176au); f_00011bf0(c); X86_RET(c, 0x1176au);
    X86_TICK(c, 16);
    // 01176a  add ah, 4
    X86_AT(c, 0x1176au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01176d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1176du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01176f  call 0x11bf0
    X86_AT(c, 0x1176fu);
    push32(c, 0x11774u); f_00011bf0(c); X86_RET(c, 0x11774u);
    X86_TICK(c, 16);
    // 011774  add ah, 4
    X86_AT(c, 0x11774u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011777  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11777u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011779  call 0x11bf0
    X86_AT(c, 0x11779u);
    push32(c, 0x1177eu); f_00011bf0(c); X86_RET(c, 0x1177eu);
    X86_TICK(c, 16);
    // 01177e  add ah, 4
    X86_AT(c, 0x1177eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011781  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11781u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011783  call 0x11bf0
    X86_AT(c, 0x11783u);
    push32(c, 0x11788u); f_00011bf0(c); X86_RET(c, 0x11788u);
    X86_TICK(c, 16);
    // 011788  add ah, 4
    X86_AT(c, 0x11788u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01178b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1178bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01178d  call 0x11bf0
    X86_AT(c, 0x1178du);
    push32(c, 0x11792u); f_00011bf0(c); X86_RET(c, 0x11792u);
    X86_TICK(c, 16);
    // 011792  add ah, 4
    X86_AT(c, 0x11792u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011795  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11795u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011797  call 0x11bf0
    X86_AT(c, 0x11797u);
    push32(c, 0x1179cu); f_00011bf0(c); X86_RET(c, 0x1179cu);
    X86_TICK(c, 16);
    // 01179c  add ah, 4
    X86_AT(c, 0x1179cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01179f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1179fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117a1  call 0x11bf0
    X86_AT(c, 0x117a1u);
    push32(c, 0x117a6u); f_00011bf0(c); X86_RET(c, 0x117a6u);
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11760u, "ran off the end of a function");
}
void f_00011763(X86Cpu& c) {
    X86_TICK(c, 14);
    // 011763  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11763u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011765  call 0x11bf0
    X86_AT(c, 0x11765u);
    push32(c, 0x1176au); f_00011bf0(c); X86_RET(c, 0x1176au);
    X86_TICK(c, 16);
    // 01176a  add ah, 4
    X86_AT(c, 0x1176au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01176d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1176du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01176f  call 0x11bf0
    X86_AT(c, 0x1176fu);
    push32(c, 0x11774u); f_00011bf0(c); X86_RET(c, 0x11774u);
    X86_TICK(c, 16);
    // 011774  add ah, 4
    X86_AT(c, 0x11774u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011777  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11777u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011779  call 0x11bf0
    X86_AT(c, 0x11779u);
    push32(c, 0x1177eu); f_00011bf0(c); X86_RET(c, 0x1177eu);
    X86_TICK(c, 16);
    // 01177e  add ah, 4
    X86_AT(c, 0x1177eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011781  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11781u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011783  call 0x11bf0
    X86_AT(c, 0x11783u);
    push32(c, 0x11788u); f_00011bf0(c); X86_RET(c, 0x11788u);
    X86_TICK(c, 16);
    // 011788  add ah, 4
    X86_AT(c, 0x11788u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01178b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1178bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01178d  call 0x11bf0
    X86_AT(c, 0x1178du);
    push32(c, 0x11792u); f_00011bf0(c); X86_RET(c, 0x11792u);
    X86_TICK(c, 16);
    // 011792  add ah, 4
    X86_AT(c, 0x11792u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011795  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11795u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011797  call 0x11bf0
    X86_AT(c, 0x11797u);
    push32(c, 0x1179cu); f_00011bf0(c); X86_RET(c, 0x1179cu);
    X86_TICK(c, 16);
    // 01179c  add ah, 4
    X86_AT(c, 0x1179cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01179f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1179fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117a1  call 0x11bf0
    X86_AT(c, 0x117a1u);
    push32(c, 0x117a6u); f_00011bf0(c); X86_RET(c, 0x117a6u);
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11763u, "ran off the end of a function");
}
void f_00011765(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011765  call 0x11bf0
    X86_AT(c, 0x11765u);
    push32(c, 0x1176au); f_00011bf0(c); X86_RET(c, 0x1176au);
    X86_TICK(c, 16);
    // 01176a  add ah, 4
    X86_AT(c, 0x1176au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01176d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1176du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01176f  call 0x11bf0
    X86_AT(c, 0x1176fu);
    push32(c, 0x11774u); f_00011bf0(c); X86_RET(c, 0x11774u);
    X86_TICK(c, 16);
    // 011774  add ah, 4
    X86_AT(c, 0x11774u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011777  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11777u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011779  call 0x11bf0
    X86_AT(c, 0x11779u);
    push32(c, 0x1177eu); f_00011bf0(c); X86_RET(c, 0x1177eu);
    X86_TICK(c, 16);
    // 01177e  add ah, 4
    X86_AT(c, 0x1177eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011781  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11781u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011783  call 0x11bf0
    X86_AT(c, 0x11783u);
    push32(c, 0x11788u); f_00011bf0(c); X86_RET(c, 0x11788u);
    X86_TICK(c, 16);
    // 011788  add ah, 4
    X86_AT(c, 0x11788u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01178b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1178bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01178d  call 0x11bf0
    X86_AT(c, 0x1178du);
    push32(c, 0x11792u); f_00011bf0(c); X86_RET(c, 0x11792u);
    X86_TICK(c, 16);
    // 011792  add ah, 4
    X86_AT(c, 0x11792u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011795  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11795u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011797  call 0x11bf0
    X86_AT(c, 0x11797u);
    push32(c, 0x1179cu); f_00011bf0(c); X86_RET(c, 0x1179cu);
    X86_TICK(c, 16);
    // 01179c  add ah, 4
    X86_AT(c, 0x1179cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01179f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1179fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117a1  call 0x11bf0
    X86_AT(c, 0x117a1u);
    push32(c, 0x117a6u); f_00011bf0(c); X86_RET(c, 0x117a6u);
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11765u, "ran off the end of a function");
}
void f_0001176a(X86Cpu& c) {
    X86_TICK(c, 16);
    // 01176a  add ah, 4
    X86_AT(c, 0x1176au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01176d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1176du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01176f  call 0x11bf0
    X86_AT(c, 0x1176fu);
    push32(c, 0x11774u); f_00011bf0(c); X86_RET(c, 0x11774u);
    X86_TICK(c, 16);
    // 011774  add ah, 4
    X86_AT(c, 0x11774u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011777  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11777u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011779  call 0x11bf0
    X86_AT(c, 0x11779u);
    push32(c, 0x1177eu); f_00011bf0(c); X86_RET(c, 0x1177eu);
    X86_TICK(c, 16);
    // 01177e  add ah, 4
    X86_AT(c, 0x1177eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011781  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11781u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011783  call 0x11bf0
    X86_AT(c, 0x11783u);
    push32(c, 0x11788u); f_00011bf0(c); X86_RET(c, 0x11788u);
    X86_TICK(c, 16);
    // 011788  add ah, 4
    X86_AT(c, 0x11788u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01178b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1178bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01178d  call 0x11bf0
    X86_AT(c, 0x1178du);
    push32(c, 0x11792u); f_00011bf0(c); X86_RET(c, 0x11792u);
    X86_TICK(c, 16);
    // 011792  add ah, 4
    X86_AT(c, 0x11792u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011795  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11795u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011797  call 0x11bf0
    X86_AT(c, 0x11797u);
    push32(c, 0x1179cu); f_00011bf0(c); X86_RET(c, 0x1179cu);
    X86_TICK(c, 16);
    // 01179c  add ah, 4
    X86_AT(c, 0x1179cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01179f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1179fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117a1  call 0x11bf0
    X86_AT(c, 0x117a1u);
    push32(c, 0x117a6u); f_00011bf0(c); X86_RET(c, 0x117a6u);
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1176au, "ran off the end of a function");
}
void f_0001176d(X86Cpu& c) {
    X86_TICK(c, 14);
    // 01176d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1176du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01176f  call 0x11bf0
    X86_AT(c, 0x1176fu);
    push32(c, 0x11774u); f_00011bf0(c); X86_RET(c, 0x11774u);
    X86_TICK(c, 16);
    // 011774  add ah, 4
    X86_AT(c, 0x11774u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011777  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11777u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011779  call 0x11bf0
    X86_AT(c, 0x11779u);
    push32(c, 0x1177eu); f_00011bf0(c); X86_RET(c, 0x1177eu);
    X86_TICK(c, 16);
    // 01177e  add ah, 4
    X86_AT(c, 0x1177eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011781  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11781u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011783  call 0x11bf0
    X86_AT(c, 0x11783u);
    push32(c, 0x11788u); f_00011bf0(c); X86_RET(c, 0x11788u);
    X86_TICK(c, 16);
    // 011788  add ah, 4
    X86_AT(c, 0x11788u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01178b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1178bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01178d  call 0x11bf0
    X86_AT(c, 0x1178du);
    push32(c, 0x11792u); f_00011bf0(c); X86_RET(c, 0x11792u);
    X86_TICK(c, 16);
    // 011792  add ah, 4
    X86_AT(c, 0x11792u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011795  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11795u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011797  call 0x11bf0
    X86_AT(c, 0x11797u);
    push32(c, 0x1179cu); f_00011bf0(c); X86_RET(c, 0x1179cu);
    X86_TICK(c, 16);
    // 01179c  add ah, 4
    X86_AT(c, 0x1179cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01179f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1179fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117a1  call 0x11bf0
    X86_AT(c, 0x117a1u);
    push32(c, 0x117a6u); f_00011bf0(c); X86_RET(c, 0x117a6u);
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1176du, "ran off the end of a function");
}
void f_0001176f(X86Cpu& c) {
    X86_TICK(c, 7);
    // 01176f  call 0x11bf0
    X86_AT(c, 0x1176fu);
    push32(c, 0x11774u); f_00011bf0(c); X86_RET(c, 0x11774u);
    X86_TICK(c, 16);
    // 011774  add ah, 4
    X86_AT(c, 0x11774u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011777  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11777u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011779  call 0x11bf0
    X86_AT(c, 0x11779u);
    push32(c, 0x1177eu); f_00011bf0(c); X86_RET(c, 0x1177eu);
    X86_TICK(c, 16);
    // 01177e  add ah, 4
    X86_AT(c, 0x1177eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011781  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11781u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011783  call 0x11bf0
    X86_AT(c, 0x11783u);
    push32(c, 0x11788u); f_00011bf0(c); X86_RET(c, 0x11788u);
    X86_TICK(c, 16);
    // 011788  add ah, 4
    X86_AT(c, 0x11788u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01178b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1178bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01178d  call 0x11bf0
    X86_AT(c, 0x1178du);
    push32(c, 0x11792u); f_00011bf0(c); X86_RET(c, 0x11792u);
    X86_TICK(c, 16);
    // 011792  add ah, 4
    X86_AT(c, 0x11792u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011795  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11795u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011797  call 0x11bf0
    X86_AT(c, 0x11797u);
    push32(c, 0x1179cu); f_00011bf0(c); X86_RET(c, 0x1179cu);
    X86_TICK(c, 16);
    // 01179c  add ah, 4
    X86_AT(c, 0x1179cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01179f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1179fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117a1  call 0x11bf0
    X86_AT(c, 0x117a1u);
    push32(c, 0x117a6u); f_00011bf0(c); X86_RET(c, 0x117a6u);
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1176fu, "ran off the end of a function");
}
void f_00011774(X86Cpu& c) {
    X86_TICK(c, 16);
    // 011774  add ah, 4
    X86_AT(c, 0x11774u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011777  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11777u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011779  call 0x11bf0
    X86_AT(c, 0x11779u);
    push32(c, 0x1177eu); f_00011bf0(c); X86_RET(c, 0x1177eu);
    X86_TICK(c, 16);
    // 01177e  add ah, 4
    X86_AT(c, 0x1177eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011781  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11781u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011783  call 0x11bf0
    X86_AT(c, 0x11783u);
    push32(c, 0x11788u); f_00011bf0(c); X86_RET(c, 0x11788u);
    X86_TICK(c, 16);
    // 011788  add ah, 4
    X86_AT(c, 0x11788u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01178b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1178bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01178d  call 0x11bf0
    X86_AT(c, 0x1178du);
    push32(c, 0x11792u); f_00011bf0(c); X86_RET(c, 0x11792u);
    X86_TICK(c, 16);
    // 011792  add ah, 4
    X86_AT(c, 0x11792u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011795  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11795u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011797  call 0x11bf0
    X86_AT(c, 0x11797u);
    push32(c, 0x1179cu); f_00011bf0(c); X86_RET(c, 0x1179cu);
    X86_TICK(c, 16);
    // 01179c  add ah, 4
    X86_AT(c, 0x1179cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01179f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1179fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117a1  call 0x11bf0
    X86_AT(c, 0x117a1u);
    push32(c, 0x117a6u); f_00011bf0(c); X86_RET(c, 0x117a6u);
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11774u, "ran off the end of a function");
}
void f_00011777(X86Cpu& c) {
    X86_TICK(c, 14);
    // 011777  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11777u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011779  call 0x11bf0
    X86_AT(c, 0x11779u);
    push32(c, 0x1177eu); f_00011bf0(c); X86_RET(c, 0x1177eu);
    X86_TICK(c, 16);
    // 01177e  add ah, 4
    X86_AT(c, 0x1177eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011781  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11781u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011783  call 0x11bf0
    X86_AT(c, 0x11783u);
    push32(c, 0x11788u); f_00011bf0(c); X86_RET(c, 0x11788u);
    X86_TICK(c, 16);
    // 011788  add ah, 4
    X86_AT(c, 0x11788u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01178b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1178bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01178d  call 0x11bf0
    X86_AT(c, 0x1178du);
    push32(c, 0x11792u); f_00011bf0(c); X86_RET(c, 0x11792u);
    X86_TICK(c, 16);
    // 011792  add ah, 4
    X86_AT(c, 0x11792u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011795  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11795u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011797  call 0x11bf0
    X86_AT(c, 0x11797u);
    push32(c, 0x1179cu); f_00011bf0(c); X86_RET(c, 0x1179cu);
    X86_TICK(c, 16);
    // 01179c  add ah, 4
    X86_AT(c, 0x1179cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01179f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1179fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117a1  call 0x11bf0
    X86_AT(c, 0x117a1u);
    push32(c, 0x117a6u); f_00011bf0(c); X86_RET(c, 0x117a6u);
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11777u, "ran off the end of a function");
}
void f_00011779(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011779  call 0x11bf0
    X86_AT(c, 0x11779u);
    push32(c, 0x1177eu); f_00011bf0(c); X86_RET(c, 0x1177eu);
    X86_TICK(c, 16);
    // 01177e  add ah, 4
    X86_AT(c, 0x1177eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011781  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11781u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011783  call 0x11bf0
    X86_AT(c, 0x11783u);
    push32(c, 0x11788u); f_00011bf0(c); X86_RET(c, 0x11788u);
    X86_TICK(c, 16);
    // 011788  add ah, 4
    X86_AT(c, 0x11788u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01178b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1178bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01178d  call 0x11bf0
    X86_AT(c, 0x1178du);
    push32(c, 0x11792u); f_00011bf0(c); X86_RET(c, 0x11792u);
    X86_TICK(c, 16);
    // 011792  add ah, 4
    X86_AT(c, 0x11792u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011795  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11795u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011797  call 0x11bf0
    X86_AT(c, 0x11797u);
    push32(c, 0x1179cu); f_00011bf0(c); X86_RET(c, 0x1179cu);
    X86_TICK(c, 16);
    // 01179c  add ah, 4
    X86_AT(c, 0x1179cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01179f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1179fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117a1  call 0x11bf0
    X86_AT(c, 0x117a1u);
    push32(c, 0x117a6u); f_00011bf0(c); X86_RET(c, 0x117a6u);
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11779u, "ran off the end of a function");
}
void f_0001177e(X86Cpu& c) {
    X86_TICK(c, 16);
    // 01177e  add ah, 4
    X86_AT(c, 0x1177eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011781  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11781u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011783  call 0x11bf0
    X86_AT(c, 0x11783u);
    push32(c, 0x11788u); f_00011bf0(c); X86_RET(c, 0x11788u);
    X86_TICK(c, 16);
    // 011788  add ah, 4
    X86_AT(c, 0x11788u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01178b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1178bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01178d  call 0x11bf0
    X86_AT(c, 0x1178du);
    push32(c, 0x11792u); f_00011bf0(c); X86_RET(c, 0x11792u);
    X86_TICK(c, 16);
    // 011792  add ah, 4
    X86_AT(c, 0x11792u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011795  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11795u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011797  call 0x11bf0
    X86_AT(c, 0x11797u);
    push32(c, 0x1179cu); f_00011bf0(c); X86_RET(c, 0x1179cu);
    X86_TICK(c, 16);
    // 01179c  add ah, 4
    X86_AT(c, 0x1179cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01179f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1179fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117a1  call 0x11bf0
    X86_AT(c, 0x117a1u);
    push32(c, 0x117a6u); f_00011bf0(c); X86_RET(c, 0x117a6u);
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1177eu, "ran off the end of a function");
}
void f_00011781(X86Cpu& c) {
    X86_TICK(c, 14);
    // 011781  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11781u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011783  call 0x11bf0
    X86_AT(c, 0x11783u);
    push32(c, 0x11788u); f_00011bf0(c); X86_RET(c, 0x11788u);
    X86_TICK(c, 16);
    // 011788  add ah, 4
    X86_AT(c, 0x11788u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01178b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1178bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01178d  call 0x11bf0
    X86_AT(c, 0x1178du);
    push32(c, 0x11792u); f_00011bf0(c); X86_RET(c, 0x11792u);
    X86_TICK(c, 16);
    // 011792  add ah, 4
    X86_AT(c, 0x11792u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011795  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11795u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011797  call 0x11bf0
    X86_AT(c, 0x11797u);
    push32(c, 0x1179cu); f_00011bf0(c); X86_RET(c, 0x1179cu);
    X86_TICK(c, 16);
    // 01179c  add ah, 4
    X86_AT(c, 0x1179cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01179f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1179fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117a1  call 0x11bf0
    X86_AT(c, 0x117a1u);
    push32(c, 0x117a6u); f_00011bf0(c); X86_RET(c, 0x117a6u);
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11781u, "ran off the end of a function");
}
void f_00011783(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011783  call 0x11bf0
    X86_AT(c, 0x11783u);
    push32(c, 0x11788u); f_00011bf0(c); X86_RET(c, 0x11788u);
    X86_TICK(c, 16);
    // 011788  add ah, 4
    X86_AT(c, 0x11788u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01178b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1178bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01178d  call 0x11bf0
    X86_AT(c, 0x1178du);
    push32(c, 0x11792u); f_00011bf0(c); X86_RET(c, 0x11792u);
    X86_TICK(c, 16);
    // 011792  add ah, 4
    X86_AT(c, 0x11792u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011795  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11795u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011797  call 0x11bf0
    X86_AT(c, 0x11797u);
    push32(c, 0x1179cu); f_00011bf0(c); X86_RET(c, 0x1179cu);
    X86_TICK(c, 16);
    // 01179c  add ah, 4
    X86_AT(c, 0x1179cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01179f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1179fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117a1  call 0x11bf0
    X86_AT(c, 0x117a1u);
    push32(c, 0x117a6u); f_00011bf0(c); X86_RET(c, 0x117a6u);
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11783u, "ran off the end of a function");
}
void f_00011788(X86Cpu& c) {
    X86_TICK(c, 16);
    // 011788  add ah, 4
    X86_AT(c, 0x11788u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01178b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1178bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01178d  call 0x11bf0
    X86_AT(c, 0x1178du);
    push32(c, 0x11792u); f_00011bf0(c); X86_RET(c, 0x11792u);
    X86_TICK(c, 16);
    // 011792  add ah, 4
    X86_AT(c, 0x11792u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011795  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11795u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011797  call 0x11bf0
    X86_AT(c, 0x11797u);
    push32(c, 0x1179cu); f_00011bf0(c); X86_RET(c, 0x1179cu);
    X86_TICK(c, 16);
    // 01179c  add ah, 4
    X86_AT(c, 0x1179cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01179f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1179fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117a1  call 0x11bf0
    X86_AT(c, 0x117a1u);
    push32(c, 0x117a6u); f_00011bf0(c); X86_RET(c, 0x117a6u);
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11788u, "ran off the end of a function");
}
void f_0001178b(X86Cpu& c) {
    X86_TICK(c, 14);
    // 01178b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1178bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01178d  call 0x11bf0
    X86_AT(c, 0x1178du);
    push32(c, 0x11792u); f_00011bf0(c); X86_RET(c, 0x11792u);
    X86_TICK(c, 16);
    // 011792  add ah, 4
    X86_AT(c, 0x11792u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011795  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11795u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011797  call 0x11bf0
    X86_AT(c, 0x11797u);
    push32(c, 0x1179cu); f_00011bf0(c); X86_RET(c, 0x1179cu);
    X86_TICK(c, 16);
    // 01179c  add ah, 4
    X86_AT(c, 0x1179cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01179f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1179fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117a1  call 0x11bf0
    X86_AT(c, 0x117a1u);
    push32(c, 0x117a6u); f_00011bf0(c); X86_RET(c, 0x117a6u);
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1178bu, "ran off the end of a function");
}
void f_0001178d(X86Cpu& c) {
    X86_TICK(c, 7);
    // 01178d  call 0x11bf0
    X86_AT(c, 0x1178du);
    push32(c, 0x11792u); f_00011bf0(c); X86_RET(c, 0x11792u);
    X86_TICK(c, 16);
    // 011792  add ah, 4
    X86_AT(c, 0x11792u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011795  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11795u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011797  call 0x11bf0
    X86_AT(c, 0x11797u);
    push32(c, 0x1179cu); f_00011bf0(c); X86_RET(c, 0x1179cu);
    X86_TICK(c, 16);
    // 01179c  add ah, 4
    X86_AT(c, 0x1179cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01179f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1179fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117a1  call 0x11bf0
    X86_AT(c, 0x117a1u);
    push32(c, 0x117a6u); f_00011bf0(c); X86_RET(c, 0x117a6u);
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1178du, "ran off the end of a function");
}
void f_00011792(X86Cpu& c) {
    X86_TICK(c, 16);
    // 011792  add ah, 4
    X86_AT(c, 0x11792u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011795  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11795u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011797  call 0x11bf0
    X86_AT(c, 0x11797u);
    push32(c, 0x1179cu); f_00011bf0(c); X86_RET(c, 0x1179cu);
    X86_TICK(c, 16);
    // 01179c  add ah, 4
    X86_AT(c, 0x1179cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01179f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1179fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117a1  call 0x11bf0
    X86_AT(c, 0x117a1u);
    push32(c, 0x117a6u); f_00011bf0(c); X86_RET(c, 0x117a6u);
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11792u, "ran off the end of a function");
}
void f_00011795(X86Cpu& c) {
    X86_TICK(c, 14);
    // 011795  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11795u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011797  call 0x11bf0
    X86_AT(c, 0x11797u);
    push32(c, 0x1179cu); f_00011bf0(c); X86_RET(c, 0x1179cu);
    X86_TICK(c, 16);
    // 01179c  add ah, 4
    X86_AT(c, 0x1179cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01179f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1179fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117a1  call 0x11bf0
    X86_AT(c, 0x117a1u);
    push32(c, 0x117a6u); f_00011bf0(c); X86_RET(c, 0x117a6u);
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11795u, "ran off the end of a function");
}
void f_00011797(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011797  call 0x11bf0
    X86_AT(c, 0x11797u);
    push32(c, 0x1179cu); f_00011bf0(c); X86_RET(c, 0x1179cu);
    X86_TICK(c, 16);
    // 01179c  add ah, 4
    X86_AT(c, 0x1179cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01179f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1179fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117a1  call 0x11bf0
    X86_AT(c, 0x117a1u);
    push32(c, 0x117a6u); f_00011bf0(c); X86_RET(c, 0x117a6u);
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11797u, "ran off the end of a function");
}
void f_0001179c(X86Cpu& c) {
    X86_TICK(c, 16);
    // 01179c  add ah, 4
    X86_AT(c, 0x1179cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01179f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1179fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117a1  call 0x11bf0
    X86_AT(c, 0x117a1u);
    push32(c, 0x117a6u); f_00011bf0(c); X86_RET(c, 0x117a6u);
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1179cu, "ran off the end of a function");
}
void f_0001179f(X86Cpu& c) {
    X86_TICK(c, 14);
    // 01179f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1179fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117a1  call 0x11bf0
    X86_AT(c, 0x117a1u);
    push32(c, 0x117a6u); f_00011bf0(c); X86_RET(c, 0x117a6u);
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1179fu, "ran off the end of a function");
}
void f_000117a1(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0117a1  call 0x11bf0
    X86_AT(c, 0x117a1u);
    push32(c, 0x117a6u); f_00011bf0(c); X86_RET(c, 0x117a6u);
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x117a1u, "ran off the end of a function");
}
void f_000117a6(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x117a6u, "ran off the end of a function");
}
void f_000117a9(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x117a9u, "ran off the end of a function");
}
void f_000117ab(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x117abu, "ran off the end of a function");
}
void f_000117b0(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x117b0u, "ran off the end of a function");
}
void f_000117b3(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x117b3u, "ran off the end of a function");
}
void f_000117b5(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x117b5u, "ran off the end of a function");
}
void f_000117ba(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x117bau, "ran off the end of a function");
}
void f_000117bd(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x117bdu, "ran off the end of a function");
}
void f_000117c0(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x117c0u, "ran off the end of a function");
}
void f_000117c2(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x117c2u, "ran off the end of a function");
}
void f_000117d0(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x117d0u, "ran off the end of a function");
}
void f_000117d5(X86Cpu& c) {
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x117d5u, "ran off the end of a function");
}
void f_000117d6(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x117d6u, "ran off the end of a function");
}
void f_000117d8(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x117d8u, "ran off the end of a function");
}
void f_000117dc(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0117dc  test dh, 0x80
    X86_AT(c, 0x117dcu);
    (void)x86_logic(c, g8(c, 6) & 0x80u, 1);
    // 0117df  jne 0x13557
    X86_AT(c, 0x117dfu);
    if (x86_cc(c, 5)) { goto L_13557; }
    X86_TICK(c, 61);
    // 0117e5  push ecx
    X86_AT(c, 0x117e5u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0117e6  push esi
    X86_AT(c, 0x117e6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0117e7  push edi
    X86_AT(c, 0x117e7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0117e8  push es
    X86_AT(c, 0x117e8u);
    push32(c, c.sreg[0]);
    // 0117e9  push gs
    X86_AT(c, 0x117e9u);
    push32(c, c.sreg[5]);
    // 0117eb  pop es
    X86_AT(c, 0x117ebu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0117ec  movzx ecx, dh
    X86_AT(c, 0x117ecu);
    c.r[1] = g8(c, 6);
    // 0117ef  shl ecx, 4
    X86_AT(c, 0x117efu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 0117f2  lea ecx, [ecx + ecx*2]
    X86_AT(c, 0x117f2u);
    c.r[1] = (uint32_t)(c.r[1] + c.r[1] * 2);
    // 0117f5  lea edi, [edi + ecx*1 + 0x1f4]
    X86_AT(c, 0x117f5u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[1] + 0x1F4u);
    // 0117fc  mov ecx, 0xc
    X86_AT(c, 0x117fcu);
    c.r[1] = 0xCu;
    // 011801  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x11801u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 011803  pop es
    X86_AT(c, 0x11803u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011804  pop edi
    X86_AT(c, 0x11804u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 011805  pop esi
    X86_AT(c, 0x11805u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 011806  pop ecx
    X86_AT(c, 0x11806u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011807  xor al, al
    X86_AT(c, 0x11807u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011809  ret 
    X86_AT(c, 0x11809u);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x117dcu, "ran off the end of a function");
}
void f_000117df(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0117df  jne 0x13557
    X86_AT(c, 0x117dfu);
    if (x86_cc(c, 5)) { goto L_13557; }
    X86_TICK(c, 61);
    // 0117e5  push ecx
    X86_AT(c, 0x117e5u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0117e6  push esi
    X86_AT(c, 0x117e6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0117e7  push edi
    X86_AT(c, 0x117e7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0117e8  push es
    X86_AT(c, 0x117e8u);
    push32(c, c.sreg[0]);
    // 0117e9  push gs
    X86_AT(c, 0x117e9u);
    push32(c, c.sreg[5]);
    // 0117eb  pop es
    X86_AT(c, 0x117ebu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0117ec  movzx ecx, dh
    X86_AT(c, 0x117ecu);
    c.r[1] = g8(c, 6);
    // 0117ef  shl ecx, 4
    X86_AT(c, 0x117efu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 0117f2  lea ecx, [ecx + ecx*2]
    X86_AT(c, 0x117f2u);
    c.r[1] = (uint32_t)(c.r[1] + c.r[1] * 2);
    // 0117f5  lea edi, [edi + ecx*1 + 0x1f4]
    X86_AT(c, 0x117f5u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[1] + 0x1F4u);
    // 0117fc  mov ecx, 0xc
    X86_AT(c, 0x117fcu);
    c.r[1] = 0xCu;
    // 011801  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x11801u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 011803  pop es
    X86_AT(c, 0x11803u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011804  pop edi
    X86_AT(c, 0x11804u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 011805  pop esi
    X86_AT(c, 0x11805u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 011806  pop ecx
    X86_AT(c, 0x11806u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011807  xor al, al
    X86_AT(c, 0x11807u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011809  ret 
    X86_AT(c, 0x11809u);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x117dfu, "ran off the end of a function");
}
void f_000117e5(X86Cpu& c) {
    X86_TICK(c, 61);
    // 0117e5  push ecx
    X86_AT(c, 0x117e5u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0117e6  push esi
    X86_AT(c, 0x117e6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0117e7  push edi
    X86_AT(c, 0x117e7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0117e8  push es
    X86_AT(c, 0x117e8u);
    push32(c, c.sreg[0]);
    // 0117e9  push gs
    X86_AT(c, 0x117e9u);
    push32(c, c.sreg[5]);
    // 0117eb  pop es
    X86_AT(c, 0x117ebu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0117ec  movzx ecx, dh
    X86_AT(c, 0x117ecu);
    c.r[1] = g8(c, 6);
    // 0117ef  shl ecx, 4
    X86_AT(c, 0x117efu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 0117f2  lea ecx, [ecx + ecx*2]
    X86_AT(c, 0x117f2u);
    c.r[1] = (uint32_t)(c.r[1] + c.r[1] * 2);
    // 0117f5  lea edi, [edi + ecx*1 + 0x1f4]
    X86_AT(c, 0x117f5u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[1] + 0x1F4u);
    // 0117fc  mov ecx, 0xc
    X86_AT(c, 0x117fcu);
    c.r[1] = 0xCu;
    // 011801  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x11801u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 011803  pop es
    X86_AT(c, 0x11803u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011804  pop edi
    X86_AT(c, 0x11804u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 011805  pop esi
    X86_AT(c, 0x11805u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 011806  pop ecx
    X86_AT(c, 0x11806u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011807  xor al, al
    X86_AT(c, 0x11807u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011809  ret 
    X86_AT(c, 0x11809u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x117e5u, "ran off the end of a function");
}
void f_000117e6(X86Cpu& c) {
    X86_TICK(c, 59);
    // 0117e6  push esi
    X86_AT(c, 0x117e6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0117e7  push edi
    X86_AT(c, 0x117e7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0117e8  push es
    X86_AT(c, 0x117e8u);
    push32(c, c.sreg[0]);
    // 0117e9  push gs
    X86_AT(c, 0x117e9u);
    push32(c, c.sreg[5]);
    // 0117eb  pop es
    X86_AT(c, 0x117ebu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0117ec  movzx ecx, dh
    X86_AT(c, 0x117ecu);
    c.r[1] = g8(c, 6);
    // 0117ef  shl ecx, 4
    X86_AT(c, 0x117efu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 0117f2  lea ecx, [ecx + ecx*2]
    X86_AT(c, 0x117f2u);
    c.r[1] = (uint32_t)(c.r[1] + c.r[1] * 2);
    // 0117f5  lea edi, [edi + ecx*1 + 0x1f4]
    X86_AT(c, 0x117f5u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[1] + 0x1F4u);
    // 0117fc  mov ecx, 0xc
    X86_AT(c, 0x117fcu);
    c.r[1] = 0xCu;
    // 011801  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x11801u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 011803  pop es
    X86_AT(c, 0x11803u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011804  pop edi
    X86_AT(c, 0x11804u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 011805  pop esi
    X86_AT(c, 0x11805u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 011806  pop ecx
    X86_AT(c, 0x11806u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011807  xor al, al
    X86_AT(c, 0x11807u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011809  ret 
    X86_AT(c, 0x11809u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x117e6u, "ran off the end of a function");
}
void f_000117e7(X86Cpu& c) {
    X86_TICK(c, 57);
    // 0117e7  push edi
    X86_AT(c, 0x117e7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0117e8  push es
    X86_AT(c, 0x117e8u);
    push32(c, c.sreg[0]);
    // 0117e9  push gs
    X86_AT(c, 0x117e9u);
    push32(c, c.sreg[5]);
    // 0117eb  pop es
    X86_AT(c, 0x117ebu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0117ec  movzx ecx, dh
    X86_AT(c, 0x117ecu);
    c.r[1] = g8(c, 6);
    // 0117ef  shl ecx, 4
    X86_AT(c, 0x117efu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 0117f2  lea ecx, [ecx + ecx*2]
    X86_AT(c, 0x117f2u);
    c.r[1] = (uint32_t)(c.r[1] + c.r[1] * 2);
    // 0117f5  lea edi, [edi + ecx*1 + 0x1f4]
    X86_AT(c, 0x117f5u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[1] + 0x1F4u);
    // 0117fc  mov ecx, 0xc
    X86_AT(c, 0x117fcu);
    c.r[1] = 0xCu;
    // 011801  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x11801u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 011803  pop es
    X86_AT(c, 0x11803u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011804  pop edi
    X86_AT(c, 0x11804u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 011805  pop esi
    X86_AT(c, 0x11805u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 011806  pop ecx
    X86_AT(c, 0x11806u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011807  xor al, al
    X86_AT(c, 0x11807u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011809  ret 
    X86_AT(c, 0x11809u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x117e7u, "ran off the end of a function");
}
void f_000117e8(X86Cpu& c) {
    X86_TICK(c, 55);
    // 0117e8  push es
    X86_AT(c, 0x117e8u);
    push32(c, c.sreg[0]);
    // 0117e9  push gs
    X86_AT(c, 0x117e9u);
    push32(c, c.sreg[5]);
    // 0117eb  pop es
    X86_AT(c, 0x117ebu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0117ec  movzx ecx, dh
    X86_AT(c, 0x117ecu);
    c.r[1] = g8(c, 6);
    // 0117ef  shl ecx, 4
    X86_AT(c, 0x117efu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 0117f2  lea ecx, [ecx + ecx*2]
    X86_AT(c, 0x117f2u);
    c.r[1] = (uint32_t)(c.r[1] + c.r[1] * 2);
    // 0117f5  lea edi, [edi + ecx*1 + 0x1f4]
    X86_AT(c, 0x117f5u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[1] + 0x1F4u);
    // 0117fc  mov ecx, 0xc
    X86_AT(c, 0x117fcu);
    c.r[1] = 0xCu;
    // 011801  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x11801u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 011803  pop es
    X86_AT(c, 0x11803u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011804  pop edi
    X86_AT(c, 0x11804u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 011805  pop esi
    X86_AT(c, 0x11805u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 011806  pop ecx
    X86_AT(c, 0x11806u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011807  xor al, al
    X86_AT(c, 0x11807u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011809  ret 
    X86_AT(c, 0x11809u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x117e8u, "ran off the end of a function");
}
void f_000117e9(X86Cpu& c) {
    X86_TICK(c, 53);
    // 0117e9  push gs
    X86_AT(c, 0x117e9u);
    push32(c, c.sreg[5]);
    // 0117eb  pop es
    X86_AT(c, 0x117ebu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0117ec  movzx ecx, dh
    X86_AT(c, 0x117ecu);
    c.r[1] = g8(c, 6);
    // 0117ef  shl ecx, 4
    X86_AT(c, 0x117efu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 0117f2  lea ecx, [ecx + ecx*2]
    X86_AT(c, 0x117f2u);
    c.r[1] = (uint32_t)(c.r[1] + c.r[1] * 2);
    // 0117f5  lea edi, [edi + ecx*1 + 0x1f4]
    X86_AT(c, 0x117f5u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[1] + 0x1F4u);
    // 0117fc  mov ecx, 0xc
    X86_AT(c, 0x117fcu);
    c.r[1] = 0xCu;
    // 011801  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x11801u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 011803  pop es
    X86_AT(c, 0x11803u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011804  pop edi
    X86_AT(c, 0x11804u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 011805  pop esi
    X86_AT(c, 0x11805u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 011806  pop ecx
    X86_AT(c, 0x11806u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011807  xor al, al
    X86_AT(c, 0x11807u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011809  ret 
    X86_AT(c, 0x11809u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x117e9u, "ran off the end of a function");
}
void f_000117eb(X86Cpu& c) {
    X86_TICK(c, 51);
    // 0117eb  pop es
    X86_AT(c, 0x117ebu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0117ec  movzx ecx, dh
    X86_AT(c, 0x117ecu);
    c.r[1] = g8(c, 6);
    // 0117ef  shl ecx, 4
    X86_AT(c, 0x117efu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 0117f2  lea ecx, [ecx + ecx*2]
    X86_AT(c, 0x117f2u);
    c.r[1] = (uint32_t)(c.r[1] + c.r[1] * 2);
    // 0117f5  lea edi, [edi + ecx*1 + 0x1f4]
    X86_AT(c, 0x117f5u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[1] + 0x1F4u);
    // 0117fc  mov ecx, 0xc
    X86_AT(c, 0x117fcu);
    c.r[1] = 0xCu;
    // 011801  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x11801u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 011803  pop es
    X86_AT(c, 0x11803u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011804  pop edi
    X86_AT(c, 0x11804u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 011805  pop esi
    X86_AT(c, 0x11805u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 011806  pop ecx
    X86_AT(c, 0x11806u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011807  xor al, al
    X86_AT(c, 0x11807u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011809  ret 
    X86_AT(c, 0x11809u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x117ebu, "ran off the end of a function");
}
void f_000117ec(X86Cpu& c) {
    X86_TICK(c, 47);
    // 0117ec  movzx ecx, dh
    X86_AT(c, 0x117ecu);
    c.r[1] = g8(c, 6);
    // 0117ef  shl ecx, 4
    X86_AT(c, 0x117efu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 0117f2  lea ecx, [ecx + ecx*2]
    X86_AT(c, 0x117f2u);
    c.r[1] = (uint32_t)(c.r[1] + c.r[1] * 2);
    // 0117f5  lea edi, [edi + ecx*1 + 0x1f4]
    X86_AT(c, 0x117f5u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[1] + 0x1F4u);
    // 0117fc  mov ecx, 0xc
    X86_AT(c, 0x117fcu);
    c.r[1] = 0xCu;
    // 011801  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x11801u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 011803  pop es
    X86_AT(c, 0x11803u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011804  pop edi
    X86_AT(c, 0x11804u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 011805  pop esi
    X86_AT(c, 0x11805u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 011806  pop ecx
    X86_AT(c, 0x11806u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011807  xor al, al
    X86_AT(c, 0x11807u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011809  ret 
    X86_AT(c, 0x11809u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x117ecu, "ran off the end of a function");
}
void f_000117ef(X86Cpu& c) {
    X86_TICK(c, 44);
    // 0117ef  shl ecx, 4
    X86_AT(c, 0x117efu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 0117f2  lea ecx, [ecx + ecx*2]
    X86_AT(c, 0x117f2u);
    c.r[1] = (uint32_t)(c.r[1] + c.r[1] * 2);
    // 0117f5  lea edi, [edi + ecx*1 + 0x1f4]
    X86_AT(c, 0x117f5u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[1] + 0x1F4u);
    // 0117fc  mov ecx, 0xc
    X86_AT(c, 0x117fcu);
    c.r[1] = 0xCu;
    // 011801  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x11801u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 011803  pop es
    X86_AT(c, 0x11803u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011804  pop edi
    X86_AT(c, 0x11804u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 011805  pop esi
    X86_AT(c, 0x11805u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 011806  pop ecx
    X86_AT(c, 0x11806u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011807  xor al, al
    X86_AT(c, 0x11807u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011809  ret 
    X86_AT(c, 0x11809u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x117efu, "ran off the end of a function");
}
void f_000117f2(X86Cpu& c) {
    X86_TICK(c, 41);
    // 0117f2  lea ecx, [ecx + ecx*2]
    X86_AT(c, 0x117f2u);
    c.r[1] = (uint32_t)(c.r[1] + c.r[1] * 2);
    // 0117f5  lea edi, [edi + ecx*1 + 0x1f4]
    X86_AT(c, 0x117f5u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[1] + 0x1F4u);
    // 0117fc  mov ecx, 0xc
    X86_AT(c, 0x117fcu);
    c.r[1] = 0xCu;
    // 011801  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x11801u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 011803  pop es
    X86_AT(c, 0x11803u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011804  pop edi
    X86_AT(c, 0x11804u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 011805  pop esi
    X86_AT(c, 0x11805u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 011806  pop ecx
    X86_AT(c, 0x11806u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011807  xor al, al
    X86_AT(c, 0x11807u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011809  ret 
    X86_AT(c, 0x11809u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x117f2u, "ran off the end of a function");
}
void f_000117f5(X86Cpu& c) {
    X86_TICK(c, 39);
    // 0117f5  lea edi, [edi + ecx*1 + 0x1f4]
    X86_AT(c, 0x117f5u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[1] + 0x1F4u);
    // 0117fc  mov ecx, 0xc
    X86_AT(c, 0x117fcu);
    c.r[1] = 0xCu;
    // 011801  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x11801u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 011803  pop es
    X86_AT(c, 0x11803u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011804  pop edi
    X86_AT(c, 0x11804u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 011805  pop esi
    X86_AT(c, 0x11805u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 011806  pop ecx
    X86_AT(c, 0x11806u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011807  xor al, al
    X86_AT(c, 0x11807u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011809  ret 
    X86_AT(c, 0x11809u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x117f5u, "ran off the end of a function");
}
void f_000117fc(X86Cpu& c) {
    X86_TICK(c, 37);
    // 0117fc  mov ecx, 0xc
    X86_AT(c, 0x117fcu);
    c.r[1] = 0xCu;
    // 011801  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x11801u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 011803  pop es
    X86_AT(c, 0x11803u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011804  pop edi
    X86_AT(c, 0x11804u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 011805  pop esi
    X86_AT(c, 0x11805u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 011806  pop ecx
    X86_AT(c, 0x11806u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011807  xor al, al
    X86_AT(c, 0x11807u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011809  ret 
    X86_AT(c, 0x11809u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x117fcu, "ran off the end of a function");
}
void f_00011801(X86Cpu& c) {
    X86_TICK(c, 35);
    // 011801  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x11801u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 011803  pop es
    X86_AT(c, 0x11803u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011804  pop edi
    X86_AT(c, 0x11804u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 011805  pop esi
    X86_AT(c, 0x11805u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 011806  pop ecx
    X86_AT(c, 0x11806u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011807  xor al, al
    X86_AT(c, 0x11807u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011809  ret 
    X86_AT(c, 0x11809u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11801u, "ran off the end of a function");
}
void f_00011803(X86Cpu& c) {
    X86_TICK(c, 28);
    // 011803  pop es
    X86_AT(c, 0x11803u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011804  pop edi
    X86_AT(c, 0x11804u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 011805  pop esi
    X86_AT(c, 0x11805u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 011806  pop ecx
    X86_AT(c, 0x11806u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011807  xor al, al
    X86_AT(c, 0x11807u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011809  ret 
    X86_AT(c, 0x11809u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11803u, "ran off the end of a function");
}
void f_00011804(X86Cpu& c) {
    X86_TICK(c, 24);
    // 011804  pop edi
    X86_AT(c, 0x11804u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 011805  pop esi
    X86_AT(c, 0x11805u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 011806  pop ecx
    X86_AT(c, 0x11806u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011807  xor al, al
    X86_AT(c, 0x11807u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011809  ret 
    X86_AT(c, 0x11809u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11804u, "ran off the end of a function");
}
void f_00011805(X86Cpu& c) {
    X86_TICK(c, 20);
    // 011805  pop esi
    X86_AT(c, 0x11805u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 011806  pop ecx
    X86_AT(c, 0x11806u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011807  xor al, al
    X86_AT(c, 0x11807u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011809  ret 
    X86_AT(c, 0x11809u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11805u, "ran off the end of a function");
}
void f_00011806(X86Cpu& c) {
    X86_TICK(c, 16);
    // 011806  pop ecx
    X86_AT(c, 0x11806u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011807  xor al, al
    X86_AT(c, 0x11807u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011809  ret 
    X86_AT(c, 0x11809u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11806u, "ran off the end of a function");
}
void f_00011807(X86Cpu& c) {
    X86_TICK(c, 12);
    // 011807  xor al, al
    X86_AT(c, 0x11807u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011809  ret 
    X86_AT(c, 0x11809u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11807u, "ran off the end of a function");
}
void f_00011809(X86Cpu& c) {
    X86_TICK(c, 10);
    // 011809  ret 
    X86_AT(c, 0x11809u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11809u, "ran off the end of a function");
}
void f_0001180c(X86Cpu& c) {
    X86_TICK(c, 7);
    // 01180c  test dh, 0x80
    X86_AT(c, 0x1180cu);
    (void)x86_logic(c, g8(c, 6) & 0x80u, 1);
    // 01180f  jne 0x13557
    X86_AT(c, 0x1180fu);
    if (x86_cc(c, 5)) { goto L_13557; }
    X86_TICK(c, 64);
    // 011815  push ecx
    X86_AT(c, 0x11815u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 011816  push esi
    X86_AT(c, 0x11816u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 011817  push edi
    X86_AT(c, 0x11817u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 011818  push es
    X86_AT(c, 0x11818u);
    push32(c, c.sreg[0]);
    // 011819  push ds
    X86_AT(c, 0x11819u);
    push32(c, c.sreg[3]);
    // 01181a  pop es
    X86_AT(c, 0x1181au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01181b  movzx ecx, dh
    X86_AT(c, 0x1181bu);
    c.r[1] = g8(c, 6);
    // 01181e  shl ecx, 4
    X86_AT(c, 0x1181eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 011821  lea ecx, [ecx + ecx*2 + 0x1f4]
    X86_AT(c, 0x11821u);
    c.r[1] = (uint32_t)(c.r[1] + c.r[1] * 2 + 0x1F4u);
    // 011828  add edi, ecx
    X86_AT(c, 0x11828u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[1], 0, 4); }
    // 01182a  xchg esi, edi
    X86_AT(c, 0x1182au);
    { uint32_t t = c.r[6]; c.r[6] = c.r[7]; c.r[7] = t; }
    // 01182c  mov ecx, 0xc
    X86_AT(c, 0x1182cu);
    c.r[1] = 0xCu;
    // 011831  movsd dword ptr es:[edi], dword ptr gs:[esi]
    X86_AT(c, 0x11831u);
    x86_string(c, 0, 4, 243, 4, 5);
    // 011834  pop es
    X86_AT(c, 0x11834u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011835  pop edi
    X86_AT(c, 0x11835u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 011836  pop esi
    X86_AT(c, 0x11836u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 011837  pop ecx
    X86_AT(c, 0x11837u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011838  xor al, al
    X86_AT(c, 0x11838u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01183a  ret 
    X86_AT(c, 0x1183au);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1180cu, "ran off the end of a function");
}
void f_0001183c(X86Cpu& c) {
    X86_TICK(c, 7);
    // 01183c  cmp bl, 5
    X86_AT(c, 0x1183cu);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 01183f  ja 0x1354c
    X86_AT(c, 0x1183fu);
    if (x86_cc(c, 7)) { goto L_1354c; }
    X86_TICK(c, 38);
    // 011845  pushal 
    X86_AT(c, 0x11845u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 011846  movzx ebx, bl
    X86_AT(c, 0x11846u);
    c.r[3] = g8(c, 3);
    // 011849  lea ebp, [edi + ebx*2 + 0x1e8]
    X86_AT(c, 0x11849u);
    c.r[5] = (uint32_t)(c.r[7] + c.r[3] * 2 + 0x1E8u);
    // 011850  mov bh, byte ptr gs:[edi + ebx*1 + 0x1e0]
    X86_AT(c, 0x11850u);
    s8(c, 7, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1E0u))));
    // 011858  mov ecx, edx
    X86_AT(c, 0x11858u);
    c.r[1] = c.r[2];
    // 01185a  mov dx, 0x4d8
    X86_AT(c, 0x1185au);
    s16(c, 2, 0x4D8u);
    // 01185e  cmp bl, 2
    X86_AT(c, 0x1185eu);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 011861  jbe 0x1186f
    X86_AT(c, 0x11861u);
    if (x86_cc(c, 6)) { goto L_1186f; }
    X86_TICK(c, 6);
    // 011863  add dl, 4
    X86_AT(c, 0x11863u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 011866  add edi, 0xf0
    X86_AT(c, 0x11866u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 01186c  sub bl, 3
    X86_AT(c, 0x1186cu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_1186f:
    X86_TICK(c, 11);
    // 01186f  push edx
    X86_AT(c, 0x1186fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 011870  xor edx, edx
    X86_AT(c, 0x11870u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 011872  test cx, cx
    X86_AT(c, 0x11872u);
    (void)x86_logic(c, (c.r[1] & 0xFFFFu) & (c.r[1] & 0xFFFFu), 2);
    // 011875  jl 0x118a0
    X86_AT(c, 0x11875u);
    if (x86_cc(c, 12)) { goto L_118a0; }
    X86_TICK(c, 5);
    // 011877  jg 0x118fc
    X86_AT(c, 0x11877u);
    if (x86_cc(c, 15)) { goto L_118fc; }
    X86_TICK(c, 9);
    // 01187d  mov word ptr gs:[ebp], dx
    X86_AT(c, 0x1187du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5])), (c.r[2] & 0xFFFFu));
    // 011882  test bh, bh
    X86_AT(c, 0x11882u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 011884  je 0x118f4
    X86_AT(c, 0x11884u);
    if (x86_cc(c, 4)) { goto L_118f4; }
    X86_TICK(c, 61);
    // 011886  movzx eax, bh
    X86_AT(c, 0x11886u);
    c.r[0] = g8(c, 7);
    // 011889  dec eax
    X86_AT(c, 0x11889u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 01188a  mov bh, 0xc
    X86_AT(c, 0x1188au);
    s8(c, 7, 0xCu);
    // 01188c  div bh
    X86_AT(c, 0x1188cu);
    x86_div(c, g8(c, 7), 1, 0x1188cu);
    // 01188e  movzx ecx, ah
    X86_AT(c, 0x1188eu);
    c.r[1] = g8(c, 4);
    // 011891  mov cx, word ptr cs:[ecx*2 + 0x13590]
    X86_AT(c, 0x11891u);
    s16(c, 1, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 2 + 0x13590u))));
    // 01189a  jmp 0x1195e
    X86_AT(c, 0x1189au);
    goto L_1195e;
L_118a0:
    X86_TICK(c, 7);
    // 0118a0  test bh, bh
    X86_AT(c, 0x118a0u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 0118a2  je 0x118f4
    X86_AT(c, 0x118a2u);
    if (x86_cc(c, 4)) { goto L_118f4; }
    X86_TICK(c, 7);
    // 0118a4  cmp cx, 0xe0b8
    X86_AT(c, 0x118a4u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0xE0B8u, 0, 2);
    // 0118a9  jge 0x118af
    X86_AT(c, 0x118a9u);
    if (x86_cc(c, 13)) { goto L_118af; }
    X86_TICK(c, 2);
    // 0118ab  mov cx, 0xe0b8
    X86_AT(c, 0x118abu);
    s16(c, 1, 0xE0B8u);
L_118af:
    X86_TICK(c, 118);
    // 0118af  neg cx
    X86_AT(c, 0x118afu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_neg(c, v, 2)); }
    // 0118b2  mov eax, ecx
    X86_AT(c, 0x118b2u);
    c.r[0] = c.r[1];
    // 0118b4  mov cx, 0xd
    X86_AT(c, 0x118b4u);
    s16(c, 1, 0xDu);
    // 0118b8  div cx
    X86_AT(c, 0x118b8u);
    x86_div(c, (c.r[1] & 0xFFFFu), 2, 0x118b8u);
    // 0118bb  mov si, ax
    X86_AT(c, 0x118bbu);
    s16(c, 6, (c.r[0] & 0xFFFFu));
    // 0118be  movzx eax, bh
    X86_AT(c, 0x118beu);
    c.r[0] = g8(c, 7);
    // 0118c1  dec eax
    X86_AT(c, 0x118c1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0118c2  mov bh, 0xc
    X86_AT(c, 0x118c2u);
    s8(c, 7, 0xCu);
    // 0118c4  div bh
    X86_AT(c, 0x118c4u);
    x86_div(c, g8(c, 7), 1, 0x118c4u);
    // 0118c6  movzx ecx, ah
    X86_AT(c, 0x118c6u);
    c.r[1] = g8(c, 4);
    // 0118c9  mov cx, word ptr cs:[ecx*2 + 0x13590]
    X86_AT(c, 0x118c9u);
    s16(c, 1, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 2 + 0x13590u))));
    // 0118d2  sub cx, si
    X86_AT(c, 0x118d2u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 0118d5  neg si
    X86_AT(c, 0x118d5u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_neg(c, v, 2)); }
    // 0118d8  movzx ebx, bl
    X86_AT(c, 0x118d8u);
    c.r[3] = g8(c, 3);
    // 0118db  mov word ptr gs:[ebp], si
    X86_AT(c, 0x118dbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5])), (c.r[6] & 0xFFFFu));
    // 0118e0  cmp cx, 0x268
    X86_AT(c, 0x118e0u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x268u, 0, 2);
    // 0118e5  jge 0x1195e
    X86_AT(c, 0x118e5u);
    if (x86_cc(c, 13)) { goto L_1195e; }
    X86_TICK(c, 7);
    // 0118e7  test al, al
    X86_AT(c, 0x118e7u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0118e9  je 0x118f4
    X86_AT(c, 0x118e9u);
    if (x86_cc(c, 4)) { goto L_118f4; }
    X86_TICK(c, 11);
    // 0118eb  add cx, 0x268
    X86_AT(c, 0x118ebu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x268u, 0, 2)); }
    // 0118f0  dec eax
    X86_AT(c, 0x118f0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0118f1  jmp 0x1195e
    X86_AT(c, 0x118f1u);
    goto L_1195e;
L_118f4:
    X86_TICK(c, 11);
    // 0118f4  mov cx, 0x268
    X86_AT(c, 0x118f4u);
    s16(c, 1, 0x268u);
    // 0118f8  xor al, al
    X86_AT(c, 0x118f8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0118fa  jmp 0x1195e
    X86_AT(c, 0x118fau);
    goto L_1195e;
L_118fc:
    X86_TICK(c, 7);
    // 0118fc  cmp bh, 0x60
    X86_AT(c, 0x118fcu);
    (void)x86_sub(c, g8(c, 7), 0x60u, 0, 1);
    // 0118ff  jae 0x11958
    X86_AT(c, 0x118ffu);
    if (x86_cc(c, 3)) { goto L_11958; }
    X86_TICK(c, 7);
    // 011901  cmp cx, 0x1f48
    X86_AT(c, 0x11901u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x1F48u, 0, 2);
    // 011906  jle 0x1190c
    X86_AT(c, 0x11906u);
    if (x86_cc(c, 14)) { goto L_1190c; }
    X86_TICK(c, 2);
    // 011908  mov cx, 0x1f48
    X86_AT(c, 0x11908u);
    s16(c, 1, 0x1F48u);
L_1190c:
    X86_TICK(c, 53);
    // 01190c  mov eax, ecx
    X86_AT(c, 0x1190cu);
    c.r[0] = c.r[1];
    // 01190e  mov cx, 0xd
    X86_AT(c, 0x1190eu);
    s16(c, 1, 0xDu);
    // 011912  div cx
    X86_AT(c, 0x11912u);
    x86_div(c, (c.r[1] & 0xFFFFu), 2, 0x11912u);
    // 011915  mov si, ax
    X86_AT(c, 0x11915u);
    s16(c, 6, (c.r[0] & 0xFFFFu));
    // 011918  test bh, bh
    X86_AT(c, 0x11918u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 01191a  jne 0x11924
    X86_AT(c, 0x1191au);
    if (x86_cc(c, 5)) { goto L_11924; }
    X86_TICK(c, 11);
    // 01191c  mov cx, 0x268
    X86_AT(c, 0x1191cu);
    s16(c, 1, 0x268u);
    // 011920  xor al, al
    X86_AT(c, 0x11920u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011922  jmp 0x11938
    X86_AT(c, 0x11922u);
    goto L_11938;
L_11924:
    X86_TICK(c, 54);
    // 011924  movzx eax, bh
    X86_AT(c, 0x11924u);
    c.r[0] = g8(c, 7);
    // 011927  dec eax
    X86_AT(c, 0x11927u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 011928  mov bh, 0xc
    X86_AT(c, 0x11928u);
    s8(c, 7, 0xCu);
    // 01192a  div bh
    X86_AT(c, 0x1192au);
    x86_div(c, g8(c, 7), 1, 0x1192au);
    // 01192c  movzx ecx, ah
    X86_AT(c, 0x1192cu);
    c.r[1] = g8(c, 4);
    // 01192f  mov cx, word ptr cs:[ecx*2 + 0x13590]
    X86_AT(c, 0x1192fu);
    s16(c, 1, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 2 + 0x13590u))));
L_11938:
    X86_TICK(c, 14);
    // 011938  add cx, si
    X86_AT(c, 0x11938u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 01193b  movzx ebx, bl
    X86_AT(c, 0x1193bu);
    c.r[3] = g8(c, 3);
    // 01193e  mov word ptr gs:[ebp], si
    X86_AT(c, 0x1193eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5])), (c.r[6] & 0xFFFFu));
    // 011943  cmp cx, 0x4d0
    X86_AT(c, 0x11943u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x4D0u, 0, 2);
    // 011948  jbe 0x11980
    X86_AT(c, 0x11948u);
    if (x86_cc(c, 6)) { goto L_11980; }
    X86_TICK(c, 7);
    // 01194a  cmp al, 7
    X86_AT(c, 0x1194au);
    (void)x86_sub(c, g8(c, 0), 0x7u, 0, 1);
    // 01194c  jae 0x11958
    X86_AT(c, 0x1194cu);
    if (x86_cc(c, 3)) { goto L_11958; }
    X86_TICK(c, 11);
    // 01194e  sub cx, 0x268
    X86_AT(c, 0x1194eu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, 0x268u, 0, 2)); }
    // 011953  inc eax
    X86_AT(c, 0x11953u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011954  jmp 0x1195e
    X86_AT(c, 0x11954u);
    goto L_1195e;
L_11958:
    X86_TICK(c, 4);
    // 011958  mov cx, 0x48c
    X86_AT(c, 0x11958u);
    s16(c, 1, 0x48Cu);
    // 01195c  mov al, 7
    X86_AT(c, 0x1195cu);
    s8(c, 0, 0x7u);
L_1195e:
    X86_TICK(c, 22);
    // 01195e  pop edx
    X86_AT(c, 0x1195eu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01195f  shl al, 3
    X86_AT(c, 0x1195fu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 0, r); }
    // 011962  or ch, al
    X86_AT(c, 0x11962u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v | g8(c, 0), 1)); }
    // 011964  mov ah, 0xa4
    X86_AT(c, 0x11964u);
    s8(c, 4, 0xA4u);
    // 011966  add ah, bl
    X86_AT(c, 0x11966u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011968  mov al, ch
    X86_AT(c, 0x11968u);
    s8(c, 0, g8(c, 5));
    // 01196a  call 0x11bf0
    X86_AT(c, 0x1196au);
    push32(c, 0x1196fu); f_00011bf0(c); X86_RET(c, 0x1196fu);
    X86_TICK(c, 11);
    // 01196f  sub ah, 4
    X86_AT(c, 0x1196fu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, 0x4u, 0, 1)); }
    // 011972  mov al, cl
    X86_AT(c, 0x11972u);
    s8(c, 0, g8(c, 1));
    // 011974  call 0x11bf0
    X86_AT(c, 0x11974u);
    push32(c, 0x11979u); f_00011bf0(c); X86_RET(c, 0x11979u);
    X86_TICK(c, 36);
    // 011979  popal 
    X86_AT(c, 0x11979u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 01197a  xor al, al
    X86_AT(c, 0x1197au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01197c  ret 
    X86_AT(c, 0x1197cu);
    c.eip = pop32(c); return;
L_11980:
    X86_TICK(c, 7);
    // 011980  cmp al, 7
    X86_AT(c, 0x11980u);
    (void)x86_sub(c, g8(c, 0), 0x7u, 0, 1);
    // 011982  jb 0x1195e
    X86_AT(c, 0x11982u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x1195eu); goto L_1195e; }
    X86_TICK(c, 7);
    // 011984  cmp cx, 0x48c
    X86_AT(c, 0x11984u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x48Cu, 0, 2);
    // 011989  jbe 0x1195e
    X86_AT(c, 0x11989u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x1195eu); goto L_1195e; }
    X86_TICK(c, 9);
    // 01198b  mov cx, 0x48c
    X86_AT(c, 0x1198bu);
    s16(c, 1, 0x48Cu);
    // 01198f  jmp 0x1195e
    X86_AT(c, 0x1198fu);
    X86_POLL(c, 0x1195eu); goto L_1195e;
L_1354c:
    X86_TICK(c, 12);
    // 01354c  mov al, 1
    X86_AT(c, 0x1354cu);
    s8(c, 0, 0x1u);
    // 01354e  ret 
    X86_AT(c, 0x1354eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1183cu, "ran off the end of a function");
}
void f_00011994(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011994  cmp bl, 5
    X86_AT(c, 0x11994u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 011997  ja 0x1354c
    X86_AT(c, 0x11997u);
    if (x86_cc(c, 7)) { goto L_1354c; }
    X86_TICK(c, 7);
    // 01199d  test dl, 0x80
    X86_AT(c, 0x1199du);
    (void)x86_logic(c, g8(c, 2) & 0x80u, 1);
    // 0119a0  jne 0x13557
    X86_AT(c, 0x119a0u);
    if (x86_cc(c, 5)) { goto L_13557; }
    X86_TICK(c, 29);
    // 0119a6  pushal 
    X86_AT(c, 0x119a6u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0119a7  mov cl, dl
    X86_AT(c, 0x119a7u);
    s8(c, 1, g8(c, 2));
    // 0119a9  mov dx, 0x4d8
    X86_AT(c, 0x119a9u);
    s16(c, 2, 0x4D8u);
    // 0119ad  cmp bl, 2
    X86_AT(c, 0x119adu);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0119b0  jbe 0x119be
    X86_AT(c, 0x119b0u);
    if (x86_cc(c, 6)) { goto L_119be; }
    X86_TICK(c, 6);
    // 0119b2  add dl, 4
    X86_AT(c, 0x119b2u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 0119b5  add edi, 0xf0
    X86_AT(c, 0x119b5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 0119bb  sub bl, 3
    X86_AT(c, 0x119bbu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_119be:
    X86_TICK(c, 22);
    // 0119be  movzx esi, bl
    X86_AT(c, 0x119beu);
    c.r[6] = g8(c, 3);
    // 0119c1  mov byte ptr gs:[edi + esi*1 + 0xd0], cl
    X86_AT(c, 0x119c1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u)), g8(c, 1));
    // 0119c9  mov al, byte ptr gs:[edi + esi*1 + 0xb0]
    X86_AT(c, 0x119c9u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xB0u))));
    // 0119d1  and eax, 7
    X86_AT(c, 0x119d1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 0119d6  mov bh, byte ptr cs:[eax + 0x135a8]
    X86_AT(c, 0x119d6u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x135A8u))));
    // 0119dd  add bh, bh
    X86_AT(c, 0x119ddu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0119df  jae 0x11a08
    X86_AT(c, 0x119dfu);
    if (x86_cc(c, 3)) { goto L_11a08; }
    X86_TICK(c, 73);
    // 0119e1  mov al, byte ptr gs:[edi + esi*1 + 0xc0]
    X86_AT(c, 0x119e1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC0u))));
    // 0119e9  xor al, 0x7f
    X86_AT(c, 0x119e9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119eb  mul cl
    X86_AT(c, 0x119ebu);
    x86_mul(c, g8(c, 1), 1);
    // 0119ed  shr eax, 7
    X86_AT(c, 0x119edu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119f0  inc eax
    X86_AT(c, 0x119f0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119f1  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x119f1u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 0119f9  shr eax, 7
    X86_AT(c, 0x119f9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119fc  inc eax
    X86_AT(c, 0x119fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119fd  xor al, 0x7f
    X86_AT(c, 0x119fdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119ff  mov ah, 0x40
    X86_AT(c, 0x119ffu);
    s8(c, 4, 0x40u);
    // 011a01  add ah, bl
    X86_AT(c, 0x11a01u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a03  call 0x11bf0
    X86_AT(c, 0x11a03u);
    push32(c, 0x11a08u); f_00011bf0(c); X86_RET(c, 0x11a08u);
L_11a08:
    X86_TICK(c, 7);
    // 011a08  add bh, bh
    X86_AT(c, 0x11a08u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a0a  jae 0x11a33
    X86_AT(c, 0x11a0au);
    if (x86_cc(c, 3)) { goto L_11a33; }
    X86_TICK(c, 73);
    // 011a0c  mov al, byte ptr gs:[edi + esi*1 + 0xc4]
    X86_AT(c, 0x11a0cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC4u))));
    // 011a14  xor al, 0x7f
    X86_AT(c, 0x11a14u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a16  mul cl
    X86_AT(c, 0x11a16u);
    x86_mul(c, g8(c, 1), 1);
    // 011a18  shr eax, 7
    X86_AT(c, 0x11a18u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a1b  inc eax
    X86_AT(c, 0x11a1bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a1c  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a1cu);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a24  shr eax, 7
    X86_AT(c, 0x11a24u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a27  inc eax
    X86_AT(c, 0x11a27u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a28  xor al, 0x7f
    X86_AT(c, 0x11a28u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a2a  mov ah, 0x44
    X86_AT(c, 0x11a2au);
    s8(c, 4, 0x44u);
    // 011a2c  add ah, bl
    X86_AT(c, 0x11a2cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a2e  call 0x11bf0
    X86_AT(c, 0x11a2eu);
    push32(c, 0x11a33u); f_00011bf0(c); X86_RET(c, 0x11a33u);
L_11a33:
    X86_TICK(c, 7);
    // 011a33  add bh, bh
    X86_AT(c, 0x11a33u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a35  jae 0x11a5e
    X86_AT(c, 0x11a35u);
    if (x86_cc(c, 3)) { goto L_11a5e; }
    X86_TICK(c, 73);
    // 011a37  mov al, byte ptr gs:[edi + esi*1 + 0xc8]
    X86_AT(c, 0x11a37u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC8u))));
    // 011a3f  xor al, 0x7f
    X86_AT(c, 0x11a3fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a41  mul cl
    X86_AT(c, 0x11a41u);
    x86_mul(c, g8(c, 1), 1);
    // 011a43  shr eax, 7
    X86_AT(c, 0x11a43u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a46  inc eax
    X86_AT(c, 0x11a46u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a47  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a47u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a4f  shr eax, 7
    X86_AT(c, 0x11a4fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a52  inc eax
    X86_AT(c, 0x11a52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a53  xor al, 0x7f
    X86_AT(c, 0x11a53u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a55  mov ah, 0x48
    X86_AT(c, 0x11a55u);
    s8(c, 4, 0x48u);
    // 011a57  add ah, bl
    X86_AT(c, 0x11a57u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a59  call 0x11bf0
    X86_AT(c, 0x11a59u);
    push32(c, 0x11a5eu); f_00011bf0(c); X86_RET(c, 0x11a5eu);
L_11a5e:
    X86_TICK(c, 7);
    // 011a5e  add bh, bh
    X86_AT(c, 0x11a5eu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a60  jae 0x11a89
    X86_AT(c, 0x11a60u);
    if (x86_cc(c, 3)) { goto L_11a89; }
    X86_TICK(c, 73);
    // 011a62  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x11a62u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
L_11a89:
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
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
    x86_fault(c, 0x11994u, "ran off the end of a function");
}
void f_00011997(X86Cpu& c) {
    X86_TICK(c, 5);
    // 011997  ja 0x1354c
    X86_AT(c, 0x11997u);
    if (x86_cc(c, 7)) { goto L_1354c; }
    X86_TICK(c, 7);
    // 01199d  test dl, 0x80
    X86_AT(c, 0x1199du);
    (void)x86_logic(c, g8(c, 2) & 0x80u, 1);
    // 0119a0  jne 0x13557
    X86_AT(c, 0x119a0u);
    if (x86_cc(c, 5)) { goto L_13557; }
    X86_TICK(c, 29);
    // 0119a6  pushal 
    X86_AT(c, 0x119a6u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0119a7  mov cl, dl
    X86_AT(c, 0x119a7u);
    s8(c, 1, g8(c, 2));
    // 0119a9  mov dx, 0x4d8
    X86_AT(c, 0x119a9u);
    s16(c, 2, 0x4D8u);
    // 0119ad  cmp bl, 2
    X86_AT(c, 0x119adu);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0119b0  jbe 0x119be
    X86_AT(c, 0x119b0u);
    if (x86_cc(c, 6)) { goto L_119be; }
    X86_TICK(c, 6);
    // 0119b2  add dl, 4
    X86_AT(c, 0x119b2u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 0119b5  add edi, 0xf0
    X86_AT(c, 0x119b5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 0119bb  sub bl, 3
    X86_AT(c, 0x119bbu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_119be:
    X86_TICK(c, 22);
    // 0119be  movzx esi, bl
    X86_AT(c, 0x119beu);
    c.r[6] = g8(c, 3);
    // 0119c1  mov byte ptr gs:[edi + esi*1 + 0xd0], cl
    X86_AT(c, 0x119c1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u)), g8(c, 1));
    // 0119c9  mov al, byte ptr gs:[edi + esi*1 + 0xb0]
    X86_AT(c, 0x119c9u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xB0u))));
    // 0119d1  and eax, 7
    X86_AT(c, 0x119d1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 0119d6  mov bh, byte ptr cs:[eax + 0x135a8]
    X86_AT(c, 0x119d6u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x135A8u))));
    // 0119dd  add bh, bh
    X86_AT(c, 0x119ddu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0119df  jae 0x11a08
    X86_AT(c, 0x119dfu);
    if (x86_cc(c, 3)) { goto L_11a08; }
    X86_TICK(c, 73);
    // 0119e1  mov al, byte ptr gs:[edi + esi*1 + 0xc0]
    X86_AT(c, 0x119e1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC0u))));
    // 0119e9  xor al, 0x7f
    X86_AT(c, 0x119e9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119eb  mul cl
    X86_AT(c, 0x119ebu);
    x86_mul(c, g8(c, 1), 1);
    // 0119ed  shr eax, 7
    X86_AT(c, 0x119edu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119f0  inc eax
    X86_AT(c, 0x119f0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119f1  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x119f1u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 0119f9  shr eax, 7
    X86_AT(c, 0x119f9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119fc  inc eax
    X86_AT(c, 0x119fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119fd  xor al, 0x7f
    X86_AT(c, 0x119fdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119ff  mov ah, 0x40
    X86_AT(c, 0x119ffu);
    s8(c, 4, 0x40u);
    // 011a01  add ah, bl
    X86_AT(c, 0x11a01u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a03  call 0x11bf0
    X86_AT(c, 0x11a03u);
    push32(c, 0x11a08u); f_00011bf0(c); X86_RET(c, 0x11a08u);
L_11a08:
    X86_TICK(c, 7);
    // 011a08  add bh, bh
    X86_AT(c, 0x11a08u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a0a  jae 0x11a33
    X86_AT(c, 0x11a0au);
    if (x86_cc(c, 3)) { goto L_11a33; }
    X86_TICK(c, 73);
    // 011a0c  mov al, byte ptr gs:[edi + esi*1 + 0xc4]
    X86_AT(c, 0x11a0cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC4u))));
    // 011a14  xor al, 0x7f
    X86_AT(c, 0x11a14u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a16  mul cl
    X86_AT(c, 0x11a16u);
    x86_mul(c, g8(c, 1), 1);
    // 011a18  shr eax, 7
    X86_AT(c, 0x11a18u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a1b  inc eax
    X86_AT(c, 0x11a1bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a1c  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a1cu);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a24  shr eax, 7
    X86_AT(c, 0x11a24u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a27  inc eax
    X86_AT(c, 0x11a27u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a28  xor al, 0x7f
    X86_AT(c, 0x11a28u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a2a  mov ah, 0x44
    X86_AT(c, 0x11a2au);
    s8(c, 4, 0x44u);
    // 011a2c  add ah, bl
    X86_AT(c, 0x11a2cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a2e  call 0x11bf0
    X86_AT(c, 0x11a2eu);
    push32(c, 0x11a33u); f_00011bf0(c); X86_RET(c, 0x11a33u);
L_11a33:
    X86_TICK(c, 7);
    // 011a33  add bh, bh
    X86_AT(c, 0x11a33u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a35  jae 0x11a5e
    X86_AT(c, 0x11a35u);
    if (x86_cc(c, 3)) { goto L_11a5e; }
    X86_TICK(c, 73);
    // 011a37  mov al, byte ptr gs:[edi + esi*1 + 0xc8]
    X86_AT(c, 0x11a37u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC8u))));
    // 011a3f  xor al, 0x7f
    X86_AT(c, 0x11a3fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a41  mul cl
    X86_AT(c, 0x11a41u);
    x86_mul(c, g8(c, 1), 1);
    // 011a43  shr eax, 7
    X86_AT(c, 0x11a43u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a46  inc eax
    X86_AT(c, 0x11a46u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a47  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a47u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a4f  shr eax, 7
    X86_AT(c, 0x11a4fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a52  inc eax
    X86_AT(c, 0x11a52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a53  xor al, 0x7f
    X86_AT(c, 0x11a53u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a55  mov ah, 0x48
    X86_AT(c, 0x11a55u);
    s8(c, 4, 0x48u);
    // 011a57  add ah, bl
    X86_AT(c, 0x11a57u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a59  call 0x11bf0
    X86_AT(c, 0x11a59u);
    push32(c, 0x11a5eu); f_00011bf0(c); X86_RET(c, 0x11a5eu);
L_11a5e:
    X86_TICK(c, 7);
    // 011a5e  add bh, bh
    X86_AT(c, 0x11a5eu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a60  jae 0x11a89
    X86_AT(c, 0x11a60u);
    if (x86_cc(c, 3)) { goto L_11a89; }
    X86_TICK(c, 73);
    // 011a62  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x11a62u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
L_11a89:
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
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
    x86_fault(c, 0x11997u, "ran off the end of a function");
}
void f_0001199d(X86Cpu& c) {
    X86_TICK(c, 7);
    // 01199d  test dl, 0x80
    X86_AT(c, 0x1199du);
    (void)x86_logic(c, g8(c, 2) & 0x80u, 1);
    // 0119a0  jne 0x13557
    X86_AT(c, 0x119a0u);
    if (x86_cc(c, 5)) { goto L_13557; }
    X86_TICK(c, 29);
    // 0119a6  pushal 
    X86_AT(c, 0x119a6u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0119a7  mov cl, dl
    X86_AT(c, 0x119a7u);
    s8(c, 1, g8(c, 2));
    // 0119a9  mov dx, 0x4d8
    X86_AT(c, 0x119a9u);
    s16(c, 2, 0x4D8u);
    // 0119ad  cmp bl, 2
    X86_AT(c, 0x119adu);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0119b0  jbe 0x119be
    X86_AT(c, 0x119b0u);
    if (x86_cc(c, 6)) { goto L_119be; }
    X86_TICK(c, 6);
    // 0119b2  add dl, 4
    X86_AT(c, 0x119b2u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 0119b5  add edi, 0xf0
    X86_AT(c, 0x119b5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 0119bb  sub bl, 3
    X86_AT(c, 0x119bbu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_119be:
    X86_TICK(c, 22);
    // 0119be  movzx esi, bl
    X86_AT(c, 0x119beu);
    c.r[6] = g8(c, 3);
    // 0119c1  mov byte ptr gs:[edi + esi*1 + 0xd0], cl
    X86_AT(c, 0x119c1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u)), g8(c, 1));
    // 0119c9  mov al, byte ptr gs:[edi + esi*1 + 0xb0]
    X86_AT(c, 0x119c9u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xB0u))));
    // 0119d1  and eax, 7
    X86_AT(c, 0x119d1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 0119d6  mov bh, byte ptr cs:[eax + 0x135a8]
    X86_AT(c, 0x119d6u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x135A8u))));
    // 0119dd  add bh, bh
    X86_AT(c, 0x119ddu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0119df  jae 0x11a08
    X86_AT(c, 0x119dfu);
    if (x86_cc(c, 3)) { goto L_11a08; }
    X86_TICK(c, 73);
    // 0119e1  mov al, byte ptr gs:[edi + esi*1 + 0xc0]
    X86_AT(c, 0x119e1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC0u))));
    // 0119e9  xor al, 0x7f
    X86_AT(c, 0x119e9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119eb  mul cl
    X86_AT(c, 0x119ebu);
    x86_mul(c, g8(c, 1), 1);
    // 0119ed  shr eax, 7
    X86_AT(c, 0x119edu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119f0  inc eax
    X86_AT(c, 0x119f0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119f1  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x119f1u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 0119f9  shr eax, 7
    X86_AT(c, 0x119f9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119fc  inc eax
    X86_AT(c, 0x119fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119fd  xor al, 0x7f
    X86_AT(c, 0x119fdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119ff  mov ah, 0x40
    X86_AT(c, 0x119ffu);
    s8(c, 4, 0x40u);
    // 011a01  add ah, bl
    X86_AT(c, 0x11a01u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a03  call 0x11bf0
    X86_AT(c, 0x11a03u);
    push32(c, 0x11a08u); f_00011bf0(c); X86_RET(c, 0x11a08u);
L_11a08:
    X86_TICK(c, 7);
    // 011a08  add bh, bh
    X86_AT(c, 0x11a08u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a0a  jae 0x11a33
    X86_AT(c, 0x11a0au);
    if (x86_cc(c, 3)) { goto L_11a33; }
    X86_TICK(c, 73);
    // 011a0c  mov al, byte ptr gs:[edi + esi*1 + 0xc4]
    X86_AT(c, 0x11a0cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC4u))));
    // 011a14  xor al, 0x7f
    X86_AT(c, 0x11a14u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a16  mul cl
    X86_AT(c, 0x11a16u);
    x86_mul(c, g8(c, 1), 1);
    // 011a18  shr eax, 7
    X86_AT(c, 0x11a18u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a1b  inc eax
    X86_AT(c, 0x11a1bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a1c  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a1cu);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a24  shr eax, 7
    X86_AT(c, 0x11a24u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a27  inc eax
    X86_AT(c, 0x11a27u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a28  xor al, 0x7f
    X86_AT(c, 0x11a28u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a2a  mov ah, 0x44
    X86_AT(c, 0x11a2au);
    s8(c, 4, 0x44u);
    // 011a2c  add ah, bl
    X86_AT(c, 0x11a2cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a2e  call 0x11bf0
    X86_AT(c, 0x11a2eu);
    push32(c, 0x11a33u); f_00011bf0(c); X86_RET(c, 0x11a33u);
L_11a33:
    X86_TICK(c, 7);
    // 011a33  add bh, bh
    X86_AT(c, 0x11a33u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a35  jae 0x11a5e
    X86_AT(c, 0x11a35u);
    if (x86_cc(c, 3)) { goto L_11a5e; }
    X86_TICK(c, 73);
    // 011a37  mov al, byte ptr gs:[edi + esi*1 + 0xc8]
    X86_AT(c, 0x11a37u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC8u))));
    // 011a3f  xor al, 0x7f
    X86_AT(c, 0x11a3fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a41  mul cl
    X86_AT(c, 0x11a41u);
    x86_mul(c, g8(c, 1), 1);
    // 011a43  shr eax, 7
    X86_AT(c, 0x11a43u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a46  inc eax
    X86_AT(c, 0x11a46u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a47  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a47u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a4f  shr eax, 7
    X86_AT(c, 0x11a4fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a52  inc eax
    X86_AT(c, 0x11a52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a53  xor al, 0x7f
    X86_AT(c, 0x11a53u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a55  mov ah, 0x48
    X86_AT(c, 0x11a55u);
    s8(c, 4, 0x48u);
    // 011a57  add ah, bl
    X86_AT(c, 0x11a57u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a59  call 0x11bf0
    X86_AT(c, 0x11a59u);
    push32(c, 0x11a5eu); f_00011bf0(c); X86_RET(c, 0x11a5eu);
L_11a5e:
    X86_TICK(c, 7);
    // 011a5e  add bh, bh
    X86_AT(c, 0x11a5eu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a60  jae 0x11a89
    X86_AT(c, 0x11a60u);
    if (x86_cc(c, 3)) { goto L_11a89; }
    X86_TICK(c, 73);
    // 011a62  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x11a62u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
L_11a89:
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1199du, "ran off the end of a function");
}
void f_000119a0(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0119a0  jne 0x13557
    X86_AT(c, 0x119a0u);
    if (x86_cc(c, 5)) { goto L_13557; }
    X86_TICK(c, 29);
    // 0119a6  pushal 
    X86_AT(c, 0x119a6u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0119a7  mov cl, dl
    X86_AT(c, 0x119a7u);
    s8(c, 1, g8(c, 2));
    // 0119a9  mov dx, 0x4d8
    X86_AT(c, 0x119a9u);
    s16(c, 2, 0x4D8u);
    // 0119ad  cmp bl, 2
    X86_AT(c, 0x119adu);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0119b0  jbe 0x119be
    X86_AT(c, 0x119b0u);
    if (x86_cc(c, 6)) { goto L_119be; }
    X86_TICK(c, 6);
    // 0119b2  add dl, 4
    X86_AT(c, 0x119b2u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 0119b5  add edi, 0xf0
    X86_AT(c, 0x119b5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 0119bb  sub bl, 3
    X86_AT(c, 0x119bbu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_119be:
    X86_TICK(c, 22);
    // 0119be  movzx esi, bl
    X86_AT(c, 0x119beu);
    c.r[6] = g8(c, 3);
    // 0119c1  mov byte ptr gs:[edi + esi*1 + 0xd0], cl
    X86_AT(c, 0x119c1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u)), g8(c, 1));
    // 0119c9  mov al, byte ptr gs:[edi + esi*1 + 0xb0]
    X86_AT(c, 0x119c9u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xB0u))));
    // 0119d1  and eax, 7
    X86_AT(c, 0x119d1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 0119d6  mov bh, byte ptr cs:[eax + 0x135a8]
    X86_AT(c, 0x119d6u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x135A8u))));
    // 0119dd  add bh, bh
    X86_AT(c, 0x119ddu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0119df  jae 0x11a08
    X86_AT(c, 0x119dfu);
    if (x86_cc(c, 3)) { goto L_11a08; }
    X86_TICK(c, 73);
    // 0119e1  mov al, byte ptr gs:[edi + esi*1 + 0xc0]
    X86_AT(c, 0x119e1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC0u))));
    // 0119e9  xor al, 0x7f
    X86_AT(c, 0x119e9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119eb  mul cl
    X86_AT(c, 0x119ebu);
    x86_mul(c, g8(c, 1), 1);
    // 0119ed  shr eax, 7
    X86_AT(c, 0x119edu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119f0  inc eax
    X86_AT(c, 0x119f0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119f1  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x119f1u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 0119f9  shr eax, 7
    X86_AT(c, 0x119f9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119fc  inc eax
    X86_AT(c, 0x119fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119fd  xor al, 0x7f
    X86_AT(c, 0x119fdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119ff  mov ah, 0x40
    X86_AT(c, 0x119ffu);
    s8(c, 4, 0x40u);
    // 011a01  add ah, bl
    X86_AT(c, 0x11a01u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a03  call 0x11bf0
    X86_AT(c, 0x11a03u);
    push32(c, 0x11a08u); f_00011bf0(c); X86_RET(c, 0x11a08u);
L_11a08:
    X86_TICK(c, 7);
    // 011a08  add bh, bh
    X86_AT(c, 0x11a08u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a0a  jae 0x11a33
    X86_AT(c, 0x11a0au);
    if (x86_cc(c, 3)) { goto L_11a33; }
    X86_TICK(c, 73);
    // 011a0c  mov al, byte ptr gs:[edi + esi*1 + 0xc4]
    X86_AT(c, 0x11a0cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC4u))));
    // 011a14  xor al, 0x7f
    X86_AT(c, 0x11a14u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a16  mul cl
    X86_AT(c, 0x11a16u);
    x86_mul(c, g8(c, 1), 1);
    // 011a18  shr eax, 7
    X86_AT(c, 0x11a18u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a1b  inc eax
    X86_AT(c, 0x11a1bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a1c  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a1cu);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a24  shr eax, 7
    X86_AT(c, 0x11a24u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a27  inc eax
    X86_AT(c, 0x11a27u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a28  xor al, 0x7f
    X86_AT(c, 0x11a28u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a2a  mov ah, 0x44
    X86_AT(c, 0x11a2au);
    s8(c, 4, 0x44u);
    // 011a2c  add ah, bl
    X86_AT(c, 0x11a2cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a2e  call 0x11bf0
    X86_AT(c, 0x11a2eu);
    push32(c, 0x11a33u); f_00011bf0(c); X86_RET(c, 0x11a33u);
L_11a33:
    X86_TICK(c, 7);
    // 011a33  add bh, bh
    X86_AT(c, 0x11a33u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a35  jae 0x11a5e
    X86_AT(c, 0x11a35u);
    if (x86_cc(c, 3)) { goto L_11a5e; }
    X86_TICK(c, 73);
    // 011a37  mov al, byte ptr gs:[edi + esi*1 + 0xc8]
    X86_AT(c, 0x11a37u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC8u))));
    // 011a3f  xor al, 0x7f
    X86_AT(c, 0x11a3fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a41  mul cl
    X86_AT(c, 0x11a41u);
    x86_mul(c, g8(c, 1), 1);
    // 011a43  shr eax, 7
    X86_AT(c, 0x11a43u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a46  inc eax
    X86_AT(c, 0x11a46u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a47  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a47u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a4f  shr eax, 7
    X86_AT(c, 0x11a4fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a52  inc eax
    X86_AT(c, 0x11a52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a53  xor al, 0x7f
    X86_AT(c, 0x11a53u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a55  mov ah, 0x48
    X86_AT(c, 0x11a55u);
    s8(c, 4, 0x48u);
    // 011a57  add ah, bl
    X86_AT(c, 0x11a57u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a59  call 0x11bf0
    X86_AT(c, 0x11a59u);
    push32(c, 0x11a5eu); f_00011bf0(c); X86_RET(c, 0x11a5eu);
L_11a5e:
    X86_TICK(c, 7);
    // 011a5e  add bh, bh
    X86_AT(c, 0x11a5eu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a60  jae 0x11a89
    X86_AT(c, 0x11a60u);
    if (x86_cc(c, 3)) { goto L_11a89; }
    X86_TICK(c, 73);
    // 011a62  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x11a62u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
L_11a89:
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x119a0u, "ran off the end of a function");
}
void f_000119a6(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0119a6  pushal 
    X86_AT(c, 0x119a6u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0119a7  mov cl, dl
    X86_AT(c, 0x119a7u);
    s8(c, 1, g8(c, 2));
    // 0119a9  mov dx, 0x4d8
    X86_AT(c, 0x119a9u);
    s16(c, 2, 0x4D8u);
    // 0119ad  cmp bl, 2
    X86_AT(c, 0x119adu);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0119b0  jbe 0x119be
    X86_AT(c, 0x119b0u);
    if (x86_cc(c, 6)) { goto L_119be; }
    X86_TICK(c, 6);
    // 0119b2  add dl, 4
    X86_AT(c, 0x119b2u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 0119b5  add edi, 0xf0
    X86_AT(c, 0x119b5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 0119bb  sub bl, 3
    X86_AT(c, 0x119bbu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_119be:
    X86_TICK(c, 22);
    // 0119be  movzx esi, bl
    X86_AT(c, 0x119beu);
    c.r[6] = g8(c, 3);
    // 0119c1  mov byte ptr gs:[edi + esi*1 + 0xd0], cl
    X86_AT(c, 0x119c1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u)), g8(c, 1));
    // 0119c9  mov al, byte ptr gs:[edi + esi*1 + 0xb0]
    X86_AT(c, 0x119c9u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xB0u))));
    // 0119d1  and eax, 7
    X86_AT(c, 0x119d1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 0119d6  mov bh, byte ptr cs:[eax + 0x135a8]
    X86_AT(c, 0x119d6u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x135A8u))));
    // 0119dd  add bh, bh
    X86_AT(c, 0x119ddu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0119df  jae 0x11a08
    X86_AT(c, 0x119dfu);
    if (x86_cc(c, 3)) { goto L_11a08; }
    X86_TICK(c, 73);
    // 0119e1  mov al, byte ptr gs:[edi + esi*1 + 0xc0]
    X86_AT(c, 0x119e1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC0u))));
    // 0119e9  xor al, 0x7f
    X86_AT(c, 0x119e9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119eb  mul cl
    X86_AT(c, 0x119ebu);
    x86_mul(c, g8(c, 1), 1);
    // 0119ed  shr eax, 7
    X86_AT(c, 0x119edu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119f0  inc eax
    X86_AT(c, 0x119f0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119f1  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x119f1u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 0119f9  shr eax, 7
    X86_AT(c, 0x119f9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119fc  inc eax
    X86_AT(c, 0x119fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119fd  xor al, 0x7f
    X86_AT(c, 0x119fdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119ff  mov ah, 0x40
    X86_AT(c, 0x119ffu);
    s8(c, 4, 0x40u);
    // 011a01  add ah, bl
    X86_AT(c, 0x11a01u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a03  call 0x11bf0
    X86_AT(c, 0x11a03u);
    push32(c, 0x11a08u); f_00011bf0(c); X86_RET(c, 0x11a08u);
L_11a08:
    X86_TICK(c, 7);
    // 011a08  add bh, bh
    X86_AT(c, 0x11a08u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a0a  jae 0x11a33
    X86_AT(c, 0x11a0au);
    if (x86_cc(c, 3)) { goto L_11a33; }
    X86_TICK(c, 73);
    // 011a0c  mov al, byte ptr gs:[edi + esi*1 + 0xc4]
    X86_AT(c, 0x11a0cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC4u))));
    // 011a14  xor al, 0x7f
    X86_AT(c, 0x11a14u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a16  mul cl
    X86_AT(c, 0x11a16u);
    x86_mul(c, g8(c, 1), 1);
    // 011a18  shr eax, 7
    X86_AT(c, 0x11a18u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a1b  inc eax
    X86_AT(c, 0x11a1bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a1c  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a1cu);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a24  shr eax, 7
    X86_AT(c, 0x11a24u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a27  inc eax
    X86_AT(c, 0x11a27u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a28  xor al, 0x7f
    X86_AT(c, 0x11a28u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a2a  mov ah, 0x44
    X86_AT(c, 0x11a2au);
    s8(c, 4, 0x44u);
    // 011a2c  add ah, bl
    X86_AT(c, 0x11a2cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a2e  call 0x11bf0
    X86_AT(c, 0x11a2eu);
    push32(c, 0x11a33u); f_00011bf0(c); X86_RET(c, 0x11a33u);
L_11a33:
    X86_TICK(c, 7);
    // 011a33  add bh, bh
    X86_AT(c, 0x11a33u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a35  jae 0x11a5e
    X86_AT(c, 0x11a35u);
    if (x86_cc(c, 3)) { goto L_11a5e; }
    X86_TICK(c, 73);
    // 011a37  mov al, byte ptr gs:[edi + esi*1 + 0xc8]
    X86_AT(c, 0x11a37u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC8u))));
    // 011a3f  xor al, 0x7f
    X86_AT(c, 0x11a3fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a41  mul cl
    X86_AT(c, 0x11a41u);
    x86_mul(c, g8(c, 1), 1);
    // 011a43  shr eax, 7
    X86_AT(c, 0x11a43u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a46  inc eax
    X86_AT(c, 0x11a46u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a47  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a47u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a4f  shr eax, 7
    X86_AT(c, 0x11a4fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a52  inc eax
    X86_AT(c, 0x11a52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a53  xor al, 0x7f
    X86_AT(c, 0x11a53u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a55  mov ah, 0x48
    X86_AT(c, 0x11a55u);
    s8(c, 4, 0x48u);
    // 011a57  add ah, bl
    X86_AT(c, 0x11a57u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a59  call 0x11bf0
    X86_AT(c, 0x11a59u);
    push32(c, 0x11a5eu); f_00011bf0(c); X86_RET(c, 0x11a5eu);
L_11a5e:
    X86_TICK(c, 7);
    // 011a5e  add bh, bh
    X86_AT(c, 0x11a5eu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a60  jae 0x11a89
    X86_AT(c, 0x11a60u);
    if (x86_cc(c, 3)) { goto L_11a89; }
    X86_TICK(c, 73);
    // 011a62  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x11a62u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
L_11a89:
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x119a6u, "ran off the end of a function");
}
void f_000119a7(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0119a7  mov cl, dl
    X86_AT(c, 0x119a7u);
    s8(c, 1, g8(c, 2));
    // 0119a9  mov dx, 0x4d8
    X86_AT(c, 0x119a9u);
    s16(c, 2, 0x4D8u);
    // 0119ad  cmp bl, 2
    X86_AT(c, 0x119adu);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0119b0  jbe 0x119be
    X86_AT(c, 0x119b0u);
    if (x86_cc(c, 6)) { goto L_119be; }
    X86_TICK(c, 6);
    // 0119b2  add dl, 4
    X86_AT(c, 0x119b2u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 0119b5  add edi, 0xf0
    X86_AT(c, 0x119b5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 0119bb  sub bl, 3
    X86_AT(c, 0x119bbu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_119be:
    X86_TICK(c, 22);
    // 0119be  movzx esi, bl
    X86_AT(c, 0x119beu);
    c.r[6] = g8(c, 3);
    // 0119c1  mov byte ptr gs:[edi + esi*1 + 0xd0], cl
    X86_AT(c, 0x119c1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u)), g8(c, 1));
    // 0119c9  mov al, byte ptr gs:[edi + esi*1 + 0xb0]
    X86_AT(c, 0x119c9u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xB0u))));
    // 0119d1  and eax, 7
    X86_AT(c, 0x119d1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 0119d6  mov bh, byte ptr cs:[eax + 0x135a8]
    X86_AT(c, 0x119d6u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x135A8u))));
    // 0119dd  add bh, bh
    X86_AT(c, 0x119ddu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0119df  jae 0x11a08
    X86_AT(c, 0x119dfu);
    if (x86_cc(c, 3)) { goto L_11a08; }
    X86_TICK(c, 73);
    // 0119e1  mov al, byte ptr gs:[edi + esi*1 + 0xc0]
    X86_AT(c, 0x119e1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC0u))));
    // 0119e9  xor al, 0x7f
    X86_AT(c, 0x119e9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119eb  mul cl
    X86_AT(c, 0x119ebu);
    x86_mul(c, g8(c, 1), 1);
    // 0119ed  shr eax, 7
    X86_AT(c, 0x119edu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119f0  inc eax
    X86_AT(c, 0x119f0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119f1  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x119f1u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 0119f9  shr eax, 7
    X86_AT(c, 0x119f9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119fc  inc eax
    X86_AT(c, 0x119fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119fd  xor al, 0x7f
    X86_AT(c, 0x119fdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119ff  mov ah, 0x40
    X86_AT(c, 0x119ffu);
    s8(c, 4, 0x40u);
    // 011a01  add ah, bl
    X86_AT(c, 0x11a01u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a03  call 0x11bf0
    X86_AT(c, 0x11a03u);
    push32(c, 0x11a08u); f_00011bf0(c); X86_RET(c, 0x11a08u);
L_11a08:
    X86_TICK(c, 7);
    // 011a08  add bh, bh
    X86_AT(c, 0x11a08u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a0a  jae 0x11a33
    X86_AT(c, 0x11a0au);
    if (x86_cc(c, 3)) { goto L_11a33; }
    X86_TICK(c, 73);
    // 011a0c  mov al, byte ptr gs:[edi + esi*1 + 0xc4]
    X86_AT(c, 0x11a0cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC4u))));
    // 011a14  xor al, 0x7f
    X86_AT(c, 0x11a14u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a16  mul cl
    X86_AT(c, 0x11a16u);
    x86_mul(c, g8(c, 1), 1);
    // 011a18  shr eax, 7
    X86_AT(c, 0x11a18u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a1b  inc eax
    X86_AT(c, 0x11a1bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a1c  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a1cu);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a24  shr eax, 7
    X86_AT(c, 0x11a24u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a27  inc eax
    X86_AT(c, 0x11a27u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a28  xor al, 0x7f
    X86_AT(c, 0x11a28u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a2a  mov ah, 0x44
    X86_AT(c, 0x11a2au);
    s8(c, 4, 0x44u);
    // 011a2c  add ah, bl
    X86_AT(c, 0x11a2cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a2e  call 0x11bf0
    X86_AT(c, 0x11a2eu);
    push32(c, 0x11a33u); f_00011bf0(c); X86_RET(c, 0x11a33u);
L_11a33:
    X86_TICK(c, 7);
    // 011a33  add bh, bh
    X86_AT(c, 0x11a33u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a35  jae 0x11a5e
    X86_AT(c, 0x11a35u);
    if (x86_cc(c, 3)) { goto L_11a5e; }
    X86_TICK(c, 73);
    // 011a37  mov al, byte ptr gs:[edi + esi*1 + 0xc8]
    X86_AT(c, 0x11a37u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC8u))));
    // 011a3f  xor al, 0x7f
    X86_AT(c, 0x11a3fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a41  mul cl
    X86_AT(c, 0x11a41u);
    x86_mul(c, g8(c, 1), 1);
    // 011a43  shr eax, 7
    X86_AT(c, 0x11a43u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a46  inc eax
    X86_AT(c, 0x11a46u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a47  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a47u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a4f  shr eax, 7
    X86_AT(c, 0x11a4fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a52  inc eax
    X86_AT(c, 0x11a52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a53  xor al, 0x7f
    X86_AT(c, 0x11a53u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a55  mov ah, 0x48
    X86_AT(c, 0x11a55u);
    s8(c, 4, 0x48u);
    // 011a57  add ah, bl
    X86_AT(c, 0x11a57u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a59  call 0x11bf0
    X86_AT(c, 0x11a59u);
    push32(c, 0x11a5eu); f_00011bf0(c); X86_RET(c, 0x11a5eu);
L_11a5e:
    X86_TICK(c, 7);
    // 011a5e  add bh, bh
    X86_AT(c, 0x11a5eu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a60  jae 0x11a89
    X86_AT(c, 0x11a60u);
    if (x86_cc(c, 3)) { goto L_11a89; }
    X86_TICK(c, 73);
    // 011a62  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x11a62u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
L_11a89:
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x119a7u, "ran off the end of a function");
}
void f_000119a9(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0119a9  mov dx, 0x4d8
    X86_AT(c, 0x119a9u);
    s16(c, 2, 0x4D8u);
    // 0119ad  cmp bl, 2
    X86_AT(c, 0x119adu);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0119b0  jbe 0x119be
    X86_AT(c, 0x119b0u);
    if (x86_cc(c, 6)) { goto L_119be; }
    X86_TICK(c, 6);
    // 0119b2  add dl, 4
    X86_AT(c, 0x119b2u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 0119b5  add edi, 0xf0
    X86_AT(c, 0x119b5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 0119bb  sub bl, 3
    X86_AT(c, 0x119bbu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_119be:
    X86_TICK(c, 22);
    // 0119be  movzx esi, bl
    X86_AT(c, 0x119beu);
    c.r[6] = g8(c, 3);
    // 0119c1  mov byte ptr gs:[edi + esi*1 + 0xd0], cl
    X86_AT(c, 0x119c1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u)), g8(c, 1));
    // 0119c9  mov al, byte ptr gs:[edi + esi*1 + 0xb0]
    X86_AT(c, 0x119c9u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xB0u))));
    // 0119d1  and eax, 7
    X86_AT(c, 0x119d1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 0119d6  mov bh, byte ptr cs:[eax + 0x135a8]
    X86_AT(c, 0x119d6u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x135A8u))));
    // 0119dd  add bh, bh
    X86_AT(c, 0x119ddu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0119df  jae 0x11a08
    X86_AT(c, 0x119dfu);
    if (x86_cc(c, 3)) { goto L_11a08; }
    X86_TICK(c, 73);
    // 0119e1  mov al, byte ptr gs:[edi + esi*1 + 0xc0]
    X86_AT(c, 0x119e1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC0u))));
    // 0119e9  xor al, 0x7f
    X86_AT(c, 0x119e9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119eb  mul cl
    X86_AT(c, 0x119ebu);
    x86_mul(c, g8(c, 1), 1);
    // 0119ed  shr eax, 7
    X86_AT(c, 0x119edu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119f0  inc eax
    X86_AT(c, 0x119f0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119f1  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x119f1u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 0119f9  shr eax, 7
    X86_AT(c, 0x119f9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119fc  inc eax
    X86_AT(c, 0x119fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119fd  xor al, 0x7f
    X86_AT(c, 0x119fdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119ff  mov ah, 0x40
    X86_AT(c, 0x119ffu);
    s8(c, 4, 0x40u);
    // 011a01  add ah, bl
    X86_AT(c, 0x11a01u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a03  call 0x11bf0
    X86_AT(c, 0x11a03u);
    push32(c, 0x11a08u); f_00011bf0(c); X86_RET(c, 0x11a08u);
L_11a08:
    X86_TICK(c, 7);
    // 011a08  add bh, bh
    X86_AT(c, 0x11a08u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a0a  jae 0x11a33
    X86_AT(c, 0x11a0au);
    if (x86_cc(c, 3)) { goto L_11a33; }
    X86_TICK(c, 73);
    // 011a0c  mov al, byte ptr gs:[edi + esi*1 + 0xc4]
    X86_AT(c, 0x11a0cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC4u))));
    // 011a14  xor al, 0x7f
    X86_AT(c, 0x11a14u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a16  mul cl
    X86_AT(c, 0x11a16u);
    x86_mul(c, g8(c, 1), 1);
    // 011a18  shr eax, 7
    X86_AT(c, 0x11a18u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a1b  inc eax
    X86_AT(c, 0x11a1bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a1c  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a1cu);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a24  shr eax, 7
    X86_AT(c, 0x11a24u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a27  inc eax
    X86_AT(c, 0x11a27u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a28  xor al, 0x7f
    X86_AT(c, 0x11a28u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a2a  mov ah, 0x44
    X86_AT(c, 0x11a2au);
    s8(c, 4, 0x44u);
    // 011a2c  add ah, bl
    X86_AT(c, 0x11a2cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a2e  call 0x11bf0
    X86_AT(c, 0x11a2eu);
    push32(c, 0x11a33u); f_00011bf0(c); X86_RET(c, 0x11a33u);
L_11a33:
    X86_TICK(c, 7);
    // 011a33  add bh, bh
    X86_AT(c, 0x11a33u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a35  jae 0x11a5e
    X86_AT(c, 0x11a35u);
    if (x86_cc(c, 3)) { goto L_11a5e; }
    X86_TICK(c, 73);
    // 011a37  mov al, byte ptr gs:[edi + esi*1 + 0xc8]
    X86_AT(c, 0x11a37u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC8u))));
    // 011a3f  xor al, 0x7f
    X86_AT(c, 0x11a3fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a41  mul cl
    X86_AT(c, 0x11a41u);
    x86_mul(c, g8(c, 1), 1);
    // 011a43  shr eax, 7
    X86_AT(c, 0x11a43u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a46  inc eax
    X86_AT(c, 0x11a46u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a47  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a47u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a4f  shr eax, 7
    X86_AT(c, 0x11a4fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a52  inc eax
    X86_AT(c, 0x11a52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a53  xor al, 0x7f
    X86_AT(c, 0x11a53u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a55  mov ah, 0x48
    X86_AT(c, 0x11a55u);
    s8(c, 4, 0x48u);
    // 011a57  add ah, bl
    X86_AT(c, 0x11a57u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a59  call 0x11bf0
    X86_AT(c, 0x11a59u);
    push32(c, 0x11a5eu); f_00011bf0(c); X86_RET(c, 0x11a5eu);
L_11a5e:
    X86_TICK(c, 7);
    // 011a5e  add bh, bh
    X86_AT(c, 0x11a5eu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a60  jae 0x11a89
    X86_AT(c, 0x11a60u);
    if (x86_cc(c, 3)) { goto L_11a89; }
    X86_TICK(c, 73);
    // 011a62  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x11a62u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
L_11a89:
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x119a9u, "ran off the end of a function");
}
void f_000119ad(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0119ad  cmp bl, 2
    X86_AT(c, 0x119adu);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0119b0  jbe 0x119be
    X86_AT(c, 0x119b0u);
    if (x86_cc(c, 6)) { goto L_119be; }
    X86_TICK(c, 6);
    // 0119b2  add dl, 4
    X86_AT(c, 0x119b2u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 0119b5  add edi, 0xf0
    X86_AT(c, 0x119b5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 0119bb  sub bl, 3
    X86_AT(c, 0x119bbu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_119be:
    X86_TICK(c, 22);
    // 0119be  movzx esi, bl
    X86_AT(c, 0x119beu);
    c.r[6] = g8(c, 3);
    // 0119c1  mov byte ptr gs:[edi + esi*1 + 0xd0], cl
    X86_AT(c, 0x119c1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u)), g8(c, 1));
    // 0119c9  mov al, byte ptr gs:[edi + esi*1 + 0xb0]
    X86_AT(c, 0x119c9u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xB0u))));
    // 0119d1  and eax, 7
    X86_AT(c, 0x119d1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 0119d6  mov bh, byte ptr cs:[eax + 0x135a8]
    X86_AT(c, 0x119d6u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x135A8u))));
    // 0119dd  add bh, bh
    X86_AT(c, 0x119ddu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0119df  jae 0x11a08
    X86_AT(c, 0x119dfu);
    if (x86_cc(c, 3)) { goto L_11a08; }
    X86_TICK(c, 73);
    // 0119e1  mov al, byte ptr gs:[edi + esi*1 + 0xc0]
    X86_AT(c, 0x119e1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC0u))));
    // 0119e9  xor al, 0x7f
    X86_AT(c, 0x119e9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119eb  mul cl
    X86_AT(c, 0x119ebu);
    x86_mul(c, g8(c, 1), 1);
    // 0119ed  shr eax, 7
    X86_AT(c, 0x119edu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119f0  inc eax
    X86_AT(c, 0x119f0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119f1  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x119f1u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 0119f9  shr eax, 7
    X86_AT(c, 0x119f9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119fc  inc eax
    X86_AT(c, 0x119fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119fd  xor al, 0x7f
    X86_AT(c, 0x119fdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119ff  mov ah, 0x40
    X86_AT(c, 0x119ffu);
    s8(c, 4, 0x40u);
    // 011a01  add ah, bl
    X86_AT(c, 0x11a01u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a03  call 0x11bf0
    X86_AT(c, 0x11a03u);
    push32(c, 0x11a08u); f_00011bf0(c); X86_RET(c, 0x11a08u);
L_11a08:
    X86_TICK(c, 7);
    // 011a08  add bh, bh
    X86_AT(c, 0x11a08u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a0a  jae 0x11a33
    X86_AT(c, 0x11a0au);
    if (x86_cc(c, 3)) { goto L_11a33; }
    X86_TICK(c, 73);
    // 011a0c  mov al, byte ptr gs:[edi + esi*1 + 0xc4]
    X86_AT(c, 0x11a0cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC4u))));
    // 011a14  xor al, 0x7f
    X86_AT(c, 0x11a14u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a16  mul cl
    X86_AT(c, 0x11a16u);
    x86_mul(c, g8(c, 1), 1);
    // 011a18  shr eax, 7
    X86_AT(c, 0x11a18u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a1b  inc eax
    X86_AT(c, 0x11a1bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a1c  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a1cu);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a24  shr eax, 7
    X86_AT(c, 0x11a24u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a27  inc eax
    X86_AT(c, 0x11a27u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a28  xor al, 0x7f
    X86_AT(c, 0x11a28u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a2a  mov ah, 0x44
    X86_AT(c, 0x11a2au);
    s8(c, 4, 0x44u);
    // 011a2c  add ah, bl
    X86_AT(c, 0x11a2cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a2e  call 0x11bf0
    X86_AT(c, 0x11a2eu);
    push32(c, 0x11a33u); f_00011bf0(c); X86_RET(c, 0x11a33u);
L_11a33:
    X86_TICK(c, 7);
    // 011a33  add bh, bh
    X86_AT(c, 0x11a33u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a35  jae 0x11a5e
    X86_AT(c, 0x11a35u);
    if (x86_cc(c, 3)) { goto L_11a5e; }
    X86_TICK(c, 73);
    // 011a37  mov al, byte ptr gs:[edi + esi*1 + 0xc8]
    X86_AT(c, 0x11a37u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC8u))));
    // 011a3f  xor al, 0x7f
    X86_AT(c, 0x11a3fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a41  mul cl
    X86_AT(c, 0x11a41u);
    x86_mul(c, g8(c, 1), 1);
    // 011a43  shr eax, 7
    X86_AT(c, 0x11a43u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a46  inc eax
    X86_AT(c, 0x11a46u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a47  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a47u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a4f  shr eax, 7
    X86_AT(c, 0x11a4fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a52  inc eax
    X86_AT(c, 0x11a52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a53  xor al, 0x7f
    X86_AT(c, 0x11a53u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a55  mov ah, 0x48
    X86_AT(c, 0x11a55u);
    s8(c, 4, 0x48u);
    // 011a57  add ah, bl
    X86_AT(c, 0x11a57u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a59  call 0x11bf0
    X86_AT(c, 0x11a59u);
    push32(c, 0x11a5eu); f_00011bf0(c); X86_RET(c, 0x11a5eu);
L_11a5e:
    X86_TICK(c, 7);
    // 011a5e  add bh, bh
    X86_AT(c, 0x11a5eu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a60  jae 0x11a89
    X86_AT(c, 0x11a60u);
    if (x86_cc(c, 3)) { goto L_11a89; }
    X86_TICK(c, 73);
    // 011a62  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x11a62u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
L_11a89:
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x119adu, "ran off the end of a function");
}
}
