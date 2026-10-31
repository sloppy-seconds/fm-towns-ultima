#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00012620(X86Cpu& c) {
    X86_TICK(c, 14);
    // 012620  mov byte ptr gs:[edi + 0x19f5], 0xff
    X86_AT(c, 0x12620u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F5u)), 0xFFu);
    // 012628  xor al, al
    X86_AT(c, 0x12628u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01262a  ret 
    X86_AT(c, 0x1262au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12620u, "ran off the end of a function");
}
void f_0001262c(X86Cpu& c) {
    X86_TICK(c, 19);
    // 01262c  movzx eax, byte ptr gs:[edi + ebx*1 + 0x1a30]
    X86_AT(c, 0x1262cu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A30u)));
    // 012635  mov dl, byte ptr [esi + 0x1c]
    X86_AT(c, 0x12635u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1Cu))));
    // 012638  mov cl, 0xc
    X86_AT(c, 0x12638u);
    s8(c, 1, 0xCu);
    // 01263a  sub al, dl
    X86_AT(c, 0x1263au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, g8(c, 2), 0, 1)); }
    // 01263c  jb 0x12678
    X86_AT(c, 0x1263cu);
    if (x86_cc(c, 2)) { goto L_12678; }
    X86_TICK(c, 5);
    // 01263e  ja 0x1264c
    X86_AT(c, 0x1263eu);
    if (x86_cc(c, 7)) { goto L_1264c; }
    X86_TICK(c, 17);
    // 012640  mov ax, word ptr [esi + 0x18]
    X86_AT(c, 0x12640u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x18u))));
    // 012644  add ax, word ptr [esi + 0x1a]
    X86_AT(c, 0x12644u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x1Au))), 0, 2)); }
    // 012648  jmp 0x1269e
    X86_AT(c, 0x12648u);
    goto L_1269e;
L_1264c:
    X86_TICK(c, 65);
    // 01264c  div cl
    X86_AT(c, 0x1264cu);
    x86_div(c, g8(c, 1), 1, 0x1264cu);
    // 01264e  movzx edx, ah
    X86_AT(c, 0x1264eu);
    c.r[2] = g8(c, 4);
    // 012651  mov cl, al
    X86_AT(c, 0x12651u);
    s8(c, 1, g8(c, 0));
    // 012653  mov ax, word ptr [esi + 0x18]
    X86_AT(c, 0x12653u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x18u))));
    // 012657  add ax, word ptr [esi + 0x1a]
    X86_AT(c, 0x12657u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x1Au))), 0, 2)); }
    // 01265b  shl eax, cl
    X86_AT(c, 0x1265bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 01265d  test edx, edx
    X86_AT(c, 0x1265du);
    (void)x86_logic(c, c.r[2] & c.r[2], 4);
    // 01265f  je 0x1269e
    X86_AT(c, 0x1265fu);
    if (x86_cc(c, 4)) { goto L_1269e; }
    X86_TICK(c, 39);
    // 012661  mov ecx, eax
    X86_AT(c, 0x12661u);
    c.r[1] = c.r[0];
    // 012663  mov dx, word ptr cs:[edx*2 + 0x13634]
    X86_AT(c, 0x12663u);
    s16(c, 2, rd16((c.sbase[1] + (uint32_t)(c.r[2] * 2 + 0x13634u))));
    // 01266c  mul dx
    X86_AT(c, 0x1266cu);
    x86_mul(c, (c.r[2] & 0xFFFFu), 2);
    // 01266f  add edx, ecx
    X86_AT(c, 0x1266fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[1], 0, 4); }
    // 012671  mov eax, edx
    X86_AT(c, 0x12671u);
    c.r[0] = c.r[2];
    // 012673  jmp 0x1269e
    X86_AT(c, 0x12673u);
    goto L_1269e;
L_12678:
    X86_TICK(c, 67);
    // 012678  neg al
    X86_AT(c, 0x12678u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_neg(c, v, 1)); }
    // 01267a  div cl
    X86_AT(c, 0x1267au);
    x86_div(c, g8(c, 1), 1, 0x1267au);
    // 01267c  mov cl, al
    X86_AT(c, 0x1267cu);
    s8(c, 1, g8(c, 0));
    // 01267e  movzx edx, ah
    X86_AT(c, 0x1267eu);
    c.r[2] = g8(c, 4);
    // 012681  mov ax, word ptr [esi + 0x18]
    X86_AT(c, 0x12681u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x18u))));
    // 012685  add ax, word ptr [esi + 0x1a]
    X86_AT(c, 0x12685u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x1Au))), 0, 2)); }
    // 012689  shr ax, cl
    X86_AT(c, 0x12689u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 01268c  test edx, edx
    X86_AT(c, 0x1268cu);
    (void)x86_logic(c, c.r[2] & c.r[2], 4);
    // 01268e  je 0x1269e
    X86_AT(c, 0x1268eu);
    if (x86_cc(c, 4)) { goto L_1269e; }
    X86_TICK(c, 28);
    // 012690  mov dx, word ptr cs:[edx*2 + 0x1361e]
    X86_AT(c, 0x12690u);
    s16(c, 2, rd16((c.sbase[1] + (uint32_t)(c.r[2] * 2 + 0x1361Eu))));
    // 012699  mul dx
    X86_AT(c, 0x12699u);
    x86_mul(c, (c.r[2] & 0xFFFFu), 2);
    // 01269c  mov eax, edx
    X86_AT(c, 0x1269cu);
    c.r[0] = c.r[2];
L_1269e:
    X86_TICK(c, 46);
    // 01269e  mov word ptr gs:[edi + ebx*2 + 0x110], ax
    X86_AT(c, 0x1269eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] * 2 + 0x110u)), (c.r[0] & 0xFFFFu));
    // 0126a7  movzx eax, ax
    X86_AT(c, 0x126a7u);
    c.r[0] = (c.r[0] & 0xFFFFu);
    // 0126aa  movzx ecx, word ptr gs:[edi + ebx*2 + 0x1af0]
    X86_AT(c, 0x126aau);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] * 2 + 0x1AF0u)));
    // 0126b3  mul ecx
    X86_AT(c, 0x126b3u);
    x86_mul(c, c.r[1], 4);
    // 0126b5  shr eax, 0xe
    X86_AT(c, 0x126b5u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0xEu, 4, w); if (w) c.r[0] = r; }
    // 0126b8  ret 
    X86_AT(c, 0x126b8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1262cu, "ran off the end of a function");
}
void f_000126bc(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0126bc  cmp bl, 8
    X86_AT(c, 0x126bcu);
    (void)x86_sub(c, g8(c, 3), 0x8u, 0, 1);
    // 0126bf  ja 0x13557
    X86_AT(c, 0x126bfu);
    if (x86_cc(c, 7)) { goto L_13557; }
    X86_TICK(c, 19);
    // 0126c5  movzx ebp, bl
    X86_AT(c, 0x126c5u);
    c.r[5] = g8(c, 3);
    // 0126c8  shl ebp, 0xd
    X86_AT(c, 0x126c8u);
    { uint32_t v = c.r[5]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[5] = r; }
    // 0126cb  add ebp, dword ptr gs:[edi + 0x1a00]
    X86_AT(c, 0x126cbu);
    { uint32_t v = c.r[5]; c.r[5] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A00u))), 0, 4); }
    // 0126d2  cmp ebp, 0x10000
    X86_AT(c, 0x126d2u);
    (void)x86_sub(c, c.r[5], 0x10000u, 0, 4);
    // 0126d8  ja 0x1355d
    X86_AT(c, 0x126d8u);
    if (x86_cc(c, 7)) { goto L_1355d; }
    X86_TICK(c, 31);
    // 0126de  pushal 
    X86_AT(c, 0x126deu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0126df  mov ah, bl
    X86_AT(c, 0x126dfu);
    s8(c, 4, g8(c, 3));
    // 0126e1  cmp bl, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126e1u);
    (void)x86_sub(c, g8(c, 3), rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1);
    // 0126e8  je 0x127a3
    X86_AT(c, 0x126e8u);
    if (x86_cc(c, 4)) { goto L_127a3; }
    X86_TICK(c, 5);
    // 0126ee  jb 0x1272c
    X86_AT(c, 0x126eeu);
    if (x86_cc(c, 2)) { goto L_1272c; }
    X86_TICK(c, 26);
    // 0126f0  mov ecx, 7
    X86_AT(c, 0x126f0u);
    c.r[1] = 0x7u;
    // 0126f5  sub cl, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126f5u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 0126fc  mov bh, bl
    X86_AT(c, 0x126fcu);
    s8(c, 7, g8(c, 3));
    // 0126fe  sub bh, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126feu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 012705  mov byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x12705u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)), g8(c, 3));
    // 01270c  pushfd 
    X86_AT(c, 0x1270cu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01270d  cli 
    X86_AT(c, 0x1270du);
    c.fl &= ~X86_IF;
L_1270e:
    X86_TICK(c, 27);
    // 01270e  mov bl, byte ptr cs:[ecx + 0x13588]
    X86_AT(c, 0x1270eu);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13588u))));
    // 012715  and byte ptr gs:[edi + 0x19fa], bl
    X86_AT(c, 0x12715u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 01271c  and byte ptr gs:[edi + 0x19fc], bl
    X86_AT(c, 0x1271cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 012723  dec ecx
    X86_AT(c, 0x12723u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 012724  dec bh
    X86_AT(c, 0x12724u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_dec(c, v, 1)); }
    // 012726  jne 0x1270e
    X86_AT(c, 0x12726u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1270eu); goto L_1270e; }
    X86_TICK(c, 7);
    // 012728  jmp 0x1276b
    X86_AT(c, 0x12728u);
    goto L_1276b;
L_1272c:
    X86_TICK(c, 28);
    // 01272c  mov ecx, 8
    X86_AT(c, 0x1272cu);
    c.r[1] = 0x8u;
    // 012731  sub cl, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x12731u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 012738  sub byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x12738u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)); uint32_t v = rd8(ea); wr8(ea, x86_sub(c, v, g8(c, 3), 0, 1)); }
    // 01273f  xchg byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x1273fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 3)); s8(c, 3, t); }
    // 012746  pushfd 
    X86_AT(c, 0x12746u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 012747  cli 
    X86_AT(c, 0x12747u);
    c.fl &= ~X86_IF;
L_12748:
    X86_TICK(c, 36);
    // 012748  mov bh, byte ptr cs:[ecx + 0x13580]
    X86_AT(c, 0x12748u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13580u))));
    // 01274f  or byte ptr gs:[edi + 0x19fd], bh
    X86_AT(c, 0x1274fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 7), 1)); }
    // 012756  not bh
    X86_AT(c, 0x12756u);
    { uint32_t v = g8(c, 7); s8(c, 7, ~v & 0xFFu); }
    // 012758  and byte ptr gs:[edi + 0x19fe], bh
    X86_AT(c, 0x12758u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FEu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 7), 1)); }
    // 01275f  and byte ptr gs:[edi + 0x19fb], bh
    X86_AT(c, 0x1275fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 7), 1)); }
    // 012766  inc ecx
    X86_AT(c, 0x12766u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 012767  dec bl
    X86_AT(c, 0x12767u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 012769  jne 0x12748
    X86_AT(c, 0x12769u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x12748u); goto L_12748; }
L_1276b:
    X86_TICK(c, 52);
    // 01276b  mov al, byte ptr gs:[edi + 0x19fa]
    X86_AT(c, 0x1276bu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))));
    // 012772  or al, byte ptr gs:[edi + 0x19fc]
    X86_AT(c, 0x12772u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))), 1)); }
    // 012779  or al, byte ptr gs:[edi + 0x19fb]
    X86_AT(c, 0x12779u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu))), 1)); }
    // 012780  not al
    X86_AT(c, 0x12780u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 012782  mov dx, 0x4f8
    X86_AT(c, 0x12782u);
    s16(c, 2, 0x4F8u);
    // 012786  out dx, al
    X86_AT(c, 0x12786u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012787  popfd 
    X86_AT(c, 0x12787u);
    x86_popfd(c, 4);
    // 012788  movzx ecx, ah
    X86_AT(c, 0x12788u);
    c.r[1] = g8(c, 4);
    // 01278b  mov al, byte ptr cs:[ecx + 0x1364c]
    X86_AT(c, 0x1278bu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x1364Cu))));
    // 012792  mov byte ptr gs:[edi + 0x19f8], al
    X86_AT(c, 0x12792u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u)), g8(c, 0));
    // 012799  shl ecx, 0xd
    X86_AT(c, 0x12799u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[1] = r; }
    // 01279c  mov dword ptr gs:[edi + 0x1a04], ecx
    X86_AT(c, 0x1279cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A04u)), c.r[1]);
L_127a3:
    X86_TICK(c, 36);
    // 0127a3  popal 
    X86_AT(c, 0x127a3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
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
    x86_fault(c, 0x126bcu, "ran off the end of a function");
}
void f_000126bf(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0126bf  ja 0x13557
    X86_AT(c, 0x126bfu);
    if (x86_cc(c, 7)) { goto L_13557; }
    X86_TICK(c, 19);
    // 0126c5  movzx ebp, bl
    X86_AT(c, 0x126c5u);
    c.r[5] = g8(c, 3);
    // 0126c8  shl ebp, 0xd
    X86_AT(c, 0x126c8u);
    { uint32_t v = c.r[5]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[5] = r; }
    // 0126cb  add ebp, dword ptr gs:[edi + 0x1a00]
    X86_AT(c, 0x126cbu);
    { uint32_t v = c.r[5]; c.r[5] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A00u))), 0, 4); }
    // 0126d2  cmp ebp, 0x10000
    X86_AT(c, 0x126d2u);
    (void)x86_sub(c, c.r[5], 0x10000u, 0, 4);
    // 0126d8  ja 0x1355d
    X86_AT(c, 0x126d8u);
    if (x86_cc(c, 7)) { goto L_1355d; }
    X86_TICK(c, 31);
    // 0126de  pushal 
    X86_AT(c, 0x126deu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0126df  mov ah, bl
    X86_AT(c, 0x126dfu);
    s8(c, 4, g8(c, 3));
    // 0126e1  cmp bl, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126e1u);
    (void)x86_sub(c, g8(c, 3), rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1);
    // 0126e8  je 0x127a3
    X86_AT(c, 0x126e8u);
    if (x86_cc(c, 4)) { goto L_127a3; }
    X86_TICK(c, 5);
    // 0126ee  jb 0x1272c
    X86_AT(c, 0x126eeu);
    if (x86_cc(c, 2)) { goto L_1272c; }
    X86_TICK(c, 26);
    // 0126f0  mov ecx, 7
    X86_AT(c, 0x126f0u);
    c.r[1] = 0x7u;
    // 0126f5  sub cl, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126f5u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 0126fc  mov bh, bl
    X86_AT(c, 0x126fcu);
    s8(c, 7, g8(c, 3));
    // 0126fe  sub bh, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126feu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 012705  mov byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x12705u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)), g8(c, 3));
    // 01270c  pushfd 
    X86_AT(c, 0x1270cu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01270d  cli 
    X86_AT(c, 0x1270du);
    c.fl &= ~X86_IF;
L_1270e:
    X86_TICK(c, 27);
    // 01270e  mov bl, byte ptr cs:[ecx + 0x13588]
    X86_AT(c, 0x1270eu);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13588u))));
    // 012715  and byte ptr gs:[edi + 0x19fa], bl
    X86_AT(c, 0x12715u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 01271c  and byte ptr gs:[edi + 0x19fc], bl
    X86_AT(c, 0x1271cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 012723  dec ecx
    X86_AT(c, 0x12723u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 012724  dec bh
    X86_AT(c, 0x12724u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_dec(c, v, 1)); }
    // 012726  jne 0x1270e
    X86_AT(c, 0x12726u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1270eu); goto L_1270e; }
    X86_TICK(c, 7);
    // 012728  jmp 0x1276b
    X86_AT(c, 0x12728u);
    goto L_1276b;
L_1272c:
    X86_TICK(c, 28);
    // 01272c  mov ecx, 8
    X86_AT(c, 0x1272cu);
    c.r[1] = 0x8u;
    // 012731  sub cl, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x12731u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 012738  sub byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x12738u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)); uint32_t v = rd8(ea); wr8(ea, x86_sub(c, v, g8(c, 3), 0, 1)); }
    // 01273f  xchg byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x1273fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 3)); s8(c, 3, t); }
    // 012746  pushfd 
    X86_AT(c, 0x12746u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 012747  cli 
    X86_AT(c, 0x12747u);
    c.fl &= ~X86_IF;
L_12748:
    X86_TICK(c, 36);
    // 012748  mov bh, byte ptr cs:[ecx + 0x13580]
    X86_AT(c, 0x12748u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13580u))));
    // 01274f  or byte ptr gs:[edi + 0x19fd], bh
    X86_AT(c, 0x1274fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 7), 1)); }
    // 012756  not bh
    X86_AT(c, 0x12756u);
    { uint32_t v = g8(c, 7); s8(c, 7, ~v & 0xFFu); }
    // 012758  and byte ptr gs:[edi + 0x19fe], bh
    X86_AT(c, 0x12758u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FEu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 7), 1)); }
    // 01275f  and byte ptr gs:[edi + 0x19fb], bh
    X86_AT(c, 0x1275fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 7), 1)); }
    // 012766  inc ecx
    X86_AT(c, 0x12766u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 012767  dec bl
    X86_AT(c, 0x12767u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 012769  jne 0x12748
    X86_AT(c, 0x12769u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x12748u); goto L_12748; }
L_1276b:
    X86_TICK(c, 52);
    // 01276b  mov al, byte ptr gs:[edi + 0x19fa]
    X86_AT(c, 0x1276bu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))));
    // 012772  or al, byte ptr gs:[edi + 0x19fc]
    X86_AT(c, 0x12772u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))), 1)); }
    // 012779  or al, byte ptr gs:[edi + 0x19fb]
    X86_AT(c, 0x12779u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu))), 1)); }
    // 012780  not al
    X86_AT(c, 0x12780u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 012782  mov dx, 0x4f8
    X86_AT(c, 0x12782u);
    s16(c, 2, 0x4F8u);
    // 012786  out dx, al
    X86_AT(c, 0x12786u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012787  popfd 
    X86_AT(c, 0x12787u);
    x86_popfd(c, 4);
    // 012788  movzx ecx, ah
    X86_AT(c, 0x12788u);
    c.r[1] = g8(c, 4);
    // 01278b  mov al, byte ptr cs:[ecx + 0x1364c]
    X86_AT(c, 0x1278bu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x1364Cu))));
    // 012792  mov byte ptr gs:[edi + 0x19f8], al
    X86_AT(c, 0x12792u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u)), g8(c, 0));
    // 012799  shl ecx, 0xd
    X86_AT(c, 0x12799u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[1] = r; }
    // 01279c  mov dword ptr gs:[edi + 0x1a04], ecx
    X86_AT(c, 0x1279cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A04u)), c.r[1]);
L_127a3:
    X86_TICK(c, 36);
    // 0127a3  popal 
    X86_AT(c, 0x127a3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
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
    x86_fault(c, 0x126bfu, "ran off the end of a function");
}
void f_000126c5(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0126c5  movzx ebp, bl
    X86_AT(c, 0x126c5u);
    c.r[5] = g8(c, 3);
    // 0126c8  shl ebp, 0xd
    X86_AT(c, 0x126c8u);
    { uint32_t v = c.r[5]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[5] = r; }
    // 0126cb  add ebp, dword ptr gs:[edi + 0x1a00]
    X86_AT(c, 0x126cbu);
    { uint32_t v = c.r[5]; c.r[5] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A00u))), 0, 4); }
    // 0126d2  cmp ebp, 0x10000
    X86_AT(c, 0x126d2u);
    (void)x86_sub(c, c.r[5], 0x10000u, 0, 4);
    // 0126d8  ja 0x1355d
    X86_AT(c, 0x126d8u);
    if (x86_cc(c, 7)) { goto L_1355d; }
    X86_TICK(c, 31);
    // 0126de  pushal 
    X86_AT(c, 0x126deu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0126df  mov ah, bl
    X86_AT(c, 0x126dfu);
    s8(c, 4, g8(c, 3));
    // 0126e1  cmp bl, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126e1u);
    (void)x86_sub(c, g8(c, 3), rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1);
    // 0126e8  je 0x127a3
    X86_AT(c, 0x126e8u);
    if (x86_cc(c, 4)) { goto L_127a3; }
    X86_TICK(c, 5);
    // 0126ee  jb 0x1272c
    X86_AT(c, 0x126eeu);
    if (x86_cc(c, 2)) { goto L_1272c; }
    X86_TICK(c, 26);
    // 0126f0  mov ecx, 7
    X86_AT(c, 0x126f0u);
    c.r[1] = 0x7u;
    // 0126f5  sub cl, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126f5u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 0126fc  mov bh, bl
    X86_AT(c, 0x126fcu);
    s8(c, 7, g8(c, 3));
    // 0126fe  sub bh, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126feu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 012705  mov byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x12705u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)), g8(c, 3));
    // 01270c  pushfd 
    X86_AT(c, 0x1270cu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01270d  cli 
    X86_AT(c, 0x1270du);
    c.fl &= ~X86_IF;
L_1270e:
    X86_TICK(c, 27);
    // 01270e  mov bl, byte ptr cs:[ecx + 0x13588]
    X86_AT(c, 0x1270eu);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13588u))));
    // 012715  and byte ptr gs:[edi + 0x19fa], bl
    X86_AT(c, 0x12715u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 01271c  and byte ptr gs:[edi + 0x19fc], bl
    X86_AT(c, 0x1271cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 012723  dec ecx
    X86_AT(c, 0x12723u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 012724  dec bh
    X86_AT(c, 0x12724u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_dec(c, v, 1)); }
    // 012726  jne 0x1270e
    X86_AT(c, 0x12726u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1270eu); goto L_1270e; }
    X86_TICK(c, 7);
    // 012728  jmp 0x1276b
    X86_AT(c, 0x12728u);
    goto L_1276b;
L_1272c:
    X86_TICK(c, 28);
    // 01272c  mov ecx, 8
    X86_AT(c, 0x1272cu);
    c.r[1] = 0x8u;
    // 012731  sub cl, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x12731u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 012738  sub byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x12738u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)); uint32_t v = rd8(ea); wr8(ea, x86_sub(c, v, g8(c, 3), 0, 1)); }
    // 01273f  xchg byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x1273fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 3)); s8(c, 3, t); }
    // 012746  pushfd 
    X86_AT(c, 0x12746u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 012747  cli 
    X86_AT(c, 0x12747u);
    c.fl &= ~X86_IF;
L_12748:
    X86_TICK(c, 36);
    // 012748  mov bh, byte ptr cs:[ecx + 0x13580]
    X86_AT(c, 0x12748u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13580u))));
    // 01274f  or byte ptr gs:[edi + 0x19fd], bh
    X86_AT(c, 0x1274fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 7), 1)); }
    // 012756  not bh
    X86_AT(c, 0x12756u);
    { uint32_t v = g8(c, 7); s8(c, 7, ~v & 0xFFu); }
    // 012758  and byte ptr gs:[edi + 0x19fe], bh
    X86_AT(c, 0x12758u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FEu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 7), 1)); }
    // 01275f  and byte ptr gs:[edi + 0x19fb], bh
    X86_AT(c, 0x1275fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 7), 1)); }
    // 012766  inc ecx
    X86_AT(c, 0x12766u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 012767  dec bl
    X86_AT(c, 0x12767u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 012769  jne 0x12748
    X86_AT(c, 0x12769u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x12748u); goto L_12748; }
L_1276b:
    X86_TICK(c, 52);
    // 01276b  mov al, byte ptr gs:[edi + 0x19fa]
    X86_AT(c, 0x1276bu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))));
    // 012772  or al, byte ptr gs:[edi + 0x19fc]
    X86_AT(c, 0x12772u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))), 1)); }
    // 012779  or al, byte ptr gs:[edi + 0x19fb]
    X86_AT(c, 0x12779u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu))), 1)); }
    // 012780  not al
    X86_AT(c, 0x12780u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 012782  mov dx, 0x4f8
    X86_AT(c, 0x12782u);
    s16(c, 2, 0x4F8u);
    // 012786  out dx, al
    X86_AT(c, 0x12786u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012787  popfd 
    X86_AT(c, 0x12787u);
    x86_popfd(c, 4);
    // 012788  movzx ecx, ah
    X86_AT(c, 0x12788u);
    c.r[1] = g8(c, 4);
    // 01278b  mov al, byte ptr cs:[ecx + 0x1364c]
    X86_AT(c, 0x1278bu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x1364Cu))));
    // 012792  mov byte ptr gs:[edi + 0x19f8], al
    X86_AT(c, 0x12792u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u)), g8(c, 0));
    // 012799  shl ecx, 0xd
    X86_AT(c, 0x12799u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[1] = r; }
    // 01279c  mov dword ptr gs:[edi + 0x1a04], ecx
    X86_AT(c, 0x1279cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A04u)), c.r[1]);
