#include "p_game_funcs.h"
namespace p_game {
void f_000e8660(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0e8660  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0xe8660u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0e8664  mov dword ptr [0xcda70], eax
    X86_AT(c, 0xe8664u);
    wr32((c.sbase[3] + (uint32_t)(0xCDA70u)), c.r[0]);
    // 0e8669  ret 
    X86_AT(c, 0xe8669u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe8660u, "ran off the end of a function");
}
void f_000e866c(X86Cpu& c) {
    X86_TICK(c, 38);
    // 0e866c  push ebp
    X86_AT(c, 0xe866cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e866d  mov ebp, esp
    X86_AT(c, 0xe866du);
    c.r[5] = c.r[4];
    // 0e866f  sub esp, 0x2c
    X86_AT(c, 0xe866fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x2Cu, 0, 4); }
    // 0e8672  push ebx
    X86_AT(c, 0xe8672u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e8673  push esi
    X86_AT(c, 0xe8673u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e8674  push edi
    X86_AT(c, 0xe8674u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e8675  mov eax, dword ptr [0xcda70]
    X86_AT(c, 0xe8675u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCDA70u)));
    // 0e867a  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xe867au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0e867d  add dword ptr [ebp - 0x14], 4
    X86_AT(c, 0xe867du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0e8681  mov eax, dword ptr [eax]
    X86_AT(c, 0xe8681u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0e8683  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe8683u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e8686  cmp eax, 0x30
    X86_AT(c, 0xe8686u);
    (void)x86_sub(c, c.r[0], 0x30u, 0, 4);
    // 0e8689  jle 0xe8698
    X86_AT(c, 0xe8689u);
    if (x86_cc(c, 14)) { goto L_e8698; }
    X86_TICK(c, 9);
    // 0e868b  push 0x2178
    X86_AT(c, 0xe868bu);
    { uint32_t v = 0x2178u; push32(c, v); }
    // 0e8690  call 0xe75f8
    X86_AT(c, 0xe8690u);
    push32(c, 0xe8695u); f_000e75f8(c); X86_RET(c, 0xe8695u);
    X86_TICK(c, 2);
    // 0e8695  add esp, 4
    X86_AT(c, 0xe8695u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e8698:
    X86_TICK(c, 51);
    // 0e8698  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xe8698u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0e869b  add dword ptr [ebp - 0x14], 4
    X86_AT(c, 0xe869bu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0e869f  mov eax, dword ptr [eax]
    X86_AT(c, 0xe869fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0e86a1  mov dword ptr [ebp - 0x18], eax
    X86_AT(c, 0xe86a1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[0]);
    // 0e86a4  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xe86a4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0e86a7  add dword ptr [ebp - 0x14], 4
    X86_AT(c, 0xe86a7u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0e86ab  mov eax, dword ptr [eax]
    X86_AT(c, 0xe86abu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0e86ad  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xe86adu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0e86b0  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xe86b0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0e86b3  add dword ptr [ebp - 0x14], 4
    X86_AT(c, 0xe86b3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0e86b7  mov eax, dword ptr [eax]
    X86_AT(c, 0xe86b7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0e86b9  mov dword ptr [ebp - 0x20], eax
    X86_AT(c, 0xe86b9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[0]);
L_e86bc:
    X86_TICK(c, 18);
    // 0e86bc  dec dword ptr [ebp - 4]
    X86_AT(c, 0xe86bcu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0e86bf  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0xe86bfu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0e86c3  jle 0xe876e
    X86_AT(c, 0xe86c3u);
    if (x86_cc(c, 14)) { goto L_e876e; }
    X86_TICK(c, 95);
    // 0e86c9  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xe86c9u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0e86cc  add dword ptr [ebp - 0x14], 4
    X86_AT(c, 0xe86ccu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0e86d0  mov eax, dword ptr [eax]
    X86_AT(c, 0xe86d0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0e86d2  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xe86d2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0e86d5  mov edx, dword ptr [ebp - 0x14]
    X86_AT(c, 0xe86d5u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0e86d8  add dword ptr [ebp - 0x14], 4
    X86_AT(c, 0xe86d8u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0e86dc  mov edx, dword ptr [edx]
    X86_AT(c, 0xe86dcu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[2])));
    // 0e86de  mov dword ptr [ebp - 0x10], edx
    X86_AT(c, 0xe86deu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[2]);
    // 0e86e1  shl eax, 5
    X86_AT(c, 0xe86e1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[0] = r; }
    // 0e86e4  cdq 
    X86_AT(c, 0xe86e4u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e86e5  sub eax, edx
    X86_AT(c, 0xe86e5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e86e7  sar eax, 1
    X86_AT(c, 0xe86e7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0e86e9  mov edx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xe86e9u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0e86ec  mov dword ptr [ebp - 0x2c], eax
    X86_AT(c, 0xe86ecu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), c.r[0]);
    // 0e86ef  lea eax, [edx + edx*4]
    X86_AT(c, 0xe86efu);
    c.r[0] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0e86f2  lea eax, [edx + eax*2]
    X86_AT(c, 0xe86f2u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0e86f5  shl eax, 0xa
    X86_AT(c, 0xe86f5u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[0] = r; }
    // 0e86f8  cdq 
    X86_AT(c, 0xe86f8u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e86f9  sub eax, edx
    X86_AT(c, 0xe86f9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e86fb  sar eax, 1
    X86_AT(c, 0xe86fbu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0e86fd  add eax, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xe86fdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u))), 0, 4); }
    // 0e8700  lea esi, [eax + 0xbe5f4]
    X86_AT(c, 0xe8700u);
    c.r[6] = (uint32_t)(c.r[0] + 0xBE5F4u);
    // 0e8706  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xe8706u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0e8709  add dword ptr [ebp - 0x14], 4
    X86_AT(c, 0xe8709u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0e870d  mov eax, dword ptr [eax]
    X86_AT(c, 0xe870du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0e870f  mov eax, dword ptr [eax*4 + 0xcd7f4]
    X86_AT(c, 0xe870fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xCD7F4u)));
    // 0e8716  mov dword ptr [ebp - 0x28], eax
    X86_AT(c, 0xe8716u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)), c.r[0]);
    // 0e8719  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xe8719u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_e8720:
    X86_TICK(c, 12);
    // 0e8720  cmp dword ptr [ebp - 8], 0x20
    X86_AT(c, 0xe8720u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x20u, 0, 4);
    // 0e8724  jge 0xe86bc
    X86_AT(c, 0xe8724u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xe86bcu); goto L_e86bc; }
    X86_TICK(c, 2);
    // 0e8726  sub edi, edi
    X86_AT(c, 0xe8726u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e8728:
    X86_TICK(c, 7);
    // 0e8728  cmp edi, 0x10
    X86_AT(c, 0xe8728u);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0e872b  jge 0xe8763
    X86_AT(c, 0xe872bu);
    if (x86_cc(c, 13)) { goto L_e8763; }
    X86_TICK(c, 17);
    // 0e872d  mov eax, dword ptr [ebp - 0x28]
    X86_AT(c, 0xe872du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)));
    // 0e8730  mov bl, byte ptr [eax]
    X86_AT(c, 0xe8730u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0e8732  and bl, 0xf
    X86_AT(c, 0xe8732u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xFu, 1)); }
    // 0e8735  and bl, bl
    X86_AT(c, 0xe8735u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e8737  jne 0xe873f
    X86_AT(c, 0xe8737u);
    if (x86_cc(c, 5)) { goto L_e873f; }
    X86_TICK(c, 6);
    // 0e8739  mov bl, byte ptr [esi + edi*1]
    X86_AT(c, 0xe8739u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7]))));
    // 0e873c  and bl, 0xf
    X86_AT(c, 0xe873cu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xFu, 1)); }
L_e873f:
    X86_TICK(c, 25);
    // 0e873f  mov eax, dword ptr [ebp - 0x28]
    X86_AT(c, 0xe873fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)));
    // 0e8742  inc dword ptr [ebp - 0x28]
    X86_AT(c, 0xe8742u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e8745  mov al, byte ptr [eax]
    X86_AT(c, 0xe8745u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0e8747  and al, 0xf0
    X86_AT(c, 0xe8747u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0e8749  mov byte ptr [ebp - 0x21], al
    X86_AT(c, 0xe8749u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDFu)), g8(c, 0));
    // 0e874c  and al, al
    X86_AT(c, 0xe874cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0e874e  jne 0xe8758
    X86_AT(c, 0xe874eu);
    if (x86_cc(c, 5)) { goto L_e8758; }
    X86_TICK(c, 8);
    // 0e8750  mov al, byte ptr [esi + edi*1]
    X86_AT(c, 0xe8750u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7]))));
    // 0e8753  and al, 0xf0
    X86_AT(c, 0xe8753u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0e8755  mov byte ptr [ebp - 0x21], al
    X86_AT(c, 0xe8755u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDFu)), g8(c, 0));
L_e8758:
    X86_TICK(c, 19);
    // 0e8758  mov eax, ebx
    X86_AT(c, 0xe8758u);
    c.r[0] = c.r[3];
    // 0e875a  add al, byte ptr [ebp - 0x21]
    X86_AT(c, 0xe875au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDFu))), 0, 1)); }
    // 0e875d  mov byte ptr [esi + edi*1], al
    X86_AT(c, 0xe875du);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7])), g8(c, 0));
    // 0e8760  inc edi
    X86_AT(c, 0xe8760u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e8761  jmp 0xe8728
    X86_AT(c, 0xe8761u);
    X86_POLL(c, 0xe8728u); goto L_e8728;
L_e8763:
    X86_TICK(c, 15);
    // 0e8763  inc dword ptr [ebp - 8]
    X86_AT(c, 0xe8763u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e8766  add esi, 0xb0
    X86_AT(c, 0xe8766u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0xB0u, 0, 4); }
    // 0e876c  jmp 0xe8720
    X86_AT(c, 0xe876cu);
    X86_POLL(c, 0xe8720u); goto L_e8720;
L_e876e:
    X86_TICK(c, 54);
    // 0e876e  mov eax, dword ptr [ebp - 0x18]
    X86_AT(c, 0xe876eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 0e8771  shl eax, 5
    X86_AT(c, 0xe8771u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[0] = r; }
    // 0e8774  cdq 
    X86_AT(c, 0xe8774u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e8775  sub eax, edx
    X86_AT(c, 0xe8775u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e8777  sar eax, 1
    X86_AT(c, 0xe8777u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0e8779  mov edx, dword ptr [ebp - 0x1c]
    X86_AT(c, 0xe8779u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 0e877c  mov dword ptr [ebp - 0x2c], eax
    X86_AT(c, 0xe877cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), c.r[0]);
    // 0e877f  lea eax, [edx + edx*4]
    X86_AT(c, 0xe877fu);
    c.r[0] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0e8782  lea eax, [edx + eax*2]
    X86_AT(c, 0xe8782u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0e8785  shl eax, 0xa
    X86_AT(c, 0xe8785u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[0] = r; }
    // 0e8788  cdq 
    X86_AT(c, 0xe8788u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e8789  sub eax, edx
    X86_AT(c, 0xe8789u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e878b  sar eax, 1
    X86_AT(c, 0xe878bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0e878d  add eax, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xe878du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u))), 0, 4); }
    // 0e8790  lea esi, [eax + 0xbe5f4]
    X86_AT(c, 0xe8790u);
    c.r[6] = (uint32_t)(c.r[0] + 0xBE5F4u);
    // 0e8796  mov eax, dword ptr [ebp - 0x20]
    X86_AT(c, 0xe8796u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)));
    // 0e8799  mov eax, dword ptr [eax*4 + 0xcd7f4]
    X86_AT(c, 0xe8799u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xCD7F4u)));
    // 0e87a0  mov dword ptr [ebp - 0x28], eax
    X86_AT(c, 0xe87a0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)), c.r[0]);
    // 0e87a3  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xe87a3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_e87aa:
    X86_TICK(c, 12);
    // 0e87aa  cmp dword ptr [ebp - 8], 0x20
    X86_AT(c, 0xe87aau);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x20u, 0, 4);
    // 0e87ae  jge 0xe87f8
    X86_AT(c, 0xe87aeu);
    if (x86_cc(c, 13)) { goto L_e87f8; }
    X86_TICK(c, 2);
    // 0e87b0  sub edi, edi
    X86_AT(c, 0xe87b0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e87b2:
    X86_TICK(c, 7);
    // 0e87b2  cmp edi, 0x10
    X86_AT(c, 0xe87b2u);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0e87b5  jge 0xe87ed
    X86_AT(c, 0xe87b5u);
    if (x86_cc(c, 13)) { goto L_e87ed; }
    X86_TICK(c, 17);
    // 0e87b7  mov eax, dword ptr [ebp - 0x28]
    X86_AT(c, 0xe87b7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)));
    // 0e87ba  mov bl, byte ptr [eax]
    X86_AT(c, 0xe87bau);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0e87bc  and bl, 0xf
    X86_AT(c, 0xe87bcu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xFu, 1)); }
    // 0e87bf  and bl, bl
    X86_AT(c, 0xe87bfu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e87c1  jne 0xe87c9
    X86_AT(c, 0xe87c1u);
    if (x86_cc(c, 5)) { goto L_e87c9; }
    X86_TICK(c, 6);
    // 0e87c3  mov bl, byte ptr [esi + edi*1]
    X86_AT(c, 0xe87c3u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7]))));
    // 0e87c6  and bl, 0xf
    X86_AT(c, 0xe87c6u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xFu, 1)); }
L_e87c9:
    X86_TICK(c, 25);
    // 0e87c9  mov eax, dword ptr [ebp - 0x28]
    X86_AT(c, 0xe87c9u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)));
    // 0e87cc  inc dword ptr [ebp - 0x28]
    X86_AT(c, 0xe87ccu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e87cf  mov al, byte ptr [eax]
    X86_AT(c, 0xe87cfu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0e87d1  and al, 0xf0
    X86_AT(c, 0xe87d1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0e87d3  mov byte ptr [ebp - 0x21], al
    X86_AT(c, 0xe87d3u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDFu)), g8(c, 0));
    // 0e87d6  and al, al
    X86_AT(c, 0xe87d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0e87d8  jne 0xe87e2
    X86_AT(c, 0xe87d8u);
    if (x86_cc(c, 5)) { goto L_e87e2; }
    X86_TICK(c, 8);
    // 0e87da  mov al, byte ptr [esi + edi*1]
    X86_AT(c, 0xe87dau);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7]))));
    // 0e87dd  and al, 0xf0
    X86_AT(c, 0xe87ddu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0e87df  mov byte ptr [ebp - 0x21], al
    X86_AT(c, 0xe87dfu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDFu)), g8(c, 0));
L_e87e2:
    X86_TICK(c, 19);
    // 0e87e2  mov eax, ebx
    X86_AT(c, 0xe87e2u);
    c.r[0] = c.r[3];
    // 0e87e4  add al, byte ptr [ebp - 0x21]
    X86_AT(c, 0xe87e4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDFu))), 0, 1)); }
    // 0e87e7  mov byte ptr [esi + edi*1], al
    X86_AT(c, 0xe87e7u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7])), g8(c, 0));
    // 0e87ea  inc edi
    X86_AT(c, 0xe87eau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e87eb  jmp 0xe87b2
    X86_AT(c, 0xe87ebu);
    X86_POLL(c, 0xe87b2u); goto L_e87b2;
L_e87ed:
    X86_TICK(c, 15);
    // 0e87ed  inc dword ptr [ebp - 8]
    X86_AT(c, 0xe87edu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e87f0  add esi, 0xb0
    X86_AT(c, 0xe87f0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0xB0u, 0, 4); }
    // 0e87f6  jmp 0xe87aa
    X86_AT(c, 0xe87f6u);
    X86_POLL(c, 0xe87aau); goto L_e87aa;
L_e87f8:
    X86_TICK(c, 28);
    // 0e87f8  pop edi
    X86_AT(c, 0xe87f8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e87f9  pop esi
    X86_AT(c, 0xe87f9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e87fa  pop ebx
    X86_AT(c, 0xe87fau);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e87fb  leave 
    X86_AT(c, 0xe87fbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e87fc  ret 
    X86_AT(c, 0xe87fcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe866cu, "ran off the end of a function");
}
void f_000e8800(X86Cpu& c) {
    X86_TICK(c, 4);
    // 0e8800  sub edx, edx
    X86_AT(c, 0xe8800u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e8802  mov ecx, edx
    X86_AT(c, 0xe8802u);
    c.r[1] = c.r[2];
L_e8804:
    X86_TICK(c, 7);
    // 0e8804  cmp edx, 0x2b
    X86_AT(c, 0xe8804u);
    (void)x86_sub(c, c.r[2], 0x2Bu, 0, 4);
    // 0e8807  jg 0xe881e
    X86_AT(c, 0xe8807u);
    if (x86_cc(c, 15)) { goto L_e881e; }
    X86_TICK(c, 20);
    // 0e8809  mov eax, ecx
    X86_AT(c, 0xe8809u);
    c.r[0] = c.r[1];
    // 0e880b  shl eax, 9
    X86_AT(c, 0xe880bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0e880e  add eax, 0x83378
    X86_AT(c, 0xe880eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x83378u, 0, 4); }
    // 0e8813  mov dword ptr [edx*4 + 0xcd7f4], eax
    X86_AT(c, 0xe8813u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] * 4 + 0xCD7F4u)), c.r[0]);
    // 0e881a  inc edx
    X86_AT(c, 0xe881au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0e881b  inc ecx
    X86_AT(c, 0xe881bu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0e881c  jmp 0xe8804
    X86_AT(c, 0xe881cu);
    X86_POLL(c, 0xe8804u); goto L_e8804;
L_e881e:
    X86_TICK(c, 4);
    // 0e881e  mov edx, 0x2c
    X86_AT(c, 0xe881eu);
    c.r[2] = 0x2Cu;
    // 0e8823  sub ecx, ecx
    X86_AT(c, 0xe8823u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
L_e8825:
    X86_TICK(c, 7);
    // 0e8825  cmp edx, 0x6b
    X86_AT(c, 0xe8825u);
    (void)x86_sub(c, c.r[2], 0x6Bu, 0, 4);
    // 0e8828  jg 0xe883f
    X86_AT(c, 0xe8828u);
    if (x86_cc(c, 15)) { goto L_e883f; }
    X86_TICK(c, 20);
    // 0e882a  mov eax, ecx
    X86_AT(c, 0xe882au);
    c.r[0] = c.r[1];
    // 0e882c  shl eax, 9
    X86_AT(c, 0xe882cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0e882f  add eax, 0x8b378
    X86_AT(c, 0xe882fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8B378u, 0, 4); }
    // 0e8834  mov dword ptr [edx*4 + 0xcd7f4], eax
    X86_AT(c, 0xe8834u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] * 4 + 0xCD7F4u)), c.r[0]);
    // 0e883b  inc edx
    X86_AT(c, 0xe883bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0e883c  inc ecx
    X86_AT(c, 0xe883cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0e883d  jmp 0xe8825
    X86_AT(c, 0xe883du);
    X86_POLL(c, 0xe8825u); goto L_e8825;
L_e883f:
    X86_TICK(c, 102);
    // 0e883f  mov dword ptr [0xcd9a4], 0x93578
    X86_AT(c, 0xe883fu);
    wr32((c.sbase[3] + (uint32_t)(0xCD9A4u)), 0x93578u);
    // 0e8849  mov dword ptr [0xcd9a8], 0x93978
    X86_AT(c, 0xe8849u);
    wr32((c.sbase[3] + (uint32_t)(0xCD9A8u)), 0x93978u);
    // 0e8853  mov dword ptr [0xcd9ac], 0x94178
    X86_AT(c, 0xe8853u);
    wr32((c.sbase[3] + (uint32_t)(0xCD9ACu)), 0x94178u);
    // 0e885d  mov dword ptr [0xcd9b0], 0x95b78
    X86_AT(c, 0xe885du);
    wr32((c.sbase[3] + (uint32_t)(0xCD9B0u)), 0x95B78u);
    // 0e8867  mov dword ptr [0xcd9b4], 0x95d78
    X86_AT(c, 0xe8867u);
    wr32((c.sbase[3] + (uint32_t)(0xCD9B4u)), 0x95D78u);
    // 0e8871  mov dword ptr [0xcd9b8], 0x95f78
    X86_AT(c, 0xe8871u);
    wr32((c.sbase[3] + (uint32_t)(0xCD9B8u)), 0x95F78u);
    // 0e887b  mov dword ptr [0xcd9bc], 0x96178
    X86_AT(c, 0xe887bu);
    wr32((c.sbase[3] + (uint32_t)(0xCD9BCu)), 0x96178u);
    // 0e8885  mov dword ptr [0xcd9c0], 0x95378
    X86_AT(c, 0xe8885u);
    wr32((c.sbase[3] + (uint32_t)(0xCD9C0u)), 0x95378u);
    // 0e888f  mov dword ptr [0xcd9c4], 0x95578
    X86_AT(c, 0xe888fu);
    wr32((c.sbase[3] + (uint32_t)(0xCD9C4u)), 0x95578u);
    // 0e8899  mov dword ptr [0xcd9c8], 0x95778
    X86_AT(c, 0xe8899u);
    wr32((c.sbase[3] + (uint32_t)(0xCD9C8u)), 0x95778u);
    // 0e88a3  mov dword ptr [0xcd9cc], 0x95978
    X86_AT(c, 0xe88a3u);
    wr32((c.sbase[3] + (uint32_t)(0xCD9CCu)), 0x95978u);
    // 0e88ad  mov dword ptr [0xcd9d0], 0x9ad78
    X86_AT(c, 0xe88adu);
    wr32((c.sbase[3] + (uint32_t)(0xCD9D0u)), 0x9AD78u);
    // 0e88b7  mov dword ptr [0xcd9d4], 0x99578
    X86_AT(c, 0xe88b7u);
    wr32((c.sbase[3] + (uint32_t)(0xCD9D4u)), 0x99578u);
    // 0e88c1  mov dword ptr [0xcd9d8], 0x99778
    X86_AT(c, 0xe88c1u);
    wr32((c.sbase[3] + (uint32_t)(0xCD9D8u)), 0x99778u);
    // 0e88cb  mov dword ptr [0xcd9dc], 0x97178
    X86_AT(c, 0xe88cbu);
    wr32((c.sbase[3] + (uint32_t)(0xCD9DCu)), 0x97178u);
    // 0e88d5  mov dword ptr [0xcd9e0], 0x9a178
    X86_AT(c, 0xe88d5u);
    wr32((c.sbase[3] + (uint32_t)(0xCD9E0u)), 0x9A178u);
    // 0e88df  mov dword ptr [0xcd9e4], 0x97778
    X86_AT(c, 0xe88dfu);
    wr32((c.sbase[3] + (uint32_t)(0xCD9E4u)), 0x97778u);
    // 0e88e9  mov dword ptr [0xcd9e8], 0x97978
    X86_AT(c, 0xe88e9u);
    wr32((c.sbase[3] + (uint32_t)(0xCD9E8u)), 0x97978u);
    // 0e88f3  mov dword ptr [0xcd9ec], 0x97b78
    X86_AT(c, 0xe88f3u);
    wr32((c.sbase[3] + (uint32_t)(0xCD9ECu)), 0x97B78u);
    // 0e88fd  mov dword ptr [0xcd9f0], 0x97d78
    X86_AT(c, 0xe88fdu);
    wr32((c.sbase[3] + (uint32_t)(0xCD9F0u)), 0x97D78u);
    // 0e8907  mov dword ptr [0xcd9f4], 0x97f78
    X86_AT(c, 0xe8907u);
    wr32((c.sbase[3] + (uint32_t)(0xCD9F4u)), 0x97F78u);
    // 0e8911  mov dword ptr [0xcd9f8], 0x98178
    X86_AT(c, 0xe8911u);
    wr32((c.sbase[3] + (uint32_t)(0xCD9F8u)), 0x98178u);
    // 0e891b  mov dword ptr [0xcd9fc], 0x98778
    X86_AT(c, 0xe891bu);
    wr32((c.sbase[3] + (uint32_t)(0xCD9FCu)), 0x98778u);
    // 0e8925  mov dword ptr [0xcda00], 0x98978
    X86_AT(c, 0xe8925u);
    wr32((c.sbase[3] + (uint32_t)(0xCDA00u)), 0x98978u);
    // 0e892f  mov dword ptr [0xcda04], 0x98b78
    X86_AT(c, 0xe892fu);
    wr32((c.sbase[3] + (uint32_t)(0xCDA04u)), 0x98B78u);
    // 0e8939  mov dword ptr [0xcda08], 0x98d78
    X86_AT(c, 0xe8939u);
    wr32((c.sbase[3] + (uint32_t)(0xCDA08u)), 0x98D78u);
    // 0e8943  mov dword ptr [0xcda0c], 0x98f78
    X86_AT(c, 0xe8943u);
    wr32((c.sbase[3] + (uint32_t)(0xCDA0Cu)), 0x98F78u);
    // 0e894d  mov dword ptr [0xcda10], 0x99178
    X86_AT(c, 0xe894du);
    wr32((c.sbase[3] + (uint32_t)(0xCDA10u)), 0x99178u);
    // 0e8957  mov dword ptr [0xcda20], 0x8b178
    X86_AT(c, 0xe8957u);
    wr32((c.sbase[3] + (uint32_t)(0xCDA20u)), 0x8B178u);
    // 0e8961  mov dword ptr [0xcda24], 0x8b178
    X86_AT(c, 0xe8961u);
    wr32((c.sbase[3] + (uint32_t)(0xCDA24u)), 0x8B178u);
    // 0e896b  mov dword ptr [0xcda24], 0x95378
    X86_AT(c, 0xe896bu);
    wr32((c.sbase[3] + (uint32_t)(0xCDA24u)), 0x95378u);
    // 0e8975  mov dword ptr [0xcda28], 0x95578
    X86_AT(c, 0xe8975u);
    wr32((c.sbase[3] + (uint32_t)(0xCDA28u)), 0x95578u);
    // 0e897f  mov dword ptr [0xcda2c], 0x95778
    X86_AT(c, 0xe897fu);
    wr32((c.sbase[3] + (uint32_t)(0xCDA2Cu)), 0x95778u);
    // 0e8989  mov dword ptr [0xcda30], 0x95978
    X86_AT(c, 0xe8989u);
    wr32((c.sbase[3] + (uint32_t)(0xCDA30u)), 0x95978u);
    // 0e8993  mov dword ptr [0xcda34], 0x95b78
    X86_AT(c, 0xe8993u);
    wr32((c.sbase[3] + (uint32_t)(0xCDA34u)), 0x95B78u);
    // 0e899d  mov dword ptr [0xcda38], 0x95d78
    X86_AT(c, 0xe899du);
    wr32((c.sbase[3] + (uint32_t)(0xCDA38u)), 0x95D78u);
    // 0e89a7  mov dword ptr [0xcda3c], 0x95f78
    X86_AT(c, 0xe89a7u);
    wr32((c.sbase[3] + (uint32_t)(0xCDA3Cu)), 0x95F78u);
    // 0e89b1  mov dword ptr [0xcda40], 0x96178
    X86_AT(c, 0xe89b1u);
    wr32((c.sbase[3] + (uint32_t)(0xCDA40u)), 0x96178u);
    // 0e89bb  mov dword ptr [0xcda44], 0x9a578
    X86_AT(c, 0xe89bbu);
    wr32((c.sbase[3] + (uint32_t)(0xCDA44u)), 0x9A578u);
    // 0e89c5  mov dword ptr [0xcda48], 0x9a578
    X86_AT(c, 0xe89c5u);
    wr32((c.sbase[3] + (uint32_t)(0xCDA48u)), 0x9A578u);
    // 0e89cf  mov dword ptr [0xcda4c], 0x9a778
    X86_AT(c, 0xe89cfu);
    wr32((c.sbase[3] + (uint32_t)(0xCDA4Cu)), 0x9A778u);
    // 0e89d9  mov dword ptr [0xcda50], 0x9a778
    X86_AT(c, 0xe89d9u);
    wr32((c.sbase[3] + (uint32_t)(0xCDA50u)), 0x9A778u);
    // 0e89e3  mov dword ptr [0xcda54], 0x9af78
    X86_AT(c, 0xe89e3u);
    wr32((c.sbase[3] + (uint32_t)(0xCDA54u)), 0x9AF78u);
    // 0e89ed  mov dword ptr [0xcda58], 0x9b178
    X86_AT(c, 0xe89edu);
    wr32((c.sbase[3] + (uint32_t)(0xCDA58u)), 0x9B178u);
    // 0e89f7  mov dword ptr [0xcda5c], 0x9a978
    X86_AT(c, 0xe89f7u);
    wr32((c.sbase[3] + (uint32_t)(0xCDA5Cu)), 0x9A978u);
    // 0e8a01  mov dword ptr [0xcda60], 0x9ab78
    X86_AT(c, 0xe8a01u);
    wr32((c.sbase[3] + (uint32_t)(0xCDA60u)), 0x9AB78u);
    // 0e8a0b  ret 
    X86_AT(c, 0xe8a0bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe8800u, "ran off the end of a function");
}
void f_000e8a0c(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0e8a0c  push ebp
    X86_AT(c, 0xe8a0cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e8a0d  mov ebp, esp
    X86_AT(c, 0xe8a0du);
    c.r[5] = c.r[4];
    // 0e8a0f  sub esp, 0x10
    X86_AT(c, 0xe8a0fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x10u, 0, 4); }
    // 0e8a12  push ebx
    X86_AT(c, 0xe8a12u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e8a13  push esi
    X86_AT(c, 0xe8a13u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e8a14  push edi
    X86_AT(c, 0xe8a14u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e8a15  cmp word ptr [0xcda74], 0
    X86_AT(c, 0xe8a15u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xCDA74u))), 0x0u, 0, 2);
    // 0e8a1d  je 0xe8b32
    X86_AT(c, 0xe8a1du);
    if (x86_cc(c, 4)) { goto L_e8b32; }
    X86_TICK(c, 7);
    // 0e8a23  call 0xfb17c
    X86_AT(c, 0xe8a23u);
    push32(c, 0xe8a28u); f_000fb17c(c); X86_RET(c, 0xe8a28u);
    X86_TICK(c, 7);
    // 0e8a28  call 0xfbff4
    X86_AT(c, 0xe8a28u);
    push32(c, 0xe8a2du); f_000fbff4(c); X86_RET(c, 0xe8a2du);
    X86_TICK(c, 2);
    // 0e8a2d  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xe8a2du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_e8a34:
    X86_TICK(c, 12);
    // 0e8a34  cmp dword ptr [ebp - 4], 0xb
    X86_AT(c, 0xe8a34u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0xBu, 0, 4);
    // 0e8a38  jge 0xe8acf
    X86_AT(c, 0xe8a38u);
    if (x86_cc(c, 13)) { goto L_e8acf; }
    X86_TICK(c, 2);
    // 0e8a3e  sub edi, edi
    X86_AT(c, 0xe8a3eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e8a40:
    X86_TICK(c, 7);
    // 0e8a40  cmp edi, 0xb
    X86_AT(c, 0xe8a40u);
    (void)x86_sub(c, c.r[7], 0xBu, 0, 4);
    // 0e8a43  jge 0xe8ac7
    X86_AT(c, 0xe8a43u);
    if (x86_cc(c, 13)) { goto L_e8ac7; }
    X86_TICK(c, 67);
    // 0e8a49  mov eax, 0x7a7d0
    X86_AT(c, 0xe8a49u);
    c.r[0] = 0x7A7D0u;
    // 0e8a4e  mov eax, edi
    X86_AT(c, 0xe8a4eu);
    c.r[0] = c.r[7];
    // 0e8a50  shl eax, 5
    X86_AT(c, 0xe8a50u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[0] = r; }
    // 0e8a53  cdq 
    X86_AT(c, 0xe8a53u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e8a54  sub eax, edx
    X86_AT(c, 0xe8a54u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e8a56  sar eax, 1
    X86_AT(c, 0xe8a56u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0e8a58  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xe8a58u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e8a5b  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xe8a5bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0e8a5e  lea eax, [edx + edx*4]
    X86_AT(c, 0xe8a5eu);
    c.r[0] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0e8a61  lea eax, [edx + eax*2]
    X86_AT(c, 0xe8a61u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0e8a64  shl eax, 0xa
    X86_AT(c, 0xe8a64u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[0] = r; }
    // 0e8a67  cdq 
    X86_AT(c, 0xe8a67u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e8a68  sub eax, edx
    X86_AT(c, 0xe8a68u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e8a6a  sar eax, 1
    X86_AT(c, 0xe8a6au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0e8a6c  add eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xe8a6cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0, 4); }
    // 0e8a6f  lea esi, [eax + 0xbe5f4]
    X86_AT(c, 0xe8a6fu);
    c.r[6] = (uint32_t)(c.r[0] + 0xBE5F4u);
    // 0e8a75  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe8a75u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e8a78  lea edx, [eax + eax*8]
    X86_AT(c, 0xe8a78u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0e8a7b  lea eax, [edx + eax*2]
    X86_AT(c, 0xe8a7bu);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0e8a7e  lea edx, [edi + eax*1]
    X86_AT(c, 0xe8a7eu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0e8a81  movzx eax, byte ptr [edx + 0xbe578]
    X86_AT(c, 0xe8a81u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xBE578u)));
    // 0e8a88  shl eax, 9
    X86_AT(c, 0xe8a88u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0e8a8b  add eax, 0x9b378
    X86_AT(c, 0xe8a8bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x9B378u, 0, 4); }
    // 0e8a90  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xe8a90u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0e8a93  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xe8a93u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_e8a9a:
    X86_TICK(c, 12);
    // 0e8a9a  cmp dword ptr [ebp - 0xc], 0x20
    X86_AT(c, 0xe8a9au);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x20u, 0, 4);
    // 0e8a9e  jge 0xe8ac1
    X86_AT(c, 0xe8a9eu);
    if (x86_cc(c, 13)) { goto L_e8ac1; }
    X86_TICK(c, 2);
    // 0e8aa0  sub ebx, ebx
    X86_AT(c, 0xe8aa0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_e8aa2:
    X86_TICK(c, 7);
    // 0e8aa2  cmp ebx, 4
    X86_AT(c, 0xe8aa2u);
    (void)x86_sub(c, c.r[3], 0x4u, 0, 4);
    // 0e8aa5  jge 0xe8ab6
    X86_AT(c, 0xe8aa5u);
    if (x86_cc(c, 13)) { goto L_e8ab6; }
    X86_TICK(c, 26);
    // 0e8aa7  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xe8aa7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0e8aaa  add dword ptr [ebp - 8], 4
    X86_AT(c, 0xe8aaau);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0e8aae  mov eax, dword ptr [eax]
    X86_AT(c, 0xe8aaeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0e8ab0  mov dword ptr [esi + ebx*4], eax
    X86_AT(c, 0xe8ab0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[3] * 4)), c.r[0]);
    // 0e8ab3  inc ebx
    X86_AT(c, 0xe8ab3u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0e8ab4  jmp 0xe8aa2
    X86_AT(c, 0xe8ab4u);
    X86_POLL(c, 0xe8aa2u); goto L_e8aa2;
L_e8ab6:
    X86_TICK(c, 15);
    // 0e8ab6  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xe8ab6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e8ab9  add esi, 0xb0
    X86_AT(c, 0xe8ab9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0xB0u, 0, 4); }
    // 0e8abf  jmp 0xe8a9a
    X86_AT(c, 0xe8abfu);
    X86_POLL(c, 0xe8a9au); goto L_e8a9a;
L_e8ac1:
    X86_TICK(c, 9);
    // 0e8ac1  inc edi
    X86_AT(c, 0xe8ac1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e8ac2  jmp 0xe8a40
    X86_AT(c, 0xe8ac2u);
    X86_POLL(c, 0xe8a40u); goto L_e8a40;
L_e8ac7:
    X86_TICK(c, 13);
    // 0e8ac7  inc dword ptr [ebp - 4]
    X86_AT(c, 0xe8ac7u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e8aca  jmp 0xe8a34
    X86_AT(c, 0xe8acau);
    X86_POLL(c, 0xe8a34u); goto L_e8a34;
L_e8acf:
    X86_TICK(c, 7);
    // 0e8acf  call 0xfbbe8
    X86_AT(c, 0xe8acfu);
    push32(c, 0xe8ad4u); f_000fbbe8(c); X86_RET(c, 0xe8ad4u);
    X86_TICK(c, 9);
    // 0e8ad4  push 1
    X86_AT(c, 0xe8ad4u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e8ad6  call 0xe58cc
    X86_AT(c, 0xe8ad6u);
    push32(c, 0xe8adbu); f_000e58cc(c); X86_RET(c, 0xe8adbu);
    X86_TICK(c, 7);
    // 0e8adb  call 0xfa9d0
    X86_AT(c, 0xe8adbu);
    push32(c, 0xe8ae0u); f_000fa9d0(c); X86_RET(c, 0xe8ae0u);
    X86_TICK(c, 25);
    // 0e8ae0  mov dword ptr [0x7add8], 0xbe5f4
    X86_AT(c, 0xe8ae0u);
    wr32((c.sbase[3] + (uint32_t)(0x7ADD8u)), 0xBE5F4u);
    // 0e8aea  mov word ptr [0x7addc], 0x14
    X86_AT(c, 0xe8aeau);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDCu)), 0x14u);
    // 0e8af3  mov word ptr [0x7adde], 0x40
    X86_AT(c, 0xe8af3u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDEu)), 0x40u);
    // 0e8afc  mov word ptr [0x7ade0], 0x60
    X86_AT(c, 0xe8afcu);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE0u)), 0x60u);
    // 0e8b05  mov word ptr [0x7ade2], 0x19f
    X86_AT(c, 0xe8b05u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE2u)), 0x19Fu);
    // 0e8b0e  mov word ptr [0x7ade4], 0x1bf
    X86_AT(c, 0xe8b0eu);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE4u)), 0x1BFu);
    // 0e8b17  push 0x7add8
    X86_AT(c, 0xe8b17u);
    { uint32_t v = 0x7ADD8u; push32(c, v); }
    // 0e8b1c  push 0
    X86_AT(c, 0xe8b1cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e8b1e  push 0x7a7d8
    X86_AT(c, 0xe8b1eu);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e8b23  call 0x5c4
    X86_AT(c, 0xe8b23u);
    push32(c, 0xe8b28u); f_000005c4(c); X86_RET(c, 0xe8b28u);
    X86_TICK(c, 9);
    // 0e8b28  push 0
    X86_AT(c, 0xe8b28u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e8b2a  call 0xe58cc
    X86_AT(c, 0xe8b2au);
    push32(c, 0xe8b2fu); f_000e58cc(c); X86_RET(c, 0xe8b2fu);
    X86_TICK(c, 2);
    // 0e8b2f  add esp, 0x14
    X86_AT(c, 0xe8b2fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_e8b32:
    X86_TICK(c, 28);
    // 0e8b32  pop edi
    X86_AT(c, 0xe8b32u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e8b33  pop esi
    X86_AT(c, 0xe8b33u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e8b34  pop ebx
    X86_AT(c, 0xe8b34u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e8b35  leave 
    X86_AT(c, 0xe8b35u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e8b36  ret 
    X86_AT(c, 0xe8b36u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe8a0cu, "ran off the end of a function");
}
void f_000e8b38(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0e8b38  push ebx
    X86_AT(c, 0xe8b38u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e8b39  push esi
    X86_AT(c, 0xe8b39u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e8b3a  push edi
    X86_AT(c, 0xe8b3au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e8b3b  mov esi, 0x7b378
    X86_AT(c, 0xe8b3bu);
    c.r[6] = 0x7B378u;
    // 0e8b40  sub edi, edi
    X86_AT(c, 0xe8b40u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e8b42:
    X86_TICK(c, 7);
    // 0e8b42  cmp edi, 0x8000
    X86_AT(c, 0xe8b42u);
    (void)x86_sub(c, c.r[7], 0x8000u, 0, 4);
    // 0e8b48  jge 0xe8b86
    X86_AT(c, 0xe8b48u);
    if (x86_cc(c, 13)) { goto L_e8b86; }
    X86_TICK(c, 13);
    // 0e8b4a  mov bl, byte ptr [esi]
    X86_AT(c, 0xe8b4au);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0e8b4c  and bl, 0xf0
    X86_AT(c, 0xe8b4cu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xF0u, 1)); }
    // 0e8b4f  cmp bl, 0x50
    X86_AT(c, 0xe8b4fu);
    (void)x86_sub(c, g8(c, 3), 0x50u, 0, 1);
    // 0e8b52  je 0xe8b5e
    X86_AT(c, 0xe8b52u);
    if (x86_cc(c, 4)) { goto L_e8b5e; }
    X86_TICK(c, 7);
    // 0e8b54  cmp bl, 0x40
    X86_AT(c, 0xe8b54u);
    (void)x86_sub(c, g8(c, 3), 0x40u, 0, 1);
    // 0e8b57  je 0xe8b5e
    X86_AT(c, 0xe8b57u);
    if (x86_cc(c, 4)) { goto L_e8b5e; }
    X86_TICK(c, 7);
    // 0e8b59  cmp bl, 0x10
    X86_AT(c, 0xe8b59u);
    (void)x86_sub(c, g8(c, 3), 0x10u, 0, 1);
    // 0e8b5c  jne 0xe8b66
    X86_AT(c, 0xe8b5cu);
    if (x86_cc(c, 5)) { goto L_e8b66; }
L_e8b5e:
    X86_TICK(c, 10);
    // 0e8b5e  mov al, byte ptr [esi]
    X86_AT(c, 0xe8b5eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0e8b60  and al, 0xf
    X86_AT(c, 0xe8b60u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0e8b62  add al, 0x20
    X86_AT(c, 0xe8b62u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x20u, 0, 1)); }
    // 0e8b64  mov byte ptr [esi], al
    X86_AT(c, 0xe8b64u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), g8(c, 0));
L_e8b66:
    X86_TICK(c, 13);
    // 0e8b66  mov bl, byte ptr [esi]
    X86_AT(c, 0xe8b66u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0e8b68  and bl, 0xf
    X86_AT(c, 0xe8b68u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xFu, 1)); }
    // 0e8b6b  cmp bl, 5
    X86_AT(c, 0xe8b6bu);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0e8b6e  je 0xe8b7a
    X86_AT(c, 0xe8b6eu);
    if (x86_cc(c, 4)) { goto L_e8b7a; }
    X86_TICK(c, 7);
    // 0e8b70  cmp bl, 4
    X86_AT(c, 0xe8b70u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0e8b73  je 0xe8b7a
    X86_AT(c, 0xe8b73u);
    if (x86_cc(c, 4)) { goto L_e8b7a; }
    X86_TICK(c, 7);
    // 0e8b75  cmp bl, 1
    X86_AT(c, 0xe8b75u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0e8b78  jne 0xe8b82
    X86_AT(c, 0xe8b78u);
    if (x86_cc(c, 5)) { goto L_e8b82; }
L_e8b7a:
    X86_TICK(c, 10);
    // 0e8b7a  mov al, byte ptr [esi]
    X86_AT(c, 0xe8b7au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0e8b7c  and al, 0xf0
    X86_AT(c, 0xe8b7cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0e8b7e  add al, 2
    X86_AT(c, 0xe8b7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x2u, 0, 1)); }
    // 0e8b80  mov byte ptr [esi], al
    X86_AT(c, 0xe8b80u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), g8(c, 0));
L_e8b82:
    X86_TICK(c, 11);
    // 0e8b82  inc edi
    X86_AT(c, 0xe8b82u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e8b83  inc esi
    X86_AT(c, 0xe8b83u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e8b84  jmp 0xe8b42
    X86_AT(c, 0xe8b84u);
    X86_POLL(c, 0xe8b42u); goto L_e8b42;
L_e8b86:
    X86_TICK(c, 7);
    // 0e8b86  call 0xe7958
    X86_AT(c, 0xe8b86u);
    push32(c, 0xe8b8bu); f_000e7958(c); X86_RET(c, 0xe8b8bu);
    X86_TICK(c, 22);
    // 0e8b8b  pop edi
    X86_AT(c, 0xe8b8bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e8b8c  pop esi
    X86_AT(c, 0xe8b8cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e8b8d  pop ebx
    X86_AT(c, 0xe8b8du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e8b8e  ret 
    X86_AT(c, 0xe8b8eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe8b38u, "ran off the end of a function");
}
void f_000e8b90(X86Cpu& c) {
    X86_TICK(c, 39);
    // 0e8b90  push ebp
    X86_AT(c, 0xe8b90u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e8b91  mov ebp, esp
    X86_AT(c, 0xe8b91u);
    c.r[5] = c.r[4];
    // 0e8b93  sub esp, 0xc
    X86_AT(c, 0xe8b93u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0e8b96  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xe8b96u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
    // 0e8b9d  sub eax, eax
    X86_AT(c, 0xe8b9du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e8b9f  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xe8b9fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0e8ba2  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe8ba2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e8ba5  lea eax, [ebp - 0xc]
    X86_AT(c, 0xe8ba5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0e8ba8  push eax
    X86_AT(c, 0xe8ba8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e8ba9  lea eax, [ebp - 8]
    X86_AT(c, 0xe8ba9u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0e8bac  push eax
    X86_AT(c, 0xe8bacu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e8bad  lea eax, [ebp - 4]
    X86_AT(c, 0xe8badu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0e8bb0  push eax
    X86_AT(c, 0xe8bb0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e8bb1  push 0x8000
    X86_AT(c, 0xe8bb1u);
    { uint32_t v = 0x8000u; push32(c, v); }
    // 0e8bb6  push 0x93378
    X86_AT(c, 0xe8bb6u);
    { uint32_t v = 0x93378u; push32(c, v); }
    // 0e8bbb  push 0x218c
    X86_AT(c, 0xe8bbbu);
    { uint32_t v = 0x218Cu; push32(c, v); }
    // 0e8bc0  call 0xe6460
    X86_AT(c, 0xe8bc0u);
    push32(c, 0xe8bc5u); f_000e6460(c); X86_RET(c, 0xe8bc5u);
    X86_TICK(c, 13);
    // 0e8bc5  add esp, 0x18
    X86_AT(c, 0xe8bc5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0e8bc8  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xe8bc8u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e8bcb  and edx, edx
    X86_AT(c, 0xe8bcbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0e8bcd  je 0xe8bdb
    X86_AT(c, 0xe8bcdu);
    if (x86_cc(c, 4)) { goto L_e8bdb; }
    X86_TICK(c, 7);
    // 0e8bcf  cmp edx, 1
    X86_AT(c, 0xe8bcfu);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0e8bd2  je 0xe8bf8
    X86_AT(c, 0xe8bd2u);
    if (x86_cc(c, 4)) { goto L_e8bf8; }
    X86_TICK(c, 7);
    // 0e8bd4  cmp edx, 2
    X86_AT(c, 0xe8bd4u);
    (void)x86_sub(c, c.r[2], 0x2u, 0, 4);
    // 0e8bd7  je 0xe8c15
    X86_AT(c, 0xe8bd7u);
    if (x86_cc(c, 4)) { goto L_e8c15; }
    X86_TICK(c, 7);
    // 0e8bd9  jmp 0xe8c38
    X86_AT(c, 0xe8bd9u);
    goto L_e8c38;
L_e8bdb:
    X86_TICK(c, 25);
    // 0e8bdb  lea eax, [ebp - 0xc]
    X86_AT(c, 0xe8bdbu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0e8bde  push eax
    X86_AT(c, 0xe8bdeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e8bdf  lea eax, [ebp - 8]
    X86_AT(c, 0xe8bdfu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0e8be2  push eax
    X86_AT(c, 0xe8be2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e8be3  lea eax, [ebp - 4]
    X86_AT(c, 0xe8be3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0e8be6  push eax
    X86_AT(c, 0xe8be6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e8be7  push 0x8000
    X86_AT(c, 0xe8be7u);
    { uint32_t v = 0x8000u; push32(c, v); }
    // 0e8bec  push 0x7b378
    X86_AT(c, 0xe8becu);
    { uint32_t v = 0x7B378u; push32(c, v); }
    // 0e8bf1  push 0x21a0
    X86_AT(c, 0xe8bf1u);
    { uint32_t v = 0x21A0u; push32(c, v); }
    // 0e8bf6  jmp 0xe8c30
    X86_AT(c, 0xe8bf6u);
    goto L_e8c30;
L_e8bf8:
    X86_TICK(c, 25);
    // 0e8bf8  lea eax, [ebp - 0xc]
    X86_AT(c, 0xe8bf8u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0e8bfb  push eax
    X86_AT(c, 0xe8bfbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e8bfc  lea eax, [ebp - 8]
    X86_AT(c, 0xe8bfcu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0e8bff  push eax
    X86_AT(c, 0xe8bffu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e8c00  lea eax, [ebp - 4]
    X86_AT(c, 0xe8c00u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0e8c03  push eax
    X86_AT(c, 0xe8c03u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e8c04  push 0x8000
    X86_AT(c, 0xe8c04u);
    { uint32_t v = 0x8000u; push32(c, v); }
    // 0e8c09  push 0x7b378
    X86_AT(c, 0xe8c09u);
    { uint32_t v = 0x7B378u; push32(c, v); }
    // 0e8c0e  push 0x21b4
    X86_AT(c, 0xe8c0eu);
    { uint32_t v = 0x21B4u; push32(c, v); }
    // 0e8c13  jmp 0xe8c30
    X86_AT(c, 0xe8c13u);
    goto L_e8c30;
L_e8c15:
    X86_TICK(c, 18);
    // 0e8c15  lea eax, [ebp - 0xc]
    X86_AT(c, 0xe8c15u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0e8c18  push eax
    X86_AT(c, 0xe8c18u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e8c19  lea eax, [ebp - 8]
    X86_AT(c, 0xe8c19u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0e8c1c  push eax
    X86_AT(c, 0xe8c1cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e8c1d  lea eax, [ebp - 4]
    X86_AT(c, 0xe8c1du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0e8c20  push eax
    X86_AT(c, 0xe8c20u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e8c21  push 0x8000
    X86_AT(c, 0xe8c21u);
    { uint32_t v = 0x8000u; push32(c, v); }
    // 0e8c26  push 0x7b378
    X86_AT(c, 0xe8c26u);
    { uint32_t v = 0x7B378u; push32(c, v); }
    // 0e8c2b  push 0x21c8
    X86_AT(c, 0xe8c2bu);
    { uint32_t v = 0x21C8u; push32(c, v); }
L_e8c30:
    X86_TICK(c, 7);
    // 0e8c30  call 0xe6460
    X86_AT(c, 0xe8c30u);
    push32(c, 0xe8c35u); f_000e6460(c); X86_RET(c, 0xe8c35u);
    X86_TICK(c, 2);
    // 0e8c35  add esp, 0x18
    X86_AT(c, 0xe8c35u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_e8c38:
    X86_TICK(c, 7);
    // 0e8c38  call 0xe7958
    X86_AT(c, 0xe8c38u);
    push32(c, 0xe8c3du); f_000e7958(c); X86_RET(c, 0xe8c3du);
    X86_TICK(c, 16);
    // 0e8c3d  leave 
    X86_AT(c, 0xe8c3du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e8c3e  ret 
    X86_AT(c, 0xe8c3eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe8b90u, "ran off the end of a function");
}
void f_000e8c40(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0e8c40  push esi
    X86_AT(c, 0xe8c40u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e8c41  push edi
    X86_AT(c, 0xe8c41u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e8c42  jmp 0xe8d8d
    X86_AT(c, 0xe8c42u);
    goto L_e8d8d;
L_e8d8d:
    X86_TICK(c, 18);
    // 0e8d8d  pop edi
    X86_AT(c, 0xe8d8du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e8d8e  pop esi
    X86_AT(c, 0xe8d8eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e8d8f  ret 
    X86_AT(c, 0xe8d8fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe8c40u, "ran off the end of a function");
}
void f_000e8d90(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0e8d90  push 0
    X86_AT(c, 0xe8d90u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e8d92  push 0xf
    X86_AT(c, 0xe8d92u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e8d94  push 0xf
    X86_AT(c, 0xe8d94u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e8d96  push 6
    X86_AT(c, 0xe8d96u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0e8d98  push 0x1f
    X86_AT(c, 0xe8d98u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0e8d9a  push 0x75
    X86_AT(c, 0xe8d9au);
    { uint32_t v = 0x75u; push32(c, v); }
    // 0e8d9c  push 0x107
    X86_AT(c, 0xe8d9cu);
    { uint32_t v = 0x107u; push32(c, v); }
    // 0e8da1  push 0x12f
    X86_AT(c, 0xe8da1u);
    { uint32_t v = 0x12Fu; push32(c, v); }
    // 0e8da6  push 0x172
    X86_AT(c, 0xe8da6u);
    { uint32_t v = 0x172u; push32(c, v); }
    // 0e8dab  push 7
    X86_AT(c, 0xe8dabu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e8dad  call 0xe6858
    X86_AT(c, 0xe8dadu);
    push32(c, 0xe8db2u); f_000e6858(c); X86_RET(c, 0xe8db2u);
    X86_TICK(c, 9);
    // 0e8db2  push 7
    X86_AT(c, 0xe8db2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e8db4  call 0xe699c
    X86_AT(c, 0xe8db4u);
    push32(c, 0xe8db9u); f_000e699c(c); X86_RET(c, 0xe8db9u);
    X86_TICK(c, 12);
    // 0e8db9  add esp, 0x2c
    X86_AT(c, 0xe8db9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0e8dbc  ret 
    X86_AT(c, 0xe8dbcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe8d90u, "ran off the end of a function");
}
void f_000e8dc0(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0e8dc0  push 0
    X86_AT(c, 0xe8dc0u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e8dc2  push 0xf
    X86_AT(c, 0xe8dc2u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e8dc4  push 0xf
    X86_AT(c, 0xe8dc4u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e8dc6  push 2
    X86_AT(c, 0xe8dc6u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e8dc8  push 0x1f
    X86_AT(c, 0xe8dc8u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0e8dca  push 0x34
    X86_AT(c, 0xe8dcau);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0e8dcc  push 0x107
    X86_AT(c, 0xe8dccu);
    { uint32_t v = 0x107u; push32(c, v); }
    // 0e8dd1  push 0x2f
    X86_AT(c, 0xe8dd1u);
    { uint32_t v = 0x2Fu; push32(c, v); }
    // 0e8dd3  push 0x172
    X86_AT(c, 0xe8dd3u);
    { uint32_t v = 0x172u; push32(c, v); }
    // 0e8dd8  push 0xa
    X86_AT(c, 0xe8dd8u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e8dda  call 0xe6858
    X86_AT(c, 0xe8ddau);
    push32(c, 0xe8ddfu); f_000e6858(c); X86_RET(c, 0xe8ddfu);
    X86_TICK(c, 9);
    // 0e8ddf  push 0xa
    X86_AT(c, 0xe8ddfu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e8de1  call 0xe693c
    X86_AT(c, 0xe8de1u);
    push32(c, 0xe8de6u); f_000e693c(c); X86_RET(c, 0xe8de6u);
    X86_TICK(c, 9);
    // 0e8de6  push 0xa
    X86_AT(c, 0xe8de6u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e8de8  call 0xe699c
    X86_AT(c, 0xe8de8u);
    push32(c, 0xe8dedu); f_000e699c(c); X86_RET(c, 0xe8dedu);
    X86_TICK(c, 9);
    // 0e8ded  push 0xa
    X86_AT(c, 0xe8dedu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e8def  call 0xe693c
    X86_AT(c, 0xe8defu);
    push32(c, 0xe8df4u); f_000e693c(c); X86_RET(c, 0xe8df4u);
    X86_TICK(c, 13);
    // 0e8df4  push 0
    X86_AT(c, 0xe8df4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e8df6  push 0
    X86_AT(c, 0xe8df6u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e8df8  push 0xa
    X86_AT(c, 0xe8df8u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e8dfa  call 0xe7260
    X86_AT(c, 0xe8dfau);
    push32(c, 0xe8dffu); f_000e7260(c); X86_RET(c, 0xe8dffu);
    X86_TICK(c, 28);
    // 0e8dff  add esp, 0x40
    X86_AT(c, 0xe8dffu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0e8e02  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe8e02u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e8e07  lea edx, [eax + eax*4]
    X86_AT(c, 0xe8e07u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e8e0a  lea edx, [eax + edx*2]
    X86_AT(c, 0xe8e0au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e8e0d  shl edx, 5
    X86_AT(c, 0xe8e0du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e8e10  sub edx, eax
    X86_AT(c, 0xe8e10u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e8e12  add edx, 0xcde4d
    X86_AT(c, 0xe8e12u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xCDE4Du, 0, 4); }
    // 0e8e18  push edx
    X86_AT(c, 0xe8e18u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e8e19  push 0xa
    X86_AT(c, 0xe8e19u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e8e1b  call 0xe70ec
    X86_AT(c, 0xe8e1bu);
    push32(c, 0xe8e20u); f_000e70ec(c); X86_RET(c, 0xe8e20u);
    X86_TICK(c, 13);
    // 0e8e20  push 1
    X86_AT(c, 0xe8e20u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e8e22  push 2
    X86_AT(c, 0xe8e22u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e8e24  push 0xa
    X86_AT(c, 0xe8e24u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e8e26  call 0xe7260
    X86_AT(c, 0xe8e26u);
    push32(c, 0xe8e2bu); f_000e7260(c); X86_RET(c, 0xe8e2bu);
    X86_TICK(c, 11);
    // 0e8e2b  push 0x21dc
    X86_AT(c, 0xe8e2bu);
    { uint32_t v = 0x21DCu; push32(c, v); }
    // 0e8e30  push 0xa
    X86_AT(c, 0xe8e30u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e8e32  call 0xe6cb0
    X86_AT(c, 0xe8e32u);
    push32(c, 0xe8e37u); f_000e6cb0(c); X86_RET(c, 0xe8e37u);
    X86_TICK(c, 13);
    // 0e8e37  push 2
    X86_AT(c, 0xe8e37u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e8e39  push 2
    X86_AT(c, 0xe8e39u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e8e3b  push 0xa
    X86_AT(c, 0xe8e3bu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e8e3d  call 0xe7260
    X86_AT(c, 0xe8e3du);
    push32(c, 0xe8e42u); f_000e7260(c); X86_RET(c, 0xe8e42u);
    X86_TICK(c, 11);
    // 0e8e42  push 0x21f0
    X86_AT(c, 0xe8e42u);
    { uint32_t v = 0x21F0u; push32(c, v); }
    // 0e8e47  push 0xa
    X86_AT(c, 0xe8e47u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e8e49  call 0xe6cb0
    X86_AT(c, 0xe8e49u);
    push32(c, 0xe8e4eu); f_000e6cb0(c); X86_RET(c, 0xe8e4eu);
    X86_TICK(c, 27);
    // 0e8e4e  push 0
    X86_AT(c, 0xe8e4eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e8e50  push 0xf
    X86_AT(c, 0xe8e50u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e8e52  push 0xf
    X86_AT(c, 0xe8e52u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e8e54  push 0xa
    X86_AT(c, 0xe8e54u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e8e56  push 0x1f
    X86_AT(c, 0xe8e56u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0e8e58  push 0xb6
    X86_AT(c, 0xe8e58u);
    { uint32_t v = 0xB6u; push32(c, v); }
    // 0e8e5d  push 0x107
    X86_AT(c, 0xe8e5du);
    { uint32_t v = 0x107u; push32(c, v); }
    // 0e8e62  push 0x6f
    X86_AT(c, 0xe8e62u);
    { uint32_t v = 0x6Fu; push32(c, v); }
    // 0e8e64  push 0x172
    X86_AT(c, 0xe8e64u);
    { uint32_t v = 0x172u; push32(c, v); }
    // 0e8e69  push 0xb
    X86_AT(c, 0xe8e69u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e8e6b  call 0xe6858
    X86_AT(c, 0xe8e6bu);
    push32(c, 0xe8e70u); f_000e6858(c); X86_RET(c, 0xe8e70u);
    X86_TICK(c, 11);
    // 0e8e70  add esp, 0x58
    X86_AT(c, 0xe8e70u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x58u, 0, 4); }
    // 0e8e73  push 0xb
    X86_AT(c, 0xe8e73u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e8e75  call 0xe699c
    X86_AT(c, 0xe8e75u);
    push32(c, 0xe8e7au); f_000e699c(c); X86_RET(c, 0xe8e7au);
    X86_TICK(c, 9);
    // 0e8e7a  push 7
    X86_AT(c, 0xe8e7au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e8e7c  call 0xe699c
    X86_AT(c, 0xe8e7cu);
    push32(c, 0xe8e81u); f_000e699c(c); X86_RET(c, 0xe8e81u);
    X86_TICK(c, 11);
    // 0e8e81  add esp, 8
    X86_AT(c, 0xe8e81u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e8e84  push 7
    X86_AT(c, 0xe8e84u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e8e86  call 0xe756c
    X86_AT(c, 0xe8e86u);
    push32(c, 0xe8e8bu); f_000e756c(c); X86_RET(c, 0xe8e8bu);
    X86_TICK(c, 12);
    // 0e8e8b  add esp, 4
    X86_AT(c, 0xe8e8bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e8e8e  ret 
    X86_AT(c, 0xe8e8eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe8dc0u, "ran off the end of a function");
}
void f_000e8e90(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0e8e90  push edi
    X86_AT(c, 0xe8e90u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e8e91  push 0xa
    X86_AT(c, 0xe8e91u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e8e93  call 0xe693c
    X86_AT(c, 0xe8e93u);
    push32(c, 0xe8e98u); f_000e693c(c); X86_RET(c, 0xe8e98u);
    X86_TICK(c, 9);
    // 0e8e98  push 0xa
    X86_AT(c, 0xe8e98u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e8e9a  call 0xe6af0
    X86_AT(c, 0xe8e9au);
    push32(c, 0xe8e9fu); f_000e6af0(c); X86_RET(c, 0xe8e9fu);
    X86_TICK(c, 9);
    // 0e8e9f  push 0xa
    X86_AT(c, 0xe8e9fu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e8ea1  call 0xe693c
    X86_AT(c, 0xe8ea1u);
    push32(c, 0xe8ea6u); f_000e693c(c); X86_RET(c, 0xe8ea6u);
    X86_TICK(c, 13);
    // 0e8ea6  push 0
    X86_AT(c, 0xe8ea6u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e8ea8  push 0
    X86_AT(c, 0xe8ea8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e8eaa  push 0xa
    X86_AT(c, 0xe8eaau);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e8eac  call 0xe7260
    X86_AT(c, 0xe8eacu);
    push32(c, 0xe8eb1u); f_000e7260(c); X86_RET(c, 0xe8eb1u);
    X86_TICK(c, 26);
    // 0e8eb1  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe8eb1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e8eb6  lea edx, [eax + eax*4]
    X86_AT(c, 0xe8eb6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e8eb9  lea edx, [eax + edx*2]
    X86_AT(c, 0xe8eb9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e8ebc  shl edx, 5
    X86_AT(c, 0xe8ebcu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e8ebf  sub edx, eax
    X86_AT(c, 0xe8ebfu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e8ec1  add edx, 0xcde4d
    X86_AT(c, 0xe8ec1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xCDE4Du, 0, 4); }
    // 0e8ec7  push edx
    X86_AT(c, 0xe8ec7u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e8ec8  push 0xa
    X86_AT(c, 0xe8ec8u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e8eca  call 0xe70ec
    X86_AT(c, 0xe8ecau);
    push32(c, 0xe8ecfu); f_000e70ec(c); X86_RET(c, 0xe8ecfu);
    X86_TICK(c, 13);
    // 0e8ecf  push 1
    X86_AT(c, 0xe8ecfu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e8ed1  push 2
    X86_AT(c, 0xe8ed1u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e8ed3  push 0xa
    X86_AT(c, 0xe8ed3u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e8ed5  call 0xe7260
    X86_AT(c, 0xe8ed5u);
    push32(c, 0xe8edau); f_000e7260(c); X86_RET(c, 0xe8edau);
    X86_TICK(c, 11);
    // 0e8eda  push 0x2204
    X86_AT(c, 0xe8edau);
    { uint32_t v = 0x2204u; push32(c, v); }
    // 0e8edf  push 0xa
    X86_AT(c, 0xe8edfu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e8ee1  call 0xe6cb0
    X86_AT(c, 0xe8ee1u);
    push32(c, 0xe8ee6u); f_000e6cb0(c); X86_RET(c, 0xe8ee6u);
    X86_TICK(c, 13);
    // 0e8ee6  push 2
    X86_AT(c, 0xe8ee6u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e8ee8  push 2
    X86_AT(c, 0xe8ee8u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e8eea  push 0xa
    X86_AT(c, 0xe8eeau);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e8eec  call 0xe7260
    X86_AT(c, 0xe8eecu);
    push32(c, 0xe8ef1u); f_000e7260(c); X86_RET(c, 0xe8ef1u);
    X86_TICK(c, 13);
    // 0e8ef1  add esp, 0x40
    X86_AT(c, 0xe8ef1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0e8ef4  push 0x2218
    X86_AT(c, 0xe8ef4u);
    { uint32_t v = 0x2218u; push32(c, v); }
    // 0e8ef9  push 0xa
    X86_AT(c, 0xe8ef9u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e8efb  call 0xe6cb0
    X86_AT(c, 0xe8efbu);
    push32(c, 0xe8f00u); f_000e6cb0(c); X86_RET(c, 0xe8f00u);
    X86_TICK(c, 35);
    // 0e8f00  sub edi, edi
    X86_AT(c, 0xe8f00u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0e8f02  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe8f02u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e8f07  lea edx, [eax + eax*4]
    X86_AT(c, 0xe8f07u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e8f0a  lea edx, [eax + edx*2]
    X86_AT(c, 0xe8f0au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e8f0d  shl edx, 5
    X86_AT(c, 0xe8f0du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e8f10  sub edx, eax
    X86_AT(c, 0xe8f10u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e8f12  add esp, 8
    X86_AT(c, 0xe8f12u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e8f15  movzx eax, byte ptr [edx + 0xcde7b]
    X86_AT(c, 0xe8f15u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Bu)));
    // 0e8f1c  xchg edx, eax
    X86_AT(c, 0xe8f1cu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0e8f1d  sub edx, 0x41
    X86_AT(c, 0xe8f1du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x41u, 0, 4); }
    // 0e8f20  cmp edx, 0x16
    X86_AT(c, 0xe8f20u);
    (void)x86_sub(c, c.r[2], 0x16u, 0, 4);
    // 0e8f23  ja 0xe8fd5
    X86_AT(c, 0xe8f23u);
    if (x86_cc(c, 7)) { goto L_e8fd5; }
    X86_TICK(c, 7);
    // 0e8f29  jmp dword ptr cs:[edx*4 + 0xe8f31]
    X86_AT(c, 0xe8f29u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xE8F31u)));
      switch (t) {
      case 0xe8f8du: goto L_e8f8d;
      case 0xe8f91u: goto L_e8f91;
      case 0xe8f98u: goto L_e8f98;
      case 0xe8f9fu: goto L_e8f9f;
      case 0xe8fa6u: goto L_e8fa6;
      case 0xe8fadu: goto L_e8fad;
      case 0xe8fb4u: goto L_e8fb4;
      case 0xe8fbbu: goto L_e8fbb;
      case 0xe8fc2u: goto L_e8fc2;
      case 0xe8fc9u: goto L_e8fc9;
      case 0xe8fd0u: goto L_e8fd0;
      case 0xe8fd5u: goto L_e8fd5;
      default: x86_jump(c, t); return; } }
L_e8f8d:
    X86_TICK(c, 9);
    // 0e8f8d  sub edi, edi
    X86_AT(c, 0xe8f8du);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0e8f8f  jmp 0xe8fd5
    X86_AT(c, 0xe8f8fu);
    goto L_e8fd5;
L_e8f91:
    X86_TICK(c, 9);
    // 0e8f91  mov edi, 4
    X86_AT(c, 0xe8f91u);
    c.r[7] = 0x4u;
    // 0e8f96  jmp 0xe8fd5
    X86_AT(c, 0xe8f96u);
    goto L_e8fd5;
L_e8f98:
    X86_TICK(c, 9);
    // 0e8f98  mov edi, 8
    X86_AT(c, 0xe8f98u);
    c.r[7] = 0x8u;
    // 0e8f9d  jmp 0xe8fd5
    X86_AT(c, 0xe8f9du);
    goto L_e8fd5;
L_e8f9f:
    X86_TICK(c, 9);
    // 0e8f9f  mov edi, 0xc
    X86_AT(c, 0xe8f9fu);
    c.r[7] = 0xCu;
    // 0e8fa4  jmp 0xe8fd5
    X86_AT(c, 0xe8fa4u);
    goto L_e8fd5;
L_e8fa6:
    X86_TICK(c, 9);
    // 0e8fa6  mov edi, 0x10
    X86_AT(c, 0xe8fa6u);
    c.r[7] = 0x10u;
    // 0e8fab  jmp 0xe8fd5
    X86_AT(c, 0xe8fabu);
    goto L_e8fd5;
L_e8fad:
    X86_TICK(c, 9);
    // 0e8fad  mov edi, 0x18
    X86_AT(c, 0xe8fadu);
    c.r[7] = 0x18u;
    // 0e8fb2  jmp 0xe8fd5
    X86_AT(c, 0xe8fb2u);
    goto L_e8fd5;
L_e8fb4:
    X86_TICK(c, 9);
    // 0e8fb4  mov edi, 0x14
    X86_AT(c, 0xe8fb4u);
    c.r[7] = 0x14u;
    // 0e8fb9  jmp 0xe8fd5
    X86_AT(c, 0xe8fb9u);
    goto L_e8fd5;
L_e8fbb:
    X86_TICK(c, 9);
    // 0e8fbb  mov edi, 0x20
    X86_AT(c, 0xe8fbbu);
    c.r[7] = 0x20u;
    // 0e8fc0  jmp 0xe8fd5
    X86_AT(c, 0xe8fc0u);
    goto L_e8fd5;
L_e8fc2:
    X86_TICK(c, 9);
    // 0e8fc2  mov edi, 0x1c
    X86_AT(c, 0xe8fc2u);
    c.r[7] = 0x1Cu;
    // 0e8fc7  jmp 0xe8fd5
    X86_AT(c, 0xe8fc7u);
    goto L_e8fd5;
L_e8fc9:
    X86_TICK(c, 9);
    // 0e8fc9  mov edi, 0x24
    X86_AT(c, 0xe8fc9u);
    c.r[7] = 0x24u;
    // 0e8fce  jmp 0xe8fd5
    X86_AT(c, 0xe8fceu);
    goto L_e8fd5;
L_e8fd0:
    X86_TICK(c, 2);
    // 0e8fd0  mov edi, 0x28
    X86_AT(c, 0xe8fd0u);
    c.r[7] = 0x28u;
L_e8fd5:
    X86_TICK(c, 25);
    // 0e8fd5  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe8fd5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e8fda  lea edx, [eax + eax*4]
    X86_AT(c, 0xe8fdau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e8fdd  lea edx, [eax + edx*2]
    X86_AT(c, 0xe8fddu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e8fe0  shl edx, 5
    X86_AT(c, 0xe8fe0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e8fe3  sub edx, eax
    X86_AT(c, 0xe8fe3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e8fe5  cmp byte ptr [edx + 0xcde7c], 0x46
    X86_AT(c, 0xe8fe5u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Cu))), 0x46u, 0, 1);
    // 0e8fec  jne 0xe8ff1
    X86_AT(c, 0xe8fecu);
    if (x86_cc(c, 5)) { goto L_e8ff1; }
    X86_TICK(c, 2);
    // 0e8fee  add edi, 2
    X86_AT(c, 0xe8feeu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
L_e8ff1:
    X86_TICK(c, 22);
    // 0e8ff1  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe8ff1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e8ff6  lea edx, [eax + eax*4]
    X86_AT(c, 0xe8ff6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e8ff9  lea edx, [eax + edx*2]
    X86_AT(c, 0xe8ff9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e8ffc  shl edx, 5
    X86_AT(c, 0xe8ffcu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e8fff  sub edx, eax
    X86_AT(c, 0xe8fffu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e9001  mov dword ptr [edx + 0xcde5a], edi
    X86_AT(c, 0xe9001u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE5Au)), c.r[7]);
    // 0e9007  call 0xe9010
    X86_AT(c, 0xe9007u);
    push32(c, 0xe900cu); f_000e9010(c); X86_RET(c, 0xe900cu);
    X86_TICK(c, 14);
    // 0e900c  pop edi
    X86_AT(c, 0xe900cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e900d  ret 
    X86_AT(c, 0xe900du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe8e90u, "ran off the end of a function");
}
void f_000e9010(X86Cpu& c) {
    X86_TICK(c, 37);
    // 0e9010  push ebp
    X86_AT(c, 0xe9010u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e9011  mov ebp, esp
    X86_AT(c, 0xe9011u);
    c.r[5] = c.r[4];
    // 0e9013  push eax
    X86_AT(c, 0xe9013u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e9014  push ebx
    X86_AT(c, 0xe9014u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e9015  push esi
    X86_AT(c, 0xe9015u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e9016  push edi
    X86_AT(c, 0xe9016u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e9017  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe9017u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e901c  lea edx, [eax + eax*4]
    X86_AT(c, 0xe901cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e901f  lea edx, [eax + edx*2]
    X86_AT(c, 0xe901fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e9022  shl edx, 5
    X86_AT(c, 0xe9022u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e9025  sub edx, eax
    X86_AT(c, 0xe9025u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e9027  cmp dword ptr [edx + 0xcde81], 0x32
    X86_AT(c, 0xe9027u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE81u))), 0x32u, 0, 4);
    // 0e902e  jge 0xe9034
    X86_AT(c, 0xe902eu);
    if (x86_cc(c, 13)) { goto L_e9034; }
    X86_TICK(c, 9);
    // 0e9030  push 0xb
    X86_AT(c, 0xe9030u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e9032  jmp 0xe9036
    X86_AT(c, 0xe9032u);
    goto L_e9036;
L_e9034:
    X86_TICK(c, 2);
    // 0e9034  push 0xf
    X86_AT(c, 0xe9034u);
    { uint32_t v = 0xFu; push32(c, v); }
L_e9036:
    X86_TICK(c, 9);
    // 0e9036  push 0xa
    X86_AT(c, 0xe9036u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e9038  call 0xe74d8
    X86_AT(c, 0xe9038u);
    push32(c, 0xe903du); f_000e74d8(c); X86_RET(c, 0xe903du);
    X86_TICK(c, 11);
    // 0e903d  add esp, 8
    X86_AT(c, 0xe903du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e9040  push 0xa
    X86_AT(c, 0xe9040u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e9042  call 0xe693c
    X86_AT(c, 0xe9042u);
    push32(c, 0xe9047u); f_000e693c(c); X86_RET(c, 0xe9047u);
    X86_TICK(c, 13);
    // 0e9047  push 1
    X86_AT(c, 0xe9047u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e9049  push 5
    X86_AT(c, 0xe9049u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e904b  push 0xa
    X86_AT(c, 0xe904bu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e904d  call 0xe7260
    X86_AT(c, 0xe904du);
    push32(c, 0xe9052u); f_000e7260(c); X86_RET(c, 0xe9052u);
    X86_TICK(c, 29);
    // 0e9052  push 4
    X86_AT(c, 0xe9052u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e9054  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe9054u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e9059  lea edx, [eax + eax*4]
    X86_AT(c, 0xe9059u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e905c  lea edx, [eax + edx*2]
    X86_AT(c, 0xe905cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e905f  shl edx, 5
    X86_AT(c, 0xe905fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e9062  sub edx, eax
    X86_AT(c, 0xe9062u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e9064  push dword ptr [edx + 0xcde81]
    X86_AT(c, 0xe9064u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE81u))); push32(c, v); }
    // 0e906a  push 0xa
    X86_AT(c, 0xe906au);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e906c  call 0xe5630
    X86_AT(c, 0xe906cu);
    push32(c, 0xe9071u); f_000e5630(c); X86_RET(c, 0xe9071u);
    X86_TICK(c, 13);
    // 0e9071  push 1
    X86_AT(c, 0xe9071u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e9073  push 0x13
    X86_AT(c, 0xe9073u);
    { uint32_t v = 0x13u; push32(c, v); }
    // 0e9075  push 0xa
    X86_AT(c, 0xe9075u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e9077  call 0xe7260
    X86_AT(c, 0xe9077u);
    push32(c, 0xe907cu); f_000e7260(c); X86_RET(c, 0xe907cu);
    X86_TICK(c, 29);
    // 0e907c  push 4
    X86_AT(c, 0xe907cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e907e  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe907eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e9083  lea edx, [eax + eax*4]
    X86_AT(c, 0xe9083u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e9086  lea edx, [eax + edx*2]
    X86_AT(c, 0xe9086u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e9089  shl edx, 5
    X86_AT(c, 0xe9089u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e908c  sub edx, eax
    X86_AT(c, 0xe908cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e908e  push dword ptr [edx + 0xcde89]
    X86_AT(c, 0xe908eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE89u))); push32(c, v); }
    // 0e9094  push 0xa
    X86_AT(c, 0xe9094u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e9096  call 0xe5630
    X86_AT(c, 0xe9096u);
    push32(c, 0xe909bu); f_000e5630(c); X86_RET(c, 0xe909bu);
    X86_TICK(c, 13);
    // 0e909b  push 2
    X86_AT(c, 0xe909bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e909d  push 5
    X86_AT(c, 0xe909du);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e909f  push 0xa
    X86_AT(c, 0xe909fu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e90a1  call 0xe7260
    X86_AT(c, 0xe90a1u);
    push32(c, 0xe90a6u); f_000e7260(c); X86_RET(c, 0xe90a6u);
    X86_TICK(c, 76);
    // 0e90a6  add esp, 0x40
    X86_AT(c, 0xe90a6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0e90a9  push 4
    X86_AT(c, 0xe90a9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e90ab  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe90abu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e90b0  lea edx, [eax + eax*4]
    X86_AT(c, 0xe90b0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e90b3  lea edx, [eax + edx*2]
    X86_AT(c, 0xe90b3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e90b6  shl edx, 5
    X86_AT(c, 0xe90b6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e90b9  sub edx, eax
    X86_AT(c, 0xe90b9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e90bb  mov eax, dword ptr [edx + 0xcde8d]
    X86_AT(c, 0xe90bbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE8Du)));
    // 0e90c1  cdq 
    X86_AT(c, 0xe90c1u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e90c2  mov ecx, 0x64
    X86_AT(c, 0xe90c2u);
    c.r[1] = 0x64u;
    // 0e90c7  idiv ecx
    X86_AT(c, 0xe90c7u);
    x86_idiv(c, c.r[1], 4, 0xe90c7u);
    // 0e90c9  push eax
    X86_AT(c, 0xe90c9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e90ca  push 0xa
    X86_AT(c, 0xe90cau);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e90cc  call 0xe5630
    X86_AT(c, 0xe90ccu);
    push32(c, 0xe90d1u); f_000e5630(c); X86_RET(c, 0xe90d1u);
    X86_TICK(c, 13);
    // 0e90d1  push 2
    X86_AT(c, 0xe90d1u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e90d3  push 0x13
    X86_AT(c, 0xe90d3u);
    { uint32_t v = 0x13u; push32(c, v); }
    // 0e90d5  push 0xa
    X86_AT(c, 0xe90d5u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e90d7  call 0xe7260
    X86_AT(c, 0xe90d7u);
    push32(c, 0xe90dcu); f_000e7260(c); X86_RET(c, 0xe90dcu);
    X86_TICK(c, 29);
    // 0e90dc  push 4
    X86_AT(c, 0xe90dcu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e90de  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe90deu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e90e3  lea edx, [eax + eax*4]
    X86_AT(c, 0xe90e3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e90e6  lea edx, [eax + edx*2]
    X86_AT(c, 0xe90e6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e90e9  shl edx, 5
    X86_AT(c, 0xe90e9u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e90ec  sub edx, eax
    X86_AT(c, 0xe90ecu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e90ee  push dword ptr [edx + 0xcde91]
    X86_AT(c, 0xe90eeu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE91u))); push32(c, v); }
    // 0e90f4  push 0xa
    X86_AT(c, 0xe90f4u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e90f6  call 0xe5630
    X86_AT(c, 0xe90f6u);
    push32(c, 0xe90fbu); f_000e5630(c); X86_RET(c, 0xe90fbu);
    X86_TICK(c, 11);
    // 0e90fb  push 0xf
    X86_AT(c, 0xe90fbu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e90fd  push 0xa
    X86_AT(c, 0xe90fdu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e90ff  call 0xe74d8
    X86_AT(c, 0xe90ffu);
    push32(c, 0xe9104u); f_000e74d8(c); X86_RET(c, 0xe9104u);
    X86_TICK(c, 28);
    // 0e9104  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe9104u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e9109  lea edx, [eax + eax*4]
    X86_AT(c, 0xe9109u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e910c  lea edx, [eax + edx*2]
    X86_AT(c, 0xe910cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e910f  shl edx, 5
    X86_AT(c, 0xe910fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e9112  sub edx, eax
    X86_AT(c, 0xe9112u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e9114  mov eax, dword ptr [edx + 0xcde5a]
    X86_AT(c, 0xe9114u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE5Au)));
    // 0e911a  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe911au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e911d  push 0
    X86_AT(c, 0xe911du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e911f  call 0xe58b8
    X86_AT(c, 0xe911fu);
    push32(c, 0xe9124u); f_000e58b8(c); X86_RET(c, 0xe9124u);
    X86_TICK(c, 38);
    // 0e9124  add esp, 0x30
    X86_AT(c, 0xe9124u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0e9127  mov ebx, 0xcdc34
    X86_AT(c, 0xe9127u);
    c.r[3] = 0xCDC34u;
    // 0e912c  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe912cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e912f  shl eax, 9
    X86_AT(c, 0xe912fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0e9132  lea esi, [eax*1 + 0x83378]
    X86_AT(c, 0xe9132u);
    c.r[6] = (uint32_t)(c.r[0] + 0x83378u);
    // 0e9139  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe9139u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e913e  lea edx, [eax + eax*4]
    X86_AT(c, 0xe913eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e9141  lea edx, [eax + edx*2]
    X86_AT(c, 0xe9141u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e9144  shl edx, 5
    X86_AT(c, 0xe9144u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e9147  sub edx, eax
    X86_AT(c, 0xe9147u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e9149  cmp dword ptr [edx + 0xcdf9b], 0
    X86_AT(c, 0xe9149u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF9Bu))), 0x0u, 0, 4);
    // 0e9150  jg 0xe915b
    X86_AT(c, 0xe9150u);
    if (x86_cc(c, 15)) { goto L_e915b; }
    X86_TICK(c, 12);
    // 0e9152  cmp dword ptr [edx + 0xcdf93], 0
    X86_AT(c, 0xe9152u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF93u))), 0x0u, 0, 4);
    // 0e9159  jle 0xe9174
    X86_AT(c, 0xe9159u);
    if (x86_cc(c, 14)) { goto L_e9174; }
L_e915b:
    X86_TICK(c, 2);
    // 0e915b  sub edi, edi
    X86_AT(c, 0xe915bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e915d:
    X86_TICK(c, 7);
    // 0e915d  cmp edi, 0x40
    X86_AT(c, 0xe915du);
    (void)x86_sub(c, c.r[7], 0x40u, 0, 4);
    // 0e9160  jge 0xe9188
    X86_AT(c, 0xe9160u);
    if (x86_cc(c, 13)) { goto L_e9188; }
    X86_TICK(c, 21);
    // 0e9162  mov eax, dword ptr [esi]
    X86_AT(c, 0xe9162u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0e9164  and eax, 0xeeeeeeee
    X86_AT(c, 0xe9164u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xEEEEEEEEu, 4); }
    // 0e9169  mov dword ptr [ebx], eax
    X86_AT(c, 0xe9169u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0e916b  inc edi
    X86_AT(c, 0xe916bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e916c  add ebx, 4
    X86_AT(c, 0xe916cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e916f  add esi, 4
    X86_AT(c, 0xe916fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e9172  jmp 0xe915d
    X86_AT(c, 0xe9172u);
    X86_POLL(c, 0xe915du); goto L_e915d;
L_e9174:
    X86_TICK(c, 2);
    // 0e9174  sub edi, edi
    X86_AT(c, 0xe9174u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e9176:
    X86_TICK(c, 7);
    // 0e9176  cmp edi, 0x40
    X86_AT(c, 0xe9176u);
    (void)x86_sub(c, c.r[7], 0x40u, 0, 4);
    // 0e9179  jge 0xe9188
    X86_AT(c, 0xe9179u);
    if (x86_cc(c, 13)) { goto L_e9188; }
    X86_TICK(c, 19);
    // 0e917b  mov eax, dword ptr [esi]
    X86_AT(c, 0xe917bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0e917d  mov dword ptr [ebx], eax
    X86_AT(c, 0xe917du);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0e917f  inc edi
    X86_AT(c, 0xe917fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e9180  add ebx, 4
    X86_AT(c, 0xe9180u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e9183  add esi, 4
    X86_AT(c, 0xe9183u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e9186  jmp 0xe9176
    X86_AT(c, 0xe9186u);
    X86_POLL(c, 0xe9176u); goto L_e9176;
L_e9188:
    X86_TICK(c, 25);
    // 0e9188  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe9188u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e918d  lea edx, [eax + eax*4]
    X86_AT(c, 0xe918du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e9190  lea edx, [eax + edx*2]
    X86_AT(c, 0xe9190u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e9193  shl edx, 5
    X86_AT(c, 0xe9193u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e9196  sub edx, eax
    X86_AT(c, 0xe9196u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e9198  cmp dword ptr [edx + 0xcdf9b], 0
    X86_AT(c, 0xe9198u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF9Bu))), 0x0u, 0, 4);
    // 0e919f  jg 0xe91aa
    X86_AT(c, 0xe919fu);
    if (x86_cc(c, 15)) { goto L_e91aa; }
    X86_TICK(c, 12);
    // 0e91a1  cmp dword ptr [edx + 0xcdf97], 0
    X86_AT(c, 0xe91a1u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF97u))), 0x0u, 0, 4);
    // 0e91a8  jle 0xe91c3
    X86_AT(c, 0xe91a8u);
    if (x86_cc(c, 14)) { goto L_e91c3; }
L_e91aa:
    X86_TICK(c, 2);
    // 0e91aa  sub edi, edi
    X86_AT(c, 0xe91aau);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e91ac:
    X86_TICK(c, 7);
    // 0e91ac  cmp edi, 0x40
    X86_AT(c, 0xe91acu);
    (void)x86_sub(c, c.r[7], 0x40u, 0, 4);
    // 0e91af  jge 0xe91d7
    X86_AT(c, 0xe91afu);
    if (x86_cc(c, 13)) { goto L_e91d7; }
    X86_TICK(c, 21);
    // 0e91b1  mov eax, dword ptr [esi]
    X86_AT(c, 0xe91b1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0e91b3  and eax, 0xeeeeeeee
    X86_AT(c, 0xe91b3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xEEEEEEEEu, 4); }
    // 0e91b8  mov dword ptr [ebx], eax
    X86_AT(c, 0xe91b8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0e91ba  inc edi
    X86_AT(c, 0xe91bau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e91bb  add ebx, 4
    X86_AT(c, 0xe91bbu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e91be  add esi, 4
    X86_AT(c, 0xe91beu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e91c1  jmp 0xe91ac
    X86_AT(c, 0xe91c1u);
    X86_POLL(c, 0xe91acu); goto L_e91ac;
L_e91c3:
    X86_TICK(c, 2);
    // 0e91c3  sub edi, edi
    X86_AT(c, 0xe91c3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e91c5:
    X86_TICK(c, 7);
    // 0e91c5  cmp edi, 0x40
    X86_AT(c, 0xe91c5u);
    (void)x86_sub(c, c.r[7], 0x40u, 0, 4);
    // 0e91c8  jge 0xe91d7
    X86_AT(c, 0xe91c8u);
    if (x86_cc(c, 13)) { goto L_e91d7; }
    X86_TICK(c, 19);
    // 0e91ca  mov eax, dword ptr [esi]
    X86_AT(c, 0xe91cau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0e91cc  mov dword ptr [ebx], eax
    X86_AT(c, 0xe91ccu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0e91ce  inc edi
    X86_AT(c, 0xe91ceu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e91cf  add ebx, 4
    X86_AT(c, 0xe91cfu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e91d2  add esi, 4
    X86_AT(c, 0xe91d2u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e91d5  jmp 0xe91c5
    X86_AT(c, 0xe91d5u);
    X86_POLL(c, 0xe91c5u); goto L_e91c5;
L_e91d7:
    X86_TICK(c, 15);
    // 0e91d7  push 0
    X86_AT(c, 0xe91d7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e91d9  push 0x3f
    X86_AT(c, 0xe91d9u);
    { uint32_t v = 0x3Fu; push32(c, v); }
    // 0e91db  push 0x252
    X86_AT(c, 0xe91dbu);
    { uint32_t v = 0x252u; push32(c, v); }
    // 0e91e0  push 0xcdc34
    X86_AT(c, 0xe91e0u);
    { uint32_t v = 0xCDC34u; push32(c, v); }
    // 0e91e5  call 0xe62e8
    X86_AT(c, 0xe91e5u);
    push32(c, 0xe91eau); f_000e62e8(c); X86_RET(c, 0xe91eau);
    X86_TICK(c, 15);
    // 0e91ea  movsx eax, word ptr [0x7a7d4]
    X86_AT(c, 0xe91eau);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x7A7D4u)));
    // 0e91f1  push eax
    X86_AT(c, 0xe91f1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e91f2  call 0xe58b8
    X86_AT(c, 0xe91f2u);
    push32(c, 0xe91f7u); f_000e58b8(c); X86_RET(c, 0xe91f7u);
    X86_TICK(c, 30);
    // 0e91f7  add esp, 0x14
    X86_AT(c, 0xe91f7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0e91fa  pop edi
    X86_AT(c, 0xe91fau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e91fb  pop esi
    X86_AT(c, 0xe91fbu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e91fc  pop ebx
    X86_AT(c, 0xe91fcu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e91fd  leave 
    X86_AT(c, 0xe91fdu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e91fe  ret 
    X86_AT(c, 0xe91feu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe9010u, "ran off the end of a function");
}
void f_000e9200(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0e9200  push 9
    X86_AT(c, 0xe9200u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0e9202  push 0xe
    X86_AT(c, 0xe9202u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0e9204  push 0xb
    X86_AT(c, 0xe9204u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e9206  push 0
    X86_AT(c, 0xe9206u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e9208  push 7
    X86_AT(c, 0xe9208u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e920a  push 0x14
    X86_AT(c, 0xe920au);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0e920c  push 0x44
    X86_AT(c, 0xe920cu);
    { uint32_t v = 0x44u; push32(c, v); }
    // 0e920e  push 0x19
    X86_AT(c, 0xe920eu);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0e9210  push 0x98
    X86_AT(c, 0xe9210u);
    { uint32_t v = 0x98u; push32(c, v); }
    // 0e9215  push 8
    X86_AT(c, 0xe9215u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0e9217  call 0xe6858
    X86_AT(c, 0xe9217u);
    push32(c, 0xe921cu); f_000e6858(c); X86_RET(c, 0xe921cu);
    X86_TICK(c, 9);
    // 0e921c  push 8
    X86_AT(c, 0xe921cu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0e921e  call 0xe699c
    X86_AT(c, 0xe921eu);
    push32(c, 0xe9223u); f_000e699c(c); X86_RET(c, 0xe9223u);
    X86_TICK(c, 9);
    // 0e9223  push 8
    X86_AT(c, 0xe9223u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0e9225  call 0xe693c
    X86_AT(c, 0xe9225u);
    push32(c, 0xe922au); f_000e693c(c); X86_RET(c, 0xe922au);
    X86_TICK(c, 12);
    // 0e922a  add esp, 0x30
    X86_AT(c, 0xe922au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0e922d  ret 
    X86_AT(c, 0xe922du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe9200u, "ran off the end of a function");
}
void f_000e9230(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0e9230  call 0xe9200
    X86_AT(c, 0xe9230u);
    push32(c, 0xe9235u); f_000e9200(c); X86_RET(c, 0xe9235u);
    X86_TICK(c, 10);
    // 0e9235  ret 
    X86_AT(c, 0xe9235u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe9230u, "ran off the end of a function");
}
void f_000e9238(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0e9238  push 0xa
    X86_AT(c, 0xe9238u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e923a  push 0xf
    X86_AT(c, 0xe923au);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e923c  push 0xf
    X86_AT(c, 0xe923cu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e923e  push 0
    X86_AT(c, 0xe923eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e9240  push 0x14
    X86_AT(c, 0xe9240u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0e9242  push 0x14
    X86_AT(c, 0xe9242u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0e9244  push 0xb4
    X86_AT(c, 0xe9244u);
    { uint32_t v = 0xB4u; push32(c, v); }
    // 0e9249  push 0x191
    X86_AT(c, 0xe9249u);
    { uint32_t v = 0x191u; push32(c, v); }
    // 0e924e  push 0x5f
    X86_AT(c, 0xe924eu);
    { uint32_t v = 0x5Fu; push32(c, v); }
    // 0e9250  push 3
    X86_AT(c, 0xe9250u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e9252  call 0xe6858
    X86_AT(c, 0xe9252u);
    push32(c, 0xe9257u); f_000e6858(c); X86_RET(c, 0xe9257u);
    X86_TICK(c, 9);
    // 0e9257  push 3
    X86_AT(c, 0xe9257u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e9259  call 0xe699c
    X86_AT(c, 0xe9259u);
    push32(c, 0xe925eu); f_000e699c(c); X86_RET(c, 0xe925eu);
    X86_TICK(c, 12);
    // 0e925e  add esp, 0x2c
    X86_AT(c, 0xe925eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0e9261  ret 
    X86_AT(c, 0xe9261u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe9238u, "ran off the end of a function");
}
void f_000e9264(X86Cpu& c) {
    X86_TICK(c, 37);
    // 0e9264  push ebp
    X86_AT(c, 0xe9264u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e9265  mov ebp, esp
    X86_AT(c, 0xe9265u);
    c.r[5] = c.r[4];
    // 0e9267  push eax
    X86_AT(c, 0xe9267u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e9268  push ebx
    X86_AT(c, 0xe9268u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e9269  push esi
    X86_AT(c, 0xe9269u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e926a  push edi
    X86_AT(c, 0xe926au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e926b  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe926bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e9270  lea edx, [eax + eax*4]
    X86_AT(c, 0xe9270u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e9273  lea edx, [eax + edx*2]
    X86_AT(c, 0xe9273u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e9276  shl edx, 5
    X86_AT(c, 0xe9276u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e9279  sub edx, eax
    X86_AT(c, 0xe9279u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e927b  cmp dword ptr [edx + 0xcdf23], 5
    X86_AT(c, 0xe927bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF23u))), 0x5u, 0, 4);
    // 0e9282  jge 0xe9288
    X86_AT(c, 0xe9282u);
    if (x86_cc(c, 13)) { goto L_e9288; }
    X86_TICK(c, 9);
    // 0e9284  push 0xb
    X86_AT(c, 0xe9284u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e9286  jmp 0xe928a
    X86_AT(c, 0xe9286u);
    goto L_e928a;
L_e9288:
    X86_TICK(c, 2);
    // 0e9288  push 0xf
    X86_AT(c, 0xe9288u);
    { uint32_t v = 0xFu; push32(c, v); }
L_e928a:
    X86_TICK(c, 9);
    // 0e928a  push 0xa
    X86_AT(c, 0xe928au);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e928c  call 0xe74d8
    X86_AT(c, 0xe928cu);
    push32(c, 0xe9291u); f_000e74d8(c); X86_RET(c, 0xe9291u);
    X86_TICK(c, 11);
    // 0e9291  add esp, 8
    X86_AT(c, 0xe9291u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e9294  push 0xa
    X86_AT(c, 0xe9294u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e9296  call 0xe693c
    X86_AT(c, 0xe9296u);
    push32(c, 0xe929bu); f_000e693c(c); X86_RET(c, 0xe929bu);
    X86_TICK(c, 13);
    // 0e929b  push 1
    X86_AT(c, 0xe929bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e929d  push 3
    X86_AT(c, 0xe929du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e929f  push 0xa
    X86_AT(c, 0xe929fu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e92a1  call 0xe7260
    X86_AT(c, 0xe92a1u);
    push32(c, 0xe92a6u); f_000e7260(c); X86_RET(c, 0xe92a6u);
    X86_TICK(c, 29);
    // 0e92a6  push 4
    X86_AT(c, 0xe92a6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e92a8  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe92a8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e92ad  lea edx, [eax + eax*4]
    X86_AT(c, 0xe92adu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e92b0  lea edx, [eax + edx*2]
    X86_AT(c, 0xe92b0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e92b3  shl edx, 5
    X86_AT(c, 0xe92b3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e92b6  sub edx, eax
    X86_AT(c, 0xe92b6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e92b8  push dword ptr [edx + 0xcde81]
    X86_AT(c, 0xe92b8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE81u))); push32(c, v); }
    // 0e92be  push 0xa
    X86_AT(c, 0xe92beu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e92c0  call 0xe5630
    X86_AT(c, 0xe92c0u);
    push32(c, 0xe92c5u); f_000e5630(c); X86_RET(c, 0xe92c5u);
    X86_TICK(c, 13);
    // 0e92c5  push 1
    X86_AT(c, 0xe92c5u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e92c7  push 0x17
    X86_AT(c, 0xe92c7u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0e92c9  push 0xa
    X86_AT(c, 0xe92c9u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e92cb  call 0xe7260
    X86_AT(c, 0xe92cbu);
    push32(c, 0xe92d0u); f_000e7260(c); X86_RET(c, 0xe92d0u);
    X86_TICK(c, 29);
    // 0e92d0  push 2
    X86_AT(c, 0xe92d0u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e92d2  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe92d2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e92d7  lea edx, [eax + eax*4]
    X86_AT(c, 0xe92d7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e92da  lea edx, [eax + edx*2]
    X86_AT(c, 0xe92dau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e92dd  shl edx, 5
    X86_AT(c, 0xe92ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e92e0  sub edx, eax
    X86_AT(c, 0xe92e0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e92e2  push dword ptr [edx + 0xcdf23]
    X86_AT(c, 0xe92e2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF23u))); push32(c, v); }
    // 0e92e8  push 0xa
    X86_AT(c, 0xe92e8u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e92ea  call 0xe5630
    X86_AT(c, 0xe92eau);
    push32(c, 0xe92efu); f_000e5630(c); X86_RET(c, 0xe92efu);
    X86_TICK(c, 13);
    // 0e92ef  push 2
    X86_AT(c, 0xe92efu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e92f1  push 4
    X86_AT(c, 0xe92f1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e92f3  push 0xa
    X86_AT(c, 0xe92f3u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e92f5  call 0xe7260
    X86_AT(c, 0xe92f5u);
    push32(c, 0xe92fau); f_000e7260(c); X86_RET(c, 0xe92fau);
    X86_TICK(c, 18);
    // 0e92fa  add esp, 0x40
    X86_AT(c, 0xe92fau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0e92fd  push 1
    X86_AT(c, 0xe92fdu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e92ff  push dword ptr [0xd3998]
    X86_AT(c, 0xe92ffu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xD3998u))); push32(c, v); }
    // 0e9305  push 0xa
    X86_AT(c, 0xe9305u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e9307  call 0xe5630
    X86_AT(c, 0xe9307u);
    push32(c, 0xe930cu); f_000e5630(c); X86_RET(c, 0xe930cu);
    X86_TICK(c, 13);
    // 0e930c  push 2
    X86_AT(c, 0xe930cu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e930e  push 0xc
    X86_AT(c, 0xe930eu);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0e9310  push 0xa
    X86_AT(c, 0xe9310u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e9312  call 0xe7260
    X86_AT(c, 0xe9312u);
    push32(c, 0xe9317u); f_000e7260(c); X86_RET(c, 0xe9317u);
    X86_TICK(c, 16);
    // 0e9317  push 1
    X86_AT(c, 0xe9317u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e9319  push dword ptr [0xd399c]
    X86_AT(c, 0xe9319u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xD399Cu))); push32(c, v); }
    // 0e931f  push 0xa
    X86_AT(c, 0xe931fu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e9321  call 0xe5630
    X86_AT(c, 0xe9321u);
    push32(c, 0xe9326u); f_000e5630(c); X86_RET(c, 0xe9326u);
    X86_TICK(c, 13);
    // 0e9326  push 2
    X86_AT(c, 0xe9326u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e9328  push 0x14
    X86_AT(c, 0xe9328u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0e932a  push 0xa
    X86_AT(c, 0xe932au);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e932c  call 0xe7260
    X86_AT(c, 0xe932cu);
    push32(c, 0xe9331u); f_000e7260(c); X86_RET(c, 0xe9331u);
    X86_TICK(c, 16);
    // 0e9331  push 1
    X86_AT(c, 0xe9331u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e9333  push dword ptr [0xd39a0]
    X86_AT(c, 0xe9333u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xD39A0u))); push32(c, v); }
    // 0e9339  push 0xa
    X86_AT(c, 0xe9339u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e933b  call 0xe5630
    X86_AT(c, 0xe933bu);
    push32(c, 0xe9340u); f_000e5630(c); X86_RET(c, 0xe9340u);
    X86_TICK(c, 13);
    // 0e9340  add esp, 0x3c
    X86_AT(c, 0xe9340u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0e9343  push 0xf
    X86_AT(c, 0xe9343u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e9345  push 0xa
    X86_AT(c, 0xe9345u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e9347  call 0xe74d8
    X86_AT(c, 0xe9347u);
    push32(c, 0xe934cu); f_000e74d8(c); X86_RET(c, 0xe934cu);
    X86_TICK(c, 30);
    // 0e934c  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe934cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e9351  lea edx, [eax + eax*4]
    X86_AT(c, 0xe9351u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e9354  lea edx, [eax + edx*2]
    X86_AT(c, 0xe9354u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e9357  shl edx, 5
    X86_AT(c, 0xe9357u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e935a  sub edx, eax
    X86_AT(c, 0xe935au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e935c  mov eax, dword ptr [edx + 0xcde5a]
    X86_AT(c, 0xe935cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE5Au)));
    // 0e9362  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe9362u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e9365  add esp, 8
    X86_AT(c, 0xe9365u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e9368  push 0
    X86_AT(c, 0xe9368u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e936a  call 0xe58b8
    X86_AT(c, 0xe936au);
    push32(c, 0xe936fu); f_000e58b8(c); X86_RET(c, 0xe936fu);
    X86_TICK(c, 15);
    // 0e936f  mov ebx, 0xcdc34
    X86_AT(c, 0xe936fu);
    c.r[3] = 0xCDC34u;
    // 0e9374  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe9374u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e9377  shl eax, 9
    X86_AT(c, 0xe9377u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0e937a  lea esi, [eax*1 + 0x83378]
    X86_AT(c, 0xe937au);
    c.r[6] = (uint32_t)(c.r[0] + 0x83378u);
    // 0e9381  sub edi, edi
    X86_AT(c, 0xe9381u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0e9383  add esp, 4
    X86_AT(c, 0xe9383u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e9386:
    X86_TICK(c, 7);
    // 0e9386  cmp edi, 0x80
    X86_AT(c, 0xe9386u);
    (void)x86_sub(c, c.r[7], 0x80u, 0, 4);
    // 0e938c  jge 0xe939b
    X86_AT(c, 0xe938cu);
    if (x86_cc(c, 13)) { goto L_e939b; }
    X86_TICK(c, 19);
    // 0e938e  mov eax, dword ptr [esi]
    X86_AT(c, 0xe938eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0e9390  mov dword ptr [ebx], eax
    X86_AT(c, 0xe9390u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0e9392  inc edi
    X86_AT(c, 0xe9392u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e9393  add ebx, 4
    X86_AT(c, 0xe9393u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e9396  add esi, 4
    X86_AT(c, 0xe9396u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e9399  jmp 0xe9386
    X86_AT(c, 0xe9399u);
    X86_POLL(c, 0xe9386u); goto L_e9386;
L_e939b:
    X86_TICK(c, 15);
    // 0e939b  push 0
    X86_AT(c, 0xe939bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e939d  push 0x3f
    X86_AT(c, 0xe939du);
    { uint32_t v = 0x3Fu; push32(c, v); }
    // 0e939f  push 0x252
    X86_AT(c, 0xe939fu);
    { uint32_t v = 0x252u; push32(c, v); }
    // 0e93a4  push 0xcdc34
    X86_AT(c, 0xe93a4u);
    { uint32_t v = 0xCDC34u; push32(c, v); }
    // 0e93a9  call 0xe62e8
    X86_AT(c, 0xe93a9u);
    push32(c, 0xe93aeu); f_000e62e8(c); X86_RET(c, 0xe93aeu);
    X86_TICK(c, 15);
    // 0e93ae  movsx eax, word ptr [0x7a7d4]
    X86_AT(c, 0xe93aeu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x7A7D4u)));
    // 0e93b5  push eax
    X86_AT(c, 0xe93b5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e93b6  call 0xe58b8
    X86_AT(c, 0xe93b6u);
    push32(c, 0xe93bbu); f_000e58b8(c); X86_RET(c, 0xe93bbu);
    X86_TICK(c, 30);
    // 0e93bb  add esp, 0x14
    X86_AT(c, 0xe93bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0e93be  pop edi
    X86_AT(c, 0xe93beu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e93bf  pop esi
    X86_AT(c, 0xe93bfu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e93c0  pop ebx
    X86_AT(c, 0xe93c0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e93c1  leave 
    X86_AT(c, 0xe93c1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e93c2  ret 
    X86_AT(c, 0xe93c2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe9264u, "ran off the end of a function");
}
void f_000e93c4(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0e93c4  push edi
    X86_AT(c, 0xe93c4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e93c5  push 0xa
    X86_AT(c, 0xe93c5u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e93c7  call 0xe693c
    X86_AT(c, 0xe93c7u);
    push32(c, 0xe93ccu); f_000e693c(c); X86_RET(c, 0xe93ccu);
    X86_TICK(c, 9);
    // 0e93cc  push 0xa
    X86_AT(c, 0xe93ccu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e93ce  call 0xe6af0
    X86_AT(c, 0xe93ceu);
    push32(c, 0xe93d3u); f_000e6af0(c); X86_RET(c, 0xe93d3u);
    X86_TICK(c, 9);
    // 0e93d3  push 0xa
    X86_AT(c, 0xe93d3u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e93d5  call 0xe693c
    X86_AT(c, 0xe93d5u);
    push32(c, 0xe93dau); f_000e693c(c); X86_RET(c, 0xe93dau);
    X86_TICK(c, 13);
    // 0e93da  push 0
    X86_AT(c, 0xe93dau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e93dc  push 0
    X86_AT(c, 0xe93dcu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e93de  push 0xa
    X86_AT(c, 0xe93deu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e93e0  call 0xe7260
    X86_AT(c, 0xe93e0u);
    push32(c, 0xe93e5u); f_000e7260(c); X86_RET(c, 0xe93e5u);
    X86_TICK(c, 26);
    // 0e93e5  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe93e5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e93ea  lea edx, [eax + eax*4]
    X86_AT(c, 0xe93eau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e93ed  lea edx, [eax + edx*2]
    X86_AT(c, 0xe93edu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e93f0  shl edx, 5
    X86_AT(c, 0xe93f0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e93f3  sub edx, eax
    X86_AT(c, 0xe93f3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e93f5  add edx, 0xcde4d
    X86_AT(c, 0xe93f5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xCDE4Du, 0, 4); }
    // 0e93fb  push edx
    X86_AT(c, 0xe93fbu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e93fc  push 0xa
    X86_AT(c, 0xe93fcu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e93fe  call 0xe70ec
    X86_AT(c, 0xe93feu);
    push32(c, 0xe9403u); f_000e70ec(c); X86_RET(c, 0xe9403u);
    X86_TICK(c, 13);
    // 0e9403  push 1
    X86_AT(c, 0xe9403u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e9405  push 0
    X86_AT(c, 0xe9405u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e9407  push 0xa
    X86_AT(c, 0xe9407u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e9409  call 0xe7260
    X86_AT(c, 0xe9409u);
    push32(c, 0xe940eu); f_000e7260(c); X86_RET(c, 0xe940eu);
    X86_TICK(c, 11);
    // 0e940e  push 0x222c
    X86_AT(c, 0xe940eu);
    { uint32_t v = 0x222Cu; push32(c, v); }
    // 0e9413  push 0xa
    X86_AT(c, 0xe9413u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e9415  call 0xe6cb0
    X86_AT(c, 0xe9415u);
    push32(c, 0xe941au); f_000e6cb0(c); X86_RET(c, 0xe941au);
    X86_TICK(c, 13);
    // 0e941a  push 2
    X86_AT(c, 0xe941au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e941c  push 0
    X86_AT(c, 0xe941cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e941e  push 0xa
    X86_AT(c, 0xe941eu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e9420  call 0xe7260
    X86_AT(c, 0xe9420u);
    push32(c, 0xe9425u); f_000e7260(c); X86_RET(c, 0xe9425u);
    X86_TICK(c, 13);
    // 0e9425  add esp, 0x40
    X86_AT(c, 0xe9425u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0e9428  push 0x2244
    X86_AT(c, 0xe9428u);
    { uint32_t v = 0x2244u; push32(c, v); }
    // 0e942d  push 0xa
    X86_AT(c, 0xe942du);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e942f  call 0xe6cb0
    X86_AT(c, 0xe942fu);
    push32(c, 0xe9434u); f_000e6cb0(c); X86_RET(c, 0xe9434u);
    X86_TICK(c, 35);
    // 0e9434  sub edi, edi
    X86_AT(c, 0xe9434u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0e9436  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe9436u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e943b  lea edx, [eax + eax*4]
    X86_AT(c, 0xe943bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e943e  lea edx, [eax + edx*2]
    X86_AT(c, 0xe943eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e9441  shl edx, 5
    X86_AT(c, 0xe9441u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e9444  sub edx, eax
    X86_AT(c, 0xe9444u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e9446  add esp, 8
    X86_AT(c, 0xe9446u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e9449  movzx eax, byte ptr [edx + 0xcde7b]
    X86_AT(c, 0xe9449u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Bu)));
    // 0e9450  xchg edx, eax
    X86_AT(c, 0xe9450u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0e9451  sub edx, 0x41
    X86_AT(c, 0xe9451u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x41u, 0, 4); }
    // 0e9454  cmp edx, 0x16
    X86_AT(c, 0xe9454u);
    (void)x86_sub(c, c.r[2], 0x16u, 0, 4);
    // 0e9457  ja 0xe9509
    X86_AT(c, 0xe9457u);
    if (x86_cc(c, 7)) { goto L_e9509; }
    X86_TICK(c, 7);
    // 0e945d  jmp dword ptr cs:[edx*4 + 0xe9465]
    X86_AT(c, 0xe945du);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xE9465u)));
      switch (t) {
      case 0xe94c1u: goto L_e94c1;
      case 0xe94c5u: goto L_e94c5;
      case 0xe94ccu: goto L_e94cc;
      case 0xe94d3u: goto L_e94d3;
      case 0xe94dau: goto L_e94da;
      case 0xe94e1u: goto L_e94e1;
      case 0xe94e8u: goto L_e94e8;
      case 0xe94efu: goto L_e94ef;
      case 0xe94f6u: goto L_e94f6;
      case 0xe94fdu: goto L_e94fd;
      case 0xe9504u: goto L_e9504;
      case 0xe9509u: goto L_e9509;
      default: x86_jump(c, t); return; } }
L_e94c1:
    X86_TICK(c, 9);
    // 0e94c1  sub edi, edi
    X86_AT(c, 0xe94c1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0e94c3  jmp 0xe9509
    X86_AT(c, 0xe94c3u);
    goto L_e9509;
L_e94c5:
    X86_TICK(c, 9);
    // 0e94c5  mov edi, 4
    X86_AT(c, 0xe94c5u);
    c.r[7] = 0x4u;
    // 0e94ca  jmp 0xe9509
    X86_AT(c, 0xe94cau);
    goto L_e9509;
L_e94cc:
    X86_TICK(c, 9);
    // 0e94cc  mov edi, 8
    X86_AT(c, 0xe94ccu);
    c.r[7] = 0x8u;
    // 0e94d1  jmp 0xe9509
    X86_AT(c, 0xe94d1u);
    goto L_e9509;
L_e94d3:
    X86_TICK(c, 9);
    // 0e94d3  mov edi, 0xc
    X86_AT(c, 0xe94d3u);
    c.r[7] = 0xCu;
    // 0e94d8  jmp 0xe9509
    X86_AT(c, 0xe94d8u);
    goto L_e9509;
L_e94da:
    X86_TICK(c, 9);
    // 0e94da  mov edi, 0x10
    X86_AT(c, 0xe94dau);
    c.r[7] = 0x10u;
    // 0e94df  jmp 0xe9509
    X86_AT(c, 0xe94dfu);
    goto L_e9509;
L_e94e1:
    X86_TICK(c, 9);
    // 0e94e1  mov edi, 0x18
    X86_AT(c, 0xe94e1u);
    c.r[7] = 0x18u;
    // 0e94e6  jmp 0xe9509
    X86_AT(c, 0xe94e6u);
    goto L_e9509;
L_e94e8:
    X86_TICK(c, 9);
    // 0e94e8  mov edi, 0x14
    X86_AT(c, 0xe94e8u);
    c.r[7] = 0x14u;
    // 0e94ed  jmp 0xe9509
    X86_AT(c, 0xe94edu);
    goto L_e9509;
L_e94ef:
    X86_TICK(c, 9);
    // 0e94ef  mov edi, 0x20
    X86_AT(c, 0xe94efu);
    c.r[7] = 0x20u;
    // 0e94f4  jmp 0xe9509
    X86_AT(c, 0xe94f4u);
    goto L_e9509;
L_e94f6:
    X86_TICK(c, 9);
    // 0e94f6  mov edi, 0x1c
    X86_AT(c, 0xe94f6u);
    c.r[7] = 0x1Cu;
    // 0e94fb  jmp 0xe9509
    X86_AT(c, 0xe94fbu);
    goto L_e9509;
L_e94fd:
    X86_TICK(c, 9);
    // 0e94fd  mov edi, 0x24
    X86_AT(c, 0xe94fdu);
    c.r[7] = 0x24u;
    // 0e9502  jmp 0xe9509
    X86_AT(c, 0xe9502u);
    goto L_e9509;
L_e9504:
    X86_TICK(c, 2);
    // 0e9504  mov edi, 0x28
    X86_AT(c, 0xe9504u);
    c.r[7] = 0x28u;
L_e9509:
    X86_TICK(c, 25);
    // 0e9509  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe9509u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e950e  lea edx, [eax + eax*4]
    X86_AT(c, 0xe950eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e9511  lea edx, [eax + edx*2]
    X86_AT(c, 0xe9511u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e9514  shl edx, 5
    X86_AT(c, 0xe9514u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e9517  sub edx, eax
    X86_AT(c, 0xe9517u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e9519  cmp byte ptr [edx + 0xcde7c], 0x46
    X86_AT(c, 0xe9519u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Cu))), 0x46u, 0, 1);
    // 0e9520  jne 0xe9525
    X86_AT(c, 0xe9520u);
    if (x86_cc(c, 5)) { goto L_e9525; }
    X86_TICK(c, 2);
    // 0e9522  add edi, 2
    X86_AT(c, 0xe9522u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
L_e9525:
    X86_TICK(c, 22);
    // 0e9525  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe9525u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e952a  lea edx, [eax + eax*4]
    X86_AT(c, 0xe952au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e952d  lea edx, [eax + edx*2]
    X86_AT(c, 0xe952du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e9530  shl edx, 5
    X86_AT(c, 0xe9530u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e9533  sub edx, eax
    X86_AT(c, 0xe9533u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e9535  mov dword ptr [edx + 0xcde5a], edi
    X86_AT(c, 0xe9535u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE5Au)), c.r[7]);
    // 0e953b  call 0xe9264
    X86_AT(c, 0xe953bu);
    push32(c, 0xe9540u); f_000e9264(c); X86_RET(c, 0xe9540u);
    X86_TICK(c, 14);
    // 0e9540  pop edi
    X86_AT(c, 0xe9540u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e9541  ret 
    X86_AT(c, 0xe9541u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe93c4u, "ran off the end of a function");
}
void f_000e9544(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0e9544  push edi
    X86_AT(c, 0xe9544u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e9545  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe9545u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e954a  lea edx, [eax + eax*4]
    X86_AT(c, 0xe954au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e954d  lea edx, [eax + edx*2]
    X86_AT(c, 0xe954du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e9550  shl edx, 5
    X86_AT(c, 0xe9550u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e9553  sub edx, eax
    X86_AT(c, 0xe9553u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e9555  cmp dword ptr [edx + 0xcdf83], 0
    X86_AT(c, 0xe9555u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF83u))), 0x0u, 0, 4);
    // 0e955c  jne 0xe956a
    X86_AT(c, 0xe955cu);
    if (x86_cc(c, 5)) { goto L_e956a; }
    X86_TICK(c, 9);
    // 0e955e  mov dword ptr [0x7a6b4], 0
    X86_AT(c, 0xe955eu);
    wr32((c.sbase[3] + (uint32_t)(0x7A6B4u)), 0x0u);
    // 0e9568  jmp 0xe9574
    X86_AT(c, 0xe9568u);
    goto L_e9574;
L_e956a:
    X86_TICK(c, 2);
    // 0e956a  mov dword ptr [0x7a6b4], 0xffffffff
    X86_AT(c, 0xe956au);
    wr32((c.sbase[3] + (uint32_t)(0x7A6B4u)), 0xFFFFFFFFu);
L_e9574:
    X86_TICK(c, 28);
    // 0e9574  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe9574u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e9579  lea edx, [eax + eax*4]
    X86_AT(c, 0xe9579u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e957c  lea edx, [eax + edx*2]
    X86_AT(c, 0xe957cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e957f  shl edx, 5
    X86_AT(c, 0xe957fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e9582  sub edx, eax
    X86_AT(c, 0xe9582u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e9584  movzx eax, byte ptr [edx + 0xcde4c]
    X86_AT(c, 0xe9584u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE4Cu)));
    // 0e958b  mov dword ptr [0xcde44], eax
    X86_AT(c, 0xe958bu);
    wr32((c.sbase[3] + (uint32_t)(0xCDE44u)), c.r[0]);
    // 0e9590  and eax, eax
    X86_AT(c, 0xe9590u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e9592  je 0xe959b
    X86_AT(c, 0xe9592u);
    if (x86_cc(c, 4)) { goto L_e959b; }
    X86_TICK(c, 9);
    // 0e9594  push 0x225c
    X86_AT(c, 0xe9594u);
    { uint32_t v = 0x225Cu; push32(c, v); }
    // 0e9599  jmp 0xe95d3
    X86_AT(c, 0xe9599u);
    goto L_e95d3;
L_e959b:
    X86_TICK(c, 29);
    // 0e959b  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe959bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e95a0  lea edx, [eax + eax*4]
    X86_AT(c, 0xe95a0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e95a3  lea edx, [eax + edx*2]
    X86_AT(c, 0xe95a3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e95a6  shl edx, 5
    X86_AT(c, 0xe95a6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e95a9  sub edx, eax
    X86_AT(c, 0xe95a9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e95ab  lea edi, [edx + 0xcde4d]
    X86_AT(c, 0xe95abu);
    c.r[7] = (uint32_t)(c.r[2] + 0xCDE4Du);
    // 0e95b1  inc edi
    X86_AT(c, 0xe95b1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e95b2  cmp byte ptr [edi - 1], 0x54
    X86_AT(c, 0xe95b2u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xFFFFFFFFu))), 0x54u, 0, 1);
    // 0e95b6  jne 0xe95db
    X86_AT(c, 0xe95b6u);
    if (x86_cc(c, 5)) { goto L_e95db; }
    X86_TICK(c, 14);
    // 0e95b8  inc edi
    X86_AT(c, 0xe95b8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e95b9  cmp byte ptr [edi - 1], 0x4f
    X86_AT(c, 0xe95b9u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xFFFFFFFFu))), 0x4Fu, 0, 1);
    // 0e95bd  jne 0xe95db
    X86_AT(c, 0xe95bdu);
    if (x86_cc(c, 5)) { goto L_e95db; }
    X86_TICK(c, 12);
    // 0e95bf  cmp byte ptr [edi], 0x59
    X86_AT(c, 0xe95bfu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x59u, 0, 1);
    // 0e95c2  jne 0xe95db
    X86_AT(c, 0xe95c2u);
    if (x86_cc(c, 5)) { goto L_e95db; }
    X86_TICK(c, 4);
    // 0e95c4  mov dword ptr [0xcde44], 2
    X86_AT(c, 0xe95c4u);
    wr32((c.sbase[3] + (uint32_t)(0xCDE44u)), 0x2u);
    // 0e95ce  push 0x2284
    X86_AT(c, 0xe95ceu);
    { uint32_t v = 0x2284u; push32(c, v); }
L_e95d3:
    X86_TICK(c, 7);
    // 0e95d3  call 0xe75f8
    X86_AT(c, 0xe95d3u);
    push32(c, 0xe95d8u); f_000e75f8(c); X86_RET(c, 0xe95d8u);
    X86_TICK(c, 2);
    // 0e95d8  add esp, 4
    X86_AT(c, 0xe95d8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e95db:
    X86_TICK(c, 14);
    // 0e95db  pop edi
    X86_AT(c, 0xe95dbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e95dc  ret 
    X86_AT(c, 0xe95dcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe9544u, "ran off the end of a function");
}
void f_000e95e0(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e95e0  mov dword ptr [0xcde34], 0xffffffff
    X86_AT(c, 0xe95e0u);
    wr32((c.sbase[3] + (uint32_t)(0xCDE34u)), 0xFFFFFFFFu);
    // 0e95ea  call 0xe0a78
    X86_AT(c, 0xe95eau);
    push32(c, 0xe95efu); f_000e0a78(c); X86_RET(c, 0xe95efu);
    X86_TICK(c, 7);
    // 0e95ef  call 0xe9544
    X86_AT(c, 0xe95efu);
    push32(c, 0xe95f4u); f_000e9544(c); X86_RET(c, 0xe95f4u);
    X86_TICK(c, 30);
    // 0e95f4  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe95f4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e95f9  lea edx, [eax + eax*4]
    X86_AT(c, 0xe95f9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e95fc  lea edx, [eax + edx*2]
    X86_AT(c, 0xe95fcu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e95ff  shl edx, 5
    X86_AT(c, 0xe95ffu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e9602  sub edx, eax
    X86_AT(c, 0xe9602u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e9604  push dword ptr [edx + 0xcdf57]
    X86_AT(c, 0xe9604u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))); push32(c, v); }
    // 0e960a  push dword ptr [edx + 0xcde99]
    X86_AT(c, 0xe960au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u))); push32(c, v); }
    // 0e9610  call 0xf3c40
    X86_AT(c, 0xe9610u);
    push32(c, 0xe9615u); f_000f3c40(c); X86_RET(c, 0xe9615u);
    X86_TICK(c, 7);
    // 0e9615  call 0xe2c18
    X86_AT(c, 0xe9615u);
    push32(c, 0xe961au); f_000e2c18(c); X86_RET(c, 0xe961au);
    X86_TICK(c, 9);
    // 0e961a  push 0x79f0c
    X86_AT(c, 0xe961au);
    { uint32_t v = 0x79F0Cu; push32(c, v); }
    // 0e961f  call 0xe8660
    X86_AT(c, 0xe961fu);
    push32(c, 0xe9624u); f_000e8660(c); X86_RET(c, 0xe9624u);
    X86_TICK(c, 9);
    // 0e9624  push 3
    X86_AT(c, 0xe9624u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e9626  call 0xe58e0
    X86_AT(c, 0xe9626u);
    push32(c, 0xe962bu); f_000e58e0(c); X86_RET(c, 0xe962bu);
    X86_TICK(c, 9);
    // 0e962b  push 1
    X86_AT(c, 0xe962bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e962d  call 0xe58cc
    X86_AT(c, 0xe962du);
    push32(c, 0xe9632u); f_000e58cc(c); X86_RET(c, 0xe9632u);
    X86_TICK(c, 9);
    // 0e9632  push 0
    X86_AT(c, 0xe9632u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e9634  call 0xe5c6c
    X86_AT(c, 0xe9634u);
    push32(c, 0xe9639u); f_000e5c6c(c); X86_RET(c, 0xe9639u);
    X86_TICK(c, 9);
    // 0e9639  push 0
    X86_AT(c, 0xe9639u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e963b  call 0xe58cc
    X86_AT(c, 0xe963bu);
    push32(c, 0xe9640u); f_000e58cc(c); X86_RET(c, 0xe9640u);
    X86_TICK(c, 9);
    // 0e9640  push 0xd
    X86_AT(c, 0xe9640u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0e9642  call 0xe97cc
    X86_AT(c, 0xe9642u);
    push32(c, 0xe9647u); f_000e97cc(c); X86_RET(c, 0xe9647u);
    X86_TICK(c, 7);
    // 0e9647  call 0xe8dc0
    X86_AT(c, 0xe9647u);
    push32(c, 0xe964cu); f_000e8dc0(c); X86_RET(c, 0xe964cu);
    X86_TICK(c, 7);
    // 0e964c  call 0xe8e90
    X86_AT(c, 0xe964cu);
    push32(c, 0xe9651u); f_000e8e90(c); X86_RET(c, 0xe9651u);
    X86_TICK(c, 7);
    // 0e9651  call 0xe8d90
    X86_AT(c, 0xe9651u);
    push32(c, 0xe9656u); f_000e8d90(c); X86_RET(c, 0xe9656u);
    X86_TICK(c, 11);
    // 0e9656  mov dword ptr [0xcde38], 1
    X86_AT(c, 0xe9656u);
    wr32((c.sbase[3] + (uint32_t)(0xCDE38u)), 0x1u);
    // 0e9660  mov word ptr [0x7a5d4], 0
    X86_AT(c, 0xe9660u);
    wr16((c.sbase[3] + (uint32_t)(0x7A5D4u)), 0x0u);
    // 0e9669  call 0xe20f4
    X86_AT(c, 0xe9669u);
    push32(c, 0xe966eu); f_000e20f4(c); X86_RET(c, 0xe966eu);
    X86_TICK(c, 9);
    // 0e966e  push 2
    X86_AT(c, 0xe966eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e9670  call 0xe58e0
    X86_AT(c, 0xe9670u);
    push32(c, 0xe9675u); f_000e58e0(c); X86_RET(c, 0xe9675u);
    X86_TICK(c, 9);
    // 0e9675  push 0
    X86_AT(c, 0xe9675u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e9677  call 0xe3188
    X86_AT(c, 0xe9677u);
    push32(c, 0xe967cu); f_000e3188(c); X86_RET(c, 0xe967cu);
    X86_TICK(c, 7);
    // 0e967c  call 0xe5378
    X86_AT(c, 0xe967cu);
    push32(c, 0xe9681u); f_000e5378(c); X86_RET(c, 0xe9681u);
    X86_TICK(c, 7);
    // 0e9681  call 0xe5378
    X86_AT(c, 0xe9681u);
    push32(c, 0xe9686u); f_000e5378(c); X86_RET(c, 0xe9686u);
    X86_TICK(c, 9);
    // 0e9686  push 1
    X86_AT(c, 0xe9686u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e9688  call 0xe1a9c
    X86_AT(c, 0xe9688u);
    push32(c, 0xe968du); f_000e1a9c(c); X86_RET(c, 0xe968du);
    X86_TICK(c, 9);
    // 0e968d  push 2
    X86_AT(c, 0xe968du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e968f  call 0xe6c68
    X86_AT(c, 0xe968fu);
    push32(c, 0xe9694u); f_000e6c68(c); X86_RET(c, 0xe9694u);
    X86_TICK(c, 11);
    // 0e9694  add esp, 0x30
    X86_AT(c, 0xe9694u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0e9697  push 7
    X86_AT(c, 0xe9697u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e9699  call 0xe756c
    X86_AT(c, 0xe9699u);
    push32(c, 0xe969eu); f_000e756c(c); X86_RET(c, 0xe969eu);
    X86_TICK(c, 4);
    // 0e969e  mov dword ptr [0xd1424], 0
    X86_AT(c, 0xe969eu);
    wr32((c.sbase[3] + (uint32_t)(0xD1424u)), 0x0u);
    // 0e96a8  add esp, 4
    X86_AT(c, 0xe96a8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e96ab:
    X86_TICK(c, 7);
    // 0e96ab  call 0xf6cdc
    X86_AT(c, 0xe96abu);
    push32(c, 0xe96b0u); f_000f6cdc(c); X86_RET(c, 0xe96b0u);
    X86_TICK(c, 12);
    // 0e96b0  cmp dword ptr [0xcde34], 0
    X86_AT(c, 0xe96b0u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDE34u))), 0x0u, 0, 4);
    // 0e96b7  jne 0xe96ab
    X86_AT(c, 0xe96b7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xe96abu); goto L_e96ab; }
    X86_TICK(c, 11);
    // 0e96b9  mov word ptr [0xcda74], 0xffff
    X86_AT(c, 0xe96b9u);
    wr16((c.sbase[3] + (uint32_t)(0xCDA74u)), 0xFFFFu);
    // 0e96c2  mov dword ptr [0xcde38], 0
    X86_AT(c, 0xe96c2u);
    wr32((c.sbase[3] + (uint32_t)(0xCDE38u)), 0x0u);
    // 0e96cc  call 0xe137c
    X86_AT(c, 0xe96ccu);
    push32(c, 0xe96d1u); f_000e137c(c); X86_RET(c, 0xe96d1u);
    X86_TICK(c, 7);
    // 0e96d1  call 0xe8470
    X86_AT(c, 0xe96d1u);
    push32(c, 0xe96d6u); f_000e8470(c); X86_RET(c, 0xe96d6u);
    X86_TICK(c, 9);
    // 0e96d6  push 0xf
    X86_AT(c, 0xe96d6u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e96d8  call 0xe9740
    X86_AT(c, 0xe96d8u);
    push32(c, 0xe96ddu); f_000e9740(c); X86_RET(c, 0xe96ddu);
    X86_TICK(c, 11);
    // 0e96dd  push 0xd
    X86_AT(c, 0xe96ddu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0e96df  push 8
    X86_AT(c, 0xe96dfu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0e96e1  call 0xe6b70
    X86_AT(c, 0xe96e1u);
    push32(c, 0xe96e6u); f_000e6b70(c); X86_RET(c, 0xe96e6u);
    X86_TICK(c, 9);
    // 0e96e6  push 0xf
    X86_AT(c, 0xe96e6u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e96e8  call 0xe9740
    X86_AT(c, 0xe96e8u);
    push32(c, 0xe96edu); f_000e9740(c); X86_RET(c, 0xe96edu);
    X86_TICK(c, 11);
    // 0e96ed  push 0xd
    X86_AT(c, 0xe96edu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0e96ef  push 0xa
    X86_AT(c, 0xe96efu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e96f1  call 0xe6b70
    X86_AT(c, 0xe96f1u);
    push32(c, 0xe96f6u); f_000e6b70(c); X86_RET(c, 0xe96f6u);
    X86_TICK(c, 9);
    // 0e96f6  push 0xf
    X86_AT(c, 0xe96f6u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e96f8  call 0xe9740
    X86_AT(c, 0xe96f8u);
    push32(c, 0xe96fdu); f_000e9740(c); X86_RET(c, 0xe96fdu);
    X86_TICK(c, 11);
    // 0e96fd  push 0xd
    X86_AT(c, 0xe96fdu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0e96ff  push 0xb
    X86_AT(c, 0xe96ffu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e9701  call 0xe6b70
    X86_AT(c, 0xe9701u);
    push32(c, 0xe9706u); f_000e6b70(c); X86_RET(c, 0xe9706u);
    X86_TICK(c, 9);
    // 0e9706  push 0xf
    X86_AT(c, 0xe9706u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e9708  call 0xe9740
    X86_AT(c, 0xe9708u);
    push32(c, 0xe970du); f_000e9740(c); X86_RET(c, 0xe970du);
    X86_TICK(c, 11);
    // 0e970d  push 0xd
    X86_AT(c, 0xe970du);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0e970f  push 7
    X86_AT(c, 0xe970fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e9711  call 0xe6b70
    X86_AT(c, 0xe9711u);
    push32(c, 0xe9716u); f_000e6b70(c); X86_RET(c, 0xe9716u);
    X86_TICK(c, 9);
    // 0e9716  push 0xf
    X86_AT(c, 0xe9716u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e9718  call 0xe9740
    X86_AT(c, 0xe9718u);
    push32(c, 0xe971du); f_000e9740(c); X86_RET(c, 0xe971du);
    X86_TICK(c, 9);
    // 0e971d  push 3
    X86_AT(c, 0xe971du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e971f  call 0xe58e0
    X86_AT(c, 0xe971fu);
    push32(c, 0xe9724u); f_000e58e0(c); X86_RET(c, 0xe9724u);
    X86_TICK(c, 9);
    // 0e9724  push 0
    X86_AT(c, 0xe9724u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e9726  call 0xe58cc
    X86_AT(c, 0xe9726u);
    push32(c, 0xe972bu); f_000e58cc(c); X86_RET(c, 0xe972bu);
    X86_TICK(c, 11);
    // 0e972b  add esp, 0x3c
    X86_AT(c, 0xe972bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0e972e  push 0
    X86_AT(c, 0xe972eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e9730  call 0xe97cc
    X86_AT(c, 0xe9730u);
    push32(c, 0xe9735u); f_000e97cc(c); X86_RET(c, 0xe9735u);
    X86_TICK(c, 9);
    // 0e9735  push 2
    X86_AT(c, 0xe9735u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e9737  call 0xe58e0
    X86_AT(c, 0xe9737u);
    push32(c, 0xe973cu); f_000e58e0(c); X86_RET(c, 0xe973cu);
    X86_TICK(c, 12);
    // 0e973c  add esp, 8
    X86_AT(c, 0xe973cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e973f  ret 
    X86_AT(c, 0xe973fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe95e0u, "ran off the end of a function");
}
void f_000e9740(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0e9740  push ebp
    X86_AT(c, 0xe9740u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e9741  mov ebp, esp
    X86_AT(c, 0xe9741u);
    c.r[5] = c.r[4];
    // 0e9743  push edi
    X86_AT(c, 0xe9743u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e9744  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe9744u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e9747  sub ecx, ecx
    X86_AT(c, 0xe9747u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
L_e9749:
    X86_TICK(c, 24);
    // 0e9749  mov eax, edi
    X86_AT(c, 0xe9749u);
    c.r[0] = c.r[7];
    // 0e974b  lea edx, [eax + eax*4]
    X86_AT(c, 0xe974bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e974e  shl edx, 3
    X86_AT(c, 0xe974eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0e9751  sub edx, eax
    X86_AT(c, 0xe9751u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e9753  shl edx, 4
    X86_AT(c, 0xe9753u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0e9756  add edx, eax
    X86_AT(c, 0xe9756u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e9758  shl edx, 3
    X86_AT(c, 0xe9758u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0e975b  cmp edx, ecx
    X86_AT(c, 0xe975bu);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 0e975d  jle 0xe9762
    X86_AT(c, 0xe975du);
    if (x86_cc(c, 14)) { goto L_e9762; }
    X86_TICK(c, 9);
    // 0e975f  inc ecx
    X86_AT(c, 0xe975fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0e9760  jmp 0xe9749
    X86_AT(c, 0xe9760u);
    X86_POLL(c, 0xe9749u); goto L_e9749;
L_e9762:
    X86_TICK(c, 20);
    // 0e9762  pop edi
    X86_AT(c, 0xe9762u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e9763  leave 
    X86_AT(c, 0xe9763u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e9764  ret 
    X86_AT(c, 0xe9764u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe9740u, "ran off the end of a function");
}
void f_000e9768(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0e9768  push ebp
    X86_AT(c, 0xe9768u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e9769  mov ebp, esp
    X86_AT(c, 0xe9769u);
    c.r[5] = c.r[4];
    // 0e976b  push edi
    X86_AT(c, 0xe976bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e976c  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe976cu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e976f  push 0
    X86_AT(c, 0xe976fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e9771  push 0
    X86_AT(c, 0xe9771u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e9773  push 0x22ac
    X86_AT(c, 0xe9773u);
    { uint32_t v = 0x22ACu; push32(c, v); }
    // 0e9778  call 0xe6550
    X86_AT(c, 0xe9778u);
    push32(c, 0xe977du); f_000e6550(c); X86_RET(c, 0xe977du);
    X86_TICK(c, 9);
    // 0e977d  push 0xe
    X86_AT(c, 0xe977du);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0e977f  call 0xe5748
    X86_AT(c, 0xe977fu);
    push32(c, 0xe9784u); f_000e5748(c); X86_RET(c, 0xe9784u);
    X86_TICK(c, 9);
    // 0e9784  push 0xb
    X86_AT(c, 0xe9784u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e9786  call 0xe5760
    X86_AT(c, 0xe9786u);
    push32(c, 0xe978bu); f_000e5760(c); X86_RET(c, 0xe978bu);
    X86_TICK(c, 9);
    // 0e978b  push 1
    X86_AT(c, 0xe978bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e978d  call 0xe5810
    X86_AT(c, 0xe978du);
    push32(c, 0xe9792u); f_000e5810(c); X86_RET(c, 0xe9792u);
    X86_TICK(c, 24);
    // 0e9792  push edi
    X86_AT(c, 0xe9792u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e9793  push 0x13
    X86_AT(c, 0xe9793u);
    { uint32_t v = 0x13u; push32(c, v); }
    // 0e9795  mov edx, 0xffffffff
    X86_AT(c, 0xe9795u);
    c.r[2] = 0xFFFFFFFFu;
    // 0e979a  sub eax, eax
    X86_AT(c, 0xe979au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e979c  push edi
    X86_AT(c, 0xe979cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e979d  mov ecx, edx
    X86_AT(c, 0xe979du);
    c.r[1] = c.r[2];
    // 0e979f  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xe979fu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0e97a1  jne 0xe97a6
    X86_AT(c, 0xe97a1u);
    if (x86_cc(c, 5)) { goto L_e97a6; }
    X86_TICK(c, 4);
    // 0e97a3  inc ecx
    X86_AT(c, 0xe97a3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0e97a4  sub edx, ecx
    X86_AT(c, 0xe97a4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_e97a6:
    X86_TICK(c, 27);
    // 0e97a6  pop edi
    X86_AT(c, 0xe97a6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e97a7  shl edx, 3
    X86_AT(c, 0xe97a7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0e97aa  mov eax, 0x280
    X86_AT(c, 0xe97aau);
    c.r[0] = 0x280u;
    // 0e97af  sub eax, edx
    X86_AT(c, 0xe97afu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e97b1  cdq 
    X86_AT(c, 0xe97b1u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e97b2  sub eax, edx
    X86_AT(c, 0xe97b2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e97b4  sar eax, 1
    X86_AT(c, 0xe97b4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0e97b6  push eax
    X86_AT(c, 0xe97b6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e97b7  call 0xe6a88
    X86_AT(c, 0xe97b7u);
    push32(c, 0xe97bcu); f_000e6a88(c); X86_RET(c, 0xe97bcu);
    X86_TICK(c, 9);
    // 0e97bc  push 0
    X86_AT(c, 0xe97bcu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e97be  call 0xe5810
    X86_AT(c, 0xe97beu);
    push32(c, 0xe97c3u); f_000e5810(c); X86_RET(c, 0xe97c3u);
    X86_TICK(c, 22);
    // 0e97c3  add esp, 0x28
    X86_AT(c, 0xe97c3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0e97c6  pop edi
    X86_AT(c, 0xe97c6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e97c7  leave 
    X86_AT(c, 0xe97c7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e97c8  ret 
    X86_AT(c, 0xe97c8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe9768u, "ran off the end of a function");
}
void f_000e97cc(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0e97cc  push ebp
    X86_AT(c, 0xe97ccu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e97cd  mov ebp, esp
    X86_AT(c, 0xe97cdu);
    c.r[5] = c.r[4];
    // 0e97cf  push dword ptr [ebp + 8]
    X86_AT(c, 0xe97cfu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e97d2  push 0x190
    X86_AT(c, 0xe97d2u);
    { uint32_t v = 0x190u; push32(c, v); }
    // 0e97d7  push 0x280
    X86_AT(c, 0xe97d7u);
    { uint32_t v = 0x280u; push32(c, v); }
    // 0e97dc  push 0x18
    X86_AT(c, 0xe97dcu);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0e97de  push 0
    X86_AT(c, 0xe97deu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e97e0  call 0xe5ed0
    X86_AT(c, 0xe97e0u);
    push32(c, 0xe97e5u); f_000e5ed0(c); X86_RET(c, 0xe97e5u);
    X86_TICK(c, 16);
    // 0e97e5  leave 
    X86_AT(c, 0xe97e5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e97e6  ret 
    X86_AT(c, 0xe97e6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe97ccu, "ran off the end of a function");
}
void f_000e97e8(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0e97e8  push ebp
    X86_AT(c, 0xe97e8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e97e9  mov ebp, esp
    X86_AT(c, 0xe97e9u);
    c.r[5] = c.r[4];
    // 0e97eb  call 0xe5b90
    X86_AT(c, 0xe97ebu);
    push32(c, 0xe97f0u); f_000e5b90(c); X86_RET(c, 0xe97f0u);
    X86_TICK(c, 7);
    // 0e97f0  call 0xe4304
    X86_AT(c, 0xe97f0u);
    push32(c, 0xe97f5u); f_000e4304(c); X86_RET(c, 0xe97f5u);
    X86_TICK(c, 9);
    // 0e97f5  push 0
    X86_AT(c, 0xe97f5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e97f7  call 0xe5a94
    X86_AT(c, 0xe97f7u);
    push32(c, 0xe97fcu); f_000e5a94(c); X86_RET(c, 0xe97fcu);
    X86_TICK(c, 9);
    // 0e97fc  push 1
    X86_AT(c, 0xe97fcu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e97fe  call 0xe5a94
    X86_AT(c, 0xe97feu);
    push32(c, 0xe9803u); f_000e5a94(c); X86_RET(c, 0xe9803u);
    X86_TICK(c, 9);
    // 0e9803  push 3
    X86_AT(c, 0xe9803u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e9805  call 0xe58e0
    X86_AT(c, 0xe9805u);
    push32(c, 0xe980au); f_000e58e0(c); X86_RET(c, 0xe980au);
    X86_TICK(c, 9);
    // 0e980a  push 1
    X86_AT(c, 0xe980au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e980c  call 0xe58cc
    X86_AT(c, 0xe980cu);
    push32(c, 0xe9811u); f_000e58cc(c); X86_RET(c, 0xe9811u);
    X86_TICK(c, 7);
    // 0e9811  call 0xe5690
    X86_AT(c, 0xe9811u);
    push32(c, 0xe9816u); f_000e5690(c); X86_RET(c, 0xe9816u);
    X86_TICK(c, 9);
    // 0e9816  push 1
    X86_AT(c, 0xe9816u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e9818  call 0xe5a3c
    X86_AT(c, 0xe9818u);
    push32(c, 0xe981du); f_000e5a3c(c); X86_RET(c, 0xe981du);
    X86_TICK(c, 9);
    // 0e981d  push 0
    X86_AT(c, 0xe981du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e981f  call 0xe58cc
    X86_AT(c, 0xe981fu);
    push32(c, 0xe9824u); f_000e58cc(c); X86_RET(c, 0xe9824u);
    X86_TICK(c, 7);
    // 0e9824  call 0xe5690
    X86_AT(c, 0xe9824u);
    push32(c, 0xe9829u); f_000e5690(c); X86_RET(c, 0xe9829u);
    X86_TICK(c, 9);
    // 0e9829  push 9
    X86_AT(c, 0xe9829u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0e982b  call 0xe5c6c
    X86_AT(c, 0xe982bu);
    push32(c, 0xe9830u); f_000e5c6c(c); X86_RET(c, 0xe9830u);
    X86_TICK(c, 12);
    // 0e9830  push dword ptr [ebp + 8]
    X86_AT(c, 0xe9830u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e9833  call 0xe97cc
    X86_AT(c, 0xe9833u);
    push32(c, 0xe9838u); f_000e97cc(c); X86_RET(c, 0xe9838u);
    X86_TICK(c, 9);
    // 0e9838  push 0x22c4
    X86_AT(c, 0xe9838u);
    { uint32_t v = 0x22C4u; push32(c, v); }
    // 0e983d  call 0xe9768
    X86_AT(c, 0xe983du);
    push32(c, 0xe9842u); f_000e9768(c); X86_RET(c, 0xe9842u);
    X86_TICK(c, 7);
    // 0e9842  call 0xe75c4
    X86_AT(c, 0xe9842u);
    push32(c, 0xe9847u); f_000e75c4(c); X86_RET(c, 0xe9847u);
    X86_TICK(c, 9);
    // 0e9847  push 2
    X86_AT(c, 0xe9847u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e9849  call 0xe58e0
    X86_AT(c, 0xe9849u);
    push32(c, 0xe984eu); f_000e58e0(c); X86_RET(c, 0xe984eu);
    X86_TICK(c, 7);
    // 0e984e  call 0xe16d4
    X86_AT(c, 0xe984eu);
    push32(c, 0xe9853u); f_000e16d4(c); X86_RET(c, 0xe9853u);
    X86_TICK(c, 7);
    // 0e9853  call 0xe03f8
    X86_AT(c, 0xe9853u);
    push32(c, 0xe9858u); f_000e03f8(c); X86_RET(c, 0xe9858u);
    X86_TICK(c, 9);
    // 0e9858  push 0xe7238
    X86_AT(c, 0xe9858u);
    { uint32_t v = 0xE7238u; push32(c, v); }
    // 0e985d  call 0xe1a54
    X86_AT(c, 0xe985du);
    push32(c, 0xe9862u); f_000e1a54(c); X86_RET(c, 0xe9862u);
    X86_TICK(c, 22);
    // 0e9862  mov dword ptr [0xd7750], 0
    X86_AT(c, 0xe9862u);
    wr32((c.sbase[3] + (uint32_t)(0xD7750u)), 0x0u);
    // 0e986c  sub eax, eax
    X86_AT(c, 0xe986cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e986e  add esp, 0x2c
    X86_AT(c, 0xe986eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0e9871  leave 
    X86_AT(c, 0xe9871u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e9872  ret 
    X86_AT(c, 0xe9872u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe97e8u, "ran off the end of a function");
}
void f_000e9874(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e9874  push 1
    X86_AT(c, 0xe9874u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e9876  call 0xe58cc
    X86_AT(c, 0xe9876u);
    push32(c, 0xe987bu); f_000e58cc(c); X86_RET(c, 0xe987bu);
    X86_TICK(c, 9);
    // 0e987b  push 0
    X86_AT(c, 0xe987bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e987d  call 0xe5c6c
    X86_AT(c, 0xe987du);
    push32(c, 0xe9882u); f_000e5c6c(c); X86_RET(c, 0xe9882u);
    X86_TICK(c, 9);
    // 0e9882  push 0
    X86_AT(c, 0xe9882u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e9884  call 0xe58cc
    X86_AT(c, 0xe9884u);
    push32(c, 0xe9889u); f_000e58cc(c); X86_RET(c, 0xe9889u);
    X86_TICK(c, 9);
    // 0e9889  push 0
    X86_AT(c, 0xe9889u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e988b  call 0xe5c6c
    X86_AT(c, 0xe988bu);
    push32(c, 0xe9890u); f_000e5c6c(c); X86_RET(c, 0xe9890u);
    X86_TICK(c, 9);
    // 0e9890  push 2
    X86_AT(c, 0xe9890u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e9892  call 0xe58e0
    X86_AT(c, 0xe9892u);
    push32(c, 0xe9897u); f_000e58e0(c); X86_RET(c, 0xe9897u);
    X86_TICK(c, 7);
    // 0e9897  call 0xe137c
    X86_AT(c, 0xe9897u);
    push32(c, 0xe989cu); f_000e137c(c); X86_RET(c, 0xe989cu);
    X86_TICK(c, 7);
    // 0e989c  call 0xe0a78
    X86_AT(c, 0xe989cu);
    push32(c, 0xe98a1u); f_000e0a78(c); X86_RET(c, 0xe98a1u);
    X86_TICK(c, 7);
    // 0e98a1  call 0xe1a6c
    X86_AT(c, 0xe98a1u);
    push32(c, 0xe98a6u); f_000e1a6c(c); X86_RET(c, 0xe98a6u);
    X86_TICK(c, 7);
    // 0e98a6  call 0xe0e68
    X86_AT(c, 0xe98a6u);
    push32(c, 0xe98abu); f_000e0e68(c); X86_RET(c, 0xe98abu);
    X86_TICK(c, 7);
    // 0e98ab  call 0xe175c
    X86_AT(c, 0xe98abu);
    push32(c, 0xe98b0u); f_000e175c(c); X86_RET(c, 0xe98b0u);
    X86_TICK(c, 12);
    // 0e98b0  add esp, 0x14
    X86_AT(c, 0xe98b0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0e98b3  ret 
    X86_AT(c, 0xe98b3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe9874u, "ran off the end of a function");
}
void f_000e98b4(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0e98b4  cmp dword ptr [0xce720], 0
    X86_AT(c, 0xe98b4u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCE720u))), 0x0u, 0, 4);
    // 0e98bb  je 0xe9a0b
    X86_AT(c, 0xe98bbu);
    if (x86_cc(c, 4)) { goto L_e9a0b; }
    X86_TICK(c, 9);
    // 0e98c1  push 0
    X86_AT(c, 0xe98c1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e98c3  call 0xe58e0
    X86_AT(c, 0xe98c3u);
    push32(c, 0xe98c8u); f_000e58e0(c); X86_RET(c, 0xe98c8u);
    X86_TICK(c, 9);
    // 0e98c8  push 1
    X86_AT(c, 0xe98c8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e98ca  call 0xe58cc
    X86_AT(c, 0xe98cau);
    push32(c, 0xe98cfu); f_000e58cc(c); X86_RET(c, 0xe98cfu);
    X86_TICK(c, 9);
    // 0e98cf  push 0
    X86_AT(c, 0xe98cfu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e98d1  call 0xe5c6c
    X86_AT(c, 0xe98d1u);
    push32(c, 0xe98d6u); f_000e5c6c(c); X86_RET(c, 0xe98d6u);
    X86_TICK(c, 27);
    // 0e98d6  push 0xa
    X86_AT(c, 0xe98d6u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e98d8  push 0xb
    X86_AT(c, 0xe98d8u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e98da  push 0xf
    X86_AT(c, 0xe98dau);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e98dc  push 0xc
    X86_AT(c, 0xe98dcu);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0e98de  push 0x45
    X86_AT(c, 0xe98deu);
    { uint32_t v = 0x45u; push32(c, v); }
    // 0e98e0  push 0xe6
    X86_AT(c, 0xe98e0u);
    { uint32_t v = 0xE6u; push32(c, v); }
    // 0e98e5  push 0x236
    X86_AT(c, 0xe98e5u);
    { uint32_t v = 0x236u; push32(c, v); }
    // 0e98ea  push 0x83
    X86_AT(c, 0xe98eau);
    { uint32_t v = 0x83u; push32(c, v); }
    // 0e98ef  push 0x5c
    X86_AT(c, 0xe98efu);
    { uint32_t v = 0x5Cu; push32(c, v); }
    // 0e98f1  push 1
    X86_AT(c, 0xe98f1u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e98f3  call 0xe6858
    X86_AT(c, 0xe98f3u);
    push32(c, 0xe98f8u); f_000e6858(c); X86_RET(c, 0xe98f8u);
    X86_TICK(c, 9);
    // 0e98f8  push 1
    X86_AT(c, 0xe98f8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e98fa  call 0xe699c
    X86_AT(c, 0xe98fau);
    push32(c, 0xe98ffu); f_000e699c(c); X86_RET(c, 0xe98ffu);
    X86_TICK(c, 11);
    // 0e98ff  push 0xd
    X86_AT(c, 0xe98ffu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0e9901  push 1
    X86_AT(c, 0xe9901u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e9903  call 0xe74d8
    X86_AT(c, 0xe9903u);
    push32(c, 0xe9908u); f_000e74d8(c); X86_RET(c, 0xe9908u);
    X86_TICK(c, 11);
    // 0e9908  add esp, 0x40
    X86_AT(c, 0xe9908u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0e990b  push 1
    X86_AT(c, 0xe990bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e990d  call 0xe693c
    X86_AT(c, 0xe990du);
    push32(c, 0xe9912u); f_000e693c(c); X86_RET(c, 0xe9912u);
    X86_TICK(c, 13);
    // 0e9912  push 1
    X86_AT(c, 0xe9912u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e9914  push 0x17
    X86_AT(c, 0xe9914u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0e9916  push 1
    X86_AT(c, 0xe9916u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e9918  call 0xe7260
    X86_AT(c, 0xe9918u);
    push32(c, 0xe991du); f_000e7260(c); X86_RET(c, 0xe991du);
    X86_TICK(c, 11);
    // 0e991d  push 0x22ec
    X86_AT(c, 0xe991du);
    { uint32_t v = 0x22ECu; push32(c, v); }
    // 0e9922  push 1
    X86_AT(c, 0xe9922u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e9924  call 0xe6cb0
    X86_AT(c, 0xe9924u);
    push32(c, 0xe9929u); f_000e6cb0(c); X86_RET(c, 0xe9929u);
    X86_TICK(c, 13);
    // 0e9929  push 3
    X86_AT(c, 0xe9929u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e992b  push 0x17
    X86_AT(c, 0xe992bu);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0e992d  push 1
    X86_AT(c, 0xe992du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e992f  call 0xe7260
    X86_AT(c, 0xe992fu);
    push32(c, 0xe9934u); f_000e7260(c); X86_RET(c, 0xe9934u);
    X86_TICK(c, 11);
    // 0e9934  push 0x2304
    X86_AT(c, 0xe9934u);
    { uint32_t v = 0x2304u; push32(c, v); }
    // 0e9939  push 1
    X86_AT(c, 0xe9939u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e993b  call 0xe6cb0
    X86_AT(c, 0xe993bu);
    push32(c, 0xe9940u); f_000e6cb0(c); X86_RET(c, 0xe9940u);
    X86_TICK(c, 11);
    // 0e9940  push 0xf
    X86_AT(c, 0xe9940u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e9942  push 1
    X86_AT(c, 0xe9942u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e9944  call 0xe74d8
    X86_AT(c, 0xe9944u);
    push32(c, 0xe9949u); f_000e74d8(c); X86_RET(c, 0xe9949u);
    X86_TICK(c, 9);
    // 0e9949  push 1
    X86_AT(c, 0xe9949u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e994b  call 0xe693c
    X86_AT(c, 0xe994bu);
    push32(c, 0xe9950u); f_000e693c(c); X86_RET(c, 0xe9950u);
    X86_TICK(c, 13);
    // 0e9950  push 2
    X86_AT(c, 0xe9950u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e9952  push 0x18
    X86_AT(c, 0xe9952u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0e9954  push 1
    X86_AT(c, 0xe9954u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e9956  call 0xe7260
    X86_AT(c, 0xe9956u);
    push32(c, 0xe995bu); f_000e7260(c); X86_RET(c, 0xe995bu);
    X86_TICK(c, 13);
    // 0e995b  add esp, 0x44
    X86_AT(c, 0xe995bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 0e995e  push 0xcefbc
    X86_AT(c, 0xe995eu);
    { uint32_t v = 0xCEFBCu; push32(c, v); }
    // 0e9963  push 1
    X86_AT(c, 0xe9963u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e9965  call 0xe5654
    X86_AT(c, 0xe9965u);
    push32(c, 0xe996au); f_000e5654(c); X86_RET(c, 0xe996au);
    X86_TICK(c, 13);
    // 0e996a  push 5
    X86_AT(c, 0xe996au);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e996c  push 3
    X86_AT(c, 0xe996cu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e996e  push 1
    X86_AT(c, 0xe996eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e9970  call 0xe7260
    X86_AT(c, 0xe9970u);
    push32(c, 0xe9975u); f_000e7260(c); X86_RET(c, 0xe9975u);
    X86_TICK(c, 11);
    // 0e9975  push 0xcefe4
    X86_AT(c, 0xe9975u);
    { uint32_t v = 0xCEFE4u; push32(c, v); }
    // 0e997a  push 1
    X86_AT(c, 0xe997au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e997c  call 0xe6cb0
    X86_AT(c, 0xe997cu);
    push32(c, 0xe9981u); f_000e6cb0(c); X86_RET(c, 0xe9981u);
    X86_TICK(c, 13);
    // 0e9981  push 6
    X86_AT(c, 0xe9981u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0e9983  push 8
    X86_AT(c, 0xe9983u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0e9985  push 1
    X86_AT(c, 0xe9985u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e9987  call 0xe7260
    X86_AT(c, 0xe9987u);
    push32(c, 0xe998cu); f_000e7260(c); X86_RET(c, 0xe998cu);
    X86_TICK(c, 11);
    // 0e998c  push 0xcf024
    X86_AT(c, 0xe998cu);
    { uint32_t v = 0xCF024u; push32(c, v); }
    // 0e9991  push 1
    X86_AT(c, 0xe9991u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e9993  call 0xe6cb0
    X86_AT(c, 0xe9993u);
    push32(c, 0xe9998u); f_000e6cb0(c); X86_RET(c, 0xe9998u);
    X86_TICK(c, 13);
    // 0e9998  push 7
    X86_AT(c, 0xe9998u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e999a  push 6
    X86_AT(c, 0xe999au);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0e999c  push 1
    X86_AT(c, 0xe999cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e999e  call 0xe7260
    X86_AT(c, 0xe999eu);
    push32(c, 0xe99a3u); f_000e7260(c); X86_RET(c, 0xe99a3u);
    X86_TICK(c, 13);
    // 0e99a3  add esp, 0x3c
    X86_AT(c, 0xe99a3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0e99a6  push 0xcf058
    X86_AT(c, 0xe99a6u);
    { uint32_t v = 0xCF058u; push32(c, v); }
    // 0e99ab  push 1
    X86_AT(c, 0xe99abu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e99ad  call 0xe6cb0
    X86_AT(c, 0xe99adu);
    push32(c, 0xe99b2u); f_000e6cb0(c); X86_RET(c, 0xe99b2u);
    X86_TICK(c, 13);
    // 0e99b2  push 9
    X86_AT(c, 0xe99b2u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0e99b4  push 0xd
    X86_AT(c, 0xe99b4u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0e99b6  push 1
    X86_AT(c, 0xe99b6u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e99b8  call 0xe7260
    X86_AT(c, 0xe99b8u);
    push32(c, 0xe99bdu); f_000e7260(c); X86_RET(c, 0xe99bdu);
    X86_TICK(c, 11);
    // 0e99bd  push 0xcf094
    X86_AT(c, 0xe99bdu);
    { uint32_t v = 0xCF094u; push32(c, v); }
    // 0e99c2  push 1
    X86_AT(c, 0xe99c2u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e99c4  call 0xe5654
    X86_AT(c, 0xe99c4u);
    push32(c, 0xe99c9u); f_000e5654(c); X86_RET(c, 0xe99c9u);
    X86_TICK(c, 13);
    // 0e99c9  push 0xb
    X86_AT(c, 0xe99c9u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e99cb  push 6
    X86_AT(c, 0xe99cbu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0e99cd  push 1
    X86_AT(c, 0xe99cdu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e99cf  call 0xe7260
    X86_AT(c, 0xe99cfu);
    push32(c, 0xe99d4u); f_000e7260(c); X86_RET(c, 0xe99d4u);
    X86_TICK(c, 11);
    // 0e99d4  push 0xcf0e4
    X86_AT(c, 0xe99d4u);
    { uint32_t v = 0xCF0E4u; push32(c, v); }
    // 0e99d9  push 1
    X86_AT(c, 0xe99d9u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e99db  call 0xe5654
    X86_AT(c, 0xe99dbu);
    push32(c, 0xe99e0u); f_000e5654(c); X86_RET(c, 0xe99e0u);
    X86_TICK(c, 13);
    // 0e99e0  push 0xc
    X86_AT(c, 0xe99e0u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0e99e2  push 6
    X86_AT(c, 0xe99e2u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0e99e4  push 1
    X86_AT(c, 0xe99e4u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e99e6  call 0xe7260
    X86_AT(c, 0xe99e6u);
    push32(c, 0xe99ebu); f_000e7260(c); X86_RET(c, 0xe99ebu);
    X86_TICK(c, 13);
    // 0e99eb  add esp, 0x3c
    X86_AT(c, 0xe99ebu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0e99ee  push 0xcf150
    X86_AT(c, 0xe99eeu);
    { uint32_t v = 0xCF150u; push32(c, v); }
    // 0e99f3  push 1
    X86_AT(c, 0xe99f3u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e99f5  call 0xe5654
    X86_AT(c, 0xe99f5u);
    push32(c, 0xe99fau); f_000e5654(c); X86_RET(c, 0xe99fau);
    X86_TICK(c, 9);
    // 0e99fa  push 2
    X86_AT(c, 0xe99fau);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e99fc  call 0xe58e0
    X86_AT(c, 0xe99fcu);
    push32(c, 0xe9a01u); f_000e58e0(c); X86_RET(c, 0xe9a01u);
    X86_TICK(c, 9);
    // 0e9a01  push 0
    X86_AT(c, 0xe9a01u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e9a03  call 0xe58cc
    X86_AT(c, 0xe9a03u);
    push32(c, 0xe9a08u); f_000e58cc(c); X86_RET(c, 0xe9a08u);
    X86_TICK(c, 2);
    // 0e9a08  add esp, 0x10
    X86_AT(c, 0xe9a08u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_e9a0b:
    X86_TICK(c, 10);
    // 0e9a0b  ret 
    X86_AT(c, 0xe9a0bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe98b4u, "ran off the end of a function");
}
void f_000e9a0c(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0e9a0c  push ebp
    X86_AT(c, 0xe9a0cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e9a0d  mov ebp, esp
    X86_AT(c, 0xe9a0du);
    c.r[5] = c.r[4];
    // 0e9a0f  sub esp, 0x14
    X86_AT(c, 0xe9a0fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x14u, 0, 4); }
    // 0e9a12  push ebx
    X86_AT(c, 0xe9a12u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e9a13  push esi
    X86_AT(c, 0xe9a13u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e9a14  push edi
    X86_AT(c, 0xe9a14u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e9a15  cmp dword ptr [0xcf194], 0
    X86_AT(c, 0xe9a15u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCF194u))), 0x0u, 0, 4);
    // 0e9a1c  jne 0xe9a2a
    X86_AT(c, 0xe9a1cu);
    if (x86_cc(c, 5)) { goto L_e9a2a; }
    X86_TICK(c, 9);
    // 0e9a1e  mov dword ptr [0xcf194], 1
    X86_AT(c, 0xe9a1eu);
    wr32((c.sbase[3] + (uint32_t)(0xCF194u)), 0x1u);
    // 0e9a28  jmp 0xe9a2f
    X86_AT(c, 0xe9a28u);
    goto L_e9a2f;
L_e9a2a:
    X86_TICK(c, 7);
    // 0e9a2a  call 0xe98b4
    X86_AT(c, 0xe9a2au);
    push32(c, 0xe9a2fu); f_000e98b4(c); X86_RET(c, 0xe9a2fu);
L_e9a2f:
    X86_TICK(c, 12);
    // 0e9a2f  cmp dword ptr [0xd7750], 0
    X86_AT(c, 0xe9a2fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD7750u))), 0x0u, 0, 4);
    // 0e9a36  jne 0xe9a5f
    X86_AT(c, 0xe9a36u);
    if (x86_cc(c, 5)) { goto L_e9a5f; }
    X86_TICK(c, 9);
    // 0e9a38  push 0x41a00
    X86_AT(c, 0xe9a38u);
    { uint32_t v = 0x41A00u; push32(c, v); }
    // 0e9a3d  call 0x101784
    X86_AT(c, 0xe9a3du);
    push32(c, 0xe9a42u); f_00101784(c); X86_RET(c, 0xe9a42u);
    X86_TICK(c, 12);
    // 0e9a42  add esp, 4
    X86_AT(c, 0xe9a42u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e9a45  xchg ebx, eax
    X86_AT(c, 0xe9a45u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0e9a46  and ebx, ebx
    X86_AT(c, 0xe9a46u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0e9a48  jne 0xe9a59
    X86_AT(c, 0xe9a48u);
    if (x86_cc(c, 5)) { goto L_e9a59; }
    X86_TICK(c, 9);
    // 0e9a4a  push 0x231c
    X86_AT(c, 0xe9a4au);
    { uint32_t v = 0x231Cu; push32(c, v); }
    // 0e9a4f  call 0xe75f8
    X86_AT(c, 0xe9a4fu);
    push32(c, 0xe9a54u); f_000e75f8(c); X86_RET(c, 0xe9a54u);
    X86_TICK(c, 7);
    // 0e9a54  jmp 0xe9c23
    X86_AT(c, 0xe9a54u);
    goto L_e9c23;
L_e9a59:
    X86_TICK(c, 2);
    // 0e9a59  mov dword ptr [0xd7750], ebx
    X86_AT(c, 0xe9a59u);
    wr32((c.sbase[3] + (uint32_t)(0xD7750u)), c.r[3]);
L_e9a5f:
    X86_TICK(c, 11);
    // 0e9a5f  mov ebx, dword ptr [0xd7750]
    X86_AT(c, 0xe9a5fu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0xD7750u)));
    // 0e9a65  call 0xe0a78
    X86_AT(c, 0xe9a65u);
    push32(c, 0xe9a6au); f_000e0a78(c); X86_RET(c, 0xe9a6au);
    X86_TICK(c, 8);
    // 0e9a6a  mov eax, dword ptr [0x7a6b4]
    X86_AT(c, 0xe9a6au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x7A6B4u)));
    // 0e9a6f  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe9a6fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e9a72  sub edi, edi
    X86_AT(c, 0xe9a72u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e9a74:
    X86_TICK(c, 7);
    // 0e9a74  cmp edi, 0x2710
    X86_AT(c, 0xe9a74u);
    (void)x86_sub(c, c.r[7], 0x2710u, 0, 4);
    // 0e9a7a  jge 0xe9ace
    X86_AT(c, 0xe9a7au);
    if (x86_cc(c, 13)) { goto L_e9ace; }
    X86_TICK(c, 9);
    // 0e9a7c  push 1
    X86_AT(c, 0xe9a7cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e9a7e  call 0xe4b60
    X86_AT(c, 0xe9a7eu);
    push32(c, 0xe9a83u); f_000e4b60(c); X86_RET(c, 0xe9a83u);
    X86_TICK(c, 9);
    // 0e9a83  add esp, 4
    X86_AT(c, 0xe9a83u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e9a86  and al, al
    X86_AT(c, 0xe9a86u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0e9a88  je 0xe9aa0
    X86_AT(c, 0xe9a88u);
    if (x86_cc(c, 4)) { goto L_e9aa0; }
    X86_TICK(c, 9);
    // 0e9a8a  push 2
    X86_AT(c, 0xe9a8au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e9a8c  call 0xe6c68
    X86_AT(c, 0xe9a8cu);
    push32(c, 0xe9a91u); f_000e6c68(c); X86_RET(c, 0xe9a91u);
    X86_TICK(c, 9);
    // 0e9a91  push 4
    X86_AT(c, 0xe9a91u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e9a93  call 0xe3530
    X86_AT(c, 0xe9a93u);
    push32(c, 0xe9a98u); f_000e3530(c); X86_RET(c, 0xe9a98u);
    X86_TICK(c, 9);
    // 0e9a98  add esp, 8
    X86_AT(c, 0xe9a98u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e9a9b  jmp 0xe9c26
    X86_AT(c, 0xe9a9bu);
    goto L_e9c26;
L_e9aa0:
    X86_TICK(c, 7);
    // 0e9aa0  and edi, edi
    X86_AT(c, 0xe9aa0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e9aa2  je 0xe9aaf
    X86_AT(c, 0xe9aa2u);
    if (x86_cc(c, 4)) { goto L_e9aaf; }
    X86_TICK(c, 15);
    // 0e9aa4  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe9aa4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e9aa7  cmp eax, dword ptr [0x7a6b4]
    X86_AT(c, 0xe9aa7u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x7A6B4u))), 0, 4);
    // 0e9aad  je 0xe9acb
    X86_AT(c, 0xe9aadu);
    if (x86_cc(c, 4)) { goto L_e9acb; }
L_e9aaf:
    X86_TICK(c, 9);
    // 0e9aaf  push 2
    X86_AT(c, 0xe9aafu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e9ab1  call 0xe6c68
    X86_AT(c, 0xe9ab1u);
    push32(c, 0xe9ab6u); f_000e6c68(c); X86_RET(c, 0xe9ab6u);
    X86_TICK(c, 9);
    // 0e9ab6  push 0x2350
    X86_AT(c, 0xe9ab6u);
    { uint32_t v = 0x2350u; push32(c, v); }
    // 0e9abb  call 0xe75f8
    X86_AT(c, 0xe9abbu);
    push32(c, 0xe9ac0u); f_000e75f8(c); X86_RET(c, 0xe9ac0u);
    X86_TICK(c, 8);
    // 0e9ac0  mov eax, dword ptr [0x7a6b4]
    X86_AT(c, 0xe9ac0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x7A6B4u)));
    // 0e9ac5  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe9ac5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e9ac8  add esp, 8
    X86_AT(c, 0xe9ac8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_e9acb:
    X86_TICK(c, 9);
    // 0e9acb  inc edi
    X86_AT(c, 0xe9acbu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e9acc  jmp 0xe9a74
    X86_AT(c, 0xe9accu);
    X86_POLL(c, 0xe9a74u); goto L_e9a74;
L_e9ace:
    X86_TICK(c, 9);
    // 0e9ace  push 2
    X86_AT(c, 0xe9aceu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e9ad0  call 0xe6c68
    X86_AT(c, 0xe9ad0u);
    push32(c, 0xe9ad5u); f_000e6c68(c); X86_RET(c, 0xe9ad5u);
    X86_TICK(c, 9);
    // 0e9ad5  push 0
    X86_AT(c, 0xe9ad5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e9ad7  call 0xe58e0
    X86_AT(c, 0xe9ad7u);
    push32(c, 0xe9adcu); f_000e58e0(c); X86_RET(c, 0xe9adcu);
    X86_TICK(c, 9);
    // 0e9adc  push 1
    X86_AT(c, 0xe9adcu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e9ade  call 0xe58cc
    X86_AT(c, 0xe9adeu);
    push32(c, 0xe9ae3u); f_000e58cc(c); X86_RET(c, 0xe9ae3u);
    X86_TICK(c, 11);
    // 0e9ae3  push 0
    X86_AT(c, 0xe9ae3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e9ae5  push 1
    X86_AT(c, 0xe9ae5u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e9ae7  call 0xe6b70
    X86_AT(c, 0xe9ae7u);
    push32(c, 0xe9aecu); f_000e6b70(c); X86_RET(c, 0xe9aecu);
    X86_TICK(c, 15);
    // 0e9aec  mov dword ptr [0xce720], 0xffffffff
    X86_AT(c, 0xe9aecu);
    wr32((c.sbase[3] + (uint32_t)(0xCE720u)), 0xFFFFFFFFu);
    // 0e9af6  push 0x4b
    X86_AT(c, 0xe9af6u);
    { uint32_t v = 0x4Bu; push32(c, v); }
    // 0e9af8  push 0x36
    X86_AT(c, 0xe9af8u);
    { uint32_t v = 0x36u; push32(c, v); }
    // 0e9afa  push 0x2384
    X86_AT(c, 0xe9afau);
    { uint32_t v = 0x2384u; push32(c, v); }
    // 0e9aff  call 0xe6550
    X86_AT(c, 0xe9affu);
    push32(c, 0xe9b04u); f_000e6550(c); X86_RET(c, 0xe9b04u);
    X86_TICK(c, 9);
    // 0e9b04  push 2
    X86_AT(c, 0xe9b04u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e9b06  call 0xe58e0
    X86_AT(c, 0xe9b06u);
    push32(c, 0xe9b0bu); f_000e58e0(c); X86_RET(c, 0xe9b0bu);
    X86_TICK(c, 25);
    // 0e9b0b  lea eax, [ebp - 4]
    X86_AT(c, 0xe9b0bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0e9b0e  push eax
    X86_AT(c, 0xe9b0eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e9b0f  lea ecx, [ebp - 0xc]
    X86_AT(c, 0xe9b0fu);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0e9b12  push ecx
    X86_AT(c, 0xe9b12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e9b13  lea edx, [ebp - 8]
    X86_AT(c, 0xe9b13u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0e9b16  push edx
    X86_AT(c, 0xe9b16u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e9b17  push 0x6400
    X86_AT(c, 0xe9b17u);
    { uint32_t v = 0x6400u; push32(c, v); }
    // 0e9b1c  push ebx
    X86_AT(c, 0xe9b1cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e9b1d  push 0x239c
    X86_AT(c, 0xe9b1du);
    { uint32_t v = 0x239Cu; push32(c, v); }
    // 0e9b22  call 0xe6460
    X86_AT(c, 0xe9b22u);
    push32(c, 0xe9b27u); f_000e6460(c); X86_RET(c, 0xe9b27u);
    X86_TICK(c, 31);
    // 0e9b27  add esp, 0x3c
    X86_AT(c, 0xe9b27u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0e9b2a  lea eax, [ebx + 0x6400]
    X86_AT(c, 0xe9b2au);
    c.r[0] = (uint32_t)(c.r[3] + 0x6400u);
    // 0e9b30  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xe9b30u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0e9b33  lea ecx, [ebp - 4]
    X86_AT(c, 0xe9b33u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0e9b36  push ecx
    X86_AT(c, 0xe9b36u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e9b37  lea edx, [ebp - 0xc]
    X86_AT(c, 0xe9b37u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0e9b3a  push edx
    X86_AT(c, 0xe9b3au);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e9b3b  lea ecx, [ebp - 8]
    X86_AT(c, 0xe9b3bu);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0e9b3e  push ecx
    X86_AT(c, 0xe9b3eu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e9b3f  push 0x6400
    X86_AT(c, 0xe9b3fu);
    { uint32_t v = 0x6400u; push32(c, v); }
    // 0e9b44  push eax
    X86_AT(c, 0xe9b44u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e9b45  push 0x23b4
    X86_AT(c, 0xe9b45u);
    { uint32_t v = 0x23B4u; push32(c, v); }
    // 0e9b4a  call 0xe6460
    X86_AT(c, 0xe9b4au);
    push32(c, 0xe9b4fu); f_000e6460(c); X86_RET(c, 0xe9b4fu);
    X86_TICK(c, 33);
    // 0e9b4f  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xe9b4fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0e9b52  add eax, 0x6400
    X86_AT(c, 0xe9b52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x6400u, 0, 4); }
    // 0e9b57  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xe9b57u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0e9b5a  lea ecx, [ebp - 4]
    X86_AT(c, 0xe9b5au);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0e9b5d  push ecx
    X86_AT(c, 0xe9b5du);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e9b5e  lea ecx, [ebp - 0xc]
    X86_AT(c, 0xe9b5eu);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0e9b61  push ecx
    X86_AT(c, 0xe9b61u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e9b62  lea ecx, [ebp - 8]
    X86_AT(c, 0xe9b62u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0e9b65  push ecx
    X86_AT(c, 0xe9b65u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e9b66  push 0x6400
    X86_AT(c, 0xe9b66u);
    { uint32_t v = 0x6400u; push32(c, v); }
    // 0e9b6b  push eax
    X86_AT(c, 0xe9b6bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e9b6c  push 0x23cc
    X86_AT(c, 0xe9b6cu);
    { uint32_t v = 0x23CCu; push32(c, v); }
    // 0e9b71  call 0xe6460
    X86_AT(c, 0xe9b71u);
    push32(c, 0xe9b76u); f_000e6460(c); X86_RET(c, 0xe9b76u);
    X86_TICK(c, 9);
    // 0e9b76  push 4
    X86_AT(c, 0xe9b76u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e9b78  call 0xe3530
    X86_AT(c, 0xe9b78u);
    push32(c, 0xe9b7du); f_000e3530(c); X86_RET(c, 0xe9b7du);
    X86_TICK(c, 6);
    // 0e9b7d  sub esi, esi
    X86_AT(c, 0xe9b7du);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0e9b7f  mov edi, esi
    X86_AT(c, 0xe9b7fu);
    c.r[7] = c.r[6];
    // 0e9b81  add esp, 0x34
    X86_AT(c, 0xe9b81u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
L_e9b84:
    X86_TICK(c, 9);
    // 0e9b84  push 1
    X86_AT(c, 0xe9b84u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e9b86  call 0xe4b60
    X86_AT(c, 0xe9b86u);
    push32(c, 0xe9b8bu); f_000e4b60(c); X86_RET(c, 0xe9b8bu);
    X86_TICK(c, 9);
    // 0e9b8b  add esp, 4
    X86_AT(c, 0xe9b8bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e9b8e  and al, al
    X86_AT(c, 0xe9b8eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0e9b90  je 0xe9ba8
    X86_AT(c, 0xe9b90u);
    if (x86_cc(c, 4)) { goto L_e9ba8; }
    X86_TICK(c, 9);
    // 0e9b92  push 0
    X86_AT(c, 0xe9b92u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e9b94  call 0xe58cc
    X86_AT(c, 0xe9b94u);
    push32(c, 0xe9b99u); f_000e58cc(c); X86_RET(c, 0xe9b99u);
    X86_TICK(c, 9);
    // 0e9b99  push 2
    X86_AT(c, 0xe9b99u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e9b9b  call 0xe6c68
    X86_AT(c, 0xe9b9bu);
    push32(c, 0xe9ba0u); f_000e6c68(c); X86_RET(c, 0xe9ba0u);
    X86_TICK(c, 9);
    // 0e9ba0  add esp, 8
    X86_AT(c, 0xe9ba0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e9ba3  jmp 0xe9c1c
    X86_AT(c, 0xe9ba3u);
    goto L_e9c1c;
L_e9ba8:
    X86_TICK(c, 9);
    // 0e9ba8  dec esi
    X86_AT(c, 0xe9ba8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0e9ba9  and esi, esi
    X86_AT(c, 0xe9ba9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e9bab  jge 0xe9b84
    X86_AT(c, 0xe9babu);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xe9b84u); goto L_e9b84; }
    X86_TICK(c, 9);
    // 0e9bad  mov esi, 0x3e8
    X86_AT(c, 0xe9badu);
    c.r[6] = 0x3E8u;
    // 0e9bb2  cmp edi, 2
    X86_AT(c, 0xe9bb2u);
    (void)x86_sub(c, c.r[7], 0x2u, 0, 4);
    // 0e9bb5  jle 0xe9bb9
    X86_AT(c, 0xe9bb5u);
    if (x86_cc(c, 14)) { goto L_e9bb9; }
    X86_TICK(c, 2);
    // 0e9bb7  sub edi, edi
    X86_AT(c, 0xe9bb7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e9bb9:
    X86_TICK(c, 7);
    // 0e9bb9  and edi, edi
    X86_AT(c, 0xe9bb9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e9bbb  jne 0xe9bd4
    X86_AT(c, 0xe9bbbu);
    if (x86_cc(c, 5)) { goto L_e9bd4; }
    X86_TICK(c, 17);
    // 0e9bbd  push 0xc8
    X86_AT(c, 0xe9bbdu);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0e9bc2  push 0x100
    X86_AT(c, 0xe9bc2u);
    { uint32_t v = 0x100u; push32(c, v); }
    // 0e9bc7  push 0xf5
    X86_AT(c, 0xe9bc7u);
    { uint32_t v = 0xF5u; push32(c, v); }
    // 0e9bcc  push 0xf4
    X86_AT(c, 0xe9bccu);
    { uint32_t v = 0xF4u; push32(c, v); }
    // 0e9bd1  push ebx
    X86_AT(c, 0xe9bd1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e9bd2  jmp 0xe9c0e
    X86_AT(c, 0xe9bd2u);
    goto L_e9c0e;
L_e9bd4:
    X86_TICK(c, 7);
    // 0e9bd4  cmp edi, 1
    X86_AT(c, 0xe9bd4u);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0e9bd7  jne 0xe9bf2
    X86_AT(c, 0xe9bd7u);
    if (x86_cc(c, 5)) { goto L_e9bf2; }
    X86_TICK(c, 20);
    // 0e9bd9  push 0xc8
    X86_AT(c, 0xe9bd9u);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0e9bde  push 0x100
    X86_AT(c, 0xe9bdeu);
    { uint32_t v = 0x100u; push32(c, v); }
    // 0e9be3  push 0xf5
    X86_AT(c, 0xe9be3u);
    { uint32_t v = 0xF5u; push32(c, v); }
    // 0e9be8  push 0xf4
    X86_AT(c, 0xe9be8u);
    { uint32_t v = 0xF4u; push32(c, v); }
    // 0e9bed  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xe9bedu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0e9bf0  jmp 0xe9c0e
    X86_AT(c, 0xe9bf0u);
    goto L_e9c0e;
L_e9bf2:
    X86_TICK(c, 7);
    // 0e9bf2  cmp edi, 2
    X86_AT(c, 0xe9bf2u);
    (void)x86_sub(c, c.r[7], 0x2u, 0, 4);
    // 0e9bf5  jne 0xe9c16
    X86_AT(c, 0xe9bf5u);
    if (x86_cc(c, 5)) { goto L_e9c16; }
    X86_TICK(c, 13);
    // 0e9bf7  push 0xc8
    X86_AT(c, 0xe9bf7u);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0e9bfc  push 0x100
    X86_AT(c, 0xe9bfcu);
    { uint32_t v = 0x100u; push32(c, v); }
    // 0e9c01  push 0xf5
    X86_AT(c, 0xe9c01u);
    { uint32_t v = 0xF5u; push32(c, v); }
    // 0e9c06  push 0xf4
    X86_AT(c, 0xe9c06u);
    { uint32_t v = 0xF4u; push32(c, v); }
    // 0e9c0b  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xe9c0bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
L_e9c0e:
    X86_TICK(c, 7);
    // 0e9c0e  call 0xe6288
    X86_AT(c, 0xe9c0eu);
    push32(c, 0xe9c13u); f_000e6288(c); X86_RET(c, 0xe9c13u);
    X86_TICK(c, 2);
    // 0e9c13  add esp, 0x14
    X86_AT(c, 0xe9c13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_e9c16:
    X86_TICK(c, 9);
    // 0e9c16  inc edi
    X86_AT(c, 0xe9c16u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e9c17  jmp 0xe9b84
    X86_AT(c, 0xe9c17u);
    X86_POLL(c, 0xe9b84u); goto L_e9b84;
L_e9c1c:
    X86_TICK(c, 9);
    // 0e9c1c  push 0
    X86_AT(c, 0xe9c1cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e9c1e  call 0xe58cc
    X86_AT(c, 0xe9c1eu);
    push32(c, 0xe9c23u); f_000e58cc(c); X86_RET(c, 0xe9c23u);
L_e9c23:
    X86_TICK(c, 2);
    // 0e9c23  add esp, 4
    X86_AT(c, 0xe9c23u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e9c26:
    X86_TICK(c, 28);
    // 0e9c26  pop edi
    X86_AT(c, 0xe9c26u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e9c27  pop esi
    X86_AT(c, 0xe9c27u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e9c28  pop ebx
    X86_AT(c, 0xe9c28u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e9c29  leave 
    X86_AT(c, 0xe9c29u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e9c2a  ret 
    X86_AT(c, 0xe9c2au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe9a0cu, "ran off the end of a function");
}
void f_000e9c2c(X86Cpu& c) {
    X86_TICK(c, 4);
    // 0e9c2c  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0xe9c2cu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
L_e9c30:
    X86_TICK(c, 11);
    // 0e9c30  mov al, byte ptr [ecx]
    X86_AT(c, 0xe9c30u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1]))));
    // 0e9c32  cmp al, 0x3d
    X86_AT(c, 0xe9c32u);
    (void)x86_sub(c, g8(c, 0), 0x3Du, 0, 1);
    // 0e9c34  je 0xe9c3d
    X86_AT(c, 0xe9c34u);
    if (x86_cc(c, 4)) { goto L_e9c3d; }
    X86_TICK(c, 7);
    // 0e9c36  and al, al
    X86_AT(c, 0xe9c36u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0e9c38  je 0xe9c3d
    X86_AT(c, 0xe9c38u);
    if (x86_cc(c, 4)) { goto L_e9c3d; }
    X86_TICK(c, 9);
    // 0e9c3a  inc ecx
    X86_AT(c, 0xe9c3au);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0e9c3b  jmp 0xe9c30
    X86_AT(c, 0xe9c3bu);
    X86_POLL(c, 0xe9c30u); goto L_e9c30;
L_e9c3d:
    X86_TICK(c, 14);
    // 0e9c3d  inc ecx
    X86_AT(c, 0xe9c3du);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0e9c3e  mov eax, ecx
    X86_AT(c, 0xe9c3eu);
    c.r[0] = c.r[1];
    // 0e9c40  ret 
    X86_AT(c, 0xe9c40u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe9c2cu, "ran off the end of a function");
}
void f_000e9c44(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0e9c44  push ebp
    X86_AT(c, 0xe9c44u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e9c45  mov ebp, esp
    X86_AT(c, 0xe9c45u);
    c.r[5] = c.r[4];
    // 0e9c47  push 2
    X86_AT(c, 0xe9c47u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e9c49  call 0xe693c
    X86_AT(c, 0xe9c49u);
    push32(c, 0xe9c4eu); f_000e693c(c); X86_RET(c, 0xe9c4eu);
    X86_TICK(c, 9);
    // 0e9c4e  push 2
    X86_AT(c, 0xe9c4eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e9c50  call 0xe6c68
    X86_AT(c, 0xe9c50u);
    push32(c, 0xe9c55u); f_000e6c68(c); X86_RET(c, 0xe9c55u);
    X86_TICK(c, 11);
    // 0e9c55  push 0x23e4
    X86_AT(c, 0xe9c55u);
    { uint32_t v = 0x23E4u; push32(c, v); }
    // 0e9c5a  push 2
    X86_AT(c, 0xe9c5au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e9c5c  call 0xe5654
    X86_AT(c, 0xe9c5cu);
    push32(c, 0xe9c61u); f_000e5654(c); X86_RET(c, 0xe9c61u);
    X86_TICK(c, 14);
    // 0e9c61  push dword ptr [ebp + 8]
    X86_AT(c, 0xe9c61u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e9c64  push 2
    X86_AT(c, 0xe9c64u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e9c66  call 0xe5654
    X86_AT(c, 0xe9c66u);
    push32(c, 0xe9c6bu); f_000e5654(c); X86_RET(c, 0xe9c6bu);
    X86_TICK(c, 11);
    // 0e9c6b  push 0x2404
    X86_AT(c, 0xe9c6bu);
    { uint32_t v = 0x2404u; push32(c, v); }
    // 0e9c70  push 2
    X86_AT(c, 0xe9c70u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e9c72  call 0xe5654
    X86_AT(c, 0xe9c72u);
    push32(c, 0xe9c77u); f_000e5654(c); X86_RET(c, 0xe9c77u);
    X86_TICK(c, 16);
    // 0e9c77  leave 
    X86_AT(c, 0xe9c77u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e9c78  ret 
    X86_AT(c, 0xe9c78u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe9c44u, "ran off the end of a function");
}
void f_000e9c7c(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0e9c7c  push ebp
    X86_AT(c, 0xe9c7cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e9c7d  mov ebp, esp
    X86_AT(c, 0xe9c7du);
    c.r[5] = c.r[4];
    // 0e9c7f  push 2
    X86_AT(c, 0xe9c7fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e9c81  call 0xe693c
    X86_AT(c, 0xe9c81u);
    push32(c, 0xe9c86u); f_000e693c(c); X86_RET(c, 0xe9c86u);
    X86_TICK(c, 9);
    // 0e9c86  push 2
    X86_AT(c, 0xe9c86u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e9c88  call 0xe6c68
    X86_AT(c, 0xe9c88u);
    push32(c, 0xe9c8du); f_000e6c68(c); X86_RET(c, 0xe9c8du);
    X86_TICK(c, 11);
    // 0e9c8d  push 0x241c
    X86_AT(c, 0xe9c8du);
    { uint32_t v = 0x241Cu; push32(c, v); }
    // 0e9c92  push 2
    X86_AT(c, 0xe9c92u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e9c94  call 0xe5654
    X86_AT(c, 0xe9c94u);
    push32(c, 0xe9c99u); f_000e5654(c); X86_RET(c, 0xe9c99u);
    X86_TICK(c, 14);
    // 0e9c99  push dword ptr [ebp + 8]
    X86_AT(c, 0xe9c99u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e9c9c  push 2
    X86_AT(c, 0xe9c9cu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e9c9e  call 0xe5654
    X86_AT(c, 0xe9c9eu);
    push32(c, 0xe9ca3u); f_000e5654(c); X86_RET(c, 0xe9ca3u);
    X86_TICK(c, 11);
    // 0e9ca3  push 0x2438
    X86_AT(c, 0xe9ca3u);
    { uint32_t v = 0x2438u; push32(c, v); }
    // 0e9ca8  push 2
    X86_AT(c, 0xe9ca8u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e9caa  call 0xe5654
    X86_AT(c, 0xe9caau);
    push32(c, 0xe9cafu); f_000e5654(c); X86_RET(c, 0xe9cafu);
    X86_TICK(c, 16);
    // 0e9caf  leave 
    X86_AT(c, 0xe9cafu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e9cb0  ret 
    X86_AT(c, 0xe9cb0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe9c7cu, "ran off the end of a function");
}
void f_000e9cb4(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0e9cb4  push ebp
    X86_AT(c, 0xe9cb4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e9cb5  mov ebp, esp
    X86_AT(c, 0xe9cb5u);
    c.r[5] = c.r[4];
    // 0e9cb7  push 3
    X86_AT(c, 0xe9cb7u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e9cb9  call 0xe1944
    X86_AT(c, 0xe9cb9u);
    push32(c, 0xe9cbeu); f_000e1944(c); X86_RET(c, 0xe9cbeu);
    X86_TICK(c, 9);
    // 0e9cbe  push 2
    X86_AT(c, 0xe9cbeu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e9cc0  call 0xe693c
    X86_AT(c, 0xe9cc0u);
    push32(c, 0xe9cc5u); f_000e693c(c); X86_RET(c, 0xe9cc5u);
    X86_TICK(c, 9);
    // 0e9cc5  push 2
    X86_AT(c, 0xe9cc5u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e9cc7  call 0xe6c68
    X86_AT(c, 0xe9cc7u);
    push32(c, 0xe9cccu); f_000e6c68(c); X86_RET(c, 0xe9cccu);
    X86_TICK(c, 11);
    // 0e9ccc  push 0x2450
    X86_AT(c, 0xe9cccu);
    { uint32_t v = 0x2450u; push32(c, v); }
    // 0e9cd1  push 2
    X86_AT(c, 0xe9cd1u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e9cd3  call 0xe5654
    X86_AT(c, 0xe9cd3u);
    push32(c, 0xe9cd8u); f_000e5654(c); X86_RET(c, 0xe9cd8u);
    X86_TICK(c, 14);
    // 0e9cd8  push dword ptr [ebp + 8]
    X86_AT(c, 0xe9cd8u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e9cdb  push 2
    X86_AT(c, 0xe9cdbu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e9cdd  call 0xe5654
    X86_AT(c, 0xe9cddu);
    push32(c, 0xe9ce2u); f_000e5654(c); X86_RET(c, 0xe9ce2u);
    X86_TICK(c, 11);
    // 0e9ce2  push 0x2470
    X86_AT(c, 0xe9ce2u);
    { uint32_t v = 0x2470u; push32(c, v); }
    // 0e9ce7  push 2
    X86_AT(c, 0xe9ce7u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e9ce9  call 0xe5654
    X86_AT(c, 0xe9ce9u);
    push32(c, 0xe9ceeu); f_000e5654(c); X86_RET(c, 0xe9ceeu);
    X86_TICK(c, 16);
    // 0e9cee  leave 
    X86_AT(c, 0xe9ceeu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e9cef  ret 
    X86_AT(c, 0xe9cefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe9cb4u, "ran off the end of a function");
}
void f_000e9cf0(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0e9cf0  push ebp
    X86_AT(c, 0xe9cf0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e9cf1  mov ebp, esp
    X86_AT(c, 0xe9cf1u);
    c.r[5] = c.r[4];
    // 0e9cf3  push 3
    X86_AT(c, 0xe9cf3u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e9cf5  call 0xe1944
    X86_AT(c, 0xe9cf5u);
    push32(c, 0xe9cfau); f_000e1944(c); X86_RET(c, 0xe9cfau);
    X86_TICK(c, 9);
    // 0e9cfa  push 2
    X86_AT(c, 0xe9cfau);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e9cfc  call 0xe693c
    X86_AT(c, 0xe9cfcu);
    push32(c, 0xe9d01u); f_000e693c(c); X86_RET(c, 0xe9d01u);
    X86_TICK(c, 9);
    // 0e9d01  push 2
    X86_AT(c, 0xe9d01u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e9d03  call 0xe6c68
    X86_AT(c, 0xe9d03u);
    push32(c, 0xe9d08u); f_000e6c68(c); X86_RET(c, 0xe9d08u);
    X86_TICK(c, 11);
    // 0e9d08  push 0x2490
    X86_AT(c, 0xe9d08u);
    { uint32_t v = 0x2490u; push32(c, v); }
    // 0e9d0d  push 2
    X86_AT(c, 0xe9d0du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e9d0f  call 0xe5654
    X86_AT(c, 0xe9d0fu);
    push32(c, 0xe9d14u); f_000e5654(c); X86_RET(c, 0xe9d14u);
    X86_TICK(c, 14);
    // 0e9d14  push dword ptr [ebp + 8]
    X86_AT(c, 0xe9d14u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e9d17  push 2
    X86_AT(c, 0xe9d17u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e9d19  call 0xe5654
    X86_AT(c, 0xe9d19u);
    push32(c, 0xe9d1eu); f_000e5654(c); X86_RET(c, 0xe9d1eu);
    X86_TICK(c, 11);
    // 0e9d1e  push 0x24b0
    X86_AT(c, 0xe9d1eu);
    { uint32_t v = 0x24B0u; push32(c, v); }
    // 0e9d23  push 2
    X86_AT(c, 0xe9d23u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e9d25  call 0xe5654
    X86_AT(c, 0xe9d25u);
    push32(c, 0xe9d2au); f_000e5654(c); X86_RET(c, 0xe9d2au);
    X86_TICK(c, 16);
    // 0e9d2a  leave 
    X86_AT(c, 0xe9d2au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e9d2b  ret 
    X86_AT(c, 0xe9d2bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe9cf0u, "ran off the end of a function");
}
void f_000e9d2c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0e9d2c  push ebp
    X86_AT(c, 0xe9d2cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e9d2d  mov ebp, esp
    X86_AT(c, 0xe9d2du);
    c.r[5] = c.r[4];
    // 0e9d2f  sub esp, 0x60
    X86_AT(c, 0xe9d2fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x60u, 0, 4); }
    // 0e9d32  push ebx
    X86_AT(c, 0xe9d32u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e9d33  push esi
    X86_AT(c, 0xe9d33u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e9d34  push edi
    X86_AT(c, 0xe9d34u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e9d35  mov dword ptr [0xce71c], 0
    X86_AT(c, 0xe9d35u);
    wr32((c.sbase[3] + (uint32_t)(0xCE71Cu)), 0x0u);
    // 0e9d3f  push 0x24cc
    X86_AT(c, 0xe9d3fu);
    { uint32_t v = 0x24CCu; push32(c, v); }
    // 0e9d44  call 0xe9c44
    X86_AT(c, 0xe9d44u);
    push32(c, 0xe9d49u); f_000e9c44(c); X86_RET(c, 0xe9d49u);
    X86_TICK(c, 2);
    // 0e9d49  add esp, 4
    X86_AT(c, 0xe9d49u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e9d4c:
    X86_TICK(c, 11);
    // 0e9d4c  push 0x24f0
    X86_AT(c, 0xe9d4cu);
    { uint32_t v = 0x24F0u; push32(c, v); }
    // 0e9d51  push 0
    X86_AT(c, 0xe9d51u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e9d53  call 0xe2554
    X86_AT(c, 0xe9d53u);
    push32(c, 0xe9d58u); f_000e2554(c); X86_RET(c, 0xe9d58u);
    X86_TICK(c, 11);
    // 0e9d58  mov dword ptr [ebp - 0x58], eax
    X86_AT(c, 0xe9d58u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u)), c.r[0]);
    // 0e9d5b  push 4
    X86_AT(c, 0xe9d5bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e9d5d  call 0xe693c
    X86_AT(c, 0xe9d5du);
    push32(c, 0xe9d62u); f_000e693c(c); X86_RET(c, 0xe9d62u);
    X86_TICK(c, 14);
    // 0e9d62  add esp, 0xc
    X86_AT(c, 0xe9d62u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e9d65  cmp dword ptr [ebp - 0x58], 0xffffffff
    X86_AT(c, 0xe9d65u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u))), 0xFFFFFFFFu, 0, 4);
    // 0e9d69  je 0xe9d77
    X86_AT(c, 0xe9d69u);
    if (x86_cc(c, 4)) { goto L_e9d77; }
    X86_TICK(c, 12);
    // 0e9d6b  cmp dword ptr [ebp - 0x58], 0
    X86_AT(c, 0xe9d6bu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u))), 0x0u, 0, 4);
    // 0e9d6f  je 0xe9d77
    X86_AT(c, 0xe9d6fu);
    if (x86_cc(c, 4)) { goto L_e9d77; }
    X86_TICK(c, 12);
    // 0e9d71  cmp dword ptr [ebp - 0x58], 1
    X86_AT(c, 0xe9d71u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u))), 0x1u, 0, 4);
    // 0e9d75  jne 0xe9d4c
    X86_AT(c, 0xe9d75u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xe9d4cu); goto L_e9d4c; }
L_e9d77:
    X86_TICK(c, 9);
    // 0e9d77  push 2
    X86_AT(c, 0xe9d77u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e9d79  call 0xe6c68
    X86_AT(c, 0xe9d79u);
    push32(c, 0xe9d7eu); f_000e6c68(c); X86_RET(c, 0xe9d7eu);
    X86_TICK(c, 14);
    // 0e9d7e  add esp, 4
    X86_AT(c, 0xe9d7eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e9d81  cmp dword ptr [ebp - 0x58], 0
    X86_AT(c, 0xe9d81u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA8u))), 0x0u, 0, 4);
    // 0e9d85  je 0xe9db4
    X86_AT(c, 0xe9d85u);
    if (x86_cc(c, 4)) { goto L_e9db4; }
    X86_TICK(c, 13);
    // 0e9d87  push 4
    X86_AT(c, 0xe9d87u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e9d89  push 0
    X86_AT(c, 0xe9d89u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e9d8b  push 4
    X86_AT(c, 0xe9d8bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e9d8d  call 0xe7260
    X86_AT(c, 0xe9d8du);
    push32(c, 0xe9d92u); f_000e7260(c); X86_RET(c, 0xe9d92u);
    X86_TICK(c, 11);
    // 0e9d92  push 0x2500
    X86_AT(c, 0xe9d92u);
    { uint32_t v = 0x2500u; push32(c, v); }
    // 0e9d97  push 4
    X86_AT(c, 0xe9d97u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e9d99  call 0xe5654
    X86_AT(c, 0xe9d99u);
    push32(c, 0xe9d9eu); f_000e5654(c); X86_RET(c, 0xe9d9eu);
    X86_TICK(c, 11);
    // 0e9d9e  push 0
    X86_AT(c, 0xe9d9eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e9da0  push 4
    X86_AT(c, 0xe9da0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e9da2  call 0xe6b70
    X86_AT(c, 0xe9da2u);
    push32(c, 0xe9da7u); f_000e6b70(c); X86_RET(c, 0xe9da7u);
    X86_TICK(c, 11);
    // 0e9da7  mov eax, 0xffffffff
    X86_AT(c, 0xe9da7u);
    c.r[0] = 0xFFFFFFFFu;
    // 0e9dac  add esp, 0x1c
    X86_AT(c, 0xe9dacu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0e9daf  jmp 0xeaddf
    X86_AT(c, 0xe9dafu);
    goto L_eaddf;
L_e9db4:
    X86_TICK(c, 2);
    // 0e9db4  sub esi, esi
    X86_AT(c, 0xe9db4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_e9db6:
    X86_TICK(c, 7);
    // 0e9db6  cmp esi, 4
    X86_AT(c, 0xe9db6u);
    (void)x86_sub(c, c.r[6], 0x4u, 0, 4);
    // 0e9db9  jge 0xe9dd2
    X86_AT(c, 0xe9db9u);
    if (x86_cc(c, 13)) { goto L_e9dd2; }
    X86_TICK(c, 22);
    // 0e9dbb  mov eax, esi
    X86_AT(c, 0xe9dbbu);
    c.r[0] = c.r[6];
    // 0e9dbd  lea edx, [eax + eax*4]
    X86_AT(c, 0xe9dbdu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e9dc0  lea edx, [eax + edx*2]
    X86_AT(c, 0xe9dc0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e9dc3  shl edx, 5
    X86_AT(c, 0xe9dc3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e9dc6  sub edx, eax
    X86_AT(c, 0xe9dc6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e9dc8  mov byte ptr [edx + 0xcde4d], 0
    X86_AT(c, 0xe9dc8u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE4Du)), 0x0u);
    // 0e9dcf  inc esi
    X86_AT(c, 0xe9dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e9dd0  jmp 0xe9db6
    X86_AT(c, 0xe9dd0u);
    X86_POLL(c, 0xe9db6u); goto L_e9db6;
L_e9dd2:
    X86_TICK(c, 11);
    // 0e9dd2  push 0x253e
    X86_AT(c, 0xe9dd2u);
    { uint32_t v = 0x253Eu; push32(c, v); }
    // 0e9dd7  push 0x2544
    X86_AT(c, 0xe9dd7u);
    { uint32_t v = 0x2544u; push32(c, v); }
    // 0e9ddc  call 0x100f34
    X86_AT(c, 0xe9ddcu);
    push32(c, 0xe9de1u); f_00100f34(c); X86_RET(c, 0xe9de1u);
    X86_TICK(c, 12);
    // 0e9de1  add esp, 8
    X86_AT(c, 0xe9de1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e9de4  xchg edi, eax
    X86_AT(c, 0xe9de4u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0e9de5  and edi, edi
    X86_AT(c, 0xe9de5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e9de7  jne 0xe9e05
    X86_AT(c, 0xe9de7u);
    if (x86_cc(c, 5)) { goto L_e9e05; }
    X86_TICK(c, 9);
    // 0e9de9  push 0x2554
    X86_AT(c, 0xe9de9u);
    { uint32_t v = 0x2554u; push32(c, v); }
    // 0e9dee  call 0xe9cb4
    X86_AT(c, 0xe9deeu);
    push32(c, 0xe9df3u); f_000e9cb4(c); X86_RET(c, 0xe9df3u);
    X86_TICK(c, 13);
    // 0e9df3  mov eax, 0xffffffff
    X86_AT(c, 0xe9df3u);
    c.r[0] = 0xFFFFFFFFu;
    // 0e9df8  mov dword ptr [0xcf190], eax
    X86_AT(c, 0xe9df8u);
    wr32((c.sbase[3] + (uint32_t)(0xCF190u)), c.r[0]);
    // 0e9dfd  add esp, 4
    X86_AT(c, 0xe9dfdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e9e00  jmp 0xeaddf
    X86_AT(c, 0xe9e00u);
    goto L_eaddf;
L_e9e05:
    X86_TICK(c, 15);
    // 0e9e05  push edi
    X86_AT(c, 0xe9e05u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e9e06  push 0x4f
    X86_AT(c, 0xe9e06u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0e9e08  lea eax, [ebp - 0x50]
    X86_AT(c, 0xe9e08u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0e9e0b  push eax
    X86_AT(c, 0xe9e0bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e9e0c  call 0x10078c
    X86_AT(c, 0xe9e0cu);
    push32(c, 0xe9e11u); f_0010078c(c); X86_RET(c, 0xe9e11u);
    X86_TICK(c, 14);
    // 0e9e11  add esp, 0xc
    X86_AT(c, 0xe9e11u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e9e14  cmp byte ptr [ebp - 0x50], 0x52
    X86_AT(c, 0xe9e14u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB0u))), 0x52u, 0, 1);
    // 0e9e18  jne 0xe9e20
    X86_AT(c, 0xe9e18u);
    if (x86_cc(c, 5)) { goto L_e9e20; }
    X86_TICK(c, 12);
    // 0e9e1a  cmp byte ptr [ebp - 0x4f], 0x6f
    X86_AT(c, 0xe9e1au);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB1u))), 0x6Fu, 0, 1);
    // 0e9e1e  je 0xe9e44
    X86_AT(c, 0xe9e1eu);
    if (x86_cc(c, 4)) { goto L_e9e44; }
L_e9e20:
    X86_TICK(c, 11);
    // 0e9e20  mov dword ptr [0xcf190], 0xffffffff
    X86_AT(c, 0xe9e20u);
    wr32((c.sbase[3] + (uint32_t)(0xCF190u)), 0xFFFFFFFFu);
    // 0e9e2a  push edi
    X86_AT(c, 0xe9e2au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e9e2b  call 0x101430
    X86_AT(c, 0xe9e2bu);
    push32(c, 0xe9e30u); f_00101430(c); X86_RET(c, 0xe9e30u);
    X86_TICK(c, 9);
    // 0e9e30  push 0x2578
    X86_AT(c, 0xe9e30u);
    { uint32_t v = 0x2578u; push32(c, v); }
    // 0e9e35  call 0xe9cb4
    X86_AT(c, 0xe9e35u);
    push32(c, 0xe9e3au); f_000e9cb4(c); X86_RET(c, 0xe9e3au);
    X86_TICK(c, 9);
    // 0e9e3a  mov eax, 0xffffffff
    X86_AT(c, 0xe9e3au);
    c.r[0] = 0xFFFFFFFFu;
    // 0e9e3f  jmp 0xeaddc
    X86_AT(c, 0xe9e3fu);
    goto L_eaddc;
L_e9e44:
    X86_TICK(c, 15);
    // 0e9e44  push edi
    X86_AT(c, 0xe9e44u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e9e45  push 0x4f
    X86_AT(c, 0xe9e45u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0e9e47  lea eax, [ebp - 0x50]
    X86_AT(c, 0xe9e47u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0e9e4a  push eax
    X86_AT(c, 0xe9e4au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e9e4b  call 0x10078c
    X86_AT(c, 0xe9e4bu);
    push32(c, 0xe9e50u); f_0010078c(c); X86_RET(c, 0xe9e50u);
    X86_TICK(c, 11);
    // 0e9e50  lea eax, [ebp - 0x50]
    X86_AT(c, 0xe9e50u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0e9e53  push eax
    X86_AT(c, 0xe9e53u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e9e54  call 0xe9c2c
    X86_AT(c, 0xe9e54u);
    push32(c, 0xe9e59u); f_000e9c2c(c); X86_RET(c, 0xe9e59u);
    X86_TICK(c, 9);
    // 0e9e59  push eax
    X86_AT(c, 0xe9e59u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e9e5a  call 0xe42d0
    X86_AT(c, 0xe9e5au);
    push32(c, 0xe9e5fu); f_000e42d0(c); X86_RET(c, 0xe9e5fu);
    X86_TICK(c, 15);
    // 0e9e5f  mov byte ptr [ebp - 0x59], al
    X86_AT(c, 0xe9e5fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA7u)), g8(c, 0));
    // 0e9e62  sub edx, edx
    X86_AT(c, 0xe9e62u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e9e64  mov dword ptr [0x7a6b4], edx
    X86_AT(c, 0xe9e64u);
    wr32((c.sbase[3] + (uint32_t)(0x7A6B4u)), c.r[2]);
    // 0e9e6a  add esp, 0x14
    X86_AT(c, 0xe9e6au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0e9e6d  cmp dl, al
    X86_AT(c, 0xe9e6du);
    (void)x86_sub(c, g8(c, 2), g8(c, 0), 0, 1);
    // 0e9e6f  je 0xe9e7b
    X86_AT(c, 0xe9e6fu);
    if (x86_cc(c, 4)) { goto L_e9e7b; }
    X86_TICK(c, 2);
    // 0e9e71  mov dword ptr [0x7a6b4], 0xffffffff
    X86_AT(c, 0xe9e71u);
    wr32((c.sbase[3] + (uint32_t)(0x7A6B4u)), 0xFFFFFFFFu);
L_e9e7b:
    X86_TICK(c, 2);
    // 0e9e7b  sub esi, esi
    X86_AT(c, 0xe9e7bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_e9e7d:
    X86_TICK(c, 7);
    // 0e9e7d  cmp esi, 4
    X86_AT(c, 0xe9e7du);
    (void)x86_sub(c, c.r[6], 0x4u, 0, 4);
    // 0e9e80  jge 0xeadc8
    X86_AT(c, 0xe9e80u);
    if (x86_cc(c, 13)) { goto L_eadc8; }
    X86_TICK(c, 21);
    // 0e9e86  inc dword ptr [0xce71c]
    X86_AT(c, 0xe9e86u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xCE71Cu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e9e8c  push edi
    X86_AT(c, 0xe9e8cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e9e8d  push 0x4f
    X86_AT(c, 0xe9e8du);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0e9e8f  lea eax, [ebp - 0x50]
    X86_AT(c, 0xe9e8fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0e9e92  push eax
    X86_AT(c, 0xe9e92u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e9e93  call 0x10078c
    X86_AT(c, 0xe9e93u);
    push32(c, 0xe9e98u); f_0010078c(c); X86_RET(c, 0xe9e98u);
    X86_TICK(c, 11);
    // 0e9e98  lea eax, [ebp - 0x50]
    X86_AT(c, 0xe9e98u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0e9e9b  push eax
    X86_AT(c, 0xe9e9bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e9e9c  call 0xe9c2c
    X86_AT(c, 0xe9e9cu);
    push32(c, 0xe9ea1u); f_000e9c2c(c); X86_RET(c, 0xe9ea1u);
    X86_TICK(c, 7);
    // 0e9ea1  xchg ebx, eax
    X86_AT(c, 0xe9ea1u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0e9ea2  mov dword ptr [ebp - 0x54], 0
    X86_AT(c, 0xe9ea2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFACu)), 0x0u);
    // 0e9ea9  add esp, 0x10
    X86_AT(c, 0xe9ea9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_e9eac:
    X86_TICK(c, 11);
    // 0e9eac  mov al, byte ptr [ebx]
    X86_AT(c, 0xe9eacu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3]))));
    // 0e9eae  cmp al, 0xa
    X86_AT(c, 0xe9eaeu);
    (void)x86_sub(c, g8(c, 0), 0xAu, 0, 1);
    // 0e9eb0  je 0xe9ed2
    X86_AT(c, 0xe9eb0u);
    if (x86_cc(c, 4)) { goto L_e9ed2; }
    X86_TICK(c, 7);
    // 0e9eb2  and al, al
    X86_AT(c, 0xe9eb2u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0e9eb4  je 0xe9ed2
    X86_AT(c, 0xe9eb4u);
    if (x86_cc(c, 4)) { goto L_e9ed2; }
    X86_TICK(c, 34);
    // 0e9eb6  mov edx, esi
    X86_AT(c, 0xe9eb6u);
    c.r[2] = c.r[6];
    // 0e9eb8  lea ecx, [edx + edx*4]
    X86_AT(c, 0xe9eb8u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0e9ebb  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xe9ebbu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0e9ebe  shl ecx, 5
    X86_AT(c, 0xe9ebeu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0e9ec1  sub ecx, edx
    X86_AT(c, 0xe9ec1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e9ec3  add ecx, dword ptr [ebp - 0x54]
    X86_AT(c, 0xe9ec3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFACu))), 0, 4); }
    // 0e9ec6  mov byte ptr [ecx + 0xcde4d], al
    X86_AT(c, 0xe9ec6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE4Du)), g8(c, 0));
    // 0e9ecc  inc dword ptr [ebp - 0x54]
    X86_AT(c, 0xe9eccu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFACu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e9ecf  inc ebx
    X86_AT(c, 0xe9ecfu);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0e9ed0  jmp 0xe9eac
    X86_AT(c, 0xe9ed0u);
    X86_POLL(c, 0xe9eacu); goto L_e9eac;
L_e9ed2:
    X86_TICK(c, 34);
    // 0e9ed2  mov eax, esi
    X86_AT(c, 0xe9ed2u);
    c.r[0] = c.r[6];
    // 0e9ed4  lea edx, [eax + eax*4]
    X86_AT(c, 0xe9ed4u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e9ed7  lea edx, [eax + edx*2]
    X86_AT(c, 0xe9ed7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e9eda  shl edx, 5
    X86_AT(c, 0xe9edau);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e9edd  sub edx, eax
    X86_AT(c, 0xe9eddu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e9edf  add edx, dword ptr [ebp - 0x54]
    X86_AT(c, 0xe9edfu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFACu))), 0, 4); }
    // 0e9ee2  mov byte ptr [edx + 0xcde4d], 0
    X86_AT(c, 0xe9ee2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE4Du)), 0x0u);
    // 0e9ee9  push edi
    X86_AT(c, 0xe9ee9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e9eea  push 0x4f
    X86_AT(c, 0xe9eeau);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0e9eec  lea eax, [ebp - 0x50]
    X86_AT(c, 0xe9eecu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0e9eef  push eax
    X86_AT(c, 0xe9eefu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e9ef0  call 0x10078c
    X86_AT(c, 0xe9ef0u);
    push32(c, 0xe9ef5u); f_0010078c(c); X86_RET(c, 0xe9ef5u);
    X86_TICK(c, 11);
    // 0e9ef5  lea eax, [ebp - 0x50]
    X86_AT(c, 0xe9ef5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0e9ef8  push eax
    X86_AT(c, 0xe9ef8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e9ef9  call 0xe9c2c
    X86_AT(c, 0xe9ef9u);
    push32(c, 0xe9efeu); f_000e9c2c(c); X86_RET(c, 0xe9efeu);
    X86_TICK(c, 18);
    // 0e9efe  mov al, byte ptr [eax]
    X86_AT(c, 0xe9efeu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0e9f00  mov byte ptr [ebp - 0x59], al
    X86_AT(c, 0xe9f00u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA7u)), g8(c, 0));
    // 0e9f03  add esp, 0x10
    X86_AT(c, 0xe9f03u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e9f06  movzx edx, al
    X86_AT(c, 0xe9f06u);
    c.r[2] = g8(c, 0);
    // 0e9f09  cmp edx, 0x44
    X86_AT(c, 0xe9f09u);
    (void)x86_sub(c, c.r[2], 0x44u, 0, 4);
    // 0e9f0c  je 0xe9f4b
    X86_AT(c, 0xe9f0cu);
    if (x86_cc(c, 4)) { goto L_e9f4b; }
    X86_TICK(c, 7);
    // 0e9f0e  cmp edx, 0x46
    X86_AT(c, 0xe9f0eu);
    (void)x86_sub(c, c.r[2], 0x46u, 0, 4);
    // 0e9f11  je 0xe9f35
    X86_AT(c, 0xe9f11u);
    if (x86_cc(c, 4)) { goto L_e9f35; }
    X86_TICK(c, 7);
    // 0e9f13  cmp edx, 0x55
    X86_AT(c, 0xe9f13u);
    (void)x86_sub(c, c.r[2], 0x55u, 0, 4);
    // 0e9f16  je 0xe9f1f
    X86_AT(c, 0xe9f16u);
    if (x86_cc(c, 4)) { goto L_e9f1f; }
    X86_TICK(c, 7);
    // 0e9f18  cmp edx, 0x5a
    X86_AT(c, 0xe9f18u);
    (void)x86_sub(c, c.r[2], 0x5Au, 0, 4);
    // 0e9f1b  je 0xe9f61
    X86_AT(c, 0xe9f1bu);
    if (x86_cc(c, 4)) { goto L_e9f61; }
    X86_TICK(c, 7);
    // 0e9f1d  jmp 0xe9f77
    X86_AT(c, 0xe9f1du);
    goto L_e9f77;
L_e9f1f:
    X86_TICK(c, 20);
    // 0e9f1f  mov eax, esi
    X86_AT(c, 0xe9f1fu);
    c.r[0] = c.r[6];
    // 0e9f21  lea edx, [eax + eax*4]
    X86_AT(c, 0xe9f21u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e9f24  lea edx, [eax + edx*2]
    X86_AT(c, 0xe9f24u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e9f27  shl edx, 5
    X86_AT(c, 0xe9f27u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e9f2a  sub edx, eax
    X86_AT(c, 0xe9f2au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e9f2c  mov byte ptr [edx + 0xcde4c], 3
    X86_AT(c, 0xe9f2cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE4Cu)), 0x3u);
    // 0e9f33  jmp 0xe9f8b
    X86_AT(c, 0xe9f33u);
    goto L_e9f8b;
L_e9f35:
    X86_TICK(c, 20);
    // 0e9f35  mov eax, esi
    X86_AT(c, 0xe9f35u);
    c.r[0] = c.r[6];
    // 0e9f37  lea edx, [eax + eax*4]
    X86_AT(c, 0xe9f37u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e9f3a  lea edx, [eax + edx*2]
    X86_AT(c, 0xe9f3au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e9f3d  shl edx, 5
    X86_AT(c, 0xe9f3du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e9f40  sub edx, eax
    X86_AT(c, 0xe9f40u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e9f42  mov byte ptr [edx + 0xcde4c], 4
    X86_AT(c, 0xe9f42u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE4Cu)), 0x4u);
    // 0e9f49  jmp 0xe9f8b
    X86_AT(c, 0xe9f49u);
    goto L_e9f8b;
L_e9f4b:
    X86_TICK(c, 20);
    // 0e9f4b  mov eax, esi
    X86_AT(c, 0xe9f4bu);
    c.r[0] = c.r[6];
    // 0e9f4d  lea edx, [eax + eax*4]
    X86_AT(c, 0xe9f4du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e9f50  lea edx, [eax + edx*2]
    X86_AT(c, 0xe9f50u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e9f53  shl edx, 5
    X86_AT(c, 0xe9f53u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e9f56  sub edx, eax
    X86_AT(c, 0xe9f56u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e9f58  mov byte ptr [edx + 0xcde4c], 2
    X86_AT(c, 0xe9f58u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE4Cu)), 0x2u);
    // 0e9f5f  jmp 0xe9f8b
    X86_AT(c, 0xe9f5fu);
    goto L_e9f8b;
L_e9f61:
    X86_TICK(c, 20);
    // 0e9f61  mov eax, esi
    X86_AT(c, 0xe9f61u);
    c.r[0] = c.r[6];
    // 0e9f63  lea edx, [eax + eax*4]
    X86_AT(c, 0xe9f63u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e9f66  lea edx, [eax + edx*2]
    X86_AT(c, 0xe9f66u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e9f69  shl edx, 5
    X86_AT(c, 0xe9f69u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e9f6c  sub edx, eax
    X86_AT(c, 0xe9f6cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e9f6e  mov byte ptr [edx + 0xcde4c], 1
    X86_AT(c, 0xe9f6eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE4Cu)), 0x1u);
    // 0e9f75  jmp 0xe9f8b
    X86_AT(c, 0xe9f75u);
    goto L_e9f8b;
L_e9f77:
    X86_TICK(c, 13);
    // 0e9f77  mov eax, esi
    X86_AT(c, 0xe9f77u);
    c.r[0] = c.r[6];
    // 0e9f79  lea edx, [eax + eax*4]
    X86_AT(c, 0xe9f79u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e9f7c  lea edx, [eax + edx*2]
    X86_AT(c, 0xe9f7cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e9f7f  shl edx, 5
    X86_AT(c, 0xe9f7fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e9f82  sub edx, eax
    X86_AT(c, 0xe9f82u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e9f84  mov byte ptr [edx + 0xcde4c], 0
    X86_AT(c, 0xe9f84u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE4Cu)), 0x0u);
L_e9f8b:
    X86_TICK(c, 15);
    // 0e9f8b  push edi
    X86_AT(c, 0xe9f8bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e9f8c  push 0x4f
    X86_AT(c, 0xe9f8cu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0e9f8e  lea eax, [ebp - 0x50]
    X86_AT(c, 0xe9f8eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0e9f91  push eax
    X86_AT(c, 0xe9f91u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e9f92  call 0x10078c
    X86_AT(c, 0xe9f92u);
    push32(c, 0xe9f97u); f_0010078c(c); X86_RET(c, 0xe9f97u);
    X86_TICK(c, 11);
    // 0e9f97  lea eax, [ebp - 0x50]
    X86_AT(c, 0xe9f97u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0e9f9a  push eax
    X86_AT(c, 0xe9f9au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e9f9b  call 0xe9c2c
    X86_AT(c, 0xe9f9bu);
    push32(c, 0xe9fa0u); f_000e9c2c(c); X86_RET(c, 0xe9fa0u);
    X86_TICK(c, 15);
    // 0e9fa0  add esp, 0x10
    X86_AT(c, 0xe9fa0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e9fa3  mov al, byte ptr [eax]
    X86_AT(c, 0xe9fa3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0e9fa5  mov byte ptr [ebp - 0x59], al
    X86_AT(c, 0xe9fa5u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA7u)), g8(c, 0));
    // 0e9fa8  cmp al, 0x45
    X86_AT(c, 0xe9fa8u);
    (void)x86_sub(c, g8(c, 0), 0x45u, 0, 1);
    // 0e9faa  jne 0xe9fc5
    X86_AT(c, 0xe9faau);
    if (x86_cc(c, 5)) { goto L_e9fc5; }
    X86_TICK(c, 20);
    // 0e9fac  mov eax, esi
    X86_AT(c, 0xe9facu);
    c.r[0] = c.r[6];
    // 0e9fae  lea edx, [eax + eax*4]
    X86_AT(c, 0xe9faeu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e9fb1  lea edx, [eax + edx*2]
    X86_AT(c, 0xe9fb1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e9fb4  shl edx, 5
    X86_AT(c, 0xe9fb4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e9fb7  sub edx, eax
    X86_AT(c, 0xe9fb7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e9fb9  mov dword ptr [edx + 0xcdf83], 0
    X86_AT(c, 0xe9fb9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF83u)), 0x0u);
    // 0e9fc3  jmp 0xe9fdc
    X86_AT(c, 0xe9fc3u);
    goto L_e9fdc;
L_e9fc5:
    X86_TICK(c, 13);
    // 0e9fc5  mov eax, esi
    X86_AT(c, 0xe9fc5u);
    c.r[0] = c.r[6];
    // 0e9fc7  lea edx, [eax + eax*4]
    X86_AT(c, 0xe9fc7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e9fca  lea edx, [eax + edx*2]
    X86_AT(c, 0xe9fcau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e9fcd  shl edx, 5
    X86_AT(c, 0xe9fcdu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e9fd0  sub edx, eax
    X86_AT(c, 0xe9fd0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e9fd2  mov dword ptr [edx + 0xcdf83], 0xffffffff
    X86_AT(c, 0xe9fd2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF83u)), 0xFFFFFFFFu);
L_e9fdc:
    X86_TICK(c, 15);
    // 0e9fdc  push edi
    X86_AT(c, 0xe9fdcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e9fdd  push 0x4f
    X86_AT(c, 0xe9fddu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0e9fdf  lea eax, [ebp - 0x50]
    X86_AT(c, 0xe9fdfu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0e9fe2  push eax
    X86_AT(c, 0xe9fe2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e9fe3  call 0x10078c
    X86_AT(c, 0xe9fe3u);
    push32(c, 0xe9fe8u); f_0010078c(c); X86_RET(c, 0xe9fe8u);
    X86_TICK(c, 13);
    // 0e9fe8  lea eax, [ebp - 0x50]
    X86_AT(c, 0xe9fe8u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0e9feb  push eax
    X86_AT(c, 0xe9febu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e9fec  mov edx, eax
    X86_AT(c, 0xe9fecu);
    c.r[2] = c.r[0];
    // 0e9fee  call 0xe9c2c
    X86_AT(c, 0xe9feeu);
    push32(c, 0xe9ff3u); f_000e9c2c(c); X86_RET(c, 0xe9ff3u);
    X86_TICK(c, 9);
    // 0e9ff3  push eax
    X86_AT(c, 0xe9ff3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e9ff4  call 0xe42d0
    X86_AT(c, 0xe9ff4u);
    push32(c, 0xe9ff9u); f_000e42d0(c); X86_RET(c, 0xe9ff9u);
    X86_TICK(c, 32);
    // 0e9ff9  mov edx, 0xcde44
    X86_AT(c, 0xe9ff9u);
    c.r[2] = 0xCDE44u;
    // 0e9ffe  mov ecx, esi
    X86_AT(c, 0xe9ffeu);
    c.r[1] = c.r[6];
    // 0ea000  lea edx, [ecx + ecx*4]
    X86_AT(c, 0xea000u);
    c.r[2] = (uint32_t)(c.r[1] + c.r[1] * 4);
    // 0ea003  lea edx, [ecx + edx*2]
    X86_AT(c, 0xea003u);
    c.r[2] = (uint32_t)(c.r[1] + c.r[2] * 2);
    // 0ea006  shl edx, 5
    X86_AT(c, 0xea006u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ea009  sub edx, ecx
    X86_AT(c, 0xea009u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0ea00b  mov dword ptr [edx + 0xcde56], eax
    X86_AT(c, 0xea00bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE56u)), c.r[0]);
    // 0ea011  push edi
    X86_AT(c, 0xea011u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea012  push 0x4f
    X86_AT(c, 0xea012u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea014  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea014u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea017  push eax
    X86_AT(c, 0xea017u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea018  mov dword ptr [ebp - 0x60], edx
    X86_AT(c, 0xea018u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)), c.r[2]);
    // 0ea01b  call 0x10078c
    X86_AT(c, 0xea01bu);
    push32(c, 0xea020u); f_0010078c(c); X86_RET(c, 0xea020u);
    X86_TICK(c, 13);
    // 0ea020  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea020u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea023  push eax
    X86_AT(c, 0xea023u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea024  mov edx, eax
    X86_AT(c, 0xea024u);
    c.r[2] = c.r[0];
    // 0ea026  call 0xe9c2c
    X86_AT(c, 0xea026u);
    push32(c, 0xea02bu); f_000e9c2c(c); X86_RET(c, 0xea02bu);
    X86_TICK(c, 9);
    // 0ea02b  push eax
    X86_AT(c, 0xea02bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea02c  call 0xe42d0
    X86_AT(c, 0xea02cu);
    push32(c, 0xea031u); f_000e42d0(c); X86_RET(c, 0xea031u);
    X86_TICK(c, 21);
    // 0ea031  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea031u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea034  mov dword ptr [edx + 0xcde5a], eax
    X86_AT(c, 0xea034u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE5Au)), c.r[0]);
    // 0ea03a  push edi
    X86_AT(c, 0xea03au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea03b  push 0x4f
    X86_AT(c, 0xea03bu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea03d  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea03du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea040  push eax
    X86_AT(c, 0xea040u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea041  call 0x10078c
    X86_AT(c, 0xea041u);
    push32(c, 0xea046u); f_0010078c(c); X86_RET(c, 0xea046u);
    X86_TICK(c, 13);
    // 0ea046  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea046u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea049  push eax
    X86_AT(c, 0xea049u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea04a  mov edx, eax
    X86_AT(c, 0xea04au);
    c.r[2] = c.r[0];
    // 0ea04c  call 0xe9c2c
    X86_AT(c, 0xea04cu);
    push32(c, 0xea051u); f_000e9c2c(c); X86_RET(c, 0xea051u);
    X86_TICK(c, 9);
    // 0ea051  push eax
    X86_AT(c, 0xea051u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea052  call 0xe42d0
    X86_AT(c, 0xea052u);
    push32(c, 0xea057u); f_000e42d0(c); X86_RET(c, 0xea057u);
    X86_TICK(c, 23);
    // 0ea057  add esp, 0x3c
    X86_AT(c, 0xea057u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ea05a  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea05au);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea05d  mov dword ptr [edx + 0xcde5e], eax
    X86_AT(c, 0xea05du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE5Eu)), c.r[0]);
    // 0ea063  push edi
    X86_AT(c, 0xea063u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea064  push 0x4f
    X86_AT(c, 0xea064u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea066  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea066u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea069  push eax
    X86_AT(c, 0xea069u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea06a  call 0x10078c
    X86_AT(c, 0xea06au);
    push32(c, 0xea06fu); f_0010078c(c); X86_RET(c, 0xea06fu);
    X86_TICK(c, 13);
    // 0ea06f  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea06fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea072  push eax
    X86_AT(c, 0xea072u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea073  mov edx, eax
    X86_AT(c, 0xea073u);
    c.r[2] = c.r[0];
    // 0ea075  call 0xe9c2c
    X86_AT(c, 0xea075u);
    push32(c, 0xea07au); f_000e9c2c(c); X86_RET(c, 0xea07au);
    X86_TICK(c, 9);
    // 0ea07a  push eax
    X86_AT(c, 0xea07au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea07b  call 0xe42d0
    X86_AT(c, 0xea07bu);
    push32(c, 0xea080u); f_000e42d0(c); X86_RET(c, 0xea080u);
    X86_TICK(c, 21);
    // 0ea080  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea080u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea083  mov dword ptr [edx + 0xcde62], eax
    X86_AT(c, 0xea083u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE62u)), c.r[0]);
    // 0ea089  push edi
    X86_AT(c, 0xea089u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea08a  push 0x4f
    X86_AT(c, 0xea08au);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea08c  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea08cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea08f  push eax
    X86_AT(c, 0xea08fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea090  call 0x10078c
    X86_AT(c, 0xea090u);
    push32(c, 0xea095u); f_0010078c(c); X86_RET(c, 0xea095u);
    X86_TICK(c, 13);
    // 0ea095  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea095u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea098  push eax
    X86_AT(c, 0xea098u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea099  mov edx, eax
    X86_AT(c, 0xea099u);
    c.r[2] = c.r[0];
    // 0ea09b  call 0xe9c2c
    X86_AT(c, 0xea09bu);
    push32(c, 0xea0a0u); f_000e9c2c(c); X86_RET(c, 0xea0a0u);
    X86_TICK(c, 9);
    // 0ea0a0  push eax
    X86_AT(c, 0xea0a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea0a1  call 0xe42d0
    X86_AT(c, 0xea0a1u);
    push32(c, 0xea0a6u); f_000e42d0(c); X86_RET(c, 0xea0a6u);
    X86_TICK(c, 21);
    // 0ea0a6  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea0a6u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea0a9  mov dword ptr [edx + 0xcde66], eax
    X86_AT(c, 0xea0a9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE66u)), c.r[0]);
    // 0ea0af  push edi
    X86_AT(c, 0xea0afu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea0b0  push 0x4f
    X86_AT(c, 0xea0b0u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea0b2  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea0b2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea0b5  push eax
    X86_AT(c, 0xea0b5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea0b6  call 0x10078c
    X86_AT(c, 0xea0b6u);
    push32(c, 0xea0bbu); f_0010078c(c); X86_RET(c, 0xea0bbu);
    X86_TICK(c, 13);
    // 0ea0bb  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea0bbu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea0be  push eax
    X86_AT(c, 0xea0beu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea0bf  mov edx, eax
    X86_AT(c, 0xea0bfu);
    c.r[2] = c.r[0];
    // 0ea0c1  call 0xe9c2c
    X86_AT(c, 0xea0c1u);
    push32(c, 0xea0c6u); f_000e9c2c(c); X86_RET(c, 0xea0c6u);
    X86_TICK(c, 9);
    // 0ea0c6  push eax
    X86_AT(c, 0xea0c6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea0c7  call 0xe42d0
    X86_AT(c, 0xea0c7u);
    push32(c, 0xea0ccu); f_000e42d0(c); X86_RET(c, 0xea0ccu);
    X86_TICK(c, 23);
    // 0ea0cc  add esp, 0x3c
    X86_AT(c, 0xea0ccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ea0cf  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea0cfu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea0d2  mov dword ptr [edx + 0xcde6a], eax
    X86_AT(c, 0xea0d2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Au)), c.r[0]);
    // 0ea0d8  push edi
    X86_AT(c, 0xea0d8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea0d9  push 0x4f
    X86_AT(c, 0xea0d9u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea0db  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea0dbu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea0de  push eax
    X86_AT(c, 0xea0deu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea0df  call 0x10078c
    X86_AT(c, 0xea0dfu);
    push32(c, 0xea0e4u); f_0010078c(c); X86_RET(c, 0xea0e4u);
    X86_TICK(c, 13);
    // 0ea0e4  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea0e4u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea0e7  push eax
    X86_AT(c, 0xea0e7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea0e8  mov edx, eax
    X86_AT(c, 0xea0e8u);
    c.r[2] = c.r[0];
    // 0ea0ea  call 0xe9c2c
    X86_AT(c, 0xea0eau);
    push32(c, 0xea0efu); f_000e9c2c(c); X86_RET(c, 0xea0efu);
    X86_TICK(c, 9);
    // 0ea0ef  push eax
    X86_AT(c, 0xea0efu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea0f0  call 0xe42d0
    X86_AT(c, 0xea0f0u);
    push32(c, 0xea0f5u); f_000e42d0(c); X86_RET(c, 0xea0f5u);
    X86_TICK(c, 21);
    // 0ea0f5  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea0f5u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea0f8  mov dword ptr [edx + 0xcde6e], eax
    X86_AT(c, 0xea0f8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Eu)), c.r[0]);
    // 0ea0fe  push edi
    X86_AT(c, 0xea0feu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea0ff  push 0x4f
    X86_AT(c, 0xea0ffu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea101  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea101u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea104  push eax
    X86_AT(c, 0xea104u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea105  call 0x10078c
    X86_AT(c, 0xea105u);
    push32(c, 0xea10au); f_0010078c(c); X86_RET(c, 0xea10au);
    X86_TICK(c, 15);
    // 0ea10a  add esp, 0x20
    X86_AT(c, 0xea10au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0ea10d  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea10du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea110  push eax
    X86_AT(c, 0xea110u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea111  mov edx, eax
    X86_AT(c, 0xea111u);
    c.r[2] = c.r[0];
    // 0ea113  call 0xe9c2c
    X86_AT(c, 0xea113u);
    push32(c, 0xea118u); f_000e9c2c(c); X86_RET(c, 0xea118u);
    X86_TICK(c, 9);
    // 0ea118  push eax
    X86_AT(c, 0xea118u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea119  call 0xe42d0
    X86_AT(c, 0xea119u);
    push32(c, 0xea11eu); f_000e42d0(c); X86_RET(c, 0xea11eu);
    X86_TICK(c, 32);
    // 0ea11e  mov edx, 0xcde44
    X86_AT(c, 0xea11eu);
    c.r[2] = 0xCDE44u;
    // 0ea123  mov ecx, esi
    X86_AT(c, 0xea123u);
    c.r[1] = c.r[6];
    // 0ea125  lea edx, [ecx + ecx*4]
    X86_AT(c, 0xea125u);
    c.r[2] = (uint32_t)(c.r[1] + c.r[1] * 4);
    // 0ea128  lea edx, [ecx + edx*2]
    X86_AT(c, 0xea128u);
    c.r[2] = (uint32_t)(c.r[1] + c.r[2] * 2);
    // 0ea12b  shl edx, 5
    X86_AT(c, 0xea12bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ea12e  sub edx, ecx
    X86_AT(c, 0xea12eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0ea130  mov dword ptr [edx + 0xcde72], eax
    X86_AT(c, 0xea130u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE72u)), c.r[0]);
    // 0ea136  push edi
    X86_AT(c, 0xea136u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea137  push 0x4f
    X86_AT(c, 0xea137u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea139  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea139u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea13c  push eax
    X86_AT(c, 0xea13cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea13d  mov dword ptr [ebp - 0x60], edx
    X86_AT(c, 0xea13du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)), c.r[2]);
    // 0ea140  call 0x10078c
    X86_AT(c, 0xea140u);
    push32(c, 0xea145u); f_0010078c(c); X86_RET(c, 0xea145u);
    X86_TICK(c, 13);
    // 0ea145  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea145u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea148  push eax
    X86_AT(c, 0xea148u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea149  mov edx, eax
    X86_AT(c, 0xea149u);
    c.r[2] = c.r[0];
    // 0ea14b  call 0xe9c2c
    X86_AT(c, 0xea14bu);
    push32(c, 0xea150u); f_000e9c2c(c); X86_RET(c, 0xea150u);
    X86_TICK(c, 9);
    // 0ea150  push eax
    X86_AT(c, 0xea150u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea151  call 0xe42d0
    X86_AT(c, 0xea151u);
    push32(c, 0xea156u); f_000e42d0(c); X86_RET(c, 0xea156u);
    X86_TICK(c, 21);
    // 0ea156  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea156u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea159  mov dword ptr [edx + 0xcde76], eax
    X86_AT(c, 0xea159u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE76u)), c.r[0]);
    // 0ea15f  push edi
    X86_AT(c, 0xea15fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea160  push 0x4f
    X86_AT(c, 0xea160u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea162  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea162u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea165  push eax
    X86_AT(c, 0xea165u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea166  call 0x10078c
    X86_AT(c, 0xea166u);
    push32(c, 0xea16bu); f_0010078c(c); X86_RET(c, 0xea16bu);
    X86_TICK(c, 13);
    // 0ea16b  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea16bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea16e  push eax
    X86_AT(c, 0xea16eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea16f  mov edx, eax
    X86_AT(c, 0xea16fu);
    c.r[2] = c.r[0];
    // 0ea171  call 0xe9c2c
    X86_AT(c, 0xea171u);
    push32(c, 0xea176u); f_000e9c2c(c); X86_RET(c, 0xea176u);
    X86_TICK(c, 23);
    // 0ea176  mov al, byte ptr [eax]
    X86_AT(c, 0xea176u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0ea178  mov ecx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea178u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea17b  mov byte ptr [ecx + 0xcde7a], al
    X86_AT(c, 0xea17bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE7Au)), g8(c, 0));
    // 0ea181  push edi
    X86_AT(c, 0xea181u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea182  push 0x4f
    X86_AT(c, 0xea182u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea184  push edx
    X86_AT(c, 0xea184u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0ea185  call 0x10078c
    X86_AT(c, 0xea185u);
    push32(c, 0xea18au); f_0010078c(c); X86_RET(c, 0xea18au);
    X86_TICK(c, 13);
    // 0ea18a  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea18au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea18d  push eax
    X86_AT(c, 0xea18du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea18e  mov edx, eax
    X86_AT(c, 0xea18eu);
    c.r[2] = c.r[0];
    // 0ea190  call 0xe9c2c
    X86_AT(c, 0xea190u);
    push32(c, 0xea195u); f_000e9c2c(c); X86_RET(c, 0xea195u);
    X86_TICK(c, 25);
    // 0ea195  add esp, 0x3c
    X86_AT(c, 0xea195u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ea198  mov al, byte ptr [eax]
    X86_AT(c, 0xea198u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0ea19a  mov ecx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea19au);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea19d  mov byte ptr [ecx + 0xcde7b], al
    X86_AT(c, 0xea19du);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE7Bu)), g8(c, 0));
    // 0ea1a3  push edi
    X86_AT(c, 0xea1a3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea1a4  push 0x4f
    X86_AT(c, 0xea1a4u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea1a6  push edx
    X86_AT(c, 0xea1a6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0ea1a7  call 0x10078c
    X86_AT(c, 0xea1a7u);
    push32(c, 0xea1acu); f_0010078c(c); X86_RET(c, 0xea1acu);
    X86_TICK(c, 13);
    // 0ea1ac  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea1acu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea1af  push eax
    X86_AT(c, 0xea1afu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea1b0  mov edx, eax
    X86_AT(c, 0xea1b0u);
    c.r[2] = c.r[0];
    // 0ea1b2  call 0xe9c2c
    X86_AT(c, 0xea1b2u);
    push32(c, 0xea1b7u); f_000e9c2c(c); X86_RET(c, 0xea1b7u);
    X86_TICK(c, 23);
    // 0ea1b7  mov al, byte ptr [eax]
    X86_AT(c, 0xea1b7u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0ea1b9  mov ecx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea1b9u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea1bc  mov byte ptr [ecx + 0xcde7c], al
    X86_AT(c, 0xea1bcu);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE7Cu)), g8(c, 0));
    // 0ea1c2  push edi
    X86_AT(c, 0xea1c2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea1c3  push 0x4f
    X86_AT(c, 0xea1c3u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea1c5  push edx
    X86_AT(c, 0xea1c5u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0ea1c6  call 0x10078c
    X86_AT(c, 0xea1c6u);
    push32(c, 0xea1cbu); f_0010078c(c); X86_RET(c, 0xea1cbu);
    X86_TICK(c, 13);
    // 0ea1cb  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea1cbu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea1ce  push eax
    X86_AT(c, 0xea1ceu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea1cf  mov edx, eax
    X86_AT(c, 0xea1cfu);
    c.r[2] = c.r[0];
    // 0ea1d1  call 0xe9c2c
    X86_AT(c, 0xea1d1u);
    push32(c, 0xea1d6u); f_000e9c2c(c); X86_RET(c, 0xea1d6u);
    X86_TICK(c, 9);
    // 0ea1d6  push eax
    X86_AT(c, 0xea1d6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea1d7  call 0xe42d0
    X86_AT(c, 0xea1d7u);
    push32(c, 0xea1dcu); f_000e42d0(c); X86_RET(c, 0xea1dcu);
    X86_TICK(c, 21);
    // 0ea1dc  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea1dcu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea1df  mov dword ptr [edx + 0xcde7d], eax
    X86_AT(c, 0xea1dfu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Du)), c.r[0]);
    // 0ea1e5  push edi
    X86_AT(c, 0xea1e5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea1e6  push 0x4f
    X86_AT(c, 0xea1e6u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea1e8  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea1e8u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea1eb  push eax
    X86_AT(c, 0xea1ebu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea1ec  call 0x10078c
    X86_AT(c, 0xea1ecu);
    push32(c, 0xea1f1u); f_0010078c(c); X86_RET(c, 0xea1f1u);
    X86_TICK(c, 13);
    // 0ea1f1  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea1f1u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea1f4  push eax
    X86_AT(c, 0xea1f4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea1f5  mov edx, eax
    X86_AT(c, 0xea1f5u);
    c.r[2] = c.r[0];
    // 0ea1f7  call 0xe9c2c
    X86_AT(c, 0xea1f7u);
    push32(c, 0xea1fcu); f_000e9c2c(c); X86_RET(c, 0xea1fcu);
    X86_TICK(c, 9);
    // 0ea1fc  push eax
    X86_AT(c, 0xea1fcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea1fd  call 0xe42d0
    X86_AT(c, 0xea1fdu);
    push32(c, 0xea202u); f_000e42d0(c); X86_RET(c, 0xea202u);
    X86_TICK(c, 21);
    // 0ea202  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea202u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea205  mov dword ptr [edx + 0xcde81], eax
    X86_AT(c, 0xea205u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE81u)), c.r[0]);
    // 0ea20b  push edi
    X86_AT(c, 0xea20bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea20c  push 0x4f
    X86_AT(c, 0xea20cu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea20e  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea20eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea211  push eax
    X86_AT(c, 0xea211u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea212  call 0x10078c
    X86_AT(c, 0xea212u);
    push32(c, 0xea217u); f_0010078c(c); X86_RET(c, 0xea217u);
    X86_TICK(c, 13);
    // 0ea217  add esp, 0x44
    X86_AT(c, 0xea217u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 0ea21a  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea21au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea21d  push eax
    X86_AT(c, 0xea21du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea21e  call 0xe9c2c
    X86_AT(c, 0xea21eu);
    push32(c, 0xea223u); f_000e9c2c(c); X86_RET(c, 0xea223u);
    X86_TICK(c, 9);
    // 0ea223  push eax
    X86_AT(c, 0xea223u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea224  call 0xe42d0
    X86_AT(c, 0xea224u);
    push32(c, 0xea229u); f_000e42d0(c); X86_RET(c, 0xea229u);
    X86_TICK(c, 23);
    // 0ea229  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea229u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea22c  mov dword ptr [edx + 0xcde85], eax
    X86_AT(c, 0xea22cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE85u)), c.r[0]);
    // 0ea232  add esp, 8
    X86_AT(c, 0xea232u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ea235  push edi
    X86_AT(c, 0xea235u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea236  push 0x4f
    X86_AT(c, 0xea236u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea238  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea238u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea23b  push eax
    X86_AT(c, 0xea23bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea23c  call 0x10078c
    X86_AT(c, 0xea23cu);
    push32(c, 0xea241u); f_0010078c(c); X86_RET(c, 0xea241u);
    X86_TICK(c, 13);
    // 0ea241  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea241u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea244  push eax
    X86_AT(c, 0xea244u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea245  mov edx, eax
    X86_AT(c, 0xea245u);
    c.r[2] = c.r[0];
    // 0ea247  call 0xe9c2c
    X86_AT(c, 0xea247u);
    push32(c, 0xea24cu); f_000e9c2c(c); X86_RET(c, 0xea24cu);
    X86_TICK(c, 9);
    // 0ea24c  push eax
    X86_AT(c, 0xea24cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea24d  call 0xe42d0
    X86_AT(c, 0xea24du);
    push32(c, 0xea252u); f_000e42d0(c); X86_RET(c, 0xea252u);
    X86_TICK(c, 30);
    // 0ea252  mov edx, esi
    X86_AT(c, 0xea252u);
    c.r[2] = c.r[6];
    // 0ea254  lea ecx, [edx + edx*4]
    X86_AT(c, 0xea254u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0ea257  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xea257u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0ea25a  shl ecx, 5
    X86_AT(c, 0xea25au);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0ea25d  sub ecx, edx
    X86_AT(c, 0xea25du);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0ea25f  mov dword ptr [ecx + 0xcde89], eax
    X86_AT(c, 0xea25fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE89u)), c.r[0]);
    // 0ea265  push edi
    X86_AT(c, 0xea265u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea266  push 0x4f
    X86_AT(c, 0xea266u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea268  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea268u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea26b  push eax
    X86_AT(c, 0xea26bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea26c  mov dword ptr [ebp - 0x60], ecx
    X86_AT(c, 0xea26cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)), c.r[1]);
    // 0ea26f  call 0x10078c
    X86_AT(c, 0xea26fu);
    push32(c, 0xea274u); f_0010078c(c); X86_RET(c, 0xea274u);
    X86_TICK(c, 13);
    // 0ea274  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea274u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea277  push eax
    X86_AT(c, 0xea277u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea278  mov edx, eax
    X86_AT(c, 0xea278u);
    c.r[2] = c.r[0];
    // 0ea27a  call 0xe9c2c
    X86_AT(c, 0xea27au);
    push32(c, 0xea27fu); f_000e9c2c(c); X86_RET(c, 0xea27fu);
    X86_TICK(c, 9);
    // 0ea27f  push eax
    X86_AT(c, 0xea27fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea280  call 0xe42d0
    X86_AT(c, 0xea280u);
    push32(c, 0xea285u); f_000e42d0(c); X86_RET(c, 0xea285u);
    X86_TICK(c, 21);
    // 0ea285  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea285u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea288  mov dword ptr [edx + 0xcde8d], eax
    X86_AT(c, 0xea288u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE8Du)), c.r[0]);
    // 0ea28e  push edi
    X86_AT(c, 0xea28eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea28f  push 0x4f
    X86_AT(c, 0xea28fu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea291  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea291u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea294  push eax
    X86_AT(c, 0xea294u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea295  call 0x10078c
    X86_AT(c, 0xea295u);
    push32(c, 0xea29au); f_0010078c(c); X86_RET(c, 0xea29au);
    X86_TICK(c, 13);
    // 0ea29a  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea29au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea29d  push eax
    X86_AT(c, 0xea29du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea29e  mov edx, eax
    X86_AT(c, 0xea29eu);
    c.r[2] = c.r[0];
    // 0ea2a0  call 0xe9c2c
    X86_AT(c, 0xea2a0u);
    push32(c, 0xea2a5u); f_000e9c2c(c); X86_RET(c, 0xea2a5u);
    X86_TICK(c, 9);
    // 0ea2a5  push eax
    X86_AT(c, 0xea2a5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea2a6  call 0xe42d0
    X86_AT(c, 0xea2a6u);
    push32(c, 0xea2abu); f_000e42d0(c); X86_RET(c, 0xea2abu);
    X86_TICK(c, 23);
    // 0ea2ab  add esp, 0x3c
    X86_AT(c, 0xea2abu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ea2ae  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea2aeu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea2b1  mov dword ptr [edx + 0xcde91], eax
    X86_AT(c, 0xea2b1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE91u)), c.r[0]);
    // 0ea2b7  push edi
    X86_AT(c, 0xea2b7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea2b8  push 0x4f
    X86_AT(c, 0xea2b8u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea2ba  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea2bau);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea2bd  push eax
    X86_AT(c, 0xea2bdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea2be  call 0x10078c
    X86_AT(c, 0xea2beu);
    push32(c, 0xea2c3u); f_0010078c(c); X86_RET(c, 0xea2c3u);
    X86_TICK(c, 13);
    // 0ea2c3  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea2c3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea2c6  push eax
    X86_AT(c, 0xea2c6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea2c7  mov edx, eax
    X86_AT(c, 0xea2c7u);
    c.r[2] = c.r[0];
    // 0ea2c9  call 0xe9c2c
    X86_AT(c, 0xea2c9u);
    push32(c, 0xea2ceu); f_000e9c2c(c); X86_RET(c, 0xea2ceu);
    X86_TICK(c, 9);
    // 0ea2ce  push eax
    X86_AT(c, 0xea2ceu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea2cf  call 0xe42d0
    X86_AT(c, 0xea2cfu);
    push32(c, 0xea2d4u); f_000e42d0(c); X86_RET(c, 0xea2d4u);
    X86_TICK(c, 21);
    // 0ea2d4  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea2d4u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea2d7  mov dword ptr [edx + 0xcde95], eax
    X86_AT(c, 0xea2d7u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE95u)), c.r[0]);
    // 0ea2dd  push edi
    X86_AT(c, 0xea2ddu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea2de  push 0x4f
    X86_AT(c, 0xea2deu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea2e0  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea2e0u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea2e3  push eax
    X86_AT(c, 0xea2e3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea2e4  call 0x10078c
    X86_AT(c, 0xea2e4u);
    push32(c, 0xea2e9u); f_0010078c(c); X86_RET(c, 0xea2e9u);
    X86_TICK(c, 13);
    // 0ea2e9  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea2e9u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea2ec  push eax
    X86_AT(c, 0xea2ecu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea2ed  mov edx, eax
    X86_AT(c, 0xea2edu);
    c.r[2] = c.r[0];
    // 0ea2ef  call 0xe9c2c
    X86_AT(c, 0xea2efu);
    push32(c, 0xea2f4u); f_000e9c2c(c); X86_RET(c, 0xea2f4u);
    X86_TICK(c, 9);
    // 0ea2f4  push eax
    X86_AT(c, 0xea2f4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea2f5  call 0xe42d0
    X86_AT(c, 0xea2f5u);
    push32(c, 0xea2fau); f_000e42d0(c); X86_RET(c, 0xea2fau);
    X86_TICK(c, 21);
    // 0ea2fa  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea2fau);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea2fd  mov dword ptr [edx + 0xcde99], eax
    X86_AT(c, 0xea2fdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u)), c.r[0]);
    // 0ea303  push edi
    X86_AT(c, 0xea303u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea304  push 0x4f
    X86_AT(c, 0xea304u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea306  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea306u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea309  push eax
    X86_AT(c, 0xea309u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea30a  call 0x10078c
    X86_AT(c, 0xea30au);
    push32(c, 0xea30fu); f_0010078c(c); X86_RET(c, 0xea30fu);
    X86_TICK(c, 13);
    // 0ea30f  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea30fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea312  push eax
    X86_AT(c, 0xea312u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea313  mov edx, eax
    X86_AT(c, 0xea313u);
    c.r[2] = c.r[0];
    // 0ea315  call 0xe9c2c
    X86_AT(c, 0xea315u);
    push32(c, 0xea31au); f_000e9c2c(c); X86_RET(c, 0xea31au);
    X86_TICK(c, 9);
    // 0ea31a  push eax
    X86_AT(c, 0xea31au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea31b  call 0xe42d0
    X86_AT(c, 0xea31bu);
    push32(c, 0xea320u); f_000e42d0(c); X86_RET(c, 0xea320u);
    X86_TICK(c, 23);
    // 0ea320  add esp, 0x3c
    X86_AT(c, 0xea320u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ea323  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea323u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea326  mov dword ptr [edx + 0xcde9d], eax
    X86_AT(c, 0xea326u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE9Du)), c.r[0]);
    // 0ea32c  push edi
    X86_AT(c, 0xea32cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea32d  push 0x4f
    X86_AT(c, 0xea32du);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea32f  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea32fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea332  push eax
    X86_AT(c, 0xea332u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea333  call 0x10078c
    X86_AT(c, 0xea333u);
    push32(c, 0xea338u); f_0010078c(c); X86_RET(c, 0xea338u);
    X86_TICK(c, 13);
    // 0ea338  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea338u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea33b  push eax
    X86_AT(c, 0xea33bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea33c  mov edx, eax
    X86_AT(c, 0xea33cu);
    c.r[2] = c.r[0];
    // 0ea33e  call 0xe9c2c
    X86_AT(c, 0xea33eu);
    push32(c, 0xea343u); f_000e9c2c(c); X86_RET(c, 0xea343u);
    X86_TICK(c, 23);
    // 0ea343  mov al, byte ptr [eax]
    X86_AT(c, 0xea343u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0ea345  mov ecx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea345u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea348  mov byte ptr [ecx + 0xcdea1], al
    X86_AT(c, 0xea348u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDEA1u)), g8(c, 0));
    // 0ea34e  push edi
    X86_AT(c, 0xea34eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea34f  push 0x4f
    X86_AT(c, 0xea34fu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea351  push edx
    X86_AT(c, 0xea351u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0ea352  call 0x10078c
    X86_AT(c, 0xea352u);
    push32(c, 0xea357u); f_0010078c(c); X86_RET(c, 0xea357u);
    X86_TICK(c, 15);
    // 0ea357  add esp, 0x1c
    X86_AT(c, 0xea357u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0ea35a  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea35au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea35d  push eax
    X86_AT(c, 0xea35du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea35e  mov edx, eax
    X86_AT(c, 0xea35eu);
    c.r[2] = c.r[0];
    // 0ea360  call 0xe9c2c
    X86_AT(c, 0xea360u);
    push32(c, 0xea365u); f_000e9c2c(c); X86_RET(c, 0xea365u);
    X86_TICK(c, 36);
    // 0ea365  mov ecx, 0xcde44
    X86_AT(c, 0xea365u);
    c.r[1] = 0xCDE44u;
    // 0ea36a  mov ecx, esi
    X86_AT(c, 0xea36au);
    c.r[1] = c.r[6];
    // 0ea36c  lea edx, [ecx + ecx*4]
    X86_AT(c, 0xea36cu);
    c.r[2] = (uint32_t)(c.r[1] + c.r[1] * 4);
    // 0ea36f  lea edx, [ecx + edx*2]
    X86_AT(c, 0xea36fu);
    c.r[2] = (uint32_t)(c.r[1] + c.r[2] * 2);
    // 0ea372  shl edx, 5
    X86_AT(c, 0xea372u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ea375  sub edx, ecx
    X86_AT(c, 0xea375u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0ea377  mov al, byte ptr [eax]
    X86_AT(c, 0xea377u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0ea379  mov byte ptr [edx + 0xcdebe], al
    X86_AT(c, 0xea379u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEBEu)), g8(c, 0));
    // 0ea37f  push edi
    X86_AT(c, 0xea37fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea380  push 0x4f
    X86_AT(c, 0xea380u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea382  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea382u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea385  push eax
    X86_AT(c, 0xea385u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea386  mov dword ptr [ebp - 0x60], edx
    X86_AT(c, 0xea386u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)), c.r[2]);
    // 0ea389  call 0x10078c
    X86_AT(c, 0xea389u);
    push32(c, 0xea38eu); f_0010078c(c); X86_RET(c, 0xea38eu);
    X86_TICK(c, 13);
    // 0ea38e  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea38eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea391  push eax
    X86_AT(c, 0xea391u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea392  mov edx, eax
    X86_AT(c, 0xea392u);
    c.r[2] = c.r[0];
    // 0ea394  call 0xe9c2c
    X86_AT(c, 0xea394u);
    push32(c, 0xea399u); f_000e9c2c(c); X86_RET(c, 0xea399u);
    X86_TICK(c, 9);
    // 0ea399  push eax
    X86_AT(c, 0xea399u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea39a  call 0xe42d0
    X86_AT(c, 0xea39au);
    push32(c, 0xea39fu); f_000e42d0(c); X86_RET(c, 0xea39fu);
    X86_TICK(c, 21);
    // 0ea39f  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea39fu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea3a2  mov dword ptr [edx + 0xcdea2], eax
    X86_AT(c, 0xea3a2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEA2u)), c.r[0]);
    // 0ea3a8  push edi
    X86_AT(c, 0xea3a8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea3a9  push 0x4f
    X86_AT(c, 0xea3a9u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea3ab  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea3abu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea3ae  push eax
    X86_AT(c, 0xea3aeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea3af  call 0x10078c
    X86_AT(c, 0xea3afu);
    push32(c, 0xea3b4u); f_0010078c(c); X86_RET(c, 0xea3b4u);
    X86_TICK(c, 13);
    // 0ea3b4  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea3b4u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea3b7  push eax
    X86_AT(c, 0xea3b7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea3b8  mov edx, eax
    X86_AT(c, 0xea3b8u);
    c.r[2] = c.r[0];
    // 0ea3ba  call 0xe9c2c
    X86_AT(c, 0xea3bau);
    push32(c, 0xea3bfu); f_000e9c2c(c); X86_RET(c, 0xea3bfu);
    X86_TICK(c, 9);
    // 0ea3bf  push eax
    X86_AT(c, 0xea3bfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea3c0  call 0xe42d0
    X86_AT(c, 0xea3c0u);
    push32(c, 0xea3c5u); f_000e42d0(c); X86_RET(c, 0xea3c5u);
    X86_TICK(c, 21);
    // 0ea3c5  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea3c5u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea3c8  mov dword ptr [edx + 0xcdea6], eax
    X86_AT(c, 0xea3c8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEA6u)), c.r[0]);
    // 0ea3ce  push edi
    X86_AT(c, 0xea3ceu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea3cf  push 0x4f
    X86_AT(c, 0xea3cfu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea3d1  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea3d1u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea3d4  push eax
    X86_AT(c, 0xea3d4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea3d5  call 0x10078c
    X86_AT(c, 0xea3d5u);
    push32(c, 0xea3dau); f_0010078c(c); X86_RET(c, 0xea3dau);
    X86_TICK(c, 13);
    // 0ea3da  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea3dau);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea3dd  push eax
    X86_AT(c, 0xea3ddu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea3de  mov edx, eax
    X86_AT(c, 0xea3deu);
    c.r[2] = c.r[0];
    // 0ea3e0  call 0xe9c2c
    X86_AT(c, 0xea3e0u);
    push32(c, 0xea3e5u); f_000e9c2c(c); X86_RET(c, 0xea3e5u);
    X86_TICK(c, 11);
    // 0ea3e5  add esp, 0x3c
    X86_AT(c, 0xea3e5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ea3e8  push eax
    X86_AT(c, 0xea3e8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea3e9  call 0xe42d0
    X86_AT(c, 0xea3e9u);
    push32(c, 0xea3eeu); f_000e42d0(c); X86_RET(c, 0xea3eeu);
    X86_TICK(c, 21);
    // 0ea3ee  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea3eeu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea3f1  mov dword ptr [edx + 0xcdeaa], eax
    X86_AT(c, 0xea3f1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEAAu)), c.r[0]);
    // 0ea3f7  push edi
    X86_AT(c, 0xea3f7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea3f8  push 0x4f
    X86_AT(c, 0xea3f8u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea3fa  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea3fau);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea3fd  push eax
    X86_AT(c, 0xea3fdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea3fe  call 0x10078c
    X86_AT(c, 0xea3feu);
    push32(c, 0xea403u); f_0010078c(c); X86_RET(c, 0xea403u);
    X86_TICK(c, 13);
    // 0ea403  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea403u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea406  push eax
    X86_AT(c, 0xea406u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea407  mov edx, eax
    X86_AT(c, 0xea407u);
    c.r[2] = c.r[0];
    // 0ea409  call 0xe9c2c
    X86_AT(c, 0xea409u);
    push32(c, 0xea40eu); f_000e9c2c(c); X86_RET(c, 0xea40eu);
    X86_TICK(c, 9);
    // 0ea40e  push eax
    X86_AT(c, 0xea40eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea40f  call 0xe42d0
    X86_AT(c, 0xea40fu);
    push32(c, 0xea414u); f_000e42d0(c); X86_RET(c, 0xea414u);
    X86_TICK(c, 21);
    // 0ea414  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea414u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea417  mov dword ptr [edx + 0xcdeae], eax
    X86_AT(c, 0xea417u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEAEu)), c.r[0]);
    // 0ea41d  push edi
    X86_AT(c, 0xea41du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea41e  push 0x4f
    X86_AT(c, 0xea41eu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea420  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea420u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea423  push eax
    X86_AT(c, 0xea423u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea424  call 0x10078c
    X86_AT(c, 0xea424u);
    push32(c, 0xea429u); f_0010078c(c); X86_RET(c, 0xea429u);
    X86_TICK(c, 13);
    // 0ea429  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea429u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea42c  push eax
    X86_AT(c, 0xea42cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea42d  mov edx, eax
    X86_AT(c, 0xea42du);
    c.r[2] = c.r[0];
    // 0ea42f  call 0xe9c2c
    X86_AT(c, 0xea42fu);
    push32(c, 0xea434u); f_000e9c2c(c); X86_RET(c, 0xea434u);
    X86_TICK(c, 9);
    // 0ea434  push eax
    X86_AT(c, 0xea434u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea435  call 0xe42d0
    X86_AT(c, 0xea435u);
    push32(c, 0xea43au); f_000e42d0(c); X86_RET(c, 0xea43au);
    X86_TICK(c, 21);
    // 0ea43a  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea43au);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea43d  mov dword ptr [edx + 0xcdeb2], eax
    X86_AT(c, 0xea43du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEB2u)), c.r[0]);
    // 0ea443  push edi
    X86_AT(c, 0xea443u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea444  push 0x4f
    X86_AT(c, 0xea444u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea446  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea446u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea449  push eax
    X86_AT(c, 0xea449u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea44a  call 0x10078c
    X86_AT(c, 0xea44au);
    push32(c, 0xea44fu); f_0010078c(c); X86_RET(c, 0xea44fu);
    X86_TICK(c, 13);
    // 0ea44f  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea44fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea452  push eax
    X86_AT(c, 0xea452u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea453  mov edx, eax
    X86_AT(c, 0xea453u);
    c.r[2] = c.r[0];
    // 0ea455  call 0xe9c2c
    X86_AT(c, 0xea455u);
    push32(c, 0xea45au); f_000e9c2c(c); X86_RET(c, 0xea45au);
    X86_TICK(c, 11);
    // 0ea45a  add esp, 0x3c
    X86_AT(c, 0xea45au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ea45d  push eax
    X86_AT(c, 0xea45du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea45e  call 0xe42d0
    X86_AT(c, 0xea45eu);
    push32(c, 0xea463u); f_000e42d0(c); X86_RET(c, 0xea463u);
    X86_TICK(c, 21);
    // 0ea463  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea463u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea466  mov dword ptr [edx + 0xcdeb6], eax
    X86_AT(c, 0xea466u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEB6u)), c.r[0]);
    // 0ea46c  push edi
    X86_AT(c, 0xea46cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea46d  push 0x4f
    X86_AT(c, 0xea46du);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea46f  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea46fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea472  push eax
    X86_AT(c, 0xea472u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea473  call 0x10078c
    X86_AT(c, 0xea473u);
    push32(c, 0xea478u); f_0010078c(c); X86_RET(c, 0xea478u);
    X86_TICK(c, 11);
    // 0ea478  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea478u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea47b  push eax
    X86_AT(c, 0xea47bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea47c  call 0xe9c2c
    X86_AT(c, 0xea47cu);
    push32(c, 0xea481u); f_000e9c2c(c); X86_RET(c, 0xea481u);
    X86_TICK(c, 9);
    // 0ea481  push eax
    X86_AT(c, 0xea481u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea482  call 0xe42d0
    X86_AT(c, 0xea482u);
    push32(c, 0xea487u); f_000e42d0(c); X86_RET(c, 0xea487u);
    X86_TICK(c, 23);
    // 0ea487  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea487u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea48a  mov dword ptr [edx + 0xcdeba], eax
    X86_AT(c, 0xea48au);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEBAu)), c.r[0]);
    // 0ea490  add esp, 0x18
    X86_AT(c, 0xea490u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0ea493  push edi
    X86_AT(c, 0xea493u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea494  push 0x4f
    X86_AT(c, 0xea494u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea496  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea496u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea499  push eax
    X86_AT(c, 0xea499u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea49a  call 0x10078c
    X86_AT(c, 0xea49au);
    push32(c, 0xea49fu); f_0010078c(c); X86_RET(c, 0xea49fu);
    X86_TICK(c, 13);
    // 0ea49f  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea49fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea4a2  push eax
    X86_AT(c, 0xea4a2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea4a3  mov edx, eax
    X86_AT(c, 0xea4a3u);
    c.r[2] = c.r[0];
    // 0ea4a5  call 0xe9c2c
    X86_AT(c, 0xea4a5u);
    push32(c, 0xea4aau); f_000e9c2c(c); X86_RET(c, 0xea4aau);
    X86_TICK(c, 9);
    // 0ea4aa  push eax
    X86_AT(c, 0xea4aau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea4ab  call 0xe42d0
    X86_AT(c, 0xea4abu);
    push32(c, 0xea4b0u); f_000e42d0(c); X86_RET(c, 0xea4b0u);
    X86_TICK(c, 30);
    // 0ea4b0  mov edx, esi
    X86_AT(c, 0xea4b0u);
    c.r[2] = c.r[6];
    // 0ea4b2  lea ecx, [edx + edx*4]
    X86_AT(c, 0xea4b2u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0ea4b5  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xea4b5u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0ea4b8  shl ecx, 5
    X86_AT(c, 0xea4b8u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0ea4bb  sub ecx, edx
    X86_AT(c, 0xea4bbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0ea4bd  mov dword ptr [ecx + 0xcdebf], eax
    X86_AT(c, 0xea4bdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDEBFu)), c.r[0]);
    // 0ea4c3  push edi
    X86_AT(c, 0xea4c3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea4c4  push 0x4f
    X86_AT(c, 0xea4c4u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea4c6  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea4c6u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea4c9  push eax
    X86_AT(c, 0xea4c9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea4ca  mov dword ptr [ebp - 0x60], ecx
    X86_AT(c, 0xea4cau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)), c.r[1]);
    // 0ea4cd  call 0x10078c
    X86_AT(c, 0xea4cdu);
    push32(c, 0xea4d2u); f_0010078c(c); X86_RET(c, 0xea4d2u);
    X86_TICK(c, 13);
    // 0ea4d2  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea4d2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea4d5  push eax
    X86_AT(c, 0xea4d5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea4d6  mov edx, eax
    X86_AT(c, 0xea4d6u);
    c.r[2] = c.r[0];
    // 0ea4d8  call 0xe9c2c
    X86_AT(c, 0xea4d8u);
    push32(c, 0xea4ddu); f_000e9c2c(c); X86_RET(c, 0xea4ddu);
    X86_TICK(c, 9);
    // 0ea4dd  push eax
    X86_AT(c, 0xea4ddu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea4de  call 0xe42d0
    X86_AT(c, 0xea4deu);
    push32(c, 0xea4e3u); f_000e42d0(c); X86_RET(c, 0xea4e3u);
    X86_TICK(c, 21);
    // 0ea4e3  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea4e3u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea4e6  mov dword ptr [edx + 0xcdec3], eax
    X86_AT(c, 0xea4e6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEC3u)), c.r[0]);
    // 0ea4ec  push edi
    X86_AT(c, 0xea4ecu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea4ed  push 0x4f
    X86_AT(c, 0xea4edu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea4ef  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea4efu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea4f2  push eax
    X86_AT(c, 0xea4f2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea4f3  call 0x10078c
    X86_AT(c, 0xea4f3u);
    push32(c, 0xea4f8u); f_0010078c(c); X86_RET(c, 0xea4f8u);
    X86_TICK(c, 13);
    // 0ea4f8  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea4f8u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea4fb  push eax
    X86_AT(c, 0xea4fbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea4fc  mov edx, eax
    X86_AT(c, 0xea4fcu);
    c.r[2] = c.r[0];
    // 0ea4fe  call 0xe9c2c
    X86_AT(c, 0xea4feu);
    push32(c, 0xea503u); f_000e9c2c(c); X86_RET(c, 0xea503u);
    X86_TICK(c, 9);
    // 0ea503  push eax
    X86_AT(c, 0xea503u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea504  call 0xe42d0
    X86_AT(c, 0xea504u);
    push32(c, 0xea509u); f_000e42d0(c); X86_RET(c, 0xea509u);
    X86_TICK(c, 23);
    // 0ea509  add esp, 0x3c
    X86_AT(c, 0xea509u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ea50c  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea50cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea50f  mov dword ptr [edx + 0xcdec7], eax
    X86_AT(c, 0xea50fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEC7u)), c.r[0]);
    // 0ea515  push edi
    X86_AT(c, 0xea515u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea516  push 0x4f
    X86_AT(c, 0xea516u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea518  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea518u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea51b  push eax
    X86_AT(c, 0xea51bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea51c  call 0x10078c
    X86_AT(c, 0xea51cu);
    push32(c, 0xea521u); f_0010078c(c); X86_RET(c, 0xea521u);
    X86_TICK(c, 13);
    // 0ea521  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea521u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea524  push eax
    X86_AT(c, 0xea524u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea525  mov edx, eax
    X86_AT(c, 0xea525u);
    c.r[2] = c.r[0];
    // 0ea527  call 0xe9c2c
    X86_AT(c, 0xea527u);
    push32(c, 0xea52cu); f_000e9c2c(c); X86_RET(c, 0xea52cu);
    X86_TICK(c, 9);
    // 0ea52c  push eax
    X86_AT(c, 0xea52cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea52d  call 0xe42d0
    X86_AT(c, 0xea52du);
    push32(c, 0xea532u); f_000e42d0(c); X86_RET(c, 0xea532u);
    X86_TICK(c, 21);
    // 0ea532  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea532u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea535  mov dword ptr [edx + 0xcdecb], eax
    X86_AT(c, 0xea535u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDECBu)), c.r[0]);
    // 0ea53b  push edi
    X86_AT(c, 0xea53bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea53c  push 0x4f
    X86_AT(c, 0xea53cu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea53e  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea53eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea541  push eax
    X86_AT(c, 0xea541u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea542  call 0x10078c
    X86_AT(c, 0xea542u);
    push32(c, 0xea547u); f_0010078c(c); X86_RET(c, 0xea547u);
    X86_TICK(c, 13);
    // 0ea547  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea547u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea54a  push eax
    X86_AT(c, 0xea54au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea54b  mov edx, eax
    X86_AT(c, 0xea54bu);
    c.r[2] = c.r[0];
    // 0ea54d  call 0xe9c2c
    X86_AT(c, 0xea54du);
    push32(c, 0xea552u); f_000e9c2c(c); X86_RET(c, 0xea552u);
    X86_TICK(c, 9);
    // 0ea552  push eax
    X86_AT(c, 0xea552u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea553  call 0xe42d0
    X86_AT(c, 0xea553u);
    push32(c, 0xea558u); f_000e42d0(c); X86_RET(c, 0xea558u);
    X86_TICK(c, 21);
    // 0ea558  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea558u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea55b  mov dword ptr [edx + 0xcdecf], eax
    X86_AT(c, 0xea55bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDECFu)), c.r[0]);
    // 0ea561  push edi
    X86_AT(c, 0xea561u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea562  push 0x4f
    X86_AT(c, 0xea562u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea564  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea564u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea567  push eax
    X86_AT(c, 0xea567u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea568  call 0x10078c
    X86_AT(c, 0xea568u);
    push32(c, 0xea56du); f_0010078c(c); X86_RET(c, 0xea56du);
    X86_TICK(c, 13);
    // 0ea56d  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea56du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea570  push eax
    X86_AT(c, 0xea570u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea571  mov edx, eax
    X86_AT(c, 0xea571u);
    c.r[2] = c.r[0];
    // 0ea573  call 0xe9c2c
    X86_AT(c, 0xea573u);
    push32(c, 0xea578u); f_000e9c2c(c); X86_RET(c, 0xea578u);
    X86_TICK(c, 9);
    // 0ea578  push eax
    X86_AT(c, 0xea578u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea579  call 0xe42d0
    X86_AT(c, 0xea579u);
    push32(c, 0xea57eu); f_000e42d0(c); X86_RET(c, 0xea57eu);
    X86_TICK(c, 23);
    // 0ea57e  add esp, 0x3c
    X86_AT(c, 0xea57eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ea581  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea581u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea584  mov dword ptr [edx + 0xcded3], eax
    X86_AT(c, 0xea584u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDED3u)), c.r[0]);
    // 0ea58a  push edi
    X86_AT(c, 0xea58au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea58b  push 0x4f
    X86_AT(c, 0xea58bu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea58d  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea58du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea590  push eax
    X86_AT(c, 0xea590u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea591  call 0x10078c
    X86_AT(c, 0xea591u);
    push32(c, 0xea596u); f_0010078c(c); X86_RET(c, 0xea596u);
    X86_TICK(c, 13);
    // 0ea596  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea596u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea599  push eax
    X86_AT(c, 0xea599u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea59a  mov edx, eax
    X86_AT(c, 0xea59au);
    c.r[2] = c.r[0];
    // 0ea59c  call 0xe9c2c
    X86_AT(c, 0xea59cu);
    push32(c, 0xea5a1u); f_000e9c2c(c); X86_RET(c, 0xea5a1u);
    X86_TICK(c, 9);
    // 0ea5a1  push eax
    X86_AT(c, 0xea5a1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea5a2  call 0xe42d0
    X86_AT(c, 0xea5a2u);
    push32(c, 0xea5a7u); f_000e42d0(c); X86_RET(c, 0xea5a7u);
    X86_TICK(c, 21);
    // 0ea5a7  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea5a7u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea5aa  mov dword ptr [edx + 0xcded7], eax
    X86_AT(c, 0xea5aau);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDED7u)), c.r[0]);
    // 0ea5b0  push edi
    X86_AT(c, 0xea5b0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea5b1  push 0x4f
    X86_AT(c, 0xea5b1u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea5b3  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea5b3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea5b6  push eax
    X86_AT(c, 0xea5b6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea5b7  call 0x10078c
    X86_AT(c, 0xea5b7u);
    push32(c, 0xea5bcu); f_0010078c(c); X86_RET(c, 0xea5bcu);
    X86_TICK(c, 15);
    // 0ea5bc  add esp, 0x20
    X86_AT(c, 0xea5bcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0ea5bf  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea5bfu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea5c2  push eax
    X86_AT(c, 0xea5c2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea5c3  mov edx, eax
    X86_AT(c, 0xea5c3u);
    c.r[2] = c.r[0];
    // 0ea5c5  call 0xe9c2c
    X86_AT(c, 0xea5c5u);
    push32(c, 0xea5cau); f_000e9c2c(c); X86_RET(c, 0xea5cau);
    X86_TICK(c, 9);
    // 0ea5ca  push eax
    X86_AT(c, 0xea5cau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea5cb  call 0xe42d0
    X86_AT(c, 0xea5cbu);
    push32(c, 0xea5d0u); f_000e42d0(c); X86_RET(c, 0xea5d0u);
    X86_TICK(c, 32);
    // 0ea5d0  mov edx, 0xcde44
    X86_AT(c, 0xea5d0u);
    c.r[2] = 0xCDE44u;
    // 0ea5d5  mov ecx, esi
    X86_AT(c, 0xea5d5u);
    c.r[1] = c.r[6];
    // 0ea5d7  lea edx, [ecx + ecx*4]
    X86_AT(c, 0xea5d7u);
    c.r[2] = (uint32_t)(c.r[1] + c.r[1] * 4);
    // 0ea5da  lea edx, [ecx + edx*2]
    X86_AT(c, 0xea5dau);
    c.r[2] = (uint32_t)(c.r[1] + c.r[2] * 2);
    // 0ea5dd  shl edx, 5
    X86_AT(c, 0xea5ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ea5e0  sub edx, ecx
    X86_AT(c, 0xea5e0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0ea5e2  mov dword ptr [edx + 0xcdedb], eax
    X86_AT(c, 0xea5e2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEDBu)), c.r[0]);
    // 0ea5e8  push edi
    X86_AT(c, 0xea5e8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea5e9  push 0x4f
    X86_AT(c, 0xea5e9u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea5eb  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea5ebu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea5ee  push eax
    X86_AT(c, 0xea5eeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea5ef  mov dword ptr [ebp - 0x60], edx
    X86_AT(c, 0xea5efu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)), c.r[2]);
    // 0ea5f2  call 0x10078c
    X86_AT(c, 0xea5f2u);
    push32(c, 0xea5f7u); f_0010078c(c); X86_RET(c, 0xea5f7u);
    X86_TICK(c, 13);
    // 0ea5f7  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea5f7u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea5fa  push eax
    X86_AT(c, 0xea5fau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea5fb  mov edx, eax
    X86_AT(c, 0xea5fbu);
    c.r[2] = c.r[0];
    // 0ea5fd  call 0xe9c2c
    X86_AT(c, 0xea5fdu);
    push32(c, 0xea602u); f_000e9c2c(c); X86_RET(c, 0xea602u);
    X86_TICK(c, 9);
    // 0ea602  push eax
    X86_AT(c, 0xea602u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea603  call 0xe42d0
    X86_AT(c, 0xea603u);
    push32(c, 0xea608u); f_000e42d0(c); X86_RET(c, 0xea608u);
    X86_TICK(c, 21);
    // 0ea608  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea608u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea60b  mov dword ptr [edx + 0xcdedf], eax
    X86_AT(c, 0xea60bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEDFu)), c.r[0]);
    // 0ea611  push edi
    X86_AT(c, 0xea611u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea612  push 0x4f
    X86_AT(c, 0xea612u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea614  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea614u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea617  push eax
    X86_AT(c, 0xea617u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea618  call 0x10078c
    X86_AT(c, 0xea618u);
    push32(c, 0xea61du); f_0010078c(c); X86_RET(c, 0xea61du);
    X86_TICK(c, 13);
    // 0ea61d  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea61du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea620  push eax
    X86_AT(c, 0xea620u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea621  mov edx, eax
    X86_AT(c, 0xea621u);
    c.r[2] = c.r[0];
    // 0ea623  call 0xe9c2c
    X86_AT(c, 0xea623u);
    push32(c, 0xea628u); f_000e9c2c(c); X86_RET(c, 0xea628u);
    X86_TICK(c, 9);
    // 0ea628  push eax
    X86_AT(c, 0xea628u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea629  call 0xe42d0
    X86_AT(c, 0xea629u);
    push32(c, 0xea62eu); f_000e42d0(c); X86_RET(c, 0xea62eu);
    X86_TICK(c, 21);
    // 0ea62e  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea62eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea631  mov dword ptr [edx + 0xcdee3], eax
    X86_AT(c, 0xea631u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEE3u)), c.r[0]);
    // 0ea637  push edi
    X86_AT(c, 0xea637u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea638  push 0x4f
    X86_AT(c, 0xea638u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea63a  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea63au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea63d  push eax
    X86_AT(c, 0xea63du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea63e  call 0x10078c
    X86_AT(c, 0xea63eu);
    push32(c, 0xea643u); f_0010078c(c); X86_RET(c, 0xea643u);
    X86_TICK(c, 15);
    // 0ea643  add esp, 0x3c
    X86_AT(c, 0xea643u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ea646  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea646u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea649  push eax
    X86_AT(c, 0xea649u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea64a  mov edx, eax
    X86_AT(c, 0xea64au);
    c.r[2] = c.r[0];
    // 0ea64c  call 0xe9c2c
    X86_AT(c, 0xea64cu);
    push32(c, 0xea651u); f_000e9c2c(c); X86_RET(c, 0xea651u);
    X86_TICK(c, 9);
    // 0ea651  push eax
    X86_AT(c, 0xea651u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea652  call 0xe42d0
    X86_AT(c, 0xea652u);
    push32(c, 0xea657u); f_000e42d0(c); X86_RET(c, 0xea657u);
    X86_TICK(c, 21);
    // 0ea657  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea657u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea65a  mov dword ptr [edx + 0xcdee7], eax
    X86_AT(c, 0xea65au);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEE7u)), c.r[0]);
    // 0ea660  push edi
    X86_AT(c, 0xea660u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea661  push 0x4f
    X86_AT(c, 0xea661u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea663  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea663u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea666  push eax
    X86_AT(c, 0xea666u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea667  call 0x10078c
    X86_AT(c, 0xea667u);
    push32(c, 0xea66cu); f_0010078c(c); X86_RET(c, 0xea66cu);
    X86_TICK(c, 13);
    // 0ea66c  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea66cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea66f  push eax
    X86_AT(c, 0xea66fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea670  mov edx, eax
    X86_AT(c, 0xea670u);
    c.r[2] = c.r[0];
    // 0ea672  call 0xe9c2c
    X86_AT(c, 0xea672u);
    push32(c, 0xea677u); f_000e9c2c(c); X86_RET(c, 0xea677u);
    X86_TICK(c, 9);
    // 0ea677  push eax
    X86_AT(c, 0xea677u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea678  call 0xe42d0
    X86_AT(c, 0xea678u);
    push32(c, 0xea67du); f_000e42d0(c); X86_RET(c, 0xea67du);
    X86_TICK(c, 21);
    // 0ea67d  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea67du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea680  mov dword ptr [edx + 0xcdeeb], eax
    X86_AT(c, 0xea680u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEEBu)), c.r[0]);
    // 0ea686  push edi
    X86_AT(c, 0xea686u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea687  push 0x4f
    X86_AT(c, 0xea687u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea689  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea689u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea68c  push eax
    X86_AT(c, 0xea68cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea68d  call 0x10078c
    X86_AT(c, 0xea68du);
    push32(c, 0xea692u); f_0010078c(c); X86_RET(c, 0xea692u);
    X86_TICK(c, 13);
    // 0ea692  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea692u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea695  push eax
    X86_AT(c, 0xea695u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea696  mov edx, eax
    X86_AT(c, 0xea696u);
    c.r[2] = c.r[0];
    // 0ea698  call 0xe9c2c
    X86_AT(c, 0xea698u);
    push32(c, 0xea69du); f_000e9c2c(c); X86_RET(c, 0xea69du);
    X86_TICK(c, 9);
    // 0ea69d  push eax
    X86_AT(c, 0xea69du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea69e  call 0xe42d0
    X86_AT(c, 0xea69eu);
    push32(c, 0xea6a3u); f_000e42d0(c); X86_RET(c, 0xea6a3u);
    X86_TICK(c, 21);
    // 0ea6a3  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea6a3u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea6a6  mov dword ptr [edx + 0xcdeef], eax
    X86_AT(c, 0xea6a6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEEFu)), c.r[0]);
    // 0ea6ac  push edi
    X86_AT(c, 0xea6acu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea6ad  push 0x4f
    X86_AT(c, 0xea6adu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea6af  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea6afu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea6b2  push eax
    X86_AT(c, 0xea6b2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea6b3  call 0x10078c
    X86_AT(c, 0xea6b3u);
    push32(c, 0xea6b8u); f_0010078c(c); X86_RET(c, 0xea6b8u);
    X86_TICK(c, 15);
    // 0ea6b8  add esp, 0x3c
    X86_AT(c, 0xea6b8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ea6bb  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea6bbu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea6be  push eax
    X86_AT(c, 0xea6beu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea6bf  mov edx, eax
    X86_AT(c, 0xea6bfu);
    c.r[2] = c.r[0];
    // 0ea6c1  call 0xe9c2c
    X86_AT(c, 0xea6c1u);
    push32(c, 0xea6c6u); f_000e9c2c(c); X86_RET(c, 0xea6c6u);
    X86_TICK(c, 9);
    // 0ea6c6  push eax
    X86_AT(c, 0xea6c6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea6c7  call 0xe42d0
    X86_AT(c, 0xea6c7u);
    push32(c, 0xea6ccu); f_000e42d0(c); X86_RET(c, 0xea6ccu);
    X86_TICK(c, 21);
    // 0ea6cc  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea6ccu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea6cf  mov dword ptr [edx + 0xcdef3], eax
    X86_AT(c, 0xea6cfu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEF3u)), c.r[0]);
    // 0ea6d5  push edi
    X86_AT(c, 0xea6d5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea6d6  push 0x4f
    X86_AT(c, 0xea6d6u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea6d8  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea6d8u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea6db  push eax
    X86_AT(c, 0xea6dbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea6dc  call 0x10078c
    X86_AT(c, 0xea6dcu);
    push32(c, 0xea6e1u); f_0010078c(c); X86_RET(c, 0xea6e1u);
    X86_TICK(c, 11);
    // 0ea6e1  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea6e1u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea6e4  push eax
    X86_AT(c, 0xea6e4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea6e5  call 0xe9c2c
    X86_AT(c, 0xea6e5u);
    push32(c, 0xea6eau); f_000e9c2c(c); X86_RET(c, 0xea6eau);
    X86_TICK(c, 9);
    // 0ea6ea  push eax
    X86_AT(c, 0xea6eau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea6eb  call 0xe42d0
    X86_AT(c, 0xea6ebu);
    push32(c, 0xea6f0u); f_000e42d0(c); X86_RET(c, 0xea6f0u);
    X86_TICK(c, 23);
    // 0ea6f0  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea6f0u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea6f3  mov dword ptr [edx + 0xcdef7], eax
    X86_AT(c, 0xea6f3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEF7u)), c.r[0]);
    // 0ea6f9  add esp, 0x1c
    X86_AT(c, 0xea6f9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0ea6fc  push edi
    X86_AT(c, 0xea6fcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea6fd  push 0x4f
    X86_AT(c, 0xea6fdu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea6ff  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea6ffu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea702  push eax
    X86_AT(c, 0xea702u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea703  call 0x10078c
    X86_AT(c, 0xea703u);
    push32(c, 0xea708u); f_0010078c(c); X86_RET(c, 0xea708u);
    X86_TICK(c, 13);
    // 0ea708  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea708u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea70b  push eax
    X86_AT(c, 0xea70bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea70c  mov edx, eax
    X86_AT(c, 0xea70cu);
    c.r[2] = c.r[0];
    // 0ea70e  call 0xe9c2c
    X86_AT(c, 0xea70eu);
    push32(c, 0xea713u); f_000e9c2c(c); X86_RET(c, 0xea713u);
    X86_TICK(c, 9);
    // 0ea713  push eax
    X86_AT(c, 0xea713u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea714  call 0xe42d0
    X86_AT(c, 0xea714u);
    push32(c, 0xea719u); f_000e42d0(c); X86_RET(c, 0xea719u);
    X86_TICK(c, 30);
    // 0ea719  mov edx, esi
    X86_AT(c, 0xea719u);
    c.r[2] = c.r[6];
    // 0ea71b  lea ecx, [edx + edx*4]
    X86_AT(c, 0xea71bu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0ea71e  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xea71eu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0ea721  shl ecx, 5
    X86_AT(c, 0xea721u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0ea724  sub ecx, edx
    X86_AT(c, 0xea724u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0ea726  mov dword ptr [ecx + 0xcdefb], eax
    X86_AT(c, 0xea726u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDEFBu)), c.r[0]);
    // 0ea72c  push edi
    X86_AT(c, 0xea72cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea72d  push 0x4f
    X86_AT(c, 0xea72du);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea72f  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea72fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea732  push eax
    X86_AT(c, 0xea732u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea733  mov dword ptr [ebp - 0x60], ecx
    X86_AT(c, 0xea733u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)), c.r[1]);
    // 0ea736  call 0x10078c
    X86_AT(c, 0xea736u);
    push32(c, 0xea73bu); f_0010078c(c); X86_RET(c, 0xea73bu);
    X86_TICK(c, 13);
    // 0ea73b  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea73bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea73e  push eax
    X86_AT(c, 0xea73eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea73f  mov edx, eax
    X86_AT(c, 0xea73fu);
    c.r[2] = c.r[0];
    // 0ea741  call 0xe9c2c
    X86_AT(c, 0xea741u);
    push32(c, 0xea746u); f_000e9c2c(c); X86_RET(c, 0xea746u);
    X86_TICK(c, 9);
    // 0ea746  push eax
    X86_AT(c, 0xea746u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea747  call 0xe42d0
    X86_AT(c, 0xea747u);
    push32(c, 0xea74cu); f_000e42d0(c); X86_RET(c, 0xea74cu);
    X86_TICK(c, 21);
    // 0ea74c  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea74cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea74f  mov dword ptr [edx + 0xcdeff], eax
    X86_AT(c, 0xea74fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEFFu)), c.r[0]);
    // 0ea755  push edi
    X86_AT(c, 0xea755u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea756  push 0x4f
    X86_AT(c, 0xea756u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea758  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea758u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea75b  push eax
    X86_AT(c, 0xea75bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea75c  call 0x10078c
    X86_AT(c, 0xea75cu);
    push32(c, 0xea761u); f_0010078c(c); X86_RET(c, 0xea761u);
    X86_TICK(c, 13);
    // 0ea761  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea761u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea764  push eax
    X86_AT(c, 0xea764u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea765  mov edx, eax
    X86_AT(c, 0xea765u);
    c.r[2] = c.r[0];
    // 0ea767  call 0xe9c2c
    X86_AT(c, 0xea767u);
    push32(c, 0xea76cu); f_000e9c2c(c); X86_RET(c, 0xea76cu);
    X86_TICK(c, 9);
    // 0ea76c  push eax
    X86_AT(c, 0xea76cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea76d  call 0xe42d0
    X86_AT(c, 0xea76du);
    push32(c, 0xea772u); f_000e42d0(c); X86_RET(c, 0xea772u);
    X86_TICK(c, 23);
    // 0ea772  add esp, 0x3c
    X86_AT(c, 0xea772u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ea775  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea775u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea778  mov dword ptr [edx + 0xcdf03], eax
    X86_AT(c, 0xea778u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF03u)), c.r[0]);
    // 0ea77e  push edi
    X86_AT(c, 0xea77eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea77f  push 0x4f
    X86_AT(c, 0xea77fu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea781  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea781u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea784  push eax
    X86_AT(c, 0xea784u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea785  call 0x10078c
    X86_AT(c, 0xea785u);
    push32(c, 0xea78au); f_0010078c(c); X86_RET(c, 0xea78au);
    X86_TICK(c, 13);
    // 0ea78a  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea78au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea78d  push eax
    X86_AT(c, 0xea78du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea78e  mov edx, eax
    X86_AT(c, 0xea78eu);
    c.r[2] = c.r[0];
    // 0ea790  call 0xe9c2c
    X86_AT(c, 0xea790u);
    push32(c, 0xea795u); f_000e9c2c(c); X86_RET(c, 0xea795u);
    X86_TICK(c, 9);
    // 0ea795  push eax
    X86_AT(c, 0xea795u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea796  call 0xe42d0
    X86_AT(c, 0xea796u);
    push32(c, 0xea79bu); f_000e42d0(c); X86_RET(c, 0xea79bu);
    X86_TICK(c, 21);
    // 0ea79b  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea79bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea79e  mov dword ptr [edx + 0xcdf07], eax
    X86_AT(c, 0xea79eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF07u)), c.r[0]);
    // 0ea7a4  push edi
    X86_AT(c, 0xea7a4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea7a5  push 0x4f
    X86_AT(c, 0xea7a5u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea7a7  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea7a7u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea7aa  push eax
    X86_AT(c, 0xea7aau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea7ab  call 0x10078c
    X86_AT(c, 0xea7abu);
    push32(c, 0xea7b0u); f_0010078c(c); X86_RET(c, 0xea7b0u);
    X86_TICK(c, 13);
    // 0ea7b0  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea7b0u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea7b3  push eax
    X86_AT(c, 0xea7b3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea7b4  mov edx, eax
    X86_AT(c, 0xea7b4u);
    c.r[2] = c.r[0];
    // 0ea7b6  call 0xe9c2c
    X86_AT(c, 0xea7b6u);
    push32(c, 0xea7bbu); f_000e9c2c(c); X86_RET(c, 0xea7bbu);
    X86_TICK(c, 9);
    // 0ea7bb  push eax
    X86_AT(c, 0xea7bbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea7bc  call 0xe42d0
    X86_AT(c, 0xea7bcu);
    push32(c, 0xea7c1u); f_000e42d0(c); X86_RET(c, 0xea7c1u);
    X86_TICK(c, 21);
    // 0ea7c1  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea7c1u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea7c4  mov dword ptr [edx + 0xcdf0b], eax
    X86_AT(c, 0xea7c4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF0Bu)), c.r[0]);
    // 0ea7ca  push edi
    X86_AT(c, 0xea7cau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea7cb  push 0x4f
    X86_AT(c, 0xea7cbu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea7cd  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea7cdu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea7d0  push eax
    X86_AT(c, 0xea7d0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea7d1  call 0x10078c
    X86_AT(c, 0xea7d1u);
    push32(c, 0xea7d6u); f_0010078c(c); X86_RET(c, 0xea7d6u);
    X86_TICK(c, 13);
    // 0ea7d6  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea7d6u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea7d9  push eax
    X86_AT(c, 0xea7d9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea7da  mov edx, eax
    X86_AT(c, 0xea7dau);
    c.r[2] = c.r[0];
    // 0ea7dc  call 0xe9c2c
    X86_AT(c, 0xea7dcu);
    push32(c, 0xea7e1u); f_000e9c2c(c); X86_RET(c, 0xea7e1u);
    X86_TICK(c, 9);
    // 0ea7e1  push eax
    X86_AT(c, 0xea7e1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea7e2  call 0xe42d0
    X86_AT(c, 0xea7e2u);
    push32(c, 0xea7e7u); f_000e42d0(c); X86_RET(c, 0xea7e7u);
    X86_TICK(c, 23);
    // 0ea7e7  add esp, 0x3c
    X86_AT(c, 0xea7e7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ea7ea  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea7eau);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea7ed  mov dword ptr [edx + 0xcdf0f], eax
    X86_AT(c, 0xea7edu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF0Fu)), c.r[0]);
    // 0ea7f3  push edi
    X86_AT(c, 0xea7f3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea7f4  push 0x4f
    X86_AT(c, 0xea7f4u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea7f6  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea7f6u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea7f9  push eax
    X86_AT(c, 0xea7f9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea7fa  call 0x10078c
    X86_AT(c, 0xea7fau);
    push32(c, 0xea7ffu); f_0010078c(c); X86_RET(c, 0xea7ffu);
    X86_TICK(c, 13);
    // 0ea7ff  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea7ffu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea802  push eax
    X86_AT(c, 0xea802u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea803  mov edx, eax
    X86_AT(c, 0xea803u);
    c.r[2] = c.r[0];
    // 0ea805  call 0xe9c2c
    X86_AT(c, 0xea805u);
    push32(c, 0xea80au); f_000e9c2c(c); X86_RET(c, 0xea80au);
    X86_TICK(c, 9);
    // 0ea80a  push eax
    X86_AT(c, 0xea80au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea80b  call 0xe42d0
    X86_AT(c, 0xea80bu);
    push32(c, 0xea810u); f_000e42d0(c); X86_RET(c, 0xea810u);
    X86_TICK(c, 21);
    // 0ea810  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea810u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea813  mov dword ptr [edx + 0xcdf13], eax
    X86_AT(c, 0xea813u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF13u)), c.r[0]);
    // 0ea819  push edi
    X86_AT(c, 0xea819u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea81a  push 0x4f
    X86_AT(c, 0xea81au);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea81c  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea81cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea81f  push eax
    X86_AT(c, 0xea81fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea820  call 0x10078c
    X86_AT(c, 0xea820u);
    push32(c, 0xea825u); f_0010078c(c); X86_RET(c, 0xea825u);
    X86_TICK(c, 15);
    // 0ea825  add esp, 0x20
    X86_AT(c, 0xea825u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0ea828  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea828u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea82b  push eax
    X86_AT(c, 0xea82bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea82c  mov edx, eax
    X86_AT(c, 0xea82cu);
    c.r[2] = c.r[0];
    // 0ea82e  call 0xe9c2c
    X86_AT(c, 0xea82eu);
    push32(c, 0xea833u); f_000e9c2c(c); X86_RET(c, 0xea833u);
    X86_TICK(c, 9);
    // 0ea833  push eax
    X86_AT(c, 0xea833u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea834  call 0xe42d0
    X86_AT(c, 0xea834u);
    push32(c, 0xea839u); f_000e42d0(c); X86_RET(c, 0xea839u);
    X86_TICK(c, 32);
    // 0ea839  mov edx, 0xcde44
    X86_AT(c, 0xea839u);
    c.r[2] = 0xCDE44u;
    // 0ea83e  mov ecx, esi
    X86_AT(c, 0xea83eu);
    c.r[1] = c.r[6];
    // 0ea840  lea edx, [ecx + ecx*4]
    X86_AT(c, 0xea840u);
    c.r[2] = (uint32_t)(c.r[1] + c.r[1] * 4);
    // 0ea843  lea edx, [ecx + edx*2]
    X86_AT(c, 0xea843u);
    c.r[2] = (uint32_t)(c.r[1] + c.r[2] * 2);
    // 0ea846  shl edx, 5
    X86_AT(c, 0xea846u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ea849  sub edx, ecx
    X86_AT(c, 0xea849u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0ea84b  mov dword ptr [edx + 0xcdf17], eax
    X86_AT(c, 0xea84bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF17u)), c.r[0]);
    // 0ea851  push edi
    X86_AT(c, 0xea851u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea852  push 0x4f
    X86_AT(c, 0xea852u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea854  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea854u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea857  push eax
    X86_AT(c, 0xea857u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea858  mov dword ptr [ebp - 0x60], edx
    X86_AT(c, 0xea858u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)), c.r[2]);
    // 0ea85b  call 0x10078c
    X86_AT(c, 0xea85bu);
    push32(c, 0xea860u); f_0010078c(c); X86_RET(c, 0xea860u);
    X86_TICK(c, 13);
    // 0ea860  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea860u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea863  push eax
    X86_AT(c, 0xea863u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea864  mov edx, eax
    X86_AT(c, 0xea864u);
    c.r[2] = c.r[0];
    // 0ea866  call 0xe9c2c
    X86_AT(c, 0xea866u);
    push32(c, 0xea86bu); f_000e9c2c(c); X86_RET(c, 0xea86bu);
    X86_TICK(c, 9);
    // 0ea86b  push eax
    X86_AT(c, 0xea86bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea86c  call 0xe42d0
    X86_AT(c, 0xea86cu);
    push32(c, 0xea871u); f_000e42d0(c); X86_RET(c, 0xea871u);
    X86_TICK(c, 21);
    // 0ea871  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea871u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea874  mov dword ptr [edx + 0xcdf1b], eax
    X86_AT(c, 0xea874u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF1Bu)), c.r[0]);
    // 0ea87a  push edi
    X86_AT(c, 0xea87au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea87b  push 0x4f
    X86_AT(c, 0xea87bu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea87d  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea87du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea880  push eax
    X86_AT(c, 0xea880u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea881  call 0x10078c
    X86_AT(c, 0xea881u);
    push32(c, 0xea886u); f_0010078c(c); X86_RET(c, 0xea886u);
    X86_TICK(c, 13);
    // 0ea886  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea886u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea889  push eax
    X86_AT(c, 0xea889u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea88a  mov edx, eax
    X86_AT(c, 0xea88au);
    c.r[2] = c.r[0];
    // 0ea88c  call 0xe9c2c
    X86_AT(c, 0xea88cu);
    push32(c, 0xea891u); f_000e9c2c(c); X86_RET(c, 0xea891u);
    X86_TICK(c, 9);
    // 0ea891  push eax
    X86_AT(c, 0xea891u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea892  call 0xe42d0
    X86_AT(c, 0xea892u);
    push32(c, 0xea897u); f_000e42d0(c); X86_RET(c, 0xea897u);
    X86_TICK(c, 21);
    // 0ea897  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea897u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea89a  mov dword ptr [edx + 0xcdf1f], eax
    X86_AT(c, 0xea89au);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF1Fu)), c.r[0]);
    // 0ea8a0  push edi
    X86_AT(c, 0xea8a0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea8a1  push 0x4f
    X86_AT(c, 0xea8a1u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea8a3  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea8a3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea8a6  push eax
    X86_AT(c, 0xea8a6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea8a7  call 0x10078c
    X86_AT(c, 0xea8a7u);
    push32(c, 0xea8acu); f_0010078c(c); X86_RET(c, 0xea8acu);
    X86_TICK(c, 15);
    // 0ea8ac  add esp, 0x3c
    X86_AT(c, 0xea8acu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ea8af  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea8afu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea8b2  push eax
    X86_AT(c, 0xea8b2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea8b3  mov edx, eax
    X86_AT(c, 0xea8b3u);
    c.r[2] = c.r[0];
    // 0ea8b5  call 0xe9c2c
    X86_AT(c, 0xea8b5u);
    push32(c, 0xea8bau); f_000e9c2c(c); X86_RET(c, 0xea8bau);
    X86_TICK(c, 9);
    // 0ea8ba  push eax
    X86_AT(c, 0xea8bau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea8bb  call 0xe42d0
    X86_AT(c, 0xea8bbu);
    push32(c, 0xea8c0u); f_000e42d0(c); X86_RET(c, 0xea8c0u);
    X86_TICK(c, 21);
    // 0ea8c0  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea8c0u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea8c3  mov dword ptr [edx + 0xcdf23], eax
    X86_AT(c, 0xea8c3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF23u)), c.r[0]);
    // 0ea8c9  push edi
    X86_AT(c, 0xea8c9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea8ca  push 0x4f
    X86_AT(c, 0xea8cau);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea8cc  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea8ccu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea8cf  push eax
    X86_AT(c, 0xea8cfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea8d0  call 0x10078c
    X86_AT(c, 0xea8d0u);
    push32(c, 0xea8d5u); f_0010078c(c); X86_RET(c, 0xea8d5u);
    X86_TICK(c, 13);
    // 0ea8d5  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea8d5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea8d8  push eax
    X86_AT(c, 0xea8d8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea8d9  mov edx, eax
    X86_AT(c, 0xea8d9u);
    c.r[2] = c.r[0];
    // 0ea8db  call 0xe9c2c
    X86_AT(c, 0xea8dbu);
    push32(c, 0xea8e0u); f_000e9c2c(c); X86_RET(c, 0xea8e0u);
    X86_TICK(c, 9);
    // 0ea8e0  push eax
    X86_AT(c, 0xea8e0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea8e1  call 0xe42d0
    X86_AT(c, 0xea8e1u);
    push32(c, 0xea8e6u); f_000e42d0(c); X86_RET(c, 0xea8e6u);
    X86_TICK(c, 21);
    // 0ea8e6  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea8e6u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea8e9  mov dword ptr [edx + 0xcdf27], eax
    X86_AT(c, 0xea8e9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF27u)), c.r[0]);
    // 0ea8ef  push edi
    X86_AT(c, 0xea8efu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea8f0  push 0x4f
    X86_AT(c, 0xea8f0u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea8f2  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea8f2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea8f5  push eax
    X86_AT(c, 0xea8f5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea8f6  call 0x10078c
    X86_AT(c, 0xea8f6u);
    push32(c, 0xea8fbu); f_0010078c(c); X86_RET(c, 0xea8fbu);
    X86_TICK(c, 13);
    // 0ea8fb  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea8fbu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea8fe  push eax
    X86_AT(c, 0xea8feu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea8ff  mov edx, eax
    X86_AT(c, 0xea8ffu);
    c.r[2] = c.r[0];
    // 0ea901  call 0xe9c2c
    X86_AT(c, 0xea901u);
    push32(c, 0xea906u); f_000e9c2c(c); X86_RET(c, 0xea906u);
    X86_TICK(c, 9);
    // 0ea906  push eax
    X86_AT(c, 0xea906u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea907  call 0xe42d0
    X86_AT(c, 0xea907u);
    push32(c, 0xea90cu); f_000e42d0(c); X86_RET(c, 0xea90cu);
    X86_TICK(c, 21);
    // 0ea90c  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea90cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea90f  mov dword ptr [edx + 0xcdf2b], eax
    X86_AT(c, 0xea90fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF2Bu)), c.r[0]);
    // 0ea915  push edi
    X86_AT(c, 0xea915u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea916  push 0x4f
    X86_AT(c, 0xea916u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea918  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea918u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea91b  push eax
    X86_AT(c, 0xea91bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea91c  call 0x10078c
    X86_AT(c, 0xea91cu);
    push32(c, 0xea921u); f_0010078c(c); X86_RET(c, 0xea921u);
    X86_TICK(c, 15);
    // 0ea921  add esp, 0x3c
    X86_AT(c, 0xea921u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ea924  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea924u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea927  push eax
    X86_AT(c, 0xea927u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea928  mov edx, eax
    X86_AT(c, 0xea928u);
    c.r[2] = c.r[0];
    // 0ea92a  call 0xe9c2c
    X86_AT(c, 0xea92au);
    push32(c, 0xea92fu); f_000e9c2c(c); X86_RET(c, 0xea92fu);
    X86_TICK(c, 9);
    // 0ea92f  push eax
    X86_AT(c, 0xea92fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea930  call 0xe42d0
    X86_AT(c, 0xea930u);
    push32(c, 0xea935u); f_000e42d0(c); X86_RET(c, 0xea935u);
    X86_TICK(c, 21);
    // 0ea935  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea935u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea938  mov dword ptr [edx + 0xcdf2f], eax
    X86_AT(c, 0xea938u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF2Fu)), c.r[0]);
    // 0ea93e  push edi
    X86_AT(c, 0xea93eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea93f  push 0x4f
    X86_AT(c, 0xea93fu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea941  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea941u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea944  push eax
    X86_AT(c, 0xea944u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea945  call 0x10078c
    X86_AT(c, 0xea945u);
    push32(c, 0xea94au); f_0010078c(c); X86_RET(c, 0xea94au);
    X86_TICK(c, 11);
    // 0ea94a  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea94au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea94d  push eax
    X86_AT(c, 0xea94du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea94e  call 0xe9c2c
    X86_AT(c, 0xea94eu);
    push32(c, 0xea953u); f_000e9c2c(c); X86_RET(c, 0xea953u);
    X86_TICK(c, 9);
    // 0ea953  push eax
    X86_AT(c, 0xea953u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea954  call 0xe42d0
    X86_AT(c, 0xea954u);
    push32(c, 0xea959u); f_000e42d0(c); X86_RET(c, 0xea959u);
    X86_TICK(c, 23);
    // 0ea959  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea959u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea95c  mov dword ptr [edx + 0xcdf33], eax
    X86_AT(c, 0xea95cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF33u)), c.r[0]);
    // 0ea962  add esp, 0x1c
    X86_AT(c, 0xea962u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0ea965  push edi
    X86_AT(c, 0xea965u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea966  push 0x4f
    X86_AT(c, 0xea966u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea968  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea968u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea96b  push eax
    X86_AT(c, 0xea96bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea96c  call 0x10078c
    X86_AT(c, 0xea96cu);
    push32(c, 0xea971u); f_0010078c(c); X86_RET(c, 0xea971u);
    X86_TICK(c, 13);
    // 0ea971  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea971u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea974  push eax
    X86_AT(c, 0xea974u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea975  mov edx, eax
    X86_AT(c, 0xea975u);
    c.r[2] = c.r[0];
    // 0ea977  call 0xe9c2c
    X86_AT(c, 0xea977u);
    push32(c, 0xea97cu); f_000e9c2c(c); X86_RET(c, 0xea97cu);
    X86_TICK(c, 9);
    // 0ea97c  push eax
    X86_AT(c, 0xea97cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea97d  call 0xe42d0
    X86_AT(c, 0xea97du);
    push32(c, 0xea982u); f_000e42d0(c); X86_RET(c, 0xea982u);
    X86_TICK(c, 30);
    // 0ea982  mov edx, esi
    X86_AT(c, 0xea982u);
    c.r[2] = c.r[6];
    // 0ea984  lea ecx, [edx + edx*4]
    X86_AT(c, 0xea984u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0ea987  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xea987u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0ea98a  shl ecx, 5
    X86_AT(c, 0xea98au);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0ea98d  sub ecx, edx
    X86_AT(c, 0xea98du);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0ea98f  mov dword ptr [ecx + 0xcdf37], eax
    X86_AT(c, 0xea98fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDF37u)), c.r[0]);
    // 0ea995  push edi
    X86_AT(c, 0xea995u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea996  push 0x4f
    X86_AT(c, 0xea996u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea998  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea998u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea99b  push eax
    X86_AT(c, 0xea99bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea99c  mov dword ptr [ebp - 0x60], ecx
    X86_AT(c, 0xea99cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)), c.r[1]);
    // 0ea99f  call 0x10078c
    X86_AT(c, 0xea99fu);
    push32(c, 0xea9a4u); f_0010078c(c); X86_RET(c, 0xea9a4u);
    X86_TICK(c, 13);
    // 0ea9a4  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea9a4u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea9a7  push eax
    X86_AT(c, 0xea9a7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea9a8  mov edx, eax
    X86_AT(c, 0xea9a8u);
    c.r[2] = c.r[0];
    // 0ea9aa  call 0xe9c2c
    X86_AT(c, 0xea9aau);
    push32(c, 0xea9afu); f_000e9c2c(c); X86_RET(c, 0xea9afu);
    X86_TICK(c, 9);
    // 0ea9af  push eax
    X86_AT(c, 0xea9afu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea9b0  call 0xe42d0
    X86_AT(c, 0xea9b0u);
    push32(c, 0xea9b5u); f_000e42d0(c); X86_RET(c, 0xea9b5u);
    X86_TICK(c, 21);
    // 0ea9b5  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea9b5u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea9b8  mov dword ptr [edx + 0xcdf3b], eax
    X86_AT(c, 0xea9b8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF3Bu)), c.r[0]);
    // 0ea9be  push edi
    X86_AT(c, 0xea9beu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea9bf  push 0x4f
    X86_AT(c, 0xea9bfu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea9c1  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea9c1u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea9c4  push eax
    X86_AT(c, 0xea9c4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea9c5  call 0x10078c
    X86_AT(c, 0xea9c5u);
    push32(c, 0xea9cau); f_0010078c(c); X86_RET(c, 0xea9cau);
    X86_TICK(c, 13);
    // 0ea9ca  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea9cau);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea9cd  push eax
    X86_AT(c, 0xea9cdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea9ce  mov edx, eax
    X86_AT(c, 0xea9ceu);
    c.r[2] = c.r[0];
    // 0ea9d0  call 0xe9c2c
    X86_AT(c, 0xea9d0u);
    push32(c, 0xea9d5u); f_000e9c2c(c); X86_RET(c, 0xea9d5u);
    X86_TICK(c, 9);
    // 0ea9d5  push eax
    X86_AT(c, 0xea9d5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea9d6  call 0xe42d0
    X86_AT(c, 0xea9d6u);
    push32(c, 0xea9dbu); f_000e42d0(c); X86_RET(c, 0xea9dbu);
    X86_TICK(c, 23);
    // 0ea9db  add esp, 0x3c
    X86_AT(c, 0xea9dbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ea9de  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xea9deu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ea9e1  mov dword ptr [edx + 0xcdf3f], eax
    X86_AT(c, 0xea9e1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF3Fu)), c.r[0]);
    // 0ea9e7  push edi
    X86_AT(c, 0xea9e7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea9e8  push 0x4f
    X86_AT(c, 0xea9e8u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ea9ea  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea9eau);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea9ed  push eax
    X86_AT(c, 0xea9edu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea9ee  call 0x10078c
    X86_AT(c, 0xea9eeu);
    push32(c, 0xea9f3u); f_0010078c(c); X86_RET(c, 0xea9f3u);
    X86_TICK(c, 13);
    // 0ea9f3  lea eax, [ebp - 0x50]
    X86_AT(c, 0xea9f3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ea9f6  push eax
    X86_AT(c, 0xea9f6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea9f7  mov edx, eax
    X86_AT(c, 0xea9f7u);
    c.r[2] = c.r[0];
    // 0ea9f9  call 0xe9c2c
    X86_AT(c, 0xea9f9u);
    push32(c, 0xea9feu); f_000e9c2c(c); X86_RET(c, 0xea9feu);
    X86_TICK(c, 9);
    // 0ea9fe  push eax
    X86_AT(c, 0xea9feu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea9ff  call 0xe42d0
    X86_AT(c, 0xea9ffu);
    push32(c, 0xeaa04u); f_000e42d0(c); X86_RET(c, 0xeaa04u);
    X86_TICK(c, 21);
    // 0eaa04  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xeaa04u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0eaa07  mov dword ptr [edx + 0xcdf43], eax
    X86_AT(c, 0xeaa07u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF43u)), c.r[0]);
    // 0eaa0d  push edi
    X86_AT(c, 0xeaa0du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eaa0e  push 0x4f
    X86_AT(c, 0xeaa0eu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0eaa10  lea eax, [ebp - 0x50]
    X86_AT(c, 0xeaa10u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eaa13  push eax
    X86_AT(c, 0xeaa13u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eaa14  call 0x10078c
    X86_AT(c, 0xeaa14u);
    push32(c, 0xeaa19u); f_0010078c(c); X86_RET(c, 0xeaa19u);
    X86_TICK(c, 13);
    // 0eaa19  lea eax, [ebp - 0x50]
    X86_AT(c, 0xeaa19u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eaa1c  push eax
    X86_AT(c, 0xeaa1cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eaa1d  mov edx, eax
    X86_AT(c, 0xeaa1du);
    c.r[2] = c.r[0];
    // 0eaa1f  call 0xe9c2c
    X86_AT(c, 0xeaa1fu);
    push32(c, 0xeaa24u); f_000e9c2c(c); X86_RET(c, 0xeaa24u);
    X86_TICK(c, 9);
    // 0eaa24  push eax
    X86_AT(c, 0xeaa24u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eaa25  call 0xe42d0
    X86_AT(c, 0xeaa25u);
    push32(c, 0xeaa2au); f_000e42d0(c); X86_RET(c, 0xeaa2au);
    X86_TICK(c, 21);
    // 0eaa2a  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xeaa2au);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0eaa2d  mov dword ptr [edx + 0xcdf47], eax
    X86_AT(c, 0xeaa2du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF47u)), c.r[0]);
    // 0eaa33  push edi
    X86_AT(c, 0xeaa33u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eaa34  push 0x4f
    X86_AT(c, 0xeaa34u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0eaa36  lea eax, [ebp - 0x50]
    X86_AT(c, 0xeaa36u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eaa39  push eax
    X86_AT(c, 0xeaa39u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eaa3a  call 0x10078c
    X86_AT(c, 0xeaa3au);
    push32(c, 0xeaa3fu); f_0010078c(c); X86_RET(c, 0xeaa3fu);
    X86_TICK(c, 13);
    // 0eaa3f  lea eax, [ebp - 0x50]
    X86_AT(c, 0xeaa3fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eaa42  push eax
    X86_AT(c, 0xeaa42u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eaa43  mov edx, eax
    X86_AT(c, 0xeaa43u);
    c.r[2] = c.r[0];
    // 0eaa45  call 0xe9c2c
    X86_AT(c, 0xeaa45u);
    push32(c, 0xeaa4au); f_000e9c2c(c); X86_RET(c, 0xeaa4au);
    X86_TICK(c, 9);
    // 0eaa4a  push eax
    X86_AT(c, 0xeaa4au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eaa4b  call 0xe42d0
    X86_AT(c, 0xeaa4bu);
    push32(c, 0xeaa50u); f_000e42d0(c); X86_RET(c, 0xeaa50u);
    X86_TICK(c, 23);
    // 0eaa50  add esp, 0x3c
    X86_AT(c, 0xeaa50u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0eaa53  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xeaa53u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0eaa56  mov dword ptr [edx + 0xcdf4b], eax
    X86_AT(c, 0xeaa56u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF4Bu)), c.r[0]);
    // 0eaa5c  push edi
    X86_AT(c, 0xeaa5cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eaa5d  push 0x4f
    X86_AT(c, 0xeaa5du);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0eaa5f  lea eax, [ebp - 0x50]
    X86_AT(c, 0xeaa5fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eaa62  push eax
    X86_AT(c, 0xeaa62u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eaa63  call 0x10078c
    X86_AT(c, 0xeaa63u);
    push32(c, 0xeaa68u); f_0010078c(c); X86_RET(c, 0xeaa68u);
    X86_TICK(c, 13);
    // 0eaa68  lea eax, [ebp - 0x50]
    X86_AT(c, 0xeaa68u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eaa6b  push eax
    X86_AT(c, 0xeaa6bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eaa6c  mov edx, eax
    X86_AT(c, 0xeaa6cu);
    c.r[2] = c.r[0];
    // 0eaa6e  call 0xe9c2c
    X86_AT(c, 0xeaa6eu);
    push32(c, 0xeaa73u); f_000e9c2c(c); X86_RET(c, 0xeaa73u);
    X86_TICK(c, 9);
    // 0eaa73  push eax
    X86_AT(c, 0xeaa73u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eaa74  call 0xe42d0
    X86_AT(c, 0xeaa74u);
    push32(c, 0xeaa79u); f_000e42d0(c); X86_RET(c, 0xeaa79u);
    X86_TICK(c, 21);
    // 0eaa79  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xeaa79u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0eaa7c  mov dword ptr [edx + 0xcdf53], eax
    X86_AT(c, 0xeaa7cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF53u)), c.r[0]);
    // 0eaa82  push edi
    X86_AT(c, 0xeaa82u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eaa83  push 0x4f
    X86_AT(c, 0xeaa83u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0eaa85  lea eax, [ebp - 0x50]
    X86_AT(c, 0xeaa85u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eaa88  push eax
    X86_AT(c, 0xeaa88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eaa89  call 0x10078c
    X86_AT(c, 0xeaa89u);
    push32(c, 0xeaa8eu); f_0010078c(c); X86_RET(c, 0xeaa8eu);
    X86_TICK(c, 15);
    // 0eaa8e  add esp, 0x20
    X86_AT(c, 0xeaa8eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0eaa91  lea eax, [ebp - 0x50]
    X86_AT(c, 0xeaa91u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eaa94  push eax
    X86_AT(c, 0xeaa94u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eaa95  mov edx, eax
    X86_AT(c, 0xeaa95u);
    c.r[2] = c.r[0];
    // 0eaa97  call 0xe9c2c
    X86_AT(c, 0xeaa97u);
    push32(c, 0xeaa9cu); f_000e9c2c(c); X86_RET(c, 0xeaa9cu);
    X86_TICK(c, 9);
    // 0eaa9c  push eax
    X86_AT(c, 0xeaa9cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eaa9d  call 0xe42d0
    X86_AT(c, 0xeaa9du);
    push32(c, 0xeaaa2u); f_000e42d0(c); X86_RET(c, 0xeaaa2u);
    X86_TICK(c, 32);
    // 0eaaa2  mov edx, 0xcde44
    X86_AT(c, 0xeaaa2u);
    c.r[2] = 0xCDE44u;
    // 0eaaa7  mov ecx, esi
    X86_AT(c, 0xeaaa7u);
    c.r[1] = c.r[6];
    // 0eaaa9  lea edx, [ecx + ecx*4]
    X86_AT(c, 0xeaaa9u);
    c.r[2] = (uint32_t)(c.r[1] + c.r[1] * 4);
    // 0eaaac  lea edx, [ecx + edx*2]
    X86_AT(c, 0xeaaacu);
    c.r[2] = (uint32_t)(c.r[1] + c.r[2] * 2);
    // 0eaaaf  shl edx, 5
    X86_AT(c, 0xeaaafu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0eaab2  sub edx, ecx
    X86_AT(c, 0xeaab2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0eaab4  mov dword ptr [edx + 0xcdf57], eax
    X86_AT(c, 0xeaab4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u)), c.r[0]);
    // 0eaaba  push edi
    X86_AT(c, 0xeaabau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eaabb  push 0x4f
    X86_AT(c, 0xeaabbu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0eaabd  lea eax, [ebp - 0x50]
    X86_AT(c, 0xeaabdu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eaac0  push eax
    X86_AT(c, 0xeaac0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eaac1  mov dword ptr [ebp - 0x60], edx
    X86_AT(c, 0xeaac1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)), c.r[2]);
    // 0eaac4  call 0x10078c
    X86_AT(c, 0xeaac4u);
    push32(c, 0xeaac9u); f_0010078c(c); X86_RET(c, 0xeaac9u);
    X86_TICK(c, 13);
    // 0eaac9  lea eax, [ebp - 0x50]
    X86_AT(c, 0xeaac9u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eaacc  push eax
    X86_AT(c, 0xeaaccu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eaacd  mov edx, eax
    X86_AT(c, 0xeaacdu);
    c.r[2] = c.r[0];
    // 0eaacf  call 0xe9c2c
    X86_AT(c, 0xeaacfu);
    push32(c, 0xeaad4u); f_000e9c2c(c); X86_RET(c, 0xeaad4u);
    X86_TICK(c, 9);
    // 0eaad4  push eax
    X86_AT(c, 0xeaad4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eaad5  call 0xe42d0
    X86_AT(c, 0xeaad5u);
    push32(c, 0xeaadau); f_000e42d0(c); X86_RET(c, 0xeaadau);
    X86_TICK(c, 21);
    // 0eaada  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xeaadau);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0eaadd  mov dword ptr [edx + 0xcdf5b], eax
    X86_AT(c, 0xeaaddu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF5Bu)), c.r[0]);
    // 0eaae3  push edi
    X86_AT(c, 0xeaae3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eaae4  push 0x4f
    X86_AT(c, 0xeaae4u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0eaae6  lea eax, [ebp - 0x50]
    X86_AT(c, 0xeaae6u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eaae9  push eax
    X86_AT(c, 0xeaae9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eaaea  call 0x10078c
    X86_AT(c, 0xeaaeau);
    push32(c, 0xeaaefu); f_0010078c(c); X86_RET(c, 0xeaaefu);
    X86_TICK(c, 13);
    // 0eaaef  lea eax, [ebp - 0x50]
    X86_AT(c, 0xeaaefu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eaaf2  push eax
    X86_AT(c, 0xeaaf2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eaaf3  mov edx, eax
    X86_AT(c, 0xeaaf3u);
    c.r[2] = c.r[0];
    // 0eaaf5  call 0xe9c2c
    X86_AT(c, 0xeaaf5u);
    push32(c, 0xeaafau); f_000e9c2c(c); X86_RET(c, 0xeaafau);
    X86_TICK(c, 9);
    // 0eaafa  push eax
    X86_AT(c, 0xeaafau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eaafb  call 0xe42d0
    X86_AT(c, 0xeaafbu);
    push32(c, 0xeab00u); f_000e42d0(c); X86_RET(c, 0xeab00u);
    X86_TICK(c, 21);
    // 0eab00  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xeab00u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0eab03  mov dword ptr [edx + 0xcdf5f], eax
    X86_AT(c, 0xeab03u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF5Fu)), c.r[0]);
    // 0eab09  push edi
    X86_AT(c, 0xeab09u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eab0a  push 0x4f
    X86_AT(c, 0xeab0au);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0eab0c  lea eax, [ebp - 0x50]
    X86_AT(c, 0xeab0cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eab0f  push eax
    X86_AT(c, 0xeab0fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eab10  call 0x10078c
    X86_AT(c, 0xeab10u);
    push32(c, 0xeab15u); f_0010078c(c); X86_RET(c, 0xeab15u);
    X86_TICK(c, 15);
    // 0eab15  add esp, 0x3c
    X86_AT(c, 0xeab15u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0eab18  lea eax, [ebp - 0x50]
    X86_AT(c, 0xeab18u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eab1b  push eax
    X86_AT(c, 0xeab1bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eab1c  mov edx, eax
    X86_AT(c, 0xeab1cu);
    c.r[2] = c.r[0];
    // 0eab1e  call 0xe9c2c
    X86_AT(c, 0xeab1eu);
    push32(c, 0xeab23u); f_000e9c2c(c); X86_RET(c, 0xeab23u);
    X86_TICK(c, 9);
    // 0eab23  push eax
    X86_AT(c, 0xeab23u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eab24  call 0xe42d0
    X86_AT(c, 0xeab24u);
    push32(c, 0xeab29u); f_000e42d0(c); X86_RET(c, 0xeab29u);
    X86_TICK(c, 21);
    // 0eab29  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xeab29u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0eab2c  mov dword ptr [edx + 0xcdf63], eax
    X86_AT(c, 0xeab2cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF63u)), c.r[0]);
    // 0eab32  push edi
    X86_AT(c, 0xeab32u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eab33  push 0x4f
    X86_AT(c, 0xeab33u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0eab35  lea eax, [ebp - 0x50]
    X86_AT(c, 0xeab35u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eab38  push eax
    X86_AT(c, 0xeab38u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eab39  call 0x10078c
    X86_AT(c, 0xeab39u);
    push32(c, 0xeab3eu); f_0010078c(c); X86_RET(c, 0xeab3eu);
    X86_TICK(c, 13);
    // 0eab3e  lea eax, [ebp - 0x50]
    X86_AT(c, 0xeab3eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eab41  push eax
    X86_AT(c, 0xeab41u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eab42  mov edx, eax
    X86_AT(c, 0xeab42u);
    c.r[2] = c.r[0];
    // 0eab44  call 0xe9c2c
    X86_AT(c, 0xeab44u);
    push32(c, 0xeab49u); f_000e9c2c(c); X86_RET(c, 0xeab49u);
    X86_TICK(c, 9);
    // 0eab49  push eax
    X86_AT(c, 0xeab49u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eab4a  call 0xe42d0
    X86_AT(c, 0xeab4au);
    push32(c, 0xeab4fu); f_000e42d0(c); X86_RET(c, 0xeab4fu);
    X86_TICK(c, 21);
    // 0eab4f  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xeab4fu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0eab52  mov dword ptr [edx + 0xcdf67], eax
    X86_AT(c, 0xeab52u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF67u)), c.r[0]);
    // 0eab58  push edi
    X86_AT(c, 0xeab58u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eab59  push 0x4f
    X86_AT(c, 0xeab59u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0eab5b  lea eax, [ebp - 0x50]
    X86_AT(c, 0xeab5bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eab5e  push eax
    X86_AT(c, 0xeab5eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eab5f  call 0x10078c
    X86_AT(c, 0xeab5fu);
    push32(c, 0xeab64u); f_0010078c(c); X86_RET(c, 0xeab64u);
    X86_TICK(c, 13);
    // 0eab64  lea eax, [ebp - 0x50]
    X86_AT(c, 0xeab64u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eab67  push eax
    X86_AT(c, 0xeab67u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eab68  mov edx, eax
    X86_AT(c, 0xeab68u);
    c.r[2] = c.r[0];
    // 0eab6a  call 0xe9c2c
    X86_AT(c, 0xeab6au);
    push32(c, 0xeab6fu); f_000e9c2c(c); X86_RET(c, 0xeab6fu);
    X86_TICK(c, 9);
    // 0eab6f  push eax
    X86_AT(c, 0xeab6fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eab70  call 0xe42d0
    X86_AT(c, 0xeab70u);
    push32(c, 0xeab75u); f_000e42d0(c); X86_RET(c, 0xeab75u);
    X86_TICK(c, 21);
    // 0eab75  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xeab75u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0eab78  mov dword ptr [edx + 0xcdf6b], eax
    X86_AT(c, 0xeab78u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)), c.r[0]);
    // 0eab7e  push edi
    X86_AT(c, 0xeab7eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eab7f  push 0x4f
    X86_AT(c, 0xeab7fu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0eab81  lea eax, [ebp - 0x50]
    X86_AT(c, 0xeab81u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eab84  push eax
    X86_AT(c, 0xeab84u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eab85  call 0x10078c
    X86_AT(c, 0xeab85u);
    push32(c, 0xeab8au); f_0010078c(c); X86_RET(c, 0xeab8au);
    X86_TICK(c, 15);
    // 0eab8a  add esp, 0x3c
    X86_AT(c, 0xeab8au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0eab8d  lea eax, [ebp - 0x50]
    X86_AT(c, 0xeab8du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eab90  push eax
    X86_AT(c, 0xeab90u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eab91  mov edx, eax
    X86_AT(c, 0xeab91u);
    c.r[2] = c.r[0];
    // 0eab93  call 0xe9c2c
    X86_AT(c, 0xeab93u);
    push32(c, 0xeab98u); f_000e9c2c(c); X86_RET(c, 0xeab98u);
    X86_TICK(c, 9);
    // 0eab98  push eax
    X86_AT(c, 0xeab98u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eab99  call 0xe42d0
    X86_AT(c, 0xeab99u);
    push32(c, 0xeab9eu); f_000e42d0(c); X86_RET(c, 0xeab9eu);
    X86_TICK(c, 21);
    // 0eab9e  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xeab9eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0eaba1  mov dword ptr [edx + 0xcdf6f], eax
    X86_AT(c, 0xeaba1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)), c.r[0]);
    // 0eaba7  push edi
    X86_AT(c, 0xeaba7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eaba8  push 0x4f
    X86_AT(c, 0xeaba8u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0eabaa  lea eax, [ebp - 0x50]
    X86_AT(c, 0xeabaau);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eabad  push eax
    X86_AT(c, 0xeabadu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eabae  call 0x10078c
    X86_AT(c, 0xeabaeu);
    push32(c, 0xeabb3u); f_0010078c(c); X86_RET(c, 0xeabb3u);
    X86_TICK(c, 11);
    // 0eabb3  lea eax, [ebp - 0x50]
    X86_AT(c, 0xeabb3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eabb6  push eax
    X86_AT(c, 0xeabb6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eabb7  call 0xe9c2c
    X86_AT(c, 0xeabb7u);
    push32(c, 0xeabbcu); f_000e9c2c(c); X86_RET(c, 0xeabbcu);
    X86_TICK(c, 9);
    // 0eabbc  push eax
    X86_AT(c, 0xeabbcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eabbd  call 0xe42d0
    X86_AT(c, 0xeabbdu);
    push32(c, 0xeabc2u); f_000e42d0(c); X86_RET(c, 0xeabc2u);
    X86_TICK(c, 23);
    // 0eabc2  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xeabc2u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0eabc5  mov dword ptr [edx + 0xcdf73], eax
    X86_AT(c, 0xeabc5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF73u)), c.r[0]);
    // 0eabcb  add esp, 0x1c
    X86_AT(c, 0xeabcbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0eabce  push edi
    X86_AT(c, 0xeabceu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eabcf  push 0x4f
    X86_AT(c, 0xeabcfu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0eabd1  lea eax, [ebp - 0x50]
    X86_AT(c, 0xeabd1u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eabd4  push eax
    X86_AT(c, 0xeabd4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eabd5  call 0x10078c
    X86_AT(c, 0xeabd5u);
    push32(c, 0xeabdau); f_0010078c(c); X86_RET(c, 0xeabdau);
    X86_TICK(c, 13);
    // 0eabda  lea eax, [ebp - 0x50]
    X86_AT(c, 0xeabdau);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eabdd  push eax
    X86_AT(c, 0xeabddu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eabde  mov edx, eax
    X86_AT(c, 0xeabdeu);
    c.r[2] = c.r[0];
    // 0eabe0  call 0xe9c2c
    X86_AT(c, 0xeabe0u);
    push32(c, 0xeabe5u); f_000e9c2c(c); X86_RET(c, 0xeabe5u);
    X86_TICK(c, 9);
    // 0eabe5  push eax
    X86_AT(c, 0xeabe5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eabe6  call 0xe42d0
    X86_AT(c, 0xeabe6u);
    push32(c, 0xeabebu); f_000e42d0(c); X86_RET(c, 0xeabebu);
    X86_TICK(c, 30);
    // 0eabeb  mov edx, esi
    X86_AT(c, 0xeabebu);
    c.r[2] = c.r[6];
    // 0eabed  lea ecx, [edx + edx*4]
    X86_AT(c, 0xeabedu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0eabf0  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xeabf0u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0eabf3  shl ecx, 5
    X86_AT(c, 0xeabf3u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0eabf6  sub ecx, edx
    X86_AT(c, 0xeabf6u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0eabf8  mov dword ptr [ecx + 0xcdf77], eax
    X86_AT(c, 0xeabf8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDF77u)), c.r[0]);
    // 0eabfe  push edi
    X86_AT(c, 0xeabfeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eabff  push 0x4f
    X86_AT(c, 0xeabffu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0eac01  lea eax, [ebp - 0x50]
    X86_AT(c, 0xeac01u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eac04  push eax
    X86_AT(c, 0xeac04u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eac05  mov dword ptr [ebp - 0x60], ecx
    X86_AT(c, 0xeac05u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)), c.r[1]);
    // 0eac08  call 0x10078c
    X86_AT(c, 0xeac08u);
    push32(c, 0xeac0du); f_0010078c(c); X86_RET(c, 0xeac0du);
    X86_TICK(c, 13);
    // 0eac0d  lea eax, [ebp - 0x50]
    X86_AT(c, 0xeac0du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eac10  push eax
    X86_AT(c, 0xeac10u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eac11  mov edx, eax
    X86_AT(c, 0xeac11u);
    c.r[2] = c.r[0];
    // 0eac13  call 0xe9c2c
    X86_AT(c, 0xeac13u);
    push32(c, 0xeac18u); f_000e9c2c(c); X86_RET(c, 0xeac18u);
    X86_TICK(c, 9);
    // 0eac18  push eax
    X86_AT(c, 0xeac18u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eac19  call 0xe42d0
    X86_AT(c, 0xeac19u);
    push32(c, 0xeac1eu); f_000e42d0(c); X86_RET(c, 0xeac1eu);
    X86_TICK(c, 21);
    // 0eac1e  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xeac1eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0eac21  mov dword ptr [edx + 0xcdf7b], eax
    X86_AT(c, 0xeac21u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF7Bu)), c.r[0]);
    // 0eac27  push edi
    X86_AT(c, 0xeac27u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eac28  push 0x4f
    X86_AT(c, 0xeac28u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0eac2a  lea eax, [ebp - 0x50]
    X86_AT(c, 0xeac2au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eac2d  push eax
    X86_AT(c, 0xeac2du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eac2e  call 0x10078c
    X86_AT(c, 0xeac2eu);
    push32(c, 0xeac33u); f_0010078c(c); X86_RET(c, 0xeac33u);
    X86_TICK(c, 13);
    // 0eac33  lea eax, [ebp - 0x50]
    X86_AT(c, 0xeac33u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eac36  push eax
    X86_AT(c, 0xeac36u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eac37  mov edx, eax
    X86_AT(c, 0xeac37u);
    c.r[2] = c.r[0];
    // 0eac39  call 0xe9c2c
    X86_AT(c, 0xeac39u);
    push32(c, 0xeac3eu); f_000e9c2c(c); X86_RET(c, 0xeac3eu);
    X86_TICK(c, 9);
    // 0eac3e  push eax
    X86_AT(c, 0xeac3eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eac3f  call 0xe42d0
    X86_AT(c, 0xeac3fu);
    push32(c, 0xeac44u); f_000e42d0(c); X86_RET(c, 0xeac44u);
    X86_TICK(c, 23);
    // 0eac44  add esp, 0x3c
    X86_AT(c, 0xeac44u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0eac47  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xeac47u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0eac4a  mov dword ptr [edx + 0xcdf7f], eax
    X86_AT(c, 0xeac4au);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF7Fu)), c.r[0]);
    // 0eac50  push edi
    X86_AT(c, 0xeac50u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eac51  push 0x4f
    X86_AT(c, 0xeac51u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0eac53  lea eax, [ebp - 0x50]
    X86_AT(c, 0xeac53u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eac56  push eax
    X86_AT(c, 0xeac56u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eac57  call 0x10078c
    X86_AT(c, 0xeac57u);
    push32(c, 0xeac5cu); f_0010078c(c); X86_RET(c, 0xeac5cu);
    X86_TICK(c, 13);
    // 0eac5c  lea eax, [ebp - 0x50]
    X86_AT(c, 0xeac5cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eac5f  push eax
    X86_AT(c, 0xeac5fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eac60  mov edx, eax
    X86_AT(c, 0xeac60u);
    c.r[2] = c.r[0];
    // 0eac62  call 0xe9c2c
    X86_AT(c, 0xeac62u);
    push32(c, 0xeac67u); f_000e9c2c(c); X86_RET(c, 0xeac67u);
    X86_TICK(c, 9);
    // 0eac67  push eax
    X86_AT(c, 0xeac67u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eac68  call 0xe42d0
    X86_AT(c, 0xeac68u);
    push32(c, 0xeac6du); f_000e42d0(c); X86_RET(c, 0xeac6du);
    X86_TICK(c, 21);
    // 0eac6d  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xeac6du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0eac70  mov dword ptr [edx + 0xcdf87], eax
    X86_AT(c, 0xeac70u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF87u)), c.r[0]);
    // 0eac76  push edi
    X86_AT(c, 0xeac76u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eac77  push 0x4f
    X86_AT(c, 0xeac77u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0eac79  lea eax, [ebp - 0x50]
    X86_AT(c, 0xeac79u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eac7c  push eax
    X86_AT(c, 0xeac7cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eac7d  call 0x10078c
    X86_AT(c, 0xeac7du);
    push32(c, 0xeac82u); f_0010078c(c); X86_RET(c, 0xeac82u);
    X86_TICK(c, 13);
    // 0eac82  lea eax, [ebp - 0x50]
    X86_AT(c, 0xeac82u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eac85  push eax
    X86_AT(c, 0xeac85u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eac86  mov edx, eax
    X86_AT(c, 0xeac86u);
    c.r[2] = c.r[0];
    // 0eac88  call 0xe9c2c
    X86_AT(c, 0xeac88u);
    push32(c, 0xeac8du); f_000e9c2c(c); X86_RET(c, 0xeac8du);
    X86_TICK(c, 9);
    // 0eac8d  push eax
    X86_AT(c, 0xeac8du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eac8e  call 0xe42d0
    X86_AT(c, 0xeac8eu);
    push32(c, 0xeac93u); f_000e42d0(c); X86_RET(c, 0xeac93u);
    X86_TICK(c, 21);
    // 0eac93  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xeac93u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0eac96  mov dword ptr [edx + 0xcdf8b], eax
    X86_AT(c, 0xeac96u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF8Bu)), c.r[0]);
    // 0eac9c  push edi
    X86_AT(c, 0xeac9cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eac9d  push 0x4f
    X86_AT(c, 0xeac9du);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0eac9f  lea eax, [ebp - 0x50]
    X86_AT(c, 0xeac9fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eaca2  push eax
    X86_AT(c, 0xeaca2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eaca3  call 0x10078c
    X86_AT(c, 0xeaca3u);
    push32(c, 0xeaca8u); f_0010078c(c); X86_RET(c, 0xeaca8u);
    X86_TICK(c, 13);
    // 0eaca8  lea eax, [ebp - 0x50]
    X86_AT(c, 0xeaca8u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eacab  push eax
    X86_AT(c, 0xeacabu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eacac  mov edx, eax
    X86_AT(c, 0xeacacu);
    c.r[2] = c.r[0];
    // 0eacae  call 0xe9c2c
    X86_AT(c, 0xeacaeu);
    push32(c, 0xeacb3u); f_000e9c2c(c); X86_RET(c, 0xeacb3u);
    X86_TICK(c, 9);
    // 0eacb3  push eax
    X86_AT(c, 0xeacb3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eacb4  call 0xe42d0
    X86_AT(c, 0xeacb4u);
    push32(c, 0xeacb9u); f_000e42d0(c); X86_RET(c, 0xeacb9u);
    X86_TICK(c, 23);
    // 0eacb9  add esp, 0x3c
    X86_AT(c, 0xeacb9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0eacbc  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xeacbcu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0eacbf  mov dword ptr [edx + 0xcdf8f], eax
    X86_AT(c, 0xeacbfu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF8Fu)), c.r[0]);
    // 0eacc5  push edi
    X86_AT(c, 0xeacc5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eacc6  push 0x4f
    X86_AT(c, 0xeacc6u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0eacc8  lea eax, [ebp - 0x50]
    X86_AT(c, 0xeacc8u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eaccb  push eax
    X86_AT(c, 0xeaccbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eaccc  call 0x10078c
    X86_AT(c, 0xeacccu);
    push32(c, 0xeacd1u); f_0010078c(c); X86_RET(c, 0xeacd1u);
    X86_TICK(c, 13);
    // 0eacd1  lea eax, [ebp - 0x50]
    X86_AT(c, 0xeacd1u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eacd4  push eax
    X86_AT(c, 0xeacd4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eacd5  mov edx, eax
    X86_AT(c, 0xeacd5u);
    c.r[2] = c.r[0];
    // 0eacd7  call 0xe9c2c
    X86_AT(c, 0xeacd7u);
    push32(c, 0xeacdcu); f_000e9c2c(c); X86_RET(c, 0xeacdcu);
    X86_TICK(c, 9);
    // 0eacdc  push eax
    X86_AT(c, 0xeacdcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eacdd  call 0xe42d0
    X86_AT(c, 0xeacddu);
    push32(c, 0xeace2u); f_000e42d0(c); X86_RET(c, 0xeace2u);
    X86_TICK(c, 21);
    // 0eace2  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xeace2u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0eace5  mov dword ptr [edx + 0xcdf93], eax
    X86_AT(c, 0xeace5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF93u)), c.r[0]);
    // 0eaceb  push edi
    X86_AT(c, 0xeacebu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eacec  push 0x4f
    X86_AT(c, 0xeacecu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0eacee  lea eax, [ebp - 0x50]
    X86_AT(c, 0xeaceeu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eacf1  push eax
    X86_AT(c, 0xeacf1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eacf2  call 0x10078c
    X86_AT(c, 0xeacf2u);
    push32(c, 0xeacf7u); f_0010078c(c); X86_RET(c, 0xeacf7u);
    X86_TICK(c, 15);
    // 0eacf7  add esp, 0x20
    X86_AT(c, 0xeacf7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0eacfa  lea eax, [ebp - 0x50]
    X86_AT(c, 0xeacfau);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eacfd  push eax
    X86_AT(c, 0xeacfdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eacfe  mov edx, eax
    X86_AT(c, 0xeacfeu);
    c.r[2] = c.r[0];
    // 0ead00  call 0xe9c2c
    X86_AT(c, 0xead00u);
    push32(c, 0xead05u); f_000e9c2c(c); X86_RET(c, 0xead05u);
    X86_TICK(c, 9);
    // 0ead05  push eax
    X86_AT(c, 0xead05u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ead06  call 0xe42d0
    X86_AT(c, 0xead06u);
    push32(c, 0xead0bu); f_000e42d0(c); X86_RET(c, 0xead0bu);
    X86_TICK(c, 32);
    // 0ead0b  mov edx, 0xcde44
    X86_AT(c, 0xead0bu);
    c.r[2] = 0xCDE44u;
    // 0ead10  mov ecx, esi
    X86_AT(c, 0xead10u);
    c.r[1] = c.r[6];
    // 0ead12  lea edx, [ecx + ecx*4]
    X86_AT(c, 0xead12u);
    c.r[2] = (uint32_t)(c.r[1] + c.r[1] * 4);
    // 0ead15  lea edx, [ecx + edx*2]
    X86_AT(c, 0xead15u);
    c.r[2] = (uint32_t)(c.r[1] + c.r[2] * 2);
    // 0ead18  shl edx, 5
    X86_AT(c, 0xead18u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ead1b  sub edx, ecx
    X86_AT(c, 0xead1bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0ead1d  mov dword ptr [edx + 0xcdf97], eax
    X86_AT(c, 0xead1du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF97u)), c.r[0]);
    // 0ead23  push edi
    X86_AT(c, 0xead23u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ead24  push 0x4f
    X86_AT(c, 0xead24u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ead26  lea eax, [ebp - 0x50]
    X86_AT(c, 0xead26u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ead29  push eax
    X86_AT(c, 0xead29u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ead2a  mov dword ptr [ebp - 0x60], edx
    X86_AT(c, 0xead2au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)), c.r[2]);
    // 0ead2d  call 0x10078c
    X86_AT(c, 0xead2du);
    push32(c, 0xead32u); f_0010078c(c); X86_RET(c, 0xead32u);
    X86_TICK(c, 13);
    // 0ead32  lea eax, [ebp - 0x50]
    X86_AT(c, 0xead32u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ead35  push eax
    X86_AT(c, 0xead35u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ead36  mov edx, eax
    X86_AT(c, 0xead36u);
    c.r[2] = c.r[0];
    // 0ead38  call 0xe9c2c
    X86_AT(c, 0xead38u);
    push32(c, 0xead3du); f_000e9c2c(c); X86_RET(c, 0xead3du);
    X86_TICK(c, 9);
    // 0ead3d  push eax
    X86_AT(c, 0xead3du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ead3e  call 0xe42d0
    X86_AT(c, 0xead3eu);
    push32(c, 0xead43u); f_000e42d0(c); X86_RET(c, 0xead43u);
    X86_TICK(c, 21);
    // 0ead43  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xead43u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ead46  mov dword ptr [edx + 0xcdf9b], eax
    X86_AT(c, 0xead46u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF9Bu)), c.r[0]);
    // 0ead4c  push edi
    X86_AT(c, 0xead4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ead4d  push 0x4f
    X86_AT(c, 0xead4du);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ead4f  lea eax, [ebp - 0x50]
    X86_AT(c, 0xead4fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ead52  push eax
    X86_AT(c, 0xead52u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ead53  call 0x10078c
    X86_AT(c, 0xead53u);
    push32(c, 0xead58u); f_0010078c(c); X86_RET(c, 0xead58u);
    X86_TICK(c, 13);
    // 0ead58  lea eax, [ebp - 0x50]
    X86_AT(c, 0xead58u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ead5b  push eax
    X86_AT(c, 0xead5bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ead5c  mov edx, eax
    X86_AT(c, 0xead5cu);
    c.r[2] = c.r[0];
    // 0ead5e  call 0xe9c2c
    X86_AT(c, 0xead5eu);
    push32(c, 0xead63u); f_000e9c2c(c); X86_RET(c, 0xead63u);
    X86_TICK(c, 9);
    // 0ead63  push eax
    X86_AT(c, 0xead63u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ead64  call 0xe42d0
    X86_AT(c, 0xead64u);
    push32(c, 0xead69u); f_000e42d0(c); X86_RET(c, 0xead69u);
    X86_TICK(c, 21);
    // 0ead69  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xead69u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ead6c  mov dword ptr [edx + 0xcdf9f], eax
    X86_AT(c, 0xead6cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF9Fu)), c.r[0]);
    // 0ead72  push edi
    X86_AT(c, 0xead72u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ead73  push 0x4f
    X86_AT(c, 0xead73u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ead75  lea eax, [ebp - 0x50]
    X86_AT(c, 0xead75u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ead78  push eax
    X86_AT(c, 0xead78u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ead79  call 0x10078c
    X86_AT(c, 0xead79u);
    push32(c, 0xead7eu); f_0010078c(c); X86_RET(c, 0xead7eu);
    X86_TICK(c, 15);
    // 0ead7e  add esp, 0x3c
    X86_AT(c, 0xead7eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ead81  lea eax, [ebp - 0x50]
    X86_AT(c, 0xead81u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0ead84  push eax
    X86_AT(c, 0xead84u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ead85  mov edx, eax
    X86_AT(c, 0xead85u);
    c.r[2] = c.r[0];
    // 0ead87  call 0xe9c2c
    X86_AT(c, 0xead87u);
    push32(c, 0xead8cu); f_000e9c2c(c); X86_RET(c, 0xead8cu);
    X86_TICK(c, 9);
    // 0ead8c  push eax
    X86_AT(c, 0xead8cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ead8d  call 0xe42d0
    X86_AT(c, 0xead8du);
    push32(c, 0xead92u); f_000e42d0(c); X86_RET(c, 0xead92u);
    X86_TICK(c, 21);
    // 0ead92  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xead92u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0ead95  mov dword ptr [edx + 0xcdfa3], eax
    X86_AT(c, 0xead95u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDFA3u)), c.r[0]);
    // 0ead9b  push edi
    X86_AT(c, 0xead9bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ead9c  push 0x4f
    X86_AT(c, 0xead9cu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0ead9e  lea eax, [ebp - 0x50]
    X86_AT(c, 0xead9eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eada1  push eax
    X86_AT(c, 0xeada1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eada2  call 0x10078c
    X86_AT(c, 0xeada2u);
    push32(c, 0xeada7u); f_0010078c(c); X86_RET(c, 0xeada7u);
    X86_TICK(c, 11);
    // 0eada7  lea eax, [ebp - 0x50]
    X86_AT(c, 0xeada7u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0eadaa  push eax
    X86_AT(c, 0xeadaau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eadab  call 0xe9c2c
    X86_AT(c, 0xeadabu);
    push32(c, 0xeadb0u); f_000e9c2c(c); X86_RET(c, 0xeadb0u);
    X86_TICK(c, 9);
    // 0eadb0  push eax
    X86_AT(c, 0xeadb0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eadb1  call 0xe42d0
    X86_AT(c, 0xeadb1u);
    push32(c, 0xeadb6u); f_000e42d0(c); X86_RET(c, 0xeadb6u);
    X86_TICK(c, 17);
    // 0eadb6  mov edx, dword ptr [ebp - 0x60]
    X86_AT(c, 0xeadb6u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFA0u)));
    // 0eadb9  mov dword ptr [edx + 0xcdfa7], eax
    X86_AT(c, 0xeadb9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDFA7u)), c.r[0]);
    // 0eadbf  inc esi
    X86_AT(c, 0xeadbfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0eadc0  add esp, 0x1c
    X86_AT(c, 0xeadc0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0eadc3  jmp 0xe9e7d
    X86_AT(c, 0xeadc3u);
    X86_POLL(c, 0xe9e7du); goto L_e9e7d;
L_eadc8:
    X86_TICK(c, 9);
    // 0eadc8  push edi
    X86_AT(c, 0xeadc8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eadc9  call 0x101430
    X86_AT(c, 0xeadc9u);
    push32(c, 0xeadceu); f_00101430(c); X86_RET(c, 0xeadceu);
    X86_TICK(c, 9);
    // 0eadce  push 2
    X86_AT(c, 0xeadceu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0eadd0  call 0xe6c68
    X86_AT(c, 0xeadd0u);
    push32(c, 0xeadd5u); f_000e6c68(c); X86_RET(c, 0xeadd5u);
    X86_TICK(c, 4);
    // 0eadd5  sub eax, eax
    X86_AT(c, 0xeadd5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0eadd7  mov dword ptr [0xcf190], eax
    X86_AT(c, 0xeadd7u);
    wr32((c.sbase[3] + (uint32_t)(0xCF190u)), c.r[0]);
L_eaddc:
    X86_TICK(c, 2);
    // 0eaddc  add esp, 8
    X86_AT(c, 0xeaddcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_eaddf:
    X86_TICK(c, 28);
    // 0eaddf  pop edi
    X86_AT(c, 0xeaddfu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0eade0  pop esi
    X86_AT(c, 0xeade0u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0eade1  pop ebx
    X86_AT(c, 0xeade1u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0eade2  leave 
    X86_AT(c, 0xeade2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0eade3  ret 
    X86_AT(c, 0xeade3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe9d2cu, "ran off the end of a function");
}
}
