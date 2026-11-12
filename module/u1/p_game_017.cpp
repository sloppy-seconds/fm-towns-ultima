#include "p_game_funcs.h"
namespace p_game {
void f_000dcfe2(X86Cpu& c) {
    X86_TICK(c, 8);
    // 0dcfe2  mov al, byte ptr [ebp - 0xf]
    X86_AT(c, 0xdcfe2u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))));
    // 0dcfe5  mov byte ptr [0x92494], al
    X86_AT(c, 0xdcfe5u);
    wr8((c.sbase[3] + (uint32_t)(0x92494u)), g8(c, 0));
    // 0dcfea  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xdcfeau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_dcff1:
    X86_TICK(c, 12);
    // 0dcff1  cmp dword ptr [ebp - 0xc], 4
    X86_AT(c, 0xdcff1u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x4u, 0, 4);
    // 0dcff5  jge 0xdd1ac
    X86_AT(c, 0xdcff5u);
    if (x86_cc(c, 13)) { goto L_dd1ac; }
    X86_TICK(c, 2);
    // 0dcffb  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xdcffbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_dd002:
    X86_TICK(c, 11);
    // 0dd002  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xdd002u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0dd005  cmp eax, 5
    X86_AT(c, 0xdd005u);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0dd008  jge 0xdd1a4
    X86_AT(c, 0xdd008u);
    if (x86_cc(c, 13)) { goto L_dd1a4; }
    X86_TICK(c, 28);
    // 0dd00e  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xdd00eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0dd011  lea edx, [edx + edx*4]
    X86_AT(c, 0xdd011u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0dd014  add edx, dword ptr [eax*4 + 0xb3cf0]
    X86_AT(c, 0xdd014u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB3CF0u))), 0, 4); }
    // 0dd01b  mov al, byte ptr [edx + 0xb35a4]
    X86_AT(c, 0xdd01bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xB35A4u))));
    // 0dd021  mov byte ptr [ebp - 0xd], al
    X86_AT(c, 0xdd021u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), g8(c, 0));
    // 0dd024  movzx edx, al
    X86_AT(c, 0xdd024u);
    c.r[2] = g8(c, 0);
    // 0dd027  cmp edx, 1
    X86_AT(c, 0xdd027u);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0dd02a  je 0xdd04c
    X86_AT(c, 0xdd02au);
    if (x86_cc(c, 4)) { goto L_dd04c; }
    X86_TICK(c, 7);
    // 0dd02c  cmp edx, 2
    X86_AT(c, 0xdd02cu);
    (void)x86_sub(c, c.r[2], 0x2u, 0, 4);
    // 0dd02f  je 0xdd03a
    X86_AT(c, 0xdd02fu);
    if (x86_cc(c, 4)) { goto L_dd03a; }
    X86_TICK(c, 7);
    // 0dd031  cmp edx, 3
    X86_AT(c, 0xdd031u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0dd034  jne 0xdd19c
    X86_AT(c, 0xdd034u);
    if (x86_cc(c, 5)) { goto L_dd19c; }
L_dd03a:
    X86_TICK(c, 23);
    // 0dd03a  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xdd03au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0dd03d  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xdd03du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0dd040  lea edx, [edx + edx*4]
    X86_AT(c, 0xdd040u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0dd043  add edx, dword ptr [eax*4 + 0xb3cf0]
    X86_AT(c, 0xdd043u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB3CF0u))), 0, 4); }
    // 0dd04a  jmp 0xdd05f
    X86_AT(c, 0xdd04au);
    goto L_dd05f;
L_dd04c:
    X86_TICK(c, 18);
    // 0dd04c  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xdd04cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0dd04f  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xdd04fu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0dd052  lea edx, [edx + edx*4]
    X86_AT(c, 0xdd052u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0dd055  add edx, dword ptr [eax*4 + 0xb3cf0]
    X86_AT(c, 0xdd055u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB3CF0u))), 0, 4); }
    // 0dd05c  add edx, 0x14
    X86_AT(c, 0xdd05cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x14u, 0, 4); }
L_dd05f:
    X86_TICK(c, 12);
    // 0dd05f  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xdd05fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0dd062  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdd062u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0dd065  mov ebx, dword ptr [eax*4 + 0xb5254]
    X86_AT(c, 0xdd065u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB5254u)));
    // 0dd06c  sub esi, esi
    X86_AT(c, 0xdd06cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_dd06e:
    X86_TICK(c, 7);
    // 0dd06e  cmp esi, 0xb
    X86_AT(c, 0xdd06eu);
    (void)x86_sub(c, c.r[6], 0xBu, 0, 4);
    // 0dd071  jge 0xdd19c
    X86_AT(c, 0xdd071u);
    if (x86_cc(c, 13)) { goto L_dd19c; }
    X86_TICK(c, 2);
    // 0dd077  sub edi, edi
    X86_AT(c, 0xdd077u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_dd079:
    X86_TICK(c, 7);
    // 0dd079  cmp edi, 0xb
    X86_AT(c, 0xdd079u);
    (void)x86_sub(c, c.r[7], 0xBu, 0, 4);
    // 0dd07c  jge 0xdd196
    X86_AT(c, 0xdd07cu);
    if (x86_cc(c, 13)) { goto L_dd196; }
    X86_TICK(c, 11);
    // 0dd082  mov al, byte ptr [ebx]
    X86_AT(c, 0xdd082u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3]))));
    // 0dd084  and al, al
    X86_AT(c, 0xdd084u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0dd086  je 0xdd18f
    X86_AT(c, 0xdd086u);
    if (x86_cc(c, 4)) { goto L_dd18f; }
    X86_TICK(c, 20);
    // 0dd08c  mov edx, esi
    X86_AT(c, 0xdd08cu);
    c.r[2] = c.r[6];
    // 0dd08e  lea ecx, [edx + edx*8]
    X86_AT(c, 0xdd08eu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0dd091  lea edx, [ecx + edx*2]
    X86_AT(c, 0xdd091u);
    c.r[2] = (uint32_t)(c.r[1] + c.r[2] * 2);
    // 0dd094  lea ecx, [edi + edx*1]
    X86_AT(c, 0xdd094u);
    c.r[1] = (uint32_t)(c.r[7] + c.r[2]);
    // 0dd097  mov byte ptr [ecx + 0x92458], al
    X86_AT(c, 0xdd097u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0x92458u)), g8(c, 0));
    // 0dd09d  movzx edx, al
    X86_AT(c, 0xdd09du);
    c.r[2] = g8(c, 0);
    // 0dd0a0  cmp edx, 0x42
    X86_AT(c, 0xdd0a0u);
    (void)x86_sub(c, c.r[2], 0x42u, 0, 4);
    // 0dd0a3  ja 0xdd0d7
    X86_AT(c, 0xdd0a3u);
    if (x86_cc(c, 7)) { goto L_dd0d7; }
    X86_TICK(c, 7);
    // 0dd0a5  cmp edx, 0x42
    X86_AT(c, 0xdd0a5u);
    (void)x86_sub(c, c.r[2], 0x42u, 0, 4);
    // 0dd0a8  je 0xdd18f
    X86_AT(c, 0xdd0a8u);
    if (x86_cc(c, 4)) { goto L_dd18f; }
    X86_TICK(c, 7);
    // 0dd0ae  cmp edx, 1
    X86_AT(c, 0xdd0aeu);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0dd0b1  je 0xdd18f
    X86_AT(c, 0xdd0b1u);
    if (x86_cc(c, 4)) { goto L_dd18f; }
    X86_TICK(c, 7);
    // 0dd0b7  cmp edx, 3
    X86_AT(c, 0xdd0b7u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0dd0ba  je 0xdd18f
    X86_AT(c, 0xdd0bau);
    if (x86_cc(c, 4)) { goto L_dd18f; }
    X86_TICK(c, 7);
    // 0dd0c0  cmp edx, 0xc
    X86_AT(c, 0xdd0c0u);
    (void)x86_sub(c, c.r[2], 0xCu, 0, 4);
    // 0dd0c3  je 0xdd18f
    X86_AT(c, 0xdd0c3u);
    if (x86_cc(c, 4)) { goto L_dd18f; }
    X86_TICK(c, 7);
    // 0dd0c9  cmp edx, 0xd
    X86_AT(c, 0xdd0c9u);
    (void)x86_sub(c, c.r[2], 0xDu, 0, 4);
    // 0dd0cc  je 0xdd18f
    X86_AT(c, 0xdd0ccu);
    if (x86_cc(c, 4)) { goto L_dd18f; }
    X86_TICK(c, 9);
    // 0dd0d2  cmp edx, 0x36
    X86_AT(c, 0xdd0d2u);
    (void)x86_sub(c, c.r[2], 0x36u, 0, 4);
    // 0dd0d5  jmp 0xdd0f1
    X86_AT(c, 0xdd0d5u);
    goto L_dd0f1;
L_dd0d7:
    X86_TICK(c, 7);
    // 0dd0d7  cmp edx, 0x58
    X86_AT(c, 0xdd0d7u);
    (void)x86_sub(c, c.r[2], 0x58u, 0, 4);
    // 0dd0da  ja 0xdd0f9
    X86_AT(c, 0xdd0dau);
    if (x86_cc(c, 7)) { goto L_dd0f9; }
    X86_TICK(c, 7);
    // 0dd0dc  cmp edx, 0x58
    X86_AT(c, 0xdd0dcu);
    (void)x86_sub(c, c.r[2], 0x58u, 0, 4);
    // 0dd0df  je 0xdd18f
    X86_AT(c, 0xdd0dfu);
    if (x86_cc(c, 4)) { goto L_dd18f; }
    X86_TICK(c, 7);
    // 0dd0e5  cmp edx, 0x4a
    X86_AT(c, 0xdd0e5u);
    (void)x86_sub(c, c.r[2], 0x4Au, 0, 4);
    // 0dd0e8  je 0xdd18f
    X86_AT(c, 0xdd0e8u);
    if (x86_cc(c, 4)) { goto L_dd18f; }
    X86_TICK(c, 2);
    // 0dd0ee  cmp edx, 0x51
    X86_AT(c, 0xdd0eeu);
    (void)x86_sub(c, c.r[2], 0x51u, 0, 4);
L_dd0f1:
    X86_TICK(c, 5);
    // 0dd0f1  je 0xdd18f
    X86_AT(c, 0xdd0f1u);
    if (x86_cc(c, 4)) { goto L_dd18f; }
    X86_TICK(c, 7);
    // 0dd0f7  jmp 0xdd127
    X86_AT(c, 0xdd0f7u);
    goto L_dd127;
L_dd0f9:
    X86_TICK(c, 7);
    // 0dd0f9  cmp edx, 0x59
    X86_AT(c, 0xdd0f9u);
    (void)x86_sub(c, c.r[2], 0x59u, 0, 4);
    // 0dd0fc  je 0xdd18f
    X86_AT(c, 0xdd0fcu);
    if (x86_cc(c, 4)) { goto L_dd18f; }
    X86_TICK(c, 7);
    // 0dd102  cmp edx, 0x61
    X86_AT(c, 0xdd102u);
    (void)x86_sub(c, c.r[2], 0x61u, 0, 4);
    // 0dd105  je 0xdd18f
    X86_AT(c, 0xdd105u);
    if (x86_cc(c, 4)) { goto L_dd18f; }
    X86_TICK(c, 7);
    // 0dd10b  cmp edx, 0x80
    X86_AT(c, 0xdd10bu);
    (void)x86_sub(c, c.r[2], 0x80u, 0, 4);
    // 0dd111  jne 0xdd127
    X86_AT(c, 0xdd111u);
    if (x86_cc(c, 5)) { goto L_dd127; }
    X86_TICK(c, 17);
    // 0dd113  mov eax, esi
    X86_AT(c, 0xdd113u);
    c.r[0] = c.r[6];
    // 0dd115  lea edx, [eax + eax*8]
    X86_AT(c, 0xdd115u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0dd118  lea eax, [edx + eax*2]
    X86_AT(c, 0xdd118u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0dd11b  lea edx, [edi + eax*1]
    X86_AT(c, 0xdd11bu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0dd11e  mov byte ptr [edx + 0x92458], 0x2c
    X86_AT(c, 0xdd11eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0x92458u)), 0x2Cu);
    // 0dd125  jmp 0xdd18f
    X86_AT(c, 0xdd125u);
    goto L_dd18f;
L_dd127:
    X86_TICK(c, 11);
    // 0dd127  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xdd127u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0dd12a  cmp edx, 3
    X86_AT(c, 0xdd12au);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0dd12d  ja 0xdd18f
    X86_AT(c, 0xdd12du);
    if (x86_cc(c, 7)) { goto L_dd18f; }
    X86_TICK(c, 7);
    // 0dd12f  jmp dword ptr cs:[edx*4 + 0xdd137]
    X86_AT(c, 0xdd12fu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xDD137u)));
      switch (t) {
      case 0xdd147u: goto L_dd147;
      case 0xdd159u: goto L_dd159;
      case 0xdd16bu: goto L_dd16b;
      case 0xdd17du: goto L_dd17d;
      default: x86_jump(c, t); return; } }
L_dd147:
    X86_TICK(c, 10);
    // 0dd147  mov eax, esi
    X86_AT(c, 0xdd147u);
    c.r[0] = c.r[6];
    // 0dd149  lea edx, [eax + eax*8]
    X86_AT(c, 0xdd149u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0dd14c  lea eax, [edx + eax*2]
    X86_AT(c, 0xdd14cu);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0dd14f  lea edx, [edi + eax*1]
    X86_AT(c, 0xdd14fu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0dd152  mov byte ptr [edx + 0xb3c77], 0
    X86_AT(c, 0xdd152u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xB3C77u)), 0x0u);
L_dd159:
    X86_TICK(c, 10);
    // 0dd159  mov eax, esi
    X86_AT(c, 0xdd159u);
    c.r[0] = c.r[6];
    // 0dd15b  lea edx, [eax + eax*8]
    X86_AT(c, 0xdd15bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0dd15e  lea eax, [edx + eax*2]
    X86_AT(c, 0xdd15eu);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0dd161  lea edx, [edi + eax*1]
    X86_AT(c, 0xdd161u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0dd164  mov byte ptr [edx + 0xb3bfe], 0
    X86_AT(c, 0xdd164u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xB3BFEu)), 0x0u);