L_127a3:
    X86_TICK(c, 36);
    // 0127a3  popal 
    X86_AT(c, 0x127a3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
    c.eip = pop32(c); return;
L_1355d:
    X86_TICK(c, 12);
    // 01355d  mov al, 5
    X86_AT(c, 0x1355du);
    s8(c, 0, 0x5u);
    // 01355f  ret 
    X86_AT(c, 0x1355fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x126c5u, "ran off the end of a function");
}
void f_000126c8(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0126c8  shl ebp, 0xd
    X86_AT(c, 0x126c8u);
    { uint32_t v = c.r[5]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[5] = r; }
    // 0126cb  add ebp, dword ptr gs:[edi + 0x1a00]
    X86_AT(c, 0x126cbu);
    { uint32_t v = c.r[5]; c.r[5] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A00u))), 0, 4); }
    // 0126d2  cmp ebp, 0x10000
    X86_AT(c, 0x126d2u);
    (void)x86_sub(c, c.r[5], 0x10000u, 0, 4);
    // 0126d8  ja 0x1355d
    X86_AT(c, 0x126d8u);
    if (x86_cc(c, 7)) { goto L_1355d; }
    X86_TICK(c, 31);
    // 0126de  pushal 
    X86_AT(c, 0x126deu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0126df  mov ah, bl
    X86_AT(c, 0x126dfu);
    s8(c, 4, g8(c, 3));
    // 0126e1  cmp bl, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126e1u);
    (void)x86_sub(c, g8(c, 3), rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1);
    // 0126e8  je 0x127a3
    X86_AT(c, 0x126e8u);
    if (x86_cc(c, 4)) { goto L_127a3; }
    X86_TICK(c, 5);
    // 0126ee  jb 0x1272c
    X86_AT(c, 0x126eeu);
    if (x86_cc(c, 2)) { goto L_1272c; }
    X86_TICK(c, 26);
    // 0126f0  mov ecx, 7
    X86_AT(c, 0x126f0u);
    c.r[1] = 0x7u;
    // 0126f5  sub cl, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126f5u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 0126fc  mov bh, bl
    X86_AT(c, 0x126fcu);
    s8(c, 7, g8(c, 3));
    // 0126fe  sub bh, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126feu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 012705  mov byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x12705u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)), g8(c, 3));
    // 01270c  pushfd 
    X86_AT(c, 0x1270cu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01270d  cli 
    X86_AT(c, 0x1270du);
    c.fl &= ~X86_IF;
L_1270e:
    X86_TICK(c, 27);
    // 01270e  mov bl, byte ptr cs:[ecx + 0x13588]
    X86_AT(c, 0x1270eu);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13588u))));
    // 012715  and byte ptr gs:[edi + 0x19fa], bl
    X86_AT(c, 0x12715u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 01271c  and byte ptr gs:[edi + 0x19fc], bl
    X86_AT(c, 0x1271cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 012723  dec ecx
    X86_AT(c, 0x12723u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 012724  dec bh
    X86_AT(c, 0x12724u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_dec(c, v, 1)); }
    // 012726  jne 0x1270e
    X86_AT(c, 0x12726u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1270eu); goto L_1270e; }
    X86_TICK(c, 7);
    // 012728  jmp 0x1276b
    X86_AT(c, 0x12728u);
    goto L_1276b;
L_1272c:
    X86_TICK(c, 28);
    // 01272c  mov ecx, 8
    X86_AT(c, 0x1272cu);
    c.r[1] = 0x8u;
    // 012731  sub cl, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x12731u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 012738  sub byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x12738u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)); uint32_t v = rd8(ea); wr8(ea, x86_sub(c, v, g8(c, 3), 0, 1)); }
    // 01273f  xchg byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x1273fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 3)); s8(c, 3, t); }
    // 012746  pushfd 
    X86_AT(c, 0x12746u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 012747  cli 
    X86_AT(c, 0x12747u);
    c.fl &= ~X86_IF;
L_12748:
    X86_TICK(c, 36);
    // 012748  mov bh, byte ptr cs:[ecx + 0x13580]
    X86_AT(c, 0x12748u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13580u))));
    // 01274f  or byte ptr gs:[edi + 0x19fd], bh
    X86_AT(c, 0x1274fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 7), 1)); }
    // 012756  not bh
    X86_AT(c, 0x12756u);
    { uint32_t v = g8(c, 7); s8(c, 7, ~v & 0xFFu); }
    // 012758  and byte ptr gs:[edi + 0x19fe], bh
    X86_AT(c, 0x12758u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FEu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 7), 1)); }
    // 01275f  and byte ptr gs:[edi + 0x19fb], bh
    X86_AT(c, 0x1275fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 7), 1)); }
    // 012766  inc ecx
    X86_AT(c, 0x12766u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 012767  dec bl
    X86_AT(c, 0x12767u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 012769  jne 0x12748
    X86_AT(c, 0x12769u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x12748u); goto L_12748; }
L_1276b:
    X86_TICK(c, 52);
    // 01276b  mov al, byte ptr gs:[edi + 0x19fa]
    X86_AT(c, 0x1276bu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))));
    // 012772  or al, byte ptr gs:[edi + 0x19fc]
    X86_AT(c, 0x12772u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))), 1)); }
    // 012779  or al, byte ptr gs:[edi + 0x19fb]
    X86_AT(c, 0x12779u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu))), 1)); }
    // 012780  not al
    X86_AT(c, 0x12780u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 012782  mov dx, 0x4f8
    X86_AT(c, 0x12782u);
    s16(c, 2, 0x4F8u);
    // 012786  out dx, al
    X86_AT(c, 0x12786u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012787  popfd 
    X86_AT(c, 0x12787u);
    x86_popfd(c, 4);
    // 012788  movzx ecx, ah
    X86_AT(c, 0x12788u);
    c.r[1] = g8(c, 4);
    // 01278b  mov al, byte ptr cs:[ecx + 0x1364c]
    X86_AT(c, 0x1278bu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x1364Cu))));
    // 012792  mov byte ptr gs:[edi + 0x19f8], al
    X86_AT(c, 0x12792u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u)), g8(c, 0));
    // 012799  shl ecx, 0xd
    X86_AT(c, 0x12799u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[1] = r; }
    // 01279c  mov dword ptr gs:[edi + 0x1a04], ecx
    X86_AT(c, 0x1279cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A04u)), c.r[1]);
L_127a3:
    X86_TICK(c, 36);
    // 0127a3  popal 
    X86_AT(c, 0x127a3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
    c.eip = pop32(c); return;
L_1355d:
    X86_TICK(c, 12);
    // 01355d  mov al, 5
    X86_AT(c, 0x1355du);
    s8(c, 0, 0x5u);
    // 01355f  ret 
    X86_AT(c, 0x1355fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x126c8u, "ran off the end of a function");
}
void f_000126cb(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0126cb  add ebp, dword ptr gs:[edi + 0x1a00]
    X86_AT(c, 0x126cbu);
    { uint32_t v = c.r[5]; c.r[5] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A00u))), 0, 4); }
    // 0126d2  cmp ebp, 0x10000
    X86_AT(c, 0x126d2u);
    (void)x86_sub(c, c.r[5], 0x10000u, 0, 4);
    // 0126d8  ja 0x1355d
    X86_AT(c, 0x126d8u);
    if (x86_cc(c, 7)) { goto L_1355d; }
    X86_TICK(c, 31);
    // 0126de  pushal 
    X86_AT(c, 0x126deu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0126df  mov ah, bl
    X86_AT(c, 0x126dfu);
    s8(c, 4, g8(c, 3));
    // 0126e1  cmp bl, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126e1u);
    (void)x86_sub(c, g8(c, 3), rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1);
    // 0126e8  je 0x127a3
    X86_AT(c, 0x126e8u);
    if (x86_cc(c, 4)) { goto L_127a3; }
    X86_TICK(c, 5);
    // 0126ee  jb 0x1272c
    X86_AT(c, 0x126eeu);
    if (x86_cc(c, 2)) { goto L_1272c; }
    X86_TICK(c, 26);
    // 0126f0  mov ecx, 7
    X86_AT(c, 0x126f0u);
    c.r[1] = 0x7u;
    // 0126f5  sub cl, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126f5u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 0126fc  mov bh, bl
    X86_AT(c, 0x126fcu);
    s8(c, 7, g8(c, 3));
    // 0126fe  sub bh, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126feu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 012705  mov byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x12705u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)), g8(c, 3));
    // 01270c  pushfd 
    X86_AT(c, 0x1270cu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01270d  cli 
    X86_AT(c, 0x1270du);
    c.fl &= ~X86_IF;
L_1270e:
    X86_TICK(c, 27);
    // 01270e  mov bl, byte ptr cs:[ecx + 0x13588]
    X86_AT(c, 0x1270eu);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13588u))));
    // 012715  and byte ptr gs:[edi + 0x19fa], bl
    X86_AT(c, 0x12715u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 01271c  and byte ptr gs:[edi + 0x19fc], bl
    X86_AT(c, 0x1271cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 012723  dec ecx
    X86_AT(c, 0x12723u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 012724  dec bh
    X86_AT(c, 0x12724u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_dec(c, v, 1)); }
    // 012726  jne 0x1270e
    X86_AT(c, 0x12726u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1270eu); goto L_1270e; }
    X86_TICK(c, 7);
    // 012728  jmp 0x1276b
    X86_AT(c, 0x12728u);
    goto L_1276b;
L_1272c:
    X86_TICK(c, 28);
    // 01272c  mov ecx, 8
    X86_AT(c, 0x1272cu);
    c.r[1] = 0x8u;
    // 012731  sub cl, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x12731u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 012738  sub byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x12738u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)); uint32_t v = rd8(ea); wr8(ea, x86_sub(c, v, g8(c, 3), 0, 1)); }
    // 01273f  xchg byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x1273fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 3)); s8(c, 3, t); }
    // 012746  pushfd 
    X86_AT(c, 0x12746u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 012747  cli 
    X86_AT(c, 0x12747u);
    c.fl &= ~X86_IF;
L_12748:
    X86_TICK(c, 36);
    // 012748  mov bh, byte ptr cs:[ecx + 0x13580]
    X86_AT(c, 0x12748u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13580u))));
    // 01274f  or byte ptr gs:[edi + 0x19fd], bh
    X86_AT(c, 0x1274fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 7), 1)); }
    // 012756  not bh
    X86_AT(c, 0x12756u);
    { uint32_t v = g8(c, 7); s8(c, 7, ~v & 0xFFu); }
    // 012758  and byte ptr gs:[edi + 0x19fe], bh
    X86_AT(c, 0x12758u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FEu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 7), 1)); }
    // 01275f  and byte ptr gs:[edi + 0x19fb], bh
    X86_AT(c, 0x1275fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 7), 1)); }
    // 012766  inc ecx
    X86_AT(c, 0x12766u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 012767  dec bl
    X86_AT(c, 0x12767u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 012769  jne 0x12748
    X86_AT(c, 0x12769u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x12748u); goto L_12748; }
L_1276b:
    X86_TICK(c, 52);
    // 01276b  mov al, byte ptr gs:[edi + 0x19fa]
    X86_AT(c, 0x1276bu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))));
    // 012772  or al, byte ptr gs:[edi + 0x19fc]
    X86_AT(c, 0x12772u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))), 1)); }
    // 012779  or al, byte ptr gs:[edi + 0x19fb]
    X86_AT(c, 0x12779u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu))), 1)); }
    // 012780  not al
    X86_AT(c, 0x12780u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 012782  mov dx, 0x4f8
    X86_AT(c, 0x12782u);
    s16(c, 2, 0x4F8u);
    // 012786  out dx, al
    X86_AT(c, 0x12786u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012787  popfd 
    X86_AT(c, 0x12787u);
    x86_popfd(c, 4);
    // 012788  movzx ecx, ah
    X86_AT(c, 0x12788u);
    c.r[1] = g8(c, 4);
    // 01278b  mov al, byte ptr cs:[ecx + 0x1364c]
    X86_AT(c, 0x1278bu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x1364Cu))));
    // 012792  mov byte ptr gs:[edi + 0x19f8], al
    X86_AT(c, 0x12792u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u)), g8(c, 0));
    // 012799  shl ecx, 0xd
    X86_AT(c, 0x12799u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[1] = r; }
    // 01279c  mov dword ptr gs:[edi + 0x1a04], ecx
    X86_AT(c, 0x1279cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A04u)), c.r[1]);
L_127a3:
    X86_TICK(c, 36);
    // 0127a3  popal 
    X86_AT(c, 0x127a3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
    c.eip = pop32(c); return;
L_1355d:
    X86_TICK(c, 12);
    // 01355d  mov al, 5
    X86_AT(c, 0x1355du);
    s8(c, 0, 0x5u);
    // 01355f  ret 
    X86_AT(c, 0x1355fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x126cbu, "ran off the end of a function");
}
void f_000126d2(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0126d2  cmp ebp, 0x10000
    X86_AT(c, 0x126d2u);
    (void)x86_sub(c, c.r[5], 0x10000u, 0, 4);
    // 0126d8  ja 0x1355d
    X86_AT(c, 0x126d8u);
    if (x86_cc(c, 7)) { goto L_1355d; }
    X86_TICK(c, 31);
    // 0126de  pushal 
    X86_AT(c, 0x126deu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0126df  mov ah, bl
    X86_AT(c, 0x126dfu);
    s8(c, 4, g8(c, 3));
    // 0126e1  cmp bl, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126e1u);
    (void)x86_sub(c, g8(c, 3), rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1);
    // 0126e8  je 0x127a3
    X86_AT(c, 0x126e8u);
    if (x86_cc(c, 4)) { goto L_127a3; }
    X86_TICK(c, 5);
    // 0126ee  jb 0x1272c
    X86_AT(c, 0x126eeu);
    if (x86_cc(c, 2)) { goto L_1272c; }
    X86_TICK(c, 26);
    // 0126f0  mov ecx, 7
    X86_AT(c, 0x126f0u);
    c.r[1] = 0x7u;
    // 0126f5  sub cl, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126f5u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 0126fc  mov bh, bl
    X86_AT(c, 0x126fcu);
    s8(c, 7, g8(c, 3));
    // 0126fe  sub bh, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126feu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 012705  mov byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x12705u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)), g8(c, 3));
    // 01270c  pushfd 
    X86_AT(c, 0x1270cu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01270d  cli 
    X86_AT(c, 0x1270du);
    c.fl &= ~X86_IF;
L_1270e:
    X86_TICK(c, 27);
    // 01270e  mov bl, byte ptr cs:[ecx + 0x13588]
    X86_AT(c, 0x1270eu);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13588u))));
    // 012715  and byte ptr gs:[edi + 0x19fa], bl
    X86_AT(c, 0x12715u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 01271c  and byte ptr gs:[edi + 0x19fc], bl
    X86_AT(c, 0x1271cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 012723  dec ecx
    X86_AT(c, 0x12723u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 012724  dec bh
    X86_AT(c, 0x12724u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_dec(c, v, 1)); }
    // 012726  jne 0x1270e
    X86_AT(c, 0x12726u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1270eu); goto L_1270e; }
    X86_TICK(c, 7);
    // 012728  jmp 0x1276b
    X86_AT(c, 0x12728u);
    goto L_1276b;
L_1272c:
    X86_TICK(c, 28);
    // 01272c  mov ecx, 8
    X86_AT(c, 0x1272cu);
    c.r[1] = 0x8u;
    // 012731  sub cl, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x12731u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 012738  sub byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x12738u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)); uint32_t v = rd8(ea); wr8(ea, x86_sub(c, v, g8(c, 3), 0, 1)); }
    // 01273f  xchg byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x1273fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 3)); s8(c, 3, t); }
    // 012746  pushfd 
    X86_AT(c, 0x12746u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 012747  cli 
    X86_AT(c, 0x12747u);
    c.fl &= ~X86_IF;
L_12748:
    X86_TICK(c, 36);
    // 012748  mov bh, byte ptr cs:[ecx + 0x13580]
    X86_AT(c, 0x12748u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13580u))));
    // 01274f  or byte ptr gs:[edi + 0x19fd], bh
    X86_AT(c, 0x1274fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 7), 1)); }
    // 012756  not bh
    X86_AT(c, 0x12756u);
    { uint32_t v = g8(c, 7); s8(c, 7, ~v & 0xFFu); }
    // 012758  and byte ptr gs:[edi + 0x19fe], bh
    X86_AT(c, 0x12758u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FEu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 7), 1)); }
    // 01275f  and byte ptr gs:[edi + 0x19fb], bh
    X86_AT(c, 0x1275fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 7), 1)); }
    // 012766  inc ecx
    X86_AT(c, 0x12766u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 012767  dec bl
    X86_AT(c, 0x12767u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 012769  jne 0x12748
    X86_AT(c, 0x12769u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x12748u); goto L_12748; }
L_1276b:
    X86_TICK(c, 52);
    // 01276b  mov al, byte ptr gs:[edi + 0x19fa]
    X86_AT(c, 0x1276bu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))));
    // 012772  or al, byte ptr gs:[edi + 0x19fc]
    X86_AT(c, 0x12772u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))), 1)); }
    // 012779  or al, byte ptr gs:[edi + 0x19fb]
    X86_AT(c, 0x12779u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu))), 1)); }
    // 012780  not al
    X86_AT(c, 0x12780u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 012782  mov dx, 0x4f8
    X86_AT(c, 0x12782u);
    s16(c, 2, 0x4F8u);
    // 012786  out dx, al
    X86_AT(c, 0x12786u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012787  popfd 
    X86_AT(c, 0x12787u);
    x86_popfd(c, 4);
    // 012788  movzx ecx, ah
    X86_AT(c, 0x12788u);
    c.r[1] = g8(c, 4);
    // 01278b  mov al, byte ptr cs:[ecx + 0x1364c]
    X86_AT(c, 0x1278bu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x1364Cu))));
    // 012792  mov byte ptr gs:[edi + 0x19f8], al
    X86_AT(c, 0x12792u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u)), g8(c, 0));
    // 012799  shl ecx, 0xd
    X86_AT(c, 0x12799u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[1] = r; }
    // 01279c  mov dword ptr gs:[edi + 0x1a04], ecx
    X86_AT(c, 0x1279cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A04u)), c.r[1]);
L_127a3:
    X86_TICK(c, 36);
    // 0127a3  popal 
    X86_AT(c, 0x127a3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
    c.eip = pop32(c); return;
L_1355d:
    X86_TICK(c, 12);
    // 01355d  mov al, 5
    X86_AT(c, 0x1355du);
    s8(c, 0, 0x5u);
    // 01355f  ret 
    X86_AT(c, 0x1355fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x126d2u, "ran off the end of a function");
}
void f_000126d8(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0126d8  ja 0x1355d
    X86_AT(c, 0x126d8u);
    if (x86_cc(c, 7)) { goto L_1355d; }
    X86_TICK(c, 31);
    // 0126de  pushal 
    X86_AT(c, 0x126deu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0126df  mov ah, bl
    X86_AT(c, 0x126dfu);
    s8(c, 4, g8(c, 3));
    // 0126e1  cmp bl, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126e1u);
    (void)x86_sub(c, g8(c, 3), rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1);
    // 0126e8  je 0x127a3
    X86_AT(c, 0x126e8u);
    if (x86_cc(c, 4)) { goto L_127a3; }
    X86_TICK(c, 5);
    // 0126ee  jb 0x1272c
    X86_AT(c, 0x126eeu);
    if (x86_cc(c, 2)) { goto L_1272c; }
    X86_TICK(c, 26);
    // 0126f0  mov ecx, 7
    X86_AT(c, 0x126f0u);
    c.r[1] = 0x7u;
    // 0126f5  sub cl, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126f5u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 0126fc  mov bh, bl
    X86_AT(c, 0x126fcu);
    s8(c, 7, g8(c, 3));
    // 0126fe  sub bh, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126feu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 012705  mov byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x12705u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)), g8(c, 3));
    // 01270c  pushfd 
    X86_AT(c, 0x1270cu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01270d  cli 
    X86_AT(c, 0x1270du);
    c.fl &= ~X86_IF;
L_1270e:
    X86_TICK(c, 27);
    // 01270e  mov bl, byte ptr cs:[ecx + 0x13588]
    X86_AT(c, 0x1270eu);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13588u))));
    // 012715  and byte ptr gs:[edi + 0x19fa], bl
    X86_AT(c, 0x12715u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 01271c  and byte ptr gs:[edi + 0x19fc], bl
    X86_AT(c, 0x1271cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 012723  dec ecx
    X86_AT(c, 0x12723u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 012724  dec bh
    X86_AT(c, 0x12724u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_dec(c, v, 1)); }
    // 012726  jne 0x1270e
    X86_AT(c, 0x12726u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1270eu); goto L_1270e; }
    X86_TICK(c, 7);
    // 012728  jmp 0x1276b
    X86_AT(c, 0x12728u);
    goto L_1276b;
L_1272c:
    X86_TICK(c, 28);
    // 01272c  mov ecx, 8
    X86_AT(c, 0x1272cu);
    c.r[1] = 0x8u;
    // 012731  sub cl, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x12731u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 012738  sub byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x12738u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)); uint32_t v = rd8(ea); wr8(ea, x86_sub(c, v, g8(c, 3), 0, 1)); }
    // 01273f  xchg byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x1273fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 3)); s8(c, 3, t); }
    // 012746  pushfd 
    X86_AT(c, 0x12746u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 012747  cli 
    X86_AT(c, 0x12747u);
    c.fl &= ~X86_IF;
L_12748:
    X86_TICK(c, 36);
    // 012748  mov bh, byte ptr cs:[ecx + 0x13580]
    X86_AT(c, 0x12748u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13580u))));
    // 01274f  or byte ptr gs:[edi + 0x19fd], bh
    X86_AT(c, 0x1274fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 7), 1)); }
    // 012756  not bh
    X86_AT(c, 0x12756u);
    { uint32_t v = g8(c, 7); s8(c, 7, ~v & 0xFFu); }
    // 012758  and byte ptr gs:[edi + 0x19fe], bh
    X86_AT(c, 0x12758u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FEu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 7), 1)); }
    // 01275f  and byte ptr gs:[edi + 0x19fb], bh
    X86_AT(c, 0x1275fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 7), 1)); }
    // 012766  inc ecx
    X86_AT(c, 0x12766u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 012767  dec bl
    X86_AT(c, 0x12767u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 012769  jne 0x12748
    X86_AT(c, 0x12769u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x12748u); goto L_12748; }
L_1276b:
    X86_TICK(c, 52);
    // 01276b  mov al, byte ptr gs:[edi + 0x19fa]
    X86_AT(c, 0x1276bu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))));
    // 012772  or al, byte ptr gs:[edi + 0x19fc]
    X86_AT(c, 0x12772u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))), 1)); }
    // 012779  or al, byte ptr gs:[edi + 0x19fb]
    X86_AT(c, 0x12779u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu))), 1)); }
    // 012780  not al
    X86_AT(c, 0x12780u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 012782  mov dx, 0x4f8
    X86_AT(c, 0x12782u);
    s16(c, 2, 0x4F8u);
    // 012786  out dx, al
    X86_AT(c, 0x12786u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012787  popfd 
    X86_AT(c, 0x12787u);
    x86_popfd(c, 4);
    // 012788  movzx ecx, ah
    X86_AT(c, 0x12788u);
    c.r[1] = g8(c, 4);
    // 01278b  mov al, byte ptr cs:[ecx + 0x1364c]
    X86_AT(c, 0x1278bu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x1364Cu))));
    // 012792  mov byte ptr gs:[edi + 0x19f8], al
    X86_AT(c, 0x12792u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u)), g8(c, 0));
    // 012799  shl ecx, 0xd
    X86_AT(c, 0x12799u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[1] = r; }
    // 01279c  mov dword ptr gs:[edi + 0x1a04], ecx
    X86_AT(c, 0x1279cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A04u)), c.r[1]);
L_127a3:
    X86_TICK(c, 36);
    // 0127a3  popal 
    X86_AT(c, 0x127a3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
    c.eip = pop32(c); return;
L_1355d:
    X86_TICK(c, 12);
    // 01355d  mov al, 5
    X86_AT(c, 0x1355du);
    s8(c, 0, 0x5u);
    // 01355f  ret 
    X86_AT(c, 0x1355fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x126d8u, "ran off the end of a function");
}
void f_000126de(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0126de  pushal 
    X86_AT(c, 0x126deu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0126df  mov ah, bl
    X86_AT(c, 0x126dfu);
    s8(c, 4, g8(c, 3));
    // 0126e1  cmp bl, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126e1u);
    (void)x86_sub(c, g8(c, 3), rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1);
    // 0126e8  je 0x127a3
    X86_AT(c, 0x126e8u);
    if (x86_cc(c, 4)) { goto L_127a3; }
    X86_TICK(c, 5);
    // 0126ee  jb 0x1272c
    X86_AT(c, 0x126eeu);
    if (x86_cc(c, 2)) { goto L_1272c; }
    X86_TICK(c, 26);
    // 0126f0  mov ecx, 7
    X86_AT(c, 0x126f0u);
    c.r[1] = 0x7u;
    // 0126f5  sub cl, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126f5u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 0126fc  mov bh, bl
    X86_AT(c, 0x126fcu);
    s8(c, 7, g8(c, 3));
    // 0126fe  sub bh, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126feu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 012705  mov byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x12705u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)), g8(c, 3));
    // 01270c  pushfd 
    X86_AT(c, 0x1270cu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01270d  cli 
    X86_AT(c, 0x1270du);
    c.fl &= ~X86_IF;
L_1270e:
    X86_TICK(c, 27);
    // 01270e  mov bl, byte ptr cs:[ecx + 0x13588]
    X86_AT(c, 0x1270eu);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13588u))));
    // 012715  and byte ptr gs:[edi + 0x19fa], bl
    X86_AT(c, 0x12715u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 01271c  and byte ptr gs:[edi + 0x19fc], bl
    X86_AT(c, 0x1271cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 012723  dec ecx
    X86_AT(c, 0x12723u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 012724  dec bh
    X86_AT(c, 0x12724u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_dec(c, v, 1)); }
    // 012726  jne 0x1270e
    X86_AT(c, 0x12726u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1270eu); goto L_1270e; }
    X86_TICK(c, 7);
    // 012728  jmp 0x1276b
    X86_AT(c, 0x12728u);
    goto L_1276b;
L_1272c:
    X86_TICK(c, 28);
    // 01272c  mov ecx, 8
    X86_AT(c, 0x1272cu);
    c.r[1] = 0x8u;
    // 012731  sub cl, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x12731u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 012738  sub byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x12738u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)); uint32_t v = rd8(ea); wr8(ea, x86_sub(c, v, g8(c, 3), 0, 1)); }
    // 01273f  xchg byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x1273fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 3)); s8(c, 3, t); }
    // 012746  pushfd 
    X86_AT(c, 0x12746u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 012747  cli 
    X86_AT(c, 0x12747u);
    c.fl &= ~X86_IF;
L_12748:
    X86_TICK(c, 36);
    // 012748  mov bh, byte ptr cs:[ecx + 0x13580]
    X86_AT(c, 0x12748u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13580u))));
    // 01274f  or byte ptr gs:[edi + 0x19fd], bh
    X86_AT(c, 0x1274fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 7), 1)); }
    // 012756  not bh
    X86_AT(c, 0x12756u);
    { uint32_t v = g8(c, 7); s8(c, 7, ~v & 0xFFu); }
    // 012758  and byte ptr gs:[edi + 0x19fe], bh
    X86_AT(c, 0x12758u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FEu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 7), 1)); }
    // 01275f  and byte ptr gs:[edi + 0x19fb], bh
    X86_AT(c, 0x1275fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 7), 1)); }
    // 012766  inc ecx
    X86_AT(c, 0x12766u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 012767  dec bl
    X86_AT(c, 0x12767u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 012769  jne 0x12748
    X86_AT(c, 0x12769u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x12748u); goto L_12748; }
L_1276b:
    X86_TICK(c, 52);
    // 01276b  mov al, byte ptr gs:[edi + 0x19fa]
    X86_AT(c, 0x1276bu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))));
    // 012772  or al, byte ptr gs:[edi + 0x19fc]
    X86_AT(c, 0x12772u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))), 1)); }
    // 012779  or al, byte ptr gs:[edi + 0x19fb]
    X86_AT(c, 0x12779u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu))), 1)); }
    // 012780  not al
    X86_AT(c, 0x12780u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 012782  mov dx, 0x4f8
    X86_AT(c, 0x12782u);
    s16(c, 2, 0x4F8u);
    // 012786  out dx, al
    X86_AT(c, 0x12786u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012787  popfd 
    X86_AT(c, 0x12787u);
    x86_popfd(c, 4);
    // 012788  movzx ecx, ah
    X86_AT(c, 0x12788u);
    c.r[1] = g8(c, 4);
    // 01278b  mov al, byte ptr cs:[ecx + 0x1364c]
    X86_AT(c, 0x1278bu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x1364Cu))));
    // 012792  mov byte ptr gs:[edi + 0x19f8], al
    X86_AT(c, 0x12792u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u)), g8(c, 0));
    // 012799  shl ecx, 0xd
    X86_AT(c, 0x12799u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[1] = r; }
    // 01279c  mov dword ptr gs:[edi + 0x1a04], ecx
    X86_AT(c, 0x1279cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A04u)), c.r[1]);
