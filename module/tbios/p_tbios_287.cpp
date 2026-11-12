#include "p_tbios_funcs.h"
namespace p_tbios {
void f_000116e7(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0116e7  call 0x11bf0
    X86_AT(c, 0x116e7u);
    push32(c, 0x116ecu); f_00011bf0(c); X86_RET(c, 0x116ecu);
    X86_TICK(c, 18);
    // 0116ec  add ah, 4
    X86_AT(c, 0x116ecu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116ef  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116efu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116f1  mov byte ptr gs:[edi + ebx*1 + 0xc8], al
    X86_AT(c, 0x116f1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC8u)), g8(c, 0));
    // 0116f9  call 0x11bf0
    X86_AT(c, 0x116f9u);
    push32(c, 0x116feu); f_00011bf0(c); X86_RET(c, 0x116feu);
    X86_TICK(c, 18);
    // 0116fe  add ah, 4
    X86_AT(c, 0x116feu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011701  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11701u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011703  mov byte ptr gs:[edi + ebx*1 + 0xcc], al
    X86_AT(c, 0x11703u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xCCu)), g8(c, 0));
    // 01170b  call 0x11bf0
    X86_AT(c, 0x1170bu);
    push32(c, 0x11710u); f_00011bf0(c); X86_RET(c, 0x11710u);
    X86_TICK(c, 16);
    // 011710  add ah, 4
    X86_AT(c, 0x11710u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011713  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11713u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011715  call 0x11bf0
    X86_AT(c, 0x11715u);
    push32(c, 0x1171au); f_00011bf0(c); X86_RET(c, 0x1171au);
    X86_TICK(c, 16);
    // 01171a  add ah, 4
    X86_AT(c, 0x1171au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01171d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1171du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01171f  call 0x11bf0
    X86_AT(c, 0x1171fu);
    push32(c, 0x11724u); f_00011bf0(c); X86_RET(c, 0x11724u);
    X86_TICK(c, 16);
    // 011724  add ah, 4
    X86_AT(c, 0x11724u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011727  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11727u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011729  call 0x11bf0
    X86_AT(c, 0x11729u);
    push32(c, 0x1172eu); f_00011bf0(c); X86_RET(c, 0x1172eu);
    X86_TICK(c, 16);
    // 01172e  add ah, 4
    X86_AT(c, 0x1172eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011731  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11731u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011733  call 0x11bf0
    X86_AT(c, 0x11733u);
    push32(c, 0x11738u); f_00011bf0(c); X86_RET(c, 0x11738u);
    X86_TICK(c, 16);
    // 011738  add ah, 4
    X86_AT(c, 0x11738u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01173b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1173bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
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
    x86_fault(c, 0x116e7u, "ran off the end of a function");
}
void f_000116ec(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0116ec  add ah, 4
    X86_AT(c, 0x116ecu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116ef  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116efu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116f1  mov byte ptr gs:[edi + ebx*1 + 0xc8], al
    X86_AT(c, 0x116f1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC8u)), g8(c, 0));
    // 0116f9  call 0x11bf0
    X86_AT(c, 0x116f9u);
    push32(c, 0x116feu); f_00011bf0(c); X86_RET(c, 0x116feu);
    X86_TICK(c, 18);
    // 0116fe  add ah, 4
    X86_AT(c, 0x116feu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011701  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11701u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011703  mov byte ptr gs:[edi + ebx*1 + 0xcc], al
    X86_AT(c, 0x11703u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xCCu)), g8(c, 0));
    // 01170b  call 0x11bf0
    X86_AT(c, 0x1170bu);
    push32(c, 0x11710u); f_00011bf0(c); X86_RET(c, 0x11710u);
    X86_TICK(c, 16);
    // 011710  add ah, 4
    X86_AT(c, 0x11710u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011713  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11713u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011715  call 0x11bf0
    X86_AT(c, 0x11715u);
    push32(c, 0x1171au); f_00011bf0(c); X86_RET(c, 0x1171au);
    X86_TICK(c, 16);
    // 01171a  add ah, 4
    X86_AT(c, 0x1171au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01171d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1171du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01171f  call 0x11bf0
    X86_AT(c, 0x1171fu);
    push32(c, 0x11724u); f_00011bf0(c); X86_RET(c, 0x11724u);
    X86_TICK(c, 16);
    // 011724  add ah, 4
    X86_AT(c, 0x11724u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011727  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11727u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011729  call 0x11bf0
    X86_AT(c, 0x11729u);
    push32(c, 0x1172eu); f_00011bf0(c); X86_RET(c, 0x1172eu);
    X86_TICK(c, 16);
    // 01172e  add ah, 4
    X86_AT(c, 0x1172eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011731  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11731u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011733  call 0x11bf0
    X86_AT(c, 0x11733u);
    push32(c, 0x11738u); f_00011bf0(c); X86_RET(c, 0x11738u);
    X86_TICK(c, 16);
    // 011738  add ah, 4
    X86_AT(c, 0x11738u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01173b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1173bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
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
    x86_fault(c, 0x116ecu, "ran off the end of a function");
}
void f_000116ef(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0116ef  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116efu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116f1  mov byte ptr gs:[edi + ebx*1 + 0xc8], al
    X86_AT(c, 0x116f1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC8u)), g8(c, 0));
    // 0116f9  call 0x11bf0
    X86_AT(c, 0x116f9u);
    push32(c, 0x116feu); f_00011bf0(c); X86_RET(c, 0x116feu);
    X86_TICK(c, 18);
    // 0116fe  add ah, 4
    X86_AT(c, 0x116feu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011701  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11701u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011703  mov byte ptr gs:[edi + ebx*1 + 0xcc], al
    X86_AT(c, 0x11703u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xCCu)), g8(c, 0));
    // 01170b  call 0x11bf0
    X86_AT(c, 0x1170bu);
    push32(c, 0x11710u); f_00011bf0(c); X86_RET(c, 0x11710u);
    X86_TICK(c, 16);
    // 011710  add ah, 4
    X86_AT(c, 0x11710u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011713  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11713u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011715  call 0x11bf0
    X86_AT(c, 0x11715u);
    push32(c, 0x1171au); f_00011bf0(c); X86_RET(c, 0x1171au);
    X86_TICK(c, 16);
    // 01171a  add ah, 4
    X86_AT(c, 0x1171au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01171d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1171du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01171f  call 0x11bf0
    X86_AT(c, 0x1171fu);
    push32(c, 0x11724u); f_00011bf0(c); X86_RET(c, 0x11724u);
    X86_TICK(c, 16);
    // 011724  add ah, 4
    X86_AT(c, 0x11724u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011727  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11727u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011729  call 0x11bf0
    X86_AT(c, 0x11729u);
    push32(c, 0x1172eu); f_00011bf0(c); X86_RET(c, 0x1172eu);
    X86_TICK(c, 16);
    // 01172e  add ah, 4
    X86_AT(c, 0x1172eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011731  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11731u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011733  call 0x11bf0
    X86_AT(c, 0x11733u);
    push32(c, 0x11738u); f_00011bf0(c); X86_RET(c, 0x11738u);
    X86_TICK(c, 16);
    // 011738  add ah, 4
    X86_AT(c, 0x11738u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01173b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1173bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
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
    x86_fault(c, 0x116efu, "ran off the end of a function");
}
void f_000116f1(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0116f1  mov byte ptr gs:[edi + ebx*1 + 0xc8], al
    X86_AT(c, 0x116f1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC8u)), g8(c, 0));
    // 0116f9  call 0x11bf0
    X86_AT(c, 0x116f9u);
    push32(c, 0x116feu); f_00011bf0(c); X86_RET(c, 0x116feu);
    X86_TICK(c, 18);
    // 0116fe  add ah, 4
    X86_AT(c, 0x116feu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011701  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11701u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011703  mov byte ptr gs:[edi + ebx*1 + 0xcc], al
    X86_AT(c, 0x11703u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xCCu)), g8(c, 0));
    // 01170b  call 0x11bf0
    X86_AT(c, 0x1170bu);
    push32(c, 0x11710u); f_00011bf0(c); X86_RET(c, 0x11710u);
    X86_TICK(c, 16);
    // 011710  add ah, 4
    X86_AT(c, 0x11710u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011713  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11713u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011715  call 0x11bf0
    X86_AT(c, 0x11715u);
    push32(c, 0x1171au); f_00011bf0(c); X86_RET(c, 0x1171au);
    X86_TICK(c, 16);
    // 01171a  add ah, 4
    X86_AT(c, 0x1171au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01171d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1171du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01171f  call 0x11bf0
    X86_AT(c, 0x1171fu);
    push32(c, 0x11724u); f_00011bf0(c); X86_RET(c, 0x11724u);
    X86_TICK(c, 16);
    // 011724  add ah, 4
    X86_AT(c, 0x11724u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011727  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11727u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011729  call 0x11bf0
    X86_AT(c, 0x11729u);
    push32(c, 0x1172eu); f_00011bf0(c); X86_RET(c, 0x1172eu);
    X86_TICK(c, 16);
    // 01172e  add ah, 4
    X86_AT(c, 0x1172eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011731  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11731u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011733  call 0x11bf0
    X86_AT(c, 0x11733u);
    push32(c, 0x11738u); f_00011bf0(c); X86_RET(c, 0x11738u);
    X86_TICK(c, 16);
    // 011738  add ah, 4
    X86_AT(c, 0x11738u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01173b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1173bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
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
    x86_fault(c, 0x116f1u, "ran off the end of a function");
}
void f_000116f9(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0116f9  call 0x11bf0
    X86_AT(c, 0x116f9u);
    push32(c, 0x116feu); f_00011bf0(c); X86_RET(c, 0x116feu);
    X86_TICK(c, 18);
    // 0116fe  add ah, 4
    X86_AT(c, 0x116feu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011701  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11701u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011703  mov byte ptr gs:[edi + ebx*1 + 0xcc], al
    X86_AT(c, 0x11703u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xCCu)), g8(c, 0));
    // 01170b  call 0x11bf0
    X86_AT(c, 0x1170bu);
    push32(c, 0x11710u); f_00011bf0(c); X86_RET(c, 0x11710u);
    X86_TICK(c, 16);
    // 011710  add ah, 4
    X86_AT(c, 0x11710u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011713  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11713u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011715  call 0x11bf0
    X86_AT(c, 0x11715u);
    push32(c, 0x1171au); f_00011bf0(c); X86_RET(c, 0x1171au);
    X86_TICK(c, 16);
    // 01171a  add ah, 4
    X86_AT(c, 0x1171au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01171d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1171du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01171f  call 0x11bf0
    X86_AT(c, 0x1171fu);
    push32(c, 0x11724u); f_00011bf0(c); X86_RET(c, 0x11724u);
    X86_TICK(c, 16);
    // 011724  add ah, 4
    X86_AT(c, 0x11724u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011727  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11727u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011729  call 0x11bf0
    X86_AT(c, 0x11729u);
    push32(c, 0x1172eu); f_00011bf0(c); X86_RET(c, 0x1172eu);
    X86_TICK(c, 16);
    // 01172e  add ah, 4
    X86_AT(c, 0x1172eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011731  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11731u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011733  call 0x11bf0
    X86_AT(c, 0x11733u);
    push32(c, 0x11738u); f_00011bf0(c); X86_RET(c, 0x11738u);
    X86_TICK(c, 16);
    // 011738  add ah, 4
    X86_AT(c, 0x11738u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01173b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1173bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
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
    x86_fault(c, 0x116f9u, "ran off the end of a function");
}
void f_000116fe(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0116fe  add ah, 4
    X86_AT(c, 0x116feu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011701  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11701u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011703  mov byte ptr gs:[edi + ebx*1 + 0xcc], al
    X86_AT(c, 0x11703u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xCCu)), g8(c, 0));
    // 01170b  call 0x11bf0
    X86_AT(c, 0x1170bu);
    push32(c, 0x11710u); f_00011bf0(c); X86_RET(c, 0x11710u);
    X86_TICK(c, 16);
    // 011710  add ah, 4
    X86_AT(c, 0x11710u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011713  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11713u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011715  call 0x11bf0
    X86_AT(c, 0x11715u);
    push32(c, 0x1171au); f_00011bf0(c); X86_RET(c, 0x1171au);
    X86_TICK(c, 16);
    // 01171a  add ah, 4
    X86_AT(c, 0x1171au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01171d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1171du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01171f  call 0x11bf0
    X86_AT(c, 0x1171fu);
    push32(c, 0x11724u); f_00011bf0(c); X86_RET(c, 0x11724u);
    X86_TICK(c, 16);
    // 011724  add ah, 4
    X86_AT(c, 0x11724u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011727  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11727u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011729  call 0x11bf0
    X86_AT(c, 0x11729u);
    push32(c, 0x1172eu); f_00011bf0(c); X86_RET(c, 0x1172eu);
    X86_TICK(c, 16);
    // 01172e  add ah, 4
    X86_AT(c, 0x1172eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011731  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11731u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011733  call 0x11bf0
    X86_AT(c, 0x11733u);
    push32(c, 0x11738u); f_00011bf0(c); X86_RET(c, 0x11738u);
    X86_TICK(c, 16);
    // 011738  add ah, 4
    X86_AT(c, 0x11738u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01173b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1173bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
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
    x86_fault(c, 0x116feu, "ran off the end of a function");
}
void f_00011701(X86Cpu& c) {
    X86_TICK(c, 16);
    // 011701  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11701u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011703  mov byte ptr gs:[edi + ebx*1 + 0xcc], al
    X86_AT(c, 0x11703u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xCCu)), g8(c, 0));
    // 01170b  call 0x11bf0
    X86_AT(c, 0x1170bu);
    push32(c, 0x11710u); f_00011bf0(c); X86_RET(c, 0x11710u);
    X86_TICK(c, 16);
    // 011710  add ah, 4
    X86_AT(c, 0x11710u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011713  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11713u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011715  call 0x11bf0
    X86_AT(c, 0x11715u);
    push32(c, 0x1171au); f_00011bf0(c); X86_RET(c, 0x1171au);
    X86_TICK(c, 16);
    // 01171a  add ah, 4
    X86_AT(c, 0x1171au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01171d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1171du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01171f  call 0x11bf0
    X86_AT(c, 0x1171fu);
    push32(c, 0x11724u); f_00011bf0(c); X86_RET(c, 0x11724u);
    X86_TICK(c, 16);
    // 011724  add ah, 4
    X86_AT(c, 0x11724u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011727  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11727u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011729  call 0x11bf0
    X86_AT(c, 0x11729u);
    push32(c, 0x1172eu); f_00011bf0(c); X86_RET(c, 0x1172eu);
    X86_TICK(c, 16);
    // 01172e  add ah, 4
    X86_AT(c, 0x1172eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011731  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11731u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011733  call 0x11bf0
    X86_AT(c, 0x11733u);
    push32(c, 0x11738u); f_00011bf0(c); X86_RET(c, 0x11738u);
    X86_TICK(c, 16);
    // 011738  add ah, 4
    X86_AT(c, 0x11738u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01173b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1173bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
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
    x86_fault(c, 0x11701u, "ran off the end of a function");
}
void f_00011703(X86Cpu& c) {
    X86_TICK(c, 9);
    // 011703  mov byte ptr gs:[edi + ebx*1 + 0xcc], al
    X86_AT(c, 0x11703u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xCCu)), g8(c, 0));
    // 01170b  call 0x11bf0
    X86_AT(c, 0x1170bu);
    push32(c, 0x11710u); f_00011bf0(c); X86_RET(c, 0x11710u);
    X86_TICK(c, 16);
    // 011710  add ah, 4
    X86_AT(c, 0x11710u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011713  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11713u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011715  call 0x11bf0
    X86_AT(c, 0x11715u);
    push32(c, 0x1171au); f_00011bf0(c); X86_RET(c, 0x1171au);
    X86_TICK(c, 16);
    // 01171a  add ah, 4
    X86_AT(c, 0x1171au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01171d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1171du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01171f  call 0x11bf0
    X86_AT(c, 0x1171fu);
    push32(c, 0x11724u); f_00011bf0(c); X86_RET(c, 0x11724u);
    X86_TICK(c, 16);
    // 011724  add ah, 4
    X86_AT(c, 0x11724u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011727  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11727u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011729  call 0x11bf0
    X86_AT(c, 0x11729u);
    push32(c, 0x1172eu); f_00011bf0(c); X86_RET(c, 0x1172eu);
    X86_TICK(c, 16);
    // 01172e  add ah, 4
    X86_AT(c, 0x1172eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011731  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11731u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011733  call 0x11bf0
    X86_AT(c, 0x11733u);
    push32(c, 0x11738u); f_00011bf0(c); X86_RET(c, 0x11738u);
    X86_TICK(c, 16);
    // 011738  add ah, 4
    X86_AT(c, 0x11738u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01173b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1173bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
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
    x86_fault(c, 0x11703u, "ran off the end of a function");
}
void f_0001170b(X86Cpu& c) {
    X86_TICK(c, 7);
    // 01170b  call 0x11bf0
    X86_AT(c, 0x1170bu);
    push32(c, 0x11710u); f_00011bf0(c); X86_RET(c, 0x11710u);
    X86_TICK(c, 16);
    // 011710  add ah, 4
    X86_AT(c, 0x11710u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011713  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11713u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011715  call 0x11bf0
    X86_AT(c, 0x11715u);
    push32(c, 0x1171au); f_00011bf0(c); X86_RET(c, 0x1171au);
    X86_TICK(c, 16);
    // 01171a  add ah, 4
    X86_AT(c, 0x1171au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01171d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1171du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01171f  call 0x11bf0
    X86_AT(c, 0x1171fu);
    push32(c, 0x11724u); f_00011bf0(c); X86_RET(c, 0x11724u);
    X86_TICK(c, 16);
    // 011724  add ah, 4
    X86_AT(c, 0x11724u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011727  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11727u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011729  call 0x11bf0
    X86_AT(c, 0x11729u);
    push32(c, 0x1172eu); f_00011bf0(c); X86_RET(c, 0x1172eu);
    X86_TICK(c, 16);
    // 01172e  add ah, 4
    X86_AT(c, 0x1172eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011731  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11731u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011733  call 0x11bf0
    X86_AT(c, 0x11733u);
    push32(c, 0x11738u); f_00011bf0(c); X86_RET(c, 0x11738u);
    X86_TICK(c, 16);
    // 011738  add ah, 4
    X86_AT(c, 0x11738u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01173b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1173bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
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
    x86_fault(c, 0x1170bu, "ran off the end of a function");
}
void f_00011710(X86Cpu& c) {
    X86_TICK(c, 16);
    // 011710  add ah, 4
    X86_AT(c, 0x11710u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011713  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11713u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011715  call 0x11bf0
    X86_AT(c, 0x11715u);
    push32(c, 0x1171au); f_00011bf0(c); X86_RET(c, 0x1171au);
    X86_TICK(c, 16);
    // 01171a  add ah, 4
    X86_AT(c, 0x1171au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01171d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1171du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01171f  call 0x11bf0
    X86_AT(c, 0x1171fu);
    push32(c, 0x11724u); f_00011bf0(c); X86_RET(c, 0x11724u);
    X86_TICK(c, 16);
    // 011724  add ah, 4
    X86_AT(c, 0x11724u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011727  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11727u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011729  call 0x11bf0
    X86_AT(c, 0x11729u);
    push32(c, 0x1172eu); f_00011bf0(c); X86_RET(c, 0x1172eu);
    X86_TICK(c, 16);
    // 01172e  add ah, 4
    X86_AT(c, 0x1172eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011731  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11731u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011733  call 0x11bf0
    X86_AT(c, 0x11733u);
    push32(c, 0x11738u); f_00011bf0(c); X86_RET(c, 0x11738u);
    X86_TICK(c, 16);
    // 011738  add ah, 4
    X86_AT(c, 0x11738u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01173b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1173bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
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
    x86_fault(c, 0x11710u, "ran off the end of a function");
}
void f_00011713(X86Cpu& c) {
    X86_TICK(c, 14);
    // 011713  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11713u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011715  call 0x11bf0
    X86_AT(c, 0x11715u);
    push32(c, 0x1171au); f_00011bf0(c); X86_RET(c, 0x1171au);
    X86_TICK(c, 16);
    // 01171a  add ah, 4
    X86_AT(c, 0x1171au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01171d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1171du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01171f  call 0x11bf0
    X86_AT(c, 0x1171fu);
    push32(c, 0x11724u); f_00011bf0(c); X86_RET(c, 0x11724u);
    X86_TICK(c, 16);
    // 011724  add ah, 4
    X86_AT(c, 0x11724u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011727  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11727u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011729  call 0x11bf0
    X86_AT(c, 0x11729u);
    push32(c, 0x1172eu); f_00011bf0(c); X86_RET(c, 0x1172eu);
    X86_TICK(c, 16);
    // 01172e  add ah, 4
    X86_AT(c, 0x1172eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011731  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11731u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011733  call 0x11bf0
    X86_AT(c, 0x11733u);
    push32(c, 0x11738u); f_00011bf0(c); X86_RET(c, 0x11738u);
    X86_TICK(c, 16);
    // 011738  add ah, 4
    X86_AT(c, 0x11738u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01173b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1173bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
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
    x86_fault(c, 0x11713u, "ran off the end of a function");
}
void f_00011715(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011715  call 0x11bf0
    X86_AT(c, 0x11715u);
    push32(c, 0x1171au); f_00011bf0(c); X86_RET(c, 0x1171au);
    X86_TICK(c, 16);
    // 01171a  add ah, 4
    X86_AT(c, 0x1171au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01171d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1171du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01171f  call 0x11bf0
    X86_AT(c, 0x1171fu);
    push32(c, 0x11724u); f_00011bf0(c); X86_RET(c, 0x11724u);
    X86_TICK(c, 16);
    // 011724  add ah, 4
    X86_AT(c, 0x11724u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011727  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11727u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011729  call 0x11bf0
    X86_AT(c, 0x11729u);
    push32(c, 0x1172eu); f_00011bf0(c); X86_RET(c, 0x1172eu);
    X86_TICK(c, 16);
    // 01172e  add ah, 4
    X86_AT(c, 0x1172eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011731  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11731u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011733  call 0x11bf0
    X86_AT(c, 0x11733u);
    push32(c, 0x11738u); f_00011bf0(c); X86_RET(c, 0x11738u);
    X86_TICK(c, 16);
    // 011738  add ah, 4
    X86_AT(c, 0x11738u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01173b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1173bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
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
    x86_fault(c, 0x11715u, "ran off the end of a function");
}
void f_0001171a(X86Cpu& c) {
    X86_TICK(c, 16);
    // 01171a  add ah, 4
    X86_AT(c, 0x1171au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01171d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1171du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01171f  call 0x11bf0
    X86_AT(c, 0x1171fu);
    push32(c, 0x11724u); f_00011bf0(c); X86_RET(c, 0x11724u);
    X86_TICK(c, 16);
    // 011724  add ah, 4
    X86_AT(c, 0x11724u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011727  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11727u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011729  call 0x11bf0
    X86_AT(c, 0x11729u);
    push32(c, 0x1172eu); f_00011bf0(c); X86_RET(c, 0x1172eu);
    X86_TICK(c, 16);
    // 01172e  add ah, 4
    X86_AT(c, 0x1172eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011731  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11731u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011733  call 0x11bf0
    X86_AT(c, 0x11733u);
    push32(c, 0x11738u); f_00011bf0(c); X86_RET(c, 0x11738u);
    X86_TICK(c, 16);
    // 011738  add ah, 4
    X86_AT(c, 0x11738u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01173b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1173bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
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
    x86_fault(c, 0x1171au, "ran off the end of a function");
}
void f_0001171d(X86Cpu& c) {
    X86_TICK(c, 14);
    // 01171d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1171du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01171f  call 0x11bf0
    X86_AT(c, 0x1171fu);
    push32(c, 0x11724u); f_00011bf0(c); X86_RET(c, 0x11724u);
    X86_TICK(c, 16);
    // 011724  add ah, 4
    X86_AT(c, 0x11724u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011727  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11727u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011729  call 0x11bf0
    X86_AT(c, 0x11729u);
    push32(c, 0x1172eu); f_00011bf0(c); X86_RET(c, 0x1172eu);
    X86_TICK(c, 16);
    // 01172e  add ah, 4
    X86_AT(c, 0x1172eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011731  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11731u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011733  call 0x11bf0
    X86_AT(c, 0x11733u);
    push32(c, 0x11738u); f_00011bf0(c); X86_RET(c, 0x11738u);
    X86_TICK(c, 16);
    // 011738  add ah, 4
    X86_AT(c, 0x11738u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01173b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1173bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
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
    x86_fault(c, 0x1171du, "ran off the end of a function");
}
void f_0001171f(X86Cpu& c) {
    X86_TICK(c, 7);
    // 01171f  call 0x11bf0
    X86_AT(c, 0x1171fu);
    push32(c, 0x11724u); f_00011bf0(c); X86_RET(c, 0x11724u);
    X86_TICK(c, 16);
    // 011724  add ah, 4
    X86_AT(c, 0x11724u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011727  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11727u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011729  call 0x11bf0
    X86_AT(c, 0x11729u);
    push32(c, 0x1172eu); f_00011bf0(c); X86_RET(c, 0x1172eu);
    X86_TICK(c, 16);
    // 01172e  add ah, 4
    X86_AT(c, 0x1172eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011731  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11731u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011733  call 0x11bf0
    X86_AT(c, 0x11733u);
    push32(c, 0x11738u); f_00011bf0(c); X86_RET(c, 0x11738u);
    X86_TICK(c, 16);
    // 011738  add ah, 4
    X86_AT(c, 0x11738u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01173b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1173bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
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
    x86_fault(c, 0x1171fu, "ran off the end of a function");
}
void f_00011724(X86Cpu& c) {
    X86_TICK(c, 16);
    // 011724  add ah, 4
    X86_AT(c, 0x11724u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011727  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11727u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011729  call 0x11bf0
    X86_AT(c, 0x11729u);
    push32(c, 0x1172eu); f_00011bf0(c); X86_RET(c, 0x1172eu);
    X86_TICK(c, 16);
    // 01172e  add ah, 4
    X86_AT(c, 0x1172eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011731  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11731u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011733  call 0x11bf0
    X86_AT(c, 0x11733u);
    push32(c, 0x11738u); f_00011bf0(c); X86_RET(c, 0x11738u);
    X86_TICK(c, 16);
    // 011738  add ah, 4
    X86_AT(c, 0x11738u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01173b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1173bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
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
    x86_fault(c, 0x11724u, "ran off the end of a function");
}
void f_00011727(X86Cpu& c) {
    X86_TICK(c, 14);
    // 011727  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11727u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011729  call 0x11bf0
    X86_AT(c, 0x11729u);
    push32(c, 0x1172eu); f_00011bf0(c); X86_RET(c, 0x1172eu);
    X86_TICK(c, 16);
    // 01172e  add ah, 4
    X86_AT(c, 0x1172eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011731  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11731u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011733  call 0x11bf0
    X86_AT(c, 0x11733u);
    push32(c, 0x11738u); f_00011bf0(c); X86_RET(c, 0x11738u);
    X86_TICK(c, 16);
    // 011738  add ah, 4
    X86_AT(c, 0x11738u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01173b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1173bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
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
    x86_fault(c, 0x11727u, "ran off the end of a function");
}
void f_00011729(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011729  call 0x11bf0
    X86_AT(c, 0x11729u);
    push32(c, 0x1172eu); f_00011bf0(c); X86_RET(c, 0x1172eu);
    X86_TICK(c, 16);
    // 01172e  add ah, 4
    X86_AT(c, 0x1172eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011731  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11731u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011733  call 0x11bf0
    X86_AT(c, 0x11733u);
    push32(c, 0x11738u); f_00011bf0(c); X86_RET(c, 0x11738u);
    X86_TICK(c, 16);
    // 011738  add ah, 4
    X86_AT(c, 0x11738u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01173b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1173bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
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
    x86_fault(c, 0x11729u, "ran off the end of a function");
}
void f_0001172e(X86Cpu& c) {
    X86_TICK(c, 16);
    // 01172e  add ah, 4
    X86_AT(c, 0x1172eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011731  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11731u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011733  call 0x11bf0
    X86_AT(c, 0x11733u);
    push32(c, 0x11738u); f_00011bf0(c); X86_RET(c, 0x11738u);
    X86_TICK(c, 16);
    // 011738  add ah, 4
    X86_AT(c, 0x11738u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01173b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1173bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
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
    x86_fault(c, 0x1172eu, "ran off the end of a function");
}
void f_00011731(X86Cpu& c) {
    X86_TICK(c, 14);
    // 011731  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11731u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011733  call 0x11bf0
    X86_AT(c, 0x11733u);
    push32(c, 0x11738u); f_00011bf0(c); X86_RET(c, 0x11738u);
    X86_TICK(c, 16);
    // 011738  add ah, 4
    X86_AT(c, 0x11738u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01173b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1173bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
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
    x86_fault(c, 0x11731u, "ran off the end of a function");
}
void f_00011733(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011733  call 0x11bf0
    X86_AT(c, 0x11733u);
    push32(c, 0x11738u); f_00011bf0(c); X86_RET(c, 0x11738u);
    X86_TICK(c, 16);
    // 011738  add ah, 4
    X86_AT(c, 0x11738u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01173b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1173bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
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
    x86_fault(c, 0x11733u, "ran off the end of a function");
}
void f_00011738(X86Cpu& c) {
    X86_TICK(c, 16);
    // 011738  add ah, 4
    X86_AT(c, 0x11738u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01173b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1173bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
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
    x86_fault(c, 0x11738u, "ran off the end of a function");
}
void f_0001173b(X86Cpu& c) {
    X86_TICK(c, 14);
    // 01173b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1173bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
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
    x86_fault(c, 0x1173bu, "ran off the end of a function");
}
void f_0001173d(X86Cpu& c) {
    X86_TICK(c, 7);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
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
    x86_fault(c, 0x1173du, "ran off the end of a function");
}
void f_00011742(X86Cpu& c) {
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
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
    x86_fault(c, 0x11742u, "ran off the end of a function");
}
void f_00011745(X86Cpu& c) {
    X86_TICK(c, 14);
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
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
    x86_fault(c, 0x11745u, "ran off the end of a function");
}
void f_00011747(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
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
    x86_fault(c, 0x11747u, "ran off the end of a function");
}
void f_0001174c(X86Cpu& c) {
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
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
    x86_fault(c, 0x1174cu, "ran off the end of a function");
}
void f_0001174f(X86Cpu& c) {
    X86_TICK(c, 14);
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
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
    x86_fault(c, 0x1174fu, "ran off the end of a function");
}
void f_00011751(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
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
    x86_fault(c, 0x11751u, "ran off the end of a function");
}
void f_00011756(X86Cpu& c) {
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
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
    x86_fault(c, 0x11756u, "ran off the end of a function");
}
}