L_dd16b:
    X86_TICK(c, 10);
    // 0dd16b  mov eax, esi
    X86_AT(c, 0xdd16bu);
    c.r[0] = c.r[6];
    // 0dd16d  lea edx, [eax + eax*8]
    X86_AT(c, 0xdd16du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0dd170  lea eax, [edx + eax*2]
    X86_AT(c, 0xdd170u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0dd173  lea edx, [edi + eax*1]
    X86_AT(c, 0xdd173u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0dd176  mov byte ptr [edx + 0xb3b85], 0
    X86_AT(c, 0xdd176u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xB3B85u)), 0x0u);
L_dd17d:
    X86_TICK(c, 10);
    // 0dd17d  mov eax, esi
    X86_AT(c, 0xdd17du);
    c.r[0] = c.r[6];
    // 0dd17f  lea edx, [eax + eax*8]
    X86_AT(c, 0xdd17fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0dd182  lea eax, [edx + eax*2]
    X86_AT(c, 0xdd182u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0dd185  lea edx, [edi + eax*1]
    X86_AT(c, 0xdd185u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0dd188  mov byte ptr [edx + 0xb3b0c], 0
    X86_AT(c, 0xdd188u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xB3B0Cu)), 0x0u);
L_dd18f:
    X86_TICK(c, 11);
    // 0dd18f  inc ebx
    X86_AT(c, 0xdd18fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0dd190  inc edi
    X86_AT(c, 0xdd190u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0dd191  jmp 0xdd079
    X86_AT(c, 0xdd191u);
    X86_POLL(c, 0xdd079u); goto L_dd079;
L_dd196:
    X86_TICK(c, 9);
    // 0dd196  inc esi
    X86_AT(c, 0xdd196u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0dd197  jmp 0xdd06e
    X86_AT(c, 0xdd197u);
    X86_POLL(c, 0xdd06eu); goto L_dd06e;
L_dd19c:
    X86_TICK(c, 13);
    // 0dd19c  inc dword ptr [ebp - 8]
    X86_AT(c, 0xdd19cu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0dd19f  jmp 0xdd002
    X86_AT(c, 0xdd19fu);
    X86_POLL(c, 0xdd002u); goto L_dd002;
L_dd1a4:
    X86_TICK(c, 13);
    // 0dd1a4  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xdd1a4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0dd1a7  jmp 0xdcff1
    X86_AT(c, 0xdd1a7u);
    X86_POLL(c, 0xdcff1u); goto L_dcff1;
L_dd1ac:
    X86_TICK(c, 28);
    // 0dd1ac  pop edi
    X86_AT(c, 0xdd1acu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dd1ad  pop esi
    X86_AT(c, 0xdd1adu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dd1ae  pop ebx
    X86_AT(c, 0xdd1aeu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0dd1af  leave 
    X86_AT(c, 0xdd1afu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dd1b0  ret 
    X86_AT(c, 0xdd1b0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdcfe2u, "ran off the end of a function");
}
void f_000dd1b4(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0dd1b4  push 9
    X86_AT(c, 0xdd1b4u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0dd1b6  push 0x34
    X86_AT(c, 0xdd1b6u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0dd1b8  push 0x163
    X86_AT(c, 0xdd1b8u);
    { uint32_t v = 0x163u; push32(c, v); }
    // 0dd1bd  push 0x33
    X86_AT(c, 0xdd1bdu);
    { uint32_t v = 0x33u; push32(c, v); }
    // 0dd1bf  push 0xe
    X86_AT(c, 0xdd1bfu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0dd1c1  call 0xc95ec
    X86_AT(c, 0xdd1c1u);
    push32(c, 0xdd1c6u); x86_call_known(c, 0xc95ecu, f_000c95ec); X86_RET(c, 0xdd1c6u);
    X86_TICK(c, 17);
    // 0dd1c6  push 9
    X86_AT(c, 0xdd1c6u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0dd1c8  push 0x124
    X86_AT(c, 0xdd1c8u);
    { uint32_t v = 0x124u; push32(c, v); }
    // 0dd1cd  push 0xf
    X86_AT(c, 0xdd1cdu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0dd1cf  push 0x33
    X86_AT(c, 0xdd1cfu);
    { uint32_t v = 0x33u; push32(c, v); }
    // 0dd1d1  push 0xe
    X86_AT(c, 0xdd1d1u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0dd1d3  call 0xc95ec
    X86_AT(c, 0xdd1d3u);
    push32(c, 0xdd1d8u); x86_call_known(c, 0xc95ecu, f_000c95ec); X86_RET(c, 0xdd1d8u);
    X86_TICK(c, 12);
    // 0dd1d8  add esp, 0x28
    X86_AT(c, 0xdd1d8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0dd1db  ret 
    X86_AT(c, 0xdd1dbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdd1b4u, "ran off the end of a function");
}
void f_000dd1dc(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0dd1dc  push 9
    X86_AT(c, 0xdd1dcu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0dd1de  push 0x3d
    X86_AT(c, 0xdd1deu);
    { uint32_t v = 0x3Du; push32(c, v); }
    // 0dd1e0  push 0x164
    X86_AT(c, 0xdd1e0u);
    { uint32_t v = 0x164u; push32(c, v); }
    // 0dd1e5  push 0x3c
    X86_AT(c, 0xdd1e5u);
    { uint32_t v = 0x3Cu; push32(c, v); }
    // 0dd1e7  push 0xf
    X86_AT(c, 0xdd1e7u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0dd1e9  call 0xc95ec
    X86_AT(c, 0xdd1e9u);
    push32(c, 0xdd1eeu); x86_call_known(c, 0xc95ecu, f_000c95ec); X86_RET(c, 0xdd1eeu);
    X86_TICK(c, 17);
    // 0dd1ee  push 9
    X86_AT(c, 0xdd1eeu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0dd1f0  push 0x12d
    X86_AT(c, 0xdd1f0u);
    { uint32_t v = 0x12Du; push32(c, v); }
    // 0dd1f5  push 0x10
    X86_AT(c, 0xdd1f5u);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0dd1f7  push 0x3c
    X86_AT(c, 0xdd1f7u);
    { uint32_t v = 0x3Cu; push32(c, v); }
    // 0dd1f9  push 0xf
    X86_AT(c, 0xdd1f9u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0dd1fb  call 0xc95ec
    X86_AT(c, 0xdd1fbu);
    push32(c, 0xdd200u); x86_call_known(c, 0xc95ecu, f_000c95ec); X86_RET(c, 0xdd200u);
    X86_TICK(c, 12);
    // 0dd200  add esp, 0x28
    X86_AT(c, 0xdd200u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0dd203  ret 
    X86_AT(c, 0xdd203u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdd1dcu, "ran off the end of a function");
}
void f_000dd204(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0dd204  push edi
    X86_AT(c, 0xdd204u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dd205  mov edi, 4
    X86_AT(c, 0xdd205u);
    c.r[7] = 0x4u;
    // 0dd20a  push edi
    X86_AT(c, 0xdd20au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dd20b  call 0xca3cc
    X86_AT(c, 0xdd20bu);
    push32(c, 0xdd210u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xdd210u);
    X86_TICK(c, 11);
    // 0dd210  push 0xd04c
    X86_AT(c, 0xdd210u);
    { uint32_t v = 0xD04Cu; push32(c, v); }
    // 0dd215  push edi
    X86_AT(c, 0xdd215u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dd216  call 0xc8cdc
    X86_AT(c, 0xdd216u);
    push32(c, 0xdd21bu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xdd21bu);
    X86_TICK(c, 7);
    // 0dd21b  call 0xcc85c
    X86_AT(c, 0xdd21bu);
    push32(c, 0xdd220u); x86_call_known(c, 0xcc85cu, f_000cc85c); X86_RET(c, 0xdd220u);
    X86_TICK(c, 9);
    // 0dd220  push edi
    X86_AT(c, 0xdd220u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dd221  call 0xca254
    X86_AT(c, 0xdd221u);
    push32(c, 0xdd226u); x86_call_known(c, 0xca254u, f_000ca254); X86_RET(c, 0xdd226u);
    X86_TICK(c, 14);
    // 0dd226  add esp, 0x10
    X86_AT(c, 0xdd226u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0dd229  cmp dword ptr [0xb52f8], 5
    X86_AT(c, 0xdd229u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x5u, 0, 4);
    // 0dd230  jne 0xdd239
    X86_AT(c, 0xdd230u);
    if (x86_cc(c, 5)) { goto L_dd239; }
    X86_TICK(c, 7);
    // 0dd232  call 0xdd1dc
    X86_AT(c, 0xdd232u);
    push32(c, 0xdd237u); x86_call_known(c, 0xdd1dcu, f_000dd1dc); X86_RET(c, 0xdd237u);
    X86_TICK(c, 7);
    // 0dd237  jmp 0xdd23e
    X86_AT(c, 0xdd237u);
    goto L_dd23e;
L_dd239:
    X86_TICK(c, 7);
    // 0dd239  call 0xdd1b4
    X86_AT(c, 0xdd239u);
    push32(c, 0xdd23eu); x86_call_known(c, 0xdd1b4u, f_000dd1b4); X86_RET(c, 0xdd23eu);
L_dd23e:
    X86_TICK(c, 14);
    // 0dd23e  pop edi
    X86_AT(c, 0xdd23eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dd23f  ret 
    X86_AT(c, 0xdd23fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdd204u, "ran off the end of a function");
}
void f_000dd240(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0dd240  push ebp
    X86_AT(c, 0xdd240u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0dd241  mov ebp, esp
    X86_AT(c, 0xdd241u);
    c.r[5] = c.r[4];
    // 0dd243  sub esp, 0x10
    X86_AT(c, 0xdd243u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x10u, 0, 4); }
    // 0dd246  push ebx
    X86_AT(c, 0xdd246u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dd247  push esi
    X86_AT(c, 0xdd247u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dd248  push edi
    X86_AT(c, 0xdd248u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dd249  mov di, word ptr [ebp + 0x1c]
    X86_AT(c, 0xdd249u);
    s16(c, 7, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu))));
    // 0dd24d  mov dword ptr [ebp - 8], 1
    X86_AT(c, 0xdd24du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x1u);
    // 0dd254  mov dword ptr [ebp - 4], 4
    X86_AT(c, 0xdd254u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x4u);
    // 0dd25b  mov si, word ptr [ebp + 0x10]
    X86_AT(c, 0xdd25bu);
    s16(c, 6, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
L_dd25f:
    X86_TICK(c, 11);
    // 0dd25f  cmp si, word ptr [ebp + 0x14]
    X86_AT(c, 0xdd25fu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0, 2);
    // 0dd263  jg 0xdd301
    X86_AT(c, 0xdd263u);
    if (x86_cc(c, 15)) { goto L_dd301; }
    X86_TICK(c, 19);
    // 0dd269  movsx eax, si
    X86_AT(c, 0xdd269u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[6] & 0xFFFFu);
    // 0dd26c  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xdd26cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0dd26f  cmp dword ptr [edx + eax*4], 0
    X86_AT(c, 0xdd26fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[0] * 4))), 0x0u, 0, 4);
    // 0dd273  je 0xdd2fb
    X86_AT(c, 0xdd273u);
    if (x86_cc(c, 4)) { goto L_dd2fb; }
    X86_TICK(c, 7);
    // 0dd279  cmp di, 5
    X86_AT(c, 0xdd279u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x5u, 0, 2);
    // 0dd27d  jle 0xdd288
    X86_AT(c, 0xdd27du);
    if (x86_cc(c, 14)) { goto L_dd288; }
    X86_TICK(c, 7);
    // 0dd27f  call 0xdd204
    X86_AT(c, 0xdd27fu);
    push32(c, 0xdd284u); x86_call_known(c, 0xdd204u, f_000dd204); X86_RET(c, 0xdd284u);
    X86_TICK(c, 2);
    // 0dd284  mov di, 0xfffa
    X86_AT(c, 0xdd284u);
    s16(c, 7, 0xFFFAu);
L_dd288:
    X86_TICK(c, 12);
    // 0dd288  movsx eax, di
    X86_AT(c, 0xdd288u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[7] & 0xFFFFu);
    // 0dd28b  push eax
    X86_AT(c, 0xdd28bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dd28c  call 0xd226c
    X86_AT(c, 0xdd28cu);
    push32(c, 0xdd291u); x86_call_known(c, 0xd226cu, f_000d226c); X86_RET(c, 0xdd291u);
    X86_TICK(c, 13);
    // 0dd291  add esp, 4
    X86_AT(c, 0xdd291u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0dd294  cmp si, word ptr [ebp + 0x18]
    X86_AT(c, 0xdd294u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 0, 2);
    // 0dd298  je 0xdd2a0
    X86_AT(c, 0xdd298u);
    if (x86_cc(c, 4)) { goto L_dd2a0; }
    X86_TICK(c, 9);
    // 0dd29a  mov bx, 0xf
    X86_AT(c, 0xdd29au);
    s16(c, 3, 0xFu);
    // 0dd29e  jmp 0xdd2a4
    X86_AT(c, 0xdd29eu);
    goto L_dd2a4;
L_dd2a0:
    X86_TICK(c, 2);
    // 0dd2a0  mov bx, 0xe
    X86_AT(c, 0xdd2a0u);
    s16(c, 3, 0xEu);
L_dd2a4:
    X86_TICK(c, 26);
    // 0dd2a4  movsx eax, si
    X86_AT(c, 0xdd2a4u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[6] & 0xFFFFu);
    // 0dd2a7  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xdd2a7u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0dd2aa  push dword ptr [edx + eax*4]
    X86_AT(c, 0xdd2aau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[0] * 4))); push32(c, v); }
    // 0dd2ad  push dword ptr [ebp - 4]
    X86_AT(c, 0xdd2adu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0dd2b0  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xdd2b0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0dd2b3  call 0xc8cdc
    X86_AT(c, 0xdd2b3u);
    push32(c, 0xdd2b8u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xdd2b8u);
    X86_TICK(c, 27);
    // 0dd2b8  movsx eax, bx
    X86_AT(c, 0xdd2b8u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[3] & 0xFFFFu);
    // 0dd2bb  push eax
    X86_AT(c, 0xdd2bbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dd2bc  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xdd2bcu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0dd2bf  mov ecx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xdd2bfu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0dd2c2  push dword ptr [edx + ecx*4]
    X86_AT(c, 0xdd2c2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[1] * 4))); push32(c, v); }
    // 0dd2c5  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xdd2c5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0dd2c8  call 0xcc884
    X86_AT(c, 0xdd2c8u);
    push32(c, 0xdd2cdu); x86_call_known(c, 0xcc884u, f_000cc884); X86_RET(c, 0xdd2cdu);
    X86_TICK(c, 15);
    // 0dd2cd  add esp, 4
    X86_AT(c, 0xdd2cdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0dd2d0  mov edx, 0xd
    X86_AT(c, 0xdd2d0u);
    c.r[2] = 0xDu;
    // 0dd2d5  sub edx, eax
    X86_AT(c, 0xdd2d5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0dd2d7  push edx
    X86_AT(c, 0xdd2d7u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0dd2d8  call 0xd2218
    X86_AT(c, 0xdd2d8u);
    push32(c, 0xdd2ddu); x86_call_known(c, 0xd2218u, f_000d2218); X86_RET(c, 0xdd2ddu);
    X86_TICK(c, 12);
    // 0dd2dd  movsx eax, di
    X86_AT(c, 0xdd2ddu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[7] & 0xFFFFu);
    // 0dd2e0  push eax
    X86_AT(c, 0xdd2e0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dd2e1  call 0xd2280
    X86_AT(c, 0xdd2e1u);
    push32(c, 0xdd2e6u); x86_call_known(c, 0xd2280u, f_000d2280); X86_RET(c, 0xdd2e6u);
    X86_TICK(c, 25);
    // 0dd2e6  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xdd2e6u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0dd2e9  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xdd2e9u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0dd2ec  mov ecx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xdd2ecu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0dd2ef  push dword ptr [eax + ecx*4]
    X86_AT(c, 0xdd2efu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] * 4))); push32(c, v); }
    // 0dd2f2  call 0xd2294
    X86_AT(c, 0xdd2f2u);
    push32(c, 0xdd2f7u); x86_call_known(c, 0xd2294u, f_000d2294); X86_RET(c, 0xdd2f7u);
    X86_TICK(c, 4);
    // 0dd2f7  inc edi
    X86_AT(c, 0xdd2f7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0dd2f8  add esp, 0x1c
    X86_AT(c, 0xdd2f8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_dd2fb:
    X86_TICK(c, 9);
    // 0dd2fb  inc esi
    X86_AT(c, 0xdd2fbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0dd2fc  jmp 0xdd25f
    X86_AT(c, 0xdd2fcu);
    X86_POLL(c, 0xdd25fu); goto L_dd25f;
L_dd301:
    X86_TICK(c, 30);
    // 0dd301  mov eax, edi
    X86_AT(c, 0xdd301u);
    c.r[0] = c.r[7];
    // 0dd303  pop edi
    X86_AT(c, 0xdd303u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dd304  pop esi
    X86_AT(c, 0xdd304u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dd305  pop ebx
    X86_AT(c, 0xdd305u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0dd306  leave 
    X86_AT(c, 0xdd306u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dd307  ret 
    X86_AT(c, 0xdd307u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdd240u, "ran off the end of a function");
}
void f_000dd308(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0dd308  push ebx
    X86_AT(c, 0xdd308u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dd309  push esi
    X86_AT(c, 0xdd309u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dd30a  push edi
    X86_AT(c, 0xdd30au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dd30b  mov esi, 4
    X86_AT(c, 0xdd30bu);
    c.r[6] = 0x4u;
    // 0dd310  push 0xd07c
    X86_AT(c, 0xdd310u);
    { uint32_t v = 0xD07Cu; push32(c, v); }
    // 0dd315  call 0xcc7bc
    X86_AT(c, 0xdd315u);
    push32(c, 0xdd31au); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdd31au);
    X86_TICK(c, 14);
    // 0dd31a  add esp, 4
    X86_AT(c, 0xdd31au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0dd31d  cmp dword ptr [0xb52f8], 5
    X86_AT(c, 0xdd31du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x5u, 0, 4);
    // 0dd324  jne 0xdd351
    X86_AT(c, 0xdd324u);
    if (x86_cc(c, 5)) { goto L_dd351; }
    X86_TICK(c, 27);
    // 0dd326  push 0xa
    X86_AT(c, 0xdd326u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0dd328  push 0xf
    X86_AT(c, 0xdd328u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0dd32a  push 0xf
    X86_AT(c, 0xdd32au);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0dd32c  push 0xe
    X86_AT(c, 0xdd32cu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0dd32e  push 0x29
    X86_AT(c, 0xdd32eu);
    { uint32_t v = 0x29u; push32(c, v); }
    // 0dd330  push 0xf6
    X86_AT(c, 0xdd330u);
    { uint32_t v = 0xF6u; push32(c, v); }
    // 0dd335  push 0x15a
    X86_AT(c, 0xdd335u);
    { uint32_t v = 0x15Au; push32(c, v); }
    // 0dd33a  push 0x3a
    X86_AT(c, 0xdd33au);
    { uint32_t v = 0x3Au; push32(c, v); }
    // 0dd33c  push 0xd
    X86_AT(c, 0xdd33cu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0dd33e  push esi
    X86_AT(c, 0xdd33eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dd33f  call 0xc9fbc
    X86_AT(c, 0xdd33fu);
    push32(c, 0xdd344u); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xdd344u);
    X86_TICK(c, 9);
    // 0dd344  push esi
    X86_AT(c, 0xdd344u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dd345  call 0xca100
    X86_AT(c, 0xdd345u);
    push32(c, 0xdd34au); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xdd34au);
    X86_TICK(c, 7);
    // 0dd34a  call 0xdd1dc
    X86_AT(c, 0xdd34au);
    push32(c, 0xdd34fu); x86_call_known(c, 0xdd1dcu, f_000dd1dc); X86_RET(c, 0xdd34fu);
    X86_TICK(c, 7);
    // 0dd34f  jmp 0xdd37a
    X86_AT(c, 0xdd34fu);
    goto L_dd37a;
L_dd351:
    X86_TICK(c, 27);
    // 0dd351  push 0xa
    X86_AT(c, 0xdd351u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0dd353  push 0xf
    X86_AT(c, 0xdd353u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0dd355  push 0xf
    X86_AT(c, 0xdd355u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0dd357  push 0xe
    X86_AT(c, 0xdd357u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0dd359  push 0x29
    X86_AT(c, 0xdd359u);
    { uint32_t v = 0x29u; push32(c, v); }
    // 0dd35b  push 0xf6
    X86_AT(c, 0xdd35bu);
    { uint32_t v = 0xF6u; push32(c, v); }
    // 0dd360  push 0x15a
    X86_AT(c, 0xdd360u);
    { uint32_t v = 0x15Au; push32(c, v); }
    // 0dd365  push 0x31
    X86_AT(c, 0xdd365u);
    { uint32_t v = 0x31u; push32(c, v); }
    // 0dd367  push 0xc
    X86_AT(c, 0xdd367u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0dd369  push esi
    X86_AT(c, 0xdd369u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dd36a  call 0xc9fbc
    X86_AT(c, 0xdd36au);
    push32(c, 0xdd36fu); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xdd36fu);
    X86_TICK(c, 9);
    // 0dd36f  push esi
    X86_AT(c, 0xdd36fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dd370  call 0xca100
    X86_AT(c, 0xdd370u);
    push32(c, 0xdd375u); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xdd375u);
    X86_TICK(c, 7);
    // 0dd375  call 0xdd1b4
    X86_AT(c, 0xdd375u);
    push32(c, 0xdd37au); x86_call_known(c, 0xdd1b4u, f_000dd1b4); X86_RET(c, 0xdd37au);
L_dd37a:
    X86_TICK(c, 13);
    // 0dd37a  add esp, 0x2c
    X86_AT(c, 0xdd37au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0dd37d  push 1
    X86_AT(c, 0xdd37du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0dd37f  push 2
    X86_AT(c, 0xdd37fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0dd381  call 0xcc814
    X86_AT(c, 0xdd381u);
    push32(c, 0xdd386u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xdd386u);
    X86_TICK(c, 11);
    // 0dd386  push 0xd094
    X86_AT(c, 0xdd386u);
    { uint32_t v = 0xD094u; push32(c, v); }
    // 0dd38b  push esi
    X86_AT(c, 0xdd38bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dd38c  call 0xc8cdc
    X86_AT(c, 0xdd38cu);
    push32(c, 0xdd391u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xdd391u);
    X86_TICK(c, 11);
    // 0dd391  push 0xb02ec
    X86_AT(c, 0xdd391u);
    { uint32_t v = 0xB02ECu; push32(c, v); }
    // 0dd396  push esi
    X86_AT(c, 0xdd396u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dd397  call 0xca850
    X86_AT(c, 0xdd397u);
    push32(c, 0xdd39cu); x86_call_known(c, 0xca850u, f_000ca850); X86_RET(c, 0xdd39cu);
    X86_TICK(c, 11);
    // 0dd39c  push 2
    X86_AT(c, 0xdd39cu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0dd39e  push 2
    X86_AT(c, 0xdd39eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0dd3a0  call 0xcc814
    X86_AT(c, 0xdd3a0u);
    push32(c, 0xdd3a5u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xdd3a5u);
    X86_TICK(c, 11);
    // 0dd3a5  push 0xd0ac
    X86_AT(c, 0xdd3a5u);
    { uint32_t v = 0xD0ACu; push32(c, v); }
    // 0dd3aa  push esi
    X86_AT(c, 0xdd3aau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dd3ab  call 0xc8cdc
    X86_AT(c, 0xdd3abu);
    push32(c, 0xdd3b0u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xdd3b0u);
    X86_TICK(c, 11);
    // 0dd3b0  push 2
    X86_AT(c, 0xdd3b0u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0dd3b2  push 0x24
    X86_AT(c, 0xdd3b2u);
    { uint32_t v = 0x24u; push32(c, v); }
    // 0dd3b4  call 0xcc814
    X86_AT(c, 0xdd3b4u);
    push32(c, 0xdd3b9u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xdd3b9u);
    X86_TICK(c, 9);
    // 0dd3b9  push 2
    X86_AT(c, 0xdd3b9u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0dd3bb  call 0xcf88c
    X86_AT(c, 0xdd3bbu);
    push32(c, 0xdd3c0u); x86_call_known(c, 0xcf88cu, f_000cf88c); X86_RET(c, 0xdd3c0u);
    X86_TICK(c, 11);
    // 0dd3c0  push eax
    X86_AT(c, 0xdd3c0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dd3c1  push esi
    X86_AT(c, 0xdd3c1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dd3c2  call 0xc8cb8
    X86_AT(c, 0xdd3c2u);
    push32(c, 0xdd3c7u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xdd3c7u);
    X86_TICK(c, 13);
    // 0dd3c7  add esp, 0x3c
    X86_AT(c, 0xdd3c7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0dd3ca  push 3
    X86_AT(c, 0xdd3cau);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0dd3cc  push 2
    X86_AT(c, 0xdd3ccu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0dd3ce  call 0xcc814
    X86_AT(c, 0xdd3ceu);
    push32(c, 0xdd3d3u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xdd3d3u);
    X86_TICK(c, 11);
    // 0dd3d3  push 0xd0cc
    X86_AT(c, 0xdd3d3u);
    { uint32_t v = 0xD0CCu; push32(c, v); }
    // 0dd3d8  push esi
    X86_AT(c, 0xdd3d8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dd3d9  call 0xc8cdc
    X86_AT(c, 0xdd3d9u);
    push32(c, 0xdd3deu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xdd3deu);
    X86_TICK(c, 11);
    // 0dd3de  push 3
    X86_AT(c, 0xdd3deu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0dd3e0  push 0x18
    X86_AT(c, 0xdd3e0u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0dd3e2  call 0xcc814
    X86_AT(c, 0xdd3e2u);
    push32(c, 0xdd3e7u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xdd3e7u);
    X86_TICK(c, 20);
    // 0dd3e7  movzx eax, byte ptr [0xb02fd]
    X86_AT(c, 0xdd3e7u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xB02FDu)));
    // 0dd3ee  push dword ptr [eax*4 + 0xa1e28]
    X86_AT(c, 0xdd3eeu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA1E28u))); push32(c, v); }
    // 0dd3f5  push esi
    X86_AT(c, 0xdd3f5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dd3f6  call 0xc8cdc
    X86_AT(c, 0xdd3f6u);
    push32(c, 0xdd3fbu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xdd3fbu);
    X86_TICK(c, 11);
    // 0dd3fb  push 4
    X86_AT(c, 0xdd3fbu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dd3fd  push 2
    X86_AT(c, 0xdd3fdu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0dd3ff  call 0xcc814
    X86_AT(c, 0xdd3ffu);
    push32(c, 0xdd404u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xdd404u);
    X86_TICK(c, 11);
    // 0dd404  push 0xd0e0
    X86_AT(c, 0xdd404u);
    { uint32_t v = 0xD0E0u; push32(c, v); }
    // 0dd409  push esi
    X86_AT(c, 0xdd409u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dd40a  call 0xc8cdc
    X86_AT(c, 0xdd40au);
    push32(c, 0xdd40fu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xdd40fu);
    X86_TICK(c, 11);
    // 0dd40f  push 4
    X86_AT(c, 0xdd40fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dd411  push 0x18
    X86_AT(c, 0xdd411u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0dd413  call 0xcc814
    X86_AT(c, 0xdd413u);
    push32(c, 0xdd418u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xdd418u);
    X86_TICK(c, 20);
    // 0dd418  movzx eax, byte ptr [0xb02fb]
    X86_AT(c, 0xdd418u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xB02FBu)));
    // 0dd41f  push dword ptr [eax*4 + 0xa1e34]
    X86_AT(c, 0xdd41fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA1E34u))); push32(c, v); }
    // 0dd426  push esi
    X86_AT(c, 0xdd426u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dd427  call 0xc8cdc
    X86_AT(c, 0xdd427u);
    push32(c, 0xdd42cu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xdd42cu);
    X86_TICK(c, 13);
    // 0dd42c  add esp, 0x40
    X86_AT(c, 0xdd42cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0dd42f  push 5
    X86_AT(c, 0xdd42fu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0dd431  push 2
    X86_AT(c, 0xdd431u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0dd433  call 0xcc814
    X86_AT(c, 0xdd433u);
    push32(c, 0xdd438u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xdd438u);
    X86_TICK(c, 11);
    // 0dd438  push 0xd0f4
    X86_AT(c, 0xdd438u);
    { uint32_t v = 0xD0F4u; push32(c, v); }
    // 0dd43d  push esi
    X86_AT(c, 0xdd43du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dd43e  call 0xc8cdc
    X86_AT(c, 0xdd43eu);
    push32(c, 0xdd443u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xdd443u);
    X86_TICK(c, 11);
    // 0dd443  push 5
    X86_AT(c, 0xdd443u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0dd445  push 0x18
    X86_AT(c, 0xdd445u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0dd447  call 0xcc814
    X86_AT(c, 0xdd447u);
    push32(c, 0xdd44cu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xdd44cu);
    X86_TICK(c, 22);
    // 0dd44c  add esp, 0x18
    X86_AT(c, 0xdd44cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0dd44f  movzx eax, byte ptr [0xb02fc]
    X86_AT(c, 0xdd44fu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xB02FCu)));
    // 0dd456  push dword ptr [eax*4 + 0xa1ed4]
    X86_AT(c, 0xdd456u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA1ED4u))); push32(c, v); }
    // 0dd45d  push esi
    X86_AT(c, 0xdd45du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dd45e  call 0xc8cdc
    X86_AT(c, 0xdd45eu);
    push32(c, 0xdd463u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xdd463u);
    X86_TICK(c, 19);
    // 0dd463  push 0xffffffff
    X86_AT(c, 0xdd463u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0dd465  push 0xffffffff
    X86_AT(c, 0xdd465u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0dd467  push 6
    X86_AT(c, 0xdd467u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0dd469  push 0
    X86_AT(c, 0xdd469u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0dd46b  push 0xa1eb8
    X86_AT(c, 0xdd46bu);
    { uint32_t v = 0xA1EB8u; push32(c, v); }
    // 0dd470  push 0xb02fe
    X86_AT(c, 0xdd470u);
    { uint32_t v = 0xB02FEu; push32(c, v); }
    // 0dd475  call 0xd22c8
    X86_AT(c, 0xdd475u);
    push32(c, 0xdd47au); x86_call_known(c, 0xd22c8u, f_000d22c8); X86_RET(c, 0xdd47au);
    X86_TICK(c, 10);
    // 0dd47a  xchg edi, eax
    X86_AT(c, 0xdd47au);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0dd47b  call 0xdd204
    X86_AT(c, 0xdd47bu);
    push32(c, 0xdd480u); x86_call_known(c, 0xdd204u, f_000dd204); X86_RET(c, 0xdd480u);
    X86_TICK(c, 59);
    // 0dd480  mov di, 0xfffa
    X86_AT(c, 0xdd480u);
    s16(c, 7, 0xFFFAu);
    // 0dd484  add esp, 0x20
    X86_AT(c, 0xdd484u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0dd487  mov eax, dword ptr [0xb031a]
    X86_AT(c, 0xdd487u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB031Au)));
    // 0dd48c  cdq 
    X86_AT(c, 0xdd48cu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0dd48d  mov ecx, 0xa
    X86_AT(c, 0xdd48du);
    c.r[1] = 0xAu;
    // 0dd492  idiv ecx
    X86_AT(c, 0xdd492u);
    x86_idiv(c, c.r[1], 4, 0xdd492u);
    // 0dd494  and edx, edx
    X86_AT(c, 0xdd494u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0dd496  je 0xdd4cd
    X86_AT(c, 0xdd496u);
    if (x86_cc(c, 4)) { goto L_dd4cd; }
    X86_TICK(c, 14);
    // 0dd498  movsx eax, di
    X86_AT(c, 0xdd498u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[7] & 0xFFFFu);
    // 0dd49b  push eax
    X86_AT(c, 0xdd49bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dd49c  mov ebx, eax
    X86_AT(c, 0xdd49cu);
    c.r[3] = c.r[0];
    // 0dd49e  call 0xd226c
    X86_AT(c, 0xdd49eu);
    push32(c, 0xdd4a3u); x86_call_known(c, 0xd226cu, f_000d226c); X86_RET(c, 0xdd4a3u);
    X86_TICK(c, 11);
    // 0dd4a3  push 0xd108
    X86_AT(c, 0xdd4a3u);
    { uint32_t v = 0xD108u; push32(c, v); }
    // 0dd4a8  push esi
    X86_AT(c, 0xdd4a8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dd4a9  call 0xc8cdc
    X86_AT(c, 0xdd4a9u);
    push32(c, 0xdd4aeu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xdd4aeu);
    X86_TICK(c, 9);
    // 0dd4ae  push ebx
    X86_AT(c, 0xdd4aeu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dd4af  call 0xd2280
    X86_AT(c, 0xdd4afu);
    push32(c, 0xdd4b4u); x86_call_known(c, 0xd2280u, f_000d2280); X86_RET(c, 0xdd4b4u);
    X86_TICK(c, 59);
    // 0dd4b4  push 0xf
    X86_AT(c, 0xdd4b4u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0dd4b6  mov eax, dword ptr [0xb031a]
    X86_AT(c, 0xdd4b6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB031Au)));
    // 0dd4bb  cdq 
    X86_AT(c, 0xdd4bbu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0dd4bc  mov ecx, 0xa
    X86_AT(c, 0xdd4bcu);
    c.r[1] = 0xAu;
    // 0dd4c1  idiv ecx
    X86_AT(c, 0xdd4c1u);
    x86_idiv(c, c.r[1], 4, 0xdd4c1u);
    // 0dd4c3  push edx
    X86_AT(c, 0xdd4c3u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0dd4c4  call 0xd2294
    X86_AT(c, 0xdd4c4u);
    push32(c, 0xdd4c9u); x86_call_known(c, 0xd2294u, f_000d2294); X86_RET(c, 0xdd4c9u);
    X86_TICK(c, 4);
    // 0dd4c9  inc edi
    X86_AT(c, 0xdd4c9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0dd4ca  add esp, 0x18
    X86_AT(c, 0xdd4cau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_dd4cd:
    X86_TICK(c, 55);
    // 0dd4cd  mov eax, dword ptr [0xb031a]
    X86_AT(c, 0xdd4cdu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB031Au)));
    // 0dd4d2  cdq 
    X86_AT(c, 0xdd4d2u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0dd4d3  mov ecx, 0x64
    X86_AT(c, 0xdd4d3u);
    c.r[1] = 0x64u;
    // 0dd4d8  idiv ecx
    X86_AT(c, 0xdd4d8u);
    x86_idiv(c, c.r[1], 4, 0xdd4d8u);
    // 0dd4da  cmp edx, 9
    X86_AT(c, 0xdd4dau);
    (void)x86_sub(c, c.r[2], 0x9u, 0, 4);
    // 0dd4dd  jle 0xdd51d
    X86_AT(c, 0xdd4ddu);
    if (x86_cc(c, 14)) { goto L_dd51d; }
    X86_TICK(c, 14);
    // 0dd4df  movsx eax, di
    X86_AT(c, 0xdd4dfu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[7] & 0xFFFFu);
    // 0dd4e2  push eax
    X86_AT(c, 0xdd4e2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dd4e3  mov ebx, eax
    X86_AT(c, 0xdd4e3u);
    c.r[3] = c.r[0];
    // 0dd4e5  call 0xd226c
    X86_AT(c, 0xdd4e5u);
    push32(c, 0xdd4eau); x86_call_known(c, 0xd226cu, f_000d226c); X86_RET(c, 0xdd4eau);
    X86_TICK(c, 11);
    // 0dd4ea  push 0xd140
    X86_AT(c, 0xdd4eau);
    { uint32_t v = 0xD140u; push32(c, v); }
    // 0dd4ef  push esi
    X86_AT(c, 0xdd4efu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dd4f0  call 0xc8cdc
    X86_AT(c, 0xdd4f0u);
    push32(c, 0xdd4f5u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xdd4f5u);
    X86_TICK(c, 9);
    // 0dd4f5  push ebx
    X86_AT(c, 0xdd4f5u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dd4f6  call 0xd2280
    X86_AT(c, 0xdd4f6u);
    push32(c, 0xdd4fbu); x86_call_known(c, 0xd2280u, f_000d2280); X86_RET(c, 0xdd4fbu);
    X86_TICK(c, 106);
    // 0dd4fb  push 0xf
    X86_AT(c, 0xdd4fbu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0dd4fd  mov eax, dword ptr [0xb031a]
    X86_AT(c, 0xdd4fdu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB031Au)));
    // 0dd502  cdq 
    X86_AT(c, 0xdd502u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0dd503  mov ecx, 0x64
    X86_AT(c, 0xdd503u);
    c.r[1] = 0x64u;
    // 0dd508  idiv ecx
    X86_AT(c, 0xdd508u);
    x86_idiv(c, c.r[1], 4, 0xdd508u);
    // 0dd50a  xchg edx, eax
    X86_AT(c, 0xdd50au);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0dd50b  cdq 
    X86_AT(c, 0xdd50bu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0dd50c  mov ecx, 0xa
    X86_AT(c, 0xdd50cu);
    c.r[1] = 0xAu;
    // 0dd511  idiv ecx
    X86_AT(c, 0xdd511u);
    x86_idiv(c, c.r[1], 4, 0xdd511u);
    // 0dd513  push eax
    X86_AT(c, 0xdd513u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dd514  call 0xd2294
    X86_AT(c, 0xdd514u);
    push32(c, 0xdd519u); x86_call_known(c, 0xd2294u, f_000d2294); X86_RET(c, 0xdd519u);
    X86_TICK(c, 4);
    // 0dd519  inc edi
    X86_AT(c, 0xdd519u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0dd51a  add esp, 0x18
    X86_AT(c, 0xdd51au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_dd51d:
    X86_TICK(c, 12);
    // 0dd51d  cmp dword ptr [0xb031a], 0x63
    X86_AT(c, 0xdd51du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB031Au))), 0x63u, 0, 4);
    // 0dd524  jle 0xdd55b
    X86_AT(c, 0xdd524u);
    if (x86_cc(c, 14)) { goto L_dd55b; }
    X86_TICK(c, 14);
    // 0dd526  movsx eax, di
    X86_AT(c, 0xdd526u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[7] & 0xFFFFu);
    // 0dd529  push eax
    X86_AT(c, 0xdd529u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dd52a  mov ebx, eax
    X86_AT(c, 0xdd52au);
    c.r[3] = c.r[0];
    // 0dd52c  call 0xd226c
    X86_AT(c, 0xdd52cu);
    push32(c, 0xdd531u); x86_call_known(c, 0xd226cu, f_000d226c); X86_RET(c, 0xdd531u);
    X86_TICK(c, 11);
    // 0dd531  push 0xd178
    X86_AT(c, 0xdd531u);
    { uint32_t v = 0xD178u; push32(c, v); }
    // 0dd536  push esi
    X86_AT(c, 0xdd536u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dd537  call 0xc8cdc
    X86_AT(c, 0xdd537u);
    push32(c, 0xdd53cu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xdd53cu);
    X86_TICK(c, 9);
    // 0dd53c  push ebx
    X86_AT(c, 0xdd53cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dd53d  call 0xd2280
    X86_AT(c, 0xdd53du);
    push32(c, 0xdd542u); x86_call_known(c, 0xd2280u, f_000d2280); X86_RET(c, 0xdd542u);
    X86_TICK(c, 59);
    // 0dd542  push 0xf
    X86_AT(c, 0xdd542u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0dd544  mov eax, dword ptr [0xb031a]
    X86_AT(c, 0xdd544u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB031Au)));
    // 0dd549  cdq 
    X86_AT(c, 0xdd549u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0dd54a  mov ecx, 0x64
    X86_AT(c, 0xdd54au);
    c.r[1] = 0x64u;
    // 0dd54f  idiv ecx
    X86_AT(c, 0xdd54fu);
    x86_idiv(c, c.r[1], 4, 0xdd54fu);
    // 0dd551  push eax
    X86_AT(c, 0xdd551u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dd552  call 0xd2294
    X86_AT(c, 0xdd552u);
    push32(c, 0xdd557u); x86_call_known(c, 0xd2294u, f_000d2294); X86_RET(c, 0xdd557u);
    X86_TICK(c, 4);
    // 0dd557  inc edi
    X86_AT(c, 0xdd557u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0dd558  add esp, 0x18
    X86_AT(c, 0xdd558u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_dd55b:
    X86_TICK(c, 12);
    // 0dd55b  cmp dword ptr [0xb041e], 0
    X86_AT(c, 0xdd55bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB041Eu))), 0x0u, 0, 4);
    // 0dd562  je 0xdd591
    X86_AT(c, 0xdd562u);
    if (x86_cc(c, 4)) { goto L_dd591; }
    X86_TICK(c, 14);
    // 0dd564  movsx eax, di
    X86_AT(c, 0xdd564u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[7] & 0xFFFFu);
    // 0dd567  push eax
    X86_AT(c, 0xdd567u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dd568  mov ebx, eax
    X86_AT(c, 0xdd568u);
    c.r[3] = c.r[0];
    // 0dd56a  call 0xd226c
    X86_AT(c, 0xdd56au);
    push32(c, 0xdd56fu); x86_call_known(c, 0xd226cu, f_000d226c); X86_RET(c, 0xdd56fu);
    X86_TICK(c, 11);
    // 0dd56f  push 0xd1b0
    X86_AT(c, 0xdd56fu);
    { uint32_t v = 0xD1B0u; push32(c, v); }
    // 0dd574  push esi
    X86_AT(c, 0xdd574u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dd575  call 0xc8cdc
    X86_AT(c, 0xdd575u);
    push32(c, 0xdd57au); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xdd57au);
    X86_TICK(c, 9);
    // 0dd57a  push ebx
    X86_AT(c, 0xdd57au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dd57b  call 0xd2280
    X86_AT(c, 0xdd57bu);
    push32(c, 0xdd580u); x86_call_known(c, 0xd2280u, f_000d2280); X86_RET(c, 0xdd580u);
    X86_TICK(c, 14);
    // 0dd580  push 0xf
    X86_AT(c, 0xdd580u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0dd582  push dword ptr [0xb041e]
    X86_AT(c, 0xdd582u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB041Eu))); push32(c, v); }
    // 0dd588  call 0xd2294
    X86_AT(c, 0xdd588u);
    push32(c, 0xdd58du); x86_call_known(c, 0xd2294u, f_000d2294); X86_RET(c, 0xdd58du);
    X86_TICK(c, 4);
    // 0dd58d  inc edi
    X86_AT(c, 0xdd58du);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0dd58e  add esp, 0x18
    X86_AT(c, 0xdd58eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_dd591:
    X86_TICK(c, 25);
    // 0dd591  movsx eax, di
    X86_AT(c, 0xdd591u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[7] & 0xFFFFu);
    // 0dd594  push eax
    X86_AT(c, 0xdd594u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dd595  push dword ptr [0xb032e]
    X86_AT(c, 0xdd595u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB032Eu))); push32(c, v); }
    // 0dd59b  push 5
    X86_AT(c, 0xdd59bu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0dd59d  push 1
    X86_AT(c, 0xdd59du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0dd59f  push 0xa1e70
    X86_AT(c, 0xdd59fu);
    { uint32_t v = 0xA1E70u; push32(c, v); }
    // 0dd5a4  push 0xb037a
    X86_AT(c, 0xdd5a4u);
    { uint32_t v = 0xB037Au; push32(c, v); }
    // 0dd5a9  call 0xdd240
    X86_AT(c, 0xdd5a9u);
    push32(c, 0xdd5aeu); x86_call_known(c, 0xdd240u, f_000dd240); X86_RET(c, 0xdd5aeu);
    X86_TICK(c, 28);
    // 0dd5ae  xchg edi, eax
    X86_AT(c, 0xdd5aeu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0dd5af  movsx eax, di
    X86_AT(c, 0xdd5afu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[7] & 0xFFFFu);
    // 0dd5b2  push eax
    X86_AT(c, 0xdd5b2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dd5b3  push dword ptr [0xb0326]
    X86_AT(c, 0xdd5b3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB0326u))); push32(c, v); }
    // 0dd5b9  push 0xf
    X86_AT(c, 0xdd5b9u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0dd5bb  push 1
    X86_AT(c, 0xdd5bbu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0dd5bd  push 0xa1de8
    X86_AT(c, 0xdd5bdu);
    { uint32_t v = 0xA1DE8u; push32(c, v); }
    // 0dd5c2  push 0xb0392
    X86_AT(c, 0xdd5c2u);
    { uint32_t v = 0xB0392u; push32(c, v); }
    // 0dd5c7  call 0xdd240
    X86_AT(c, 0xdd5c7u);
    push32(c, 0xdd5ccu); x86_call_known(c, 0xdd240u, f_000dd240); X86_RET(c, 0xdd5ccu);
    X86_TICK(c, 28);
    // 0dd5cc  xchg edi, eax
    X86_AT(c, 0xdd5ccu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0dd5cd  movsx eax, di
    X86_AT(c, 0xdd5cdu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[7] & 0xFFFFu);
    // 0dd5d0  push eax
    X86_AT(c, 0xdd5d0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dd5d1  push dword ptr [0xb032a]
    X86_AT(c, 0xdd5d1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB032Au))); push32(c, v); }
    // 0dd5d7  push 0xa
    X86_AT(c, 0xdd5d7u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0dd5d9  push 1
    X86_AT(c, 0xdd5d9u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0dd5db  push 0xa1e44
    X86_AT(c, 0xdd5dbu);
    { uint32_t v = 0xA1E44u; push32(c, v); }
    // 0dd5e0  push 0xb03d2
    X86_AT(c, 0xdd5e0u);
    { uint32_t v = 0xB03D2u; push32(c, v); }
    // 0dd5e5  call 0xdd240
    X86_AT(c, 0xdd5e5u);
    push32(c, 0xdd5eau); x86_call_known(c, 0xdd240u, f_000dd240); X86_RET(c, 0xdd5eau);
    X86_TICK(c, 30);
    // 0dd5ea  add esp, 0x48
    X86_AT(c, 0xdd5eau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x48u, 0, 4); }
    // 0dd5ed  xchg edi, eax
    X86_AT(c, 0xdd5edu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0dd5ee  movsx eax, di
    X86_AT(c, 0xdd5eeu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[7] & 0xFFFFu);
    // 0dd5f1  push eax
    X86_AT(c, 0xdd5f1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dd5f2  push dword ptr [0xb0332]
    X86_AT(c, 0xdd5f2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB0332u))); push32(c, v); }
    // 0dd5f8  push 7
    X86_AT(c, 0xdd5f8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0dd5fa  push 1
    X86_AT(c, 0xdd5fau);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0dd5fc  push 0xa1e88
    X86_AT(c, 0xdd5fcu);
    { uint32_t v = 0xA1E88u; push32(c, v); }
    // 0dd601  push 0xb03fe
    X86_AT(c, 0xdd601u);
    { uint32_t v = 0xB03FEu; push32(c, v); }
    // 0dd606  call 0xdd240
    X86_AT(c, 0xdd606u);
    push32(c, 0xdd60bu); x86_call_known(c, 0xdd240u, f_000dd240); X86_RET(c, 0xdd60bu);
    X86_TICK(c, 25);
    // 0dd60b  xchg edi, eax
    X86_AT(c, 0xdd60bu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0dd60c  movsx eax, di
    X86_AT(c, 0xdd60cu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[7] & 0xFFFFu);
    // 0dd60f  push eax
    X86_AT(c, 0xdd60fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dd610  push 0xffffffff
    X86_AT(c, 0xdd610u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0dd612  push 3
    X86_AT(c, 0xdd612u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0dd614  push 0
    X86_AT(c, 0xdd614u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0dd616  push 0xa1ea8
    X86_AT(c, 0xdd616u);
    { uint32_t v = 0xA1EA8u; push32(c, v); }
    // 0dd61b  push 0xb036a
    X86_AT(c, 0xdd61bu);
    { uint32_t v = 0xB036Au; push32(c, v); }
    // 0dd620  call 0xdd240
    X86_AT(c, 0xdd620u);
    push32(c, 0xdd625u); x86_call_known(c, 0xdd240u, f_000dd240); X86_RET(c, 0xdd625u);
    X86_TICK(c, 10);
    // 0dd625  xchg edi, eax
    X86_AT(c, 0xdd625u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0dd626  call 0xcc85c
    X86_AT(c, 0xdd626u);
    push32(c, 0xdd62bu); x86_call_known(c, 0xcc85cu, f_000cc85c); X86_RET(c, 0xdd62bu);
    X86_TICK(c, 11);
    // 0dd62b  push 0
    X86_AT(c, 0xdd62bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0dd62d  push esi
    X86_AT(c, 0xdd62du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dd62e  call 0xca2d4
    X86_AT(c, 0xdd62eu);
    push32(c, 0xdd633u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xdd633u);
    X86_TICK(c, 9);
    // 0dd633  push 7
    X86_AT(c, 0xdd633u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0dd635  call 0xca0a0
    X86_AT(c, 0xdd635u);
    push32(c, 0xdd63au); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xdd63au);
    X86_TICK(c, 24);
    // 0dd63a  add esp, 0x3c
    X86_AT(c, 0xdd63au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0dd63d  pop edi
    X86_AT(c, 0xdd63du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dd63e  pop esi
    X86_AT(c, 0xdd63eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dd63f  pop ebx
    X86_AT(c, 0xdd63fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0dd640  ret 
    X86_AT(c, 0xdd640u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdd308u, "ran off the end of a function");
}
void f_000dd728(X86Cpu& c) {
    X86_TICK(c, 6);
    // 0dd728  mov edx, dword ptr [esp + 4]
    X86_AT(c, 0xdd728u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0dd72c  sub ecx, ecx
    X86_AT(c, 0xdd72cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
L_dd72e:
    X86_TICK(c, 7);
    // 0dd72e  cmp edx, ecx
    X86_AT(c, 0xdd72eu);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 0dd730  jle 0xdd742
    X86_AT(c, 0xdd730u);
    if (x86_cc(c, 14)) { goto L_dd742; }
    X86_TICK(c, 2);
    // 0dd732  sub eax, eax
    X86_AT(c, 0xdd732u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_dd734:
    X86_TICK(c, 7);
    // 0dd734  cmp eax, 0x1388
    X86_AT(c, 0xdd734u);
    (void)x86_sub(c, c.r[0], 0x1388u, 0, 4);
    // 0dd73a  jge 0xdd73f
    X86_AT(c, 0xdd73au);
    if (x86_cc(c, 13)) { goto L_dd73f; }
    X86_TICK(c, 9);
    // 0dd73c  inc eax
    X86_AT(c, 0xdd73cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0dd73d  jmp 0xdd734
    X86_AT(c, 0xdd73du);
    X86_POLL(c, 0xdd734u); goto L_dd734;
L_dd73f:
    X86_TICK(c, 9);
    // 0dd73f  inc ecx
    X86_AT(c, 0xdd73fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0dd740  jmp 0xdd72e
    X86_AT(c, 0xdd740u);
    X86_POLL(c, 0xdd72eu); goto L_dd72e;
L_dd742:
    X86_TICK(c, 10);
    // 0dd742  ret 
    X86_AT(c, 0xdd742u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdd728u, "ran off the end of a function");
}
void f_000dd744(X86Cpu& c) {
    X86_TICK(c, 6);
    // 0dd744  mov edx, dword ptr [esp + 4]
    X86_AT(c, 0xdd744u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0dd748  sub ecx, ecx
    X86_AT(c, 0xdd748u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
L_dd74a:
    X86_TICK(c, 7);
    // 0dd74a  and edx, edx
    X86_AT(c, 0xdd74au);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0dd74c  jle 0xdd757
    X86_AT(c, 0xdd74cu);
    if (x86_cc(c, 14)) { goto L_dd757; }
    X86_TICK(c, 13);
    // 0dd74e  inc ecx
    X86_AT(c, 0xdd74eu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0dd74f  lea eax, [ecx + ecx*1 - 1]
    X86_AT(c, 0xdd74fu);
    c.r[0] = (uint32_t)(c.r[1] + c.r[1] + 0xFFFFFFFFu);
    // 0dd753  sub edx, eax
    X86_AT(c, 0xdd753u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0dd755  jmp 0xdd74a
    X86_AT(c, 0xdd755u);
    X86_POLL(c, 0xdd74au); goto L_dd74a;
L_dd757:
    X86_TICK(c, 12);
    // 0dd757  mov eax, ecx
    X86_AT(c, 0xdd757u);
    c.r[0] = c.r[1];
    // 0dd759  ret 
    X86_AT(c, 0xdd759u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdd744u, "ran off the end of a function");
}
void f_000dd75c(X86Cpu& c) {
    X86_TICK(c, 63);
    // 0dd75c  push ebp
    X86_AT(c, 0xdd75cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0dd75d  mov ebp, esp
    X86_AT(c, 0xdd75du);
    c.r[5] = c.r[4];
    // 0dd75f  push edi
    X86_AT(c, 0xdd75fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dd760  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xdd760u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0dd763  mov eax, edi
    X86_AT(c, 0xdd763u);
    c.r[0] = c.r[7];
    // 0dd765  cdq 
    X86_AT(c, 0xdd765u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0dd766  mov ecx, 0x64
    X86_AT(c, 0xdd766u);
    c.r[1] = 0x64u;
    // 0dd76b  idiv ecx
    X86_AT(c, 0xdd76bu);
    x86_idiv(c, c.r[1], 4, 0xdd76bu);
    // 0dd76d  cmp edx, 0x31
    X86_AT(c, 0xdd76du);
    (void)x86_sub(c, c.r[2], 0x31u, 0, 4);
    // 0dd770  jle 0xdd774
    X86_AT(c, 0xdd770u);
    if (x86_cc(c, 14)) { goto L_dd774; }
    X86_TICK(c, 2);
    // 0dd772  add edi, ecx
    X86_AT(c, 0xdd772u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[1], 0, 4); }
L_dd774:
    X86_TICK(c, 53);
    // 0dd774  mov eax, edi
    X86_AT(c, 0xdd774u);
    c.r[0] = c.r[7];
    // 0dd776  cdq 
    X86_AT(c, 0xdd776u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0dd777  mov ecx, 0x3e8
    X86_AT(c, 0xdd777u);
    c.r[1] = 0x3E8u;
    // 0dd77c  idiv ecx
    X86_AT(c, 0xdd77cu);
    x86_idiv(c, c.r[1], 4, 0xdd77cu);
    // 0dd77e  cmp edx, 0x1f3
    X86_AT(c, 0xdd77eu);
    (void)x86_sub(c, c.r[2], 0x1F3u, 0, 4);
    // 0dd784  jle 0xdd788
    X86_AT(c, 0xdd784u);
    if (x86_cc(c, 14)) { goto L_dd788; }
    X86_TICK(c, 2);
    // 0dd786  add edi, ecx
    X86_AT(c, 0xdd786u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[1], 0, 4); }
L_dd788:
    X86_TICK(c, 22);
    // 0dd788  mov eax, edi
    X86_AT(c, 0xdd788u);
    c.r[0] = c.r[7];
    // 0dd78a  pop edi
    X86_AT(c, 0xdd78au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dd78b  leave 
    X86_AT(c, 0xdd78bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dd78c  ret 
    X86_AT(c, 0xdd78cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdd75cu, "ran off the end of a function");
}
void f_000dd790(X86Cpu& c) {
    X86_TICK(c, 98);
    // 0dd790  push edi
    X86_AT(c, 0xdd790u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dd791  mov eax, dword ptr [0xbef7c]
    X86_AT(c, 0xdd791u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xBEF7Cu)));
    // 0dd796  mov edx, eax
    X86_AT(c, 0xdd796u);
    c.r[2] = c.r[0];
    // 0dd798  shl edx, 5
    X86_AT(c, 0xdd798u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0dd79b  sub edx, eax
    X86_AT(c, 0xdd79bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0dd79d  lea edx, [eax + edx*4]
    X86_AT(c, 0xdd79du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0dd7a0  shl edx, 3
    X86_AT(c, 0xdd7a0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0dd7a3  xchg edx, eax
    X86_AT(c, 0xdd7a3u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0dd7a4  cdq 
    X86_AT(c, 0xdd7a4u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0dd7a5  idiv dword ptr [0xc2114]
    X86_AT(c, 0xdd7a5u);
    x86_idiv(c, rd32((c.sbase[3] + (uint32_t)(0xC2114u))), 4, 0xdd7a5u);
    // 0dd7ab  mov edi, eax
    X86_AT(c, 0xdd7abu);
    c.r[7] = c.r[0];
    // 0dd7ad  imul eax, dword ptr [0xbef80]
    X86_AT(c, 0xdd7adu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xBEF80u))), 4);
    // 0dd7b4  mov dword ptr [0xbef80], eax
    X86_AT(c, 0xdd7b4u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF80u)), c.r[0]);
    // 0dd7b9  push eax
    X86_AT(c, 0xdd7b9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dd7ba  call 0xdd75c
    X86_AT(c, 0xdd7bau);
    push32(c, 0xdd7bfu); x86_call_known(c, 0xdd75cu, f_000dd75c); X86_RET(c, 0xdd7bfu);
    X86_TICK(c, 57);
    // 0dd7bf  mov dword ptr [0xbef80], eax
    X86_AT(c, 0xdd7bfu);
    wr32((c.sbase[3] + (uint32_t)(0xBEF80u)), c.r[0]);
    // 0dd7c4  cdq 
    X86_AT(c, 0xdd7c4u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0dd7c5  mov ecx, 0x3e8
    X86_AT(c, 0xdd7c5u);
    c.r[1] = 0x3E8u;
    // 0dd7ca  idiv ecx
    X86_AT(c, 0xdd7cau);
    x86_idiv(c, c.r[1], 4, 0xdd7cau);
    // 0dd7cc  mov dword ptr [0xbef80], eax
    X86_AT(c, 0xdd7ccu);
    wr32((c.sbase[3] + (uint32_t)(0xBEF80u)), c.r[0]);
    // 0dd7d1  add esp, 4
    X86_AT(c, 0xdd7d1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0dd7d4  cmp eax, 6
    X86_AT(c, 0xdd7d4u);
    (void)x86_sub(c, c.r[0], 0x6u, 0, 4);
    // 0dd7d7  jle 0xdd7e3
    X86_AT(c, 0xdd7d7u);
    if (x86_cc(c, 14)) { goto L_dd7e3; }
    X86_TICK(c, 2);
    // 0dd7d9  mov dword ptr [0xbef80], 6
    X86_AT(c, 0xdd7d9u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF80u)), 0x6u);
L_dd7e3:
    X86_TICK(c, 14);
    // 0dd7e3  pop edi
    X86_AT(c, 0xdd7e3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dd7e4  ret 
    X86_AT(c, 0xdd7e4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdd790u, "ran off the end of a function");
}
void f_000dd7e8(X86Cpu& c) {
    X86_TICK(c, 98);
    // 0dd7e8  push edi
    X86_AT(c, 0xdd7e8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dd7e9  mov eax, dword ptr [0xbef7c]
    X86_AT(c, 0xdd7e9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xBEF7Cu)));
    // 0dd7ee  mov edx, eax
    X86_AT(c, 0xdd7eeu);
    c.r[2] = c.r[0];
    // 0dd7f0  shl edx, 5
    X86_AT(c, 0xdd7f0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0dd7f3  sub edx, eax
    X86_AT(c, 0xdd7f3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0dd7f5  lea edx, [eax + edx*4]
    X86_AT(c, 0xdd7f5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0dd7f8  shl edx, 3
    X86_AT(c, 0xdd7f8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0dd7fb  xchg edx, eax
    X86_AT(c, 0xdd7fbu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0dd7fc  cdq 
    X86_AT(c, 0xdd7fcu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0dd7fd  idiv dword ptr [0xc2114]
    X86_AT(c, 0xdd7fdu);
    x86_idiv(c, rd32((c.sbase[3] + (uint32_t)(0xC2114u))), 4, 0xdd7fdu);
    // 0dd803  mov edi, eax
    X86_AT(c, 0xdd803u);
    c.r[7] = c.r[0];
    // 0dd805  imul eax, dword ptr [0xbef84]
    X86_AT(c, 0xdd805u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xBEF84u))), 4);
    // 0dd80c  mov dword ptr [0xbef84], eax
    X86_AT(c, 0xdd80cu);
    wr32((c.sbase[3] + (uint32_t)(0xBEF84u)), c.r[0]);
    // 0dd811  push eax
    X86_AT(c, 0xdd811u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dd812  call 0xdd75c
    X86_AT(c, 0xdd812u);
    push32(c, 0xdd817u); x86_call_known(c, 0xdd75cu, f_000dd75c); X86_RET(c, 0xdd817u);
    X86_TICK(c, 57);
    // 0dd817  mov dword ptr [0xbef84], eax
    X86_AT(c, 0xdd817u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF84u)), c.r[0]);
    // 0dd81c  cdq 
    X86_AT(c, 0xdd81cu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0dd81d  mov ecx, 0x3e8
    X86_AT(c, 0xdd81du);
    c.r[1] = 0x3E8u;
    // 0dd822  idiv ecx
    X86_AT(c, 0xdd822u);
    x86_idiv(c, c.r[1], 4, 0xdd822u);
    // 0dd824  mov dword ptr [0xbef84], eax
    X86_AT(c, 0xdd824u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF84u)), c.r[0]);
    // 0dd829  add esp, 4
    X86_AT(c, 0xdd829u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0dd82c  cmp eax, 6
    X86_AT(c, 0xdd82cu);
    (void)x86_sub(c, c.r[0], 0x6u, 0, 4);
    // 0dd82f  jle 0xdd83b
    X86_AT(c, 0xdd82fu);
    if (x86_cc(c, 14)) { goto L_dd83b; }
    X86_TICK(c, 2);
    // 0dd831  mov dword ptr [0xbef84], 6
    X86_AT(c, 0xdd831u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF84u)), 0x6u);
L_dd83b:
    X86_TICK(c, 14);
    // 0dd83b  pop edi
    X86_AT(c, 0xdd83bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dd83c  ret 
    X86_AT(c, 0xdd83cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdd7e8u, "ran off the end of a function");
}
void f_000dd840(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0dd840  push ebp
    X86_AT(c, 0xdd840u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0dd841  mov ebp, esp
    X86_AT(c, 0xdd841u);
    c.r[5] = c.r[4];
    // 0dd843  push eax
    X86_AT(c, 0xdd843u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dd844  push 0xf
    X86_AT(c, 0xdd844u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0dd846  push 0xd29c
    X86_AT(c, 0xdd846u);
    { uint32_t v = 0xD29Cu; push32(c, v); }
    // 0dd84b  call 0xcc830
    X86_AT(c, 0xdd84bu);
    push32(c, 0xdd850u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xdd850u);
    X86_TICK(c, 14);
    // 0dd850  add esp, 8
    X86_AT(c, 0xdd850u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0dd853  cmp dword ptr [0xc03d8], 0
    X86_AT(c, 0xdd853u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC03D8u))), 0x0u, 0, 4);
    // 0dd85a  jne 0xdd9cc
    X86_AT(c, 0xdd85au);
    if (x86_cc(c, 5)) { goto L_dd9cc; }
    X86_TICK(c, 12);
    // 0dd860  push dword ptr [0xc03d4]
    X86_AT(c, 0xdd860u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC03D4u))); push32(c, v); }
    // 0dd866  call 0xe0548
    X86_AT(c, 0xdd866u);
    push32(c, 0xdd86bu); x86_call_known(c, 0xe0548u, f_000e0548); X86_RET(c, 0xdd86bu);
    X86_TICK(c, 9);
    // 0dd86b  add esp, 4
    X86_AT(c, 0xdd86bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0dd86e  inc eax
    X86_AT(c, 0xdd86eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0dd86f  je 0xdd8b4
    X86_AT(c, 0xdd86fu);
    if (x86_cc(c, 4)) { goto L_dd8b4; }
    X86_TICK(c, 12);
    // 0dd871  push dword ptr [0xc03d4]
    X86_AT(c, 0xdd871u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC03D4u))); push32(c, v); }
    // 0dd877  call 0xe0548
    X86_AT(c, 0xdd877u);
    push32(c, 0xdd87cu); x86_call_known(c, 0xe0548u, f_000e0548); X86_RET(c, 0xdd87cu);
    X86_TICK(c, 9);
    // 0dd87c  add esp, 4
    X86_AT(c, 0xdd87cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0dd87f  cmp eax, 5
    X86_AT(c, 0xdd87fu);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0dd882  je 0xdd8b4
    X86_AT(c, 0xdd882u);
    if (x86_cc(c, 4)) { goto L_dd8b4; }
    X86_TICK(c, 9);
    // 0dd884  push 0xd2b4
    X86_AT(c, 0xdd884u);
    { uint32_t v = 0xD2B4u; push32(c, v); }
    // 0dd889  call 0xcc7bc
    X86_AT(c, 0xdd889u);
    push32(c, 0xdd88eu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdd88eu);
    X86_TICK(c, 9);
    // 0dd88e  push 0xd2bc
    X86_AT(c, 0xdd88eu);
    { uint32_t v = 0xD2BCu; push32(c, v); }
    // 0dd893  call 0xcc7bc
    X86_AT(c, 0xdd893u);
    push32(c, 0xdd898u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdd898u);
    X86_TICK(c, 9);
    // 0dd898  push 0xd2f4
    X86_AT(c, 0xdd898u);
    { uint32_t v = 0xD2F4u; push32(c, v); }
    // 0dd89d  call 0xcc7bc
    X86_AT(c, 0xdd89du);
    push32(c, 0xdd8a2u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdd8a2u);
    X86_TICK(c, 9);
    // 0dd8a2  push 0xd32c
    X86_AT(c, 0xdd8a2u);
    { uint32_t v = 0xD32Cu; push32(c, v); }
    // 0dd8a7  call 0xcc7bc
    X86_AT(c, 0xdd8a7u);
    push32(c, 0xdd8acu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdd8acu);
    X86_TICK(c, 9);
    // 0dd8ac  add esp, 0x10
    X86_AT(c, 0xdd8acu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0dd8af  jmp 0xddadd
    X86_AT(c, 0xdd8afu);
    goto L_ddadd;
L_dd8b4:
    X86_TICK(c, 9);
    // 0dd8b4  push 0xd354
    X86_AT(c, 0xdd8b4u);
    { uint32_t v = 0xD354u; push32(c, v); }
    // 0dd8b9  call 0xcc7bc
    X86_AT(c, 0xdd8b9u);
    push32(c, 0xdd8beu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdd8beu);
    X86_TICK(c, 7);
    // 0dd8be  call 0xdf824
    X86_AT(c, 0xdd8beu);
    push32(c, 0xdd8c3u); x86_call_known(c, 0xdf824u, f_000df824); X86_RET(c, 0xdd8c3u);
    X86_TICK(c, 9);
    // 0dd8c3  add esp, 4
    X86_AT(c, 0xdd8c3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0dd8c6  and eax, eax
    X86_AT(c, 0xdd8c6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0dd8c8  jne 0xdd8dc
    X86_AT(c, 0xdd8c8u);
    if (x86_cc(c, 5)) { goto L_dd8dc; }
    X86_TICK(c, 9);
    // 0dd8ca  push 0xd358
    X86_AT(c, 0xdd8cau);
    { uint32_t v = 0xD358u; push32(c, v); }
    // 0dd8cf  call 0xcc7bc
    X86_AT(c, 0xdd8cfu);
    push32(c, 0xdd8d4u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdd8d4u);
    X86_TICK(c, 9);
    // 0dd8d4  add esp, 4
    X86_AT(c, 0xdd8d4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0dd8d7  jmp 0xddadd
    X86_AT(c, 0xdd8d7u);
    goto L_ddadd;
L_dd8dc:
    X86_TICK(c, 73);
    // 0dd8dc  mov dword ptr [0xc03d8], 1
    X86_AT(c, 0xdd8dcu);
    wr32((c.sbase[3] + (uint32_t)(0xC03D8u)), 0x1u);
    // 0dd8e6  mov dword ptr [0xbef90], 1
    X86_AT(c, 0xdd8e6u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF90u)), 0x1u);
    // 0dd8f0  mov eax, dword ptr [0xbef80]
    X86_AT(c, 0xdd8f0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xBEF80u)));
    // 0dd8f5  mul eax
    X86_AT(c, 0xdd8f5u);
    x86_mul(c, c.r[0], 4);
    // 0dd8f7  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xdd8f7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0dd8fa  mov eax, dword ptr [0xbef84]
    X86_AT(c, 0xdd8fau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xBEF84u)));
    // 0dd8ff  mul eax
    X86_AT(c, 0xdd8ffu);
    x86_mul(c, c.r[0], 4);
    // 0dd901  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdd901u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0dd904  push eax
    X86_AT(c, 0xdd904u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dd905  call 0xdd744
    X86_AT(c, 0xdd905u);
    push32(c, 0xdd90au); x86_call_known(c, 0xdd744u, f_000dd744); X86_RET(c, 0xdd90au);
    X86_TICK(c, 11);
    // 0dd90a  mov dword ptr [0xbef7c], eax
    X86_AT(c, 0xdd90au);
    wr32((c.sbase[3] + (uint32_t)(0xBEF7Cu)), c.r[0]);
    // 0dd90f  add esp, 4
    X86_AT(c, 0xdd90fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0dd912  cmp eax, 8
    X86_AT(c, 0xdd912u);
    (void)x86_sub(c, c.r[0], 0x8u, 0, 4);
    // 0dd915  jle 0xdd926
    X86_AT(c, 0xdd915u);
    if (x86_cc(c, 14)) { goto L_dd926; }
    X86_TICK(c, 9);
    // 0dd917  mov dword ptr [0xbef7c], 8
    X86_AT(c, 0xdd917u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF7Cu)), 0x8u);
    // 0dd921  jmp 0xdd9bd
    X86_AT(c, 0xdd921u);
    goto L_dd9bd;
L_dd926:
    X86_TICK(c, 12);
    // 0dd926  cmp dword ptr [0xbef7c], 0
    X86_AT(c, 0xdd926u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xBEF7Cu))), 0x0u, 0, 4);
    // 0dd92d  jne 0xdd9bd
    X86_AT(c, 0xdd92du);
    if (x86_cc(c, 5)) { goto L_dd9bd; }
    X86_TICK(c, 62);
    // 0dd933  mov dword ptr [0xbef7c], 1
    X86_AT(c, 0xdd933u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF7Cu)), 0x1u);
    // 0dd93d  mov eax, dword ptr [0xc03cc]
    X86_AT(c, 0xdd93du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC03CCu)));
    // 0dd942  lea edx, [eax + eax*2]
    X86_AT(c, 0xdd942u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0dd945  lea edx, [eax + edx*8]
    X86_AT(c, 0xdd945u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0dd948  lea edx, [eax + edx*4]
    X86_AT(c, 0xdd948u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0dd94b  lea edx, [eax + edx*2]
    X86_AT(c, 0xdd94bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0dd94e  shl edx, 2
    X86_AT(c, 0xdd94eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[2] = r; }
    // 0dd951  imul eax, dword ptr [0xc03d0], 0x74
    X86_AT(c, 0xdd951u);
    c.r[0] = x86_imul2(c, rd32((c.sbase[3] + (uint32_t)(0xC03D0u))), 0x74u, 4);
    // 0dd958  add eax, edx
    X86_AT(c, 0xdd958u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0dd95a  mov edx, dword ptr [0xc03d4]
    X86_AT(c, 0xdd95au);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC03D4u)));
    // 0dd960  lea edx, [edx*8]
    X86_AT(c, 0xdd960u);
    c.r[2] = (uint32_t)(c.r[2] * 8);
    // 0dd967  lea edx, [edx + edx*2]
    X86_AT(c, 0xdd967u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0dd96a  add edx, eax
    X86_AT(c, 0xdd96au);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0dd96c  mov edx, dword ptr [edx + 0xc0b08]
    X86_AT(c, 0xdd96cu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xC0B08u)));
    // 0dd972  cmp edx, 3
    X86_AT(c, 0xdd972u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0dd975  ja 0xdd9bd
    X86_AT(c, 0xdd975u);
    if (x86_cc(c, 7)) { goto L_dd9bd; }
    X86_TICK(c, 7);
    // 0dd977  jmp dword ptr cs:[edx*4 + 0xdd97f]
    X86_AT(c, 0xdd977u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xDD97Fu)));
      switch (t) {
      case 0xdd98fu: goto L_dd98f;
      case 0xdd99bu: goto L_dd99b;
      case 0xdd9a7u: goto L_dd9a7;
      case 0xdd9b3u: goto L_dd9b3;
      default: x86_jump(c, t); return; } }
L_dd98f:
    X86_TICK(c, 9);
    // 0dd98f  mov dword ptr [0xbef80], 0xffffffff
    X86_AT(c, 0xdd98fu);
    wr32((c.sbase[3] + (uint32_t)(0xBEF80u)), 0xFFFFFFFFu);
    // 0dd999  jmp 0xdd9bd
    X86_AT(c, 0xdd999u);
    goto L_dd9bd;
L_dd99b:
    X86_TICK(c, 9);
    // 0dd99b  mov dword ptr [0xbef80], 1
    X86_AT(c, 0xdd99bu);
    wr32((c.sbase[3] + (uint32_t)(0xBEF80u)), 0x1u);
    // 0dd9a5  jmp 0xdd9bd
    X86_AT(c, 0xdd9a5u);
    goto L_dd9bd;
L_dd9a7:
    X86_TICK(c, 9);
    // 0dd9a7  mov dword ptr [0xbef84], 0xffffffff
    X86_AT(c, 0xdd9a7u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF84u)), 0xFFFFFFFFu);
    // 0dd9b1  jmp 0xdd9bd
    X86_AT(c, 0xdd9b1u);
    goto L_dd9bd;
L_dd9b3:
    X86_TICK(c, 2);
    // 0dd9b3  mov dword ptr [0xbef84], 1
    X86_AT(c, 0xdd9b3u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF84u)), 0x1u);
L_dd9bd:
    X86_TICK(c, 13);
    // 0dd9bd  mov eax, dword ptr [0xbef7c]
    X86_AT(c, 0xdd9bdu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xBEF7Cu)));
    // 0dd9c2  mov dword ptr [0xc2114], eax
    X86_AT(c, 0xdd9c2u);
    wr32((c.sbase[3] + (uint32_t)(0xC2114u)), c.r[0]);
    // 0dd9c7  jmp 0xddadd
    X86_AT(c, 0xdd9c7u);
    goto L_ddadd;
L_dd9cc:
    X86_TICK(c, 51);
    // 0dd9cc  mov eax, dword ptr [0xc03cc]
    X86_AT(c, 0xdd9ccu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC03CCu)));
    // 0dd9d1  lea edx, [eax + eax*2]
    X86_AT(c, 0xdd9d1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0dd9d4  lea edx, [eax + edx*8]
    X86_AT(c, 0xdd9d4u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0dd9d7  lea edx, [eax + edx*4]
    X86_AT(c, 0xdd9d7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0dd9da  lea edx, [eax + edx*2]
    X86_AT(c, 0xdd9dau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0dd9dd  shl edx, 2
    X86_AT(c, 0xdd9ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[2] = r; }
    // 0dd9e0  imul eax, dword ptr [0xc03d0], 0x74
    X86_AT(c, 0xdd9e0u);
    c.r[0] = x86_imul2(c, rd32((c.sbase[3] + (uint32_t)(0xC03D0u))), 0x74u, 4);
    // 0dd9e7  add eax, edx
    X86_AT(c, 0xdd9e7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0dd9e9  cmp dword ptr [eax + 0xc0ae0], 0
    X86_AT(c, 0xdd9e9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xC0AE0u))), 0x0u, 0, 4);
    // 0dd9f0  je 0xdda18
    X86_AT(c, 0xdd9f0u);
    if (x86_cc(c, 4)) { goto L_dda18; }
    X86_TICK(c, 9);
    // 0dd9f2  push 0xd38c
    X86_AT(c, 0xdd9f2u);
    { uint32_t v = 0xD38Cu; push32(c, v); }
    // 0dd9f7  call 0xcc7bc
    X86_AT(c, 0xdd9f7u);
    push32(c, 0xdd9fcu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdd9fcu);
    X86_TICK(c, 9);
    // 0dd9fc  push 0xd390
    X86_AT(c, 0xdd9fcu);
    { uint32_t v = 0xD390u; push32(c, v); }
    // 0dda01  call 0xcc7bc
    X86_AT(c, 0xdda01u);
    push32(c, 0xdda06u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdda06u);
    X86_TICK(c, 9);
    // 0dda06  push 0xd3e0
    X86_AT(c, 0xdda06u);
    { uint32_t v = 0xD3E0u; push32(c, v); }
    // 0dda0b  call 0xcc7bc
    X86_AT(c, 0xdda0bu);
    push32(c, 0xdda10u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdda10u);
    X86_TICK(c, 9);
    // 0dda10  add esp, 0xc
    X86_AT(c, 0xdda10u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0dda13  jmp 0xddadd
    X86_AT(c, 0xdda13u);
    goto L_ddadd;
L_dda18:
    X86_TICK(c, 11);
    // 0dda18  mov dword ptr [0xc03d8], 0
    X86_AT(c, 0xdda18u);
    wr32((c.sbase[3] + (uint32_t)(0xC03D8u)), 0x0u);
    // 0dda22  push 0xd42c
    X86_AT(c, 0xdda22u);
    { uint32_t v = 0xD42Cu; push32(c, v); }
    // 0dda27  call 0xcc7bc
    X86_AT(c, 0xdda27u);
    push32(c, 0xdda2cu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdda2cu);
    X86_TICK(c, 9);
    // 0dda2c  mov dword ptr [0xbef90], 1
    X86_AT(c, 0xdda2cu);
    wr32((c.sbase[3] + (uint32_t)(0xBEF90u)), 0x1u);
    // 0dda36  call 0xdd790
    X86_AT(c, 0xdda36u);
    push32(c, 0xdda3bu); x86_call_known(c, 0xdd790u, f_000dd790); X86_RET(c, 0xdda3bu);
    X86_TICK(c, 7);
    // 0dda3b  call 0xdd7e8
    X86_AT(c, 0xdda3bu);
    push32(c, 0xdda40u); x86_call_known(c, 0xdd7e8u, f_000dd7e8); X86_RET(c, 0xdda40u);
    X86_TICK(c, 14);
    // 0dda40  add esp, 4
    X86_AT(c, 0xdda40u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0dda43  cmp dword ptr [0xbef80], 0
    X86_AT(c, 0xdda43u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xBEF80u))), 0x0u, 0, 4);
    // 0dda4a  jne 0xddadd
    X86_AT(c, 0xdda4au);
    if (x86_cc(c, 5)) { goto L_ddadd; }
    X86_TICK(c, 12);
    // 0dda50  cmp dword ptr [0xbef84], 0
    X86_AT(c, 0xdda50u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xBEF84u))), 0x0u, 0, 4);
    // 0dda57  jne 0xddadd
    X86_AT(c, 0xdda57u);
    if (x86_cc(c, 5)) { goto L_ddadd; }
    X86_TICK(c, 60);
    // 0dda5d  mov eax, dword ptr [0xc03cc]
    X86_AT(c, 0xdda5du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC03CCu)));
    // 0dda62  lea edx, [eax + eax*2]
    X86_AT(c, 0xdda62u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0dda65  lea edx, [eax + edx*8]
    X86_AT(c, 0xdda65u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0dda68  lea edx, [eax + edx*4]
    X86_AT(c, 0xdda68u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0dda6b  lea edx, [eax + edx*2]
    X86_AT(c, 0xdda6bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0dda6e  shl edx, 2
    X86_AT(c, 0xdda6eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[2] = r; }
    // 0dda71  imul eax, dword ptr [0xc03d0], 0x74
    X86_AT(c, 0xdda71u);
    c.r[0] = x86_imul2(c, rd32((c.sbase[3] + (uint32_t)(0xC03D0u))), 0x74u, 4);
    // 0dda78  add eax, edx
    X86_AT(c, 0xdda78u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0dda7a  mov edx, dword ptr [0xc03d4]
    X86_AT(c, 0xdda7au);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC03D4u)));
    // 0dda80  lea edx, [edx*8]
    X86_AT(c, 0xdda80u);
    c.r[2] = (uint32_t)(c.r[2] * 8);
    // 0dda87  lea edx, [edx + edx*2]
    X86_AT(c, 0xdda87u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0dda8a  add edx, eax
    X86_AT(c, 0xdda8au);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0dda8c  mov edx, dword ptr [edx + 0xc0b08]
    X86_AT(c, 0xdda8cu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xC0B08u)));
    // 0dda92  cmp edx, 3
    X86_AT(c, 0xdda92u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0dda95  ja 0xddadd
    X86_AT(c, 0xdda95u);
    if (x86_cc(c, 7)) { goto L_ddadd; }
    X86_TICK(c, 7);
    // 0dda97  jmp dword ptr cs:[edx*4 + 0xdda9f]
    X86_AT(c, 0xdda97u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xDDA9Fu)));
      switch (t) {
      case 0xddaafu: goto L_ddaaf;
      case 0xddabbu: goto L_ddabb;
      case 0xddac7u: goto L_ddac7;
      case 0xddad3u: goto L_ddad3;
      default: x86_jump(c, t); return; } }
L_ddaaf:
    X86_TICK(c, 9);
    // 0ddaaf  mov dword ptr [0xbef80], 0xffffffff
    X86_AT(c, 0xddaafu);
    wr32((c.sbase[3] + (uint32_t)(0xBEF80u)), 0xFFFFFFFFu);
    // 0ddab9  jmp 0xddadd
    X86_AT(c, 0xddab9u);
    goto L_ddadd;
L_ddabb:
    X86_TICK(c, 9);
    // 0ddabb  mov dword ptr [0xbef80], 1
    X86_AT(c, 0xddabbu);
    wr32((c.sbase[3] + (uint32_t)(0xBEF80u)), 0x1u);
    // 0ddac5  jmp 0xddadd
    X86_AT(c, 0xddac5u);
    goto L_ddadd;
L_ddac7:
    X86_TICK(c, 9);
    // 0ddac7  mov dword ptr [0xbef84], 0xffffffff
    X86_AT(c, 0xddac7u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF84u)), 0xFFFFFFFFu);
    // 0ddad1  jmp 0xddadd
    X86_AT(c, 0xddad1u);
    goto L_ddadd;
L_ddad3:
    X86_TICK(c, 2);
    // 0ddad3  mov dword ptr [0xbef84], 1
    X86_AT(c, 0xddad3u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF84u)), 0x1u);
L_ddadd:
    X86_TICK(c, 16);
    // 0ddadd  leave 
    X86_AT(c, 0xddaddu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ddade  ret 
    X86_AT(c, 0xddadeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdd840u, "ran off the end of a function");
}
void f_000ddadd(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0ddadd  leave 
    X86_AT(c, 0xddaddu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ddade  ret 
    X86_AT(c, 0xddadeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xddaddu, "ran off the end of a function");
}
void f_000ddae0(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0ddae0  push ebp
    X86_AT(c, 0xddae0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ddae1  mov ebp, esp
    X86_AT(c, 0xddae1u);
    c.r[5] = c.r[4];
    // 0ddae3  sub esp, 8
    X86_AT(c, 0xddae3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0ddae6  push ebx
    X86_AT(c, 0xddae6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ddae7  push esi
    X86_AT(c, 0xddae7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ddae8  push edi
    X86_AT(c, 0xddae8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ddae9  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xddae9u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ddaec  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xddaecu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0ddaef  sub ebx, ebx
    X86_AT(c, 0xddaefu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_ddaf1:
    X86_TICK(c, 7);
    // 0ddaf1  cmp ebx, 2
    X86_AT(c, 0xddaf1u);
    (void)x86_sub(c, c.r[3], 0x2u, 0, 4);
    // 0ddaf4  jge 0xddb39
    X86_AT(c, 0xddaf4u);
    if (x86_cc(c, 13)) { goto L_ddb39; }
    X86_TICK(c, 25);
    // 0ddaf6  push 0xe
    X86_AT(c, 0xddaf6u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ddaf8  lea eax, [esi + 7]
    X86_AT(c, 0xddaf8u);
    c.r[0] = (uint32_t)(c.r[6] + 0x7u);
    // 0ddafb  push eax
    X86_AT(c, 0xddafbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ddafc  lea edx, [edi + ebx*1]
    X86_AT(c, 0xddafcu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[3]);
    // 0ddaff  push edx
    X86_AT(c, 0xddaffu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0ddb00  push esi
    X86_AT(c, 0xddb00u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ddb01  push edx
    X86_AT(c, 0xddb01u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0ddb02  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xddb02u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0ddb05  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0xddb05u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
    // 0ddb08  call 0xc9378
    X86_AT(c, 0xddb08u);
    push32(c, 0xddb0du); x86_call_known(c, 0xc9378u, f_000c9378); X86_RET(c, 0xddb0du);
    X86_TICK(c, 26);
    // 0ddb0d  push 0xe
    X86_AT(c, 0xddb0du);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ddb0f  push dword ptr [ebp - 4]
    X86_AT(c, 0xddb0fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0ddb12  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xddb12u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0ddb15  add eax, 5
    X86_AT(c, 0xddb15u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x5u, 0, 4); }
    // 0ddb18  push eax
    X86_AT(c, 0xddb18u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ddb19  push esi
    X86_AT(c, 0xddb19u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ddb1a  push eax
    X86_AT(c, 0xddb1au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ddb1b  call 0xc9378
    X86_AT(c, 0xddb1bu);
    push32(c, 0xddb20u); x86_call_known(c, 0xc9378u, f_000c9378); X86_RET(c, 0xddb20u);
    X86_TICK(c, 23);
    // 0ddb20  push 0xe
    X86_AT(c, 0xddb20u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ddb22  lea eax, [esi + 3]
    X86_AT(c, 0xddb22u);
    c.r[0] = (uint32_t)(c.r[6] + 0x3u);
    // 0ddb25  add eax, ebx
    X86_AT(c, 0xddb25u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[3], 0, 4); }
    // 0ddb27  push eax
    X86_AT(c, 0xddb27u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ddb28  lea edx, [edi + 6]
    X86_AT(c, 0xddb28u);
    c.r[2] = (uint32_t)(c.r[7] + 0x6u);
    // 0ddb2b  push edx
    X86_AT(c, 0xddb2bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0ddb2c  push eax
    X86_AT(c, 0xddb2cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ddb2d  push edi
    X86_AT(c, 0xddb2du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ddb2e  call 0xc9378
    X86_AT(c, 0xddb2eu);
    push32(c, 0xddb33u); x86_call_known(c, 0xc9378u, f_000c9378); X86_RET(c, 0xddb33u);
    X86_TICK(c, 11);
    // 0ddb33  add esp, 0x3c
    X86_AT(c, 0xddb33u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ddb36  inc ebx
    X86_AT(c, 0xddb36u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0ddb37  jmp 0xddaf1
    X86_AT(c, 0xddb37u);
    X86_POLL(c, 0xddaf1u); goto L_ddaf1;
L_ddb39:
    X86_TICK(c, 28);
    // 0ddb39  pop edi
    X86_AT(c, 0xddb39u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ddb3a  pop esi
    X86_AT(c, 0xddb3au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ddb3b  pop ebx
    X86_AT(c, 0xddb3bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ddb3c  leave 
    X86_AT(c, 0xddb3cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ddb3d  ret 
    X86_AT(c, 0xddb3du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xddae0u, "ran off the end of a function");
}
void f_000ddb40(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0ddb40  push ebp
    X86_AT(c, 0xddb40u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ddb41  mov ebp, esp
    X86_AT(c, 0xddb41u);
    c.r[5] = c.r[4];
    // 0ddb43  push ebx
    X86_AT(c, 0xddb43u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ddb44  push esi
    X86_AT(c, 0xddb44u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ddb45  push edi
    X86_AT(c, 0xddb45u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ddb46  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xddb46u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ddb49  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xddb49u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0ddb4c  sub ebx, ebx
    X86_AT(c, 0xddb4cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_ddb4e:
    X86_TICK(c, 7);
    // 0ddb4e  cmp ebx, 2
    X86_AT(c, 0xddb4eu);
    (void)x86_sub(c, c.r[3], 0x2u, 0, 4);
    // 0ddb51  jge 0xddb81
    X86_AT(c, 0xddb51u);
    if (x86_cc(c, 13)) { goto L_ddb81; }
    X86_TICK(c, 23);
    // 0ddb53  push 0xa
    X86_AT(c, 0xddb53u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0ddb55  lea eax, [esi + 7]
    X86_AT(c, 0xddb55u);
    c.r[0] = (uint32_t)(c.r[6] + 0x7u);
    // 0ddb58  push eax
    X86_AT(c, 0xddb58u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ddb59  lea eax, [edi + ebx*1]
    X86_AT(c, 0xddb59u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[3]);
    // 0ddb5c  add eax, 3
    X86_AT(c, 0xddb5cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x3u, 0, 4); }
    // 0ddb5f  push eax
    X86_AT(c, 0xddb5fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ddb60  push esi
    X86_AT(c, 0xddb60u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ddb61  push eax
    X86_AT(c, 0xddb61u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ddb62  call 0xc9378
    X86_AT(c, 0xddb62u);
    push32(c, 0xddb67u); x86_call_known(c, 0xc9378u, f_000c9378); X86_RET(c, 0xddb67u);
    X86_TICK(c, 23);
    // 0ddb67  push 0xa
    X86_AT(c, 0xddb67u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0ddb69  lea eax, [esi + ebx*1]
    X86_AT(c, 0xddb69u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[3]);
    // 0ddb6c  add eax, 3
    X86_AT(c, 0xddb6cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x3u, 0, 4); }
    // 0ddb6f  push eax
    X86_AT(c, 0xddb6fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ddb70  lea edx, [edi + 7]
    X86_AT(c, 0xddb70u);
    c.r[2] = (uint32_t)(c.r[7] + 0x7u);
    // 0ddb73  push edx
    X86_AT(c, 0xddb73u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0ddb74  push eax
    X86_AT(c, 0xddb74u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ddb75  push edi
    X86_AT(c, 0xddb75u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ddb76  call 0xc9378
    X86_AT(c, 0xddb76u);
    push32(c, 0xddb7bu); x86_call_known(c, 0xc9378u, f_000c9378); X86_RET(c, 0xddb7bu);
    X86_TICK(c, 11);
    // 0ddb7b  inc ebx
    X86_AT(c, 0xddb7bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0ddb7c  add esp, 0x28
    X86_AT(c, 0xddb7cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0ddb7f  jmp 0xddb4e
    X86_AT(c, 0xddb7fu);
    X86_POLL(c, 0xddb4eu); goto L_ddb4e;
L_ddb81:
    X86_TICK(c, 28);
    // 0ddb81  pop edi
    X86_AT(c, 0xddb81u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ddb82  pop esi
    X86_AT(c, 0xddb82u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ddb83  pop ebx
    X86_AT(c, 0xddb83u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ddb84  leave 
    X86_AT(c, 0xddb84u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ddb85  ret 
    X86_AT(c, 0xddb85u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xddb40u, "ran off the end of a function");
}
void f_000ddb88(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0ddb88  push ebp
    X86_AT(c, 0xddb88u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ddb89  mov ebp, esp
    X86_AT(c, 0xddb89u);
    c.r[5] = c.r[4];
    // 0ddb8b  sub esp, 0xc
    X86_AT(c, 0xddb8bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0ddb8e  push ebx
    X86_AT(c, 0xddb8eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ddb8f  push esi
    X86_AT(c, 0xddb8fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ddb90  push edi
    X86_AT(c, 0xddb90u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ddb91  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xddb91u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ddb94  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xddb94u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0ddb97  sub ebx, ebx
    X86_AT(c, 0xddb97u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_ddb99:
    X86_TICK(c, 7);
    // 0ddb99  cmp ebx, 3
    X86_AT(c, 0xddb99u);
    (void)x86_sub(c, c.r[3], 0x3u, 0, 4);
    // 0ddb9c  jge 0xddbda
    X86_AT(c, 0xddb9cu);
    if (x86_cc(c, 13)) { goto L_ddbda; }
    X86_TICK(c, 37);
    // 0ddb9e  push 0xb
    X86_AT(c, 0xddb9eu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ddba0  lea eax, [esi + ebx*1]
    X86_AT(c, 0xddba0u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[3]);
    // 0ddba3  inc eax
    X86_AT(c, 0xddba3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0ddba4  push eax
    X86_AT(c, 0xddba4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ddba5  lea edx, [edi + 3]
    X86_AT(c, 0xddba5u);
    c.r[2] = (uint32_t)(c.r[7] + 0x3u);
    // 0ddba8  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xddba8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0ddbab  add edx, ebx
    X86_AT(c, 0xddbabu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[3], 0, 4); }
    // 0ddbad  push edx
    X86_AT(c, 0xddbadu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0ddbae  push eax
    X86_AT(c, 0xddbaeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ddbaf  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xddbafu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0ddbb2  sub eax, ebx
    X86_AT(c, 0xddbb2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0ddbb4  push eax
    X86_AT(c, 0xddbb4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ddbb5  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xddbb5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0ddbb8  mov dword ptr [ebp - 0xc], edx
    X86_AT(c, 0xddbb8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[2]);
    // 0ddbbb  call 0xc9378
    X86_AT(c, 0xddbbbu);
    push32(c, 0xddbc0u); x86_call_known(c, 0xc9378u, f_000c9378); X86_RET(c, 0xddbc0u);
    X86_TICK(c, 27);
    // 0ddbc0  push 0xb
    X86_AT(c, 0xddbc0u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ddbc2  lea eax, [esi + 6]
    X86_AT(c, 0xddbc2u);
    c.r[0] = (uint32_t)(c.r[6] + 0x6u);
    // 0ddbc5  sub eax, ebx
    X86_AT(c, 0xddbc5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0ddbc7  push eax
    X86_AT(c, 0xddbc7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ddbc8  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xddbc8u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0ddbcb  push eax
    X86_AT(c, 0xddbcbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ddbcc  push dword ptr [ebp - 8]
    X86_AT(c, 0xddbccu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0ddbcf  call 0xc9378
    X86_AT(c, 0xddbcfu);
    push32(c, 0xddbd4u); x86_call_known(c, 0xc9378u, f_000c9378); X86_RET(c, 0xddbd4u);
    X86_TICK(c, 11);
    // 0ddbd4  inc ebx
    X86_AT(c, 0xddbd4u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0ddbd5  add esp, 0x28
    X86_AT(c, 0xddbd5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0ddbd8  jmp 0xddb99
    X86_AT(c, 0xddbd8u);
    X86_POLL(c, 0xddb99u); goto L_ddb99;
L_ddbda:
    X86_TICK(c, 28);
    // 0ddbda  pop edi
    X86_AT(c, 0xddbdau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ddbdb  pop esi
    X86_AT(c, 0xddbdbu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ddbdc  pop ebx
    X86_AT(c, 0xddbdcu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ddbdd  leave 
    X86_AT(c, 0xddbddu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ddbde  ret 
    X86_AT(c, 0xddbdeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xddb88u, "ran off the end of a function");
}
void f_000ddbe0(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0ddbe0  push ebp
    X86_AT(c, 0xddbe0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ddbe1  mov ebp, esp
    X86_AT(c, 0xddbe1u);
    c.r[5] = c.r[4];
    // 0ddbe3  push esi
    X86_AT(c, 0xddbe3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ddbe4  push edi
    X86_AT(c, 0xddbe4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ddbe5  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xddbe5u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ddbe8  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xddbe8u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0ddbeb  push 0xf
    X86_AT(c, 0xddbebu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ddbed  lea eax, [esi + 1]
    X86_AT(c, 0xddbedu);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 0ddbf0  push eax
    X86_AT(c, 0xddbf0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ddbf1  lea eax, [edi + 1]
    X86_AT(c, 0xddbf1u);
    c.r[0] = (uint32_t)(c.r[7] + 0x1u);
    // 0ddbf4  push eax
    X86_AT(c, 0xddbf4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ddbf5  call 0xc9300
    X86_AT(c, 0xddbf5u);
    push32(c, 0xddbfau); x86_call_known(c, 0xc9300u, f_000c9300); X86_RET(c, 0xddbfau);
    X86_TICK(c, 17);
    // 0ddbfa  push 0xe
    X86_AT(c, 0xddbfau);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ddbfc  lea eax, [esi + 3]
    X86_AT(c, 0xddbfcu);
    c.r[0] = (uint32_t)(c.r[6] + 0x3u);
    // 0ddbff  push eax
    X86_AT(c, 0xddbffu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ddc00  lea eax, [edi + 3]
    X86_AT(c, 0xddc00u);
    c.r[0] = (uint32_t)(c.r[7] + 0x3u);
    // 0ddc03  push eax
    X86_AT(c, 0xddc03u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ddc04  call 0xc9300
    X86_AT(c, 0xddc04u);
    push32(c, 0xddc09u); x86_call_known(c, 0xc9300u, f_000c9300); X86_RET(c, 0xddc09u);
    X86_TICK(c, 17);
    // 0ddc09  push 0xc
    X86_AT(c, 0xddc09u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0ddc0b  lea eax, [esi + 2]
    X86_AT(c, 0xddc0bu);
    c.r[0] = (uint32_t)(c.r[6] + 0x2u);
    // 0ddc0e  push eax
    X86_AT(c, 0xddc0eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ddc0f  lea eax, [edi + 6]
    X86_AT(c, 0xddc0fu);
    c.r[0] = (uint32_t)(c.r[7] + 0x6u);
    // 0ddc12  push eax
    X86_AT(c, 0xddc12u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ddc13  call 0xc9300
    X86_AT(c, 0xddc13u);
    push32(c, 0xddc18u); x86_call_known(c, 0xc9300u, f_000c9300); X86_RET(c, 0xddc18u);
    X86_TICK(c, 17);
    // 0ddc18  push 0xf
    X86_AT(c, 0xddc18u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ddc1a  lea eax, [esi + 5]
    X86_AT(c, 0xddc1au);
    c.r[0] = (uint32_t)(c.r[6] + 0x5u);
    // 0ddc1d  push eax
    X86_AT(c, 0xddc1du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ddc1e  lea eax, [edi + 4]
    X86_AT(c, 0xddc1eu);
    c.r[0] = (uint32_t)(c.r[7] + 0x4u);
    // 0ddc21  push eax
    X86_AT(c, 0xddc21u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ddc22  call 0xc9300
    X86_AT(c, 0xddc22u);
    push32(c, 0xddc27u); x86_call_known(c, 0xc9300u, f_000c9300); X86_RET(c, 0xddc27u);
    X86_TICK(c, 17);
    // 0ddc27  push 0xb
    X86_AT(c, 0xddc27u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ddc29  lea eax, [esi + 6]
    X86_AT(c, 0xddc29u);
    c.r[0] = (uint32_t)(c.r[6] + 0x6u);
    // 0ddc2c  push eax
    X86_AT(c, 0xddc2cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ddc2d  lea eax, [edi + 2]
    X86_AT(c, 0xddc2du);
    c.r[0] = (uint32_t)(c.r[7] + 0x2u);
    // 0ddc30  push eax
    X86_AT(c, 0xddc30u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ddc31  call 0xc9300
    X86_AT(c, 0xddc31u);
    push32(c, 0xddc36u); x86_call_known(c, 0xc9300u, f_000c9300); X86_RET(c, 0xddc36u);
    X86_TICK(c, 26);
    // 0ddc36  add esp, 0x3c
    X86_AT(c, 0xddc36u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ddc39  pop edi
    X86_AT(c, 0xddc39u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ddc3a  pop esi
    X86_AT(c, 0xddc3au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ddc3b  leave 
    X86_AT(c, 0xddc3bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ddc3c  ret 
    X86_AT(c, 0xddc3cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xddbe0u, "ran off the end of a function");
}
void f_000ddc40(X86Cpu& c) {
    X86_TICK(c, 75);
    // 0ddc40  push ebp
    X86_AT(c, 0xddc40u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ddc41  mov ebp, esp
    X86_AT(c, 0xddc41u);
    c.r[5] = c.r[4];
    // 0ddc43  push ebx
    X86_AT(c, 0xddc43u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ddc44  push esi
    X86_AT(c, 0xddc44u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ddc45  push edi
    X86_AT(c, 0xddc45u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ddc46  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xddc46u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ddc49  lea esi, [edi + edi*4]
    X86_AT(c, 0xddc49u);
    c.r[6] = (uint32_t)(c.r[7] + c.r[7] * 4);
    // 0ddc4c  lea esi, [esi*2 + 0x115]
    X86_AT(c, 0xddc4cu);
    c.r[6] = (uint32_t)(c.r[6] * 2 + 0x115u);
    // 0ddc53  mov ebx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xddc53u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0ddc56  lea ebx, [ebx + ebx*4]
    X86_AT(c, 0xddc56u);
    c.r[3] = (uint32_t)(c.r[3] + c.r[3] * 4);
    // 0ddc59  lea ebx, [ebx*2 + 0x147]
    X86_AT(c, 0xddc59u);
    c.r[3] = (uint32_t)(c.r[3] * 2 + 0x147u);
    // 0ddc60  mov eax, edi
    X86_AT(c, 0xddc60u);
    c.r[0] = c.r[7];
    // 0ddc62  lea edx, [eax + eax*2]
    X86_AT(c, 0xddc62u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0ddc65  lea edx, [eax + edx*8]
    X86_AT(c, 0xddc65u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0ddc68  lea edx, [eax + edx*4]
    X86_AT(c, 0xddc68u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0ddc6b  lea edx, [eax + edx*2]
    X86_AT(c, 0xddc6bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ddc6e  shl edx, 2
    X86_AT(c, 0xddc6eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[2] = r; }
    // 0ddc71  imul eax, dword ptr [ebp + 0xc], 0x74
    X86_AT(c, 0xddc71u);
    c.r[0] = x86_imul2(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0x74u, 4);
    // 0ddc75  add eax, edx
    X86_AT(c, 0xddc75u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0ddc77  cmp dword ptr [eax + 0xc0ae0], 0
    X86_AT(c, 0xddc77u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xC0AE0u))), 0x0u, 0, 4);
    // 0ddc7e  je 0xddc89
    X86_AT(c, 0xddc7eu);
    if (x86_cc(c, 4)) { goto L_ddc89; }
    X86_TICK(c, 11);
    // 0ddc80  push ebx
    X86_AT(c, 0xddc80u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ddc81  push esi
    X86_AT(c, 0xddc81u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ddc82  call 0xddae0
    X86_AT(c, 0xddc82u);
    push32(c, 0xddc87u); x86_call_known(c, 0xddae0u, f_000ddae0); X86_RET(c, 0xddc87u);
    X86_TICK(c, 7);
    // 0ddc87  jmp 0xddce2
    X86_AT(c, 0xddc87u);
    goto L_ddce2;
L_ddc89:
    X86_TICK(c, 49);
    // 0ddc89  mov eax, edi
    X86_AT(c, 0xddc89u);
    c.r[0] = c.r[7];
    // 0ddc8b  lea edx, [eax + eax*2]
    X86_AT(c, 0xddc8bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0ddc8e  lea edx, [eax + edx*8]
    X86_AT(c, 0xddc8eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0ddc91  lea edx, [eax + edx*4]
    X86_AT(c, 0xddc91u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0ddc94  lea edx, [eax + edx*2]
    X86_AT(c, 0xddc94u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ddc97  shl edx, 2
    X86_AT(c, 0xddc97u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[2] = r; }
    // 0ddc9a  imul eax, dword ptr [ebp + 0xc], 0x74
    X86_AT(c, 0xddc9au);
    c.r[0] = x86_imul2(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0x74u, 4);
    // 0ddc9e  add eax, edx
    X86_AT(c, 0xddc9eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0ddca0  cmp dword ptr [eax + 0xc0aec], 0
    X86_AT(c, 0xddca0u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xC0AECu))), 0x0u, 0, 4);
    // 0ddca7  je 0xddcb2
    X86_AT(c, 0xddca7u);
    if (x86_cc(c, 4)) { goto L_ddcb2; }
    X86_TICK(c, 11);
    // 0ddca9  push ebx
    X86_AT(c, 0xddca9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ddcaa  push esi
    X86_AT(c, 0xddcaau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ddcab  call 0xddb40
    X86_AT(c, 0xddcabu);
    push32(c, 0xddcb0u); x86_call_known(c, 0xddb40u, f_000ddb40); X86_RET(c, 0xddcb0u);
    X86_TICK(c, 7);
    // 0ddcb0  jmp 0xddce2
    X86_AT(c, 0xddcb0u);
    goto L_ddce2;
L_ddcb2:
    X86_TICK(c, 49);
    // 0ddcb2  mov eax, edi
    X86_AT(c, 0xddcb2u);
    c.r[0] = c.r[7];
    // 0ddcb4  lea edx, [eax + eax*2]
    X86_AT(c, 0xddcb4u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0ddcb7  lea edx, [eax + edx*8]
    X86_AT(c, 0xddcb7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0ddcba  lea edx, [eax + edx*4]
    X86_AT(c, 0xddcbau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0ddcbd  lea edx, [eax + edx*2]
    X86_AT(c, 0xddcbdu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ddcc0  shl edx, 2
    X86_AT(c, 0xddcc0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[2] = r; }
    // 0ddcc3  imul eax, dword ptr [ebp + 0xc], 0x74
    X86_AT(c, 0xddcc3u);
    c.r[0] = x86_imul2(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0x74u, 4);
    // 0ddcc7  add eax, edx
    X86_AT(c, 0xddcc7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0ddcc9  cmp dword ptr [eax + 0xc0ae4], 0
    X86_AT(c, 0xddcc9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xC0AE4u))), 0x0u, 0, 4);
    // 0ddcd0  je 0xddcdb
    X86_AT(c, 0xddcd0u);
    if (x86_cc(c, 4)) { goto L_ddcdb; }
    X86_TICK(c, 11);
    // 0ddcd2  push ebx
    X86_AT(c, 0xddcd2u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ddcd3  push esi
    X86_AT(c, 0xddcd3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ddcd4  call 0xddb88
    X86_AT(c, 0xddcd4u);
    push32(c, 0xddcd9u); x86_call_known(c, 0xddb88u, f_000ddb88); X86_RET(c, 0xddcd9u);
    X86_TICK(c, 7);
    // 0ddcd9  jmp 0xddce2
    X86_AT(c, 0xddcd9u);
    goto L_ddce2;
L_ddcdb:
    X86_TICK(c, 11);
    // 0ddcdb  push ebx
    X86_AT(c, 0xddcdbu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ddcdc  push esi
    X86_AT(c, 0xddcdcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ddcdd  call 0xddbe0
    X86_AT(c, 0xddcddu);
    push32(c, 0xddce2u); x86_call_known(c, 0xddbe0u, f_000ddbe0); X86_RET(c, 0xddce2u);
L_ddce2:
    X86_TICK(c, 30);
    // 0ddce2  add esp, 8
    X86_AT(c, 0xddce2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ddce5  pop edi
    X86_AT(c, 0xddce5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ddce6  pop esi
    X86_AT(c, 0xddce6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ddce7  pop ebx
    X86_AT(c, 0xddce7u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ddce8  leave 
    X86_AT(c, 0xddce8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ddce9  ret 
    X86_AT(c, 0xddce9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xddc40u, "ran off the end of a function");
}
void f_000ddcec(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0ddcec  push ebp
    X86_AT(c, 0xddcecu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ddced  mov ebp, esp
    X86_AT(c, 0xddcedu);
    c.r[5] = c.r[4];
    // 0ddcef  sub esp, 8
    X86_AT(c, 0xddcefu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0ddcf2  push ebx
    X86_AT(c, 0xddcf2u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ddcf3  push esi
    X86_AT(c, 0xddcf3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ddcf4  push edi
    X86_AT(c, 0xddcf4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ddcf5  push 0xf
    X86_AT(c, 0xddcf5u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ddcf7  push 0xd430
    X86_AT(c, 0xddcf7u);
    { uint32_t v = 0xD430u; push32(c, v); }
    // 0ddcfc  call 0xcc830
    X86_AT(c, 0xddcfcu);
    push32(c, 0xddd01u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xddd01u);
    X86_TICK(c, 9);
    // 0ddd01  push 0xd45c
    X86_AT(c, 0xddd01u);
    { uint32_t v = 0xD45Cu; push32(c, v); }
    // 0ddd06  call 0xcad60
    X86_AT(c, 0xddd06u);
    push32(c, 0xddd0bu); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xddd0bu);
    X86_TICK(c, 17);
    // 0ddd0b  push 0xf
    X86_AT(c, 0xddd0bu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ddd0d  push 0x145
    X86_AT(c, 0xddd0du);
    { uint32_t v = 0x145u; push32(c, v); }
    // 0ddd12  push 0x159
    X86_AT(c, 0xddd12u);
    { uint32_t v = 0x159u; push32(c, v); }
    // 0ddd17  push 0x145
    X86_AT(c, 0xddd17u);
    { uint32_t v = 0x145u; push32(c, v); }
    // 0ddd1c  push 0x113
    X86_AT(c, 0xddd1cu);
    { uint32_t v = 0x113u; push32(c, v); }
    // 0ddd21  call 0xc9378
    X86_AT(c, 0xddd21u);
    push32(c, 0xddd26u); x86_call_known(c, 0xc9378u, f_000c9378); X86_RET(c, 0xddd26u);
    X86_TICK(c, 17);
    // 0ddd26  push 0xf
    X86_AT(c, 0xddd26u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ddd28  push 0x18c
    X86_AT(c, 0xddd28u);
    { uint32_t v = 0x18Cu; push32(c, v); }
    // 0ddd2d  push 0x113
    X86_AT(c, 0xddd2du);
    { uint32_t v = 0x113u; push32(c, v); }
    // 0ddd32  push 0x145
    X86_AT(c, 0xddd32u);
    { uint32_t v = 0x145u; push32(c, v); }
    // 0ddd37  push 0x113
    X86_AT(c, 0xddd37u);
    { uint32_t v = 0x113u; push32(c, v); }
    // 0ddd3c  call 0xc9378
    X86_AT(c, 0xddd3cu);
    push32(c, 0xddd41u); x86_call_known(c, 0xc9378u, f_000c9378); X86_RET(c, 0xddd41u);
    X86_TICK(c, 17);
    // 0ddd41  push 0xf
    X86_AT(c, 0xddd41u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ddd43  push 0x18c
    X86_AT(c, 0xddd43u);
    { uint32_t v = 0x18Cu; push32(c, v); }
    // 0ddd48  push 0x159
    X86_AT(c, 0xddd48u);
    { uint32_t v = 0x159u; push32(c, v); }
    // 0ddd4d  push 0x145
    X86_AT(c, 0xddd4du);
    { uint32_t v = 0x145u; push32(c, v); }
    // 0ddd52  push 0x159
    X86_AT(c, 0xddd52u);
    { uint32_t v = 0x159u; push32(c, v); }
    // 0ddd57  call 0xc9378
    X86_AT(c, 0xddd57u);
    push32(c, 0xddd5cu); x86_call_known(c, 0xc9378u, f_000c9378); X86_RET(c, 0xddd5cu);
    X86_TICK(c, 19);
    // 0ddd5c  add esp, 0x48
    X86_AT(c, 0xddd5cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x48u, 0, 4); }
    // 0ddd5f  push 0xf
    X86_AT(c, 0xddd5fu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ddd61  push 0x18c
    X86_AT(c, 0xddd61u);
    { uint32_t v = 0x18Cu; push32(c, v); }
    // 0ddd66  push 0x159
    X86_AT(c, 0xddd66u);
    { uint32_t v = 0x159u; push32(c, v); }
    // 0ddd6b  push 0x18c
    X86_AT(c, 0xddd6bu);
    { uint32_t v = 0x18Cu; push32(c, v); }
    // 0ddd70  push 0x113
    X86_AT(c, 0xddd70u);
    { uint32_t v = 0x113u; push32(c, v); }
    // 0ddd75  call 0xc9378
    X86_AT(c, 0xddd75u);
    push32(c, 0xddd7au); x86_call_known(c, 0xc9378u, f_000c9378); X86_RET(c, 0xddd7au);
    X86_TICK(c, 4);
    // 0ddd7a  sub edi, edi
    X86_AT(c, 0xddd7au);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0ddd7c  add esp, 0x14
    X86_AT(c, 0xddd7cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_ddd7f:
    X86_TICK(c, 7);
    // 0ddd7f  cmp edi, 7
    X86_AT(c, 0xddd7fu);
    (void)x86_sub(c, c.r[7], 0x7u, 0, 4);
    // 0ddd82  jge 0xddd9b
    X86_AT(c, 0xddd82u);
    if (x86_cc(c, 13)) { goto L_ddd9b; }
    X86_TICK(c, 2);
    // 0ddd84  sub esi, esi
    X86_AT(c, 0xddd84u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_ddd86:
    X86_TICK(c, 7);
    // 0ddd86  cmp esi, 7
    X86_AT(c, 0xddd86u);
    (void)x86_sub(c, c.r[6], 0x7u, 0, 4);
    // 0ddd89  jge 0xddd98
    X86_AT(c, 0xddd89u);
    if (x86_cc(c, 13)) { goto L_ddd98; }
    X86_TICK(c, 11);
    // 0ddd8b  push esi
    X86_AT(c, 0xddd8bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ddd8c  push edi
    X86_AT(c, 0xddd8cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ddd8d  call 0xddc40
    X86_AT(c, 0xddd8du);
    push32(c, 0xddd92u); x86_call_known(c, 0xddc40u, f_000ddc40); X86_RET(c, 0xddd92u);
    X86_TICK(c, 11);
    // 0ddd92  inc esi
    X86_AT(c, 0xddd92u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0ddd93  add esp, 8
    X86_AT(c, 0xddd93u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ddd96  jmp 0xddd86
    X86_AT(c, 0xddd96u);
    X86_POLL(c, 0xddd86u); goto L_ddd86;
L_ddd98:
    X86_TICK(c, 9);
    // 0ddd98  inc edi
    X86_AT(c, 0xddd98u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0ddd99  jmp 0xddd7f
    X86_AT(c, 0xddd99u);
    X86_POLL(c, 0xddd7fu); goto L_ddd7f;
L_ddd9b:
    X86_TICK(c, 20);
    // 0ddd9b  mov eax, dword ptr [0xc03cc]
    X86_AT(c, 0xddd9bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC03CCu)));
    // 0ddda0  lea eax, [eax + eax*4]
    X86_AT(c, 0xddda0u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ddda3  lea eax, [eax*2 + 0x115]
    X86_AT(c, 0xddda3u);
    c.r[0] = (uint32_t)(c.r[0] * 2 + 0x115u);
    // 0dddaa  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xdddaau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0dddad  mov eax, dword ptr [0xc03d0]
    X86_AT(c, 0xdddadu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC03D0u)));
    // 0dddb2  lea eax, [eax + eax*4]
    X86_AT(c, 0xdddb2u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0dddb5  lea eax, [eax*2 + 0x147]
    X86_AT(c, 0xdddb5u);
    c.r[0] = (uint32_t)(c.r[0] * 2 + 0x147u);
    // 0dddbc  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xdddbcu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
L_dddbf:
    X86_TICK(c, 9);
    // 0dddbf  push 7
    X86_AT(c, 0xdddbfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0dddc1  call 0xc81e4
    X86_AT(c, 0xdddc1u);
    push32(c, 0xdddc6u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xdddc6u);
    X86_TICK(c, 12);
    // 0dddc6  xchg ebx, eax
    X86_AT(c, 0xdddc6u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0dddc7  add esp, 4
    X86_AT(c, 0xdddc7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0dddca  and bl, bl
    X86_AT(c, 0xdddcau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0dddcc  jne 0xdde37
    X86_AT(c, 0xdddccu);
    if (x86_cc(c, 5)) { goto L_dde37; }
    X86_TICK(c, 9);
    // 0dddce  sub esi, esi
    X86_AT(c, 0xdddceu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0dddd0  and esi, esi
    X86_AT(c, 0xdddd0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0dddd2  jne 0xdde33
    X86_AT(c, 0xdddd2u);
    if (x86_cc(c, 5)) { goto L_dde33; }
    X86_TICK(c, 9);
    // 0dddd4  push 0xf
    X86_AT(c, 0xdddd4u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0dddd6  call 0xd6660
    X86_AT(c, 0xdddd6u);
    push32(c, 0xddddbu); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xddddbu);
    X86_TICK(c, 4);
    // 0ddddb  sub edi, edi
    X86_AT(c, 0xddddbu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0ddddd  add esp, 4
    X86_AT(c, 0xdddddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_ddde0:
    X86_TICK(c, 7);
    // 0ddde0  cmp edi, 8
    X86_AT(c, 0xddde0u);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0ddde3  jge 0xdde03
    X86_AT(c, 0xddde3u);
    if (x86_cc(c, 13)) { goto L_dde03; }
    X86_TICK(c, 32);
    // 0ddde5  push 9
    X86_AT(c, 0xddde5u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0ddde7  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xddde7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0dddea  add eax, 8
    X86_AT(c, 0xdddeau);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ddded  push eax
    X86_AT(c, 0xdddedu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dddee  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdddeeu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0dddf1  add eax, edi
    X86_AT(c, 0xdddf1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[7], 0, 4); }
    // 0dddf3  push eax
    X86_AT(c, 0xdddf3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dddf4  push dword ptr [ebp - 8]
    X86_AT(c, 0xdddf4u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0dddf7  push eax
    X86_AT(c, 0xdddf7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dddf8  call 0xc9378
    X86_AT(c, 0xdddf8u);
    push32(c, 0xdddfdu); x86_call_known(c, 0xc9378u, f_000c9378); X86_RET(c, 0xdddfdu);
    X86_TICK(c, 11);
    // 0dddfd  inc edi
    X86_AT(c, 0xdddfdu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0dddfe  add esp, 0x14
    X86_AT(c, 0xdddfeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0dde01  jmp 0xddde0
    X86_AT(c, 0xdde01u);
    X86_POLL(c, 0xddde0u); goto L_ddde0;
L_dde03:
    X86_TICK(c, 9);
    // 0dde03  push 7
    X86_AT(c, 0xdde03u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0dde05  call 0xc81e4
    X86_AT(c, 0xdde05u);
    push32(c, 0xdde0au); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xdde0au);
    X86_TICK(c, 12);
    // 0dde0a  xchg ebx, eax
    X86_AT(c, 0xdde0au);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0dde0b  add esp, 4
    X86_AT(c, 0xdde0bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0dde0e  and bl, bl
    X86_AT(c, 0xdde0eu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0dde10  jne 0xdde37
    X86_AT(c, 0xdde10u);
    if (x86_cc(c, 5)) { goto L_dde37; }
    X86_TICK(c, 9);
    // 0dde12  sub esi, esi
    X86_AT(c, 0xdde12u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0dde14  and esi, esi
    X86_AT(c, 0xdde14u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0dde16  jne 0xdde33
    X86_AT(c, 0xdde16u);
    if (x86_cc(c, 5)) { goto L_dde33; }
    X86_TICK(c, 9);
    // 0dde18  push 0xf
    X86_AT(c, 0xdde18u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0dde1a  call 0xd6660
    X86_AT(c, 0xdde1au);
    push32(c, 0xdde1fu); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xdde1fu);
    X86_TICK(c, 17);
    // 0dde1f  push dword ptr [0xc03d0]
    X86_AT(c, 0xdde1fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC03D0u))); push32(c, v); }
    // 0dde25  push dword ptr [0xc03cc]
    X86_AT(c, 0xdde25u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC03CCu))); push32(c, v); }
    // 0dde2b  call 0xddc40
    X86_AT(c, 0xdde2bu);
    push32(c, 0xdde30u); x86_call_known(c, 0xddc40u, f_000ddc40); X86_RET(c, 0xdde30u);
    X86_TICK(c, 2);
    // 0dde30  add esp, 0xc
    X86_AT(c, 0xdde30u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_dde33:
    X86_TICK(c, 7);
    // 0dde33  and esi, esi
    X86_AT(c, 0xdde33u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0dde35  je 0xdddbf
    X86_AT(c, 0xdde35u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xdddbfu); goto L_dddbf; }
L_dde37:
    X86_TICK(c, 19);
    // 0dde37  mov dword ptr [0xbef90], 1
    X86_AT(c, 0xdde37u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF90u)), 0x1u);
    // 0dde41  push 0x75
    X86_AT(c, 0xdde41u);
    { uint32_t v = 0x75u; push32(c, v); }
    // 0dde43  push 0x6e
    X86_AT(c, 0xdde43u);
    { uint32_t v = 0x6Eu; push32(c, v); }
    // 0dde45  push 0x12f
    X86_AT(c, 0xdde45u);
    { uint32_t v = 0x12Fu; push32(c, v); }
    // 0dde4a  push 0x100
    X86_AT(c, 0xdde4au);
    { uint32_t v = 0x100u; push32(c, v); }
    // 0dde4f  push 0xb
    X86_AT(c, 0xdde4fu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0dde51  call 0xcab04
    X86_AT(c, 0xdde51u);
    push32(c, 0xdde56u); x86_call_known(c, 0xcab04u, f_000cab04); X86_RET(c, 0xdde56u);
    X86_TICK(c, 27);
    // 0dde56  push 9
    X86_AT(c, 0xdde56u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0dde58  push 0xf
    X86_AT(c, 0xdde58u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0dde5a  push 0xf
    X86_AT(c, 0xdde5au);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0dde5c  push 4
    X86_AT(c, 0xdde5cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dde5e  push 0x1c
    X86_AT(c, 0xdde5eu);
    { uint32_t v = 0x1Cu; push32(c, v); }
    // 0dde60  push 0x75
    X86_AT(c, 0xdde60u);
    { uint32_t v = 0x75u; push32(c, v); }
    // 0dde62  push 0x6e
    X86_AT(c, 0xdde62u);
    { uint32_t v = 0x6Eu; push32(c, v); }
    // 0dde64  push 0x12f
    X86_AT(c, 0xdde64u);
    { uint32_t v = 0x12Fu; push32(c, v); }
    // 0dde69  push 0x100
    X86_AT(c, 0xdde69u);
    { uint32_t v = 0x100u; push32(c, v); }
    // 0dde6e  push 0xb
    X86_AT(c, 0xdde6eu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0dde70  call 0xc9fbc
    X86_AT(c, 0xdde70u);
    push32(c, 0xdde75u); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xdde75u);
    X86_TICK(c, 11);
    // 0dde75  add esp, 0x3c
    X86_AT(c, 0xdde75u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0dde78  push 0xb
    X86_AT(c, 0xdde78u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0dde7a  call 0xca100
    X86_AT(c, 0xdde7au);
    push32(c, 0xdde7fu); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xdde7fu);
    X86_TICK(c, 9);
    // 0dde7f  push 7
    X86_AT(c, 0xdde7fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0dde81  call 0xca0a0
    X86_AT(c, 0xdde81u);
    push32(c, 0xdde86u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xdde86u);
    X86_TICK(c, 9);
    // 0dde86  push 0xd484
    X86_AT(c, 0xdde86u);
    { uint32_t v = 0xD484u; push32(c, v); }
    // 0dde8b  call 0xcc7bc
    X86_AT(c, 0xdde8bu);
    push32(c, 0xdde90u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdde90u);
    X86_TICK(c, 9);
    // 0dde90  push 2
    X86_AT(c, 0xdde90u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0dde92  call 0xca3cc
    X86_AT(c, 0xdde92u);
    push32(c, 0xdde97u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xdde97u);
    X86_TICK(c, 30);
    // 0dde97  add esp, 0x10
    X86_AT(c, 0xdde97u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0dde9a  pop edi
    X86_AT(c, 0xdde9au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dde9b  pop esi
    X86_AT(c, 0xdde9bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dde9c  pop ebx
    X86_AT(c, 0xdde9cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0dde9d  leave 
    X86_AT(c, 0xdde9du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dde9e  ret 
    X86_AT(c, 0xdde9eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xddcecu, "ran off the end of a function");
}
void f_000ddea0(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0ddea0  cmp dword ptr [0xc03d8], 0
    X86_AT(c, 0xddea0u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC03D8u))), 0x0u, 0, 4);
    // 0ddea7  jne 0xddebf
    X86_AT(c, 0xddea7u);
    if (x86_cc(c, 5)) { goto L_ddebf; }
    X86_TICK(c, 9);
    // 0ddea9  push 0xd488
    X86_AT(c, 0xddea9u);
    { uint32_t v = 0xD488u; push32(c, v); }
    // 0ddeae  call 0xcc7bc
    X86_AT(c, 0xddeaeu);
    push32(c, 0xddeb3u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xddeb3u);
    X86_TICK(c, 9);
    // 0ddeb3  push 1
    X86_AT(c, 0xddeb3u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ddeb5  call 0xc5ca4
    X86_AT(c, 0xddeb5u);
    push32(c, 0xddebau); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xddebau);
    X86_TICK(c, 9);
    // 0ddeba  add esp, 8
    X86_AT(c, 0xddebau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ddebd  jmp 0xddec4
    X86_AT(c, 0xddebdu);
    goto L_ddec4;
L_ddebf:
    X86_TICK(c, 7);
    // 0ddebf  call 0xdede8
    X86_AT(c, 0xddebfu);
    push32(c, 0xddec4u); x86_call_known(c, 0xdede8u, f_000dede8); X86_RET(c, 0xddec4u);
L_ddec4:
    X86_TICK(c, 10);
    // 0ddec4  ret 
    X86_AT(c, 0xddec4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xddea0u, "ran off the end of a function");
}
void f_000ddec8(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0ddec8  push ebp
    X86_AT(c, 0xddec8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ddec9  mov ebp, esp
    X86_AT(c, 0xddec9u);
    c.r[5] = c.r[4];
    // 0ddecb  push esi
    X86_AT(c, 0xddecbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ddecc  push edi
    X86_AT(c, 0xddeccu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ddecd  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xddecdu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0dded0  push 0xd49c
    X86_AT(c, 0xdded0u);
    { uint32_t v = 0xD49Cu; push32(c, v); }
    // 0dded5  push 7
    X86_AT(c, 0xdded5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0dded7  call 0xc8cdc
    X86_AT(c, 0xdded7u);
    push32(c, 0xddedcu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xddedcu);
    X86_TICK(c, 13);
    // 0ddedc  push 4
    X86_AT(c, 0xddedcu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ddede  push edi
    X86_AT(c, 0xddedeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ddedf  push 7
    X86_AT(c, 0xddedfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ddee1  call 0xc8cb8
    X86_AT(c, 0xddee1u);
    push32(c, 0xddee6u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xddee6u);
    X86_TICK(c, 9);
    // 0ddee6  push 7
    X86_AT(c, 0xddee6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ddee8  call 0xca3cc
    X86_AT(c, 0xddee8u);
    push32(c, 0xddeedu); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xddeedu);
    X86_TICK(c, 9);
    // 0ddeed  push 0xd4b4
    X86_AT(c, 0xddeedu);
    { uint32_t v = 0xD4B4u; push32(c, v); }
    // 0ddef2  call 0xcc7bc
    X86_AT(c, 0xddef2u);
    push32(c, 0xddef7u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xddef7u);
    X86_TICK(c, 15);
    // 0ddef7  mov eax, edi
    X86_AT(c, 0xddef7u);
    c.r[0] = c.r[7];
    // 0ddef9  sub eax, dword ptr [0xbef7c]
    X86_AT(c, 0xddef9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0xBEF7Cu))), 0, 4); }
    // 0ddeff  and eax, eax
    X86_AT(c, 0xddeffu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ddf01  jge 0xddf0d
    X86_AT(c, 0xddf01u);
    if (x86_cc(c, 13)) { goto L_ddf0d; }
    X86_TICK(c, 10);
    // 0ddf03  mov eax, edi
    X86_AT(c, 0xddf03u);
    c.r[0] = c.r[7];
    // 0ddf05  sub eax, dword ptr [0xbef7c]
    X86_AT(c, 0xddf05u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0xBEF7Cu))), 0, 4); }
    // 0ddf0b  neg eax
    X86_AT(c, 0xddf0bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_ddf0d:
    X86_TICK(c, 13);
    // 0ddf0d  xchg esi, eax
    X86_AT(c, 0xddf0du);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0ddf0e  shl esi, 2
    X86_AT(c, 0xddf0eu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[6] = r; }
    // 0ddf11  call 0xdf824
    X86_AT(c, 0xddf11u);
    push32(c, 0xddf16u); x86_call_known(c, 0xdf824u, f_000df824); X86_RET(c, 0xddf16u);
    X86_TICK(c, 9);
    // 0ddf16  add esp, 0x1c
    X86_AT(c, 0xddf16u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0ddf19  cmp eax, esi
    X86_AT(c, 0xddf19u);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 0ddf1b  jge 0xddf29
    X86_AT(c, 0xddf1bu);
    if (x86_cc(c, 13)) { goto L_ddf29; }
    X86_TICK(c, 9);
    // 0ddf1d  push 0xd4b8
    X86_AT(c, 0xddf1du);
    { uint32_t v = 0xD4B8u; push32(c, v); }
    // 0ddf22  call 0xcc7bc
    X86_AT(c, 0xddf22u);
    push32(c, 0xddf27u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xddf27u);
    X86_TICK(c, 7);
    // 0ddf27  jmp 0xddf35
    X86_AT(c, 0xddf27u);
    goto L_ddf35;
L_ddf29:
    X86_TICK(c, 11);
    // 0ddf29  mov dword ptr [0xbef7c], edi
    X86_AT(c, 0xddf29u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF7Cu)), c.r[7]);
    // 0ddf2f  push esi
    X86_AT(c, 0xddf2fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ddf30  call 0xdf85c
    X86_AT(c, 0xddf30u);
    push32(c, 0xddf35u); x86_call_known(c, 0xdf85cu, f_000df85c); X86_RET(c, 0xddf35u);
L_ddf35:
    X86_TICK(c, 26);
    // 0ddf35  add esp, 4
    X86_AT(c, 0xddf35u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ddf38  pop edi
    X86_AT(c, 0xddf38u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ddf39  pop esi
    X86_AT(c, 0xddf39u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ddf3a  leave 
    X86_AT(c, 0xddf3au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ddf3b  ret 
    X86_AT(c, 0xddf3bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xddec8u, "ran off the end of a function");
}
void f_000ddf3c(X86Cpu& c) {
    X86_TICK(c, 35);
    // 0ddf3c  push ebp
    X86_AT(c, 0xddf3cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ddf3d  mov ebp, esp
    X86_AT(c, 0xddf3du);
    c.r[5] = c.r[4];
    // 0ddf3f  push ebx
    X86_AT(c, 0xddf3fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ddf40  push esi
    X86_AT(c, 0xddf40u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ddf41  push edi
    X86_AT(c, 0xddf41u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ddf42  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0xddf42u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0ddf45  mov edi, 5
    X86_AT(c, 0xddf45u);
    c.r[7] = 0x5u;
    // 0ddf4a  mov esi, 0xffffffff
    X86_AT(c, 0xddf4au);
    c.r[6] = 0xFFFFFFFFu;
    // 0ddf4f  movzx ebx, bl
    X86_AT(c, 0xddf4fu);
    c.r[3] = g8(c, 3);
    // 0ddf52  push dword ptr [ebx*4 + 0xbefa4]
    X86_AT(c, 0xddf52u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xBEFA4u))); push32(c, v); }
    // 0ddf59  push 7
    X86_AT(c, 0xddf59u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ddf5b  call 0xc8cdc
    X86_AT(c, 0xddf5bu);
    push32(c, 0xddf60u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xddf60u);
    X86_TICK(c, 9);
    // 0ddf60  push 7
    X86_AT(c, 0xddf60u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ddf62  call 0xca3cc
    X86_AT(c, 0xddf62u);
    push32(c, 0xddf67u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xddf67u);
    X86_TICK(c, 9);
    // 0ddf67  add esp, 0xc
    X86_AT(c, 0xddf67u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ddf6a  cmp bl, 1
    X86_AT(c, 0xddf6au);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ddf6d  je 0xddf74
    X86_AT(c, 0xddf6du);
    if (x86_cc(c, 4)) { goto L_ddf74; }
    X86_TICK(c, 7);
    // 0ddf6f  cmp bl, 2
    X86_AT(c, 0xddf6fu);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0ddf72  jne 0xddf79
    X86_AT(c, 0xddf72u);
    if (x86_cc(c, 5)) { goto L_ddf79; }
L_ddf74:
    X86_TICK(c, 2);
    // 0ddf74  mov edi, 2
    X86_AT(c, 0xddf74u);
    c.r[7] = 0x2u;
L_ddf79:
    X86_TICK(c, 7);
    // 0ddf79  call 0xdf824
    X86_AT(c, 0xddf79u);
    push32(c, 0xddf7eu); x86_call_known(c, 0xdf824u, f_000df824); X86_RET(c, 0xddf7eu);
    X86_TICK(c, 7);
    // 0ddf7e  and eax, eax
    X86_AT(c, 0xddf7eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ddf80  jne 0xddfa8
    X86_AT(c, 0xddf80u);
    if (x86_cc(c, 5)) { goto L_ddfa8; }
    X86_TICK(c, 9);
    // 0ddf82  push 0xd4e8
    X86_AT(c, 0xddf82u);
    { uint32_t v = 0xD4E8u; push32(c, v); }
    // 0ddf87  call 0xcc7bc
    X86_AT(c, 0xddf87u);
    push32(c, 0xddf8cu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xddf8cu);
    X86_TICK(c, 9);
    // 0ddf8c  push 0xd504
    X86_AT(c, 0xddf8cu);
    { uint32_t v = 0xD504u; push32(c, v); }
    // 0ddf91  call 0xcc7bc
    X86_AT(c, 0xddf91u);
    push32(c, 0xddf96u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xddf96u);
    X86_TICK(c, 9);
    // 0ddf96  push 0xd524
    X86_AT(c, 0xddf96u);
    { uint32_t v = 0xD524u; push32(c, v); }
    // 0ddf9b  call 0xcc7bc
    X86_AT(c, 0xddf9bu);
    push32(c, 0xddfa0u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xddfa0u);
    X86_TICK(c, 9);
    // 0ddfa0  add esp, 0xc
    X86_AT(c, 0xddfa0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ddfa3  jmp 0xde18e
    X86_AT(c, 0xddfa3u);
    goto L_de18e;
L_ddfa8:
    X86_TICK(c, 7);
    // 0ddfa8  call 0xdf824
    X86_AT(c, 0xddfa8u);
    push32(c, 0xddfadu); x86_call_known(c, 0xdf824u, f_000df824); X86_RET(c, 0xddfadu);
    X86_TICK(c, 7);
    // 0ddfad  cmp edi, eax
    X86_AT(c, 0xddfadu);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 0ddfaf  jle 0xddfb7
    X86_AT(c, 0xddfafu);
    if (x86_cc(c, 14)) { goto L_ddfb7; }
    X86_TICK(c, 7);
    // 0ddfb1  call 0xdf824
    X86_AT(c, 0xddfb1u);
    push32(c, 0xddfb6u); x86_call_known(c, 0xdf824u, f_000df824); X86_RET(c, 0xddfb6u);
    X86_TICK(c, 3);
    // 0ddfb6  xchg edi, eax
    X86_AT(c, 0xddfb6u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
L_ddfb7:
    X86_TICK(c, 12);
    // 0ddfb7  push dword ptr [0xc03d4]
    X86_AT(c, 0xddfb7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC03D4u))); push32(c, v); }
    // 0ddfbd  call 0xe0548
    X86_AT(c, 0xddfbdu);
    push32(c, 0xddfc2u); x86_call_known(c, 0xe0548u, f_000e0548); X86_RET(c, 0xddfc2u);
    X86_TICK(c, 9);
    // 0ddfc2  add esp, 4
    X86_AT(c, 0xddfc2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ddfc5  inc eax
    X86_AT(c, 0xddfc5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0ddfc6  je 0xde027
    X86_AT(c, 0xddfc6u);
    if (x86_cc(c, 4)) { goto L_de027; }
    X86_TICK(c, 12);
    // 0ddfc8  push dword ptr [0xc03d4]
    X86_AT(c, 0xddfc8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC03D4u))); push32(c, v); }
    // 0ddfce  call 0xe0548
    X86_AT(c, 0xddfceu);
    push32(c, 0xddfd3u); x86_call_known(c, 0xe0548u, f_000e0548); X86_RET(c, 0xddfd3u);
    X86_TICK(c, 9);
    // 0ddfd3  add esp, 4
    X86_AT(c, 0xddfd3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ddfd6  cmp eax, 5
    X86_AT(c, 0xddfd6u);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0ddfd9  je 0xde027
    X86_AT(c, 0xddfd9u);
    if (x86_cc(c, 4)) { goto L_de027; }
    X86_TICK(c, 7);
    // 0ddfdb  cmp bl, 4
    X86_AT(c, 0xddfdbu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0ddfde  je 0xde027
    X86_AT(c, 0xddfdeu);
    if (x86_cc(c, 4)) { goto L_de027; }
    X86_TICK(c, 9);
    // 0ddfe0  push 0xd55c
    X86_AT(c, 0xddfe0u);
    { uint32_t v = 0xD55Cu; push32(c, v); }
    // 0ddfe5  call 0xcc7bc
    X86_AT(c, 0xddfe5u);
    push32(c, 0xddfeau); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xddfeau);
    X86_TICK(c, 9);
    // 0ddfea  push 0
    X86_AT(c, 0xddfeau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ddfec  call 0xc5ca4
    X86_AT(c, 0xddfecu);
    push32(c, 0xddff1u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xddff1u);
    X86_TICK(c, 7);
    // 0ddff1  call 0xdf808
    X86_AT(c, 0xddff1u);
    push32(c, 0xddff6u); x86_call_known(c, 0xdf808u, f_000df808); X86_RET(c, 0xddff6u);
    X86_TICK(c, 7);
    // 0ddff6  call 0xdf778
    X86_AT(c, 0xddff6u);
    push32(c, 0xddffbu); x86_call_known(c, 0xdf778u, f_000df778); X86_RET(c, 0xddffbu);
    X86_TICK(c, 9);
    // 0ddffb  add esp, 8
    X86_AT(c, 0xddffbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ddffe  and eax, eax
    X86_AT(c, 0xddffeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0de000  jne 0xde18e
    X86_AT(c, 0xde000u);
    if (x86_cc(c, 5)) { goto L_de18e; }
    X86_TICK(c, 9);
    // 0de006  push 0xd57c
    X86_AT(c, 0xde006u);
    { uint32_t v = 0xD57Cu; push32(c, v); }
    // 0de00b  call 0xcc7bc
    X86_AT(c, 0xde00bu);
    push32(c, 0xde010u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xde010u);
    X86_TICK(c, 9);
    // 0de010  push 0xd5a0
    X86_AT(c, 0xde010u);
    { uint32_t v = 0xD5A0u; push32(c, v); }
    // 0de015  call 0xcc7bc
    X86_AT(c, 0xde015u);
    push32(c, 0xde01au); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xde01au);
    X86_TICK(c, 7);
    // 0de01a  call 0xe0b30
    X86_AT(c, 0xde01au);
    push32(c, 0xde01fu); x86_call_known(c, 0xe0b30u, f_000e0b30); X86_RET(c, 0xde01fu);
    X86_TICK(c, 9);
    // 0de01f  add esp, 8
    X86_AT(c, 0xde01fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0de022  jmp 0xde18e
    X86_AT(c, 0xde022u);
    goto L_de18e;
L_de027:
    X86_TICK(c, 9);
    // 0de027  push edi
    X86_AT(c, 0xde027u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0de028  call 0xdf85c
    X86_AT(c, 0xde028u);
    push32(c, 0xde02du); x86_call_known(c, 0xdf85cu, f_000df85c); X86_RET(c, 0xde02du);
    X86_TICK(c, 62);
    // 0de02d  mov eax, dword ptr [0xc03cc]
    X86_AT(c, 0xde02du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC03CCu)));
    // 0de032  lea edx, [eax + eax*2]
    X86_AT(c, 0xde032u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0de035  lea edx, [eax + edx*8]
    X86_AT(c, 0xde035u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0de038  lea edx, [eax + edx*4]
    X86_AT(c, 0xde038u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0de03b  lea edx, [eax + edx*2]
    X86_AT(c, 0xde03bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0de03e  shl edx, 2
    X86_AT(c, 0xde03eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[2] = r; }
    // 0de041  imul eax, dword ptr [0xc03d0], 0x74
    X86_AT(c, 0xde041u);
    c.r[0] = x86_imul2(c, rd32((c.sbase[3] + (uint32_t)(0xC03D0u))), 0x74u, 4);
    // 0de048  add eax, edx
    X86_AT(c, 0xde048u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0de04a  mov edx, dword ptr [0xc03d4]
    X86_AT(c, 0xde04au);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC03D4u)));
    // 0de050  lea edx, [edx*8]
    X86_AT(c, 0xde050u);
    c.r[2] = (uint32_t)(c.r[2] * 8);
    // 0de057  lea edx, [edx + edx*2]
    X86_AT(c, 0xde057u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0de05a  add edx, eax
    X86_AT(c, 0xde05au);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0de05c  mov edi, dword ptr [edx + 0xc0b08]
    X86_AT(c, 0xde05cu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xC0B08u)));
    // 0de062  add esp, 4
    X86_AT(c, 0xde062u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0de065  cmp bl, 1
    X86_AT(c, 0xde065u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0de068  je 0xde06f
    X86_AT(c, 0xde068u);
    if (x86_cc(c, 4)) { goto L_de06f; }
    X86_TICK(c, 7);
    // 0de06a  cmp bl, 2
    X86_AT(c, 0xde06au);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0de06d  jne 0xde0c4
    X86_AT(c, 0xde06du);
    if (x86_cc(c, 5)) { goto L_de0c4; }
L_de06f:
    X86_TICK(c, 81);
    // 0de06f  mov eax, 0xb52f4
    X86_AT(c, 0xde06fu);
    c.r[0] = 0xB52F4u;
    // 0de074  sub bh, bh
    X86_AT(c, 0xde074u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_sub(c, v, g8(c, 7), 0, 1)); }
    // 0de076  mov edx, ebx
    X86_AT(c, 0xde076u);
    c.r[2] = c.r[3];
    // 0de078  shl edx, 4
    X86_AT(c, 0xde078u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0de07b  movzx edx, dx
    X86_AT(c, 0xde07bu);
    c.r[2] = (c.r[2] & 0xFFFFu);
    // 0de07e  mov ecx, dword ptr [eax + 0xb0d8]
    X86_AT(c, 0xde07eu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0D8u)));
    // 0de084  lea eax, [ecx + ecx*2]
    X86_AT(c, 0xde084u);
    c.r[0] = (uint32_t)(c.r[1] + c.r[1] * 2);
    // 0de087  lea eax, [ecx + eax*8]
    X86_AT(c, 0xde087u);
    c.r[0] = (uint32_t)(c.r[1] + c.r[0] * 8);
    // 0de08a  lea eax, [ecx + eax*4]
    X86_AT(c, 0xde08au);
    c.r[0] = (uint32_t)(c.r[1] + c.r[0] * 4);
    // 0de08d  lea eax, [ecx + eax*2]
    X86_AT(c, 0xde08du);
    c.r[0] = (uint32_t)(c.r[1] + c.r[0] * 2);
    // 0de090  shl eax, 2
    X86_AT(c, 0xde090u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[0] = r; }
    // 0de093  imul ecx, dword ptr [0xc03d0], 0x74
    X86_AT(c, 0xde093u);
    c.r[1] = x86_imul2(c, rd32((c.sbase[3] + (uint32_t)(0xC03D0u))), 0x74u, 4);
    // 0de09a  add ecx, eax
    X86_AT(c, 0xde09au);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[0], 0, 4); }
    // 0de09c  mov eax, dword ptr [0xc03d4]
    X86_AT(c, 0xde09cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC03D4u)));
    // 0de0a1  lea eax, [eax*8]
    X86_AT(c, 0xde0a1u);
    c.r[0] = (uint32_t)(c.r[0] * 8);
    // 0de0a8  lea eax, [eax + eax*2]
    X86_AT(c, 0xde0a8u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0de0ab  add eax, ecx
    X86_AT(c, 0xde0abu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[1], 0, 4); }
    // 0de0ad  mov edx, dword ptr [edx + edi*4 + 0xc2108]
    X86_AT(c, 0xde0adu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[7] * 4 + 0xC2108u)));
    // 0de0b4  mov dword ptr [eax + 0xc0b08], edx
    X86_AT(c, 0xde0b4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xC0B08u)), c.r[2]);
    // 0de0ba  sub eax, eax
    X86_AT(c, 0xde0bau);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0de0bc  mov dword ptr [0xbef88], eax
    X86_AT(c, 0xde0bcu);
    wr32((c.sbase[3] + (uint32_t)(0xBEF88u)), c.r[0]);
    // 0de0c1  xchg esi, eax
    X86_AT(c, 0xde0c1u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0de0c2  jmp 0xde0ce
    X86_AT(c, 0xde0c2u);
    goto L_de0ce;
L_de0c4:
    X86_TICK(c, 7);
    // 0de0c4  cmp bl, 3
    X86_AT(c, 0xde0c4u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0de0c7  jne 0xde0ce
    X86_AT(c, 0xde0c7u);
    if (x86_cc(c, 5)) { goto L_de0ce; }
    X86_TICK(c, 2);
    // 0de0c9  mov esi, 1
    X86_AT(c, 0xde0c9u);
    c.r[6] = 0x1u;
L_de0ce:
    X86_TICK(c, 9);
    // 0de0ce  mov edx, edi
    X86_AT(c, 0xde0ceu);
    c.r[2] = c.r[7];
    // 0de0d0  cmp edx, 3
    X86_AT(c, 0xde0d0u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0de0d3  ja 0xde10b
    X86_AT(c, 0xde0d3u);
    if (x86_cc(c, 7)) { goto L_de10b; }
    X86_TICK(c, 7);
    // 0de0d5  jmp dword ptr cs:[edx*4 + 0xde0dd]
    X86_AT(c, 0xde0d5u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xDE0DDu)));
      switch (t) {
      case 0xde0edu: goto L_de0ed;
      case 0xde0f5u: goto L_de0f5;
      case 0xde0fdu: goto L_de0fd;
      case 0xde105u: goto L_de105;
      default: x86_jump(c, t); return; } }
L_de0ed:
    X86_TICK(c, 14);
    // 0de0ed  sub dword ptr [0xbef84], esi
    X86_AT(c, 0xde0edu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xBEF84u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[6], 0, 4)); }
    // 0de0f3  jmp 0xde10b
    X86_AT(c, 0xde0f3u);
    goto L_de10b;
L_de0f5:
    X86_TICK(c, 14);
    // 0de0f5  add dword ptr [0xbef84], esi
    X86_AT(c, 0xde0f5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xBEF84u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 0de0fb  jmp 0xde10b
    X86_AT(c, 0xde0fbu);
    goto L_de10b;
L_de0fd:
    X86_TICK(c, 14);
    // 0de0fd  sub dword ptr [0xbef80], esi
    X86_AT(c, 0xde0fdu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xBEF80u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[6], 0, 4)); }
    // 0de103  jmp 0xde10b
    X86_AT(c, 0xde103u);
    goto L_de10b;
L_de105:
    X86_TICK(c, 7);
    // 0de105  add dword ptr [0xbef80], esi
    X86_AT(c, 0xde105u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xBEF80u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
L_de10b:
    X86_TICK(c, 12);
    // 0de10b  cmp dword ptr [0xbef80], 0xffffffff
    X86_AT(c, 0xde10bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xBEF80u))), 0xFFFFFFFFu, 0, 4);
    // 0de112  jle 0xde124
    X86_AT(c, 0xde112u);
    if (x86_cc(c, 14)) { goto L_de124; }
    X86_TICK(c, 12);
    // 0de114  cmp dword ptr [0xbef80], 9
    X86_AT(c, 0xde114u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xBEF80u))), 0x9u, 0, 4);
    // 0de11b  jle 0xde134
    X86_AT(c, 0xde11bu);
    if (x86_cc(c, 14)) { goto L_de134; }
    X86_TICK(c, 9);
    // 0de11d  mov eax, 9
    X86_AT(c, 0xde11du);
    c.r[0] = 0x9u;
    // 0de122  jmp 0xde139
    X86_AT(c, 0xde122u);
    goto L_de139;
L_de124:
    X86_TICK(c, 12);
    // 0de124  cmp dword ptr [0xbef80], 0xfffffff7
    X86_AT(c, 0xde124u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xBEF80u))), 0xFFFFFFF7u, 0, 4);
    // 0de12b  jg 0xde134
    X86_AT(c, 0xde12bu);
    if (x86_cc(c, 15)) { goto L_de134; }
    X86_TICK(c, 9);
    // 0de12d  mov eax, 0xfffffff7
    X86_AT(c, 0xde12du);
    c.r[0] = 0xFFFFFFF7u;
    // 0de132  jmp 0xde139
    X86_AT(c, 0xde132u);
    goto L_de139;
L_de134:
    X86_TICK(c, 4);
    // 0de134  mov eax, dword ptr [0xbef80]
    X86_AT(c, 0xde134u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xBEF80u)));
L_de139:
    X86_TICK(c, 14);
    // 0de139  mov dword ptr [0xbef80], eax
    X86_AT(c, 0xde139u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF80u)), c.r[0]);
    // 0de13e  cmp dword ptr [0xbef84], 0xffffffff
    X86_AT(c, 0xde13eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xBEF84u))), 0xFFFFFFFFu, 0, 4);
    // 0de145  jle 0xde157
    X86_AT(c, 0xde145u);
    if (x86_cc(c, 14)) { goto L_de157; }
    X86_TICK(c, 12);
    // 0de147  cmp dword ptr [0xbef84], 9
    X86_AT(c, 0xde147u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xBEF84u))), 0x9u, 0, 4);
    // 0de14e  jle 0xde167
    X86_AT(c, 0xde14eu);
    if (x86_cc(c, 14)) { goto L_de167; }
    X86_TICK(c, 9);
    // 0de150  mov eax, 9
    X86_AT(c, 0xde150u);
    c.r[0] = 0x9u;
    // 0de155  jmp 0xde16c
    X86_AT(c, 0xde155u);
    goto L_de16c;
L_de157:
    X86_TICK(c, 12);
    // 0de157  cmp dword ptr [0xbef84], 0xfffffff7
    X86_AT(c, 0xde157u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xBEF84u))), 0xFFFFFFF7u, 0, 4);
    // 0de15e  jg 0xde167
    X86_AT(c, 0xde15eu);
    if (x86_cc(c, 15)) { goto L_de167; }
    X86_TICK(c, 9);
    // 0de160  mov eax, 0xfffffff7
    X86_AT(c, 0xde160u);
    c.r[0] = 0xFFFFFFF7u;
    // 0de165  jmp 0xde16c
    X86_AT(c, 0xde165u);
    goto L_de16c;
L_de167:
    X86_TICK(c, 4);
    // 0de167  mov eax, dword ptr [0xbef84]
    X86_AT(c, 0xde167u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xBEF84u)));
L_de16c:
    X86_TICK(c, 9);
    // 0de16c  mov dword ptr [0xbef84], eax
    X86_AT(c, 0xde16cu);
    wr32((c.sbase[3] + (uint32_t)(0xBEF84u)), c.r[0]);
    // 0de171  cmp bl, 3
    X86_AT(c, 0xde171u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0de174  jne 0xde17f
    X86_AT(c, 0xde174u);
    if (x86_cc(c, 5)) { goto L_de17f; }
    X86_TICK(c, 14);
    // 0de176  add dword ptr [0xbef88], 0xa
    X86_AT(c, 0xde176u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xBEF88u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xAu, 0, 4)); }
    // 0de17d  jmp 0xde18e
    X86_AT(c, 0xde17du);
    goto L_de18e;
L_de17f:
    X86_TICK(c, 7);
    // 0de17f  cmp bl, 4
    X86_AT(c, 0xde17fu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0de182  jne 0xde18e
    X86_AT(c, 0xde182u);
    if (x86_cc(c, 5)) { goto L_de18e; }
    X86_TICK(c, 2);
    // 0de184  mov dword ptr [0xbef88], 0
    X86_AT(c, 0xde184u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF88u)), 0x0u);
L_de18e:
    X86_TICK(c, 28);
    // 0de18e  pop edi
    X86_AT(c, 0xde18eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0de18f  pop esi
    X86_AT(c, 0xde18fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0de190  pop ebx
    X86_AT(c, 0xde190u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0de191  leave 
    X86_AT(c, 0xde191u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0de192  ret 
    X86_AT(c, 0xde192u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xddf3cu, "ran off the end of a function");
}
void f_000de18e(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0de18e  pop edi
    X86_AT(c, 0xde18eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0de18f  pop esi
    X86_AT(c, 0xde18fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0de190  pop ebx
    X86_AT(c, 0xde190u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0de191  leave 
    X86_AT(c, 0xde191u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0de192  ret 
    X86_AT(c, 0xde192u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xde18eu, "ran off the end of a function");
}
void f_000de194(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0de194  push ebp
    X86_AT(c, 0xde194u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0de195  mov ebp, esp
    X86_AT(c, 0xde195u);
    c.r[5] = c.r[4];
    // 0de197  push ebx
    X86_AT(c, 0xde197u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0de198  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0xde198u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0de19b  cmp dword ptr [0xc03d8], 0
    X86_AT(c, 0xde19bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC03D8u))), 0x0u, 0, 4);
    // 0de1a2  jne 0xde1af
    X86_AT(c, 0xde1a2u);
    if (x86_cc(c, 5)) { goto L_de1af; }
    X86_TICK(c, 12);
    // 0de1a4  movzx ebx, bl
    X86_AT(c, 0xde1a4u);
    c.r[3] = g8(c, 3);
    // 0de1a7  push ebx
    X86_AT(c, 0xde1a7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0de1a8  call 0xddf3c
    X86_AT(c, 0xde1a8u);
    push32(c, 0xde1adu); x86_call_known(c, 0xddf3cu, f_000ddf3c); X86_RET(c, 0xde1adu);
    X86_TICK(c, 7);
    // 0de1ad  jmp 0xde1de
    X86_AT(c, 0xde1adu);
    goto L_de1de;
L_de1af:
    X86_TICK(c, 17);
    // 0de1af  movzx ebx, bl
    X86_AT(c, 0xde1afu);
    c.r[3] = g8(c, 3);
    // 0de1b2  push dword ptr [ebx*4 + 0xbefb8]
    X86_AT(c, 0xde1b2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xBEFB8u))); push32(c, v); }
    // 0de1b9  push 7
    X86_AT(c, 0xde1b9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0de1bb  call 0xc8cdc
    X86_AT(c, 0xde1bbu);
    push32(c, 0xde1c0u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xde1c0u);
    X86_TICK(c, 9);
    // 0de1c0  push 7
    X86_AT(c, 0xde1c0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0de1c2  call 0xca3cc
    X86_AT(c, 0xde1c2u);
    push32(c, 0xde1c7u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xde1c7u);
    X86_TICK(c, 7);
    // 0de1c7  call 0xdf824
    X86_AT(c, 0xde1c7u);
    push32(c, 0xde1ccu); x86_call_known(c, 0xdf824u, f_000df824); X86_RET(c, 0xde1ccu);
    X86_TICK(c, 9);
    // 0de1cc  add esp, 0xc
    X86_AT(c, 0xde1ccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0de1cf  cmp eax, 2
    X86_AT(c, 0xde1cfu);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 0de1d2  jge 0xde1e3
    X86_AT(c, 0xde1d2u);
    if (x86_cc(c, 13)) { goto L_de1e3; }
    X86_TICK(c, 9);
    // 0de1d4  push 0xd5c8
    X86_AT(c, 0xde1d4u);
    { uint32_t v = 0xD5C8u; push32(c, v); }
    // 0de1d9  call 0xcc7bc
    X86_AT(c, 0xde1d9u);
    push32(c, 0xde1deu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xde1deu);
L_de1de:
    X86_TICK(c, 9);
    // 0de1de  add esp, 4
    X86_AT(c, 0xde1deu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0de1e1  jmp 0xde250
    X86_AT(c, 0xde1e1u);
    goto L_de250;
L_de1e3:
    X86_TICK(c, 9);
    // 0de1e3  push 2
    X86_AT(c, 0xde1e3u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0de1e5  call 0xdf85c
    X86_AT(c, 0xde1e5u);
    push32(c, 0xde1eau); x86_call_known(c, 0xdf85cu, f_000df85c); X86_RET(c, 0xde1eau);
    X86_TICK(c, 14);
    // 0de1ea  add esp, 4
    X86_AT(c, 0xde1eau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0de1ed  movzx edx, bl
    X86_AT(c, 0xde1edu);
    c.r[2] = g8(c, 3);
    // 0de1f0  dec edx
    X86_AT(c, 0xde1f0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0de1f1  cmp edx, 3
    X86_AT(c, 0xde1f1u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0de1f4  ja 0xde250
    X86_AT(c, 0xde1f4u);
    if (x86_cc(c, 7)) { goto L_de250; }
    X86_TICK(c, 7);
    // 0de1f6  jmp dword ptr cs:[edx*4 + 0xde1fe]
    X86_AT(c, 0xde1f6u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xDE1FEu)));
      switch (t) {
      case 0xde20eu: goto L_de20e;
      case 0xde21au: goto L_de21a;
      case 0xde230u: goto L_de230;
      case 0xde23cu: goto L_de23c;
      default: x86_jump(c, t); return; } }
L_de20e:
    X86_TICK(c, 9);
    // 0de20e  mov dword ptr [0xbef94], 0xfffffffc
    X86_AT(c, 0xde20eu);
    wr32((c.sbase[3] + (uint32_t)(0xBEF94u)), 0xFFFFFFFCu);
    // 0de218  jmp 0xde224
    X86_AT(c, 0xde218u);
    goto L_de224;
L_de21a:
    X86_TICK(c, 2);
    // 0de21a  mov dword ptr [0xbef94], 4
    X86_AT(c, 0xde21au);
    wr32((c.sbase[3] + (uint32_t)(0xBEF94u)), 0x4u);
L_de224:
    X86_TICK(c, 9);
    // 0de224  mov dword ptr [0xbef98], 0
    X86_AT(c, 0xde224u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF98u)), 0x0u);
    // 0de22e  jmp 0xde250
    X86_AT(c, 0xde22eu);
    goto L_de250;
L_de230:
    X86_TICK(c, 9);
    // 0de230  mov dword ptr [0xbef98], 0xfffffffc
    X86_AT(c, 0xde230u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF98u)), 0xFFFFFFFCu);
    // 0de23a  jmp 0xde246
    X86_AT(c, 0xde23au);
    goto L_de246;
L_de23c:
    X86_TICK(c, 2);
    // 0de23c  mov dword ptr [0xbef98], 4
    X86_AT(c, 0xde23cu);
    wr32((c.sbase[3] + (uint32_t)(0xBEF98u)), 0x4u);
L_de246:
    X86_TICK(c, 2);
    // 0de246  mov dword ptr [0xbef94], 0
    X86_AT(c, 0xde246u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF94u)), 0x0u);
L_de250:
    X86_TICK(c, 20);
    // 0de250  pop ebx
    X86_AT(c, 0xde250u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0de251  leave 
    X86_AT(c, 0xde251u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0de252  ret 
    X86_AT(c, 0xde252u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xde194u, "ran off the end of a function");
}
void f_000de254(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0de254  push ebp
    X86_AT(c, 0xde254u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0de255  mov ebp, esp
    X86_AT(c, 0xde255u);
    c.r[5] = c.r[4];
    // 0de257  push dword ptr [ebp + 8]
    X86_AT(c, 0xde257u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0de25a  call 0xcc7bc
    X86_AT(c, 0xde25au);
    push32(c, 0xde25fu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xde25fu);
    X86_TICK(c, 9);
    // 0de25f  push 1
    X86_AT(c, 0xde25fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0de261  call 0xc5ca4
    X86_AT(c, 0xde261u);
    push32(c, 0xde266u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xde266u);
    X86_TICK(c, 16);
    // 0de266  leave 
    X86_AT(c, 0xde266u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0de267  ret 
    X86_AT(c, 0xde267u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xde254u, "ran off the end of a function");
}
void f_000de268(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0de268  push 0xd5fc
    X86_AT(c, 0xde268u);
    { uint32_t v = 0xD5FCu; push32(c, v); }
    // 0de26d  call 0xde254
    X86_AT(c, 0xde26du);
    push32(c, 0xde272u); x86_call_known(c, 0xde254u, f_000de254); X86_RET(c, 0xde272u);
    X86_TICK(c, 12);
    // 0de272  add esp, 4
    X86_AT(c, 0xde272u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0de275  ret 
    X86_AT(c, 0xde275u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xde268u, "ran off the end of a function");
}
void f_000de278(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0de278  push 0xd614
    X86_AT(c, 0xde278u);
    { uint32_t v = 0xD614u; push32(c, v); }
    // 0de27d  call 0xde254
    X86_AT(c, 0xde27du);
    push32(c, 0xde282u); x86_call_known(c, 0xde254u, f_000de254); X86_RET(c, 0xde282u);
    X86_TICK(c, 12);
    // 0de282  add esp, 4
    X86_AT(c, 0xde282u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0de285  ret 
    X86_AT(c, 0xde285u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xde278u, "ran off the end of a function");
}
void f_000de288(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0de288  push 0xd628
    X86_AT(c, 0xde288u);
    { uint32_t v = 0xD628u; push32(c, v); }
    // 0de28d  call 0xde254
    X86_AT(c, 0xde28du);
    push32(c, 0xde292u); x86_call_known(c, 0xde254u, f_000de254); X86_RET(c, 0xde292u);
    X86_TICK(c, 12);
    // 0de292  add esp, 4
    X86_AT(c, 0xde292u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0de295  ret 
    X86_AT(c, 0xde295u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xde288u, "ran off the end of a function");
}
void f_000de298(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0de298  push 0xd640
    X86_AT(c, 0xde298u);
    { uint32_t v = 0xD640u; push32(c, v); }
    // 0de29d  call 0xde254
    X86_AT(c, 0xde29du);
    push32(c, 0xde2a2u); x86_call_known(c, 0xde254u, f_000de254); X86_RET(c, 0xde2a2u);
    X86_TICK(c, 12);
    // 0de2a2  add esp, 4
    X86_AT(c, 0xde2a2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0de2a5  ret 
    X86_AT(c, 0xde2a5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xde298u, "ran off the end of a function");
}
void f_000de2a8(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0de2a8  push 0xd654
    X86_AT(c, 0xde2a8u);
    { uint32_t v = 0xD654u; push32(c, v); }
    // 0de2ad  call 0xde254
    X86_AT(c, 0xde2adu);
    push32(c, 0xde2b2u); x86_call_known(c, 0xde254u, f_000de254); X86_RET(c, 0xde2b2u);
    X86_TICK(c, 12);
    // 0de2b2  add esp, 4
    X86_AT(c, 0xde2b2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0de2b5  ret 
    X86_AT(c, 0xde2b5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xde2a8u, "ran off the end of a function");
}
void f_000de2b8(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0de2b8  push 0xd668
    X86_AT(c, 0xde2b8u);
    { uint32_t v = 0xD668u; push32(c, v); }
    // 0de2bd  call 0xde254
    X86_AT(c, 0xde2bdu);
    push32(c, 0xde2c2u); x86_call_known(c, 0xde254u, f_000de254); X86_RET(c, 0xde2c2u);
    X86_TICK(c, 12);
    // 0de2c2  add esp, 4
    X86_AT(c, 0xde2c2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0de2c5  ret 
    X86_AT(c, 0xde2c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xde2b8u, "ran off the end of a function");
}
void f_000de2c8(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0de2c8  push 0xd678
    X86_AT(c, 0xde2c8u);
    { uint32_t v = 0xD678u; push32(c, v); }
    // 0de2cd  call 0xde254
    X86_AT(c, 0xde2cdu);
    push32(c, 0xde2d2u); x86_call_known(c, 0xde254u, f_000de254); X86_RET(c, 0xde2d2u);
    X86_TICK(c, 12);
    // 0de2d2  add esp, 4
    X86_AT(c, 0xde2d2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0de2d5  ret 
    X86_AT(c, 0xde2d5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xde2c8u, "ran off the end of a function");
}
void f_000de2d8(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0de2d8  push 0xd68c
    X86_AT(c, 0xde2d8u);
    { uint32_t v = 0xD68Cu; push32(c, v); }
    // 0de2dd  call 0xde254
    X86_AT(c, 0xde2ddu);
    push32(c, 0xde2e2u); x86_call_known(c, 0xde254u, f_000de254); X86_RET(c, 0xde2e2u);
    X86_TICK(c, 12);
    // 0de2e2  add esp, 4
    X86_AT(c, 0xde2e2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0de2e5  ret 
    X86_AT(c, 0xde2e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xde2d8u, "ran off the end of a function");
}
void f_000de2e8(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0de2e8  push 0xd6a0
    X86_AT(c, 0xde2e8u);
    { uint32_t v = 0xD6A0u; push32(c, v); }
    // 0de2ed  call 0xde254
    X86_AT(c, 0xde2edu);
    push32(c, 0xde2f2u); x86_call_known(c, 0xde254u, f_000de254); X86_RET(c, 0xde2f2u);
    X86_TICK(c, 12);
    // 0de2f2  add esp, 4
    X86_AT(c, 0xde2f2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0de2f5  ret 
    X86_AT(c, 0xde2f5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xde2e8u, "ran off the end of a function");
}
void f_000de2f8(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0de2f8  push 0xd6b4
    X86_AT(c, 0xde2f8u);
    { uint32_t v = 0xD6B4u; push32(c, v); }
    // 0de2fd  call 0xde254
    X86_AT(c, 0xde2fdu);
    push32(c, 0xde302u); x86_call_known(c, 0xde254u, f_000de254); X86_RET(c, 0xde302u);
    X86_TICK(c, 12);
    // 0de302  add esp, 4
    X86_AT(c, 0xde302u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0de305  ret 
    X86_AT(c, 0xde305u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xde2f8u, "ran off the end of a function");
}
void f_000de308(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0de308  push 0xd6c8
    X86_AT(c, 0xde308u);
    { uint32_t v = 0xD6C8u; push32(c, v); }
    // 0de30d  call 0xde254
    X86_AT(c, 0xde30du);
    push32(c, 0xde312u); x86_call_known(c, 0xde254u, f_000de254); X86_RET(c, 0xde312u);
    X86_TICK(c, 12);
    // 0de312  add esp, 4
    X86_AT(c, 0xde312u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0de315  ret 
    X86_AT(c, 0xde315u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xde308u, "ran off the end of a function");
}
void f_000de318(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0de318  push 0xd6dc
    X86_AT(c, 0xde318u);
    { uint32_t v = 0xD6DCu; push32(c, v); }
    // 0de31d  call 0xde254
    X86_AT(c, 0xde31du);
    push32(c, 0xde322u); x86_call_known(c, 0xde254u, f_000de254); X86_RET(c, 0xde322u);
    X86_TICK(c, 12);
    // 0de322  add esp, 4
    X86_AT(c, 0xde322u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0de325  ret 
    X86_AT(c, 0xde325u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xde318u, "ran off the end of a function");
}
void f_000de328(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0de328  push 0xd6fc
    X86_AT(c, 0xde328u);
    { uint32_t v = 0xD6FCu; push32(c, v); }
    // 0de32d  call 0xde254
    X86_AT(c, 0xde32du);
    push32(c, 0xde332u); x86_call_known(c, 0xde254u, f_000de254); X86_RET(c, 0xde332u);
    X86_TICK(c, 12);
    // 0de332  add esp, 4
    X86_AT(c, 0xde332u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0de335  ret 
    X86_AT(c, 0xde335u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xde328u, "ran off the end of a function");
}
void f_000de338(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0de338  push 0xd714
    X86_AT(c, 0xde338u);
    { uint32_t v = 0xD714u; push32(c, v); }
    // 0de33d  call 0xde254
    X86_AT(c, 0xde33du);
    push32(c, 0xde342u); x86_call_known(c, 0xde254u, f_000de254); X86_RET(c, 0xde342u);
    X86_TICK(c, 12);
    // 0de342  add esp, 4
    X86_AT(c, 0xde342u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0de345  ret 
    X86_AT(c, 0xde345u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xde338u, "ran off the end of a function");
}
void f_000de348(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0de348  cmp dword ptr [0xb02fe], 0
    X86_AT(c, 0xde348u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB02FEu))), 0x0u, 0, 4);
    // 0de34f  jle 0xde3b8
    X86_AT(c, 0xde34fu);
    if (x86_cc(c, 14)) { goto L_de3b8; }
    X86_TICK(c, 12);
    // 0de351  cmp dword ptr [0xb0322], 0
    X86_AT(c, 0xde351u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0322u))), 0x0u, 0, 4);
    // 0de358  jle 0xde3b8
    X86_AT(c, 0xde358u);
    if (x86_cc(c, 14)) { goto L_de3b8; }
    X86_TICK(c, 12);
    // 0de35a  cmp dword ptr [0xc03d8], 0
    X86_AT(c, 0xde35au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC03D8u))), 0x0u, 0, 4);
    // 0de361  jne 0xde374
    X86_AT(c, 0xde361u);
    if (x86_cc(c, 5)) { goto L_de374; }
    X86_TICK(c, 11);
    // 0de363  push 0xf
    X86_AT(c, 0xde363u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0de365  push 0xd728
    X86_AT(c, 0xde365u);
    { uint32_t v = 0xD728u; push32(c, v); }
    // 0de36a  call 0xcc830
    X86_AT(c, 0xde36au);
    push32(c, 0xde36fu); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xde36fu);
    X86_TICK(c, 9);
    // 0de36f  add esp, 8
    X86_AT(c, 0xde36fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0de372  jmp 0xde3b8
    X86_AT(c, 0xde372u);
    goto L_de3b8;
L_de374:
    X86_TICK(c, 9);
    // 0de374  push 0
    X86_AT(c, 0xde374u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0de376  call 0xde55c
    X86_AT(c, 0xde376u);
    push32(c, 0xde37bu); x86_call_known(c, 0xde55cu, f_000de55c); X86_RET(c, 0xde37bu);
    X86_TICK(c, 19);
    // 0de37b  mov dword ptr [0xbef9c], 0x140
    X86_AT(c, 0xde37bu);
    wr32((c.sbase[3] + (uint32_t)(0xBEF9Cu)), 0x140u);
    // 0de385  mov dword ptr [0xbefa0], 0xac
    X86_AT(c, 0xde385u);
    wr32((c.sbase[3] + (uint32_t)(0xBEFA0u)), 0xACu);
    // 0de38f  sub eax, eax
    X86_AT(c, 0xde38fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0de391  mov dword ptr [0xbef98], eax
    X86_AT(c, 0xde391u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF98u)), c.r[0]);
    // 0de396  mov dword ptr [0xbef94], eax
    X86_AT(c, 0xde396u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF94u)), c.r[0]);
    // 0de39b  push 0xf
    X86_AT(c, 0xde39bu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0de39d  call 0xde55c
    X86_AT(c, 0xde39du);
    push32(c, 0xde3a2u); x86_call_known(c, 0xde55cu, f_000de55c); X86_RET(c, 0xde3a2u);
    X86_TICK(c, 11);
    // 0de3a2  push 0xd738
    X86_AT(c, 0xde3a2u);
    { uint32_t v = 0xD738u; push32(c, v); }
    // 0de3a7  push 7
    X86_AT(c, 0xde3a7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0de3a9  call 0xc8cdc
    X86_AT(c, 0xde3a9u);
    push32(c, 0xde3aeu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xde3aeu);
    X86_TICK(c, 9);
    // 0de3ae  push 7
    X86_AT(c, 0xde3aeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0de3b0  call 0xca3cc
    X86_AT(c, 0xde3b0u);
    push32(c, 0xde3b5u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xde3b5u);
    X86_TICK(c, 2);
    // 0de3b5  add esp, 0x14
    X86_AT(c, 0xde3b5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_de3b8:
    X86_TICK(c, 10);
    // 0de3b8  ret 
    X86_AT(c, 0xde3b8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xde348u, "ran off the end of a function");
}
void f_000de3bc(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0de3bc  mov edx, dword ptr [esp + 4]
    X86_AT(c, 0xde3bcu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0de3c0  mov ecx, dword ptr [esp + 8]
    X86_AT(c, 0xde3c0u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0de3c4  cmp edx, 0x274
    X86_AT(c, 0xde3c4u);
    (void)x86_sub(c, c.r[2], 0x274u, 0, 4);
    // 0de3ca  jge 0xde3e2
    X86_AT(c, 0xde3cau);
    if (x86_cc(c, 13)) { goto L_de3e2; }
    X86_TICK(c, 7);
    // 0de3cc  cmp edx, 0xc
    X86_AT(c, 0xde3ccu);
    (void)x86_sub(c, c.r[2], 0xCu, 0, 4);
    // 0de3cf  jle 0xde3e2
    X86_AT(c, 0xde3cfu);
    if (x86_cc(c, 14)) { goto L_de3e2; }
    X86_TICK(c, 7);
    // 0de3d1  cmp ecx, 0x122
    X86_AT(c, 0xde3d1u);
    (void)x86_sub(c, c.r[1], 0x122u, 0, 4);
    // 0de3d7  jge 0xde3e2
    X86_AT(c, 0xde3d7u);
    if (x86_cc(c, 13)) { goto L_de3e2; }
    X86_TICK(c, 7);
    // 0de3d9  cmp ecx, 0x35
    X86_AT(c, 0xde3d9u);
    (void)x86_sub(c, c.r[1], 0x35u, 0, 4);
    // 0de3dc  jle 0xde3e2
    X86_AT(c, 0xde3dcu);
    if (x86_cc(c, 14)) { goto L_de3e2; }
    X86_TICK(c, 9);
    // 0de3de  mov al, 1
    X86_AT(c, 0xde3deu);
    s8(c, 0, 0x1u);
    // 0de3e0  jmp 0xde3e4
    X86_AT(c, 0xde3e0u);
    goto L_de3e4;
L_de3e2:
    X86_TICK(c, 2);
    // 0de3e2  sub eax, eax
    X86_AT(c, 0xde3e2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_de3e4:
    X86_TICK(c, 13);
    // 0de3e4  movzx eax, al
    X86_AT(c, 0xde3e4u);
    c.r[0] = g8(c, 0);
    // 0de3e7  ret 
    X86_AT(c, 0xde3e7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xde3bcu, "ran off the end of a function");
}
void f_000de3e8(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0de3e8  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0xde3e8u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0de3ec  and ecx, ecx
    X86_AT(c, 0xde3ecu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[1], 4); }
    // 0de3ee  jle 0xde3f7
    X86_AT(c, 0xde3eeu);
    if (x86_cc(c, 14)) { goto L_de3f7; }
    X86_TICK(c, 9);
    // 0de3f0  mov eax, 1
    X86_AT(c, 0xde3f0u);
    c.r[0] = 0x1u;
    // 0de3f5  jmp 0xde404
    X86_AT(c, 0xde3f5u);
    goto L_de404;
L_de3f7:
    X86_TICK(c, 7);
    // 0de3f7  and ecx, ecx
    X86_AT(c, 0xde3f7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[1], 4); }
    // 0de3f9  jge 0xde402
    X86_AT(c, 0xde3f9u);
    if (x86_cc(c, 13)) { goto L_de402; }
    X86_TICK(c, 9);
    // 0de3fb  mov eax, 0xffffffff
    X86_AT(c, 0xde3fbu);
    c.r[0] = 0xFFFFFFFFu;
    // 0de400  jmp 0xde404
    X86_AT(c, 0xde400u);
    goto L_de404;
L_de402:
    X86_TICK(c, 2);
    // 0de402  sub eax, eax
    X86_AT(c, 0xde402u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_de404:
    X86_TICK(c, 10);
    // 0de404  ret 
    X86_AT(c, 0xde404u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xde3e8u, "ran off the end of a function");
}
void f_000de408(X86Cpu& c) {
    X86_TICK(c, 8);
    // 0de408  push ebx
    X86_AT(c, 0xde408u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0de409  push esi
    X86_AT(c, 0xde409u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0de40a  push edi
    X86_AT(c, 0xde40au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0de40b  sub edi, edi
    X86_AT(c, 0xde40bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_de40d:
    X86_TICK(c, 7);
    // 0de40d  cmp edi, 0x100
    X86_AT(c, 0xde40du);
    (void)x86_sub(c, c.r[7], 0x100u, 0, 4);
    // 0de413  jge 0xde4b3
    X86_AT(c, 0xde413u);
    if (x86_cc(c, 13)) { goto L_de4b3; }
    X86_TICK(c, 11);
    // 0de419  push 0xff
    X86_AT(c, 0xde419u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0de41e  push 0
    X86_AT(c, 0xde41eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0de420  call 0xc5df0
    X86_AT(c, 0xde420u);
    push32(c, 0xde425u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xde425u);
    X86_TICK(c, 57);
    // 0de425  cdq 
    X86_AT(c, 0xde425u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0de426  mov ecx, 0x40
    X86_AT(c, 0xde426u);
    c.r[1] = 0x40u;
    // 0de42b  idiv ecx
    X86_AT(c, 0xde42bu);
    x86_idiv(c, c.r[1], 4, 0xde42bu);
    // 0de42d  mov dword ptr [0xc2cf8], eax
    X86_AT(c, 0xde42du);
    wr32((c.sbase[3] + (uint32_t)(0xC2CF8u)), c.r[0]);
    // 0de432  push 0xff
    X86_AT(c, 0xde432u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0de437  push 4
    X86_AT(c, 0xde437u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0de439  call 0xc5df0
    X86_AT(c, 0xde439u);
    push32(c, 0xde43eu); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xde43eu);
    X86_TICK(c, 21);
    // 0de43e  cdq 
    X86_AT(c, 0xde43eu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0de43f  sub eax, edx
    X86_AT(c, 0xde43fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0de441  sar eax, 1
    X86_AT(c, 0xde441u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0de443  xchg esi, eax
    X86_AT(c, 0xde443u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0de444  push 0xff
    X86_AT(c, 0xde444u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0de449  push 8
    X86_AT(c, 0xde449u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0de44b  call 0xc5df0
    X86_AT(c, 0xde44bu);
    push32(c, 0xde450u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xde450u);
    X86_TICK(c, 30);
    // 0de450  cdq 
    X86_AT(c, 0xde450u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0de451  sub eax, edx
    X86_AT(c, 0xde451u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0de453  sar eax, 1
    X86_AT(c, 0xde453u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0de455  cdq 
    X86_AT(c, 0xde455u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0de456  sub eax, edx
    X86_AT(c, 0xde456u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0de458  sar eax, 1
    X86_AT(c, 0xde458u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0de45a  xchg ebx, eax
    X86_AT(c, 0xde45au);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0de45b  add esp, 0x18
    X86_AT(c, 0xde45bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0de45e  mov eax, dword ptr [0xc2cf8]
    X86_AT(c, 0xde45eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC2CF8u)));
    // 0de463  cmp eax, 1
    X86_AT(c, 0xde463u);
    (void)x86_sub(c, c.r[0], 0x1u, 0, 4);
    // 0de466  je 0xde46d
    X86_AT(c, 0xde466u);
    if (x86_cc(c, 4)) { goto L_de46d; }
    X86_TICK(c, 7);
    // 0de468  cmp eax, 2
    X86_AT(c, 0xde468u);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 0de46b  jne 0xde46f
    X86_AT(c, 0xde46bu);
    if (x86_cc(c, 5)) { goto L_de46f; }
L_de46d:
    X86_TICK(c, 2);
    // 0de46d  neg esi
    X86_AT(c, 0xde46du);
    { uint32_t v = c.r[6]; c.r[6] = x86_neg(c, v, 4); }
L_de46f:
    X86_TICK(c, 12);
    // 0de46f  cmp dword ptr [0xc2cf8], 1
    X86_AT(c, 0xde46fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC2CF8u))), 0x1u, 0, 4);
    // 0de476  jle 0xde47a
    X86_AT(c, 0xde476u);
    if (x86_cc(c, 14)) { goto L_de47a; }
    X86_TICK(c, 2);
    // 0de478  neg ebx
    X86_AT(c, 0xde478u);
    { uint32_t v = c.r[3]; c.r[3] = x86_neg(c, v, 4); }
L_de47a:
    X86_TICK(c, 27);
    // 0de47a  mov eax, ebx
    X86_AT(c, 0xde47au);
    c.r[0] = c.r[3];
    // 0de47c  add eax, dword ptr [0xbefa0]
    X86_AT(c, 0xde47cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xBEFA0u))), 0, 4); }
    // 0de482  push eax
    X86_AT(c, 0xde482u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0de483  mov eax, esi
    X86_AT(c, 0xde483u);
    c.r[0] = c.r[6];
    // 0de485  add eax, dword ptr [0xbef9c]
    X86_AT(c, 0xde485u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xBEF9Cu))), 0, 4); }
    // 0de48b  push eax
    X86_AT(c, 0xde48bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0de48c  call 0xde3bc
    X86_AT(c, 0xde48cu);
    push32(c, 0xde491u); x86_call_known(c, 0xde3bcu, f_000de3bc); X86_RET(c, 0xde491u);
    X86_TICK(c, 9);
    // 0de491  add esp, 8
    X86_AT(c, 0xde491u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0de494  and eax, eax
    X86_AT(c, 0xde494u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0de496  jne 0xde49f
    X86_AT(c, 0xde496u);
    if (x86_cc(c, 5)) { goto L_de49f; }
    X86_TICK(c, 4);
    // 0de498  mov ebx, 0x1388
    X86_AT(c, 0xde498u);
    c.r[3] = 0x1388u;
    // 0de49d  mov esi, ebx
    X86_AT(c, 0xde49du);
    c.r[6] = c.r[3];
L_de49f:
    X86_TICK(c, 13);
    // 0de49f  mov dword ptr [edi*4 + 0xc23b8], esi
    X86_AT(c, 0xde49fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xC23B8u)), c.r[6]);
    // 0de4a6  mov dword ptr [edi*4 + 0xc27b8], ebx
    X86_AT(c, 0xde4a6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xC27B8u)), c.r[3]);
    // 0de4ad  inc edi
    X86_AT(c, 0xde4adu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0de4ae  jmp 0xde40d
    X86_AT(c, 0xde4aeu);
    X86_POLL(c, 0xde40du); goto L_de40d;
L_de4b3:
    X86_TICK(c, 22);
    // 0de4b3  pop edi
    X86_AT(c, 0xde4b3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0de4b4  pop esi
    X86_AT(c, 0xde4b4u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0de4b5  pop ebx
    X86_AT(c, 0xde4b5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0de4b6  ret 
    X86_AT(c, 0xde4b6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xde408u, "ran off the end of a function");
}
void f_000de4b8(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0de4b8  push ebp
    X86_AT(c, 0xde4b8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0de4b9  mov ebp, esp
    X86_AT(c, 0xde4b9u);
    c.r[5] = c.r[4];
    // 0de4bb  push ebx
    X86_AT(c, 0xde4bbu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0de4bc  push esi
    X86_AT(c, 0xde4bcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0de4bd  push edi
    X86_AT(c, 0xde4bdu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0de4be  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xde4beu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0de4c1  push 0xff
    X86_AT(c, 0xde4c1u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0de4c6  push 0
    X86_AT(c, 0xde4c6u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0de4c8  call 0xc5df0
    X86_AT(c, 0xde4c8u);
    push32(c, 0xde4cdu); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xde4cdu);
    X86_TICK(c, 57);
    // 0de4cd  cdq 
    X86_AT(c, 0xde4cdu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0de4ce  mov ecx, 0x40
    X86_AT(c, 0xde4ceu);
    c.r[1] = 0x40u;
    // 0de4d3  idiv ecx
    X86_AT(c, 0xde4d3u);
    x86_idiv(c, c.r[1], 4, 0xde4d3u);
    // 0de4d5  mov dword ptr [0xc2cf8], eax
    X86_AT(c, 0xde4d5u);
    wr32((c.sbase[3] + (uint32_t)(0xC2CF8u)), c.r[0]);
    // 0de4da  push 0xff
    X86_AT(c, 0xde4dau);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0de4df  push 4
    X86_AT(c, 0xde4dfu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0de4e1  call 0xc5df0
    X86_AT(c, 0xde4e1u);
    push32(c, 0xde4e6u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xde4e6u);
    X86_TICK(c, 21);
    // 0de4e6  cdq 
    X86_AT(c, 0xde4e6u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0de4e7  sub eax, edx
    X86_AT(c, 0xde4e7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0de4e9  sar eax, 1
    X86_AT(c, 0xde4e9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0de4eb  xchg esi, eax
    X86_AT(c, 0xde4ebu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0de4ec  push 0xff
    X86_AT(c, 0xde4ecu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0de4f1  push 8
    X86_AT(c, 0xde4f1u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0de4f3  call 0xc5df0
    X86_AT(c, 0xde4f3u);
    push32(c, 0xde4f8u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xde4f8u);
    X86_TICK(c, 30);
    // 0de4f8  cdq 
    X86_AT(c, 0xde4f8u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0de4f9  sub eax, edx
    X86_AT(c, 0xde4f9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0de4fb  sar eax, 1
    X86_AT(c, 0xde4fbu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0de4fd  cdq 
    X86_AT(c, 0xde4fdu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0de4fe  sub eax, edx
    X86_AT(c, 0xde4feu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0de500  sar eax, 1
    X86_AT(c, 0xde500u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0de502  xchg ebx, eax
    X86_AT(c, 0xde502u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0de503  add esp, 0x18
    X86_AT(c, 0xde503u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0de506  mov eax, dword ptr [0xc2cf8]
    X86_AT(c, 0xde506u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC2CF8u)));
    // 0de50b  cmp eax, 1
    X86_AT(c, 0xde50bu);
    (void)x86_sub(c, c.r[0], 0x1u, 0, 4);
    // 0de50e  je 0xde515
    X86_AT(c, 0xde50eu);
    if (x86_cc(c, 4)) { goto L_de515; }
    X86_TICK(c, 7);
    // 0de510  cmp eax, 2
    X86_AT(c, 0xde510u);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 0de513  jne 0xde517
    X86_AT(c, 0xde513u);
    if (x86_cc(c, 5)) { goto L_de517; }
L_de515:
    X86_TICK(c, 2);
    // 0de515  neg esi
    X86_AT(c, 0xde515u);
    { uint32_t v = c.r[6]; c.r[6] = x86_neg(c, v, 4); }
L_de517:
    X86_TICK(c, 12);
    // 0de517  cmp dword ptr [0xc2cf8], 1
    X86_AT(c, 0xde517u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC2CF8u))), 0x1u, 0, 4);
    // 0de51e  jle 0xde522
    X86_AT(c, 0xde51eu);
    if (x86_cc(c, 14)) { goto L_de522; }
    X86_TICK(c, 2);
    // 0de520  neg ebx
    X86_AT(c, 0xde520u);
    { uint32_t v = c.r[3]; c.r[3] = x86_neg(c, v, 4); }
L_de522:
    X86_TICK(c, 27);
    // 0de522  mov eax, ebx
    X86_AT(c, 0xde522u);
    c.r[0] = c.r[3];
    // 0de524  add eax, dword ptr [0xbefa0]
    X86_AT(c, 0xde524u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xBEFA0u))), 0, 4); }
    // 0de52a  push eax
    X86_AT(c, 0xde52au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0de52b  mov eax, esi
    X86_AT(c, 0xde52bu);
    c.r[0] = c.r[6];
    // 0de52d  add eax, dword ptr [0xbef9c]
    X86_AT(c, 0xde52du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xBEF9Cu))), 0, 4); }
    // 0de533  push eax
    X86_AT(c, 0xde533u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0de534  call 0xde3bc
    X86_AT(c, 0xde534u);
    push32(c, 0xde539u); x86_call_known(c, 0xde3bcu, f_000de3bc); X86_RET(c, 0xde539u);
    X86_TICK(c, 9);
    // 0de539  add esp, 8
    X86_AT(c, 0xde539u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0de53c  and eax, eax
    X86_AT(c, 0xde53cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0de53e  jne 0xde547
    X86_AT(c, 0xde53eu);
    if (x86_cc(c, 5)) { goto L_de547; }
    X86_TICK(c, 4);
    // 0de540  mov ebx, 0x1388
    X86_AT(c, 0xde540u);
    c.r[3] = 0x1388u;
    // 0de545  mov esi, ebx
    X86_AT(c, 0xde545u);
    c.r[6] = c.r[3];
L_de547:
    X86_TICK(c, 32);
    // 0de547  mov dword ptr [edi*4 + 0xc2138], esi
    X86_AT(c, 0xde547u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xC2138u)), c.r[6]);
    // 0de54e  mov dword ptr [edi*4 + 0xc21d8], ebx
    X86_AT(c, 0xde54eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xC21D8u)), c.r[3]);
    // 0de555  pop edi
    X86_AT(c, 0xde555u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0de556  pop esi
    X86_AT(c, 0xde556u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0de557  pop ebx
    X86_AT(c, 0xde557u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0de558  leave 
    X86_AT(c, 0xde558u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0de559  ret 
    X86_AT(c, 0xde559u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xde4b8u, "ran off the end of a function");
}
void f_000de55c(X86Cpu& c) {
    X86_TICK(c, 45);
    // 0de55c  push ebp
    X86_AT(c, 0xde55cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0de55d  mov ebp, esp
    X86_AT(c, 0xde55du);
    c.r[5] = c.r[4];
    // 0de55f  push edi
    X86_AT(c, 0xde55fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0de560  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xde560u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0de563  push edi
    X86_AT(c, 0xde563u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0de564  push dword ptr [0xbefa0]
    X86_AT(c, 0xde564u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xBEFA0u))); push32(c, v); }
    // 0de56a  mov eax, dword ptr [0xbef9c]
    X86_AT(c, 0xde56au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xBEF9Cu)));
    // 0de56f  add eax, 4
    X86_AT(c, 0xde56fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x4u, 0, 4); }
    // 0de572  push eax
    X86_AT(c, 0xde572u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0de573  push dword ptr [0xbefa0]
    X86_AT(c, 0xde573u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xBEFA0u))); push32(c, v); }
    // 0de579  mov eax, dword ptr [0xbef9c]
    X86_AT(c, 0xde579u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xBEF9Cu)));
    // 0de57e  sub eax, 4
    X86_AT(c, 0xde57eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x4u, 0, 4); }
    // 0de581  push eax
    X86_AT(c, 0xde581u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0de582  call 0xc9378
    X86_AT(c, 0xde582u);
    push32(c, 0xde587u); x86_call_known(c, 0xc9378u, f_000c9378); X86_RET(c, 0xde587u);
    X86_TICK(c, 35);
    // 0de587  push edi
    X86_AT(c, 0xde587u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0de588  mov eax, dword ptr [0xbefa0]
    X86_AT(c, 0xde588u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xBEFA0u)));
    // 0de58d  add eax, 4
    X86_AT(c, 0xde58du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x4u, 0, 4); }
    // 0de590  push eax
    X86_AT(c, 0xde590u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0de591  push dword ptr [0xbef9c]
    X86_AT(c, 0xde591u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xBEF9Cu))); push32(c, v); }
    // 0de597  mov eax, dword ptr [0xbefa0]
    X86_AT(c, 0xde597u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xBEFA0u)));
    // 0de59c  sub eax, 4
    X86_AT(c, 0xde59cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x4u, 0, 4); }
    // 0de59f  push eax
    X86_AT(c, 0xde59fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0de5a0  push dword ptr [0xbef9c]
    X86_AT(c, 0xde5a0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xBEF9Cu))); push32(c, v); }
    // 0de5a6  call 0xc9378
    X86_AT(c, 0xde5a6u);
    push32(c, 0xde5abu); x86_call_known(c, 0xc9378u, f_000c9378); X86_RET(c, 0xde5abu);
    X86_TICK(c, 22);
    // 0de5ab  add esp, 0x28
    X86_AT(c, 0xde5abu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0de5ae  pop edi
    X86_AT(c, 0xde5aeu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0de5af  leave 
    X86_AT(c, 0xde5afu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0de5b0  ret 
    X86_AT(c, 0xde5b0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xde55cu, "ran off the end of a function");
}
void f_000de5b4(X86Cpu& c) {
    X86_TICK(c, 32);
    // 0de5b4  push ebp
    X86_AT(c, 0xde5b4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0de5b5  mov ebp, esp
    X86_AT(c, 0xde5b5u);
    c.r[5] = c.r[4];
    // 0de5b7  sub esp, 0x1fc
    X86_AT(c, 0xde5b7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x1FCu, 0, 4); }
    // 0de5bd  push ebx
    X86_AT(c, 0xde5bdu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0de5be  push esi
    X86_AT(c, 0xde5beu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0de5bf  push edi
    X86_AT(c, 0xde5bfu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0de5c0  sub eax, eax
    X86_AT(c, 0xde5c0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0de5c2  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xde5c2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0de5c5  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xde5c5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0de5c8  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xde5c8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0de5cb  cmp dword ptr [0xbef94], 0
    X86_AT(c, 0xde5cbu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xBEF94u))), 0x0u, 0, 4);
    // 0de5d2  jne 0xde5ea
    X86_AT(c, 0xde5d2u);
    if (x86_cc(c, 5)) { goto L_de5ea; }
    X86_TICK(c, 12);
    // 0de5d4  cmp dword ptr [0xbef98], 0
    X86_AT(c, 0xde5d4u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xBEF98u))), 0x0u, 0, 4);
    // 0de5db  jne 0xde5ea
    X86_AT(c, 0xde5dbu);
    if (x86_cc(c, 5)) { goto L_de5ea; }
    X86_TICK(c, 12);
    // 0de5dd  cmp dword ptr [0xb52f4], 2
    X86_AT(c, 0xde5ddu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F4u))), 0x2u, 0, 4);
    // 0de5e4  jne 0xde5ea
    X86_AT(c, 0xde5e4u);
    if (x86_cc(c, 5)) { goto L_de5ea; }
    X86_TICK(c, 9);
    // 0de5e6  sub eax, eax
    X86_AT(c, 0xde5e6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0de5e8  jmp 0xde5ec
    X86_AT(c, 0xde5e8u);
    goto L_de5ec;
L_de5ea:
    X86_TICK(c, 2);
    // 0de5ea  mov al, 1
    X86_AT(c, 0xde5eau);
    s8(c, 0, 0x1u);
L_de5ec:
    X86_TICK(c, 12);
    // 0de5ec  movzx eax, al
    X86_AT(c, 0xde5ecu);
    c.r[0] = g8(c, 0);
    // 0de5ef  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xde5efu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0de5f2  and eax, eax
    X86_AT(c, 0xde5f2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0de5f4  je 0xde600
    X86_AT(c, 0xde5f4u);
    if (x86_cc(c, 4)) { goto L_de600; }
    X86_TICK(c, 9);
    // 0de5f6  push 0
    X86_AT(c, 0xde5f6u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0de5f8  call 0xde55c
    X86_AT(c, 0xde5f8u);
    push32(c, 0xde5fdu); x86_call_known(c, 0xde55cu, f_000de55c); X86_RET(c, 0xde5fdu);
    X86_TICK(c, 2);
    // 0de5fd  add esp, 4
    X86_AT(c, 0xde5fdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_de600:
    X86_TICK(c, 2);
    // 0de600  sub edi, edi
    X86_AT(c, 0xde600u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_de602:
    X86_TICK(c, 7);
    // 0de602  cmp edi, 0x28
    X86_AT(c, 0xde602u);
    (void)x86_sub(c, c.r[7], 0x28u, 0, 4);
    // 0de605  jge 0xde7c1
    X86_AT(c, 0xde605u);
    if (x86_cc(c, 13)) { goto L_de7c1; }
    X86_TICK(c, 86);
    // 0de60b  mov eax, dword ptr [edi*4 + 0xc2138]
    X86_AT(c, 0xde60bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xC2138u)));
    // 0de612  cdq 
    X86_AT(c, 0xde612u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0de613  sub eax, edx
    X86_AT(c, 0xde613u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0de615  sar eax, 1
    X86_AT(c, 0xde615u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0de617  cdq 
    X86_AT(c, 0xde617u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0de618  sub eax, edx
    X86_AT(c, 0xde618u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0de61a  sar eax, 1
    X86_AT(c, 0xde61au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0de61c  cdq 
    X86_AT(c, 0xde61cu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0de61d  sub eax, edx
    X86_AT(c, 0xde61du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0de61f  sar eax, 1
    X86_AT(c, 0xde61fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0de621  xchg esi, eax
    X86_AT(c, 0xde621u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0de622  mov eax, dword ptr [edi*4 + 0xc21d8]
    X86_AT(c, 0xde622u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xC21D8u)));
    // 0de629  cdq 
    X86_AT(c, 0xde629u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0de62a  mov ecx, 6
    X86_AT(c, 0xde62au);
    c.r[1] = 0x6u;
    // 0de62f  idiv ecx
    X86_AT(c, 0xde62fu);
    x86_idiv(c, c.r[1], 4, 0xde62fu);
    // 0de631  xchg ebx, eax
    X86_AT(c, 0xde631u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0de632  and esi, esi
    X86_AT(c, 0xde632u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0de634  jne 0xde646
    X86_AT(c, 0xde634u);
    if (x86_cc(c, 5)) { goto L_de646; }
    X86_TICK(c, 12);
    // 0de636  push dword ptr [edi*4 + 0xc2138]
    X86_AT(c, 0xde636u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xC2138u))); push32(c, v); }
    // 0de63d  call 0xde3e8
    X86_AT(c, 0xde63du);
    push32(c, 0xde642u); x86_call_known(c, 0xde3e8u, f_000de3e8); X86_RET(c, 0xde642u);
    X86_TICK(c, 5);
    // 0de642  xchg esi, eax
    X86_AT(c, 0xde642u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0de643  add esp, 4
    X86_AT(c, 0xde643u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_de646:
    X86_TICK(c, 7);
    // 0de646  and ebx, ebx
    X86_AT(c, 0xde646u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0de648  jne 0xde65a
    X86_AT(c, 0xde648u);
    if (x86_cc(c, 5)) { goto L_de65a; }
    X86_TICK(c, 12);
    // 0de64a  push dword ptr [edi*4 + 0xc21d8]
    X86_AT(c, 0xde64au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xC21D8u))); push32(c, v); }
    // 0de651  call 0xde3e8
    X86_AT(c, 0xde651u);
    push32(c, 0xde656u); x86_call_known(c, 0xde3e8u, f_000de3e8); X86_RET(c, 0xde656u);
    X86_TICK(c, 5);
    // 0de656  xchg ebx, eax
    X86_AT(c, 0xde656u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0de657  add esp, 4
    X86_AT(c, 0xde657u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_de65a:
    X86_TICK(c, 12);
    // 0de65a  cmp dword ptr [0xb52f4], 1
    X86_AT(c, 0xde65au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F4u))), 0x1u, 0, 4);
    // 0de661  je 0xde6a3
    X86_AT(c, 0xde661u);
    if (x86_cc(c, 4)) { goto L_de6a3; }
    X86_TICK(c, 17);
    // 0de663  push dword ptr [edi*4 + 0xc2318]
    X86_AT(c, 0xde663u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xC2318u))); push32(c, v); }
    // 0de66a  push dword ptr [edi*4 + 0xc2278]
    X86_AT(c, 0xde66au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xC2278u))); push32(c, v); }
    // 0de671  call 0xde3bc
    X86_AT(c, 0xde671u);
    push32(c, 0xde676u); x86_call_known(c, 0xde3bcu, f_000de3bc); X86_RET(c, 0xde676u);
    X86_TICK(c, 9);
    // 0de676  add esp, 8
    X86_AT(c, 0xde676u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0de679  and eax, eax
    X86_AT(c, 0xde679u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0de67b  je 0xde6a3
    X86_AT(c, 0xde67bu);
    if (x86_cc(c, 4)) { goto L_de6a3; }
    X86_TICK(c, 22);
    // 0de67d  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xde67du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0de680  mov dx, word ptr [edi*4 + 0xc2278]
    X86_AT(c, 0xde680u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xC2278u))));
    // 0de688  mov word ptr [ebp + eax*4 - 0xb2], dx
    X86_AT(c, 0xde688u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0xFFFFFF4Eu)), (c.r[2] & 0xFFFFu));
    // 0de690  mov dx, word ptr [edi*4 + 0xc2318]
    X86_AT(c, 0xde690u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xC2318u))));
    // 0de698  mov word ptr [ebp + eax*4 - 0xb0], dx
    X86_AT(c, 0xde698u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0xFFFFFF50u)), (c.r[2] & 0xFFFFu));
    // 0de6a0  inc dword ptr [ebp - 8]
    X86_AT(c, 0xde6a0u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_de6a3:
    X86_TICK(c, 45);
    // 0de6a3  add dword ptr [edi*4 + 0xc2138], esi
    X86_AT(c, 0xde6a3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xC2138u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 0de6aa  add dword ptr [edi*4 + 0xc21d8], ebx
    X86_AT(c, 0xde6aau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xC21D8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[3], 0, 4)); }
    // 0de6b1  mov eax, dword ptr [edi*4 + 0xc21d8]
    X86_AT(c, 0xde6b1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xC21D8u)));
    // 0de6b8  add eax, dword ptr [0xbefa0]
    X86_AT(c, 0xde6b8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xBEFA0u))), 0, 4); }
    // 0de6be  push eax
    X86_AT(c, 0xde6beu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0de6bf  mov eax, dword ptr [edi*4 + 0xc2138]
    X86_AT(c, 0xde6bfu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xC2138u)));
    // 0de6c6  add eax, dword ptr [0xbef9c]
    X86_AT(c, 0xde6c6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xBEF9Cu))), 0, 4); }
    // 0de6cc  push eax
    X86_AT(c, 0xde6ccu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0de6cd  call 0xde3bc
    X86_AT(c, 0xde6cdu);
    push32(c, 0xde6d2u); x86_call_known(c, 0xde3bcu, f_000de3bc); X86_RET(c, 0xde6d2u);
    X86_TICK(c, 9);
    // 0de6d2  add esp, 8
    X86_AT(c, 0xde6d2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0de6d5  and eax, eax
    X86_AT(c, 0xde6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0de6d7  jne 0xde715
    X86_AT(c, 0xde6d7u);
    if (x86_cc(c, 5)) { goto L_de715; }
    X86_TICK(c, 11);
    // 0de6d9  push 0x80
    X86_AT(c, 0xde6d9u);
    { uint32_t v = 0x80u; push32(c, v); }
    // 0de6de  push 0
    X86_AT(c, 0xde6deu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0de6e0  call 0xc5df0
    X86_AT(c, 0xde6e0u);
    push32(c, 0xde6e5u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xde6e5u);
    X86_TICK(c, 17);
    // 0de6e5  mov eax, dword ptr [eax*4 + 0xc23b8]
    X86_AT(c, 0xde6e5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xC23B8u)));
    // 0de6ec  mov dword ptr [edi*4 + 0xc2138], eax
    X86_AT(c, 0xde6ecu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xC2138u)), c.r[0]);
    // 0de6f3  push 0x80
    X86_AT(c, 0xde6f3u);
    { uint32_t v = 0x80u; push32(c, v); }
    // 0de6f8  push 0
    X86_AT(c, 0xde6f8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0de6fa  call 0xc5df0
    X86_AT(c, 0xde6fau);
    push32(c, 0xde6ffu); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xde6ffu);
    X86_TICK(c, 15);
    // 0de6ff  mov eax, dword ptr [eax*4 + 0xc27b8]
    X86_AT(c, 0xde6ffu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xC27B8u)));
    // 0de706  mov dword ptr [edi*4 + 0xc21d8], eax
    X86_AT(c, 0xde706u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xC21D8u)), c.r[0]);
    // 0de70d  add esp, 0x10
    X86_AT(c, 0xde70du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0de710  jmp 0xde78e
    X86_AT(c, 0xde710u);
    goto L_de78e;
L_de715:
    X86_TICK(c, 7);
    // 0de715  cmp edi, 0x23
    X86_AT(c, 0xde715u);
    (void)x86_sub(c, c.r[7], 0x23u, 0, 4);
    // 0de718  jge 0xde755
    X86_AT(c, 0xde718u);
    if (x86_cc(c, 13)) { goto L_de755; }
    X86_TICK(c, 43);
    // 0de71a  mov eax, 0xb52f4
    X86_AT(c, 0xde71au);
    c.r[0] = 0xB52F4u;
    // 0de71f  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xde71fu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0de722  mov cx, word ptr [eax + edi*4 + 0xce44]
    X86_AT(c, 0xde722u);
    s16(c, 1, rd16((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7] * 4 + 0xCE44u))));
    // 0de72a  add cx, word ptr [eax + 0x9ca8]
    X86_AT(c, 0xde72au);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x9CA8u))), 0, 2)); }
    // 0de731  mov word ptr [ebp + edx*4 - 0x156], cx
    X86_AT(c, 0xde731u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + c.r[2] * 4 + 0xFFFFFEAAu)), (c.r[1] & 0xFFFFu));
    // 0de739  mov cx, word ptr [eax + edi*4 + 0xcee4]
    X86_AT(c, 0xde739u);
    s16(c, 1, rd16((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7] * 4 + 0xCEE4u))));
    // 0de741  add cx, word ptr [eax + 0x9cac]
    X86_AT(c, 0xde741u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x9CACu))), 0, 2)); }
    // 0de748  mov word ptr [ebp + edx*4 - 0x154], cx
    X86_AT(c, 0xde748u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + c.r[2] * 4 + 0xFFFFFEACu)), (c.r[1] & 0xFFFFu));
    // 0de750  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xde750u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0de753  jmp 0xde78e
    X86_AT(c, 0xde753u);
    goto L_de78e;
L_de755:
    X86_TICK(c, 36);
    // 0de755  mov eax, 0xb52f4
    X86_AT(c, 0xde755u);
    c.r[0] = 0xB52F4u;
    // 0de75a  mov edx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xde75au);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0de75d  mov cx, word ptr [eax + edi*4 + 0xce44]
    X86_AT(c, 0xde75du);
    s16(c, 1, rd16((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7] * 4 + 0xCE44u))));
    // 0de765  add cx, word ptr [eax + 0x9ca8]
    X86_AT(c, 0xde765u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x9CA8u))), 0, 2)); }
    // 0de76c  mov word ptr [ebp + edx*4 - 0x1fa], cx
    X86_AT(c, 0xde76cu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + c.r[2] * 4 + 0xFFFFFE06u)), (c.r[1] & 0xFFFFu));
    // 0de774  mov cx, word ptr [eax + edi*4 + 0xcee4]
    X86_AT(c, 0xde774u);
    s16(c, 1, rd16((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7] * 4 + 0xCEE4u))));
    // 0de77c  add cx, word ptr [eax + 0x9cac]
    X86_AT(c, 0xde77cu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x9CACu))), 0, 2)); }
    // 0de783  mov word ptr [ebp + edx*4 - 0x1f8], cx
    X86_AT(c, 0xde783u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + c.r[2] * 4 + 0xFFFFFE08u)), (c.r[1] & 0xFFFFu));
    // 0de78b  inc dword ptr [ebp - 0x10]
    X86_AT(c, 0xde78bu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_de78e:
    X86_TICK(c, 35);
    // 0de78e  mov eax, 0xb52f4
    X86_AT(c, 0xde78eu);
    c.r[0] = 0xB52F4u;
    // 0de793  mov edx, dword ptr [eax + edi*4 + 0xce44]
    X86_AT(c, 0xde793u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7] * 4 + 0xCE44u)));
    // 0de79a  add edx, dword ptr [eax + 0x9ca8]
    X86_AT(c, 0xde79au);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x9CA8u))), 0, 4); }
    // 0de7a0  mov dword ptr [eax + edi*4 + 0xcf84], edx
    X86_AT(c, 0xde7a0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7] * 4 + 0xCF84u)), c.r[2]);
    // 0de7a7  mov edx, dword ptr [eax + edi*4 + 0xcee4]
    X86_AT(c, 0xde7a7u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7] * 4 + 0xCEE4u)));
    // 0de7ae  add edx, dword ptr [eax + 0x9cac]
    X86_AT(c, 0xde7aeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x9CACu))), 0, 4); }
    // 0de7b4  mov dword ptr [eax + edi*4 + 0xd024], edx
    X86_AT(c, 0xde7b4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7] * 4 + 0xD024u)), c.r[2]);
    // 0de7bb  inc edi
    X86_AT(c, 0xde7bbu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0de7bc  jmp 0xde602
    X86_AT(c, 0xde7bcu);
    X86_POLL(c, 0xde602u); goto L_de602;
L_de7c1:
    X86_TICK(c, 9);
    // 0de7c1  push 9
    X86_AT(c, 0xde7c1u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0de7c3  call 0xc8dd4
    X86_AT(c, 0xde7c3u);
    push32(c, 0xde7c8u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xde7c8u);
    X86_TICK(c, 31);
    // 0de7c8  mov ax, word ptr [ebp - 8]
    X86_AT(c, 0xde7c8u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))));
    // 0de7cc  mov word ptr [ebp - 0xb4], ax
    X86_AT(c, 0xde7ccu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFF4Cu)), (c.r[0] & 0xFFFFu));
    // 0de7d3  mov ax, word ptr [ebp - 0xc]
    X86_AT(c, 0xde7d3u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))));
    // 0de7d7  mov word ptr [ebp - 0x158], ax
    X86_AT(c, 0xde7d7u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFEA8u)), (c.r[0] & 0xFFFFu));
    // 0de7de  mov ax, word ptr [ebp - 0x10]
    X86_AT(c, 0xde7deu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))));
    // 0de7e2  mov word ptr [ebp - 0x1fc], ax
    X86_AT(c, 0xde7e2u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFE04u)), (c.r[0] & 0xFFFFu));
    // 0de7e9  lea eax, [ebp - 0xb4]
    X86_AT(c, 0xde7e9u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF4Cu);
    // 0de7ef  push eax
    X86_AT(c, 0xde7efu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0de7f0  push 0x4bfd8
    X86_AT(c, 0xde7f0u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0de7f5  call 0x7e5
    X86_AT(c, 0xde7f5u);
    push32(c, 0xde7fau); x86_call_known(c, 0x7e5u, f_000007e5); X86_RET(c, 0xde7fau);
    X86_TICK(c, 9);
    // 0de7fa  push 0xf
    X86_AT(c, 0xde7fau);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0de7fc  call 0xc8dd4
    X86_AT(c, 0xde7fcu);
    push32(c, 0xde801u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xde801u);
    X86_TICK(c, 13);
    // 0de801  lea eax, [ebp - 0x158]
    X86_AT(c, 0xde801u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFEA8u);
    // 0de807  push eax
    X86_AT(c, 0xde807u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0de808  push 0x4bfd8
    X86_AT(c, 0xde808u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0de80d  call 0x7e5
    X86_AT(c, 0xde80du);
    push32(c, 0xde812u); x86_call_known(c, 0x7e5u, f_000007e5); X86_RET(c, 0xde812u);
    X86_TICK(c, 9);
    // 0de812  push 0xa
    X86_AT(c, 0xde812u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0de814  call 0xc8dd4
    X86_AT(c, 0xde814u);
    push32(c, 0xde819u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xde819u);
    X86_TICK(c, 13);
    // 0de819  lea eax, [ebp - 0x1fc]
    X86_AT(c, 0xde819u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFE04u);
    // 0de81f  push eax
    X86_AT(c, 0xde81fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0de820  push 0x4bfd8
    X86_AT(c, 0xde820u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0de825  call 0x7e5
    X86_AT(c, 0xde825u);
    push32(c, 0xde82au); x86_call_known(c, 0x7e5u, f_000007e5); X86_RET(c, 0xde82au);
    X86_TICK(c, 16);
    // 0de82a  mov eax, 0xb52f4
    X86_AT(c, 0xde82au);
    c.r[0] = 0xB52F4u;
    // 0de82f  add esp, 0x24
    X86_AT(c, 0xde82fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0de832  cmp dword ptr [eax], 2
    X86_AT(c, 0xde832u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0]))), 0x2u, 0, 4);
    // 0de835  jne 0xde8b0
    X86_AT(c, 0xde835u);
    if (x86_cc(c, 5)) { goto L_de8b0; }
    X86_TICK(c, 33);
    // 0de83b  mov edx, dword ptr [eax + 0x9ca0]
    X86_AT(c, 0xde83bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x9CA0u)));
    // 0de841  add dword ptr [eax + 0x9ca8], edx
    X86_AT(c, 0xde841u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x9CA8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], 0, 4)); }
    // 0de847  mov edx, dword ptr [eax + 0x9ca4]
    X86_AT(c, 0xde847u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x9CA4u)));
    // 0de84d  add dword ptr [eax + 0x9cac], edx
    X86_AT(c, 0xde84du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x9CACu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], 0, 4)); }
    // 0de853  mov eax, dword ptr [eax + 0x9ca8]
    X86_AT(c, 0xde853u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x9CA8u)));
    // 0de859  cmp eax, 0x274
    X86_AT(c, 0xde859u);
    (void)x86_sub(c, c.r[0], 0x274u, 0, 4);
    // 0de85e  jge 0xde865
    X86_AT(c, 0xde85eu);
    if (x86_cc(c, 13)) { goto L_de865; }
    X86_TICK(c, 7);
    // 0de860  cmp eax, 0xc
    X86_AT(c, 0xde860u);
    (void)x86_sub(c, c.r[0], 0xCu, 0, 4);
    // 0de863  jg 0xde87a
    X86_AT(c, 0xde863u);
    if (x86_cc(c, 15)) { goto L_de87a; }
L_de865:
    X86_TICK(c, 13);
    // 0de865  mov eax, dword ptr [0xbef94]
    X86_AT(c, 0xde865u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xBEF94u)));
    // 0de86a  sub dword ptr [0xbef9c], eax
    X86_AT(c, 0xde86au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xBEF9Cu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0de870  mov dword ptr [0xbef94], 0
    X86_AT(c, 0xde870u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF94u)), 0x0u);
L_de87a:
    X86_TICK(c, 11);
    // 0de87a  mov eax, dword ptr [0xbefa0]
    X86_AT(c, 0xde87au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xBEFA0u)));
    // 0de87f  cmp eax, 0x122
    X86_AT(c, 0xde87fu);
    (void)x86_sub(c, c.r[0], 0x122u, 0, 4);
    // 0de884  jge 0xde88b
    X86_AT(c, 0xde884u);
    if (x86_cc(c, 13)) { goto L_de88b; }
    X86_TICK(c, 7);
    // 0de886  cmp eax, 0x35
    X86_AT(c, 0xde886u);
    (void)x86_sub(c, c.r[0], 0x35u, 0, 4);
    // 0de889  jg 0xde8a0
    X86_AT(c, 0xde889u);
    if (x86_cc(c, 15)) { goto L_de8a0; }
L_de88b:
    X86_TICK(c, 13);
    // 0de88b  mov eax, dword ptr [0xbef98]
    X86_AT(c, 0xde88bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xBEF98u)));
    // 0de890  sub dword ptr [0xbefa0], eax
    X86_AT(c, 0xde890u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xBEFA0u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0de896  mov dword ptr [0xbef98], 0
    X86_AT(c, 0xde896u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF98u)), 0x0u);
L_de8a0:
    X86_TICK(c, 12);
    // 0de8a0  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0xde8a0u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0de8a4  je 0xde8b0
    X86_AT(c, 0xde8a4u);
    if (x86_cc(c, 4)) { goto L_de8b0; }
    X86_TICK(c, 9);
    // 0de8a6  push 0xf
    X86_AT(c, 0xde8a6u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0de8a8  call 0xde55c
    X86_AT(c, 0xde8a8u);
    push32(c, 0xde8adu); x86_call_known(c, 0xde55cu, f_000de55c); X86_RET(c, 0xde8adu);
    X86_TICK(c, 2);
    // 0de8ad  add esp, 4
    X86_AT(c, 0xde8adu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_de8b0:
    X86_TICK(c, 9);
    // 0de8b0  push 0xf
    X86_AT(c, 0xde8b0u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0de8b2  call 0xc8dd4
    X86_AT(c, 0xde8b2u);
    push32(c, 0xde8b7u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xde8b7u);
    X86_TICK(c, 30);
    // 0de8b7  add esp, 4
    X86_AT(c, 0xde8b7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0de8ba  pop edi
    X86_AT(c, 0xde8bau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0de8bb  pop esi
    X86_AT(c, 0xde8bbu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0de8bc  pop ebx
    X86_AT(c, 0xde8bcu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0de8bd  leave 
    X86_AT(c, 0xde8bdu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0de8be  ret 
    X86_AT(c, 0xde8beu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xde5b4u, "ran off the end of a function");
}
}