L_127a3:
    X86_TICK(c, 36);
    // 0127a3  popal 
    X86_AT(c, 0x127a3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x126deu, "ran off the end of a function");
}
void f_000126df(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0126df  mov ah, bl
    X86_AT(c, 0x126dfu);
    s8(c, 4, g8(c, 3));
    // 0126e1  cmp bl, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126e1u);
    (void)x86_sub(c, g8(c, 3), rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1);
    // 0126e8  je 0x127a3
    X86_AT(c, 0x126e8u);
    if (x86_cc(c, 4)) { goto L_127a3; }
    X86_TICK(c, 5);
    // 0126ee  jb 0x1272c
    X86_AT(c, 0x126eeu);
    if (x86_cc(c, 2)) { goto L_1272c; }
    X86_TICK(c, 26);
    // 0126f0  mov ecx, 7
    X86_AT(c, 0x126f0u);
    c.r[1] = 0x7u;
    // 0126f5  sub cl, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126f5u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 0126fc  mov bh, bl
    X86_AT(c, 0x126fcu);
    s8(c, 7, g8(c, 3));
    // 0126fe  sub bh, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126feu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 012705  mov byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x12705u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)), g8(c, 3));
    // 01270c  pushfd 
    X86_AT(c, 0x1270cu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01270d  cli 
    X86_AT(c, 0x1270du);
    c.fl &= ~X86_IF;
L_1270e:
    X86_TICK(c, 27);
    // 01270e  mov bl, byte ptr cs:[ecx + 0x13588]
    X86_AT(c, 0x1270eu);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13588u))));
    // 012715  and byte ptr gs:[edi + 0x19fa], bl
    X86_AT(c, 0x12715u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 01271c  and byte ptr gs:[edi + 0x19fc], bl
    X86_AT(c, 0x1271cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 012723  dec ecx
    X86_AT(c, 0x12723u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 012724  dec bh
    X86_AT(c, 0x12724u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_dec(c, v, 1)); }
    // 012726  jne 0x1270e
    X86_AT(c, 0x12726u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1270eu); goto L_1270e; }
    X86_TICK(c, 7);
    // 012728  jmp 0x1276b
    X86_AT(c, 0x12728u);
    goto L_1276b;
L_1272c:
    X86_TICK(c, 28);
    // 01272c  mov ecx, 8
    X86_AT(c, 0x1272cu);
    c.r[1] = 0x8u;
    // 012731  sub cl, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x12731u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 012738  sub byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x12738u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)); uint32_t v = rd8(ea); wr8(ea, x86_sub(c, v, g8(c, 3), 0, 1)); }
    // 01273f  xchg byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x1273fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 3)); s8(c, 3, t); }
    // 012746  pushfd 
    X86_AT(c, 0x12746u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 012747  cli 
    X86_AT(c, 0x12747u);
    c.fl &= ~X86_IF;
L_12748:
    X86_TICK(c, 36);
    // 012748  mov bh, byte ptr cs:[ecx + 0x13580]
    X86_AT(c, 0x12748u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13580u))));
    // 01274f  or byte ptr gs:[edi + 0x19fd], bh
    X86_AT(c, 0x1274fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 7), 1)); }
    // 012756  not bh
    X86_AT(c, 0x12756u);
    { uint32_t v = g8(c, 7); s8(c, 7, ~v & 0xFFu); }
    // 012758  and byte ptr gs:[edi + 0x19fe], bh
    X86_AT(c, 0x12758u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FEu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 7), 1)); }
    // 01275f  and byte ptr gs:[edi + 0x19fb], bh
    X86_AT(c, 0x1275fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 7), 1)); }
    // 012766  inc ecx
    X86_AT(c, 0x12766u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 012767  dec bl
    X86_AT(c, 0x12767u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 012769  jne 0x12748
    X86_AT(c, 0x12769u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x12748u); goto L_12748; }
L_1276b:
    X86_TICK(c, 52);
    // 01276b  mov al, byte ptr gs:[edi + 0x19fa]
    X86_AT(c, 0x1276bu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))));
    // 012772  or al, byte ptr gs:[edi + 0x19fc]
    X86_AT(c, 0x12772u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))), 1)); }
    // 012779  or al, byte ptr gs:[edi + 0x19fb]
    X86_AT(c, 0x12779u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu))), 1)); }
    // 012780  not al
    X86_AT(c, 0x12780u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 012782  mov dx, 0x4f8
    X86_AT(c, 0x12782u);
    s16(c, 2, 0x4F8u);
    // 012786  out dx, al
    X86_AT(c, 0x12786u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012787  popfd 
    X86_AT(c, 0x12787u);
    x86_popfd(c, 4);
    // 012788  movzx ecx, ah
    X86_AT(c, 0x12788u);
    c.r[1] = g8(c, 4);
    // 01278b  mov al, byte ptr cs:[ecx + 0x1364c]
    X86_AT(c, 0x1278bu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x1364Cu))));
    // 012792  mov byte ptr gs:[edi + 0x19f8], al
    X86_AT(c, 0x12792u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u)), g8(c, 0));
    // 012799  shl ecx, 0xd
    X86_AT(c, 0x12799u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[1] = r; }
    // 01279c  mov dword ptr gs:[edi + 0x1a04], ecx
    X86_AT(c, 0x1279cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A04u)), c.r[1]);
L_127a3:
    X86_TICK(c, 36);
    // 0127a3  popal 
    X86_AT(c, 0x127a3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x126dfu, "ran off the end of a function");
}
void f_000126e1(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0126e1  cmp bl, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126e1u);
    (void)x86_sub(c, g8(c, 3), rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1);
    // 0126e8  je 0x127a3
    X86_AT(c, 0x126e8u);
    if (x86_cc(c, 4)) { goto L_127a3; }
    X86_TICK(c, 5);
    // 0126ee  jb 0x1272c
    X86_AT(c, 0x126eeu);
    if (x86_cc(c, 2)) { goto L_1272c; }
    X86_TICK(c, 26);
    // 0126f0  mov ecx, 7
    X86_AT(c, 0x126f0u);
    c.r[1] = 0x7u;
    // 0126f5  sub cl, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126f5u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 0126fc  mov bh, bl
    X86_AT(c, 0x126fcu);
    s8(c, 7, g8(c, 3));
    // 0126fe  sub bh, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126feu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 012705  mov byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x12705u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)), g8(c, 3));
    // 01270c  pushfd 
    X86_AT(c, 0x1270cu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01270d  cli 
    X86_AT(c, 0x1270du);
    c.fl &= ~X86_IF;
L_1270e:
    X86_TICK(c, 27);
    // 01270e  mov bl, byte ptr cs:[ecx + 0x13588]
    X86_AT(c, 0x1270eu);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13588u))));
    // 012715  and byte ptr gs:[edi + 0x19fa], bl
    X86_AT(c, 0x12715u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 01271c  and byte ptr gs:[edi + 0x19fc], bl
    X86_AT(c, 0x1271cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 012723  dec ecx
    X86_AT(c, 0x12723u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 012724  dec bh
    X86_AT(c, 0x12724u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_dec(c, v, 1)); }
    // 012726  jne 0x1270e
    X86_AT(c, 0x12726u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1270eu); goto L_1270e; }
    X86_TICK(c, 7);
    // 012728  jmp 0x1276b
    X86_AT(c, 0x12728u);
    goto L_1276b;
L_1272c:
    X86_TICK(c, 28);
    // 01272c  mov ecx, 8
    X86_AT(c, 0x1272cu);
    c.r[1] = 0x8u;
    // 012731  sub cl, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x12731u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 012738  sub byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x12738u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)); uint32_t v = rd8(ea); wr8(ea, x86_sub(c, v, g8(c, 3), 0, 1)); }
    // 01273f  xchg byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x1273fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 3)); s8(c, 3, t); }
    // 012746  pushfd 
    X86_AT(c, 0x12746u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 012747  cli 
    X86_AT(c, 0x12747u);
    c.fl &= ~X86_IF;
L_12748:
    X86_TICK(c, 36);
    // 012748  mov bh, byte ptr cs:[ecx + 0x13580]
    X86_AT(c, 0x12748u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13580u))));
    // 01274f  or byte ptr gs:[edi + 0x19fd], bh
    X86_AT(c, 0x1274fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 7), 1)); }
    // 012756  not bh
    X86_AT(c, 0x12756u);
    { uint32_t v = g8(c, 7); s8(c, 7, ~v & 0xFFu); }
    // 012758  and byte ptr gs:[edi + 0x19fe], bh
    X86_AT(c, 0x12758u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FEu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 7), 1)); }
    // 01275f  and byte ptr gs:[edi + 0x19fb], bh
    X86_AT(c, 0x1275fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 7), 1)); }
    // 012766  inc ecx
    X86_AT(c, 0x12766u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 012767  dec bl
    X86_AT(c, 0x12767u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 012769  jne 0x12748
    X86_AT(c, 0x12769u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x12748u); goto L_12748; }
L_1276b:
    X86_TICK(c, 52);
    // 01276b  mov al, byte ptr gs:[edi + 0x19fa]
    X86_AT(c, 0x1276bu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))));
    // 012772  or al, byte ptr gs:[edi + 0x19fc]
    X86_AT(c, 0x12772u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))), 1)); }
    // 012779  or al, byte ptr gs:[edi + 0x19fb]
    X86_AT(c, 0x12779u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu))), 1)); }
    // 012780  not al
    X86_AT(c, 0x12780u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 012782  mov dx, 0x4f8
    X86_AT(c, 0x12782u);
    s16(c, 2, 0x4F8u);
    // 012786  out dx, al
    X86_AT(c, 0x12786u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012787  popfd 
    X86_AT(c, 0x12787u);
    x86_popfd(c, 4);
    // 012788  movzx ecx, ah
    X86_AT(c, 0x12788u);
    c.r[1] = g8(c, 4);
    // 01278b  mov al, byte ptr cs:[ecx + 0x1364c]
    X86_AT(c, 0x1278bu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x1364Cu))));
    // 012792  mov byte ptr gs:[edi + 0x19f8], al
    X86_AT(c, 0x12792u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u)), g8(c, 0));
    // 012799  shl ecx, 0xd
    X86_AT(c, 0x12799u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[1] = r; }
    // 01279c  mov dword ptr gs:[edi + 0x1a04], ecx
    X86_AT(c, 0x1279cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A04u)), c.r[1]);
L_127a3:
    X86_TICK(c, 36);
    // 0127a3  popal 
    X86_AT(c, 0x127a3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x126e1u, "ran off the end of a function");
}
void f_000126e8(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0126e8  je 0x127a3
    X86_AT(c, 0x126e8u);
    if (x86_cc(c, 4)) { goto L_127a3; }
    X86_TICK(c, 5);
    // 0126ee  jb 0x1272c
    X86_AT(c, 0x126eeu);
    if (x86_cc(c, 2)) { goto L_1272c; }
    X86_TICK(c, 26);
    // 0126f0  mov ecx, 7
    X86_AT(c, 0x126f0u);
    c.r[1] = 0x7u;
    // 0126f5  sub cl, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126f5u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 0126fc  mov bh, bl
    X86_AT(c, 0x126fcu);
    s8(c, 7, g8(c, 3));
    // 0126fe  sub bh, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126feu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 012705  mov byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x12705u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)), g8(c, 3));
    // 01270c  pushfd 
    X86_AT(c, 0x1270cu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01270d  cli 
    X86_AT(c, 0x1270du);
    c.fl &= ~X86_IF;
L_1270e:
    X86_TICK(c, 27);
    // 01270e  mov bl, byte ptr cs:[ecx + 0x13588]
    X86_AT(c, 0x1270eu);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13588u))));
    // 012715  and byte ptr gs:[edi + 0x19fa], bl
    X86_AT(c, 0x12715u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 01271c  and byte ptr gs:[edi + 0x19fc], bl
    X86_AT(c, 0x1271cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 012723  dec ecx
    X86_AT(c, 0x12723u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 012724  dec bh
    X86_AT(c, 0x12724u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_dec(c, v, 1)); }
    // 012726  jne 0x1270e
    X86_AT(c, 0x12726u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1270eu); goto L_1270e; }
    X86_TICK(c, 7);
    // 012728  jmp 0x1276b
    X86_AT(c, 0x12728u);
    goto L_1276b;
L_1272c:
    X86_TICK(c, 28);
    // 01272c  mov ecx, 8
    X86_AT(c, 0x1272cu);
    c.r[1] = 0x8u;
    // 012731  sub cl, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x12731u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 012738  sub byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x12738u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)); uint32_t v = rd8(ea); wr8(ea, x86_sub(c, v, g8(c, 3), 0, 1)); }
    // 01273f  xchg byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x1273fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 3)); s8(c, 3, t); }
    // 012746  pushfd 
    X86_AT(c, 0x12746u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 012747  cli 
    X86_AT(c, 0x12747u);
    c.fl &= ~X86_IF;
L_12748:
    X86_TICK(c, 36);
    // 012748  mov bh, byte ptr cs:[ecx + 0x13580]
    X86_AT(c, 0x12748u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13580u))));
    // 01274f  or byte ptr gs:[edi + 0x19fd], bh
    X86_AT(c, 0x1274fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 7), 1)); }
    // 012756  not bh
    X86_AT(c, 0x12756u);
    { uint32_t v = g8(c, 7); s8(c, 7, ~v & 0xFFu); }
    // 012758  and byte ptr gs:[edi + 0x19fe], bh
    X86_AT(c, 0x12758u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FEu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 7), 1)); }
    // 01275f  and byte ptr gs:[edi + 0x19fb], bh
    X86_AT(c, 0x1275fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 7), 1)); }
    // 012766  inc ecx
    X86_AT(c, 0x12766u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 012767  dec bl
    X86_AT(c, 0x12767u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 012769  jne 0x12748
    X86_AT(c, 0x12769u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x12748u); goto L_12748; }
L_1276b:
    X86_TICK(c, 52);
    // 01276b  mov al, byte ptr gs:[edi + 0x19fa]
    X86_AT(c, 0x1276bu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))));
    // 012772  or al, byte ptr gs:[edi + 0x19fc]
    X86_AT(c, 0x12772u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))), 1)); }
    // 012779  or al, byte ptr gs:[edi + 0x19fb]
    X86_AT(c, 0x12779u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu))), 1)); }
    // 012780  not al
    X86_AT(c, 0x12780u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 012782  mov dx, 0x4f8
    X86_AT(c, 0x12782u);
    s16(c, 2, 0x4F8u);
    // 012786  out dx, al
    X86_AT(c, 0x12786u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012787  popfd 
    X86_AT(c, 0x12787u);
    x86_popfd(c, 4);
    // 012788  movzx ecx, ah
    X86_AT(c, 0x12788u);
    c.r[1] = g8(c, 4);
    // 01278b  mov al, byte ptr cs:[ecx + 0x1364c]
    X86_AT(c, 0x1278bu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x1364Cu))));
    // 012792  mov byte ptr gs:[edi + 0x19f8], al
    X86_AT(c, 0x12792u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u)), g8(c, 0));
    // 012799  shl ecx, 0xd
    X86_AT(c, 0x12799u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[1] = r; }
    // 01279c  mov dword ptr gs:[edi + 0x1a04], ecx
    X86_AT(c, 0x1279cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A04u)), c.r[1]);
L_127a3:
    X86_TICK(c, 36);
    // 0127a3  popal 
    X86_AT(c, 0x127a3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x126e8u, "ran off the end of a function");
}
void f_000126ee(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0126ee  jb 0x1272c
    X86_AT(c, 0x126eeu);
    if (x86_cc(c, 2)) { goto L_1272c; }
    X86_TICK(c, 26);
    // 0126f0  mov ecx, 7
    X86_AT(c, 0x126f0u);
    c.r[1] = 0x7u;
    // 0126f5  sub cl, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126f5u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 0126fc  mov bh, bl
    X86_AT(c, 0x126fcu);
    s8(c, 7, g8(c, 3));
    // 0126fe  sub bh, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126feu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 012705  mov byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x12705u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)), g8(c, 3));
    // 01270c  pushfd 
    X86_AT(c, 0x1270cu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01270d  cli 
    X86_AT(c, 0x1270du);
    c.fl &= ~X86_IF;
L_1270e:
    X86_TICK(c, 27);
    // 01270e  mov bl, byte ptr cs:[ecx + 0x13588]
    X86_AT(c, 0x1270eu);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13588u))));
    // 012715  and byte ptr gs:[edi + 0x19fa], bl
    X86_AT(c, 0x12715u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 01271c  and byte ptr gs:[edi + 0x19fc], bl
    X86_AT(c, 0x1271cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 012723  dec ecx
    X86_AT(c, 0x12723u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 012724  dec bh
    X86_AT(c, 0x12724u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_dec(c, v, 1)); }
    // 012726  jne 0x1270e
    X86_AT(c, 0x12726u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1270eu); goto L_1270e; }
    X86_TICK(c, 7);
    // 012728  jmp 0x1276b
    X86_AT(c, 0x12728u);
    goto L_1276b;
L_1272c:
    X86_TICK(c, 28);
    // 01272c  mov ecx, 8
    X86_AT(c, 0x1272cu);
    c.r[1] = 0x8u;
    // 012731  sub cl, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x12731u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 012738  sub byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x12738u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)); uint32_t v = rd8(ea); wr8(ea, x86_sub(c, v, g8(c, 3), 0, 1)); }
    // 01273f  xchg byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x1273fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 3)); s8(c, 3, t); }
    // 012746  pushfd 
    X86_AT(c, 0x12746u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 012747  cli 
    X86_AT(c, 0x12747u);
    c.fl &= ~X86_IF;
L_12748:
    X86_TICK(c, 36);
    // 012748  mov bh, byte ptr cs:[ecx + 0x13580]
    X86_AT(c, 0x12748u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13580u))));
    // 01274f  or byte ptr gs:[edi + 0x19fd], bh
    X86_AT(c, 0x1274fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 7), 1)); }
    // 012756  not bh
    X86_AT(c, 0x12756u);
    { uint32_t v = g8(c, 7); s8(c, 7, ~v & 0xFFu); }
    // 012758  and byte ptr gs:[edi + 0x19fe], bh
    X86_AT(c, 0x12758u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FEu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 7), 1)); }
    // 01275f  and byte ptr gs:[edi + 0x19fb], bh
    X86_AT(c, 0x1275fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 7), 1)); }
    // 012766  inc ecx
    X86_AT(c, 0x12766u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 012767  dec bl
    X86_AT(c, 0x12767u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 012769  jne 0x12748
    X86_AT(c, 0x12769u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x12748u); goto L_12748; }
L_1276b:
    X86_TICK(c, 88);
    // 01276b  mov al, byte ptr gs:[edi + 0x19fa]
    X86_AT(c, 0x1276bu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))));
    // 012772  or al, byte ptr gs:[edi + 0x19fc]
    X86_AT(c, 0x12772u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))), 1)); }
    // 012779  or al, byte ptr gs:[edi + 0x19fb]
    X86_AT(c, 0x12779u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu))), 1)); }
    // 012780  not al
    X86_AT(c, 0x12780u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 012782  mov dx, 0x4f8
    X86_AT(c, 0x12782u);
    s16(c, 2, 0x4F8u);
    // 012786  out dx, al
    X86_AT(c, 0x12786u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012787  popfd 
    X86_AT(c, 0x12787u);
    x86_popfd(c, 4);
    // 012788  movzx ecx, ah
    X86_AT(c, 0x12788u);
    c.r[1] = g8(c, 4);
    // 01278b  mov al, byte ptr cs:[ecx + 0x1364c]
    X86_AT(c, 0x1278bu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x1364Cu))));
    // 012792  mov byte ptr gs:[edi + 0x19f8], al
    X86_AT(c, 0x12792u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u)), g8(c, 0));
    // 012799  shl ecx, 0xd
    X86_AT(c, 0x12799u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[1] = r; }
    // 01279c  mov dword ptr gs:[edi + 0x1a04], ecx
    X86_AT(c, 0x1279cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A04u)), c.r[1]);
    // 0127a3  popal 
    X86_AT(c, 0x127a3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x126eeu, "ran off the end of a function");
}
void f_000126f0(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0126f0  mov ecx, 7
    X86_AT(c, 0x126f0u);
    c.r[1] = 0x7u;
    // 0126f5  sub cl, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126f5u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 0126fc  mov bh, bl
    X86_AT(c, 0x126fcu);
    s8(c, 7, g8(c, 3));
    // 0126fe  sub bh, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126feu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 012705  mov byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x12705u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)), g8(c, 3));
    // 01270c  pushfd 
    X86_AT(c, 0x1270cu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01270d  cli 
    X86_AT(c, 0x1270du);
    c.fl &= ~X86_IF;
L_1270e:
    X86_TICK(c, 27);
    // 01270e  mov bl, byte ptr cs:[ecx + 0x13588]
    X86_AT(c, 0x1270eu);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13588u))));
    // 012715  and byte ptr gs:[edi + 0x19fa], bl
    X86_AT(c, 0x12715u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 01271c  and byte ptr gs:[edi + 0x19fc], bl
    X86_AT(c, 0x1271cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 012723  dec ecx
    X86_AT(c, 0x12723u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 012724  dec bh
    X86_AT(c, 0x12724u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_dec(c, v, 1)); }
    // 012726  jne 0x1270e
    X86_AT(c, 0x12726u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1270eu); goto L_1270e; }
    X86_TICK(c, 7);
    // 012728  jmp 0x1276b
    X86_AT(c, 0x12728u);
    goto L_1276b;
L_1276b:
    X86_TICK(c, 88);
    // 01276b  mov al, byte ptr gs:[edi + 0x19fa]
    X86_AT(c, 0x1276bu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))));
    // 012772  or al, byte ptr gs:[edi + 0x19fc]
    X86_AT(c, 0x12772u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))), 1)); }
    // 012779  or al, byte ptr gs:[edi + 0x19fb]
    X86_AT(c, 0x12779u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu))), 1)); }
    // 012780  not al
    X86_AT(c, 0x12780u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 012782  mov dx, 0x4f8
    X86_AT(c, 0x12782u);
    s16(c, 2, 0x4F8u);
    // 012786  out dx, al
    X86_AT(c, 0x12786u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012787  popfd 
    X86_AT(c, 0x12787u);
    x86_popfd(c, 4);
    // 012788  movzx ecx, ah
    X86_AT(c, 0x12788u);
    c.r[1] = g8(c, 4);
    // 01278b  mov al, byte ptr cs:[ecx + 0x1364c]
    X86_AT(c, 0x1278bu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x1364Cu))));
    // 012792  mov byte ptr gs:[edi + 0x19f8], al
    X86_AT(c, 0x12792u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u)), g8(c, 0));
    // 012799  shl ecx, 0xd
    X86_AT(c, 0x12799u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[1] = r; }
    // 01279c  mov dword ptr gs:[edi + 0x1a04], ecx
    X86_AT(c, 0x1279cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A04u)), c.r[1]);
    // 0127a3  popal 
    X86_AT(c, 0x127a3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x126f0u, "ran off the end of a function");
}
void f_000126f5(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0126f5  sub cl, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126f5u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 0126fc  mov bh, bl
    X86_AT(c, 0x126fcu);
    s8(c, 7, g8(c, 3));
    // 0126fe  sub bh, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126feu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 012705  mov byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x12705u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)), g8(c, 3));
    // 01270c  pushfd 
    X86_AT(c, 0x1270cu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01270d  cli 
    X86_AT(c, 0x1270du);
    c.fl &= ~X86_IF;
L_1270e:
    X86_TICK(c, 27);
    // 01270e  mov bl, byte ptr cs:[ecx + 0x13588]
    X86_AT(c, 0x1270eu);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13588u))));
    // 012715  and byte ptr gs:[edi + 0x19fa], bl
    X86_AT(c, 0x12715u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 01271c  and byte ptr gs:[edi + 0x19fc], bl
    X86_AT(c, 0x1271cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 012723  dec ecx
    X86_AT(c, 0x12723u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 012724  dec bh
    X86_AT(c, 0x12724u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_dec(c, v, 1)); }
    // 012726  jne 0x1270e
    X86_AT(c, 0x12726u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1270eu); goto L_1270e; }
    X86_TICK(c, 7);
    // 012728  jmp 0x1276b
    X86_AT(c, 0x12728u);
    goto L_1276b;
L_1276b:
    X86_TICK(c, 88);
    // 01276b  mov al, byte ptr gs:[edi + 0x19fa]
    X86_AT(c, 0x1276bu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))));
    // 012772  or al, byte ptr gs:[edi + 0x19fc]
    X86_AT(c, 0x12772u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))), 1)); }
    // 012779  or al, byte ptr gs:[edi + 0x19fb]
    X86_AT(c, 0x12779u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu))), 1)); }
    // 012780  not al
    X86_AT(c, 0x12780u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 012782  mov dx, 0x4f8
    X86_AT(c, 0x12782u);
    s16(c, 2, 0x4F8u);
    // 012786  out dx, al
    X86_AT(c, 0x12786u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012787  popfd 
    X86_AT(c, 0x12787u);
    x86_popfd(c, 4);
    // 012788  movzx ecx, ah
    X86_AT(c, 0x12788u);
    c.r[1] = g8(c, 4);
    // 01278b  mov al, byte ptr cs:[ecx + 0x1364c]
    X86_AT(c, 0x1278bu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x1364Cu))));
    // 012792  mov byte ptr gs:[edi + 0x19f8], al
    X86_AT(c, 0x12792u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u)), g8(c, 0));
    // 012799  shl ecx, 0xd
    X86_AT(c, 0x12799u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[1] = r; }
    // 01279c  mov dword ptr gs:[edi + 0x1a04], ecx
    X86_AT(c, 0x1279cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A04u)), c.r[1]);
    // 0127a3  popal 
    X86_AT(c, 0x127a3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x126f5u, "ran off the end of a function");
}
void f_000126fc(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0126fc  mov bh, bl
    X86_AT(c, 0x126fcu);
    s8(c, 7, g8(c, 3));
    // 0126fe  sub bh, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126feu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 012705  mov byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x12705u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)), g8(c, 3));
    // 01270c  pushfd 
    X86_AT(c, 0x1270cu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01270d  cli 
    X86_AT(c, 0x1270du);
    c.fl &= ~X86_IF;
L_1270e:
    X86_TICK(c, 27);
    // 01270e  mov bl, byte ptr cs:[ecx + 0x13588]
    X86_AT(c, 0x1270eu);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13588u))));
    // 012715  and byte ptr gs:[edi + 0x19fa], bl
    X86_AT(c, 0x12715u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 01271c  and byte ptr gs:[edi + 0x19fc], bl
    X86_AT(c, 0x1271cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 012723  dec ecx
    X86_AT(c, 0x12723u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 012724  dec bh
    X86_AT(c, 0x12724u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_dec(c, v, 1)); }
    // 012726  jne 0x1270e
    X86_AT(c, 0x12726u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1270eu); goto L_1270e; }
    X86_TICK(c, 7);
    // 012728  jmp 0x1276b
    X86_AT(c, 0x12728u);
    goto L_1276b;
L_1276b:
    X86_TICK(c, 88);
    // 01276b  mov al, byte ptr gs:[edi + 0x19fa]
    X86_AT(c, 0x1276bu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))));
    // 012772  or al, byte ptr gs:[edi + 0x19fc]
    X86_AT(c, 0x12772u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))), 1)); }
    // 012779  or al, byte ptr gs:[edi + 0x19fb]
    X86_AT(c, 0x12779u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu))), 1)); }
    // 012780  not al
    X86_AT(c, 0x12780u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 012782  mov dx, 0x4f8
    X86_AT(c, 0x12782u);
    s16(c, 2, 0x4F8u);
    // 012786  out dx, al
    X86_AT(c, 0x12786u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012787  popfd 
    X86_AT(c, 0x12787u);
    x86_popfd(c, 4);
    // 012788  movzx ecx, ah
    X86_AT(c, 0x12788u);
    c.r[1] = g8(c, 4);
    // 01278b  mov al, byte ptr cs:[ecx + 0x1364c]
    X86_AT(c, 0x1278bu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x1364Cu))));
    // 012792  mov byte ptr gs:[edi + 0x19f8], al
    X86_AT(c, 0x12792u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u)), g8(c, 0));
    // 012799  shl ecx, 0xd
    X86_AT(c, 0x12799u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[1] = r; }
    // 01279c  mov dword ptr gs:[edi + 0x1a04], ecx
    X86_AT(c, 0x1279cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A04u)), c.r[1]);
    // 0127a3  popal 
    X86_AT(c, 0x127a3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x126fcu, "ran off the end of a function");
}
void f_000126fe(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0126fe  sub bh, byte ptr gs:[edi + 0x19f6]
    X86_AT(c, 0x126feu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u))), 0, 1)); }
    // 012705  mov byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x12705u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)), g8(c, 3));
    // 01270c  pushfd 
    X86_AT(c, 0x1270cu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01270d  cli 
    X86_AT(c, 0x1270du);
    c.fl &= ~X86_IF;
L_1270e:
    X86_TICK(c, 27);
    // 01270e  mov bl, byte ptr cs:[ecx + 0x13588]
    X86_AT(c, 0x1270eu);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13588u))));
    // 012715  and byte ptr gs:[edi + 0x19fa], bl
    X86_AT(c, 0x12715u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 01271c  and byte ptr gs:[edi + 0x19fc], bl
    X86_AT(c, 0x1271cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 012723  dec ecx
    X86_AT(c, 0x12723u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 012724  dec bh
    X86_AT(c, 0x12724u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_dec(c, v, 1)); }
    // 012726  jne 0x1270e
    X86_AT(c, 0x12726u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1270eu); goto L_1270e; }
    X86_TICK(c, 7);
    // 012728  jmp 0x1276b
    X86_AT(c, 0x12728u);
    goto L_1276b;
L_1276b:
    X86_TICK(c, 88);
    // 01276b  mov al, byte ptr gs:[edi + 0x19fa]
    X86_AT(c, 0x1276bu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))));
    // 012772  or al, byte ptr gs:[edi + 0x19fc]
    X86_AT(c, 0x12772u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))), 1)); }
    // 012779  or al, byte ptr gs:[edi + 0x19fb]
    X86_AT(c, 0x12779u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu))), 1)); }
    // 012780  not al
    X86_AT(c, 0x12780u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 012782  mov dx, 0x4f8
    X86_AT(c, 0x12782u);
    s16(c, 2, 0x4F8u);
    // 012786  out dx, al
    X86_AT(c, 0x12786u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012787  popfd 
    X86_AT(c, 0x12787u);
    x86_popfd(c, 4);
    // 012788  movzx ecx, ah
    X86_AT(c, 0x12788u);
    c.r[1] = g8(c, 4);
    // 01278b  mov al, byte ptr cs:[ecx + 0x1364c]
    X86_AT(c, 0x1278bu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x1364Cu))));
    // 012792  mov byte ptr gs:[edi + 0x19f8], al
    X86_AT(c, 0x12792u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u)), g8(c, 0));
    // 012799  shl ecx, 0xd
    X86_AT(c, 0x12799u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[1] = r; }
    // 01279c  mov dword ptr gs:[edi + 0x1a04], ecx
    X86_AT(c, 0x1279cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A04u)), c.r[1]);
    // 0127a3  popal 
    X86_AT(c, 0x127a3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x126feu, "ran off the end of a function");
}
void f_00012705(X86Cpu& c) {
    X86_TICK(c, 10);
    // 012705  mov byte ptr gs:[edi + 0x19f6], bl
    X86_AT(c, 0x12705u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F6u)), g8(c, 3));
    // 01270c  pushfd 
    X86_AT(c, 0x1270cu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01270d  cli 
    X86_AT(c, 0x1270du);
    c.fl &= ~X86_IF;
L_1270e:
    X86_TICK(c, 27);
    // 01270e  mov bl, byte ptr cs:[ecx + 0x13588]
    X86_AT(c, 0x1270eu);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13588u))));
    // 012715  and byte ptr gs:[edi + 0x19fa], bl
    X86_AT(c, 0x12715u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 01271c  and byte ptr gs:[edi + 0x19fc], bl
    X86_AT(c, 0x1271cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 012723  dec ecx
    X86_AT(c, 0x12723u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 012724  dec bh
    X86_AT(c, 0x12724u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_dec(c, v, 1)); }
    // 012726  jne 0x1270e
    X86_AT(c, 0x12726u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1270eu); goto L_1270e; }
    X86_TICK(c, 7);
    // 012728  jmp 0x1276b
    X86_AT(c, 0x12728u);
    goto L_1276b;
L_1276b:
    X86_TICK(c, 88);
    // 01276b  mov al, byte ptr gs:[edi + 0x19fa]
    X86_AT(c, 0x1276bu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))));
    // 012772  or al, byte ptr gs:[edi + 0x19fc]
    X86_AT(c, 0x12772u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))), 1)); }
    // 012779  or al, byte ptr gs:[edi + 0x19fb]
    X86_AT(c, 0x12779u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu))), 1)); }
    // 012780  not al
    X86_AT(c, 0x12780u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 012782  mov dx, 0x4f8
    X86_AT(c, 0x12782u);
    s16(c, 2, 0x4F8u);
    // 012786  out dx, al
    X86_AT(c, 0x12786u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012787  popfd 
    X86_AT(c, 0x12787u);
    x86_popfd(c, 4);
    // 012788  movzx ecx, ah
    X86_AT(c, 0x12788u);
    c.r[1] = g8(c, 4);
    // 01278b  mov al, byte ptr cs:[ecx + 0x1364c]
    X86_AT(c, 0x1278bu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x1364Cu))));
    // 012792  mov byte ptr gs:[edi + 0x19f8], al
    X86_AT(c, 0x12792u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u)), g8(c, 0));
    // 012799  shl ecx, 0xd
    X86_AT(c, 0x12799u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[1] = r; }
    // 01279c  mov dword ptr gs:[edi + 0x1a04], ecx
    X86_AT(c, 0x1279cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A04u)), c.r[1]);
    // 0127a3  popal 
    X86_AT(c, 0x127a3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12705u, "ran off the end of a function");
}
void f_0001270c(X86Cpu& c) {
    X86_TICK(c, 8);
    // 01270c  pushfd 
    X86_AT(c, 0x1270cu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01270d  cli 
    X86_AT(c, 0x1270du);
    c.fl &= ~X86_IF;
L_1270e:
    X86_TICK(c, 27);
    // 01270e  mov bl, byte ptr cs:[ecx + 0x13588]
    X86_AT(c, 0x1270eu);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13588u))));
    // 012715  and byte ptr gs:[edi + 0x19fa], bl
    X86_AT(c, 0x12715u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 01271c  and byte ptr gs:[edi + 0x19fc], bl
    X86_AT(c, 0x1271cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 012723  dec ecx
    X86_AT(c, 0x12723u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 012724  dec bh
    X86_AT(c, 0x12724u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_dec(c, v, 1)); }
    // 012726  jne 0x1270e
    X86_AT(c, 0x12726u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1270eu); goto L_1270e; }
    X86_TICK(c, 7);
    // 012728  jmp 0x1276b
    X86_AT(c, 0x12728u);
    goto L_1276b;
L_1276b:
    X86_TICK(c, 88);
    // 01276b  mov al, byte ptr gs:[edi + 0x19fa]
    X86_AT(c, 0x1276bu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))));
    // 012772  or al, byte ptr gs:[edi + 0x19fc]
    X86_AT(c, 0x12772u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))), 1)); }
    // 012779  or al, byte ptr gs:[edi + 0x19fb]
    X86_AT(c, 0x12779u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu))), 1)); }
    // 012780  not al
    X86_AT(c, 0x12780u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 012782  mov dx, 0x4f8
    X86_AT(c, 0x12782u);
    s16(c, 2, 0x4F8u);
    // 012786  out dx, al
    X86_AT(c, 0x12786u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012787  popfd 
    X86_AT(c, 0x12787u);
    x86_popfd(c, 4);
    // 012788  movzx ecx, ah
    X86_AT(c, 0x12788u);
    c.r[1] = g8(c, 4);
    // 01278b  mov al, byte ptr cs:[ecx + 0x1364c]
    X86_AT(c, 0x1278bu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x1364Cu))));
    // 012792  mov byte ptr gs:[edi + 0x19f8], al
    X86_AT(c, 0x12792u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u)), g8(c, 0));
    // 012799  shl ecx, 0xd
    X86_AT(c, 0x12799u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[1] = r; }
    // 01279c  mov dword ptr gs:[edi + 0x1a04], ecx
    X86_AT(c, 0x1279cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A04u)), c.r[1]);
    // 0127a3  popal 
    X86_AT(c, 0x127a3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1270cu, "ran off the end of a function");
}
void f_0001270d(X86Cpu& c) {
    X86_TICK(c, 2);
    // 01270d  cli 
    X86_AT(c, 0x1270du);
    c.fl &= ~X86_IF;
L_1270e:
    X86_TICK(c, 27);
    // 01270e  mov bl, byte ptr cs:[ecx + 0x13588]
    X86_AT(c, 0x1270eu);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13588u))));
    // 012715  and byte ptr gs:[edi + 0x19fa], bl
    X86_AT(c, 0x12715u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 01271c  and byte ptr gs:[edi + 0x19fc], bl
    X86_AT(c, 0x1271cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 012723  dec ecx
    X86_AT(c, 0x12723u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 012724  dec bh
    X86_AT(c, 0x12724u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_dec(c, v, 1)); }
    // 012726  jne 0x1270e
    X86_AT(c, 0x12726u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1270eu); goto L_1270e; }
    X86_TICK(c, 7);
    // 012728  jmp 0x1276b
    X86_AT(c, 0x12728u);
    goto L_1276b;
L_1276b:
    X86_TICK(c, 88);
    // 01276b  mov al, byte ptr gs:[edi + 0x19fa]
    X86_AT(c, 0x1276bu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))));
    // 012772  or al, byte ptr gs:[edi + 0x19fc]
    X86_AT(c, 0x12772u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))), 1)); }
    // 012779  or al, byte ptr gs:[edi + 0x19fb]
    X86_AT(c, 0x12779u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu))), 1)); }
    // 012780  not al
    X86_AT(c, 0x12780u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 012782  mov dx, 0x4f8
    X86_AT(c, 0x12782u);
    s16(c, 2, 0x4F8u);
    // 012786  out dx, al
    X86_AT(c, 0x12786u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012787  popfd 
    X86_AT(c, 0x12787u);
    x86_popfd(c, 4);
    // 012788  movzx ecx, ah
    X86_AT(c, 0x12788u);
    c.r[1] = g8(c, 4);
    // 01278b  mov al, byte ptr cs:[ecx + 0x1364c]
    X86_AT(c, 0x1278bu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x1364Cu))));
    // 012792  mov byte ptr gs:[edi + 0x19f8], al
    X86_AT(c, 0x12792u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u)), g8(c, 0));
    // 012799  shl ecx, 0xd
    X86_AT(c, 0x12799u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[1] = r; }
    // 01279c  mov dword ptr gs:[edi + 0x1a04], ecx
    X86_AT(c, 0x1279cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A04u)), c.r[1]);
    // 0127a3  popal 
    X86_AT(c, 0x127a3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1270du, "ran off the end of a function");
}
void f_0001270e(X86Cpu& c) {
L_1270e:
    X86_TICK(c, 27);
    // 01270e  mov bl, byte ptr cs:[ecx + 0x13588]
    X86_AT(c, 0x1270eu);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13588u))));
    // 012715  and byte ptr gs:[edi + 0x19fa], bl
    X86_AT(c, 0x12715u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 01271c  and byte ptr gs:[edi + 0x19fc], bl
    X86_AT(c, 0x1271cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 012723  dec ecx
    X86_AT(c, 0x12723u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 012724  dec bh
    X86_AT(c, 0x12724u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_dec(c, v, 1)); }
    // 012726  jne 0x1270e
    X86_AT(c, 0x12726u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1270eu); goto L_1270e; }
    X86_TICK(c, 7);
    // 012728  jmp 0x1276b
    X86_AT(c, 0x12728u);
    goto L_1276b;
L_1276b:
    X86_TICK(c, 88);
    // 01276b  mov al, byte ptr gs:[edi + 0x19fa]
    X86_AT(c, 0x1276bu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))));
    // 012772  or al, byte ptr gs:[edi + 0x19fc]
    X86_AT(c, 0x12772u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))), 1)); }
    // 012779  or al, byte ptr gs:[edi + 0x19fb]
    X86_AT(c, 0x12779u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu))), 1)); }
    // 012780  not al
    X86_AT(c, 0x12780u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 012782  mov dx, 0x4f8
    X86_AT(c, 0x12782u);
    s16(c, 2, 0x4F8u);
    // 012786  out dx, al
    X86_AT(c, 0x12786u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012787  popfd 
    X86_AT(c, 0x12787u);
    x86_popfd(c, 4);
    // 012788  movzx ecx, ah
    X86_AT(c, 0x12788u);
    c.r[1] = g8(c, 4);
    // 01278b  mov al, byte ptr cs:[ecx + 0x1364c]
    X86_AT(c, 0x1278bu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x1364Cu))));
    // 012792  mov byte ptr gs:[edi + 0x19f8], al
    X86_AT(c, 0x12792u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u)), g8(c, 0));
    // 012799  shl ecx, 0xd
    X86_AT(c, 0x12799u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[1] = r; }
    // 01279c  mov dword ptr gs:[edi + 0x1a04], ecx
    X86_AT(c, 0x1279cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A04u)), c.r[1]);
    // 0127a3  popal 
    X86_AT(c, 0x127a3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1270eu, "ran off the end of a function");
}
void f_00012715(X86Cpu& c) {
    goto L_12715;
L_1270e:
    X86_TICK(c, 4);
    // 01270e  mov bl, byte ptr cs:[ecx + 0x13588]
    X86_AT(c, 0x1270eu);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13588u))));
L_12715:
    X86_TICK(c, 23);
    // 012715  and byte ptr gs:[edi + 0x19fa], bl
    X86_AT(c, 0x12715u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 01271c  and byte ptr gs:[edi + 0x19fc], bl
    X86_AT(c, 0x1271cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 012723  dec ecx
    X86_AT(c, 0x12723u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 012724  dec bh
    X86_AT(c, 0x12724u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_dec(c, v, 1)); }
    // 012726  jne 0x1270e
    X86_AT(c, 0x12726u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1270eu); goto L_1270e; }
    X86_TICK(c, 7);
    // 012728  jmp 0x1276b
    X86_AT(c, 0x12728u);
    goto L_1276b;
L_1276b:
    X86_TICK(c, 88);
    // 01276b  mov al, byte ptr gs:[edi + 0x19fa]
    X86_AT(c, 0x1276bu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))));
    // 012772  or al, byte ptr gs:[edi + 0x19fc]
    X86_AT(c, 0x12772u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))), 1)); }
    // 012779  or al, byte ptr gs:[edi + 0x19fb]
    X86_AT(c, 0x12779u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu))), 1)); }
    // 012780  not al
    X86_AT(c, 0x12780u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 012782  mov dx, 0x4f8
    X86_AT(c, 0x12782u);
    s16(c, 2, 0x4F8u);
    // 012786  out dx, al
    X86_AT(c, 0x12786u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012787  popfd 
    X86_AT(c, 0x12787u);
    x86_popfd(c, 4);
    // 012788  movzx ecx, ah
    X86_AT(c, 0x12788u);
    c.r[1] = g8(c, 4);
    // 01278b  mov al, byte ptr cs:[ecx + 0x1364c]
    X86_AT(c, 0x1278bu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x1364Cu))));
    // 012792  mov byte ptr gs:[edi + 0x19f8], al
    X86_AT(c, 0x12792u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u)), g8(c, 0));
    // 012799  shl ecx, 0xd
    X86_AT(c, 0x12799u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[1] = r; }
    // 01279c  mov dword ptr gs:[edi + 0x1a04], ecx
    X86_AT(c, 0x1279cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A04u)), c.r[1]);
    // 0127a3  popal 
    X86_AT(c, 0x127a3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12715u, "ran off the end of a function");
}
void f_0001271c(X86Cpu& c) {
    goto L_1271c;
L_1270e:
    X86_TICK(c, 11);
    // 01270e  mov bl, byte ptr cs:[ecx + 0x13588]
    X86_AT(c, 0x1270eu);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13588u))));
    // 012715  and byte ptr gs:[edi + 0x19fa], bl
    X86_AT(c, 0x12715u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
L_1271c:
    X86_TICK(c, 16);
    // 01271c  and byte ptr gs:[edi + 0x19fc], bl
    X86_AT(c, 0x1271cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 012723  dec ecx
    X86_AT(c, 0x12723u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 012724  dec bh
    X86_AT(c, 0x12724u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_dec(c, v, 1)); }
    // 012726  jne 0x1270e
    X86_AT(c, 0x12726u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1270eu); goto L_1270e; }
    X86_TICK(c, 7);
    // 012728  jmp 0x1276b
    X86_AT(c, 0x12728u);
    goto L_1276b;
L_1276b:
    X86_TICK(c, 88);
    // 01276b  mov al, byte ptr gs:[edi + 0x19fa]
    X86_AT(c, 0x1276bu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))));
    // 012772  or al, byte ptr gs:[edi + 0x19fc]
    X86_AT(c, 0x12772u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))), 1)); }
    // 012779  or al, byte ptr gs:[edi + 0x19fb]
    X86_AT(c, 0x12779u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu))), 1)); }
    // 012780  not al
    X86_AT(c, 0x12780u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 012782  mov dx, 0x4f8
    X86_AT(c, 0x12782u);
    s16(c, 2, 0x4F8u);
    // 012786  out dx, al
    X86_AT(c, 0x12786u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012787  popfd 
    X86_AT(c, 0x12787u);
    x86_popfd(c, 4);
    // 012788  movzx ecx, ah
    X86_AT(c, 0x12788u);
    c.r[1] = g8(c, 4);
    // 01278b  mov al, byte ptr cs:[ecx + 0x1364c]
    X86_AT(c, 0x1278bu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x1364Cu))));
    // 012792  mov byte ptr gs:[edi + 0x19f8], al
    X86_AT(c, 0x12792u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u)), g8(c, 0));
    // 012799  shl ecx, 0xd
    X86_AT(c, 0x12799u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[1] = r; }
    // 01279c  mov dword ptr gs:[edi + 0x1a04], ecx
    X86_AT(c, 0x1279cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A04u)), c.r[1]);
    // 0127a3  popal 
    X86_AT(c, 0x127a3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1271cu, "ran off the end of a function");
}
void f_00012723(X86Cpu& c) {
    goto L_12723;
L_1270e:
    X86_TICK(c, 18);
    // 01270e  mov bl, byte ptr cs:[ecx + 0x13588]
    X86_AT(c, 0x1270eu);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13588u))));
    // 012715  and byte ptr gs:[edi + 0x19fa], bl
    X86_AT(c, 0x12715u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 01271c  and byte ptr gs:[edi + 0x19fc], bl
    X86_AT(c, 0x1271cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
L_12723:
    X86_TICK(c, 9);
    // 012723  dec ecx
    X86_AT(c, 0x12723u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 012724  dec bh
    X86_AT(c, 0x12724u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_dec(c, v, 1)); }
    // 012726  jne 0x1270e
    X86_AT(c, 0x12726u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1270eu); goto L_1270e; }
    X86_TICK(c, 7);
    // 012728  jmp 0x1276b
    X86_AT(c, 0x12728u);
    goto L_1276b;
L_1276b:
    X86_TICK(c, 88);
    // 01276b  mov al, byte ptr gs:[edi + 0x19fa]
    X86_AT(c, 0x1276bu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))));
    // 012772  or al, byte ptr gs:[edi + 0x19fc]
    X86_AT(c, 0x12772u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))), 1)); }
    // 012779  or al, byte ptr gs:[edi + 0x19fb]
    X86_AT(c, 0x12779u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu))), 1)); }
    // 012780  not al
    X86_AT(c, 0x12780u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 012782  mov dx, 0x4f8
    X86_AT(c, 0x12782u);
    s16(c, 2, 0x4F8u);
    // 012786  out dx, al
    X86_AT(c, 0x12786u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012787  popfd 
    X86_AT(c, 0x12787u);
    x86_popfd(c, 4);
    // 012788  movzx ecx, ah
    X86_AT(c, 0x12788u);
    c.r[1] = g8(c, 4);
    // 01278b  mov al, byte ptr cs:[ecx + 0x1364c]
    X86_AT(c, 0x1278bu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x1364Cu))));
    // 012792  mov byte ptr gs:[edi + 0x19f8], al
    X86_AT(c, 0x12792u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u)), g8(c, 0));
    // 012799  shl ecx, 0xd
    X86_AT(c, 0x12799u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[1] = r; }
    // 01279c  mov dword ptr gs:[edi + 0x1a04], ecx
    X86_AT(c, 0x1279cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A04u)), c.r[1]);
    // 0127a3  popal 
    X86_AT(c, 0x127a3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12723u, "ran off the end of a function");
}
void f_00012724(X86Cpu& c) {
    goto L_12724;
L_1270e:
    X86_TICK(c, 20);
    // 01270e  mov bl, byte ptr cs:[ecx + 0x13588]
    X86_AT(c, 0x1270eu);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13588u))));
    // 012715  and byte ptr gs:[edi + 0x19fa], bl
    X86_AT(c, 0x12715u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 01271c  and byte ptr gs:[edi + 0x19fc], bl
    X86_AT(c, 0x1271cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 012723  dec ecx
    X86_AT(c, 0x12723u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
L_12724:
    X86_TICK(c, 7);
    // 012724  dec bh
    X86_AT(c, 0x12724u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_dec(c, v, 1)); }
    // 012726  jne 0x1270e
    X86_AT(c, 0x12726u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1270eu); goto L_1270e; }
    X86_TICK(c, 7);
    // 012728  jmp 0x1276b
    X86_AT(c, 0x12728u);
    goto L_1276b;
L_1276b:
    X86_TICK(c, 88);
    // 01276b  mov al, byte ptr gs:[edi + 0x19fa]
    X86_AT(c, 0x1276bu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))));
    // 012772  or al, byte ptr gs:[edi + 0x19fc]
    X86_AT(c, 0x12772u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))), 1)); }
    // 012779  or al, byte ptr gs:[edi + 0x19fb]
    X86_AT(c, 0x12779u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu))), 1)); }
    // 012780  not al
    X86_AT(c, 0x12780u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 012782  mov dx, 0x4f8
    X86_AT(c, 0x12782u);
    s16(c, 2, 0x4F8u);
    // 012786  out dx, al
    X86_AT(c, 0x12786u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012787  popfd 
    X86_AT(c, 0x12787u);
    x86_popfd(c, 4);
    // 012788  movzx ecx, ah
    X86_AT(c, 0x12788u);
    c.r[1] = g8(c, 4);
    // 01278b  mov al, byte ptr cs:[ecx + 0x1364c]
    X86_AT(c, 0x1278bu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x1364Cu))));
    // 012792  mov byte ptr gs:[edi + 0x19f8], al
    X86_AT(c, 0x12792u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u)), g8(c, 0));
    // 012799  shl ecx, 0xd
    X86_AT(c, 0x12799u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[1] = r; }
    // 01279c  mov dword ptr gs:[edi + 0x1a04], ecx
    X86_AT(c, 0x1279cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A04u)), c.r[1]);
    // 0127a3  popal 
    X86_AT(c, 0x127a3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12724u, "ran off the end of a function");
}
void f_00012726(X86Cpu& c) {
    goto L_12726;
L_1270e:
    X86_TICK(c, 22);
    // 01270e  mov bl, byte ptr cs:[ecx + 0x13588]
    X86_AT(c, 0x1270eu);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13588u))));
    // 012715  and byte ptr gs:[edi + 0x19fa], bl
    X86_AT(c, 0x12715u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 01271c  and byte ptr gs:[edi + 0x19fc], bl
    X86_AT(c, 0x1271cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 3), 1)); }
    // 012723  dec ecx
    X86_AT(c, 0x12723u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 012724  dec bh
    X86_AT(c, 0x12724u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_dec(c, v, 1)); }
L_12726:
    X86_TICK(c, 5);
    // 012726  jne 0x1270e
    X86_AT(c, 0x12726u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1270eu); goto L_1270e; }
    X86_TICK(c, 7);
    // 012728  jmp 0x1276b
    X86_AT(c, 0x12728u);
    goto L_1276b;
L_1276b:
    X86_TICK(c, 88);
    // 01276b  mov al, byte ptr gs:[edi + 0x19fa]
    X86_AT(c, 0x1276bu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))));
    // 012772  or al, byte ptr gs:[edi + 0x19fc]
    X86_AT(c, 0x12772u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))), 1)); }
    // 012779  or al, byte ptr gs:[edi + 0x19fb]
    X86_AT(c, 0x12779u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu))), 1)); }
    // 012780  not al
    X86_AT(c, 0x12780u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 012782  mov dx, 0x4f8
    X86_AT(c, 0x12782u);
    s16(c, 2, 0x4F8u);
    // 012786  out dx, al
    X86_AT(c, 0x12786u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012787  popfd 
    X86_AT(c, 0x12787u);
    x86_popfd(c, 4);
    // 012788  movzx ecx, ah
    X86_AT(c, 0x12788u);
    c.r[1] = g8(c, 4);
    // 01278b  mov al, byte ptr cs:[ecx + 0x1364c]
    X86_AT(c, 0x1278bu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x1364Cu))));
    // 012792  mov byte ptr gs:[edi + 0x19f8], al
    X86_AT(c, 0x12792u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u)), g8(c, 0));
    // 012799  shl ecx, 0xd
    X86_AT(c, 0x12799u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[1] = r; }
    // 01279c  mov dword ptr gs:[edi + 0x1a04], ecx
    X86_AT(c, 0x1279cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A04u)), c.r[1]);
    // 0127a3  popal 
    X86_AT(c, 0x127a3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12726u, "ran off the end of a function");
}
void f_00012728(X86Cpu& c) {
    X86_TICK(c, 7);
    // 012728  jmp 0x1276b
    X86_AT(c, 0x12728u);
    goto L_1276b;
L_1276b:
    X86_TICK(c, 88);
    // 01276b  mov al, byte ptr gs:[edi + 0x19fa]
    X86_AT(c, 0x1276bu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))));
    // 012772  or al, byte ptr gs:[edi + 0x19fc]
    X86_AT(c, 0x12772u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))), 1)); }
    // 012779  or al, byte ptr gs:[edi + 0x19fb]
    X86_AT(c, 0x12779u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu))), 1)); }
    // 012780  not al
    X86_AT(c, 0x12780u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 012782  mov dx, 0x4f8
    X86_AT(c, 0x12782u);
    s16(c, 2, 0x4F8u);
    // 012786  out dx, al
    X86_AT(c, 0x12786u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012787  popfd 
    X86_AT(c, 0x12787u);
    x86_popfd(c, 4);
    // 012788  movzx ecx, ah
    X86_AT(c, 0x12788u);
    c.r[1] = g8(c, 4);
    // 01278b  mov al, byte ptr cs:[ecx + 0x1364c]
    X86_AT(c, 0x1278bu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x1364Cu))));
    // 012792  mov byte ptr gs:[edi + 0x19f8], al
    X86_AT(c, 0x12792u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u)), g8(c, 0));
    // 012799  shl ecx, 0xd
    X86_AT(c, 0x12799u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[1] = r; }
    // 01279c  mov dword ptr gs:[edi + 0x1a04], ecx
    X86_AT(c, 0x1279cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A04u)), c.r[1]);
    // 0127a3  popal 
    X86_AT(c, 0x127a3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12728u, "ran off the end of a function");
}
void f_0001276b(X86Cpu& c) {
    X86_TICK(c, 88);
    // 01276b  mov al, byte ptr gs:[edi + 0x19fa]
    X86_AT(c, 0x1276bu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))));
    // 012772  or al, byte ptr gs:[edi + 0x19fc]
    X86_AT(c, 0x12772u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))), 1)); }
    // 012779  or al, byte ptr gs:[edi + 0x19fb]
    X86_AT(c, 0x12779u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu))), 1)); }
    // 012780  not al
    X86_AT(c, 0x12780u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 012782  mov dx, 0x4f8
    X86_AT(c, 0x12782u);
    s16(c, 2, 0x4F8u);
    // 012786  out dx, al
    X86_AT(c, 0x12786u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012787  popfd 
    X86_AT(c, 0x12787u);
    x86_popfd(c, 4);
    // 012788  movzx ecx, ah
    X86_AT(c, 0x12788u);
    c.r[1] = g8(c, 4);
    // 01278b  mov al, byte ptr cs:[ecx + 0x1364c]
    X86_AT(c, 0x1278bu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x1364Cu))));
    // 012792  mov byte ptr gs:[edi + 0x19f8], al
    X86_AT(c, 0x12792u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u)), g8(c, 0));
    // 012799  shl ecx, 0xd
    X86_AT(c, 0x12799u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[1] = r; }
    // 01279c  mov dword ptr gs:[edi + 0x1a04], ecx
    X86_AT(c, 0x1279cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A04u)), c.r[1]);
    // 0127a3  popal 
    X86_AT(c, 0x127a3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1276bu, "ran off the end of a function");
}
void f_00012772(X86Cpu& c) {
    X86_TICK(c, 84);
    // 012772  or al, byte ptr gs:[edi + 0x19fc]
    X86_AT(c, 0x12772u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))), 1)); }
    // 012779  or al, byte ptr gs:[edi + 0x19fb]
    X86_AT(c, 0x12779u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu))), 1)); }
    // 012780  not al
    X86_AT(c, 0x12780u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 012782  mov dx, 0x4f8
    X86_AT(c, 0x12782u);
    s16(c, 2, 0x4F8u);
    // 012786  out dx, al
    X86_AT(c, 0x12786u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012787  popfd 
    X86_AT(c, 0x12787u);
    x86_popfd(c, 4);
    // 012788  movzx ecx, ah
    X86_AT(c, 0x12788u);
    c.r[1] = g8(c, 4);
    // 01278b  mov al, byte ptr cs:[ecx + 0x1364c]
    X86_AT(c, 0x1278bu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x1364Cu))));
    // 012792  mov byte ptr gs:[edi + 0x19f8], al
    X86_AT(c, 0x12792u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u)), g8(c, 0));
    // 012799  shl ecx, 0xd
    X86_AT(c, 0x12799u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[1] = r; }
    // 01279c  mov dword ptr gs:[edi + 0x1a04], ecx
    X86_AT(c, 0x1279cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A04u)), c.r[1]);
    // 0127a3  popal 
    X86_AT(c, 0x127a3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12772u, "ran off the end of a function");
}
void f_00012779(X86Cpu& c) {
    X86_TICK(c, 78);
    // 012779  or al, byte ptr gs:[edi + 0x19fb]
    X86_AT(c, 0x12779u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu))), 1)); }
    // 012780  not al
    X86_AT(c, 0x12780u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 012782  mov dx, 0x4f8
    X86_AT(c, 0x12782u);
    s16(c, 2, 0x4F8u);
    // 012786  out dx, al
    X86_AT(c, 0x12786u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012787  popfd 
    X86_AT(c, 0x12787u);
    x86_popfd(c, 4);
    // 012788  movzx ecx, ah
    X86_AT(c, 0x12788u);
    c.r[1] = g8(c, 4);
    // 01278b  mov al, byte ptr cs:[ecx + 0x1364c]
    X86_AT(c, 0x1278bu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x1364Cu))));
    // 012792  mov byte ptr gs:[edi + 0x19f8], al
    X86_AT(c, 0x12792u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u)), g8(c, 0));
    // 012799  shl ecx, 0xd
    X86_AT(c, 0x12799u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[1] = r; }
    // 01279c  mov dword ptr gs:[edi + 0x1a04], ecx
    X86_AT(c, 0x1279cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A04u)), c.r[1]);
    // 0127a3  popal 
    X86_AT(c, 0x127a3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12779u, "ran off the end of a function");
}
void f_00012780(X86Cpu& c) {
    X86_TICK(c, 72);
    // 012780  not al
    X86_AT(c, 0x12780u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 012782  mov dx, 0x4f8
    X86_AT(c, 0x12782u);
    s16(c, 2, 0x4F8u);
    // 012786  out dx, al
    X86_AT(c, 0x12786u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012787  popfd 
    X86_AT(c, 0x12787u);
    x86_popfd(c, 4);
    // 012788  movzx ecx, ah
    X86_AT(c, 0x12788u);
    c.r[1] = g8(c, 4);
    // 01278b  mov al, byte ptr cs:[ecx + 0x1364c]
    X86_AT(c, 0x1278bu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x1364Cu))));
    // 012792  mov byte ptr gs:[edi + 0x19f8], al
    X86_AT(c, 0x12792u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u)), g8(c, 0));
    // 012799  shl ecx, 0xd
    X86_AT(c, 0x12799u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[1] = r; }
    // 01279c  mov dword ptr gs:[edi + 0x1a04], ecx
    X86_AT(c, 0x1279cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A04u)), c.r[1]);
    // 0127a3  popal 
    X86_AT(c, 0x127a3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12780u, "ran off the end of a function");
}
void f_00012782(X86Cpu& c) {
    X86_TICK(c, 70);
    // 012782  mov dx, 0x4f8
    X86_AT(c, 0x12782u);
    s16(c, 2, 0x4F8u);
    // 012786  out dx, al
    X86_AT(c, 0x12786u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012787  popfd 
    X86_AT(c, 0x12787u);
    x86_popfd(c, 4);
    // 012788  movzx ecx, ah
    X86_AT(c, 0x12788u);
    c.r[1] = g8(c, 4);
    // 01278b  mov al, byte ptr cs:[ecx + 0x1364c]
    X86_AT(c, 0x1278bu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x1364Cu))));
    // 012792  mov byte ptr gs:[edi + 0x19f8], al
    X86_AT(c, 0x12792u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u)), g8(c, 0));
    // 012799  shl ecx, 0xd
    X86_AT(c, 0x12799u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[1] = r; }
    // 01279c  mov dword ptr gs:[edi + 0x1a04], ecx
    X86_AT(c, 0x1279cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A04u)), c.r[1]);
    // 0127a3  popal 
    X86_AT(c, 0x127a3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12782u, "ran off the end of a function");
}
void f_00012786(X86Cpu& c) {
    X86_TICK(c, 68);
    // 012786  out dx, al
    X86_AT(c, 0x12786u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012787  popfd 
    X86_AT(c, 0x12787u);
    x86_popfd(c, 4);
    // 012788  movzx ecx, ah
    X86_AT(c, 0x12788u);
    c.r[1] = g8(c, 4);
    // 01278b  mov al, byte ptr cs:[ecx + 0x1364c]
    X86_AT(c, 0x1278bu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x1364Cu))));
    // 012792  mov byte ptr gs:[edi + 0x19f8], al
    X86_AT(c, 0x12792u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u)), g8(c, 0));
    // 012799  shl ecx, 0xd
    X86_AT(c, 0x12799u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[1] = r; }
    // 01279c  mov dword ptr gs:[edi + 0x1a04], ecx
    X86_AT(c, 0x1279cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A04u)), c.r[1]);
    // 0127a3  popal 
    X86_AT(c, 0x127a3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12786u, "ran off the end of a function");
}
void f_00012787(X86Cpu& c) {
    X86_TICK(c, 56);
    // 012787  popfd 
    X86_AT(c, 0x12787u);
    x86_popfd(c, 4);
    // 012788  movzx ecx, ah
    X86_AT(c, 0x12788u);
    c.r[1] = g8(c, 4);
    // 01278b  mov al, byte ptr cs:[ecx + 0x1364c]
    X86_AT(c, 0x1278bu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x1364Cu))));
    // 012792  mov byte ptr gs:[edi + 0x19f8], al
    X86_AT(c, 0x12792u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u)), g8(c, 0));
    // 012799  shl ecx, 0xd
    X86_AT(c, 0x12799u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[1] = r; }
    // 01279c  mov dword ptr gs:[edi + 0x1a04], ecx
    X86_AT(c, 0x1279cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A04u)), c.r[1]);
    // 0127a3  popal 
    X86_AT(c, 0x127a3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12787u, "ran off the end of a function");
}
void f_00012788(X86Cpu& c) {
    X86_TICK(c, 50);
    // 012788  movzx ecx, ah
    X86_AT(c, 0x12788u);
    c.r[1] = g8(c, 4);
    // 01278b  mov al, byte ptr cs:[ecx + 0x1364c]
    X86_AT(c, 0x1278bu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x1364Cu))));
    // 012792  mov byte ptr gs:[edi + 0x19f8], al
    X86_AT(c, 0x12792u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u)), g8(c, 0));
    // 012799  shl ecx, 0xd
    X86_AT(c, 0x12799u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[1] = r; }
    // 01279c  mov dword ptr gs:[edi + 0x1a04], ecx
    X86_AT(c, 0x1279cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A04u)), c.r[1]);
    // 0127a3  popal 
    X86_AT(c, 0x127a3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12788u, "ran off the end of a function");
}
void f_0001278b(X86Cpu& c) {
    X86_TICK(c, 47);
    // 01278b  mov al, byte ptr cs:[ecx + 0x1364c]
    X86_AT(c, 0x1278bu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x1364Cu))));
    // 012792  mov byte ptr gs:[edi + 0x19f8], al
    X86_AT(c, 0x12792u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u)), g8(c, 0));
    // 012799  shl ecx, 0xd
    X86_AT(c, 0x12799u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[1] = r; }
    // 01279c  mov dword ptr gs:[edi + 0x1a04], ecx
    X86_AT(c, 0x1279cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A04u)), c.r[1]);
    // 0127a3  popal 
    X86_AT(c, 0x127a3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1278bu, "ran off the end of a function");
}
void f_00012792(X86Cpu& c) {
    X86_TICK(c, 43);
    // 012792  mov byte ptr gs:[edi + 0x19f8], al
    X86_AT(c, 0x12792u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u)), g8(c, 0));
    // 012799  shl ecx, 0xd
    X86_AT(c, 0x12799u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[1] = r; }
    // 01279c  mov dword ptr gs:[edi + 0x1a04], ecx
    X86_AT(c, 0x1279cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A04u)), c.r[1]);
    // 0127a3  popal 
    X86_AT(c, 0x127a3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12792u, "ran off the end of a function");
}
void f_00012799(X86Cpu& c) {
    X86_TICK(c, 41);
    // 012799  shl ecx, 0xd
    X86_AT(c, 0x12799u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[1] = r; }
    // 01279c  mov dword ptr gs:[edi + 0x1a04], ecx
    X86_AT(c, 0x1279cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A04u)), c.r[1]);
    // 0127a3  popal 
    X86_AT(c, 0x127a3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12799u, "ran off the end of a function");
}
void f_0001279c(X86Cpu& c) {
    X86_TICK(c, 38);
    // 01279c  mov dword ptr gs:[edi + 0x1a04], ecx
    X86_AT(c, 0x1279cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A04u)), c.r[1]);
    // 0127a3  popal 
    X86_AT(c, 0x127a3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1279cu, "ran off the end of a function");
}
void f_000127a3(X86Cpu& c) {
    X86_TICK(c, 36);
    // 0127a3  popal 
    X86_AT(c, 0x127a3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x127a3u, "ran off the end of a function");
}
void f_000127a4(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0127a4  xor al, al
    X86_AT(c, 0x127a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x127a4u, "ran off the end of a function");
}
void f_000127a6(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0127a6  ret 
    X86_AT(c, 0x127a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x127a6u, "ran off the end of a function");
}
void f_000127a8(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0127a8  cmp bl, 0x40
    X86_AT(c, 0x127a8u);
    (void)x86_sub(c, g8(c, 3), 0x40u, 0, 1);
    // 0127ab  jb 0x1354c
    X86_AT(c, 0x127abu);
    if (x86_cc(c, 2)) { goto L_1354c; }
    X86_TICK(c, 7);
    // 0127b1  cmp bl, 0x47
    X86_AT(c, 0x127b1u);
    (void)x86_sub(c, g8(c, 3), 0x47u, 0, 1);
    // 0127b4  ja 0x1354c
    X86_AT(c, 0x127b4u);
    if (x86_cc(c, 7)) { goto L_1354c; }
    X86_TICK(c, 7);
    // 0127ba  test dx, 0x8080
    X86_AT(c, 0x127bau);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & 0x8080u, 2);
    // 0127bf  jne 0x13557
    X86_AT(c, 0x127bfu);
    if (x86_cc(c, 5)) { goto L_13557; }
    X86_TICK(c, 22);
    // 0127c5  mov ebp, dword ptr [esi + 0x10]
    X86_AT(c, 0x127c5u);
    c.r[5] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)));
    // 0127c8  add ebp, dword ptr [esi + 0x14]
    X86_AT(c, 0x127c8u);
    { uint32_t v = c.r[5]; c.r[5] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u))), 0, 4); }
    // 0127cb  cmp dword ptr [esi + 0xc], ebp
    X86_AT(c, 0x127cbu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu))), c.r[5], 0, 4);
    // 0127ce  jb 0x1357b
    X86_AT(c, 0x127ceu);
    if (x86_cc(c, 2)) { goto L_1357b; }
    X86_TICK(c, 14);
    // 0127d4  xor ebp, ebp
    X86_AT(c, 0x127d4u);
    { uint32_t v = c.r[5]; c.r[5] = x86_logic(c, v ^ c.r[5], 4); }
    // 0127d6  cmp dword ptr [esi + 0xc], ebp
    X86_AT(c, 0x127d6u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu))), c.r[5], 0, 4);
    // 0127d9  je 0x13560
    X86_AT(c, 0x127d9u);
    if (x86_cc(c, 4)) { goto L_13560; }
    X86_TICK(c, 43);
    // 0127df  pushal 
    X86_AT(c, 0x127dfu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0127e0  push es
    X86_AT(c, 0x127e0u);
    push32(c, c.sreg[0]);
    // 0127e1  mov ebp, edi
    X86_AT(c, 0x127e1u);
    c.r[5] = c.r[7];
    // 0127e3  sub bl, 0x40
    X86_AT(c, 0x127e3u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x40u, 0, 1)); }
    // 0127e6  movzx ebx, bl
    X86_AT(c, 0x127e6u);
    c.r[3] = g8(c, 3);
    // 0127e9  mov ch, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x127e9u);
    s8(c, 5, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 0127f0  test byte ptr gs:[ebp + 0x19f8], ch
    X86_AT(c, 0x127f0u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F8u))) & g8(c, 5), 1);
    // 0127f7  je 0x13563
    X86_AT(c, 0x127f7u);
    if (x86_cc(c, 4)) { goto L_13563; }
    X86_TICK(c, 12);
    // 0127fd  test byte ptr gs:[ebp + 0x19fb], ch
    X86_AT(c, 0x127fdu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19FBu))) & g8(c, 5), 1);
    // 012804  jne 0x13552
    X86_AT(c, 0x12804u);
    if (x86_cc(c, 5)) { goto L_13552; }
    X86_TICK(c, 25);
    // 01280a  push 0x140
    X86_AT(c, 0x1280au);
    { uint32_t v = 0x140u; push32(c, v); }
    // 01280f  pop es
    X86_AT(c, 0x1280fu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 012810  mov byte ptr gs:[ebp + ebx*1 + 0x1a30], dh
    X86_AT(c, 0x12810u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] + 0x1A30u)), g8(c, 6));
    // 012818  mov byte ptr gs:[ebp + ebx*1 + 0x1a40], dl
    X86_AT(c, 0x12818u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] + 0x1A40u)), g8(c, 2));
    // 012820  mov word ptr gs:[ebp + ebx*2 + 0x1a50], ds
    X86_AT(c, 0x12820u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 2 + 0x1A50u)), (uint32_t)c.sreg[3]);
    // 012828  mov eax, dword ptr [esi + 0x14]
    X86_AT(c, 0x12828u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)));
    // 01282b  mov dword ptr gs:[ebp + ebx*4 + 0xf0], eax
    X86_AT(c, 0x1282bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 4 + 0xF0u)), c.r[0]);
    // 012833  test eax, eax
    X86_AT(c, 0x12833u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 012835  je 0x1283c
    X86_AT(c, 0x12835u);
    if (x86_cc(c, 4)) { goto L_1283c; }
    X86_TICK(c, 13);
    // 012837  add eax, dword ptr [esi + 0x10]
    X86_AT(c, 0x12837u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u))), 0, 4); }
    // 01283a  jmp 0x1283f
    X86_AT(c, 0x1283au);
    goto L_1283f;
L_1283c:
    X86_TICK(c, 4);
    // 01283c  mov eax, dword ptr [esi + 0xc]
    X86_AT(c, 0x1283cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)));
L_1283f:
    X86_TICK(c, 152);
    // 01283f  mov dword ptr gs:[ebp + ebx*4 + 0x1a80], eax
    X86_AT(c, 0x1283fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 4 + 0x1A80u)), c.r[0]);
    // 012847  lea eax, [esi + 0x20]
    X86_AT(c, 0x12847u);
    c.r[0] = (uint32_t)(c.r[6] + 0x20u);
    // 01284a  mov dword ptr gs:[ebp + ebx*4 + 0x1a60], eax
    X86_AT(c, 0x1284au);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 4 + 0x1A60u)), c.r[0]);
    // 012852  add eax, dword ptr [esi + 0x10]
    X86_AT(c, 0x12852u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u))), 0, 4); }
    // 012855  mov dword ptr gs:[ebp + ebx*4], eax
    X86_AT(c, 0x12855u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 4)), c.r[0]);
    // 01285a  mov al, byte ptr gs:[ebp + 0x19fa]
    X86_AT(c, 0x1285au);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19FAu))));
    // 012861  or al, byte ptr gs:[ebp + 0x19fb]
    X86_AT(c, 0x12861u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19FBu))), 1)); }
    // 012868  or al, byte ptr gs:[ebp + 0x19fc]
    X86_AT(c, 0x12868u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19FCu))), 1)); }
    // 01286f  not al
    X86_AT(c, 0x1286fu);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 012871  or al, ch
    X86_AT(c, 0x12871u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 5), 1)); }
    // 012873  mov dx, 0x4f8
    X86_AT(c, 0x12873u);
    s16(c, 2, 0x4F8u);
    // 012877  out dx, al
    X86_AT(c, 0x12877u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012878  push ds
    X86_AT(c, 0x12878u);
    push32(c, c.sreg[3]);
    // 012879  pop ds
    X86_AT(c, 0x12879u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 01287a  push ds
    X86_AT(c, 0x1287au);
    push32(c, c.sreg[3]);
    // 01287b  pop ds
    X86_AT(c, 0x1287bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 01287c  not ch
    X86_AT(c, 0x1287cu);
    { uint32_t v = g8(c, 5); s8(c, 5, ~v & 0xFFu); }
    // 01287e  and byte ptr gs:[ebp + 0x19f9], ch
    X86_AT(c, 0x1287eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x19F9u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 5), 1)); }
    // 012885  and byte ptr gs:[ebp + 0x19fd], ch
    X86_AT(c, 0x12885u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x19FDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 5), 1)); }
    // 01288c  mov dl, 0xf7
    X86_AT(c, 0x1288cu);
    s8(c, 2, 0xF7u);
    // 01288e  mov al, 0xc0
    X86_AT(c, 0x1288eu);
    s8(c, 0, 0xC0u);
    // 012890  add al, bl
    X86_AT(c, 0x12890u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 012892  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x12892u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 012899  out dx, al
    X86_AT(c, 0x12899u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01289a  push ds
    X86_AT(c, 0x1289au);
    push32(c, c.sreg[3]);
    // 01289b  pop ds
    X86_AT(c, 0x1289bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 01289c  push ds
    X86_AT(c, 0x1289cu);
    push32(c, c.sreg[3]);
    // 01289d  pop ds
    X86_AT(c, 0x1289du);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 01289e  mov dl, 0xf6
    X86_AT(c, 0x1289eu);
    s8(c, 2, 0xF6u);
    // 0128a0  mov al, bl
    X86_AT(c, 0x128a0u);
    s8(c, 0, g8(c, 3));
    // 0128a2  shl al, 5
    X86_AT(c, 0x128a2u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 1, w); if (w) s8(c, 0, r); }
    // 0128a5  out dx, al
    X86_AT(c, 0x128a5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0128a6  push ds
    X86_AT(c, 0x128a6u);
    push32(c, c.sreg[3]);
    // 0128a7  pop ds
    X86_AT(c, 0x128a7u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0128a8  push ds
    X86_AT(c, 0x128a8u);
    push32(c, c.sreg[3]);
    // 0128a9  pop ds
    X86_AT(c, 0x128a9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0128aa  xor edx, edx
    X86_AT(c, 0x128aau);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 0128ac  mov ecx, dword ptr gs:[ebp + ebx*4 + 0x1a80]
    X86_AT(c, 0x128acu);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 4 + 0x1A80u)));
    // 0128b4  cmp ecx, 0x1000
    X86_AT(c, 0x128b4u);
    (void)x86_sub(c, c.r[1], 0x1000u, 0, 4);
    // 0128ba  jb 0x128c1
    X86_AT(c, 0x128bau);
    if (x86_cc(c, 2)) { goto L_128c1; }
    X86_TICK(c, 2);
    // 0128bc  mov ecx, 0x1000
    X86_AT(c, 0x128bcu);
    c.r[1] = 0x1000u;
L_128c1:
    X86_TICK(c, 14);
    // 0128c1  sub dword ptr gs:[ebp + ebx*4 + 0x1a80], ecx
    X86_AT(c, 0x128c1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 4 + 0x1A80u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[1], 0, 4)); }
    // 0128c9  call 0x12b08
    X86_AT(c, 0x128c9u);
    push32(c, 0x128ceu); f_00012b08(c); X86_RET(c, 0x128ceu);
    X86_TICK(c, 12);
    // 0128ce  cmp dword ptr gs:[ebp + ebx*4 + 0xf0], edx
    X86_AT(c, 0x128ceu);
    (void)x86_sub(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 4 + 0xF0u))), c.r[2], 0, 4);
    // 0128d6  jne 0x128f4
    X86_AT(c, 0x128d6u);
    if (x86_cc(c, 5)) { goto L_128f4; }
    X86_TICK(c, 12);
    // 0128d8  cmp dword ptr gs:[ebp + ebx*4 + 0x1a80], edx
    X86_AT(c, 0x128d8u);
    (void)x86_sub(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 4 + 0x1A80u))), c.r[2], 0, 4);
    // 0128e0  jne 0x128f4
    X86_AT(c, 0x128e0u);
    if (x86_cc(c, 5)) { goto L_128f4; }
    X86_TICK(c, 18);
    // 0128e2  mov ch, byte ptr cs:[0x13580]
    X86_AT(c, 0x128e2u);
    s8(c, 5, rd8((c.sbase[1] + (uint32_t)(0x13580u))));
    // 0128e9  or byte ptr gs:[ebp + 0x19fd], ch
    X86_AT(c, 0x128e9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x19FDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 5), 1)); }
    // 0128f0  jmp 0x1293f
    X86_AT(c, 0x128f0u);
    goto L_1293f;
L_128f4:
    X86_TICK(c, 11);
    // 0128f4  mov ecx, dword ptr gs:[ebp + ebx*4 + 0x1a80]
    X86_AT(c, 0x128f4u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 4 + 0x1A80u)));
    // 0128fc  cmp ecx, 0x1000
    X86_AT(c, 0x128fcu);
    (void)x86_sub(c, c.r[1], 0x1000u, 0, 4);
    // 012902  jb 0x12909
    X86_AT(c, 0x12902u);
    if (x86_cc(c, 2)) { goto L_12909; }
    X86_TICK(c, 2);
    // 012904  mov ecx, 0x1000
    X86_AT(c, 0x12904u);
    c.r[1] = 0x1000u;
L_12909:
    X86_TICK(c, 14);
    // 012909  sub dword ptr gs:[ebp + ebx*4 + 0x1a80], ecx
    X86_AT(c, 0x12909u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 4 + 0x1A80u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[1], 0, 4)); }
    // 012911  call 0x12b08
    X86_AT(c, 0x12911u);
    push32(c, 0x12916u); f_00012b08(c); X86_RET(c, 0x12916u);
    X86_TICK(c, 12);
    // 012916  cmp dword ptr gs:[ebp + ebx*4 + 0xf0], edx
    X86_AT(c, 0x12916u);
    (void)x86_sub(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 4 + 0xF0u))), c.r[2], 0, 4);
    // 01291e  jne 0x1293f
    X86_AT(c, 0x1291eu);
    if (x86_cc(c, 5)) { goto L_1293f; }
    X86_TICK(c, 12);
    // 012920  cmp dword ptr gs:[ebp + ebx*4 + 0x1a80], edx
    X86_AT(c, 0x12920u);
    (void)x86_sub(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 4 + 0x1A80u))), c.r[2], 0, 4);
    // 012928  jne 0x1293f
    X86_AT(c, 0x12928u);
    if (x86_cc(c, 5)) { goto L_1293f; }
    X86_TICK(c, 18);
    // 01292a  mov ch, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x1292au);
    s8(c, 5, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 012931  or byte ptr gs:[ebp + 0x19fd], ch
    X86_AT(c, 0x12931u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x19FDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 5), 1)); }
    // 012938  or byte ptr gs:[ebp + 0x19fe], ch
    X86_AT(c, 0x12938u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x19FEu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 5), 1)); }
L_1293f:
    X86_TICK(c, 7);
    // 01293f  call 0x1262c
    X86_AT(c, 0x1293fu);
    push32(c, 0x12944u); f_0001262c(c); X86_RET(c, 0x12944u);
    X86_TICK(c, 7);
    // 012944  cmp ah, 8
    X86_AT(c, 0x12944u);
    (void)x86_sub(c, g8(c, 4), 0x8u, 0, 1);
    // 012947  jb 0x1294d
    X86_AT(c, 0x12947u);
    if (x86_cc(c, 2)) { goto L_1294d; }
    X86_TICK(c, 2);
    // 012949  mov ax, 0x800
    X86_AT(c, 0x12949u);
    s16(c, 0, 0x800u);
L_1294d:
    X86_TICK(c, 211);
    // 01294d  mov dx, 0x4f2
    X86_AT(c, 0x1294du);
    s16(c, 2, 0x4F2u);
    // 012951  out dx, al
    X86_AT(c, 0x12951u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012952  push ds
    X86_AT(c, 0x12952u);
    push32(c, c.sreg[3]);
    // 012953  pop ds
    X86_AT(c, 0x12953u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012954  push ds
    X86_AT(c, 0x12954u);
    push32(c, c.sreg[3]);
    // 012955  pop ds
    X86_AT(c, 0x12955u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012956  inc edx
    X86_AT(c, 0x12956u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 012957  mov al, ah
    X86_AT(c, 0x12957u);
    s8(c, 0, g8(c, 4));
    // 012959  out dx, al
    X86_AT(c, 0x12959u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01295a  push ds
    X86_AT(c, 0x1295au);
    push32(c, c.sreg[3]);
    // 01295b  pop ds
    X86_AT(c, 0x1295bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 01295c  push ds
    X86_AT(c, 0x1295cu);
    push32(c, c.sreg[3]);
    // 01295d  pop ds
    X86_AT(c, 0x1295du);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 01295e  mov al, byte ptr gs:[ebp + ebx*1 + 0x1a40]
    X86_AT(c, 0x1295eu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] + 0x1A40u))));
    // 012966  add al, al
    X86_AT(c, 0x12966u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 012968  mov dl, 0xf0
    X86_AT(c, 0x12968u);
    s8(c, 2, 0xF0u);
    // 01296a  out dx, al
    X86_AT(c, 0x1296au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01296b  push ds
    X86_AT(c, 0x1296bu);
    push32(c, c.sreg[3]);
    // 01296c  pop ds
    X86_AT(c, 0x1296cu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 01296d  push ds
    X86_AT(c, 0x1296du);
    push32(c, c.sreg[3]);
    // 01296e  pop ds
    X86_AT(c, 0x1296eu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 01296f  mov ch, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x1296fu);
    s8(c, 5, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 012976  or byte ptr gs:[ebp + 0x19fb], ch
    X86_AT(c, 0x12976u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x19FBu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 5), 1)); }
    // 01297d  mov al, byte ptr gs:[ebp + 0x19fb]
    X86_AT(c, 0x1297du);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19FBu))));
    // 012984  or al, byte ptr gs:[ebp + 0x19fa]
    X86_AT(c, 0x12984u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19FAu))), 1)); }
    // 01298b  or al, byte ptr gs:[ebp + 0x19fc]
    X86_AT(c, 0x1298bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19FCu))), 1)); }
    // 012992  not al
    X86_AT(c, 0x12992u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 012994  mov dl, 0xf8
    X86_AT(c, 0x12994u);
    s8(c, 2, 0xF8u);
    // 012996  out dx, al
    X86_AT(c, 0x12996u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012997  push ds
    X86_AT(c, 0x12997u);
    push32(c, c.sreg[3]);
    // 012998  pop ds
    X86_AT(c, 0x12998u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012999  push ds
    X86_AT(c, 0x12999u);
    push32(c, c.sreg[3]);
    // 01299a  pop ds
    X86_AT(c, 0x1299au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 01299b  mov dl, 0xea
    X86_AT(c, 0x1299bu);
    s8(c, 2, 0xEAu);
    // 01299d  mov al, byte ptr gs:[ebp + 0x19fb]
    X86_AT(c, 0x1299du);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19FBu))));
    // 0129a4  out dx, al
    X86_AT(c, 0x129a4u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0129a5  push ds
    X86_AT(c, 0x129a5u);
    push32(c, c.sreg[3]);
    // 0129a6  pop ds
    X86_AT(c, 0x129a6u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0129a7  push ds
    X86_AT(c, 0x129a7u);
    push32(c, c.sreg[3]);
    // 0129a8  pop ds
    X86_AT(c, 0x129a8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0129a9  pop es
    X86_AT(c, 0x129a9u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0129aa  popal 
    X86_AT(c, 0x129aau);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0129ab  xor al, al
    X86_AT(c, 0x129abu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0129ad  ret 
    X86_AT(c, 0x129adu);
    c.eip = pop32(c); return;
L_1354c:
    X86_TICK(c, 12);
    // 01354c  mov al, 1
    X86_AT(c, 0x1354cu);
    s8(c, 0, 0x1u);
    // 01354e  ret 
    X86_AT(c, 0x1354eu);
    c.eip = pop32(c); return;
L_13552:
    X86_TICK(c, 40);
    // 013552  pop es
    X86_AT(c, 0x13552u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 013553  popal 
    X86_AT(c, 0x13553u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 013554  mov al, 2
    X86_AT(c, 0x13554u);
    s8(c, 0, 0x2u);
    // 013556  ret 
    X86_AT(c, 0x13556u);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
L_13560:
    X86_TICK(c, 12);
    // 013560  mov al, 6
    X86_AT(c, 0x13560u);
    s8(c, 0, 0x6u);
    // 013562  ret 
    X86_AT(c, 0x13562u);
    c.eip = pop32(c); return;
L_13563:
    X86_TICK(c, 40);
    // 013563  pop es
    X86_AT(c, 0x13563u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 013564  popal 
    X86_AT(c, 0x13564u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 013565  mov al, 7
    X86_AT(c, 0x13565u);
    s8(c, 0, 0x7u);
    // 013567  ret 
    X86_AT(c, 0x13567u);
    c.eip = pop32(c); return;
L_1357b:
    X86_TICK(c, 12);
    // 01357b  mov al, 0xd
    X86_AT(c, 0x1357bu);
    s8(c, 0, 0xDu);
    // 01357d  ret 
    X86_AT(c, 0x1357du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x127a8u, "ran off the end of a function");
}
void f_000129b0(X86Cpu& c) {
    X86_TICK(c, 39);
    // 0129b0  pushal 
    X86_AT(c, 0x129b0u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0129b1  mov dx, 0x4eb
    X86_AT(c, 0x129b1u);
    s16(c, 2, 0x4EBu);
    // 0129b5  in al, dx
    X86_AT(c, 0x129b5u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0129b6  test al, al
    X86_AT(c, 0x129b6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0129b8  je 0x129e8
    X86_AT(c, 0x129b8u);
    if (x86_cc(c, 4)) { goto L_129e8; }
    X86_TICK(c, 2);
    // 0129ba  mov ah, al
    X86_AT(c, 0x129bau);
    s8(c, 4, g8(c, 0));
L_129bc:
    X86_TICK(c, 21);
    // 0129bc  in al, dx
    X86_AT(c, 0x129bcu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0129bd  or ah, al
    X86_AT(c, 0x129bdu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v | g8(c, 0), 1)); }
    // 0129bf  test al, al
    X86_AT(c, 0x129bfu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0129c1  jne 0x129bc
    X86_AT(c, 0x129c1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x129bcu); goto L_129bc; }
    X86_TICK(c, 8);
    // 0129c3  mov al, ah
    X86_AT(c, 0x129c3u);
    s8(c, 0, g8(c, 4));
    // 0129c5  mov ebp, edi
    X86_AT(c, 0x129c5u);
    c.r[5] = c.r[7];
    // 0129c7  xor ebx, ebx
    X86_AT(c, 0x129c7u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v ^ c.r[3], 4); }
    // 0129c9  mov ah, 1
    X86_AT(c, 0x129c9u);
    s8(c, 4, 0x1u);
L_129cb:
    X86_TICK(c, 7);
    // 0129cb  test ah, al
    X86_AT(c, 0x129cbu);
    (void)x86_logic(c, g8(c, 4) & g8(c, 0), 1);
    // 0129cd  je 0x129d4
    X86_AT(c, 0x129cdu);
    if (x86_cc(c, 4)) { goto L_129d4; }
    X86_TICK(c, 7);
    // 0129cf  call 0x129ec
    X86_AT(c, 0x129cfu);
    push32(c, 0x129d4u); f_000129ec(c); X86_RET(c, 0x129d4u);
L_129d4:
    X86_TICK(c, 11);
    // 0129d4  add ah, ah
    X86_AT(c, 0x129d4u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 0129d6  inc ebx
    X86_AT(c, 0x129d6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0129d7  cmp bl, 8
    X86_AT(c, 0x129d7u);
    (void)x86_sub(c, g8(c, 3), 0x8u, 0, 1);
    // 0129da  jne 0x129cb
    X86_AT(c, 0x129dau);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x129cbu); goto L_129cb; }
    X86_TICK(c, 18);
    // 0129dc  mov dx, 0x4f7
    X86_AT(c, 0x129dcu);
    s16(c, 2, 0x4F7u);
    // 0129e0  mov al, byte ptr gs:[ebp + 0x19f7]
    X86_AT(c, 0x129e0u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u))));
    // 0129e7  out dx, al
    X86_AT(c, 0x129e7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_129e8:
    X86_TICK(c, 34);
    // 0129e8  popal 
    X86_AT(c, 0x129e8u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0129e9  ret 
    X86_AT(c, 0x129e9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x129b0u, "ran off the end of a function");
}
void f_000129ec(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0129ec  push ds
    X86_AT(c, 0x129ecu);
    push32(c, c.sreg[3]);
    // 0129ed  push es
    X86_AT(c, 0x129edu);
    push32(c, c.sreg[0]);
    // 0129ee  push eax
    X86_AT(c, 0x129eeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0129ef  push ebx
    X86_AT(c, 0x129efu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0129f0  mov ah, byte ptr gs:[ebp + 0x19fb]
    X86_AT(c, 0x129f0u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19FBu))));
    // 0129f7  and ah, byte ptr gs:[ebp + 0x19f8]
    X86_AT(c, 0x129f7u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F8u))), 1)); }
    // 0129fe  and ah, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x129feu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))), 1)); }
    // 012a05  je 0x12b01
    X86_AT(c, 0x12a05u);
    if (x86_cc(c, 4)) { goto L_12b01; }
    X86_TICK(c, 21);
    // 012a0b  mov ds, word ptr gs:[ebp + ebx*2 + 0x1a50]
    X86_AT(c, 0x12a0bu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 2 + 0x1A50u))) & 0xFFFFu);
    // 012a13  push 0x140
    X86_AT(c, 0x12a13u);
    { uint32_t v = 0x140u; push32(c, v); }
    // 012a18  pop es
    X86_AT(c, 0x12a18u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 012a19  mov ecx, dword ptr gs:[ebp + ebx*4 + 0x1a80]
    X86_AT(c, 0x12a19u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 4 + 0x1A80u)));
    // 012a21  test ecx, ecx
    X86_AT(c, 0x12a21u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 012a23  je 0x12a58
    X86_AT(c, 0x12a23u);
    if (x86_cc(c, 4)) { goto L_12a58; }
    X86_TICK(c, 7);
    // 012a25  cmp ecx, 0x1000
    X86_AT(c, 0x12a25u);
    (void)x86_sub(c, c.r[1], 0x1000u, 0, 4);
    // 012a2b  jbe 0x12a44
    X86_AT(c, 0x12a2bu);
    if (x86_cc(c, 6)) { goto L_12a44; }
    X86_TICK(c, 16);
    // 012a2d  mov ecx, 0x1000
    X86_AT(c, 0x12a2du);
    c.r[1] = 0x1000u;
    // 012a32  sub dword ptr gs:[ebp + ebx*4 + 0x1a80], ecx
    X86_AT(c, 0x12a32u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 4 + 0x1A80u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[1], 0, 4)); }
    // 012a3a  call 0x12c6c
    X86_AT(c, 0x12a3au);
    push32(c, 0x12a3fu); f_00012c6c(c); X86_RET(c, 0x12a3fu);
    X86_TICK(c, 7);
    // 012a3f  jmp 0x12b01
    X86_AT(c, 0x12a3fu);
    goto L_12b01;
L_12a44:
    X86_TICK(c, 14);
    // 012a44  sub dword ptr gs:[ebp + ebx*4 + 0x1a80], ecx
    X86_AT(c, 0x12a44u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 4 + 0x1A80u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[1], 0, 4)); }
    // 012a4c  call 0x12c6c
    X86_AT(c, 0x12a4cu);
    push32(c, 0x12a51u); f_00012c6c(c); X86_RET(c, 0x12a51u);
    X86_TICK(c, 7);
    // 012a51  jmp 0x12b01
    X86_AT(c, 0x12a51u);
    goto L_12b01;
L_12a58:
    X86_TICK(c, 16);
    // 012a58  mov ah, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x12a58u);
    s8(c, 4, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 012a5f  test byte ptr gs:[ebp + 0x19fd], ah
    X86_AT(c, 0x12a5fu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19FDu))) & g8(c, 4), 1);
    // 012a66  je 0x12ab8
    X86_AT(c, 0x12a66u);
    if (x86_cc(c, 4)) { goto L_12ab8; }
    X86_TICK(c, 12);
    // 012a68  test byte ptr gs:[ebp + 0x19fe], ah
    X86_AT(c, 0x12a68u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19FEu))) & g8(c, 4), 1);
    // 012a6f  je 0x12a80
    X86_AT(c, 0x12a6fu);
    if (x86_cc(c, 4)) { goto L_12a80; }
    X86_TICK(c, 16);
    // 012a71  not ah
    X86_AT(c, 0x12a71u);
    { uint32_t v = g8(c, 4); s8(c, 4, ~v & 0xFFu); }
    // 012a73  and byte ptr gs:[ebp + 0x19fe], ah
    X86_AT(c, 0x12a73u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x19FEu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 4), 1)); }
    // 012a7a  jmp 0x12b01
    X86_AT(c, 0x12a7au);
    goto L_12b01;
L_12a80:
    X86_TICK(c, 100);
    // 012a80  not ah
    X86_AT(c, 0x12a80u);
    { uint32_t v = g8(c, 4); s8(c, 4, ~v & 0xFFu); }
    // 012a82  and byte ptr gs:[ebp + 0x19fb], ah
    X86_AT(c, 0x12a82u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x19FBu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 4), 1)); }
    // 012a89  mov al, byte ptr gs:[ebp + 0x19fb]
    X86_AT(c, 0x12a89u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19FBu))));
    // 012a90  or al, byte ptr gs:[ebp + 0x19fc]
    X86_AT(c, 0x12a90u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19FCu))), 1)); }
    // 012a97  or al, byte ptr gs:[ebp + 0x19fa]
    X86_AT(c, 0x12a97u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19FAu))), 1)); }
    // 012a9e  not al
    X86_AT(c, 0x12a9eu);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 012aa0  mov dx, 0x4f8
    X86_AT(c, 0x12aa0u);
    s16(c, 2, 0x4F8u);
    // 012aa4  out dx, al
    X86_AT(c, 0x12aa4u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012aa5  push ds
    X86_AT(c, 0x12aa5u);
    push32(c, c.sreg[3]);
    // 012aa6  pop ds
    X86_AT(c, 0x12aa6u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012aa7  push ds
    X86_AT(c, 0x12aa7u);
    push32(c, c.sreg[3]);
    // 012aa8  pop ds
    X86_AT(c, 0x12aa8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012aa9  mov dx, 0x4ea
    X86_AT(c, 0x12aa9u);
    s16(c, 2, 0x4EAu);
    // 012aad  in al, dx
    X86_AT(c, 0x12aadu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 012aae  and al, ah
    X86_AT(c, 0x12aaeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 4), 1)); }
    // 012ab0  out dx, al
    X86_AT(c, 0x12ab0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012ab1  push ds
    X86_AT(c, 0x12ab1u);
    push32(c, c.sreg[3]);
    // 012ab2  pop ds
    X86_AT(c, 0x12ab2u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012ab3  push ds
    X86_AT(c, 0x12ab3u);
    push32(c, c.sreg[3]);
    // 012ab4  pop ds
    X86_AT(c, 0x12ab4u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012ab5  jmp 0x12b01
    X86_AT(c, 0x12ab5u);
    goto L_12b01;
L_12ab8:
    X86_TICK(c, 35);
    // 012ab8  mov ch, bl
    X86_AT(c, 0x12ab8u);
    s8(c, 5, g8(c, 3));
    // 012aba  shl ch, 5
    X86_AT(c, 0x12abau);
    { uint32_t v = g8(c, 5); bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 1, w); if (w) s8(c, 5, r); }
    // 012abd  mov cl, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x12abdu);
    s8(c, 1, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 012ac4  or byte ptr gs:[ebp + 0x19fd], cl
    X86_AT(c, 0x12ac4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x19FDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 1), 1)); }
    // 012acb  xor byte ptr gs:[ebp + 0x19f9], cl
    X86_AT(c, 0x12acbu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x19F9u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ g8(c, 1), 1)); }
    // 012ad2  test byte ptr gs:[ebp + 0x19f9], cl
    X86_AT(c, 0x12ad2u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F9u))) & g8(c, 1), 1);
    // 012ad9  jne 0x12ade
    X86_AT(c, 0x12ad9u);
    if (x86_cc(c, 5)) { goto L_12ade; }
    X86_TICK(c, 2);
    // 012adb  add ch, 0x10
    X86_AT(c, 0x12adbu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_add(c, v, 0x10u, 0, 1)); }
L_12ade:
    X86_TICK(c, 90);
    // 012ade  or ch, 0xf
    X86_AT(c, 0x12adeu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v | 0xFu, 1)); }
    // 012ae1  mov cl, 0xfe
    X86_AT(c, 0x12ae1u);
    s8(c, 1, 0xFEu);
    // 012ae3  mov al, 0xc0
    X86_AT(c, 0x12ae3u);
    s8(c, 0, 0xC0u);
    // 012ae5  add al, bl
    X86_AT(c, 0x12ae5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 012ae7  mov dx, 0x4f7
    X86_AT(c, 0x12ae7u);
    s16(c, 2, 0x4F7u);
    // 012aeb  out dx, al
    X86_AT(c, 0x12aebu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012aec  push ds
    X86_AT(c, 0x12aecu);
    push32(c, c.sreg[3]);
    // 012aed  pop ds
    X86_AT(c, 0x12aedu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012aee  push ds
    X86_AT(c, 0x12aeeu);
    push32(c, c.sreg[3]);
    // 012aef  pop ds
    X86_AT(c, 0x12aefu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012af0  mov al, cl
    X86_AT(c, 0x12af0u);
    s8(c, 0, g8(c, 1));
    // 012af2  mov dl, 0xf4
    X86_AT(c, 0x12af2u);
    s8(c, 2, 0xF4u);
    // 012af4  out dx, al
    X86_AT(c, 0x12af4u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012af5  push ds
    X86_AT(c, 0x12af5u);
    push32(c, c.sreg[3]);
    // 012af6  pop ds
    X86_AT(c, 0x12af6u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012af7  push ds
    X86_AT(c, 0x12af7u);
    push32(c, c.sreg[3]);
    // 012af8  pop ds
    X86_AT(c, 0x12af8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012af9  inc edx
    X86_AT(c, 0x12af9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 012afa  mov al, ch
    X86_AT(c, 0x12afau);
    s8(c, 0, g8(c, 5));
    // 012afc  out dx, al
    X86_AT(c, 0x12afcu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012afd  push ds
    X86_AT(c, 0x12afdu);
    push32(c, c.sreg[3]);
    // 012afe  pop ds
    X86_AT(c, 0x12afeu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012aff  push ds
    X86_AT(c, 0x12affu);
    push32(c, c.sreg[3]);
    // 012b00  pop ds
    X86_AT(c, 0x12b00u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_12b01:
    X86_TICK(c, 26);
    // 012b01  pop ebx
    X86_AT(c, 0x12b01u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 012b02  pop eax
    X86_AT(c, 0x12b02u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 012b03  pop es
    X86_AT(c, 0x12b03u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 012b04  pop ds
    X86_AT(c, 0x12b04u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012b05  ret 
    X86_AT(c, 0x12b05u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x129ecu, "ran off the end of a function");
}
void f_00012b08(X86Cpu& c) {
    X86_TICK(c, 46);
    // 012b08  pushal 
    X86_AT(c, 0x12b08u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 012b09  xor edi, edi
    X86_AT(c, 0x12b09u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v ^ c.r[7], 4); }
    // 012b0b  mov esi, dword ptr gs:[ebp + ebx*4 + 0x1a60]
    X86_AT(c, 0x12b0bu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 4 + 0x1A60u)));
    // 012b13  mov al, bl
    X86_AT(c, 0x12b13u);
    s8(c, 0, g8(c, 3));
    // 012b15  add al, al
    X86_AT(c, 0x12b15u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 012b17  add al, 0x80
    X86_AT(c, 0x12b17u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x80u, 0, 1)); }
    // 012b19  mov ah, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x12b19u);
    s8(c, 4, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 012b20  test byte ptr gs:[ebp + 0x19f9], ah
    X86_AT(c, 0x12b20u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F9u))) & g8(c, 4), 1);
    // 012b27  je 0x12b2b
    X86_AT(c, 0x12b27u);
    if (x86_cc(c, 4)) { goto L_12b2b; }
    X86_TICK(c, 2);
    // 012b29  inc al
    X86_AT(c, 0x12b29u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_inc(c, v, 1)); }
L_12b2b:
    X86_TICK(c, 29);
    // 012b2b  mov dx, 0x4f7
    X86_AT(c, 0x12b2bu);
    s16(c, 2, 0x4F7u);
    // 012b2f  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x12b2fu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 012b36  out dx, al
    X86_AT(c, 0x12b36u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012b37  push ds
    X86_AT(c, 0x12b37u);
    push32(c, c.sreg[3]);
    // 012b38  pop ds
    X86_AT(c, 0x12b38u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012b39  jmp 0x12b3b
    X86_AT(c, 0x12b39u);
    goto L_12b3b;
L_12b3b:
    X86_TICK(c, 2);
    // 012b3b  mov eax, eax
    X86_AT(c, 0x12b3bu);
    c.r[0] = c.r[0];
L_12b3d:
    X86_TICK(c, 14);
    // 012b3d  lodsb al, byte ptr [esi]
    X86_AT(c, 0x12b3du);
    x86_string(c, 3, 1, 0, 4, 3);
    // 012b3e  cmp al, 0xff
    X86_AT(c, 0x12b3eu);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 012b40  jne 0x12b43
    X86_AT(c, 0x12b40u);
    if (x86_cc(c, 5)) { goto L_12b43; }
    X86_TICK(c, 2);
    // 012b42  dec eax
    X86_AT(c, 0x12b42u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
L_12b43:
    X86_TICK(c, 14);
    // 012b43  stosb byte ptr es:[edi], al
    X86_AT(c, 0x12b43u);
    x86_string(c, 2, 1, 0, 4, 3);
    // 012b44  jmp 0x12b46
    X86_AT(c, 0x12b44u);
    goto L_12b46;
L_12b46:
    X86_TICK(c, 7);
    // 012b46  dec ecx
    X86_AT(c, 0x12b46u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 012b47  jne 0x12b3d
    X86_AT(c, 0x12b47u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x12b3du); goto L_12b3d; }
    X86_TICK(c, 7);
    // 012b49  cmp edi, 0x1000
    X86_AT(c, 0x12b49u);
    (void)x86_sub(c, c.r[7], 0x1000u, 0, 4);
    // 012b4f  jne 0x12b87
    X86_AT(c, 0x12b4fu);
    if (x86_cc(c, 5)) { goto L_12b87; }
    X86_TICK(c, 12);
    // 012b51  cmp dword ptr gs:[ebp + ebx*4 + 0x1a80], ecx
    X86_AT(c, 0x12b51u);
    (void)x86_sub(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 4 + 0x1A80u))), c.r[1], 0, 4);
    // 012b59  jne 0x12c0e
    X86_AT(c, 0x12b59u);
    if (x86_cc(c, 5)) { goto L_12c0e; }
    X86_TICK(c, 12);
    // 012b5f  cmp dword ptr gs:[ebp + ebx*4 + 0xf0], ecx
    X86_AT(c, 0x12b5fu);
    (void)x86_sub(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 4 + 0xF0u))), c.r[1], 0, 4);
    // 012b67  je 0x12c0e
    X86_AT(c, 0x12b67u);
    if (x86_cc(c, 4)) { goto L_12c0e; }
    X86_TICK(c, 17);
    // 012b6d  mov esi, dword ptr gs:[ebp + ebx*4]
    X86_AT(c, 0x12b6du);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 4)));
    // 012b72  mov eax, dword ptr gs:[ebp + ebx*4 + 0xf0]
    X86_AT(c, 0x12b72u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 4 + 0xF0u)));
    // 012b7a  mov dword ptr gs:[ebp + ebx*4 + 0x1a80], eax
    X86_AT(c, 0x12b7au);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 4 + 0x1A80u)), c.r[0]);
    // 012b82  jmp 0x12c0e
    X86_AT(c, 0x12b82u);
    goto L_12c0e;
L_12b87:
    X86_TICK(c, 16);
    // 012b87  mov ecx, 0x1000
    X86_AT(c, 0x12b87u);
    c.r[1] = 0x1000u;
    // 012b8c  sub ecx, edi
    X86_AT(c, 0x12b8cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[7], 0, 4); }
    // 012b8e  cmp dword ptr gs:[ebp + ebx*4 + 0xf0], 0
    X86_AT(c, 0x12b8eu);
    (void)x86_sub(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 4 + 0xF0u))), 0x0u, 0, 4);
    // 012b97  je 0x12bc7
    X86_AT(c, 0x12b97u);
    if (x86_cc(c, 4)) { goto L_12bc7; }
    X86_TICK(c, 15);
    // 012b99  mov esi, dword ptr gs:[ebp + ebx*4]
    X86_AT(c, 0x12b99u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 4)));
    // 012b9e  mov eax, dword ptr gs:[ebp + ebx*4 + 0xf0]
    X86_AT(c, 0x12b9eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 4 + 0xF0u)));
    // 012ba6  cmp eax, ecx
    X86_AT(c, 0x12ba6u);
    (void)x86_sub(c, c.r[0], c.r[1], 0, 4);
    // 012ba8  jb 0x12bb6
    X86_AT(c, 0x12ba8u);
    if (x86_cc(c, 2)) { goto L_12bb6; }
    X86_TICK(c, 11);
    // 012baa  sub eax, ecx
    X86_AT(c, 0x12baau);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[1], 0, 4); }
    // 012bac  mov dword ptr gs:[ebp + ebx*4 + 0x1a80], eax
    X86_AT(c, 0x12bacu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 4 + 0x1A80u)), c.r[0]);
    // 012bb4  jmp 0x12b3d
    X86_AT(c, 0x12bb4u);
    X86_POLL(c, 0x12b3du); goto L_12b3d;
L_12bb6:
    X86_TICK(c, 13);
    // 012bb6  mov ecx, eax
    X86_AT(c, 0x12bb6u);
    c.r[1] = c.r[0];
    // 012bb8  xor eax, eax
    X86_AT(c, 0x12bb8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 012bba  mov dword ptr gs:[ebp + ebx*4 + 0x1a80], eax
    X86_AT(c, 0x12bbau);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 4 + 0x1A80u)), c.r[0]);
    // 012bc2  jmp 0x12b3d
    X86_AT(c, 0x12bc2u);
    X86_POLL(c, 0x12b3du); goto L_12b3d;
L_12bc7:
    X86_TICK(c, 2);
    // 012bc7  xor al, al
    X86_AT(c, 0x12bc7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
L_12bc9:
    X86_TICK(c, 13);
    // 012bc9  push ds
    X86_AT(c, 0x12bc9u);
    push32(c, c.sreg[3]);
    // 012bca  pop ds
    X86_AT(c, 0x12bcau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012bcb  jmp 0x12bcd
    X86_AT(c, 0x12bcbu);
    goto L_12bcd;
L_12bcd:
    X86_TICK(c, 20);
    // 012bcd  mov eax, eax
    X86_AT(c, 0x12bcdu);
    c.r[0] = c.r[0];
    // 012bcf  stosb byte ptr es:[edi], al
    X86_AT(c, 0x12bcfu);
    x86_string(c, 2, 1, 0, 4, 3);
    // 012bd0  loop 0x12bc9
    X86_AT(c, 0x12bd0u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x12bc9u); goto L_12bc9; }
    X86_TICK(c, 13);
    // 012bd2  push ds
    X86_AT(c, 0x12bd2u);
    push32(c, c.sreg[3]);
    // 012bd3  pop ds
    X86_AT(c, 0x12bd3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012bd4  jmp 0x12bd6
    X86_AT(c, 0x12bd4u);
    goto L_12bd6;
L_12bd6:
    X86_TICK(c, 17);
    // 012bd6  mov eax, eax
    X86_AT(c, 0x12bd6u);
    c.r[0] = c.r[0];
    // 012bd8  mov byte ptr es:[0xffe], 0
    X86_AT(c, 0x12bd8u);
    wr8((c.sbase[0] + (uint32_t)(0xFFEu)), 0x0u);
    // 012be0  push ds
    X86_AT(c, 0x12be0u);
    push32(c, c.sreg[3]);
    // 012be1  pop ds
    X86_AT(c, 0x12be1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012be2  jmp 0x12be4
    X86_AT(c, 0x12be2u);
    goto L_12be4;
L_12be4:
    X86_TICK(c, 20);
    // 012be4  mov eax, eax
    X86_AT(c, 0x12be4u);
    c.r[0] = c.r[0];
    // 012be6  mov byte ptr es:[0xfff], 0xff
    X86_AT(c, 0x12be6u);
    wr8((c.sbase[0] + (uint32_t)(0xFFFu)), 0xFFu);
    // 012bee  mov cl, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x12beeu);
    s8(c, 1, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 012bf5  test byte ptr gs:[ebp + 0x19f9], cl
    X86_AT(c, 0x12bf5u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F9u))) & g8(c, 1), 1);
    // 012bfc  je 0x12c00
    X86_AT(c, 0x12bfcu);
    if (x86_cc(c, 4)) { goto L_12c00; }
    X86_TICK(c, 2);
    // 012bfe  mov ch, 0x10
    X86_AT(c, 0x12bfeu);
    s8(c, 5, 0x10u);
L_12c00:
    X86_TICK(c, 18);
    // 012c00  mov cl, bl
    X86_AT(c, 0x12c00u);
    s8(c, 1, g8(c, 3));
    // 012c02  shl cl, 5
    X86_AT(c, 0x12c02u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 1, w); if (w) s8(c, 1, r); }
    // 012c05  add ch, cl
    X86_AT(c, 0x12c05u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_add(c, v, g8(c, 1), 0, 1)); }
    // 012c07  or ch, 0xf
    X86_AT(c, 0x12c07u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v | 0xFu, 1)); }
    // 012c0a  mov cl, 0xfe
    X86_AT(c, 0x12c0au);
    s8(c, 1, 0xFEu);
    // 012c0c  jmp 0x12c45
    X86_AT(c, 0x12c0cu);
    goto L_12c45;
L_12c0e:
    X86_TICK(c, 13);
    // 012c0e  push ds
    X86_AT(c, 0x12c0eu);
    push32(c, c.sreg[3]);
    // 012c0f  pop ds
    X86_AT(c, 0x12c0fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012c10  jmp 0x12c12
    X86_AT(c, 0x12c10u);
    goto L_12c12;
L_12c12:
    X86_TICK(c, 34);
    // 012c12  mov eax, eax
    X86_AT(c, 0x12c12u);
    c.r[0] = c.r[0];
    // 012c14  mov byte ptr es:[0xfff], 0xff
    X86_AT(c, 0x12c14u);
    wr8((c.sbase[0] + (uint32_t)(0xFFFu)), 0xFFu);
    // 012c1c  mov dword ptr gs:[ebp + ebx*4 + 0x1a60], esi
    X86_AT(c, 0x12c1cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 4 + 0x1A60u)), c.r[6]);
    // 012c24  mov ch, bl
    X86_AT(c, 0x12c24u);
    s8(c, 5, g8(c, 3));
    // 012c26  shl ch, 5
    X86_AT(c, 0x12c26u);
    { uint32_t v = g8(c, 5); bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 1, w); if (w) s8(c, 5, r); }
    // 012c29  mov cl, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x12c29u);
    s8(c, 1, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 012c30  xor byte ptr gs:[ebp + 0x19f9], cl
    X86_AT(c, 0x12c30u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x19F9u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ g8(c, 1), 1)); }
    // 012c37  test byte ptr gs:[ebp + 0x19f9], cl
    X86_AT(c, 0x12c37u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F9u))) & g8(c, 1), 1);
    // 012c3e  jne 0x12c43
    X86_AT(c, 0x12c3eu);
    if (x86_cc(c, 5)) { goto L_12c43; }
    X86_TICK(c, 2);
    // 012c40  add ch, 0x10
    X86_AT(c, 0x12c40u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_add(c, v, 0x10u, 0, 1)); }
L_12c43:
    X86_TICK(c, 2);
    // 012c43  xor cl, cl
    X86_AT(c, 0x12c43u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v ^ g8(c, 1), 1)); }
L_12c45:
    X86_TICK(c, 122);
    // 012c45  mov al, 0xc0
    X86_AT(c, 0x12c45u);
    s8(c, 0, 0xC0u);
    // 012c47  add al, bl
    X86_AT(c, 0x12c47u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 012c49  mov dx, 0x4f7
    X86_AT(c, 0x12c49u);
    s16(c, 2, 0x4F7u);
    // 012c4d  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x12c4du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 012c54  out dx, al
    X86_AT(c, 0x12c54u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012c55  push ds
    X86_AT(c, 0x12c55u);
    push32(c, c.sreg[3]);
    // 012c56  pop ds
    X86_AT(c, 0x12c56u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012c57  push ds
    X86_AT(c, 0x12c57u);
    push32(c, c.sreg[3]);
    // 012c58  pop ds
    X86_AT(c, 0x12c58u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012c59  mov al, cl
    X86_AT(c, 0x12c59u);
    s8(c, 0, g8(c, 1));
    // 012c5b  mov dl, 0xf4
    X86_AT(c, 0x12c5bu);
    s8(c, 2, 0xF4u);
    // 012c5d  out dx, al
    X86_AT(c, 0x12c5du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012c5e  push ds
    X86_AT(c, 0x12c5eu);
    push32(c, c.sreg[3]);
    // 012c5f  pop ds
    X86_AT(c, 0x12c5fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012c60  push ds
    X86_AT(c, 0x12c60u);
    push32(c, c.sreg[3]);
    // 012c61  pop ds
    X86_AT(c, 0x12c61u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012c62  inc edx
    X86_AT(c, 0x12c62u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 012c63  mov al, ch
    X86_AT(c, 0x12c63u);
    s8(c, 0, g8(c, 5));
    // 012c65  out dx, al
    X86_AT(c, 0x12c65u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012c66  push ds
    X86_AT(c, 0x12c66u);
    push32(c, c.sreg[3]);
    // 012c67  pop ds
    X86_AT(c, 0x12c67u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012c68  push ds
    X86_AT(c, 0x12c68u);
    push32(c, c.sreg[3]);
    // 012c69  pop ds
    X86_AT(c, 0x12c69u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012c6a  popal 
    X86_AT(c, 0x12c6au);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012c6b  ret 
    X86_AT(c, 0x12c6bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12b08u, "ran off the end of a function");
}
void f_00012c6c(X86Cpu& c) {
    X86_TICK(c, 28);
    // 012c6c  xor edi, edi
    X86_AT(c, 0x12c6cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v ^ c.r[7], 4); }
    // 012c6e  mov esi, dword ptr gs:[ebp + ebx*4 + 0x1a60]
    X86_AT(c, 0x12c6eu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 4 + 0x1A60u)));
    // 012c76  mov al, bl
    X86_AT(c, 0x12c76u);
    s8(c, 0, g8(c, 3));
    // 012c78  add al, al
    X86_AT(c, 0x12c78u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 012c7a  add al, 0x80
    X86_AT(c, 0x12c7au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x80u, 0, 1)); }
    // 012c7c  mov ah, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x12c7cu);
    s8(c, 4, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 012c83  test byte ptr gs:[ebp + 0x19f9], ah
    X86_AT(c, 0x12c83u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F9u))) & g8(c, 4), 1);
    // 012c8a  je 0x12c8e
    X86_AT(c, 0x12c8au);
    if (x86_cc(c, 4)) { goto L_12c8e; }
    X86_TICK(c, 2);
    // 012c8c  inc al
    X86_AT(c, 0x12c8cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_inc(c, v, 1)); }
L_12c8e:
    X86_TICK(c, 27);
    // 012c8e  mov dx, 0x4f7
    X86_AT(c, 0x12c8eu);
    s16(c, 2, 0x4F7u);
    // 012c92  out dx, al
    X86_AT(c, 0x12c92u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012c93  push ds
    X86_AT(c, 0x12c93u);
    push32(c, c.sreg[3]);
    // 012c94  pop ds
    X86_AT(c, 0x12c94u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012c95  jmp 0x12c97
    X86_AT(c, 0x12c95u);
    goto L_12c97;
L_12c97:
    X86_TICK(c, 2);
    // 012c97  mov eax, eax
    X86_AT(c, 0x12c97u);
    c.r[0] = c.r[0];
L_12c99:
    X86_TICK(c, 14);
    // 012c99  lodsb al, byte ptr [esi]
    X86_AT(c, 0x12c99u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 012c9a  cmp al, 0xff
    X86_AT(c, 0x12c9au);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 012c9c  jne 0x12ca0
    X86_AT(c, 0x12c9cu);
    if (x86_cc(c, 5)) { goto L_12ca0; }
    X86_TICK(c, 2);
    // 012c9e  dec al
    X86_AT(c, 0x12c9eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
L_12ca0:
    X86_TICK(c, 14);
    // 012ca0  stosb byte ptr es:[edi], al
    X86_AT(c, 0x12ca0u);
    x86_string(c, 2, 1, 0, 4, 3);
    // 012ca1  jmp 0x12ca3
    X86_AT(c, 0x12ca1u);
    goto L_12ca3;
L_12ca3:
    X86_TICK(c, 11);
    // 012ca3  loop 0x12c99
    X86_AT(c, 0x12ca3u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x12c99u); goto L_12c99; }
    X86_TICK(c, 7);
    // 012ca5  cmp edi, 0x1000
    X86_AT(c, 0x12ca5u);
    (void)x86_sub(c, c.r[7], 0x1000u, 0, 4);
    // 012cab  jne 0x12cdc
    X86_AT(c, 0x12cabu);
    if (x86_cc(c, 5)) { goto L_12cdc; }
    X86_TICK(c, 12);
    // 012cad  cmp dword ptr gs:[ebp + ebx*4 + 0x1a80], ecx
    X86_AT(c, 0x12cadu);
    (void)x86_sub(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 4 + 0x1A80u))), c.r[1], 0, 4);
    // 012cb5  jne 0x12d32
    X86_AT(c, 0x12cb5u);
    if (x86_cc(c, 5)) { goto L_12d32; }
    X86_TICK(c, 12);
    // 012cbb  cmp dword ptr gs:[ebp + ebx*4 + 0xf0], ecx
    X86_AT(c, 0x12cbbu);
    (void)x86_sub(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 4 + 0xF0u))), c.r[1], 0, 4);
    // 012cc3  je 0x12d32
    X86_AT(c, 0x12cc3u);
    if (x86_cc(c, 4)) { goto L_12d32; }
    X86_TICK(c, 17);
    // 012cc5  mov esi, dword ptr gs:[ebp + ebx*4]
    X86_AT(c, 0x12cc5u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 4)));
    // 012cca  mov eax, dword ptr gs:[ebp + ebx*4 + 0xf0]
    X86_AT(c, 0x12ccau);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 4 + 0xF0u)));
    // 012cd2  mov dword ptr gs:[ebp + ebx*4 + 0x1a80], eax
    X86_AT(c, 0x12cd2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 4 + 0x1A80u)), c.r[0]);
    // 012cda  jmp 0x12d32
    X86_AT(c, 0x12cdau);
    goto L_12d32;
L_12cdc:
    X86_TICK(c, 16);
    // 012cdc  mov ecx, 0x1000
    X86_AT(c, 0x12cdcu);
    c.r[1] = 0x1000u;
    // 012ce1  sub ecx, edi
    X86_AT(c, 0x12ce1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[7], 0, 4); }
    // 012ce3  cmp dword ptr gs:[ebp + ebx*4 + 0xf0], 0
    X86_AT(c, 0x12ce3u);
    (void)x86_sub(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 4 + 0xF0u))), 0x0u, 0, 4);
    // 012cec  je 0x12d19
    X86_AT(c, 0x12cecu);
    if (x86_cc(c, 4)) { goto L_12d19; }
    X86_TICK(c, 15);
    // 012cee  mov esi, dword ptr gs:[ebp + ebx*4]
    X86_AT(c, 0x12ceeu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 4)));
    // 012cf3  mov eax, dword ptr gs:[ebp + ebx*4 + 0xf0]
    X86_AT(c, 0x12cf3u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 4 + 0xF0u)));
    // 012cfb  cmp eax, ecx
    X86_AT(c, 0x12cfbu);
    (void)x86_sub(c, c.r[0], c.r[1], 0, 4);
    // 012cfd  jb 0x12d0b
    X86_AT(c, 0x12cfdu);
    if (x86_cc(c, 2)) { goto L_12d0b; }
    X86_TICK(c, 11);
    // 012cff  sub eax, ecx
    X86_AT(c, 0x12cffu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[1], 0, 4); }
    // 012d01  mov dword ptr gs:[ebp + ebx*4 + 0x1a80], eax
    X86_AT(c, 0x12d01u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 4 + 0x1A80u)), c.r[0]);
    // 012d09  jmp 0x12c99
    X86_AT(c, 0x12d09u);
    X86_POLL(c, 0x12c99u); goto L_12c99;
L_12d0b:
    X86_TICK(c, 13);
    // 012d0b  mov ecx, eax
    X86_AT(c, 0x12d0bu);
    c.r[1] = c.r[0];
    // 012d0d  xor eax, eax
    X86_AT(c, 0x12d0du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 012d0f  mov dword ptr gs:[ebp + ebx*4 + 0x1a80], eax
    X86_AT(c, 0x12d0fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 4 + 0x1A80u)), c.r[0]);
    // 012d17  jmp 0x12c99
    X86_AT(c, 0x12d17u);
    X86_POLL(c, 0x12c99u); goto L_12c99;
L_12d19:
    X86_TICK(c, 2);
    // 012d19  xor al, al
    X86_AT(c, 0x12d19u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
L_12d1b:
    X86_TICK(c, 13);
    // 012d1b  push ds
    X86_AT(c, 0x12d1bu);
    push32(c, c.sreg[3]);
    // 012d1c  pop ds
    X86_AT(c, 0x12d1cu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012d1d  jmp 0x12d1f
    X86_AT(c, 0x12d1du);
    goto L_12d1f;
L_12d1f:
    X86_TICK(c, 20);
    // 012d1f  mov eax, eax
    X86_AT(c, 0x12d1fu);
    c.r[0] = c.r[0];
    // 012d21  stosb byte ptr es:[edi], al
    X86_AT(c, 0x12d21u);
    x86_string(c, 2, 1, 0, 4, 3);
    // 012d22  loop 0x12d1b
    X86_AT(c, 0x12d22u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x12d1bu); goto L_12d1b; }
    X86_TICK(c, 13);
    // 012d24  push ds
    X86_AT(c, 0x12d24u);
    push32(c, c.sreg[3]);
    // 012d25  pop ds
    X86_AT(c, 0x12d25u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012d26  jmp 0x12d28
    X86_AT(c, 0x12d26u);
    goto L_12d28;
L_12d28:
    X86_TICK(c, 4);
    // 012d28  mov eax, eax
    X86_AT(c, 0x12d28u);
    c.r[0] = c.r[0];
    // 012d2a  mov byte ptr es:[0xffe], 0
    X86_AT(c, 0x12d2au);
    wr8((c.sbase[0] + (uint32_t)(0xFFEu)), 0x0u);
L_12d32:
    X86_TICK(c, 13);
    // 012d32  push ds
    X86_AT(c, 0x12d32u);
    push32(c, c.sreg[3]);
    // 012d33  pop ds
    X86_AT(c, 0x12d33u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012d34  jmp 0x12d36
    X86_AT(c, 0x12d34u);
    goto L_12d36;
L_12d36:
    X86_TICK(c, 34);
    // 012d36  mov eax, eax
    X86_AT(c, 0x12d36u);
    c.r[0] = c.r[0];
    // 012d38  mov byte ptr es:[0xfff], 0xff
    X86_AT(c, 0x12d38u);
    wr8((c.sbase[0] + (uint32_t)(0xFFFu)), 0xFFu);
    // 012d40  mov dword ptr gs:[ebp + ebx*4 + 0x1a60], esi
    X86_AT(c, 0x12d40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] * 4 + 0x1A60u)), c.r[6]);
    // 012d48  mov ch, bl
    X86_AT(c, 0x12d48u);
    s8(c, 5, g8(c, 3));
    // 012d4a  shl ch, 5
    X86_AT(c, 0x12d4au);
    { uint32_t v = g8(c, 5); bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 1, w); if (w) s8(c, 5, r); }
    // 012d4d  mov cl, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x12d4du);
    s8(c, 1, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 012d54  xor byte ptr gs:[ebp + 0x19f9], cl
    X86_AT(c, 0x12d54u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x19F9u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ g8(c, 1), 1)); }
    // 012d5b  test byte ptr gs:[ebp + 0x19f9], cl
    X86_AT(c, 0x12d5bu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F9u))) & g8(c, 1), 1);
    // 012d62  jne 0x12d67
    X86_AT(c, 0x12d62u);
    if (x86_cc(c, 5)) { goto L_12d67; }
    X86_TICK(c, 2);
    // 012d64  add ch, 0x10
    X86_AT(c, 0x12d64u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_add(c, v, 0x10u, 0, 1)); }
L_12d67:
    X86_TICK(c, 98);
    // 012d67  xor cl, cl
    X86_AT(c, 0x12d67u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v ^ g8(c, 1), 1)); }
    // 012d69  mov al, 0xc0
    X86_AT(c, 0x12d69u);
    s8(c, 0, 0xC0u);
    // 012d6b  add al, bl
    X86_AT(c, 0x12d6bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 012d6d  mov dx, 0x4f7
    X86_AT(c, 0x12d6du);
    s16(c, 2, 0x4F7u);
    // 012d71  out dx, al
    X86_AT(c, 0x12d71u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012d72  push ds
    X86_AT(c, 0x12d72u);
    push32(c, c.sreg[3]);
    // 012d73  pop ds
    X86_AT(c, 0x12d73u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012d74  push ds
    X86_AT(c, 0x12d74u);
    push32(c, c.sreg[3]);
    // 012d75  pop ds
    X86_AT(c, 0x12d75u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012d76  mov al, cl
    X86_AT(c, 0x12d76u);
    s8(c, 0, g8(c, 1));
    // 012d78  mov dl, 0xf4
    X86_AT(c, 0x12d78u);
    s8(c, 2, 0xF4u);
    // 012d7a  out dx, al
    X86_AT(c, 0x12d7au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012d7b  push ds
    X86_AT(c, 0x12d7bu);
    push32(c, c.sreg[3]);
    // 012d7c  pop ds
    X86_AT(c, 0x12d7cu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012d7d  push ds
    X86_AT(c, 0x12d7du);
    push32(c, c.sreg[3]);
    // 012d7e  pop ds
    X86_AT(c, 0x12d7eu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012d7f  inc edx
    X86_AT(c, 0x12d7fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 012d80  mov al, ch
    X86_AT(c, 0x12d80u);
    s8(c, 0, g8(c, 5));
    // 012d82  out dx, al
    X86_AT(c, 0x12d82u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012d83  push ds
    X86_AT(c, 0x12d83u);
    push32(c, c.sreg[3]);
    // 012d84  pop ds
    X86_AT(c, 0x12d84u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012d85  push ds
    X86_AT(c, 0x12d85u);
    push32(c, c.sreg[3]);
    // 012d86  pop ds
    X86_AT(c, 0x12d86u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012d87  ret 
    X86_AT(c, 0x12d87u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12c6cu, "ran off the end of a function");
}
void f_00012d88(X86Cpu& c) {
    X86_TICK(c, 7);
    // 012d88  cmp bl, 0x40
    X86_AT(c, 0x12d88u);
    (void)x86_sub(c, g8(c, 3), 0x40u, 0, 1);
    // 012d8b  jb 0x1354c
    X86_AT(c, 0x12d8bu);
    if (x86_cc(c, 2)) { goto L_1354c; }
    X86_TICK(c, 7);
    // 012d91  cmp bl, 0x47
    X86_AT(c, 0x12d91u);
    (void)x86_sub(c, g8(c, 3), 0x47u, 0, 1);
    // 012d94  ja 0x1354c
    X86_AT(c, 0x12d94u);
    if (x86_cc(c, 7)) { goto L_1354c; }
    X86_TICK(c, 27);
    // 012d9a  push ebx
    X86_AT(c, 0x12d9au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 012d9b  sub bl, 0x40
    X86_AT(c, 0x12d9bu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x40u, 0, 1)); }
    // 012d9e  movzx ebx, bl
    X86_AT(c, 0x12d9eu);
    c.r[3] = g8(c, 3);
    // 012da1  mov dl, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x12da1u);
    s8(c, 2, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 012da8  pop ebx
    X86_AT(c, 0x12da8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 012da9  test byte ptr gs:[edi + 0x19fb], dl
    X86_AT(c, 0x12da9u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu))) & g8(c, 2), 1);
    // 012db0  jne 0x12db6
    X86_AT(c, 0x12db0u);
    if (x86_cc(c, 5)) { goto L_12db6; }
    X86_TICK(c, 9);
    // 012db2  xor dl, dl
    X86_AT(c, 0x12db2u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v ^ g8(c, 2), 1)); }
    // 012db4  jmp 0x12db8
    X86_AT(c, 0x12db4u);
    goto L_12db8;
L_12db6:
    X86_TICK(c, 2);
    // 012db6  mov dl, 0xff
    X86_AT(c, 0x12db6u);
    s8(c, 2, 0xFFu);
L_12db8:
    X86_TICK(c, 12);
    // 012db8  xor al, al
    X86_AT(c, 0x12db8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012dba  ret 
    X86_AT(c, 0x12dbau);
    c.eip = pop32(c); return;
L_1354c:
    X86_TICK(c, 12);
    // 01354c  mov al, 1
    X86_AT(c, 0x1354cu);
    s8(c, 0, 0x1u);
    // 01354e  ret 
    X86_AT(c, 0x1354eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12d88u, "ran off the end of a function");
}
void f_00012dbc(X86Cpu& c) {
    X86_TICK(c, 20);
    // 012dbc  pushal 
    X86_AT(c, 0x12dbcu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 012dbd  xor ebx, ebx
    X86_AT(c, 0x12dbdu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v ^ c.r[3], 4); }
L_12dbf:
    X86_TICK(c, 7);
    // 012dbf  call 0x12dd8
    X86_AT(c, 0x12dbfu);
    push32(c, 0x12dc4u); f_00012dd8(c); X86_RET(c, 0x12dc4u);
    X86_TICK(c, 9);
    // 012dc4  inc ebx
    X86_AT(c, 0x12dc4u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 012dc5  cmp bl, 8
    X86_AT(c, 0x12dc5u);
    (void)x86_sub(c, g8(c, 3), 0x8u, 0, 1);
    // 012dc8  jne 0x12dbf
    X86_AT(c, 0x12dc8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x12dbfu); goto L_12dbf; }
    X86_TICK(c, 52);
    // 012dca  mov al, byte ptr gs:[edi + 0x19f7]
    X86_AT(c, 0x12dcau);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F7u))));
    // 012dd1  mov dx, 0x4f7
    X86_AT(c, 0x12dd1u);
    s16(c, 2, 0x4F7u);
    // 012dd5  out dx, al
    X86_AT(c, 0x12dd5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012dd6  popal 
    X86_AT(c, 0x12dd6u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012dd7  ret 
    X86_AT(c, 0x12dd7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12dbcu, "ran off the end of a function");
}
void f_00012dbd(X86Cpu& c) {
    X86_TICK(c, 2);
    // 012dbd  xor ebx, ebx
    X86_AT(c, 0x12dbdu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v ^ c.r[3], 4); }
L_12dbf:
    X86_TICK(c, 7);
    // 012dbf  call 0x12dd8
    X86_AT(c, 0x12dbfu);
    push32(c, 0x12dc4u); f_00012dd8(c); X86_RET(c, 0x12dc4u);
    X86_TICK(c, 9);
    // 012dc4  inc ebx
    X86_AT(c, 0x12dc4u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 012dc5  cmp bl, 8
    X86_AT(c, 0x12dc5u);
    (void)x86_sub(c, g8(c, 3), 0x8u, 0, 1);
    // 012dc8  jne 0x12dbf
    X86_AT(c, 0x12dc8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x12dbfu); goto L_12dbf; }
    X86_TICK(c, 52);
    // 012dca  mov al, byte ptr gs:[edi + 0x19f7]
    X86_AT(c, 0x12dcau);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F7u))));
    // 012dd1  mov dx, 0x4f7
    X86_AT(c, 0x12dd1u);
    s16(c, 2, 0x4F7u);
    // 012dd5  out dx, al
    X86_AT(c, 0x12dd5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012dd6  popal 
    X86_AT(c, 0x12dd6u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012dd7  ret 
    X86_AT(c, 0x12dd7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12dbdu, "ran off the end of a function");
}
void f_00012dbf(X86Cpu& c) {
L_12dbf:
    X86_TICK(c, 7);
    // 012dbf  call 0x12dd8
    X86_AT(c, 0x12dbfu);
    push32(c, 0x12dc4u); f_00012dd8(c); X86_RET(c, 0x12dc4u);
    X86_TICK(c, 9);
    // 012dc4  inc ebx
    X86_AT(c, 0x12dc4u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 012dc5  cmp bl, 8
    X86_AT(c, 0x12dc5u);
    (void)x86_sub(c, g8(c, 3), 0x8u, 0, 1);
    // 012dc8  jne 0x12dbf
    X86_AT(c, 0x12dc8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x12dbfu); goto L_12dbf; }
    X86_TICK(c, 52);
    // 012dca  mov al, byte ptr gs:[edi + 0x19f7]
    X86_AT(c, 0x12dcau);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F7u))));
    // 012dd1  mov dx, 0x4f7
    X86_AT(c, 0x12dd1u);
    s16(c, 2, 0x4F7u);
    // 012dd5  out dx, al
    X86_AT(c, 0x12dd5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012dd6  popal 
    X86_AT(c, 0x12dd6u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012dd7  ret 
    X86_AT(c, 0x12dd7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12dbfu, "ran off the end of a function");
}
void f_00012dc4(X86Cpu& c) {
    goto L_12dc4;
L_12dbf:
    X86_TICK(c, 7);
    // 012dbf  call 0x12dd8
    X86_AT(c, 0x12dbfu);
    push32(c, 0x12dc4u); f_00012dd8(c); X86_RET(c, 0x12dc4u);
L_12dc4:
    X86_TICK(c, 9);
    // 012dc4  inc ebx
    X86_AT(c, 0x12dc4u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 012dc5  cmp bl, 8
    X86_AT(c, 0x12dc5u);
    (void)x86_sub(c, g8(c, 3), 0x8u, 0, 1);
    // 012dc8  jne 0x12dbf
    X86_AT(c, 0x12dc8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x12dbfu); goto L_12dbf; }
    X86_TICK(c, 52);
    // 012dca  mov al, byte ptr gs:[edi + 0x19f7]
    X86_AT(c, 0x12dcau);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F7u))));
    // 012dd1  mov dx, 0x4f7
    X86_AT(c, 0x12dd1u);
    s16(c, 2, 0x4F7u);
    // 012dd5  out dx, al
    X86_AT(c, 0x12dd5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012dd6  popal 
    X86_AT(c, 0x12dd6u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012dd7  ret 
    X86_AT(c, 0x12dd7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12dc4u, "ran off the end of a function");
}
void f_00012dc5(X86Cpu& c) {
    goto L_12dc5;
L_12dbf:
    X86_TICK(c, 7);
    // 012dbf  call 0x12dd8
    X86_AT(c, 0x12dbfu);
    push32(c, 0x12dc4u); f_00012dd8(c); X86_RET(c, 0x12dc4u);
    X86_TICK(c, 2);
    // 012dc4  inc ebx
    X86_AT(c, 0x12dc4u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
L_12dc5:
    X86_TICK(c, 7);
    // 012dc5  cmp bl, 8
    X86_AT(c, 0x12dc5u);
    (void)x86_sub(c, g8(c, 3), 0x8u, 0, 1);
    // 012dc8  jne 0x12dbf
    X86_AT(c, 0x12dc8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x12dbfu); goto L_12dbf; }
    X86_TICK(c, 52);
    // 012dca  mov al, byte ptr gs:[edi + 0x19f7]
    X86_AT(c, 0x12dcau);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F7u))));
    // 012dd1  mov dx, 0x4f7
    X86_AT(c, 0x12dd1u);
    s16(c, 2, 0x4F7u);
    // 012dd5  out dx, al
    X86_AT(c, 0x12dd5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012dd6  popal 
    X86_AT(c, 0x12dd6u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012dd7  ret 
    X86_AT(c, 0x12dd7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12dc5u, "ran off the end of a function");
}
void f_00012dc8(X86Cpu& c) {
    goto L_12dc8;
L_12dbf:
    X86_TICK(c, 7);
    // 012dbf  call 0x12dd8
    X86_AT(c, 0x12dbfu);
    push32(c, 0x12dc4u); f_00012dd8(c); X86_RET(c, 0x12dc4u);
    X86_TICK(c, 4);
    // 012dc4  inc ebx
    X86_AT(c, 0x12dc4u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 012dc5  cmp bl, 8
    X86_AT(c, 0x12dc5u);
    (void)x86_sub(c, g8(c, 3), 0x8u, 0, 1);
L_12dc8:
    X86_TICK(c, 5);
    // 012dc8  jne 0x12dbf
    X86_AT(c, 0x12dc8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x12dbfu); goto L_12dbf; }
    X86_TICK(c, 52);
    // 012dca  mov al, byte ptr gs:[edi + 0x19f7]
    X86_AT(c, 0x12dcau);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F7u))));
    // 012dd1  mov dx, 0x4f7
    X86_AT(c, 0x12dd1u);
    s16(c, 2, 0x4F7u);
    // 012dd5  out dx, al
    X86_AT(c, 0x12dd5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012dd6  popal 
    X86_AT(c, 0x12dd6u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012dd7  ret 
    X86_AT(c, 0x12dd7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12dc8u, "ran off the end of a function");
}
void f_00012dca(X86Cpu& c) {
    X86_TICK(c, 52);
    // 012dca  mov al, byte ptr gs:[edi + 0x19f7]
    X86_AT(c, 0x12dcau);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F7u))));
    // 012dd1  mov dx, 0x4f7
    X86_AT(c, 0x12dd1u);
    s16(c, 2, 0x4F7u);
    // 012dd5  out dx, al
    X86_AT(c, 0x12dd5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012dd6  popal 
    X86_AT(c, 0x12dd6u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012dd7  ret 
    X86_AT(c, 0x12dd7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12dcau, "ran off the end of a function");
}
void f_00012dd1(X86Cpu& c) {
    X86_TICK(c, 48);
    // 012dd1  mov dx, 0x4f7
    X86_AT(c, 0x12dd1u);
    s16(c, 2, 0x4F7u);
    // 012dd5  out dx, al
    X86_AT(c, 0x12dd5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012dd6  popal 
    X86_AT(c, 0x12dd6u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012dd7  ret 
    X86_AT(c, 0x12dd7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12dd1u, "ran off the end of a function");
}
void f_00012dd5(X86Cpu& c) {
    X86_TICK(c, 46);
    // 012dd5  out dx, al
    X86_AT(c, 0x12dd5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012dd6  popal 
    X86_AT(c, 0x12dd6u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012dd7  ret 
    X86_AT(c, 0x12dd7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12dd5u, "ran off the end of a function");
}
void f_00012dd6(X86Cpu& c) {
    X86_TICK(c, 34);
    // 012dd6  popal 
    X86_AT(c, 0x12dd6u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012dd7  ret 
    X86_AT(c, 0x12dd7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12dd6u, "ran off the end of a function");
}
void f_00012dd7(X86Cpu& c) {
    X86_TICK(c, 10);
    // 012dd7  ret 
    X86_AT(c, 0x12dd7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12dd7u, "ran off the end of a function");
}
void f_00012dd8(X86Cpu& c) {
    X86_TICK(c, 18);
    // 012dd8  lea esi, [ebx + ebx*1]
    X86_AT(c, 0x12dd8u);
    c.r[6] = (uint32_t)(c.r[3] + c.r[3]);
    // 012ddb  lea esi, [esi + esi*4]
    X86_AT(c, 0x12ddbu);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 4);
    // 012dde  lea esi, [edi + esi*1 + 0x1aa0]
    X86_AT(c, 0x12ddeu);
    c.r[6] = (uint32_t)(c.r[7] + c.r[6] + 0x1AA0u);
    // 012de5  cmp word ptr gs:[esi + 8], 0
    X86_AT(c, 0x12de5u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u))), 0x0u, 0, 2);
    // 012deb  je 0x12e28
    X86_AT(c, 0x12debu);
    if (x86_cc(c, 4)) { goto L_12e28; }
    X86_TICK(c, 16);
    // 012ded  mov cl, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x12dedu);
    s8(c, 1, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 012df4  test byte ptr gs:[edi + 0x19fc], cl
    X86_AT(c, 0x12df4u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))) & g8(c, 1), 1);
    // 012dfb  je 0x12e28
    X86_AT(c, 0x12dfbu);
    if (x86_cc(c, 4)) { goto L_12e28; }
    X86_TICK(c, 12);
    // 012dfd  test byte ptr gs:[edi + 0x19fa], cl
    X86_AT(c, 0x12dfdu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))) & g8(c, 1), 1);
    // 012e04  je 0x12ec4
    X86_AT(c, 0x12e04u);
    if (x86_cc(c, 4)) { goto L_12ec4; }
    X86_TICK(c, 12);
    // 012e0a  test byte ptr gs:[edi + ebx*1 + 0x1a48], 1
    X86_AT(c, 0x12e0au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A48u))) & 0x1u, 1);
    // 012e13  je 0x12e3c
    X86_AT(c, 0x12e13u);
    if (x86_cc(c, 4)) { goto L_12e3c; }
    X86_TICK(c, 12);
    // 012e15  test byte ptr gs:[edi + ebx*1 + 0x1a48], 2
    X86_AT(c, 0x12e15u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A48u))) & 0x2u, 1);
    // 012e1e  je 0x12e6c
    X86_AT(c, 0x12e1eu);
    if (x86_cc(c, 4)) { goto L_12e6c; }
    X86_TICK(c, 7);
    // 012e20  jmp 0x12e9c
    X86_AT(c, 0x12e20u);
    goto L_12e9c;
L_12e28:
    X86_TICK(c, 23);
    // 012e28  mov ch, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x12e28u);
    s8(c, 5, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 012e2f  not ch
    X86_AT(c, 0x12e2fu);
    { uint32_t v = g8(c, 5); s8(c, 5, ~v & 0xFFu); }
    // 012e31  and byte ptr gs:[edi + 0x19fc], ch
    X86_AT(c, 0x12e31u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 5), 1)); }
    // 012e38  ret 
    X86_AT(c, 0x12e38u);
    c.eip = pop32(c); return;
L_12e3c:
    X86_TICK(c, 21);
    // 012e3c  mov ax, word ptr gs:[esi + 6]
    X86_AT(c, 0x12e3cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x6u))));
    // 012e41  add ax, word ptr gs:[esi + 8]
    X86_AT(c, 0x12e41u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u))), 0, 2)); }
    // 012e46  cmp ah, byte ptr gs:[esi]
    X86_AT(c, 0x12e46u);
    (void)x86_sub(c, g8(c, 4), rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 0, 1);
    // 012e49  ja 0x12e65
    X86_AT(c, 0x12e49u);
    if (x86_cc(c, 7)) { goto L_12e65; }
    X86_TICK(c, 60);
    // 012e4b  mov word ptr gs:[esi + 8], ax
    X86_AT(c, 0x12e4bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 012e50  mov dx, 0x4f7
    X86_AT(c, 0x12e50u);
    s16(c, 2, 0x4F7u);
    // 012e54  mov al, 0xc0
    X86_AT(c, 0x12e54u);
    s8(c, 0, 0xC0u);
    // 012e56  add al, bl
    X86_AT(c, 0x12e56u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 012e58  out dx, al
    X86_AT(c, 0x12e58u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012e59  mov al, ah
    X86_AT(c, 0x12e59u);
    s8(c, 0, g8(c, 4));
    // 012e5b  add al, al
    X86_AT(c, 0x12e5bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 012e5d  mov dl, 0xf0
    X86_AT(c, 0x12e5du);
    s8(c, 2, 0xF0u);
    // 012e5f  out dx, al
    X86_AT(c, 0x12e5fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012e60  push ds
    X86_AT(c, 0x12e60u);
    push32(c, c.sreg[3]);
    // 012e61  pop ds
    X86_AT(c, 0x12e61u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012e62  push ds
    X86_AT(c, 0x12e62u);
    push32(c, c.sreg[3]);
    // 012e63  pop ds
    X86_AT(c, 0x12e63u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012e64  ret 
    X86_AT(c, 0x12e64u);
    c.eip = pop32(c); return;
L_12e65:
    X86_TICK(c, 7);
    // 012e65  call 0x12f30
    X86_AT(c, 0x12e65u);
    push32(c, 0x12e6au); f_00012f30(c); X86_RET(c, 0x12e6au);
    X86_TICK(c, 10);
    // 012e6a  ret 
    X86_AT(c, 0x12e6au);
    c.eip = pop32(c); return;
L_12e6c:
    X86_TICK(c, 21);
    // 012e6c  mov ax, word ptr gs:[esi + 8]
    X86_AT(c, 0x12e6cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u))));
    // 012e71  sub ax, word ptr gs:[esi + 6]
    X86_AT(c, 0x12e71u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x6u))), 0, 2)); }
    // 012e76  cmp ah, byte ptr gs:[esi + 3]
    X86_AT(c, 0x12e76u);
    (void)x86_sub(c, g8(c, 4), rd8((c.sbase[5] + (uint32_t)(c.r[6] + 0x3u))), 0, 1);
    // 012e7a  jl 0x12e96
    X86_AT(c, 0x12e7au);
    if (x86_cc(c, 12)) { goto L_12e96; }
    X86_TICK(c, 60);
    // 012e7c  mov word ptr gs:[esi + 8], ax
    X86_AT(c, 0x12e7cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 012e81  mov dx, 0x4f7
    X86_AT(c, 0x12e81u);
    s16(c, 2, 0x4F7u);
    // 012e85  mov al, 0xc0
    X86_AT(c, 0x12e85u);
    s8(c, 0, 0xC0u);
    // 012e87  add al, bl
    X86_AT(c, 0x12e87u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 012e89  out dx, al
    X86_AT(c, 0x12e89u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012e8a  mov al, ah
    X86_AT(c, 0x12e8au);
    s8(c, 0, g8(c, 4));
    // 012e8c  add al, al
    X86_AT(c, 0x12e8cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 012e8e  mov dl, 0xf0
    X86_AT(c, 0x12e8eu);
    s8(c, 2, 0xF0u);
    // 012e90  out dx, al
    X86_AT(c, 0x12e90u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012e91  push ds
    X86_AT(c, 0x12e91u);
    push32(c, c.sreg[3]);
    // 012e92  pop ds
    X86_AT(c, 0x12e92u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012e93  push ds
    X86_AT(c, 0x12e93u);
    push32(c, c.sreg[3]);
    // 012e94  pop ds
    X86_AT(c, 0x12e94u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012e95  ret 
    X86_AT(c, 0x12e95u);
    c.eip = pop32(c); return;
L_12e96:
    X86_TICK(c, 7);
    // 012e96  call 0x12f78
    X86_AT(c, 0x12e96u);
    push32(c, 0x12e9bu); f_00012f78(c); X86_RET(c, 0x12e9bu);
    X86_TICK(c, 10);
    // 012e9b  ret 
    X86_AT(c, 0x12e9bu);
    c.eip = pop32(c); return;
L_12e9c:
    X86_TICK(c, 15);
    // 012e9c  mov ax, word ptr gs:[esi + 8]
    X86_AT(c, 0x12e9cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u))));
    // 012ea1  sub ax, word ptr gs:[esi + 6]
    X86_AT(c, 0x12ea1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x6u))), 0, 2)); }
    // 012ea6  ja 0x12eaa
    X86_AT(c, 0x12ea6u);
    if (x86_cc(c, 7)) { goto L_12eaa; }
    X86_TICK(c, 2);
    // 012ea8  xor eax, eax
    X86_AT(c, 0x12ea8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
L_12eaa:
    X86_TICK(c, 60);
    // 012eaa  mov word ptr gs:[esi + 8], ax
    X86_AT(c, 0x12eaau);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 012eaf  mov dx, 0x4f7
    X86_AT(c, 0x12eafu);
    s16(c, 2, 0x4F7u);
    // 012eb3  mov al, 0xc0
    X86_AT(c, 0x12eb3u);
    s8(c, 0, 0xC0u);
    // 012eb5  add al, bl
    X86_AT(c, 0x12eb5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 012eb7  out dx, al
    X86_AT(c, 0x12eb7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012eb8  mov al, ah
    X86_AT(c, 0x12eb8u);
    s8(c, 0, g8(c, 4));
    // 012eba  add al, al
    X86_AT(c, 0x12ebau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 012ebc  mov dl, 0xf0
    X86_AT(c, 0x12ebcu);
    s8(c, 2, 0xF0u);
    // 012ebe  out dx, al
    X86_AT(c, 0x12ebeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012ebf  push ds
    X86_AT(c, 0x12ebfu);
    push32(c, c.sreg[3]);
    // 012ec0  pop ds
    X86_AT(c, 0x12ec0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012ec1  push ds
    X86_AT(c, 0x12ec1u);
    push32(c, c.sreg[3]);
    // 012ec2  pop ds
    X86_AT(c, 0x12ec2u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012ec3  ret 
    X86_AT(c, 0x12ec3u);
    c.eip = pop32(c); return;
L_12ec4:
    X86_TICK(c, 15);
    // 012ec4  mov ax, word ptr gs:[esi + 8]
    X86_AT(c, 0x12ec4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u))));
    // 012ec9  sub ax, word ptr gs:[esi + 6]
    X86_AT(c, 0x12ec9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x6u))), 0, 2)); }
    // 012ece  ja 0x12ed2
    X86_AT(c, 0x12eceu);
    if (x86_cc(c, 7)) { goto L_12ed2; }
    X86_TICK(c, 2);
    // 012ed0  xor eax, eax
    X86_AT(c, 0x12ed0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
L_12ed2:
    X86_TICK(c, 60);
    // 012ed2  mov word ptr gs:[esi + 8], ax
    X86_AT(c, 0x12ed2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 012ed7  mov dx, 0x4f7
    X86_AT(c, 0x12ed7u);
    s16(c, 2, 0x4F7u);
    // 012edb  mov al, 0xc0
    X86_AT(c, 0x12edbu);
    s8(c, 0, 0xC0u);
    // 012edd  add al, bl
    X86_AT(c, 0x12eddu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 012edf  out dx, al
    X86_AT(c, 0x12edfu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012ee0  mov al, ah
    X86_AT(c, 0x12ee0u);
    s8(c, 0, g8(c, 4));
    // 012ee2  add al, al
    X86_AT(c, 0x12ee2u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 012ee4  mov dl, 0xf0
    X86_AT(c, 0x12ee4u);
    s8(c, 2, 0xF0u);
    // 012ee6  out dx, al
    X86_AT(c, 0x12ee6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012ee7  push ds
    X86_AT(c, 0x12ee7u);
    push32(c, c.sreg[3]);
    // 012ee8  pop ds
    X86_AT(c, 0x12ee8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012ee9  push ds
    X86_AT(c, 0x12ee9u);
    push32(c, c.sreg[3]);
    // 012eea  pop ds
    X86_AT(c, 0x12eeau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012eeb  ret 
    X86_AT(c, 0x12eebu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12dd8u, "ran off the end of a function");
}
}
