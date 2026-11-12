#include "p_game_funcs.h"
namespace p_game {
void f_000bbd1c(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0bbd1c  push ebp
    X86_AT(c, 0xbbd1cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bbd1d  mov ebp, esp
    X86_AT(c, 0xbbd1du);
    c.r[5] = c.r[4];
    // 0bbd1f  push ebx
    X86_AT(c, 0xbbd1fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bbd20  push esi
    X86_AT(c, 0xbbd20u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bbd21  push edi
    X86_AT(c, 0xbbd21u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bbd22  sub esi, esi
    X86_AT(c, 0xbbd22u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0bbd24  movzx edx, byte ptr [ebp + 0xc]
    X86_AT(c, 0xbbd24u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0bbd28  sub edx, 0x20
    X86_AT(c, 0xbbd28u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x20u, 0, 4); }
    // 0bbd2b  cmp edx, 0x3a
    X86_AT(c, 0xbbd2bu);
    (void)x86_sub(c, c.r[2], 0x3Au, 0, 4);
    // 0bbd2e  ja 0xbbf6a
    X86_AT(c, 0xbbd2eu);
    if (x86_cc(c, 7)) { goto L_bbf6a; }
    X86_TICK(c, 7);
    // 0bbd34  jmp dword ptr cs:[edx*4 + 0xbbd3c]
    X86_AT(c, 0xbbd34u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBBD3Cu)));
      switch (t) {
      case 0xbbe28u: goto L_bbe28;
      case 0xbbe31u: goto L_bbe31;
      case 0xbbe3au: goto L_bbe3a;
      case 0xbbe43u: goto L_bbe43;
      case 0xbbe4cu: goto L_bbe4c;
      case 0xbbe55u: goto L_bbe55;
      case 0xbbe5eu: goto L_bbe5e;
      case 0xbbe67u: goto L_bbe67;
      case 0xbbe70u: goto L_bbe70;
      case 0xbbe79u: goto L_bbe79;
      case 0xbbe82u: goto L_bbe82;
      case 0xbbe8bu: goto L_bbe8b;
      case 0xbbe94u: goto L_bbe94;
      case 0xbbe9du: goto L_bbe9d;
      case 0xbbea6u: goto L_bbea6;
      case 0xbbeafu: goto L_bbeaf;
      case 0xbbeb8u: goto L_bbeb8;
      case 0xbbec1u: goto L_bbec1;
      case 0xbbecau: goto L_bbeca;
      case 0xbbed3u: goto L_bbed3;
      case 0xbbedcu: goto L_bbedc;
      case 0xbbee5u: goto L_bbee5;
      case 0xbbeeeu: goto L_bbeee;
      case 0xbbef7u: goto L_bbef7;
      case 0xbbf00u: goto L_bbf00;
      case 0xbbf09u: goto L_bbf09;
      case 0xbbf12u: goto L_bbf12;
      case 0xbbf18u: goto L_bbf18;
      case 0xbbf1eu: goto L_bbf1e;
      case 0xbbf24u: goto L_bbf24;
      case 0xbbf2au: goto L_bbf2a;
      case 0xbbf30u: goto L_bbf30;
      case 0xbbf36u: goto L_bbf36;
      case 0xbbf3cu: goto L_bbf3c;
      case 0xbbf42u: goto L_bbf42;
      case 0xbbf48u: goto L_bbf48;
      case 0xbbf4eu: goto L_bbf4e;
      case 0xbbf54u: goto L_bbf54;
      case 0xbbf5au: goto L_bbf5a;
      case 0xbbf60u: goto L_bbf60;
      case 0xbbf66u: goto L_bbf66;
      case 0xbbf6au: goto L_bbf6a;
      default: x86_jump(c, t); return; } }
L_bbe28:
    X86_TICK(c, 9);
    // 0bbe28  mov si, 0x4081
    X86_AT(c, 0xbbe28u);
    s16(c, 6, 0x4081u);
    // 0bbe2c  jmp 0xbbf6a
    X86_AT(c, 0xbbe2cu);
    goto L_bbf6a;
L_bbe31:
    X86_TICK(c, 9);
    // 0bbe31  mov si, 0x4681
    X86_AT(c, 0xbbe31u);
    s16(c, 6, 0x4681u);
    // 0bbe35  jmp 0xbbf6a
    X86_AT(c, 0xbbe35u);
    goto L_bbf6a;
L_bbe3a:
    X86_TICK(c, 9);
    // 0bbe3a  mov si, 0x75eb
    X86_AT(c, 0xbbe3au);
    s16(c, 6, 0x75EBu);
    // 0bbe3e  jmp 0xbbf6a
    X86_AT(c, 0xbbe3eu);
    goto L_bbf6a;
L_bbe43:
    X86_TICK(c, 9);
    // 0bbe43  mov si, 0x74eb
    X86_AT(c, 0xbbe43u);
    s16(c, 6, 0x74EBu);
    // 0bbe47  jmp 0xbbf6a
    X86_AT(c, 0xbbe47u);
    goto L_bbf6a;
L_bbe4c:
    X86_TICK(c, 9);
    // 0bbe4c  mov si, 0x5e81
    X86_AT(c, 0xbbe4cu);
    s16(c, 6, 0x5E81u);
    // 0bbe50  jmp 0xbbf6a
    X86_AT(c, 0xbbe50u);
    goto L_bbf6a;
L_bbe55:
    X86_TICK(c, 9);
    // 0bbe55  mov si, 0x80eb
    X86_AT(c, 0xbbe55u);
    s16(c, 6, 0x80EBu);
    // 0bbe59  jmp 0xbbf6a
    X86_AT(c, 0xbbe59u);
    goto L_bbf6a;
L_bbe5e:
    X86_TICK(c, 9);
    // 0bbe5e  mov si, 0x76eb
    X86_AT(c, 0xbbe5eu);
    s16(c, 6, 0x76EBu);
    // 0bbe62  jmp 0xbbf6a
    X86_AT(c, 0xbbe62u);
    goto L_bbf6a;
L_bbe67:
    X86_TICK(c, 9);
    // 0bbe67  mov si, 0x77eb
    X86_AT(c, 0xbbe67u);
    s16(c, 6, 0x77EBu);
    // 0bbe6b  jmp 0xbbf6a
    X86_AT(c, 0xbbe6bu);
    goto L_bbf6a;
L_bbe70:
    X86_TICK(c, 9);
    // 0bbe70  mov si, 0x78eb
    X86_AT(c, 0xbbe70u);
    s16(c, 6, 0x78EBu);
    // 0bbe74  jmp 0xbbf6a
    X86_AT(c, 0xbbe74u);
    goto L_bbf6a;
L_bbe79:
    X86_TICK(c, 9);
    // 0bbe79  mov si, 0x79eb
    X86_AT(c, 0xbbe79u);
    s16(c, 6, 0x79EBu);
    // 0bbe7d  jmp 0xbbf6a
    X86_AT(c, 0xbbe7du);
    goto L_bbf6a;
L_bbe82:
    X86_TICK(c, 9);
    // 0bbe82  mov si, 0x7aeb
    X86_AT(c, 0xbbe82u);
    s16(c, 6, 0x7AEBu);
    // 0bbe86  jmp 0xbbf6a
    X86_AT(c, 0xbbe86u);
    goto L_bbf6a;
L_bbe8b:
    X86_TICK(c, 9);
    // 0bbe8b  mov si, 0x7beb
    X86_AT(c, 0xbbe8bu);
    s16(c, 6, 0x7BEBu);
    // 0bbe8f  jmp 0xbbf6a
    X86_AT(c, 0xbbe8fu);
    goto L_bbf6a;
L_bbe94:
    X86_TICK(c, 9);
    // 0bbe94  mov si, 0x7ceb
    X86_AT(c, 0xbbe94u);
    s16(c, 6, 0x7CEBu);
    // 0bbe98  jmp 0xbbf6a
    X86_AT(c, 0xbbe98u);
    goto L_bbf6a;
L_bbe9d:
    X86_TICK(c, 9);
    // 0bbe9d  mov si, 0x7deb
    X86_AT(c, 0xbbe9du);
    s16(c, 6, 0x7DEBu);
    // 0bbea1  jmp 0xbbf6a
    X86_AT(c, 0xbbea1u);
    goto L_bbf6a;
L_bbea6:
    X86_TICK(c, 9);
    // 0bbea6  mov si, 0x7eeb
    X86_AT(c, 0xbbea6u);
    s16(c, 6, 0x7EEBu);
    // 0bbeaa  jmp 0xbbf6a
    X86_AT(c, 0xbbeaau);
    goto L_bbf6a;
L_bbeaf:
    X86_TICK(c, 9);
    // 0bbeaf  mov si, 0x40eb
    X86_AT(c, 0xbbeafu);
    s16(c, 6, 0x40EBu);
    // 0bbeb3  jmp 0xbbf6a
    X86_AT(c, 0xbbeb3u);
    goto L_bbf6a;
L_bbeb8:
    X86_TICK(c, 9);
    // 0bbeb8  mov si, 0x41eb
    X86_AT(c, 0xbbeb8u);
    s16(c, 6, 0x41EBu);
    // 0bbebc  jmp 0xbbf6a
    X86_AT(c, 0xbbebcu);
    goto L_bbf6a;
L_bbec1:
    X86_TICK(c, 9);
    // 0bbec1  mov si, 0x42eb
    X86_AT(c, 0xbbec1u);
    s16(c, 6, 0x42EBu);
    // 0bbec5  jmp 0xbbf6a
    X86_AT(c, 0xbbec5u);
    goto L_bbf6a;
L_bbeca:
    X86_TICK(c, 9);
    // 0bbeca  mov si, 0x43eb
    X86_AT(c, 0xbbecau);
    s16(c, 6, 0x43EBu);
    // 0bbece  jmp 0xbbf6a
    X86_AT(c, 0xbbeceu);
    goto L_bbf6a;
L_bbed3:
    X86_TICK(c, 9);
    // 0bbed3  mov si, 0x44eb
    X86_AT(c, 0xbbed3u);
    s16(c, 6, 0x44EBu);
    // 0bbed7  jmp 0xbbf6a
    X86_AT(c, 0xbbed7u);
    goto L_bbf6a;
L_bbedc:
    X86_TICK(c, 9);
    // 0bbedc  mov si, 0x45eb
    X86_AT(c, 0xbbedcu);
    s16(c, 6, 0x45EBu);
    // 0bbee0  jmp 0xbbf6a
    X86_AT(c, 0xbbee0u);
    goto L_bbf6a;
L_bbee5:
    X86_TICK(c, 9);
    // 0bbee5  mov si, 0x46eb
    X86_AT(c, 0xbbee5u);
    s16(c, 6, 0x46EBu);
    // 0bbee9  jmp 0xbbf6a
    X86_AT(c, 0xbbee9u);
    goto L_bbf6a;
L_bbeee:
    X86_TICK(c, 9);
    // 0bbeee  mov si, 0x47eb
    X86_AT(c, 0xbbeeeu);
    s16(c, 6, 0x47EBu);
    // 0bbef2  jmp 0xbbf6a
    X86_AT(c, 0xbbef2u);
    goto L_bbf6a;
L_bbef7:
    X86_TICK(c, 9);
    // 0bbef7  mov si, 0x48eb
    X86_AT(c, 0xbbef7u);
    s16(c, 6, 0x48EBu);
    // 0bbefb  jmp 0xbbf6a
    X86_AT(c, 0xbbefbu);
    goto L_bbf6a;
L_bbf00:
    X86_TICK(c, 9);
    // 0bbf00  mov si, 0x49eb
    X86_AT(c, 0xbbf00u);
    s16(c, 6, 0x49EBu);
    // 0bbf04  jmp 0xbbf6a
    X86_AT(c, 0xbbf04u);
    goto L_bbf6a;
L_bbf09:
    X86_TICK(c, 9);
    // 0bbf09  mov si, 0x4aeb
    X86_AT(c, 0xbbf09u);
    s16(c, 6, 0x4AEBu);
    // 0bbf0d  jmp 0xbbf6a
    X86_AT(c, 0xbbf0du);
    goto L_bbf6a;
L_bbf12:
    X86_TICK(c, 9);
    // 0bbf12  mov si, 0x4beb
    X86_AT(c, 0xbbf12u);
    s16(c, 6, 0x4BEBu);
    // 0bbf16  jmp 0xbbf6a
    X86_AT(c, 0xbbf16u);
    goto L_bbf6a;
L_bbf18:
    X86_TICK(c, 9);
    // 0bbf18  mov si, 0x4ceb
    X86_AT(c, 0xbbf18u);
    s16(c, 6, 0x4CEBu);
    // 0bbf1c  jmp 0xbbf6a
    X86_AT(c, 0xbbf1cu);
    goto L_bbf6a;
L_bbf1e:
    X86_TICK(c, 9);
    // 0bbf1e  mov si, 0x4deb
    X86_AT(c, 0xbbf1eu);
    s16(c, 6, 0x4DEBu);
    // 0bbf22  jmp 0xbbf6a
    X86_AT(c, 0xbbf22u);
    goto L_bbf6a;
L_bbf24:
    X86_TICK(c, 9);
    // 0bbf24  mov si, 0x4eeb
    X86_AT(c, 0xbbf24u);
    s16(c, 6, 0x4EEBu);
    // 0bbf28  jmp 0xbbf6a
    X86_AT(c, 0xbbf28u);
    goto L_bbf6a;
L_bbf2a:
    X86_TICK(c, 9);
    // 0bbf2a  mov si, 0x4feb
    X86_AT(c, 0xbbf2au);
    s16(c, 6, 0x4FEBu);
    // 0bbf2e  jmp 0xbbf6a
    X86_AT(c, 0xbbf2eu);
    goto L_bbf6a;
L_bbf30:
    X86_TICK(c, 9);
    // 0bbf30  mov si, 0x50eb
    X86_AT(c, 0xbbf30u);
    s16(c, 6, 0x50EBu);
    // 0bbf34  jmp 0xbbf6a
    X86_AT(c, 0xbbf34u);
    goto L_bbf6a;
L_bbf36:
    X86_TICK(c, 9);
    // 0bbf36  mov si, 0x51eb
    X86_AT(c, 0xbbf36u);
    s16(c, 6, 0x51EBu);
    // 0bbf3a  jmp 0xbbf6a
    X86_AT(c, 0xbbf3au);
    goto L_bbf6a;
L_bbf3c:
    X86_TICK(c, 9);
    // 0bbf3c  mov si, 0x52eb
    X86_AT(c, 0xbbf3cu);
    s16(c, 6, 0x52EBu);
    // 0bbf40  jmp 0xbbf6a
    X86_AT(c, 0xbbf40u);
    goto L_bbf6a;
L_bbf42:
    X86_TICK(c, 9);
    // 0bbf42  mov si, 0x53eb
    X86_AT(c, 0xbbf42u);
    s16(c, 6, 0x53EBu);
    // 0bbf46  jmp 0xbbf6a
    X86_AT(c, 0xbbf46u);
    goto L_bbf6a;
L_bbf48:
    X86_TICK(c, 9);
    // 0bbf48  mov si, 0x54eb
    X86_AT(c, 0xbbf48u);
    s16(c, 6, 0x54EBu);
    // 0bbf4c  jmp 0xbbf6a
    X86_AT(c, 0xbbf4cu);
    goto L_bbf6a;
L_bbf4e:
    X86_TICK(c, 9);
    // 0bbf4e  mov si, 0x55eb
    X86_AT(c, 0xbbf4eu);
    s16(c, 6, 0x55EBu);
    // 0bbf52  jmp 0xbbf6a
    X86_AT(c, 0xbbf52u);
    goto L_bbf6a;
L_bbf54:
    X86_TICK(c, 9);
    // 0bbf54  mov si, 0x56eb
    X86_AT(c, 0xbbf54u);
    s16(c, 6, 0x56EBu);
    // 0bbf58  jmp 0xbbf6a
    X86_AT(c, 0xbbf58u);
    goto L_bbf6a;
L_bbf5a:
    X86_TICK(c, 9);
    // 0bbf5a  mov si, 0x57eb
    X86_AT(c, 0xbbf5au);
    s16(c, 6, 0x57EBu);
    // 0bbf5e  jmp 0xbbf6a
    X86_AT(c, 0xbbf5eu);
    goto L_bbf6a;
L_bbf60:
    X86_TICK(c, 9);
    // 0bbf60  mov si, 0x58eb
    X86_AT(c, 0xbbf60u);
    s16(c, 6, 0x58EBu);
    // 0bbf64  jmp 0xbbf6a
    X86_AT(c, 0xbbf64u);
    goto L_bbf6a;
L_bbf66:
    X86_TICK(c, 2);
    // 0bbf66  mov si, 0x59eb
    X86_AT(c, 0xbbf66u);
    s16(c, 6, 0x59EBu);
L_bbf6a:
    X86_TICK(c, 7);
    // 0bbf6a  and si, si
    X86_AT(c, 0xbbf6au);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & (c.r[6] & 0xFFFFu), 2)); }
    // 0bbf6d  je 0xbbfd8
    X86_AT(c, 0xbbf6du);
    if (x86_cc(c, 4)) { goto L_bbfd8; }
    X86_TICK(c, 67);
    // 0bbf6f  mov eax, 0x46200
    X86_AT(c, 0xbbf6fu);
    c.r[0] = 0x46200u;
    // 0bbf74  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xbbf74u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0bbf77  lea edx, [edx + edx*2]
    X86_AT(c, 0xbbf77u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0bbf7a  lea ecx, [edx + edx*8]
    X86_AT(c, 0xbbf7au);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0bbf7d  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xbbf7du);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0bbf80  lea edi, [eax + ecx*1 + 0x714]
    X86_AT(c, 0xbbf80u);
    c.r[7] = (uint32_t)(c.r[0] + c.r[1] + 0x714u);
    // 0bbf87  mov dx, word ptr [edi + 1]
    X86_AT(c, 0xbbf87u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0bbf8b  add dx, 4
    X86_AT(c, 0xbbf8bu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x4u, 0, 2)); }
    // 0bbf8f  mov ebx, dword ptr [edi + 0x19]
    X86_AT(c, 0xbbf8fu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x19u)));
    // 0bbf92  shl ebx, 3
    X86_AT(c, 0xbbf92u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 0bbf95  add ebx, edx
    X86_AT(c, 0xbbf95u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[2], 0, 4); }
    // 0bbf97  mov word ptr [eax + 0x564e0], bx
    X86_AT(c, 0xbbf97u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x564E0u)), (c.r[3] & 0xFFFFu));
    // 0bbf9e  mov dx, word ptr [edi + 5]
    X86_AT(c, 0xbbf9eu);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))));
    // 0bbfa2  add dx, 0x11
    X86_AT(c, 0xbbfa2u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x11u, 0, 2)); }
    // 0bbfa6  mov ebx, dword ptr [edi + 0x1d]
    X86_AT(c, 0xbbfa6u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Du)));
    // 0bbfa9  shl ebx, 4
    X86_AT(c, 0xbbfa9u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 0bbfac  add ebx, edx
    X86_AT(c, 0xbbfacu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[2], 0, 4); }
    // 0bbfae  mov word ptr [eax + 0x564e2], bx
    X86_AT(c, 0xbbfaeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x564E2u)), (c.r[3] & 0xFFFFu));
    // 0bbfb5  mov word ptr [eax + 0x564e4], 2
    X86_AT(c, 0xbbfb5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x564E4u)), 0x2u);
    // 0bbfbe  mov word ptr [eax + 0x564e6], si
    X86_AT(c, 0xbbfbeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x564E6u)), (c.r[6] & 0xFFFFu));
    // 0bbfc5  lea edx, [eax + 0x564e0]
    X86_AT(c, 0xbbfc5u);
    c.r[2] = (uint32_t)(c.r[0] + 0x564E0u);
    // 0bbfcb  push edx
    X86_AT(c, 0xbbfcbu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0bbfcc  add eax, 8
    X86_AT(c, 0xbbfccu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8u, 0, 4); }
    // 0bbfcf  push eax
    X86_AT(c, 0xbbfcfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bbfd0  call 0xa7d
    X86_AT(c, 0xbbfd0u);
    push32(c, 0xbbfd5u); x86_call_known(c, 0xa7du, f_00000a7d); X86_RET(c, 0xbbfd5u);
    X86_TICK(c, 2);
    // 0bbfd5  add esp, 8
    X86_AT(c, 0xbbfd5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_bbfd8:
    X86_TICK(c, 28);
    // 0bbfd8  pop edi
    X86_AT(c, 0xbbfd8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bbfd9  pop esi
    X86_AT(c, 0xbbfd9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bbfda  pop ebx
    X86_AT(c, 0xbbfdau);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0bbfdb  leave 
    X86_AT(c, 0xbbfdbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bbfdc  ret 
    X86_AT(c, 0xbbfdcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbbd1cu, "ran off the end of a function");
}
void f_000bbf6a(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0bbf6a  and si, si
    X86_AT(c, 0xbbf6au);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & (c.r[6] & 0xFFFFu), 2)); }
    // 0bbf6d  je 0xbbfd8
    X86_AT(c, 0xbbf6du);
    if (x86_cc(c, 4)) { goto L_bbfd8; }
    X86_TICK(c, 67);
    // 0bbf6f  mov eax, 0x46200
    X86_AT(c, 0xbbf6fu);
    c.r[0] = 0x46200u;
    // 0bbf74  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xbbf74u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0bbf77  lea edx, [edx + edx*2]
    X86_AT(c, 0xbbf77u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0bbf7a  lea ecx, [edx + edx*8]
    X86_AT(c, 0xbbf7au);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0bbf7d  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xbbf7du);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0bbf80  lea edi, [eax + ecx*1 + 0x714]
    X86_AT(c, 0xbbf80u);
    c.r[7] = (uint32_t)(c.r[0] + c.r[1] + 0x714u);
    // 0bbf87  mov dx, word ptr [edi + 1]
    X86_AT(c, 0xbbf87u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0bbf8b  add dx, 4
    X86_AT(c, 0xbbf8bu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x4u, 0, 2)); }
    // 0bbf8f  mov ebx, dword ptr [edi + 0x19]
    X86_AT(c, 0xbbf8fu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x19u)));
    // 0bbf92  shl ebx, 3
    X86_AT(c, 0xbbf92u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 0bbf95  add ebx, edx
    X86_AT(c, 0xbbf95u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[2], 0, 4); }
    // 0bbf97  mov word ptr [eax + 0x564e0], bx
    X86_AT(c, 0xbbf97u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x564E0u)), (c.r[3] & 0xFFFFu));
    // 0bbf9e  mov dx, word ptr [edi + 5]
    X86_AT(c, 0xbbf9eu);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))));
    // 0bbfa2  add dx, 0x11
    X86_AT(c, 0xbbfa2u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x11u, 0, 2)); }
    // 0bbfa6  mov ebx, dword ptr [edi + 0x1d]
    X86_AT(c, 0xbbfa6u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Du)));
    // 0bbfa9  shl ebx, 4
    X86_AT(c, 0xbbfa9u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 0bbfac  add ebx, edx
    X86_AT(c, 0xbbfacu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[2], 0, 4); }
    // 0bbfae  mov word ptr [eax + 0x564e2], bx
    X86_AT(c, 0xbbfaeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x564E2u)), (c.r[3] & 0xFFFFu));
    // 0bbfb5  mov word ptr [eax + 0x564e4], 2
    X86_AT(c, 0xbbfb5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x564E4u)), 0x2u);
    // 0bbfbe  mov word ptr [eax + 0x564e6], si
    X86_AT(c, 0xbbfbeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x564E6u)), (c.r[6] & 0xFFFFu));
    // 0bbfc5  lea edx, [eax + 0x564e0]
    X86_AT(c, 0xbbfc5u);
    c.r[2] = (uint32_t)(c.r[0] + 0x564E0u);
    // 0bbfcb  push edx
    X86_AT(c, 0xbbfcbu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0bbfcc  add eax, 8
    X86_AT(c, 0xbbfccu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8u, 0, 4); }
    // 0bbfcf  push eax
    X86_AT(c, 0xbbfcfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bbfd0  call 0xa7d
    X86_AT(c, 0xbbfd0u);
    push32(c, 0xbbfd5u); x86_call_known(c, 0xa7du, f_00000a7d); X86_RET(c, 0xbbfd5u);
    X86_TICK(c, 2);
    // 0bbfd5  add esp, 8
    X86_AT(c, 0xbbfd5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_bbfd8:
    X86_TICK(c, 28);
    // 0bbfd8  pop edi
    X86_AT(c, 0xbbfd8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bbfd9  pop esi
    X86_AT(c, 0xbbfd9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bbfda  pop ebx
    X86_AT(c, 0xbbfdau);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0bbfdb  leave 
    X86_AT(c, 0xbbfdbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bbfdc  ret 
    X86_AT(c, 0xbbfdcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbbf6au, "ran off the end of a function");
}
void f_000bbfe0(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0bbfe0  push ebp
    X86_AT(c, 0xbbfe0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bbfe1  mov ebp, esp
    X86_AT(c, 0xbbfe1u);
    c.r[5] = c.r[4];
    // 0bbfe3  push ebx
    X86_AT(c, 0xbbfe3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bbfe4  push esi
    X86_AT(c, 0xbbfe4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bbfe5  push edi
    X86_AT(c, 0xbbfe5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bbfe6  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xbbfe6u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0bbfe9  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xbbfe9u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0bbfec  lea eax, [edi + edi*2]
    X86_AT(c, 0xbbfecu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0bbfef  lea edx, [eax + eax*8]
    X86_AT(c, 0xbbfefu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0bbff2  lea edx, [eax + edx*2]
    X86_AT(c, 0xbbff2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0bbff5  lea ebx, [edx + 0x46914]
    X86_AT(c, 0xbbff5u);
    c.r[3] = (uint32_t)(c.r[2] + 0x46914u);
L_bbffb:
    X86_TICK(c, 12);
    // 0bbffb  cmp byte ptr [esi], 0
    X86_AT(c, 0xbbffbu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6]))), 0x0u, 0, 1);
    // 0bbffe  je 0xbc039
    X86_AT(c, 0xbbffeu);
    if (x86_cc(c, 4)) { goto L_bc039; }
    X86_TICK(c, 17);
    // 0bc000  mov eax, dword ptr [ebx + 0x19]
    X86_AT(c, 0xbc000u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)));
    // 0bc003  inc eax
    X86_AT(c, 0xbc003u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0bc004  cmp eax, dword ptr [ebx + 0x11]
    X86_AT(c, 0xbc004u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x11u))), 0, 4);
    // 0bc007  jle 0xbc026
    X86_AT(c, 0xbc007u);
    if (x86_cc(c, 14)) { goto L_bc026; }
    X86_TICK(c, 17);
    // 0bc009  mov dword ptr [ebx + 0x19], 0
    X86_AT(c, 0xbc009u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x0u);
    // 0bc010  mov eax, dword ptr [ebx + 0x1d]
    X86_AT(c, 0xbc010u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)));
    // 0bc013  cmp eax, dword ptr [ebx + 0x15]
    X86_AT(c, 0xbc013u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x15u))), 0, 4);
    // 0bc016  jne 0xbc023
    X86_AT(c, 0xbc016u);
    if (x86_cc(c, 5)) { goto L_bc023; }
    X86_TICK(c, 9);
    // 0bc018  push edi
    X86_AT(c, 0xbc018u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bc019  call 0xbbabc
    X86_AT(c, 0xbc019u);
    push32(c, 0xbc01eu); x86_call_known(c, 0xbbabcu, f_000bbabc); X86_RET(c, 0xbc01eu);
    X86_TICK(c, 9);
    // 0bc01e  add esp, 4
    X86_AT(c, 0xbc01eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0bc021  jmp 0xbc026
    X86_AT(c, 0xbc021u);
    goto L_bc026;
L_bc023:
    X86_TICK(c, 6);
    // 0bc023  inc dword ptr [ebx + 0x1d]
    X86_AT(c, 0xbc023u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_bc026:
    X86_TICK(c, 15);
    // 0bc026  mov al, byte ptr [esi]
    X86_AT(c, 0xbc026u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0bc028  push eax
    X86_AT(c, 0xbc028u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bc029  push edi
    X86_AT(c, 0xbc029u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bc02a  call 0xbbd1c
    X86_AT(c, 0xbc02au);
    push32(c, 0xbc02fu); x86_call_known(c, 0xbbd1cu, f_000bbd1c); X86_RET(c, 0xbc02fu);
    X86_TICK(c, 18);
    // 0bc02f  add dword ptr [ebx + 0x19], 2
    X86_AT(c, 0xbc02fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x2u, 0, 4)); }
    // 0bc033  inc esi
    X86_AT(c, 0xbc033u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0bc034  add esp, 8
    X86_AT(c, 0xbc034u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0bc037  jmp 0xbbffb
    X86_AT(c, 0xbc037u);
    X86_POLL(c, 0xbbffbu); goto L_bbffb;
L_bc039:
    X86_TICK(c, 28);
    // 0bc039  pop edi
    X86_AT(c, 0xbc039u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bc03a  pop esi
    X86_AT(c, 0xbc03au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bc03b  pop ebx
    X86_AT(c, 0xbc03bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0bc03c  leave 
    X86_AT(c, 0xbc03cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bc03d  ret 
    X86_AT(c, 0xbc03du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbbfe0u, "ran off the end of a function");
}
void f_000bc040(X86Cpu& c) {
    X86_TICK(c, 73);
    // 0bc040  push ebp
    X86_AT(c, 0xbc040u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bc041  mov ebp, esp
    X86_AT(c, 0xbc041u);
    c.r[5] = c.r[4];
    // 0bc043  sub esp, 8
    X86_AT(c, 0xbc043u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0bc046  push edi
    X86_AT(c, 0xbc046u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bc047  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xbc047u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0bc04a  lea eax, [eax + eax*2]
    X86_AT(c, 0xbc04au);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0bc04d  lea edx, [eax + eax*8]
    X86_AT(c, 0xbc04du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0bc050  lea edx, [eax + edx*2]
    X86_AT(c, 0xbc050u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0bc053  lea edi, [edx + 0x46914]
    X86_AT(c, 0xbc053u);
    c.r[7] = (uint32_t)(c.r[2] + 0x46914u);
    // 0bc059  mov ax, word ptr [edi + 1]
    X86_AT(c, 0xbc059u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0bc05d  add ax, 4
    X86_AT(c, 0xbc05du);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x4u, 0, 2)); }
    // 0bc061  mov edx, dword ptr [edi + 0x19]
    X86_AT(c, 0xbc061u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x19u)));
    // 0bc064  shl edx, 3
    X86_AT(c, 0xbc064u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0bc067  add edx, eax
    X86_AT(c, 0xbc067u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0bc069  mov word ptr [ebp - 8], dx
    X86_AT(c, 0xbc069u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), (c.r[2] & 0xFFFFu));
    // 0bc06d  mov ax, word ptr [edi + 5]
    X86_AT(c, 0xbc06du);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))));
    // 0bc071  add ax, 0x11
    X86_AT(c, 0xbc071u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x11u, 0, 2)); }
    // 0bc075  mov edx, dword ptr [edi + 0x1d]
    X86_AT(c, 0xbc075u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Du)));
    // 0bc078  shl edx, 4
    X86_AT(c, 0xbc078u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0bc07b  add edx, eax
    X86_AT(c, 0xbc07bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0bc07d  mov word ptr [ebp - 6], dx
    X86_AT(c, 0xbc07du);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), (c.r[2] & 0xFFFFu));
    // 0bc081  sub eax, eax
    X86_AT(c, 0xbc081u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0bc083  mov word ptr [ebp - 4], ax
    X86_AT(c, 0xbc083u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), (c.r[0] & 0xFFFFu));
    // 0bc087  lea edx, [ebp - 8]
    X86_AT(c, 0xbc087u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0bc08a  push edx
    X86_AT(c, 0xbc08au);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0bc08b  push eax
    X86_AT(c, 0xbc08bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bc08c  push 0x46208
    X86_AT(c, 0xbc08cu);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0bc091  call 0xac5
    X86_AT(c, 0xbc091u);
    push32(c, 0xbc096u); x86_call_known(c, 0xac5u, f_00000ac5); X86_RET(c, 0xbc096u);
    X86_TICK(c, 18);
    // 0bc096  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xbc096u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0bc099  push 0x10
    X86_AT(c, 0xbc099u);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0bc09b  push 0x10
    X86_AT(c, 0xbc09bu);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0bc09d  push 0x46208
    X86_AT(c, 0xbc09du);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0bc0a2  call 0xb5d
    X86_AT(c, 0xbc0a2u);
    push32(c, 0xbc0a7u); x86_call_known(c, 0xb5du, f_00000b5d); X86_RET(c, 0xbc0a7u);
    X86_TICK(c, 22);
    // 0bc0a7  add esp, 0x1c
    X86_AT(c, 0xbc0a7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0bc0aa  pop edi
    X86_AT(c, 0xbc0aau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bc0ab  leave 
    X86_AT(c, 0xbc0abu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bc0ac  ret 
    X86_AT(c, 0xbc0acu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbc040u, "ran off the end of a function");
}
void f_000bc0b0(X86Cpu& c) {
    X86_TICK(c, 91);
    // 0bc0b0  push ebp
    X86_AT(c, 0xbc0b0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bc0b1  mov ebp, esp
    X86_AT(c, 0xbc0b1u);
    c.r[5] = c.r[4];
    // 0bc0b3  push ebx
    X86_AT(c, 0xbc0b3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bc0b4  push esi
    X86_AT(c, 0xbc0b4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bc0b5  push edi
    X86_AT(c, 0xbc0b5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bc0b6  mov eax, 0x46200
    X86_AT(c, 0xbc0b6u);
    c.r[0] = 0x46200u;
    // 0bc0bb  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xbc0bbu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0bc0be  lea edx, [edx + edx*2]
    X86_AT(c, 0xbc0beu);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0bc0c1  lea ecx, [edx + edx*8]
    X86_AT(c, 0xbc0c1u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0bc0c4  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xbc0c4u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0bc0c7  lea edi, [eax + ecx*1 + 0x714]
    X86_AT(c, 0xbc0c7u);
    c.r[7] = (uint32_t)(c.r[0] + c.r[1] + 0x714u);
    // 0bc0ce  mov dx, word ptr [edi + 1]
    X86_AT(c, 0xbc0ceu);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0bc0d2  add dx, 4
    X86_AT(c, 0xbc0d2u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x4u, 0, 2)); }
    // 0bc0d6  mov esi, dword ptr [edi + 0x19]
    X86_AT(c, 0xbc0d6u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x19u)));
    // 0bc0d9  shl esi, 3
    X86_AT(c, 0xbc0d9u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 0bc0dc  add esi, edx
    X86_AT(c, 0xbc0dcu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[2], 0, 4); }
    // 0bc0de  mov word ptr [eax + 0x564ec], si
    X86_AT(c, 0xbc0deu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x564ECu)), (c.r[6] & 0xFFFFu));
    // 0bc0e5  mov dx, word ptr [edi + 5]
    X86_AT(c, 0xbc0e5u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))));
    // 0bc0e9  add dx, 0x11
    X86_AT(c, 0xbc0e9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x11u, 0, 2)); }
    // 0bc0ed  mov esi, dword ptr [edi + 0x1d]
    X86_AT(c, 0xbc0edu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Du)));
    // 0bc0f0  shl esi, 4
    X86_AT(c, 0xbc0f0u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[6] = r; }
    // 0bc0f3  add esi, edx
    X86_AT(c, 0xbc0f3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[2], 0, 4); }
    // 0bc0f5  mov word ptr [eax + 0x564ee], si
    X86_AT(c, 0xbc0f5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x564EEu)), (c.r[6] & 0xFFFFu));
    // 0bc0fc  mov word ptr [eax + 0x564f0], 2
    X86_AT(c, 0xbc0fcu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x564F0u)), 0x2u);
    // 0bc105  mov edx, dword ptr [eax]
    X86_AT(c, 0xbc105u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0bc107  mov dx, word ptr [eax + edx*2 + 0x564f8]
    X86_AT(c, 0xbc107u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] * 2 + 0x564F8u))));
    // 0bc10f  mov word ptr [eax + 0x564f2], dx
    X86_AT(c, 0xbc10fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x564F2u)), (c.r[2] & 0xFFFFu));
    // 0bc116  mov dword ptr [eax + 0x608], 0
    X86_AT(c, 0xbc116u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x608u)), 0x0u);
    // 0bc120  lea edx, [eax + 0x608]
    X86_AT(c, 0xbc120u);
    c.r[2] = (uint32_t)(c.r[0] + 0x608u);
    // 0bc126  push edx
    X86_AT(c, 0xbc126u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0bc127  push 1
    X86_AT(c, 0xbc127u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bc129  lea ebx, [eax + 8]
    X86_AT(c, 0xbc129u);
    c.r[3] = (uint32_t)(c.r[0] + 0x8u);
    // 0bc12c  push ebx
    X86_AT(c, 0xbc12cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bc12d  mov esi, eax
    X86_AT(c, 0xbc12du);
    c.r[6] = c.r[0];
    // 0bc12f  call 0x19c
    X86_AT(c, 0xbc12fu);
    push32(c, 0xbc134u); x86_call_known(c, 0x19cu, f_0000019c); X86_RET(c, 0xbc134u);
    X86_TICK(c, 13);
    // 0bc134  add esi, 0x564ec
    X86_AT(c, 0xbc134u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x564ECu, 0, 4); }
    // 0bc13a  push esi
    X86_AT(c, 0xbc13au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bc13b  push ebx
    X86_AT(c, 0xbc13bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bc13c  call 0xa7d
    X86_AT(c, 0xbc13cu);
    push32(c, 0xbc141u); x86_call_known(c, 0xa7du, f_00000a7d); X86_RET(c, 0xbc141u);
    X86_TICK(c, 30);
    // 0bc141  add esp, 0x14
    X86_AT(c, 0xbc141u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0bc144  pop edi
    X86_AT(c, 0xbc144u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bc145  pop esi
    X86_AT(c, 0xbc145u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bc146  pop ebx
    X86_AT(c, 0xbc146u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0bc147  leave 
    X86_AT(c, 0xbc147u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bc148  ret 
    X86_AT(c, 0xbc148u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbc0b0u, "ran off the end of a function");
}
void f_000bc14c(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0bc14c  inc dword ptr [0x46910]
    X86_AT(c, 0xbc14cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x46910u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bc152  cmp dword ptr [0x46910], 0x1e
    X86_AT(c, 0xbc152u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x46910u))), 0x1Eu, 0, 4);
    // 0bc159  jl 0xbc170
    X86_AT(c, 0xbc159u);
    if (x86_cc(c, 12)) { goto L_bc170; }
    X86_TICK(c, 24);
    // 0bc15b  sub eax, eax
    X86_AT(c, 0xbc15bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0bc15d  mov dword ptr [0x46910], eax
    X86_AT(c, 0xbc15du);
    wr32((c.sbase[3] + (uint32_t)(0x46910u)), c.r[0]);
    // 0bc162  mov edx, 0x46200
    X86_AT(c, 0xbc162u);
    c.r[2] = 0x46200u;
    // 0bc167  inc dword ptr [edx]
    X86_AT(c, 0xbc167u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2])); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bc169  cmp dword ptr [edx], 4
    X86_AT(c, 0xbc169u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2]))), 0x4u, 0, 4);
    // 0bc16c  jne 0xbc170
    X86_AT(c, 0xbc16cu);
    if (x86_cc(c, 5)) { goto L_bc170; }
    X86_TICK(c, 2);
    // 0bc16e  mov dword ptr [edx], eax
    X86_AT(c, 0xbc16eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
L_bc170:
    X86_TICK(c, 10);
    // 0bc170  ret 
    X86_AT(c, 0xbc170u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbc14cu, "ran off the end of a function");
}
void f_000bc174(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0bc174  push ebp
    X86_AT(c, 0xbc174u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bc175  mov ebp, esp
    X86_AT(c, 0xbc175u);
    c.r[5] = c.r[4];
    // 0bc177  push ebx
    X86_AT(c, 0xbc177u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bc178  push esi
    X86_AT(c, 0xbc178u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bc179  push edi
    X86_AT(c, 0xbc179u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bc17a  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xbc17au);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0bc17d  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xbc17du);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0bc180  mov ebx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xbc180u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0bc183  and esi, esi
    X86_AT(c, 0xbc183u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0bc185  jl 0xbc1b9
    X86_AT(c, 0xbc185u);
    if (x86_cc(c, 12)) { goto L_bc1b9; }
    X86_TICK(c, 19);
    // 0bc187  mov eax, 0x46200
    X86_AT(c, 0xbc187u);
    c.r[0] = 0x46200u;
    // 0bc18c  lea edx, [edi + edi*2]
    X86_AT(c, 0xbc18cu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0bc18f  lea ecx, [edx + edx*8]
    X86_AT(c, 0xbc18fu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0bc192  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xbc192u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0bc195  cmp esi, dword ptr [eax + ecx*1 + 0x725]
    X86_AT(c, 0xbc195u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x725u))), 0, 4);
    // 0bc19c  jg 0xbc1b9
    X86_AT(c, 0xbc19cu);
    if (x86_cc(c, 15)) { goto L_bc1b9; }
    X86_TICK(c, 7);
    // 0bc19e  and ebx, ebx
    X86_AT(c, 0xbc19eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0bc1a0  jl 0xbc1b9
    X86_AT(c, 0xbc1a0u);
    if (x86_cc(c, 12)) { goto L_bc1b9; }
    X86_TICK(c, 11);
    // 0bc1a2  cmp ebx, dword ptr [eax + ecx*1 + 0x729]
    X86_AT(c, 0xbc1a2u);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x729u))), 0, 4);
    // 0bc1a9  jg 0xbc1b9
    X86_AT(c, 0xbc1a9u);
    if (x86_cc(c, 15)) { goto L_bc1b9; }
    X86_TICK(c, 4);
    // 0bc1ab  mov dword ptr [eax + ecx*1 + 0x72d], esi
    X86_AT(c, 0xbc1abu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x72Du)), c.r[6]);
    // 0bc1b2  mov dword ptr [eax + ecx*1 + 0x731], ebx
    X86_AT(c, 0xbc1b2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x731u)), c.r[3]);
L_bc1b9:
    X86_TICK(c, 28);
    // 0bc1b9  pop edi
    X86_AT(c, 0xbc1b9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bc1ba  pop esi
    X86_AT(c, 0xbc1bau);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bc1bb  pop ebx
    X86_AT(c, 0xbc1bbu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0bc1bc  leave 
    X86_AT(c, 0xbc1bcu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bc1bd  ret 
    X86_AT(c, 0xbc1bdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbc174u, "ran off the end of a function");
}
void f_000bc1c0(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0bc1c0  push ebp
    X86_AT(c, 0xbc1c0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bc1c1  mov ebp, esp
    X86_AT(c, 0xbc1c1u);
    c.r[5] = c.r[4];
    // 0bc1c3  push ebx
    X86_AT(c, 0xbc1c3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bc1c4  push esi
    X86_AT(c, 0xbc1c4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bc1c5  push edi
    X86_AT(c, 0xbc1c5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bc1c6  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xbc1c6u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0bc1c9  push 4
    X86_AT(c, 0xbc1c9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0bc1cb  call 0xba68c
    X86_AT(c, 0xbc1cbu);
    push32(c, 0xbc1d0u); x86_call_known(c, 0xba68cu, f_000ba68c); X86_RET(c, 0xbc1d0u);
    X86_TICK(c, 11);
    // 0bc1d0  push 0x422
    X86_AT(c, 0xbc1d0u);
    { uint32_t v = 0x422u; push32(c, v); }
    // 0bc1d5  push 0x46208
    X86_AT(c, 0xbc1d5u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0bc1da  call 0x2c5
    X86_AT(c, 0xbc1dau);
    push32(c, 0xbc1dfu); x86_call_known(c, 0x2c5u, f_000002c5); X86_RET(c, 0xbc1dfu);
    X86_TICK(c, 9);
    // 0bc1df  push 0xf
    X86_AT(c, 0xbc1dfu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0bc1e1  call 0xba51c
    X86_AT(c, 0xbc1e1u);
    push32(c, 0xbc1e6u); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xbc1e6u);
    X86_TICK(c, 9);
    // 0bc1e6  push 0xf
    X86_AT(c, 0xbc1e6u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0bc1e8  call 0xba54c
    X86_AT(c, 0xbc1e8u);
    push32(c, 0xbc1edu); x86_call_known(c, 0xba54cu, f_000ba54c); X86_RET(c, 0xbc1edu);
    X86_TICK(c, 87);
    // 0bc1ed  lea eax, [edi + edi*2]
    X86_AT(c, 0xbc1edu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0bc1f0  lea edx, [eax + eax*8]
    X86_AT(c, 0xbc1f0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0bc1f3  lea edx, [eax + edx*2]
    X86_AT(c, 0xbc1f3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0bc1f6  mov ax, word ptr [edx + 0x46915]
    X86_AT(c, 0xbc1f6u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[2] + 0x46915u))));
    // 0bc1fd  add ax, 4
    X86_AT(c, 0xbc1fdu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x4u, 0, 2)); }
    // 0bc201  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xbc201u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0bc204  shl esi, 3
    X86_AT(c, 0xbc204u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 0bc207  add esi, eax
    X86_AT(c, 0xbc207u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 0bc209  mov word ptr [0x46808], si
    X86_AT(c, 0xbc209u);
    wr16((c.sbase[3] + (uint32_t)(0x46808u)), (c.r[6] & 0xFFFFu));
    // 0bc210  mov ax, word ptr [edx + 0x46919]
    X86_AT(c, 0xbc210u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[2] + 0x46919u))));
    // 0bc217  add ax, 2
    X86_AT(c, 0xbc217u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x2u, 0, 2)); }
    // 0bc21b  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xbc21bu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0bc21e  shl esi, 4
    X86_AT(c, 0xbc21eu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[6] = r; }
    // 0bc221  add esi, eax
    X86_AT(c, 0xbc221u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 0bc223  mov word ptr [0x4680a], si
    X86_AT(c, 0xbc223u);
    wr16((c.sbase[3] + (uint32_t)(0x4680Au)), (c.r[6] & 0xFFFFu));
    // 0bc22a  mov ax, word ptr [edx + 0x46915]
    X86_AT(c, 0xbc22au);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[2] + 0x46915u))));
    // 0bc231  add ax, 0xb
    X86_AT(c, 0xbc231u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0xBu, 0, 2)); }
    // 0bc235  mov esi, dword ptr [ebp + 0x14]
    X86_AT(c, 0xbc235u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0bc238  shl esi, 3
    X86_AT(c, 0xbc238u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 0bc23b  add esi, eax
    X86_AT(c, 0xbc23bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 0bc23d  mov word ptr [0x4680c], si
    X86_AT(c, 0xbc23du);
    wr16((c.sbase[3] + (uint32_t)(0x4680Cu)), (c.r[6] & 0xFFFFu));
    // 0bc244  mov ax, word ptr [edx + 0x46919]
    X86_AT(c, 0xbc244u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[2] + 0x46919u))));
    // 0bc24b  add ax, 0x11
    X86_AT(c, 0xbc24bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x11u, 0, 2)); }
    // 0bc24f  mov esi, dword ptr [ebp + 0x18]
    X86_AT(c, 0xbc24fu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0bc252  shl esi, 4
    X86_AT(c, 0xbc252u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[6] = r; }
    // 0bc255  add esi, eax
    X86_AT(c, 0xbc255u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 0bc257  mov word ptr [0x4680e], si
    X86_AT(c, 0xbc257u);
    wr16((c.sbase[3] + (uint32_t)(0x4680Eu)), (c.r[6] & 0xFFFFu));
    // 0bc25e  push 0x46808
    X86_AT(c, 0xbc25eu);
    { uint32_t v = 0x46808u; push32(c, v); }
    // 0bc263  push 0x46208
    X86_AT(c, 0xbc263u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0bc268  mov ebx, edx
    X86_AT(c, 0xbc268u);
    c.r[3] = c.r[2];
    // 0bc26a  call 0x8bd
    X86_AT(c, 0xbc26au);
    push32(c, 0xbc26fu); x86_call_known(c, 0x8bdu, f_000008bd); X86_RET(c, 0xbc26fu);
    X86_TICK(c, 12);
    // 0bc26f  push dword ptr [ebx + 0x46939]
    X86_AT(c, 0xbc26fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x46939u))); push32(c, v); }
    // 0bc275  call 0xba51c
    X86_AT(c, 0xbc275u);
    push32(c, 0xbc27au); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xbc27au);
    X86_TICK(c, 12);
    // 0bc27a  push dword ptr [ebx + 0x46945]
    X86_AT(c, 0xbc27au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x46945u))); push32(c, v); }
    // 0bc280  call 0xba54c
    X86_AT(c, 0xbc280u);
    push32(c, 0xbc285u); x86_call_known(c, 0xba54cu, f_000ba54c); X86_RET(c, 0xbc285u);
    X86_TICK(c, 15);
    // 0bc285  movsx eax, word ptr [0x46204]
    X86_AT(c, 0xbc285u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x46204u)));
    // 0bc28c  push eax
    X86_AT(c, 0xbc28cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bc28d  call 0xba68c
    X86_AT(c, 0xbc28du);
    push32(c, 0xbc292u); x86_call_known(c, 0xba68cu, f_000ba68c); X86_RET(c, 0xbc292u);
    X86_TICK(c, 19);
    // 0bc292  add esp, 0x28
    X86_AT(c, 0xbc292u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0bc295  movsx eax, word ptr [0x4690c]
    X86_AT(c, 0xbc295u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x4690Cu)));
    // 0bc29c  push eax
    X86_AT(c, 0xbc29cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bc29d  push 0x46208
    X86_AT(c, 0xbc29du);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0bc2a2  call 0x2c5
    X86_AT(c, 0xbc2a2u);
    push32(c, 0xbc2a7u); x86_call_known(c, 0x2c5u, f_000002c5); X86_RET(c, 0xbc2a7u);
    X86_TICK(c, 30);
    // 0bc2a7  add esp, 8
    X86_AT(c, 0xbc2a7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0bc2aa  pop edi
    X86_AT(c, 0xbc2aau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bc2ab  pop esi
    X86_AT(c, 0xbc2abu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bc2ac  pop ebx
    X86_AT(c, 0xbc2acu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0bc2ad  leave 
    X86_AT(c, 0xbc2adu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bc2ae  ret 
    X86_AT(c, 0xbc2aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbc1c0u, "ran off the end of a function");
}
void f_000bc2b0(X86Cpu& c) {
    X86_TICK(c, 32);
    // 0bc2b0  push ebp
    X86_AT(c, 0xbc2b0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bc2b1  mov ebp, esp
    X86_AT(c, 0xbc2b1u);
    c.r[5] = c.r[4];
    // 0bc2b3  push ebx
    X86_AT(c, 0xbc2b3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bc2b4  push edi
    X86_AT(c, 0xbc2b4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bc2b5  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xbc2b5u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0bc2b8  lea eax, [edi + edi*2]
    X86_AT(c, 0xbc2b8u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0bc2bb  lea edx, [eax + eax*8]
    X86_AT(c, 0xbc2bbu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0bc2be  lea edx, [eax + edx*2]
    X86_AT(c, 0xbc2beu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0bc2c1  push dword ptr [edx + 0x46945]
    X86_AT(c, 0xbc2c1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x46945u))); push32(c, v); }
    // 0bc2c7  mov ebx, edx
    X86_AT(c, 0xbc2c7u);
    c.r[3] = c.r[2];
    // 0bc2c9  call 0xba51c
    X86_AT(c, 0xbc2c9u);
    push32(c, 0xbc2ceu); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xbc2ceu);
    X86_TICK(c, 12);
    // 0bc2ce  push dword ptr [ebx + 0x46945]
    X86_AT(c, 0xbc2ceu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x46945u))); push32(c, v); }
    // 0bc2d4  call 0xba54c
    X86_AT(c, 0xbc2d4u);
    push32(c, 0xbc2d9u); x86_call_known(c, 0xba54cu, f_000ba54c); X86_RET(c, 0xbc2d9u);
    X86_TICK(c, 79);
    // 0bc2d9  mov ax, word ptr [ebx + 0x46915]
    X86_AT(c, 0xbc2d9u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x46915u))));
    // 0bc2e0  add ax, 4
    X86_AT(c, 0xbc2e0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x4u, 0, 2)); }
    // 0bc2e4  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xbc2e4u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0bc2e7  shl edx, 3
    X86_AT(c, 0xbc2e7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0bc2ea  add edx, eax
    X86_AT(c, 0xbc2eau);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0bc2ec  mov word ptr [0x46808], dx
    X86_AT(c, 0xbc2ecu);
    wr16((c.sbase[3] + (uint32_t)(0x46808u)), (c.r[2] & 0xFFFFu));
    // 0bc2f3  mov ax, word ptr [ebx + 0x46919]
    X86_AT(c, 0xbc2f3u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x46919u))));
    // 0bc2fa  add ax, 2
    X86_AT(c, 0xbc2fau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x2u, 0, 2)); }
    // 0bc2fe  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xbc2feu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0bc301  shl edx, 4
    X86_AT(c, 0xbc301u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0bc304  add edx, eax
    X86_AT(c, 0xbc304u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0bc306  mov word ptr [0x4680a], dx
    X86_AT(c, 0xbc306u);
    wr16((c.sbase[3] + (uint32_t)(0x4680Au)), (c.r[2] & 0xFFFFu));
    // 0bc30d  mov ax, word ptr [ebx + 0x46915]
    X86_AT(c, 0xbc30du);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x46915u))));
    // 0bc314  add ax, 0xb
    X86_AT(c, 0xbc314u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0xBu, 0, 2)); }
    // 0bc318  mov edx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xbc318u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0bc31b  shl edx, 3
    X86_AT(c, 0xbc31bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0bc31e  add edx, eax
    X86_AT(c, 0xbc31eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0bc320  mov word ptr [0x4680c], dx
    X86_AT(c, 0xbc320u);
    wr16((c.sbase[3] + (uint32_t)(0x4680Cu)), (c.r[2] & 0xFFFFu));
    // 0bc327  mov ax, word ptr [ebx + 0x46919]
    X86_AT(c, 0xbc327u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x46919u))));
    // 0bc32e  add ax, 0x11
    X86_AT(c, 0xbc32eu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x11u, 0, 2)); }
    // 0bc332  mov edx, dword ptr [ebp + 0x18]
    X86_AT(c, 0xbc332u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0bc335  shl edx, 4
    X86_AT(c, 0xbc335u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0bc338  add edx, eax
    X86_AT(c, 0xbc338u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0bc33a  mov word ptr [0x4680e], dx
    X86_AT(c, 0xbc33au);
    wr16((c.sbase[3] + (uint32_t)(0x4680Eu)), (c.r[2] & 0xFFFFu));
    // 0bc341  push 0x46808
    X86_AT(c, 0xbc341u);
    { uint32_t v = 0x46808u; push32(c, v); }
    // 0bc346  push 0x46208
    X86_AT(c, 0xbc346u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0bc34b  call 0x8bd
    X86_AT(c, 0xbc34bu);
    push32(c, 0xbc350u); x86_call_known(c, 0x8bdu, f_000008bd); X86_RET(c, 0xbc350u);
    X86_TICK(c, 15);
    // 0bc350  movsx eax, word ptr [0x46204]
    X86_AT(c, 0xbc350u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x46204u)));
    // 0bc357  push eax
    X86_AT(c, 0xbc357u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bc358  call 0xba68c
    X86_AT(c, 0xbc358u);
    push32(c, 0xbc35du); x86_call_known(c, 0xba68cu, f_000ba68c); X86_RET(c, 0xbc35du);
    X86_TICK(c, 12);
    // 0bc35d  push dword ptr [ebx + 0x46939]
    X86_AT(c, 0xbc35du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x46939u))); push32(c, v); }
    // 0bc363  call 0xba51c
    X86_AT(c, 0xbc363u);
    push32(c, 0xbc368u); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xbc368u);
    X86_TICK(c, 26);
    // 0bc368  add esp, 0x18
    X86_AT(c, 0xbc368u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0bc36b  pop edi
    X86_AT(c, 0xbc36bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bc36c  pop ebx
    X86_AT(c, 0xbc36cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0bc36d  leave 
    X86_AT(c, 0xbc36du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bc36e  ret 
    X86_AT(c, 0xbc36eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbc2b0u, "ran off the end of a function");
}
void f_000bc3ec(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0bc3ec  push ebp
    X86_AT(c, 0xbc3ecu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bc3ed  mov ebp, esp
    X86_AT(c, 0xbc3edu);
    c.r[5] = c.r[4];
    // 0bc3ef  push edi
    X86_AT(c, 0xbc3efu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bc3f0  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xbc3f0u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0bc3f3  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xbc3f3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0bc3f6  lea eax, [eax + eax*2]
    X86_AT(c, 0xbc3f6u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0bc3f9  lea edx, [eax + eax*8]
    X86_AT(c, 0xbc3f9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0bc3fc  lea edx, [eax + edx*2]
    X86_AT(c, 0xbc3fcu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0bc3ff  mov dword ptr [edx + 0x46939], edi
    X86_AT(c, 0xbc3ffu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x46939u)), c.r[7]);
    // 0bc405  push edi
    X86_AT(c, 0xbc405u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bc406  call 0xba51c
    X86_AT(c, 0xbc406u);
    push32(c, 0xbc40bu); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xbc40bu);
    X86_TICK(c, 22);
    // 0bc40b  add esp, 4
    X86_AT(c, 0xbc40bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0bc40e  pop edi
    X86_AT(c, 0xbc40eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bc40f  leave 
    X86_AT(c, 0xbc40fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bc410  ret 
    X86_AT(c, 0xbc410u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbc3ecu, "ran off the end of a function");
}
void f_000bc428(X86Cpu& c) {
    X86_TICK(c, 56);
    // 0bc428  push ebp
    X86_AT(c, 0xbc428u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bc429  mov ebp, esp
    X86_AT(c, 0xbc429u);
    c.r[5] = c.r[4];
    // 0bc42b  push edi
    X86_AT(c, 0xbc42bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bc42c  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xbc42cu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0bc42f  lea eax, [edi + edi*2]
    X86_AT(c, 0xbc42fu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0bc432  lea edx, [eax + eax*8]
    X86_AT(c, 0xbc432u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0bc435  lea edx, [eax + edx*2]
    X86_AT(c, 0xbc435u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0bc438  mov eax, dword ptr [edx + 0x4692d]
    X86_AT(c, 0xbc438u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4692Du)));
    // 0bc43e  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xbc43eu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0bc441  mov dword ptr [ecx], eax
    X86_AT(c, 0xbc441u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1])), c.r[0]);
    // 0bc443  mov eax, dword ptr [edx + 0x46931]
    X86_AT(c, 0xbc443u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x46931u)));
    // 0bc449  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xbc449u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0bc44c  mov dword ptr [edx], eax
    X86_AT(c, 0xbc44cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0bc44e  pop edi
    X86_AT(c, 0xbc44eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bc44f  leave 
    X86_AT(c, 0xbc44fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bc450  ret 
    X86_AT(c, 0xbc450u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbc428u, "ran off the end of a function");
}
void f_000bc454(X86Cpu& c) {
    X86_TICK(c, 56);
    // 0bc454  push ebp
    X86_AT(c, 0xbc454u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bc455  mov ebp, esp
    X86_AT(c, 0xbc455u);
    c.r[5] = c.r[4];
    // 0bc457  push edi
    X86_AT(c, 0xbc457u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bc458  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xbc458u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0bc45b  lea eax, [edi + edi*2]
    X86_AT(c, 0xbc45bu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0bc45e  lea edx, [eax + eax*8]
    X86_AT(c, 0xbc45eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0bc461  lea edx, [eax + edx*2]
    X86_AT(c, 0xbc461u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0bc464  mov eax, dword ptr [edx + 0x46925]
    X86_AT(c, 0xbc464u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x46925u)));
    // 0bc46a  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xbc46au);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0bc46d  mov dword ptr [ecx], eax
    X86_AT(c, 0xbc46du);
    wr32((c.sbase[3] + (uint32_t)(c.r[1])), c.r[0]);
    // 0bc46f  mov eax, dword ptr [edx + 0x46929]
    X86_AT(c, 0xbc46fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x46929u)));
    // 0bc475  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xbc475u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0bc478  mov dword ptr [edx], eax
    X86_AT(c, 0xbc478u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0bc47a  pop edi
    X86_AT(c, 0xbc47au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bc47b  leave 
    X86_AT(c, 0xbc47bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bc47c  ret 
    X86_AT(c, 0xbc47cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbc454u, "ran off the end of a function");
}
void f_000bc480(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0bc480  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0xbc480u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0bc484  lea eax, [eax + eax*2]
    X86_AT(c, 0xbc484u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0bc487  lea edx, [eax + eax*8]
    X86_AT(c, 0xbc487u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0bc48a  lea edx, [eax + edx*2]
    X86_AT(c, 0xbc48au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0bc48d  mov dword ptr [edx + 0x46935], 0
    X86_AT(c, 0xbc48du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x46935u)), 0x0u);
    // 0bc497  ret 
    X86_AT(c, 0xbc497u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbc480u, "ran off the end of a function");
}
void f_000bc498(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0bc498  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0xbc498u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0bc49c  lea eax, [eax + eax*2]
    X86_AT(c, 0xbc49cu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0bc49f  lea edx, [eax + eax*8]
    X86_AT(c, 0xbc49fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0bc4a2  lea edx, [eax + edx*2]
    X86_AT(c, 0xbc4a2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0bc4a5  mov dword ptr [edx + 0x46935], 0xffffffff
    X86_AT(c, 0xbc4a5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x46935u)), 0xFFFFFFFFu);
    // 0bc4af  ret 
    X86_AT(c, 0xbc4afu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbc498u, "ran off the end of a function");
}
void f_000bc4b0(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0bc4b0  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0xbc4b0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0bc4b4  lea eax, [eax + eax*2]
    X86_AT(c, 0xbc4b4u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0bc4b7  lea edx, [eax + eax*8]
    X86_AT(c, 0xbc4b7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0bc4ba  lea edx, [eax + edx*2]
    X86_AT(c, 0xbc4bau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0bc4bd  mov eax, dword ptr [edx + 0x46935]
    X86_AT(c, 0xbc4bdu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x46935u)));
    // 0bc4c3  ret 
    X86_AT(c, 0xbc4c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbc4b0u, "ran off the end of a function");
}
void f_000bc4d8(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0bc4d8  push 0xe
    X86_AT(c, 0xbc4d8u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0bc4da  push 0xf
    X86_AT(c, 0xbc4dau);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0bc4dc  push 0xf
    X86_AT(c, 0xbc4dcu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0bc4de  push 0
    X86_AT(c, 0xbc4deu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bc4e0  push 0x4d
    X86_AT(c, 0xbc4e0u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0bc4e2  push 0x14
    X86_AT(c, 0xbc4e2u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0bc4e4  push 0x260
    X86_AT(c, 0xbc4e4u);
    { uint32_t v = 0x260u; push32(c, v); }
    // 0bc4e9  push 0x1b0
    X86_AT(c, 0xbc4e9u);
    { uint32_t v = 0x1B0u; push32(c, v); }
    // 0bc4ee  push 0x10
    X86_AT(c, 0xbc4eeu);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0bc4f0  push 2
    X86_AT(c, 0xbc4f0u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0bc4f2  call 0xbb5cc
    X86_AT(c, 0xbc4f2u);
    push32(c, 0xbc4f7u); x86_call_known(c, 0xbb5ccu, f_000bb5cc); X86_RET(c, 0xbc4f7u);
    X86_TICK(c, 9);
    // 0bc4f7  push 2
    X86_AT(c, 0xbc4f7u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0bc4f9  call 0xbb6b0
    X86_AT(c, 0xbc4f9u);
    push32(c, 0xbc4feu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xbc4feu);
    X86_TICK(c, 9);
    // 0bc4fe  push 2
    X86_AT(c, 0xbc4feu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0bc500  call 0xbb710
    X86_AT(c, 0xbc500u);
    push32(c, 0xbc505u); x86_call_known(c, 0xbb710u, f_000bb710); X86_RET(c, 0xbc505u);
    X86_TICK(c, 12);
    // 0bc505  add esp, 0x30
    X86_AT(c, 0xbc505u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0bc508  ret 
    X86_AT(c, 0xbc508u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbc4d8u, "ran off the end of a function");
}
void f_000bc50c(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0bc50c  push ebp
    X86_AT(c, 0xbc50cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bc50d  mov ebp, esp
    X86_AT(c, 0xbc50du);
    c.r[5] = c.r[4];
    // 0bc50f  push 2
    X86_AT(c, 0xbc50fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0bc511  call 0xbb6b0
    X86_AT(c, 0xbc511u);
    push32(c, 0xbc516u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xbc516u);
    X86_TICK(c, 9);
    // 0bc516  push 2
    X86_AT(c, 0xbc516u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0bc518  call 0xbbb5c
    X86_AT(c, 0xbc518u);
    push32(c, 0xbc51du); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xbc51du);
    X86_TICK(c, 14);
    // 0bc51d  push dword ptr [ebp + 8]
    X86_AT(c, 0xbc51du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0bc520  push 2
    X86_AT(c, 0xbc520u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0bc522  call 0xba428
    X86_AT(c, 0xbc522u);
    push32(c, 0xbc527u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xbc527u);
    X86_TICK(c, 16);
    // 0bc527  leave 
    X86_AT(c, 0xbc527u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bc528  ret 
    X86_AT(c, 0xbc528u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbc50cu, "ran off the end of a function");
}
void f_000bc52c(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0bc52c  push ebp
    X86_AT(c, 0xbc52cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bc52d  mov ebp, esp
    X86_AT(c, 0xbc52du);
    c.r[5] = c.r[4];
    // 0bc52f  push edi
    X86_AT(c, 0xbc52fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bc530  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xbc530u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0bc533  lea eax, [eax + eax*2]
    X86_AT(c, 0xbc533u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0bc536  lea edx, [eax + eax*8]
    X86_AT(c, 0xbc536u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0bc539  lea edx, [eax + edx*2]
    X86_AT(c, 0xbc539u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0bc53c  lea edi, [edx + 0x46914]
    X86_AT(c, 0xbc53cu);
    c.r[7] = (uint32_t)(c.r[2] + 0x46914u);
    // 0bc542  push 6
    X86_AT(c, 0xbc542u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0bc544  push 0x46208
    X86_AT(c, 0xbc544u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0bc549  call 0x27d
    X86_AT(c, 0xbc549u);
    push32(c, 0xbc54eu); x86_call_known(c, 0x27du, f_0000027d); X86_RET(c, 0xbc54eu);
    X86_TICK(c, 73);
    // 0bc54e  mov eax, dword ptr [0x46da4]
    X86_AT(c, 0xbc54eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x46DA4u)));
    // 0bc553  mov dword ptr [0x46808], eax
    X86_AT(c, 0xbc553u);
    wr32((c.sbase[3] + (uint32_t)(0x46808u)), c.r[0]);
    // 0bc558  mov word ptr [0x4680c], 0x14
    X86_AT(c, 0xbc558u);
    wr16((c.sbase[3] + (uint32_t)(0x4680Cu)), 0x14u);
    // 0bc561  mov ax, word ptr [edi + 1]
    X86_AT(c, 0xbc561u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0bc565  add ax, 2
    X86_AT(c, 0xbc565u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x2u, 0, 2)); }
    // 0bc569  mov word ptr [0x4680e], ax
    X86_AT(c, 0xbc569u);
    wr16((c.sbase[3] + (uint32_t)(0x4680Eu)), (c.r[0] & 0xFFFFu));
    // 0bc56f  mov ax, word ptr [edi + 5]
    X86_AT(c, 0xbc56fu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))));
    // 0bc573  add ax, 2
    X86_AT(c, 0xbc573u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x2u, 0, 2)); }
    // 0bc577  mov edx, dword ptr [edi + 0x1d]
    X86_AT(c, 0xbc577u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Du)));
    // 0bc57a  shl edx, 4
    X86_AT(c, 0xbc57au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0bc57d  add edx, eax
    X86_AT(c, 0xbc57du);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0bc57f  mov word ptr [0x46810], dx
    X86_AT(c, 0xbc57fu);
    wr16((c.sbase[3] + (uint32_t)(0x46810u)), (c.r[2] & 0xFFFFu));
    // 0bc586  mov ax, word ptr [edi + 1]
    X86_AT(c, 0xbc586u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0bc58a  add ax, 0x11
    X86_AT(c, 0xbc58au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x11u, 0, 2)); }
    // 0bc58e  mov word ptr [0x46812], ax
    X86_AT(c, 0xbc58eu);
    wr16((c.sbase[3] + (uint32_t)(0x46812u)), (c.r[0] & 0xFFFFu));
    // 0bc594  mov ax, word ptr [edi + 5]
    X86_AT(c, 0xbc594u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))));
    // 0bc598  add ax, 2
    X86_AT(c, 0xbc598u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x2u, 0, 2)); }
    // 0bc59c  mov edx, dword ptr [edi + 0x1d]
    X86_AT(c, 0xbc59cu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Du)));
    // 0bc59f  shl edx, 4
    X86_AT(c, 0xbc59fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0bc5a2  add edx, eax
    X86_AT(c, 0xbc5a2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0bc5a4  add dx, 0xf
    X86_AT(c, 0xbc5a4u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0xFu, 0, 2)); }
    // 0bc5a8  mov word ptr [0x46814], dx
    X86_AT(c, 0xbc5a8u);
    wr16((c.sbase[3] + (uint32_t)(0x46814u)), (c.r[2] & 0xFFFFu));
    // 0bc5af  push 0x46808
    X86_AT(c, 0xbc5afu);
    { uint32_t v = 0x46808u; push32(c, v); }
    // 0bc5b4  push 0
    X86_AT(c, 0xbc5b4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bc5b6  push 0x46208
    X86_AT(c, 0xbc5b6u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0bc5bb  call 0x5c4
    X86_AT(c, 0xbc5bbu);
    push32(c, 0xbc5c0u); x86_call_known(c, 0x5c4u, f_000005c4); X86_RET(c, 0xbc5c0u);
    X86_TICK(c, 19);
    // 0bc5c0  mov dword ptr [edi + 0x19], 2
    X86_AT(c, 0xbc5c0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x19u)), 0x2u);
    // 0bc5c7  movsx eax, word ptr [0x46204]
    X86_AT(c, 0xbc5c7u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x46204u)));
    // 0bc5ce  push eax
    X86_AT(c, 0xbc5ceu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bc5cf  push 0x46208
    X86_AT(c, 0xbc5cfu);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0bc5d4  call 0x27d
    X86_AT(c, 0xbc5d4u);
    push32(c, 0xbc5d9u); x86_call_known(c, 0x27du, f_0000027d); X86_RET(c, 0xbc5d9u);
    X86_TICK(c, 22);
    // 0bc5d9  add esp, 0x1c
    X86_AT(c, 0xbc5d9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0bc5dc  pop edi
    X86_AT(c, 0xbc5dcu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bc5dd  leave 
    X86_AT(c, 0xbc5ddu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bc5de  ret 
    X86_AT(c, 0xbc5deu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbc52cu, "ran off the end of a function");
}
void f_000bc5e0(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0bc5e0  push ebp
    X86_AT(c, 0xbc5e0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bc5e1  mov ebp, esp
    X86_AT(c, 0xbc5e1u);
    c.r[5] = c.r[4];
    // 0bc5e3  push ebx
    X86_AT(c, 0xbc5e3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bc5e4  push esi
    X86_AT(c, 0xbc5e4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bc5e5  push edi
    X86_AT(c, 0xbc5e5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bc5e6  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xbc5e6u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0bc5e9  mov dword ptr [0x46808], 7
    X86_AT(c, 0xbc5e9u);
    wr32((c.sbase[3] + (uint32_t)(0x46808u)), 0x7u);
    // 0bc5f3  mov esi, 1
    X86_AT(c, 0xbc5f3u);
    c.r[6] = 0x1u;
L_bc5f8:
    X86_TICK(c, 7);
    // 0bc5f8  cmp esi, 0xf
    X86_AT(c, 0xbc5f8u);
    (void)x86_sub(c, c.r[6], 0xFu, 0, 4);
    // 0bc5fb  jge 0xbc718
    X86_AT(c, 0xbc5fbu);
    if (x86_cc(c, 13)) { goto L_bc718; }
    X86_TICK(c, 99);
    // 0bc601  mov dword ptr [0x4680c], 1
    X86_AT(c, 0xbc601u);
    wr32((c.sbase[3] + (uint32_t)(0x4680Cu)), 0x1u);
    // 0bc60b  mov eax, esi
    X86_AT(c, 0xbc60bu);
    c.r[0] = c.r[6];
    // 0bc60d  shl eax, 4
    X86_AT(c, 0xbc60du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0bc610  dec eax
    X86_AT(c, 0xbc610u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0bc611  mov byte ptr [0x46810], al
    X86_AT(c, 0xbc611u);
    wr8((c.sbase[3] + (uint32_t)(0x46810u)), g8(c, 0));
    // 0bc616  sub edx, edx
    X86_AT(c, 0xbc616u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0bc618  mov byte ptr [0x46811], dl
    X86_AT(c, 0xbc618u);
    wr8((c.sbase[3] + (uint32_t)(0x46811u)), g8(c, 2));
    // 0bc61e  mov byte ptr [0x46812], dl
    X86_AT(c, 0xbc61eu);
    wr8((c.sbase[3] + (uint32_t)(0x46812u)), g8(c, 2));
    // 0bc624  mov byte ptr [0x46813], dl
    X86_AT(c, 0xbc624u);
    wr8((c.sbase[3] + (uint32_t)(0x46813u)), g8(c, 2));
    // 0bc62a  mov dword ptr [0x46814], 2
    X86_AT(c, 0xbc62au);
    wr32((c.sbase[3] + (uint32_t)(0x46814u)), 0x2u);
    // 0bc634  mov byte ptr [0x46818], dl
    X86_AT(c, 0xbc634u);
    wr8((c.sbase[3] + (uint32_t)(0x46818u)), g8(c, 2));
    // 0bc63a  mov byte ptr [0x46819], al
    X86_AT(c, 0xbc63au);
    wr8((c.sbase[3] + (uint32_t)(0x46819u)), g8(c, 0));
    // 0bc63f  mov byte ptr [0x4681a], dl
    X86_AT(c, 0xbc63fu);
    wr8((c.sbase[3] + (uint32_t)(0x4681Au)), g8(c, 2));
    // 0bc645  mov byte ptr [0x4681b], dl
    X86_AT(c, 0xbc645u);
    wr8((c.sbase[3] + (uint32_t)(0x4681Bu)), g8(c, 2));
    // 0bc64b  mov dword ptr [0x4681c], 3
    X86_AT(c, 0xbc64bu);
    wr32((c.sbase[3] + (uint32_t)(0x4681Cu)), 0x3u);
    // 0bc655  mov byte ptr [0x46820], dl
    X86_AT(c, 0xbc655u);
    wr8((c.sbase[3] + (uint32_t)(0x46820u)), g8(c, 2));
    // 0bc65b  mov byte ptr [0x46821], dl
    X86_AT(c, 0xbc65bu);
    wr8((c.sbase[3] + (uint32_t)(0x46821u)), g8(c, 2));
    // 0bc661  mov byte ptr [0x46822], dl
    X86_AT(c, 0xbc661u);
    wr8((c.sbase[3] + (uint32_t)(0x46822u)), g8(c, 2));
    // 0bc667  mov byte ptr [0x46823], dl
    X86_AT(c, 0xbc667u);
    wr8((c.sbase[3] + (uint32_t)(0x46823u)), g8(c, 2));
    // 0bc66d  mov dword ptr [0x46824], 4
    X86_AT(c, 0xbc66du);
    wr32((c.sbase[3] + (uint32_t)(0x46824u)), 0x4u);
    // 0bc677  mov byte ptr [0x46828], dl
    X86_AT(c, 0xbc677u);
    wr8((c.sbase[3] + (uint32_t)(0x46828u)), g8(c, 2));
    // 0bc67d  mov byte ptr [0x46829], dl
    X86_AT(c, 0xbc67du);
    wr8((c.sbase[3] + (uint32_t)(0x46829u)), g8(c, 2));
    // 0bc683  mov byte ptr [0x4682a], al
    X86_AT(c, 0xbc683u);
    wr8((c.sbase[3] + (uint32_t)(0x4682Au)), g8(c, 0));
    // 0bc688  mov byte ptr [0x4682b], dl
    X86_AT(c, 0xbc688u);
    wr8((c.sbase[3] + (uint32_t)(0x4682Bu)), g8(c, 2));
    // 0bc68e  mov dword ptr [0x4682c], 5
    X86_AT(c, 0xbc68eu);
    wr32((c.sbase[3] + (uint32_t)(0x4682Cu)), 0x5u);
    // 0bc698  mov byte ptr [0x46830], al
    X86_AT(c, 0xbc698u);
    wr8((c.sbase[3] + (uint32_t)(0x46830u)), g8(c, 0));
    // 0bc69d  mov byte ptr [0x46831], dl
    X86_AT(c, 0xbc69du);
    wr8((c.sbase[3] + (uint32_t)(0x46831u)), g8(c, 2));
    // 0bc6a3  mov byte ptr [0x46832], al
    X86_AT(c, 0xbc6a3u);
    wr8((c.sbase[3] + (uint32_t)(0x46832u)), g8(c, 0));
    // 0bc6a8  mov byte ptr [0x46833], dl
    X86_AT(c, 0xbc6a8u);
    wr8((c.sbase[3] + (uint32_t)(0x46833u)), g8(c, 2));
    // 0bc6ae  mov dword ptr [0x46834], 6
    X86_AT(c, 0xbc6aeu);
    wr32((c.sbase[3] + (uint32_t)(0x46834u)), 0x6u);
    // 0bc6b8  mov byte ptr [0x46838], dl
    X86_AT(c, 0xbc6b8u);
    wr8((c.sbase[3] + (uint32_t)(0x46838u)), g8(c, 2));
    // 0bc6be  mov byte ptr [0x46839], al
    X86_AT(c, 0xbc6beu);
    wr8((c.sbase[3] + (uint32_t)(0x46839u)), g8(c, 0));
    // 0bc6c3  mov eax, esi
    X86_AT(c, 0xbc6c3u);
    c.r[0] = c.r[6];
    // 0bc6c5  shl eax, 4
    X86_AT(c, 0xbc6c5u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0bc6c8  dec eax
    X86_AT(c, 0xbc6c8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0bc6c9  mov byte ptr [0x4683a], al
    X86_AT(c, 0xbc6c9u);
    wr8((c.sbase[3] + (uint32_t)(0x4683Au)), g8(c, 0));
    // 0bc6ce  mov byte ptr [0x4683b], 0
    X86_AT(c, 0xbc6ceu);
    wr8((c.sbase[3] + (uint32_t)(0x4683Bu)), 0x0u);
    // 0bc6d5  mov dword ptr [0x4683c], 7
    X86_AT(c, 0xbc6d5u);
    wr32((c.sbase[3] + (uint32_t)(0x4683Cu)), 0x7u);
    // 0bc6df  mov byte ptr [0x46840], al
    X86_AT(c, 0xbc6dfu);
    wr8((c.sbase[3] + (uint32_t)(0x46840u)), g8(c, 0));
    // 0bc6e4  mov byte ptr [0x46841], al
    X86_AT(c, 0xbc6e4u);
    wr8((c.sbase[3] + (uint32_t)(0x46841u)), g8(c, 0));
    // 0bc6e9  mov byte ptr [0x46842], al
    X86_AT(c, 0xbc6e9u);
    wr8((c.sbase[3] + (uint32_t)(0x46842u)), g8(c, 0));
    // 0bc6ee  mov byte ptr [0x46843], 0
    X86_AT(c, 0xbc6eeu);
    wr8((c.sbase[3] + (uint32_t)(0x46843u)), 0x0u);
    // 0bc6f5  push 0x46808
    X86_AT(c, 0xbc6f5u);
    { uint32_t v = 0x46808u; push32(c, v); }
    // 0bc6fa  push 1
    X86_AT(c, 0xbc6fau);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bc6fc  push 0x46208
    X86_AT(c, 0xbc6fcu);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0bc701  call 0x19c
    X86_AT(c, 0xbc701u);
    push32(c, 0xbc706u); x86_call_known(c, 0x19cu, f_0000019c); X86_RET(c, 0xbc706u);
    X86_TICK(c, 4);
    // 0bc706  sub ebx, ebx
    X86_AT(c, 0xbc706u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0bc708  add esp, 0xc
    X86_AT(c, 0xbc708u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_bc70b:
    X86_TICK(c, 7);
    // 0bc70b  cmp edi, ebx
    X86_AT(c, 0xbc70bu);
    (void)x86_sub(c, c.r[7], c.r[3], 0, 4);
    // 0bc70d  jle 0xbc712
    X86_AT(c, 0xbc70du);
    if (x86_cc(c, 14)) { goto L_bc712; }
    X86_TICK(c, 9);
    // 0bc70f  inc ebx
    X86_AT(c, 0xbc70fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0bc710  jmp 0xbc70b
    X86_AT(c, 0xbc710u);
    X86_POLL(c, 0xbc70bu); goto L_bc70b;
L_bc712:
    X86_TICK(c, 9);
    // 0bc712  inc esi
    X86_AT(c, 0xbc712u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0bc713  jmp 0xbc5f8
    X86_AT(c, 0xbc713u);
    X86_POLL(c, 0xbc5f8u); goto L_bc5f8;
L_bc718:
    X86_TICK(c, 7);
    // 0bc718  call 0xba464
    X86_AT(c, 0xbc718u);
    push32(c, 0xbc71du); x86_call_known(c, 0xba464u, f_000ba464); X86_RET(c, 0xbc71du);
    X86_TICK(c, 28);
    // 0bc71d  pop edi
    X86_AT(c, 0xbc71du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bc71e  pop esi
    X86_AT(c, 0xbc71eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bc71f  pop ebx
    X86_AT(c, 0xbc71fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0bc720  leave 
    X86_AT(c, 0xbc720u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bc721  ret 
    X86_AT(c, 0xbc721u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbc5e0u, "ran off the end of a function");
}
void f_000bc724(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0bc724  push ebp
    X86_AT(c, 0xbc724u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bc725  mov ebp, esp
    X86_AT(c, 0xbc725u);
    c.r[5] = c.r[4];
    // 0bc727  push esi
    X86_AT(c, 0xbc727u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bc728  push edi
    X86_AT(c, 0xbc728u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bc729  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xbc729u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0bc72c  mov dword ptr [0x46808], 7
    X86_AT(c, 0xbc72cu);
    wr32((c.sbase[3] + (uint32_t)(0x46808u)), 0x7u);
    // 0bc736  mov esi, 0xf
    X86_AT(c, 0xbc736u);
    c.r[6] = 0xFu;
L_bc73b:
    X86_TICK(c, 7);
    // 0bc73b  and esi, esi
    X86_AT(c, 0xbc73bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0bc73d  jle 0xbc858
    X86_AT(c, 0xbc73du);
    if (x86_cc(c, 14)) { goto L_bc858; }
    X86_TICK(c, 101);
    // 0bc743  mov dword ptr [0x4680c], 1
    X86_AT(c, 0xbc743u);
    wr32((c.sbase[3] + (uint32_t)(0x4680Cu)), 0x1u);
    // 0bc74d  mov eax, esi
    X86_AT(c, 0xbc74du);
    c.r[0] = c.r[6];
    // 0bc74f  shl eax, 4
    X86_AT(c, 0xbc74fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0bc752  dec eax
    X86_AT(c, 0xbc752u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0bc753  mov byte ptr [0x46810], al
    X86_AT(c, 0xbc753u);
    wr8((c.sbase[3] + (uint32_t)(0x46810u)), g8(c, 0));
    // 0bc758  sub edx, edx
    X86_AT(c, 0xbc758u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0bc75a  mov byte ptr [0x46811], dl
    X86_AT(c, 0xbc75au);
    wr8((c.sbase[3] + (uint32_t)(0x46811u)), g8(c, 2));
    // 0bc760  mov byte ptr [0x46812], dl
    X86_AT(c, 0xbc760u);
    wr8((c.sbase[3] + (uint32_t)(0x46812u)), g8(c, 2));
    // 0bc766  mov byte ptr [0x46813], dl
    X86_AT(c, 0xbc766u);
    wr8((c.sbase[3] + (uint32_t)(0x46813u)), g8(c, 2));
    // 0bc76c  mov dword ptr [0x46814], 2
    X86_AT(c, 0xbc76cu);
    wr32((c.sbase[3] + (uint32_t)(0x46814u)), 0x2u);
    // 0bc776  mov byte ptr [0x46818], dl
    X86_AT(c, 0xbc776u);
    wr8((c.sbase[3] + (uint32_t)(0x46818u)), g8(c, 2));
    // 0bc77c  mov byte ptr [0x46819], al
    X86_AT(c, 0xbc77cu);
    wr8((c.sbase[3] + (uint32_t)(0x46819u)), g8(c, 0));
    // 0bc781  mov byte ptr [0x4681a], dl
    X86_AT(c, 0xbc781u);
    wr8((c.sbase[3] + (uint32_t)(0x4681Au)), g8(c, 2));
    // 0bc787  mov byte ptr [0x4681b], dl
    X86_AT(c, 0xbc787u);
    wr8((c.sbase[3] + (uint32_t)(0x4681Bu)), g8(c, 2));
    // 0bc78d  mov dword ptr [0x4681c], 3
    X86_AT(c, 0xbc78du);
    wr32((c.sbase[3] + (uint32_t)(0x4681Cu)), 0x3u);
    // 0bc797  mov byte ptr [0x46820], dl
    X86_AT(c, 0xbc797u);
    wr8((c.sbase[3] + (uint32_t)(0x46820u)), g8(c, 2));
    // 0bc79d  mov byte ptr [0x46821], dl
    X86_AT(c, 0xbc79du);
    wr8((c.sbase[3] + (uint32_t)(0x46821u)), g8(c, 2));
    // 0bc7a3  mov byte ptr [0x46822], dl
    X86_AT(c, 0xbc7a3u);
    wr8((c.sbase[3] + (uint32_t)(0x46822u)), g8(c, 2));
    // 0bc7a9  mov byte ptr [0x46823], dl
    X86_AT(c, 0xbc7a9u);
    wr8((c.sbase[3] + (uint32_t)(0x46823u)), g8(c, 2));
    // 0bc7af  mov dword ptr [0x46824], 4
    X86_AT(c, 0xbc7afu);
    wr32((c.sbase[3] + (uint32_t)(0x46824u)), 0x4u);
    // 0bc7b9  mov byte ptr [0x46828], dl
    X86_AT(c, 0xbc7b9u);
    wr8((c.sbase[3] + (uint32_t)(0x46828u)), g8(c, 2));
    // 0bc7bf  mov byte ptr [0x46829], dl
    X86_AT(c, 0xbc7bfu);
    wr8((c.sbase[3] + (uint32_t)(0x46829u)), g8(c, 2));
    // 0bc7c5  mov byte ptr [0x4682a], al
    X86_AT(c, 0xbc7c5u);
    wr8((c.sbase[3] + (uint32_t)(0x4682Au)), g8(c, 0));
    // 0bc7ca  mov byte ptr [0x4682b], dl
    X86_AT(c, 0xbc7cau);
    wr8((c.sbase[3] + (uint32_t)(0x4682Bu)), g8(c, 2));
    // 0bc7d0  mov dword ptr [0x4682c], 5
    X86_AT(c, 0xbc7d0u);
    wr32((c.sbase[3] + (uint32_t)(0x4682Cu)), 0x5u);
    // 0bc7da  mov byte ptr [0x46830], al
    X86_AT(c, 0xbc7dau);
    wr8((c.sbase[3] + (uint32_t)(0x46830u)), g8(c, 0));
    // 0bc7df  mov byte ptr [0x46831], dl
    X86_AT(c, 0xbc7dfu);
    wr8((c.sbase[3] + (uint32_t)(0x46831u)), g8(c, 2));
    // 0bc7e5  mov byte ptr [0x46832], al
    X86_AT(c, 0xbc7e5u);
    wr8((c.sbase[3] + (uint32_t)(0x46832u)), g8(c, 0));
    // 0bc7ea  mov byte ptr [0x46833], dl
    X86_AT(c, 0xbc7eau);
    wr8((c.sbase[3] + (uint32_t)(0x46833u)), g8(c, 2));
    // 0bc7f0  mov dword ptr [0x46834], 6
    X86_AT(c, 0xbc7f0u);
    wr32((c.sbase[3] + (uint32_t)(0x46834u)), 0x6u);
    // 0bc7fa  mov byte ptr [0x46838], dl
    X86_AT(c, 0xbc7fau);
    wr8((c.sbase[3] + (uint32_t)(0x46838u)), g8(c, 2));
    // 0bc800  mov byte ptr [0x46839], al
    X86_AT(c, 0xbc800u);
    wr8((c.sbase[3] + (uint32_t)(0x46839u)), g8(c, 0));
    // 0bc805  mov byte ptr [0x4683a], al
    X86_AT(c, 0xbc805u);
    wr8((c.sbase[3] + (uint32_t)(0x4683Au)), g8(c, 0));
    // 0bc80a  sub eax, eax
    X86_AT(c, 0xbc80au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0bc80c  mov byte ptr [0x4683b], al
    X86_AT(c, 0xbc80cu);
    wr8((c.sbase[3] + (uint32_t)(0x4683Bu)), g8(c, 0));
    // 0bc811  mov dword ptr [0x4683c], 7
    X86_AT(c, 0xbc811u);
    wr32((c.sbase[3] + (uint32_t)(0x4683Cu)), 0x7u);
    // 0bc81b  mov edx, esi
    X86_AT(c, 0xbc81bu);
    c.r[2] = c.r[6];
    // 0bc81d  shl edx, 4
    X86_AT(c, 0xbc81du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0bc820  dec edx
    X86_AT(c, 0xbc820u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0bc821  mov byte ptr [0x46840], dl
    X86_AT(c, 0xbc821u);
    wr8((c.sbase[3] + (uint32_t)(0x46840u)), g8(c, 2));
    // 0bc827  mov byte ptr [0x46841], dl
    X86_AT(c, 0xbc827u);
    wr8((c.sbase[3] + (uint32_t)(0x46841u)), g8(c, 2));
    // 0bc82d  mov byte ptr [0x46842], dl
    X86_AT(c, 0xbc82du);
    wr8((c.sbase[3] + (uint32_t)(0x46842u)), g8(c, 2));
    // 0bc833  mov byte ptr [0x46843], al
    X86_AT(c, 0xbc833u);
    wr8((c.sbase[3] + (uint32_t)(0x46843u)), g8(c, 0));
    // 0bc838  push 0x46808
    X86_AT(c, 0xbc838u);
    { uint32_t v = 0x46808u; push32(c, v); }
    // 0bc83d  push 1
    X86_AT(c, 0xbc83du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bc83f  push 0x46208
    X86_AT(c, 0xbc83fu);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0bc844  call 0x19c
    X86_AT(c, 0xbc844u);
    push32(c, 0xbc849u); x86_call_known(c, 0x19cu, f_0000019c); X86_RET(c, 0xbc849u);
    X86_TICK(c, 9);
    // 0bc849  push edi
    X86_AT(c, 0xbc849u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bc84a  call 0xbebbc
    X86_AT(c, 0xbc84au);
    push32(c, 0xbc84fu); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xbc84fu);
    X86_TICK(c, 11);
    // 0bc84f  dec esi
    X86_AT(c, 0xbc84fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0bc850  add esp, 0x10
    X86_AT(c, 0xbc850u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0bc853  jmp 0xbc73b
    X86_AT(c, 0xbc853u);
    X86_POLL(c, 0xbc73bu); goto L_bc73b;
L_bc858:
    X86_TICK(c, 9);
    // 0bc858  push 0
    X86_AT(c, 0xbc858u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bc85a  call 0xbaa40
    X86_AT(c, 0xbc85au);
    push32(c, 0xbc85fu); x86_call_known(c, 0xbaa40u, f_000baa40); X86_RET(c, 0xbc85fu);
    X86_TICK(c, 7);
    // 0bc85f  call 0xba464
    X86_AT(c, 0xbc85fu);
    push32(c, 0xbc864u); x86_call_known(c, 0xba464u, f_000ba464); X86_RET(c, 0xbc864u);
    X86_TICK(c, 26);
    // 0bc864  add esp, 4
    X86_AT(c, 0xbc864u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0bc867  pop edi
    X86_AT(c, 0xbc867u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bc868  pop esi
    X86_AT(c, 0xbc868u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bc869  leave 
    X86_AT(c, 0xbc869u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bc86a  ret 
    X86_AT(c, 0xbc86au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbc724u, "ran off the end of a function");
}
void f_000bc86c(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0bc86c  push ebp
    X86_AT(c, 0xbc86cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bc86d  mov ebp, esp
    X86_AT(c, 0xbc86du);
    c.r[5] = c.r[4];
    // 0bc86f  sub esp, 0x30
    X86_AT(c, 0xbc86fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x30u, 0, 4); }
    // 0bc872  push esi
    X86_AT(c, 0xbc872u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bc873  push edi
    X86_AT(c, 0xbc873u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bc874  mov dword ptr [ebp - 0x24], 0
    X86_AT(c, 0xbc874u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), 0x0u);
L_bc87b:
    X86_TICK(c, 12);
    // 0bc87b  cmp dword ptr [ebp - 0x24], 0x10
    X86_AT(c, 0xbc87bu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu))), 0x10u, 0, 4);
    // 0bc87f  jge 0xbca7c
    X86_AT(c, 0xbc87fu);
    if (x86_cc(c, 13)) { goto L_bca7c; }
    X86_TICK(c, 4);
    // 0bc885  mov esi, 0x46fa8
    X86_AT(c, 0xbc885u);
    c.r[6] = 0x46FA8u;
    // 0bc88a  sub edi, edi
    X86_AT(c, 0xbc88au);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_bc88c:
    X86_TICK(c, 7);
    // 0bc88c  cmp edi, 8
    X86_AT(c, 0xbc88cu);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0bc88f  jge 0xbc89f
    X86_AT(c, 0xbc88fu);
    if (x86_cc(c, 13)) { goto L_bc89f; }
    X86_TICK(c, 15);
    // 0bc891  mov eax, dword ptr [esi + edi*4 + 0x1e0]
    X86_AT(c, 0xbc891u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4 + 0x1E0u)));
    // 0bc898  mov dword ptr [ebp + edi*4 - 0x20], eax
    X86_AT(c, 0xbc898u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + c.r[7] * 4 + 0xFFFFFFE0u)), c.r[0]);
    // 0bc89c  inc edi
    X86_AT(c, 0xbc89cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bc89d  jmp 0xbc88c
    X86_AT(c, 0xbc89du);
    X86_POLL(c, 0xbc88cu); goto L_bc88c;
L_bc89f:
    X86_TICK(c, 2);
    // 0bc89f  mov edi, 0x77
    X86_AT(c, 0xbc89fu);
    c.r[7] = 0x77u;
L_bc8a4:
    X86_TICK(c, 7);
    // 0bc8a4  and edi, edi
    X86_AT(c, 0xbc8a4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0bc8a6  jl 0xbc8b2
    X86_AT(c, 0xbc8a6u);
    if (x86_cc(c, 12)) { goto L_bc8b2; }
    X86_TICK(c, 15);
    // 0bc8a8  mov eax, dword ptr [esi + edi*4]
    X86_AT(c, 0xbc8a8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4)));
    // 0bc8ab  mov dword ptr [esi + edi*4 + 0x20], eax
    X86_AT(c, 0xbc8abu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4 + 0x20u)), c.r[0]);
    // 0bc8af  dec edi
    X86_AT(c, 0xbc8afu);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0bc8b0  jmp 0xbc8a4
    X86_AT(c, 0xbc8b0u);
    X86_POLL(c, 0xbc8a4u); goto L_bc8a4;
L_bc8b2:
    X86_TICK(c, 2);
    // 0bc8b2  sub edi, edi
    X86_AT(c, 0xbc8b2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_bc8b4:
    X86_TICK(c, 7);
    // 0bc8b4  cmp edi, 8
    X86_AT(c, 0xbc8b4u);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0bc8b7  jge 0xbc8c3
    X86_AT(c, 0xbc8b7u);
    if (x86_cc(c, 13)) { goto L_bc8c3; }
    X86_TICK(c, 15);
    // 0bc8b9  mov eax, dword ptr [ebp + edi*4 - 0x20]
    X86_AT(c, 0xbc8b9u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + c.r[7] * 4 + 0xFFFFFFE0u)));
    // 0bc8bd  mov dword ptr [esi + edi*4], eax
    X86_AT(c, 0xbc8bdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4)), c.r[0]);
    // 0bc8c0  inc edi
    X86_AT(c, 0xbc8c0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bc8c1  jmp 0xbc8b4
    X86_AT(c, 0xbc8c1u);
    X86_POLL(c, 0xbc8b4u); goto L_bc8b4;
L_bc8c3:
    X86_TICK(c, 13);
    // 0bc8c3  mov eax, dword ptr [ebp - 0x24]
    X86_AT(c, 0xbc8c3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)));
    // 0bc8c6  shl eax, 9
    X86_AT(c, 0xbc8c6u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0bc8c9  add eax, 0x80fa8
    X86_AT(c, 0xbc8c9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x80FA8u, 0, 4); }
    // 0bc8ce  mov dword ptr [ebp - 0x28], eax
    X86_AT(c, 0xbc8ceu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)), c.r[0]);
    // 0bc8d1  sub edi, edi
    X86_AT(c, 0xbc8d1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_bc8d3:
    X86_TICK(c, 7);
    // 0bc8d3  cmp edi, 0x80
    X86_AT(c, 0xbc8d3u);
    (void)x86_sub(c, c.r[7], 0x80u, 0, 4);
    // 0bc8d9  jge 0xbc8e8
    X86_AT(c, 0xbc8d9u);
    if (x86_cc(c, 13)) { goto L_bc8e8; }
    X86_TICK(c, 29);
    // 0bc8db  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xbc8dbu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 0bc8dc  mov edx, dword ptr [ebp - 0x28]
    X86_AT(c, 0xbc8dcu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)));
    // 0bc8df  add dword ptr [ebp - 0x28], 4
    X86_AT(c, 0xbc8dfu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0bc8e3  mov dword ptr [edx], eax
    X86_AT(c, 0xbc8e3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0bc8e5  inc edi
    X86_AT(c, 0xbc8e5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bc8e6  jmp 0xbc8d3
    X86_AT(c, 0xbc8e6u);
    X86_POLL(c, 0xbc8d3u); goto L_bc8d3;
L_bc8e8:
    X86_TICK(c, 4);
    // 0bc8e8  mov esi, 0x481a8
    X86_AT(c, 0xbc8e8u);
    c.r[6] = 0x481A8u;
    // 0bc8ed  sub edi, edi
    X86_AT(c, 0xbc8edu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_bc8ef:
    X86_TICK(c, 7);
    // 0bc8ef  cmp edi, 8
    X86_AT(c, 0xbc8efu);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0bc8f2  jge 0xbc902
    X86_AT(c, 0xbc8f2u);
    if (x86_cc(c, 13)) { goto L_bc902; }
    X86_TICK(c, 15);
    // 0bc8f4  mov eax, dword ptr [esi + edi*4 + 0x1e0]
    X86_AT(c, 0xbc8f4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4 + 0x1E0u)));
    // 0bc8fb  mov dword ptr [ebp + edi*4 - 0x20], eax
    X86_AT(c, 0xbc8fbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + c.r[7] * 4 + 0xFFFFFFE0u)), c.r[0]);
    // 0bc8ff  inc edi
    X86_AT(c, 0xbc8ffu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bc900  jmp 0xbc8ef
    X86_AT(c, 0xbc900u);
    X86_POLL(c, 0xbc8efu); goto L_bc8ef;
L_bc902:
    X86_TICK(c, 2);
    // 0bc902  mov edi, 0x77
    X86_AT(c, 0xbc902u);
    c.r[7] = 0x77u;
L_bc907:
    X86_TICK(c, 7);
    // 0bc907  and edi, edi
    X86_AT(c, 0xbc907u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0bc909  jl 0xbc915
    X86_AT(c, 0xbc909u);
    if (x86_cc(c, 12)) { goto L_bc915; }
    X86_TICK(c, 15);
    // 0bc90b  mov eax, dword ptr [esi + edi*4]
    X86_AT(c, 0xbc90bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4)));
    // 0bc90e  mov dword ptr [esi + edi*4 + 0x20], eax
    X86_AT(c, 0xbc90eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4 + 0x20u)), c.r[0]);
    // 0bc912  dec edi
    X86_AT(c, 0xbc912u);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0bc913  jmp 0xbc907
    X86_AT(c, 0xbc913u);
    X86_POLL(c, 0xbc907u); goto L_bc907;
L_bc915:
    X86_TICK(c, 2);
    // 0bc915  sub edi, edi
    X86_AT(c, 0xbc915u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_bc917:
    X86_TICK(c, 7);
    // 0bc917  cmp edi, 8
    X86_AT(c, 0xbc917u);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0bc91a  jge 0xbc926
    X86_AT(c, 0xbc91au);
    if (x86_cc(c, 13)) { goto L_bc926; }
    X86_TICK(c, 15);
    // 0bc91c  mov eax, dword ptr [ebp + edi*4 - 0x20]
    X86_AT(c, 0xbc91cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + c.r[7] * 4 + 0xFFFFFFE0u)));
    // 0bc920  mov dword ptr [esi + edi*4], eax
    X86_AT(c, 0xbc920u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4)), c.r[0]);
    // 0bc923  inc edi
    X86_AT(c, 0xbc923u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bc924  jmp 0xbc917
    X86_AT(c, 0xbc924u);
    X86_POLL(c, 0xbc917u); goto L_bc917;
L_bc926:
    X86_TICK(c, 13);
    // 0bc926  mov eax, dword ptr [ebp - 0x24]
    X86_AT(c, 0xbc926u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)));
    // 0bc929  shl eax, 9
    X86_AT(c, 0xbc929u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0bc92c  add eax, 0x82fa8
    X86_AT(c, 0xbc92cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x82FA8u, 0, 4); }
    // 0bc931  mov dword ptr [ebp - 0x28], eax
    X86_AT(c, 0xbc931u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)), c.r[0]);
    // 0bc934  sub edi, edi
    X86_AT(c, 0xbc934u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_bc936:
    X86_TICK(c, 7);
    // 0bc936  cmp edi, 0x80
    X86_AT(c, 0xbc936u);
    (void)x86_sub(c, c.r[7], 0x80u, 0, 4);
    // 0bc93c  jge 0xbc94b
    X86_AT(c, 0xbc93cu);
    if (x86_cc(c, 13)) { goto L_bc94b; }
    X86_TICK(c, 29);
    // 0bc93e  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xbc93eu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 0bc93f  mov edx, dword ptr [ebp - 0x28]
    X86_AT(c, 0xbc93fu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)));
    // 0bc942  add dword ptr [ebp - 0x28], 4
    X86_AT(c, 0xbc942u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0bc946  mov dword ptr [edx], eax
    X86_AT(c, 0xbc946u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0bc948  inc edi
    X86_AT(c, 0xbc948u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bc949  jmp 0xbc936
    X86_AT(c, 0xbc949u);
    X86_POLL(c, 0xbc936u); goto L_bc936;
L_bc94b:
    X86_TICK(c, 4);
    // 0bc94b  mov esi, 0x4afa8
    X86_AT(c, 0xbc94bu);
    c.r[6] = 0x4AFA8u;
    // 0bc950  sub edi, edi
    X86_AT(c, 0xbc950u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_bc952:
    X86_TICK(c, 7);
    // 0bc952  cmp edi, 8
    X86_AT(c, 0xbc952u);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0bc955  jge 0xbc965
    X86_AT(c, 0xbc955u);
    if (x86_cc(c, 13)) { goto L_bc965; }
    X86_TICK(c, 15);
    // 0bc957  mov eax, dword ptr [esi + edi*4 + 0x1e0]
    X86_AT(c, 0xbc957u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4 + 0x1E0u)));
    // 0bc95e  mov dword ptr [ebp + edi*4 - 0x20], eax
    X86_AT(c, 0xbc95eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + c.r[7] * 4 + 0xFFFFFFE0u)), c.r[0]);
    // 0bc962  inc edi
    X86_AT(c, 0xbc962u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bc963  jmp 0xbc952
    X86_AT(c, 0xbc963u);
    X86_POLL(c, 0xbc952u); goto L_bc952;
L_bc965:
    X86_TICK(c, 2);
    // 0bc965  mov edi, 0x77
    X86_AT(c, 0xbc965u);
    c.r[7] = 0x77u;
L_bc96a:
    X86_TICK(c, 7);
    // 0bc96a  and edi, edi
    X86_AT(c, 0xbc96au);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0bc96c  jl 0xbc978
    X86_AT(c, 0xbc96cu);
    if (x86_cc(c, 12)) { goto L_bc978; }
    X86_TICK(c, 15);
    // 0bc96e  mov eax, dword ptr [esi + edi*4]
    X86_AT(c, 0xbc96eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4)));
    // 0bc971  mov dword ptr [esi + edi*4 + 0x20], eax
    X86_AT(c, 0xbc971u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4 + 0x20u)), c.r[0]);
    // 0bc975  dec edi
    X86_AT(c, 0xbc975u);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0bc976  jmp 0xbc96a
    X86_AT(c, 0xbc976u);
    X86_POLL(c, 0xbc96au); goto L_bc96a;
L_bc978:
    X86_TICK(c, 2);
    // 0bc978  sub edi, edi
    X86_AT(c, 0xbc978u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_bc97a:
    X86_TICK(c, 7);
    // 0bc97a  cmp edi, 8
    X86_AT(c, 0xbc97au);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0bc97d  jge 0xbc989
    X86_AT(c, 0xbc97du);
    if (x86_cc(c, 13)) { goto L_bc989; }
    X86_TICK(c, 15);
    // 0bc97f  mov eax, dword ptr [ebp + edi*4 - 0x20]
    X86_AT(c, 0xbc97fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + c.r[7] * 4 + 0xFFFFFFE0u)));
    // 0bc983  mov dword ptr [esi + edi*4], eax
    X86_AT(c, 0xbc983u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4)), c.r[0]);
    // 0bc986  inc edi
    X86_AT(c, 0xbc986u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bc987  jmp 0xbc97a
    X86_AT(c, 0xbc987u);
    X86_POLL(c, 0xbc97au); goto L_bc97a;
L_bc989:
    X86_TICK(c, 13);
    // 0bc989  mov eax, dword ptr [ebp - 0x24]
    X86_AT(c, 0xbc989u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)));
    // 0bc98c  shl eax, 9
    X86_AT(c, 0xbc98cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0bc98f  add eax, 0x84fa8
    X86_AT(c, 0xbc98fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x84FA8u, 0, 4); }
    // 0bc994  mov dword ptr [ebp - 0x28], eax
    X86_AT(c, 0xbc994u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)), c.r[0]);
    // 0bc997  sub edi, edi
    X86_AT(c, 0xbc997u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_bc999:
    X86_TICK(c, 7);
    // 0bc999  cmp edi, 0x80
    X86_AT(c, 0xbc999u);
    (void)x86_sub(c, c.r[7], 0x80u, 0, 4);
    // 0bc99f  jge 0xbc9ae
    X86_AT(c, 0xbc99fu);
    if (x86_cc(c, 13)) { goto L_bc9ae; }
    X86_TICK(c, 29);
    // 0bc9a1  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xbc9a1u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 0bc9a2  mov edx, dword ptr [ebp - 0x28]
    X86_AT(c, 0xbc9a2u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)));
    // 0bc9a5  add dword ptr [ebp - 0x28], 4
    X86_AT(c, 0xbc9a5u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0bc9a9  mov dword ptr [edx], eax
    X86_AT(c, 0xbc9a9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0bc9ab  inc edi
    X86_AT(c, 0xbc9abu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bc9ac  jmp 0xbc999
    X86_AT(c, 0xbc9acu);
    X86_POLL(c, 0xbc999u); goto L_bc999;
L_bc9ae:
    X86_TICK(c, 4);
    // 0bc9ae  mov esi, 0x4b1a8
    X86_AT(c, 0xbc9aeu);
    c.r[6] = 0x4B1A8u;
    // 0bc9b3  sub edi, edi
    X86_AT(c, 0xbc9b3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_bc9b5:
    X86_TICK(c, 7);
    // 0bc9b5  cmp edi, 8
    X86_AT(c, 0xbc9b5u);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0bc9b8  jge 0xbc9c8
    X86_AT(c, 0xbc9b8u);
    if (x86_cc(c, 13)) { goto L_bc9c8; }
    X86_TICK(c, 15);
    // 0bc9ba  mov eax, dword ptr [esi + edi*4 + 0x1e0]
    X86_AT(c, 0xbc9bau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4 + 0x1E0u)));
    // 0bc9c1  mov dword ptr [ebp + edi*4 - 0x20], eax
    X86_AT(c, 0xbc9c1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + c.r[7] * 4 + 0xFFFFFFE0u)), c.r[0]);
    // 0bc9c5  inc edi
    X86_AT(c, 0xbc9c5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bc9c6  jmp 0xbc9b5
    X86_AT(c, 0xbc9c6u);
    X86_POLL(c, 0xbc9b5u); goto L_bc9b5;
L_bc9c8:
    X86_TICK(c, 2);
    // 0bc9c8  mov edi, 0x77
    X86_AT(c, 0xbc9c8u);
    c.r[7] = 0x77u;
L_bc9cd:
    X86_TICK(c, 7);
    // 0bc9cd  and edi, edi
    X86_AT(c, 0xbc9cdu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0bc9cf  jl 0xbc9db
    X86_AT(c, 0xbc9cfu);
    if (x86_cc(c, 12)) { goto L_bc9db; }
    X86_TICK(c, 15);
    // 0bc9d1  mov eax, dword ptr [esi + edi*4]
    X86_AT(c, 0xbc9d1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4)));
    // 0bc9d4  mov dword ptr [esi + edi*4 + 0x20], eax
    X86_AT(c, 0xbc9d4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4 + 0x20u)), c.r[0]);
    // 0bc9d8  dec edi
    X86_AT(c, 0xbc9d8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0bc9d9  jmp 0xbc9cd
    X86_AT(c, 0xbc9d9u);
    X86_POLL(c, 0xbc9cdu); goto L_bc9cd;
L_bc9db:
    X86_TICK(c, 2);
    // 0bc9db  sub edi, edi
    X86_AT(c, 0xbc9dbu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_bc9dd:
    X86_TICK(c, 7);
    // 0bc9dd  cmp edi, 8
    X86_AT(c, 0xbc9ddu);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0bc9e0  jge 0xbc9ec
    X86_AT(c, 0xbc9e0u);
    if (x86_cc(c, 13)) { goto L_bc9ec; }
    X86_TICK(c, 15);
    // 0bc9e2  mov eax, dword ptr [ebp + edi*4 - 0x20]
    X86_AT(c, 0xbc9e2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + c.r[7] * 4 + 0xFFFFFFE0u)));
    // 0bc9e6  mov dword ptr [esi + edi*4], eax
    X86_AT(c, 0xbc9e6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4)), c.r[0]);
    // 0bc9e9  inc edi
    X86_AT(c, 0xbc9e9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bc9ea  jmp 0xbc9dd
    X86_AT(c, 0xbc9eau);
    X86_POLL(c, 0xbc9ddu); goto L_bc9dd;
L_bc9ec:
    X86_TICK(c, 13);
    // 0bc9ec  mov eax, dword ptr [ebp - 0x24]
    X86_AT(c, 0xbc9ecu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)));
    // 0bc9ef  shl eax, 9
    X86_AT(c, 0xbc9efu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0bc9f2  add eax, 0x86fa8
    X86_AT(c, 0xbc9f2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x86FA8u, 0, 4); }
    // 0bc9f7  mov dword ptr [ebp - 0x28], eax
    X86_AT(c, 0xbc9f7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)), c.r[0]);
    // 0bc9fa  sub edi, edi
    X86_AT(c, 0xbc9fau);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_bc9fc:
    X86_TICK(c, 7);
    // 0bc9fc  cmp edi, 0x80
    X86_AT(c, 0xbc9fcu);
    (void)x86_sub(c, c.r[7], 0x80u, 0, 4);
    // 0bca02  jge 0xbca11
    X86_AT(c, 0xbca02u);
    if (x86_cc(c, 13)) { goto L_bca11; }
    X86_TICK(c, 29);
    // 0bca04  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xbca04u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 0bca05  mov edx, dword ptr [ebp - 0x28]
    X86_AT(c, 0xbca05u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)));
    // 0bca08  add dword ptr [ebp - 0x28], 4
    X86_AT(c, 0xbca08u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0bca0c  mov dword ptr [edx], eax
    X86_AT(c, 0xbca0cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0bca0e  inc edi
    X86_AT(c, 0xbca0eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bca0f  jmp 0xbc9fc
    X86_AT(c, 0xbca0fu);
    X86_POLL(c, 0xbc9fcu); goto L_bc9fc;
L_bca11:
    X86_TICK(c, 4);
    // 0bca11  mov esi, 0x4b3a8
    X86_AT(c, 0xbca11u);
    c.r[6] = 0x4B3A8u;
    // 0bca16  sub edi, edi
    X86_AT(c, 0xbca16u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_bca18:
    X86_TICK(c, 7);
    // 0bca18  cmp edi, 8
    X86_AT(c, 0xbca18u);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0bca1b  jge 0xbca2b
    X86_AT(c, 0xbca1bu);
    if (x86_cc(c, 13)) { goto L_bca2b; }
    X86_TICK(c, 15);
    // 0bca1d  mov eax, dword ptr [esi + edi*4 + 0x1e0]
    X86_AT(c, 0xbca1du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4 + 0x1E0u)));
    // 0bca24  mov dword ptr [ebp + edi*4 - 0x20], eax
    X86_AT(c, 0xbca24u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + c.r[7] * 4 + 0xFFFFFFE0u)), c.r[0]);
    // 0bca28  inc edi
    X86_AT(c, 0xbca28u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bca29  jmp 0xbca18
    X86_AT(c, 0xbca29u);
    X86_POLL(c, 0xbca18u); goto L_bca18;
L_bca2b:
    X86_TICK(c, 2);
    // 0bca2b  mov edi, 0x77
    X86_AT(c, 0xbca2bu);
    c.r[7] = 0x77u;
L_bca30:
    X86_TICK(c, 7);
    // 0bca30  and edi, edi
    X86_AT(c, 0xbca30u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0bca32  jl 0xbca3e
    X86_AT(c, 0xbca32u);
    if (x86_cc(c, 12)) { goto L_bca3e; }
    X86_TICK(c, 15);
    // 0bca34  mov eax, dword ptr [esi + edi*4]
    X86_AT(c, 0xbca34u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4)));
    // 0bca37  mov dword ptr [esi + edi*4 + 0x20], eax
    X86_AT(c, 0xbca37u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4 + 0x20u)), c.r[0]);
    // 0bca3b  dec edi
    X86_AT(c, 0xbca3bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0bca3c  jmp 0xbca30
    X86_AT(c, 0xbca3cu);
    X86_POLL(c, 0xbca30u); goto L_bca30;
L_bca3e:
    X86_TICK(c, 2);
    // 0bca3e  sub edi, edi
    X86_AT(c, 0xbca3eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_bca40:
    X86_TICK(c, 7);
    // 0bca40  cmp edi, 8
    X86_AT(c, 0xbca40u);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0bca43  jge 0xbca4f
    X86_AT(c, 0xbca43u);
    if (x86_cc(c, 13)) { goto L_bca4f; }
    X86_TICK(c, 15);
    // 0bca45  mov eax, dword ptr [ebp + edi*4 - 0x20]
    X86_AT(c, 0xbca45u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + c.r[7] * 4 + 0xFFFFFFE0u)));
    // 0bca49  mov dword ptr [esi + edi*4], eax
    X86_AT(c, 0xbca49u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4)), c.r[0]);
    // 0bca4c  inc edi
    X86_AT(c, 0xbca4cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bca4d  jmp 0xbca40
    X86_AT(c, 0xbca4du);
    X86_POLL(c, 0xbca40u); goto L_bca40;
L_bca4f:
    X86_TICK(c, 13);
    // 0bca4f  mov eax, dword ptr [ebp - 0x24]
    X86_AT(c, 0xbca4fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)));
    // 0bca52  shl eax, 9
    X86_AT(c, 0xbca52u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0bca55  add eax, 0x88fa8
    X86_AT(c, 0xbca55u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x88FA8u, 0, 4); }
    // 0bca5a  mov dword ptr [ebp - 0x28], eax
    X86_AT(c, 0xbca5au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)), c.r[0]);
    // 0bca5d  sub edi, edi
    X86_AT(c, 0xbca5du);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_bca5f:
    X86_TICK(c, 7);
    // 0bca5f  cmp edi, 0x80
    X86_AT(c, 0xbca5fu);
    (void)x86_sub(c, c.r[7], 0x80u, 0, 4);
    // 0bca65  jge 0xbca74
    X86_AT(c, 0xbca65u);
    if (x86_cc(c, 13)) { goto L_bca74; }
    X86_TICK(c, 29);
    // 0bca67  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xbca67u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 0bca68  mov edx, dword ptr [ebp - 0x28]
    X86_AT(c, 0xbca68u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)));
    // 0bca6b  add dword ptr [ebp - 0x28], 4
    X86_AT(c, 0xbca6bu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0bca6f  mov dword ptr [edx], eax
    X86_AT(c, 0xbca6fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0bca71  inc edi
    X86_AT(c, 0xbca71u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bca72  jmp 0xbca5f
    X86_AT(c, 0xbca72u);
    X86_POLL(c, 0xbca5fu); goto L_bca5f;
L_bca74:
    X86_TICK(c, 13);
    // 0bca74  inc dword ptr [ebp - 0x24]
    X86_AT(c, 0xbca74u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bca77  jmp 0xbc87b
    X86_AT(c, 0xbca77u);
    X86_POLL(c, 0xbc87bu); goto L_bc87b;
L_bca7c:
    X86_TICK(c, 6);
    // 0bca7c  mov ecx, 0x5f3a8
    X86_AT(c, 0xbca7cu);
    c.r[1] = 0x5F3A8u;
    // 0bca81  mov dword ptr [ebp - 0x2c], 0x471a8
    X86_AT(c, 0xbca81u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), 0x471A8u);
    // 0bca88  sub edi, edi
    X86_AT(c, 0xbca88u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_bca8a:
    X86_TICK(c, 7);
    // 0bca8a  cmp edi, 0x20
    X86_AT(c, 0xbca8au);
    (void)x86_sub(c, c.r[7], 0x20u, 0, 4);
    // 0bca8d  jge 0xbcada
    X86_AT(c, 0xbca8du);
    if (x86_cc(c, 13)) { goto L_bcada; }
    X86_TICK(c, 2);
    // 0bca8f  mov dword ptr [ebp - 0x24], 0
    X86_AT(c, 0xbca8fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), 0x0u);
L_bca96:
    X86_TICK(c, 12);
    // 0bca96  cmp dword ptr [ebp - 0x24], 0x10
    X86_AT(c, 0xbca96u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu))), 0x10u, 0, 4);
    // 0bca9a  jge 0xbcad7
    X86_AT(c, 0xbca9au);
    if (x86_cc(c, 13)) { goto L_bcad7; }
    X86_TICK(c, 15);
    // 0bca9c  mov al, byte ptr [ecx]
    X86_AT(c, 0xbca9cu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1]))));
    // 0bca9e  and al, 0xf
    X86_AT(c, 0xbca9eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0bcaa0  mov byte ptr [ebp - 0x2d], al
    X86_AT(c, 0xbcaa0u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)), g8(c, 0));
    // 0bcaa3  and al, al
    X86_AT(c, 0xbcaa3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0bcaa5  jne 0xbcab1
    X86_AT(c, 0xbcaa5u);
    if (x86_cc(c, 5)) { goto L_bcab1; }
    X86_TICK(c, 12);
    // 0bcaa7  mov eax, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xbcaa7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)));
    // 0bcaaa  mov al, byte ptr [eax]
    X86_AT(c, 0xbcaaau);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0bcaac  and al, 0xf
    X86_AT(c, 0xbcaacu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0bcaae  mov byte ptr [ebp - 0x2d], al
    X86_AT(c, 0xbcaaeu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)), g8(c, 0));
L_bcab1:
    X86_TICK(c, 15);
    // 0bcab1  mov al, byte ptr [ecx]
    X86_AT(c, 0xbcab1u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1]))));
    // 0bcab3  and al, 0xf0
    X86_AT(c, 0xbcab3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0bcab5  mov byte ptr [ebp - 0x2e], al
    X86_AT(c, 0xbcab5u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u)), g8(c, 0));
    // 0bcab8  and al, al
    X86_AT(c, 0xbcab8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0bcaba  jne 0xbcac6
    X86_AT(c, 0xbcabau);
    if (x86_cc(c, 5)) { goto L_bcac6; }
    X86_TICK(c, 12);
    // 0bcabc  mov eax, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xbcabcu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)));
    // 0bcabf  mov al, byte ptr [eax]
    X86_AT(c, 0xbcabfu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0bcac1  and al, 0xf0
    X86_AT(c, 0xbcac1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0bcac3  mov byte ptr [ebp - 0x2e], al
    X86_AT(c, 0xbcac3u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u)), g8(c, 0));
L_bcac6:
    X86_TICK(c, 33);
    // 0bcac6  mov al, byte ptr [ebp - 0x2d]
    X86_AT(c, 0xbcac6u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u))));
    // 0bcac9  add al, byte ptr [ebp - 0x2e]
    X86_AT(c, 0xbcac9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u))), 0, 1)); }
    // 0bcacc  mov byte ptr [ecx], al
    X86_AT(c, 0xbcaccu);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), g8(c, 0));
    // 0bcace  inc ecx
    X86_AT(c, 0xbcaceu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0bcacf  inc dword ptr [ebp - 0x2c]
    X86_AT(c, 0xbcacfu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bcad2  inc dword ptr [ebp - 0x24]
    X86_AT(c, 0xbcad2u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bcad5  jmp 0xbca96
    X86_AT(c, 0xbcad5u);
    X86_POLL(c, 0xbca96u); goto L_bca96;
L_bcad7:
    X86_TICK(c, 9);
    // 0bcad7  inc edi
    X86_AT(c, 0xbcad7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bcad8  jmp 0xbca8a
    X86_AT(c, 0xbcad8u);
    X86_POLL(c, 0xbca8au); goto L_bca8a;
L_bcada:
    X86_TICK(c, 6);
    // 0bcada  mov ecx, 0x5f5a8
    X86_AT(c, 0xbcadau);
    c.r[1] = 0x5F5A8u;
    // 0bcadf  mov dword ptr [ebp - 0x2c], 0x471a8
    X86_AT(c, 0xbcadfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), 0x471A8u);
    // 0bcae6  sub edi, edi
    X86_AT(c, 0xbcae6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_bcae8:
    X86_TICK(c, 7);
    // 0bcae8  cmp edi, 0x20
    X86_AT(c, 0xbcae8u);
    (void)x86_sub(c, c.r[7], 0x20u, 0, 4);
    // 0bcaeb  jge 0xbcb38
    X86_AT(c, 0xbcaebu);
    if (x86_cc(c, 13)) { goto L_bcb38; }
    X86_TICK(c, 2);
    // 0bcaed  mov dword ptr [ebp - 0x24], 0
    X86_AT(c, 0xbcaedu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), 0x0u);
L_bcaf4:
    X86_TICK(c, 12);
    // 0bcaf4  cmp dword ptr [ebp - 0x24], 0x10
    X86_AT(c, 0xbcaf4u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu))), 0x10u, 0, 4);
    // 0bcaf8  jge 0xbcb35
    X86_AT(c, 0xbcaf8u);
    if (x86_cc(c, 13)) { goto L_bcb35; }
    X86_TICK(c, 15);
    // 0bcafa  mov al, byte ptr [ecx]
    X86_AT(c, 0xbcafau);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1]))));
    // 0bcafc  and al, 0xf
    X86_AT(c, 0xbcafcu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0bcafe  mov byte ptr [ebp - 0x2d], al
    X86_AT(c, 0xbcafeu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)), g8(c, 0));
    // 0bcb01  and al, al
    X86_AT(c, 0xbcb01u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0bcb03  jne 0xbcb0f
    X86_AT(c, 0xbcb03u);
    if (x86_cc(c, 5)) { goto L_bcb0f; }
    X86_TICK(c, 12);
    // 0bcb05  mov eax, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xbcb05u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)));
    // 0bcb08  mov al, byte ptr [eax]
    X86_AT(c, 0xbcb08u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0bcb0a  and al, 0xf
    X86_AT(c, 0xbcb0au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0bcb0c  mov byte ptr [ebp - 0x2d], al
    X86_AT(c, 0xbcb0cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)), g8(c, 0));
L_bcb0f:
    X86_TICK(c, 15);
    // 0bcb0f  mov al, byte ptr [ecx]
    X86_AT(c, 0xbcb0fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1]))));
    // 0bcb11  and al, 0xf0
    X86_AT(c, 0xbcb11u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0bcb13  mov byte ptr [ebp - 0x2e], al
    X86_AT(c, 0xbcb13u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u)), g8(c, 0));
    // 0bcb16  and al, al
    X86_AT(c, 0xbcb16u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0bcb18  jne 0xbcb24
    X86_AT(c, 0xbcb18u);
    if (x86_cc(c, 5)) { goto L_bcb24; }
    X86_TICK(c, 12);
    // 0bcb1a  mov eax, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xbcb1au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)));
    // 0bcb1d  mov al, byte ptr [eax]
    X86_AT(c, 0xbcb1du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0bcb1f  and al, 0xf0
    X86_AT(c, 0xbcb1fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0bcb21  mov byte ptr [ebp - 0x2e], al
    X86_AT(c, 0xbcb21u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u)), g8(c, 0));
L_bcb24:
    X86_TICK(c, 33);
    // 0bcb24  mov al, byte ptr [ebp - 0x2d]
    X86_AT(c, 0xbcb24u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u))));
    // 0bcb27  add al, byte ptr [ebp - 0x2e]
    X86_AT(c, 0xbcb27u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u))), 0, 1)); }
    // 0bcb2a  mov byte ptr [ecx], al
    X86_AT(c, 0xbcb2au);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), g8(c, 0));
    // 0bcb2c  inc ecx
    X86_AT(c, 0xbcb2cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0bcb2d  inc dword ptr [ebp - 0x2c]
    X86_AT(c, 0xbcb2du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bcb30  inc dword ptr [ebp - 0x24]
    X86_AT(c, 0xbcb30u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bcb33  jmp 0xbcaf4
    X86_AT(c, 0xbcb33u);
    X86_POLL(c, 0xbcaf4u); goto L_bcaf4;
L_bcb35:
    X86_TICK(c, 9);
    // 0bcb35  inc edi
    X86_AT(c, 0xbcb35u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bcb36  jmp 0xbcae8
    X86_AT(c, 0xbcb36u);
    X86_POLL(c, 0xbcae8u); goto L_bcae8;
L_bcb38:
    X86_TICK(c, 6);
    // 0bcb38  mov ecx, 0x5efa8
    X86_AT(c, 0xbcb38u);
    c.r[1] = 0x5EFA8u;
    // 0bcb3d  mov dword ptr [ebp - 0x2c], 0x471a8
    X86_AT(c, 0xbcb3du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), 0x471A8u);
    // 0bcb44  sub edi, edi
    X86_AT(c, 0xbcb44u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_bcb46:
    X86_TICK(c, 7);
    // 0bcb46  cmp edi, 0x20
    X86_AT(c, 0xbcb46u);
    (void)x86_sub(c, c.r[7], 0x20u, 0, 4);
    // 0bcb49  jge 0xbcb96
    X86_AT(c, 0xbcb49u);
    if (x86_cc(c, 13)) { goto L_bcb96; }
    X86_TICK(c, 2);
    // 0bcb4b  mov dword ptr [ebp - 0x24], 0
    X86_AT(c, 0xbcb4bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), 0x0u);
L_bcb52:
    X86_TICK(c, 12);
    // 0bcb52  cmp dword ptr [ebp - 0x24], 0x10
    X86_AT(c, 0xbcb52u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu))), 0x10u, 0, 4);
    // 0bcb56  jge 0xbcb93
    X86_AT(c, 0xbcb56u);
    if (x86_cc(c, 13)) { goto L_bcb93; }
    X86_TICK(c, 15);
    // 0bcb58  mov al, byte ptr [ecx]
    X86_AT(c, 0xbcb58u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1]))));
    // 0bcb5a  and al, 0xf
    X86_AT(c, 0xbcb5au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0bcb5c  mov byte ptr [ebp - 0x2d], al
    X86_AT(c, 0xbcb5cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)), g8(c, 0));
    // 0bcb5f  and al, al
    X86_AT(c, 0xbcb5fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0bcb61  jne 0xbcb6d
    X86_AT(c, 0xbcb61u);
    if (x86_cc(c, 5)) { goto L_bcb6d; }
    X86_TICK(c, 12);
    // 0bcb63  mov eax, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xbcb63u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)));
    // 0bcb66  mov al, byte ptr [eax]
    X86_AT(c, 0xbcb66u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0bcb68  and al, 0xf
    X86_AT(c, 0xbcb68u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0bcb6a  mov byte ptr [ebp - 0x2d], al
    X86_AT(c, 0xbcb6au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)), g8(c, 0));
L_bcb6d:
    X86_TICK(c, 15);
    // 0bcb6d  mov al, byte ptr [ecx]
    X86_AT(c, 0xbcb6du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1]))));
    // 0bcb6f  and al, 0xf0
    X86_AT(c, 0xbcb6fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0bcb71  mov byte ptr [ebp - 0x2e], al
    X86_AT(c, 0xbcb71u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u)), g8(c, 0));
    // 0bcb74  and al, al
    X86_AT(c, 0xbcb74u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0bcb76  jne 0xbcb82
    X86_AT(c, 0xbcb76u);
    if (x86_cc(c, 5)) { goto L_bcb82; }
    X86_TICK(c, 12);
    // 0bcb78  mov eax, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xbcb78u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)));
    // 0bcb7b  mov al, byte ptr [eax]
    X86_AT(c, 0xbcb7bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0bcb7d  and al, 0xf0
    X86_AT(c, 0xbcb7du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0bcb7f  mov byte ptr [ebp - 0x2e], al
    X86_AT(c, 0xbcb7fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u)), g8(c, 0));
L_bcb82:
    X86_TICK(c, 33);
    // 0bcb82  mov al, byte ptr [ebp - 0x2d]
    X86_AT(c, 0xbcb82u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u))));
    // 0bcb85  add al, byte ptr [ebp - 0x2e]
    X86_AT(c, 0xbcb85u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u))), 0, 1)); }
    // 0bcb88  mov byte ptr [ecx], al
    X86_AT(c, 0xbcb88u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), g8(c, 0));
    // 0bcb8a  inc ecx
    X86_AT(c, 0xbcb8au);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0bcb8b  inc dword ptr [ebp - 0x2c]
    X86_AT(c, 0xbcb8bu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bcb8e  inc dword ptr [ebp - 0x24]
    X86_AT(c, 0xbcb8eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bcb91  jmp 0xbcb52
    X86_AT(c, 0xbcb91u);
    X86_POLL(c, 0xbcb52u); goto L_bcb52;
L_bcb93:
    X86_TICK(c, 9);
    // 0bcb93  inc edi
    X86_AT(c, 0xbcb93u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bcb94  jmp 0xbcb46
    X86_AT(c, 0xbcb94u);
    X86_POLL(c, 0xbcb46u); goto L_bcb46;
L_bcb96:
    X86_TICK(c, 6);
    // 0bcb96  mov ecx, 0x5f1a8
    X86_AT(c, 0xbcb96u);
    c.r[1] = 0x5F1A8u;
    // 0bcb9b  mov dword ptr [ebp - 0x2c], 0x471a8
    X86_AT(c, 0xbcb9bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), 0x471A8u);
    // 0bcba2  sub edi, edi
    X86_AT(c, 0xbcba2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_bcba4:
    X86_TICK(c, 7);
    // 0bcba4  cmp edi, 0x20
    X86_AT(c, 0xbcba4u);
    (void)x86_sub(c, c.r[7], 0x20u, 0, 4);
    // 0bcba7  jge 0xbcbf4
    X86_AT(c, 0xbcba7u);
    if (x86_cc(c, 13)) { goto L_bcbf4; }
    X86_TICK(c, 2);
    // 0bcba9  mov dword ptr [ebp - 0x24], 0
    X86_AT(c, 0xbcba9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), 0x0u);
L_bcbb0:
    X86_TICK(c, 12);
    // 0bcbb0  cmp dword ptr [ebp - 0x24], 0x10
    X86_AT(c, 0xbcbb0u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu))), 0x10u, 0, 4);
    // 0bcbb4  jge 0xbcbf1
    X86_AT(c, 0xbcbb4u);
    if (x86_cc(c, 13)) { goto L_bcbf1; }
    X86_TICK(c, 15);
    // 0bcbb6  mov al, byte ptr [ecx]
    X86_AT(c, 0xbcbb6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1]))));
    // 0bcbb8  and al, 0xf
    X86_AT(c, 0xbcbb8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0bcbba  mov byte ptr [ebp - 0x2d], al
    X86_AT(c, 0xbcbbau);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)), g8(c, 0));
    // 0bcbbd  and al, al
    X86_AT(c, 0xbcbbdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0bcbbf  jne 0xbcbcb
    X86_AT(c, 0xbcbbfu);
    if (x86_cc(c, 5)) { goto L_bcbcb; }
    X86_TICK(c, 12);
    // 0bcbc1  mov eax, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xbcbc1u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)));
    // 0bcbc4  mov al, byte ptr [eax]
    X86_AT(c, 0xbcbc4u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0bcbc6  and al, 0xf
    X86_AT(c, 0xbcbc6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0bcbc8  mov byte ptr [ebp - 0x2d], al
    X86_AT(c, 0xbcbc8u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)), g8(c, 0));
L_bcbcb:
    X86_TICK(c, 15);
    // 0bcbcb  mov al, byte ptr [ecx]
    X86_AT(c, 0xbcbcbu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1]))));
    // 0bcbcd  and al, 0xf0
    X86_AT(c, 0xbcbcdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0bcbcf  mov byte ptr [ebp - 0x2e], al
    X86_AT(c, 0xbcbcfu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u)), g8(c, 0));
    // 0bcbd2  and al, al
    X86_AT(c, 0xbcbd2u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0bcbd4  jne 0xbcbe0
    X86_AT(c, 0xbcbd4u);
    if (x86_cc(c, 5)) { goto L_bcbe0; }
    X86_TICK(c, 12);
    // 0bcbd6  mov eax, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xbcbd6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)));
    // 0bcbd9  mov al, byte ptr [eax]
    X86_AT(c, 0xbcbd9u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0bcbdb  and al, 0xf0
    X86_AT(c, 0xbcbdbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0bcbdd  mov byte ptr [ebp - 0x2e], al
    X86_AT(c, 0xbcbddu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u)), g8(c, 0));
L_bcbe0:
    X86_TICK(c, 33);
    // 0bcbe0  mov al, byte ptr [ebp - 0x2d]
    X86_AT(c, 0xbcbe0u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u))));
    // 0bcbe3  add al, byte ptr [ebp - 0x2e]
    X86_AT(c, 0xbcbe3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u))), 0, 1)); }
    // 0bcbe6  mov byte ptr [ecx], al
    X86_AT(c, 0xbcbe6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), g8(c, 0));
    // 0bcbe8  inc ecx
    X86_AT(c, 0xbcbe8u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0bcbe9  inc dword ptr [ebp - 0x2c]
    X86_AT(c, 0xbcbe9u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bcbec  inc dword ptr [ebp - 0x24]
    X86_AT(c, 0xbcbecu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bcbef  jmp 0xbcbb0
    X86_AT(c, 0xbcbefu);
    X86_POLL(c, 0xbcbb0u); goto L_bcbb0;
L_bcbf1:
    X86_TICK(c, 9);
    // 0bcbf1  inc edi
    X86_AT(c, 0xbcbf1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bcbf2  jmp 0xbcba4
    X86_AT(c, 0xbcbf2u);
    X86_POLL(c, 0xbcba4u); goto L_bcba4;
L_bcbf4:
    X86_TICK(c, 6);
    // 0bcbf4  mov ecx, 0x63da8
    X86_AT(c, 0xbcbf4u);
    c.r[1] = 0x63DA8u;
    // 0bcbf9  mov dword ptr [ebp - 0x2c], 0x471a8
    X86_AT(c, 0xbcbf9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), 0x471A8u);
    // 0bcc00  sub edi, edi
    X86_AT(c, 0xbcc00u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_bcc02:
    X86_TICK(c, 7);
    // 0bcc02  cmp edi, 0x20
    X86_AT(c, 0xbcc02u);
    (void)x86_sub(c, c.r[7], 0x20u, 0, 4);
    // 0bcc05  jge 0xbcc52
    X86_AT(c, 0xbcc05u);
    if (x86_cc(c, 13)) { goto L_bcc52; }
    X86_TICK(c, 2);
    // 0bcc07  mov dword ptr [ebp - 0x24], 0
    X86_AT(c, 0xbcc07u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), 0x0u);
L_bcc0e:
    X86_TICK(c, 12);
    // 0bcc0e  cmp dword ptr [ebp - 0x24], 0x10
    X86_AT(c, 0xbcc0eu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu))), 0x10u, 0, 4);
    // 0bcc12  jge 0xbcc4f
    X86_AT(c, 0xbcc12u);
    if (x86_cc(c, 13)) { goto L_bcc4f; }
    X86_TICK(c, 15);
    // 0bcc14  mov al, byte ptr [ecx]
    X86_AT(c, 0xbcc14u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1]))));
    // 0bcc16  and al, 0xf
    X86_AT(c, 0xbcc16u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0bcc18  mov byte ptr [ebp - 0x2d], al
    X86_AT(c, 0xbcc18u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)), g8(c, 0));
    // 0bcc1b  and al, al
    X86_AT(c, 0xbcc1bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0bcc1d  jne 0xbcc29
    X86_AT(c, 0xbcc1du);
    if (x86_cc(c, 5)) { goto L_bcc29; }
    X86_TICK(c, 12);
    // 0bcc1f  mov eax, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xbcc1fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)));
    // 0bcc22  mov al, byte ptr [eax]
    X86_AT(c, 0xbcc22u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0bcc24  and al, 0xf
    X86_AT(c, 0xbcc24u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0bcc26  mov byte ptr [ebp - 0x2d], al
    X86_AT(c, 0xbcc26u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)), g8(c, 0));
L_bcc29:
    X86_TICK(c, 15);
    // 0bcc29  mov al, byte ptr [ecx]
    X86_AT(c, 0xbcc29u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1]))));
    // 0bcc2b  and al, 0xf0
    X86_AT(c, 0xbcc2bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0bcc2d  mov byte ptr [ebp - 0x2e], al
    X86_AT(c, 0xbcc2du);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u)), g8(c, 0));
    // 0bcc30  and al, al
    X86_AT(c, 0xbcc30u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0bcc32  jne 0xbcc3e
    X86_AT(c, 0xbcc32u);
    if (x86_cc(c, 5)) { goto L_bcc3e; }
    X86_TICK(c, 12);
    // 0bcc34  mov eax, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xbcc34u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)));
    // 0bcc37  mov al, byte ptr [eax]
    X86_AT(c, 0xbcc37u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0bcc39  and al, 0xf0
    X86_AT(c, 0xbcc39u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0bcc3b  mov byte ptr [ebp - 0x2e], al
    X86_AT(c, 0xbcc3bu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u)), g8(c, 0));
L_bcc3e:
    X86_TICK(c, 33);
    // 0bcc3e  mov al, byte ptr [ebp - 0x2d]
    X86_AT(c, 0xbcc3eu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u))));
    // 0bcc41  add al, byte ptr [ebp - 0x2e]
    X86_AT(c, 0xbcc41u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u))), 0, 1)); }
    // 0bcc44  mov byte ptr [ecx], al
    X86_AT(c, 0xbcc44u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), g8(c, 0));
    // 0bcc46  inc ecx
    X86_AT(c, 0xbcc46u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0bcc47  inc dword ptr [ebp - 0x2c]
    X86_AT(c, 0xbcc47u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bcc4a  inc dword ptr [ebp - 0x24]
    X86_AT(c, 0xbcc4au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bcc4d  jmp 0xbcc0e
    X86_AT(c, 0xbcc4du);
    X86_POLL(c, 0xbcc0eu); goto L_bcc0e;
L_bcc4f:
    X86_TICK(c, 9);
    // 0bcc4f  inc edi
    X86_AT(c, 0xbcc4fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bcc50  jmp 0xbcc02
    X86_AT(c, 0xbcc50u);
    X86_POLL(c, 0xbcc02u); goto L_bcc02;
L_bcc52:
    X86_TICK(c, 6);
    // 0bcc52  mov ecx, 0x63fa8
    X86_AT(c, 0xbcc52u);
    c.r[1] = 0x63FA8u;
    // 0bcc57  mov dword ptr [ebp - 0x2c], 0x471a8
    X86_AT(c, 0xbcc57u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), 0x471A8u);
    // 0bcc5e  sub edi, edi
    X86_AT(c, 0xbcc5eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_bcc60:
    X86_TICK(c, 7);
    // 0bcc60  cmp edi, 0x20
    X86_AT(c, 0xbcc60u);
    (void)x86_sub(c, c.r[7], 0x20u, 0, 4);
    // 0bcc63  jge 0xbccb0
    X86_AT(c, 0xbcc63u);
    if (x86_cc(c, 13)) { goto L_bccb0; }
    X86_TICK(c, 2);
    // 0bcc65  mov dword ptr [ebp - 0x24], 0
    X86_AT(c, 0xbcc65u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), 0x0u);
L_bcc6c:
    X86_TICK(c, 12);
    // 0bcc6c  cmp dword ptr [ebp - 0x24], 0x10
    X86_AT(c, 0xbcc6cu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu))), 0x10u, 0, 4);
    // 0bcc70  jge 0xbccad
    X86_AT(c, 0xbcc70u);
    if (x86_cc(c, 13)) { goto L_bccad; }
    X86_TICK(c, 15);
    // 0bcc72  mov al, byte ptr [ecx]
    X86_AT(c, 0xbcc72u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1]))));
    // 0bcc74  and al, 0xf
    X86_AT(c, 0xbcc74u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0bcc76  mov byte ptr [ebp - 0x2d], al
    X86_AT(c, 0xbcc76u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)), g8(c, 0));
    // 0bcc79  and al, al
    X86_AT(c, 0xbcc79u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0bcc7b  jne 0xbcc87
    X86_AT(c, 0xbcc7bu);
    if (x86_cc(c, 5)) { goto L_bcc87; }
    X86_TICK(c, 12);
    // 0bcc7d  mov eax, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xbcc7du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)));
    // 0bcc80  mov al, byte ptr [eax]
    X86_AT(c, 0xbcc80u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0bcc82  and al, 0xf
    X86_AT(c, 0xbcc82u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0bcc84  mov byte ptr [ebp - 0x2d], al
    X86_AT(c, 0xbcc84u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)), g8(c, 0));
L_bcc87:
    X86_TICK(c, 15);
    // 0bcc87  mov al, byte ptr [ecx]
    X86_AT(c, 0xbcc87u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1]))));
    // 0bcc89  and al, 0xf0
    X86_AT(c, 0xbcc89u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0bcc8b  mov byte ptr [ebp - 0x2e], al
    X86_AT(c, 0xbcc8bu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u)), g8(c, 0));
    // 0bcc8e  and al, al
    X86_AT(c, 0xbcc8eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0bcc90  jne 0xbcc9c
    X86_AT(c, 0xbcc90u);
    if (x86_cc(c, 5)) { goto L_bcc9c; }
    X86_TICK(c, 12);
    // 0bcc92  mov eax, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xbcc92u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)));
    // 0bcc95  mov al, byte ptr [eax]
    X86_AT(c, 0xbcc95u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0bcc97  and al, 0xf0
    X86_AT(c, 0xbcc97u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0bcc99  mov byte ptr [ebp - 0x2e], al
    X86_AT(c, 0xbcc99u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u)), g8(c, 0));
L_bcc9c:
    X86_TICK(c, 33);
    // 0bcc9c  mov al, byte ptr [ebp - 0x2d]
    X86_AT(c, 0xbcc9cu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u))));
    // 0bcc9f  add al, byte ptr [ebp - 0x2e]
    X86_AT(c, 0xbcc9fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u))), 0, 1)); }
    // 0bcca2  mov byte ptr [ecx], al
    X86_AT(c, 0xbcca2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), g8(c, 0));
    // 0bcca4  inc ecx
    X86_AT(c, 0xbcca4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0bcca5  inc dword ptr [ebp - 0x2c]
    X86_AT(c, 0xbcca5u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bcca8  inc dword ptr [ebp - 0x24]
    X86_AT(c, 0xbcca8u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bccab  jmp 0xbcc6c
    X86_AT(c, 0xbccabu);
    X86_POLL(c, 0xbcc6cu); goto L_bcc6c;
L_bccad:
    X86_TICK(c, 9);
    // 0bccad  inc edi
    X86_AT(c, 0xbccadu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bccae  jmp 0xbcc60
    X86_AT(c, 0xbccaeu);
    X86_POLL(c, 0xbcc60u); goto L_bcc60;
L_bccb0:
    X86_TICK(c, 26);
    // 0bccb0  mov dword ptr [0x9c460], 0x63da8
    X86_AT(c, 0xbccb0u);
    wr32((c.sbase[3] + (uint32_t)(0x9C460u)), 0x63DA8u);
    // 0bccba  pop edi
    X86_AT(c, 0xbccbau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bccbb  pop esi
    X86_AT(c, 0xbccbbu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bccbc  leave 
    X86_AT(c, 0xbccbcu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bccbd  ret 
    X86_AT(c, 0xbccbdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbc86cu, "ran off the end of a function");
}
void f_000bccc0(X86Cpu& c) {
    X86_TICK(c, 164);
    // 0bccc0  push ebp
    X86_AT(c, 0xbccc0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bccc1  mov ebp, esp
    X86_AT(c, 0xbccc1u);
    c.r[5] = c.r[4];
    // 0bccc3  sub esp, 8
    X86_AT(c, 0xbccc3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0bccc6  push ebx
    X86_AT(c, 0xbccc6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bccc7  push esi
    X86_AT(c, 0xbccc7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bccc8  push edi
    X86_AT(c, 0xbccc8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bccc9  mov edi, 0x46fa8
    X86_AT(c, 0xbccc9u);
    c.r[7] = 0x46FA8u;
    // 0bccce  mov eax, 0x46200
    X86_AT(c, 0xbccceu);
    c.r[0] = 0x46200u;
    // 0bccd3  mov edx, dword ptr [0x9c700]
    X86_AT(c, 0xbccd3u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x9C700u)));
    // 0bccd9  shl edx, 9
    X86_AT(c, 0xbccd9u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[2] = r; }
    // 0bccdc  lea esi, [eax + edx*1 + 0x3ada8]
    X86_AT(c, 0xbccdcu);
    c.r[6] = (uint32_t)(c.r[0] + c.r[2] + 0x3ADA8u);
    // 0bcce3  push esi
    X86_AT(c, 0xbcce3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bcce4  push edi
    X86_AT(c, 0xbcce4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bcce5  mov ecx, 0x80
    X86_AT(c, 0xbcce5u);
    c.r[1] = 0x80u;
    // 0bccea  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xbcceau);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0bccec  pop edi
    X86_AT(c, 0xbccecu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bcced  pop esi
    X86_AT(c, 0xbccedu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bccee  lea edi, [eax + 0x4da8]
    X86_AT(c, 0xbcceeu);
    c.r[7] = (uint32_t)(c.r[0] + 0x4DA8u);
    // 0bccf4  lea esi, [eax + edx*1 + 0x3eda8]
    X86_AT(c, 0xbccf4u);
    c.r[6] = (uint32_t)(c.r[0] + c.r[2] + 0x3EDA8u);
    // 0bccfb  push esi
    X86_AT(c, 0xbccfbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bccfc  push edi
    X86_AT(c, 0xbccfcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bccfd  mov ecx, 0x80
    X86_AT(c, 0xbccfdu);
    c.r[1] = 0x80u;
    // 0bcd02  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xbcd02u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0bcd04  pop edi
    X86_AT(c, 0xbcd04u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bcd05  pop esi
    X86_AT(c, 0xbcd05u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bcd06  lea edi, [eax + 0x1fa8]
    X86_AT(c, 0xbcd06u);
    c.r[7] = (uint32_t)(c.r[0] + 0x1FA8u);
    // 0bcd0c  lea esi, [eax + edx*1 + 0x3cda8]
    X86_AT(c, 0xbcd0cu);
    c.r[6] = (uint32_t)(c.r[0] + c.r[2] + 0x3CDA8u);
    // 0bcd13  push esi
    X86_AT(c, 0xbcd13u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bcd14  push edi
    X86_AT(c, 0xbcd14u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bcd15  mov ecx, 0x80
    X86_AT(c, 0xbcd15u);
    c.r[1] = 0x80u;
    // 0bcd1a  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xbcd1au);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0bcd1c  pop edi
    X86_AT(c, 0xbcd1cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bcd1d  pop esi
    X86_AT(c, 0xbcd1du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bcd1e  lea edi, [eax + 0x4fa8]
    X86_AT(c, 0xbcd1eu);
    c.r[7] = (uint32_t)(c.r[0] + 0x4FA8u);
    // 0bcd24  lea esi, [eax + edx*1 + 0x40da8]
    X86_AT(c, 0xbcd24u);
    c.r[6] = (uint32_t)(c.r[0] + c.r[2] + 0x40DA8u);
    // 0bcd2b  push esi
    X86_AT(c, 0xbcd2bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bcd2c  push edi
    X86_AT(c, 0xbcd2cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bcd2d  mov ecx, 0x80
    X86_AT(c, 0xbcd2du);
    c.r[1] = 0x80u;
    // 0bcd32  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xbcd32u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0bcd34  pop edi
    X86_AT(c, 0xbcd34u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bcd35  pop esi
    X86_AT(c, 0xbcd35u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bcd36  lea edi, [eax + 0x51a8]
    X86_AT(c, 0xbcd36u);
    c.r[7] = (uint32_t)(c.r[0] + 0x51A8u);
    // 0bcd3c  lea esi, [eax + edx*1 + 0x42da8]
    X86_AT(c, 0xbcd3cu);
    c.r[6] = (uint32_t)(c.r[0] + c.r[2] + 0x42DA8u);
    // 0bcd43  push esi
    X86_AT(c, 0xbcd43u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bcd44  push edi
    X86_AT(c, 0xbcd44u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bcd45  mov ecx, 0x80
    X86_AT(c, 0xbcd45u);
    c.r[1] = 0x80u;
    // 0bcd4a  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xbcd4au);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0bcd4c  pop edi
    X86_AT(c, 0xbcd4cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bcd4d  pop esi
    X86_AT(c, 0xbcd4du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bcd4e  inc dword ptr [0x9c700]
    X86_AT(c, 0xbcd4eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x9C700u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bcd54  cmp dword ptr [0x9c700], 0x10
    X86_AT(c, 0xbcd54u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x9C700u))), 0x10u, 0, 4);
    // 0bcd5b  jne 0xbcd67
    X86_AT(c, 0xbcd5bu);
    if (x86_cc(c, 5)) { goto L_bcd67; }
    X86_TICK(c, 2);
    // 0bcd5d  mov dword ptr [0x9c700], 0
    X86_AT(c, 0xbcd5du);
    wr32((c.sbase[3] + (uint32_t)(0x9C700u)), 0x0u);
L_bcd67:
    X86_TICK(c, 6);
    // 0bcd67  mov edi, 0x491a8
    X86_AT(c, 0xbcd67u);
    c.r[7] = 0x491A8u;
    // 0bcd6c  mov esi, 0x7eda8
    X86_AT(c, 0xbcd6cu);
    c.r[6] = 0x7EDA8u;
    // 0bcd71  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xbcd71u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_bcd78:
    X86_TICK(c, 12);
    // 0bcd78  cmp dword ptr [ebp - 4], 0xf
    X86_AT(c, 0xbcd78u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0xFu, 0, 4);
    // 0bcd7c  jge 0xbcdad
    X86_AT(c, 0xbcd7cu);
    if (x86_cc(c, 13)) { goto L_bcdad; }
    X86_TICK(c, 4);
    // 0bcd7e  mov ebx, 0x481a8
    X86_AT(c, 0xbcd7eu);
    c.r[3] = 0x481A8u;
    // 0bcd83  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xbcd83u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_bcd8a:
    X86_TICK(c, 11);
    // 0bcd8a  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xbcd8au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0bcd8d  cmp eax, 0x80
    X86_AT(c, 0xbcd8du);
    (void)x86_sub(c, c.r[0], 0x80u, 0, 4);
    // 0bcd92  jge 0xbcda8
    X86_AT(c, 0xbcd92u);
    if (x86_cc(c, 13)) { goto L_bcda8; }
    X86_TICK(c, 31);
    // 0bcd94  mov edx, dword ptr [esi]
    X86_AT(c, 0xbcd94u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0bcd96  or edx, dword ptr [ebx]
    X86_AT(c, 0xbcd96u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 4); }
    // 0bcd98  mov dword ptr [edi], edx
    X86_AT(c, 0xbcd98u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[2]);
    // 0bcd9a  add edi, 4
    X86_AT(c, 0xbcd9au);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 0bcd9d  add esi, 4
    X86_AT(c, 0xbcd9du);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 0bcda0  add ebx, 4
    X86_AT(c, 0xbcda0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0bcda3  inc dword ptr [ebp - 8]
    X86_AT(c, 0xbcda3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bcda6  jmp 0xbcd8a
    X86_AT(c, 0xbcda6u);
    X86_POLL(c, 0xbcd8au); goto L_bcd8a;
L_bcda8:
    X86_TICK(c, 13);
    // 0bcda8  inc dword ptr [ebp - 4]
    X86_AT(c, 0xbcda8u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bcdab  jmp 0xbcd78
    X86_AT(c, 0xbcdabu);
    X86_POLL(c, 0xbcd78u); goto L_bcd78;
L_bcdad:
    X86_TICK(c, 12);
    // 0bcdad  cmp word ptr [0x9c538], 0
    X86_AT(c, 0xbcdadu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x9C538u))), 0x0u, 0, 2);
    // 0bcdb5  jne 0xbce00
    X86_AT(c, 0xbcdb5u);
    if (x86_cc(c, 5)) { goto L_bce00; }
    X86_TICK(c, 13);
    // 0bcdb7  mov eax, 0x621a8
    X86_AT(c, 0xbcdb7u);
    c.r[0] = 0x621A8u;
    // 0bcdbc  cmp eax, dword ptr [0x9c488]
    X86_AT(c, 0xbcdbcu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x9C488u))), 0, 4);
    // 0bcdc2  jne 0xbcdd0
    X86_AT(c, 0xbcdc2u);
    if (x86_cc(c, 5)) { goto L_bcdd0; }
    X86_TICK(c, 9);
    // 0bcdc4  mov dword ptr [0x9c488], 0x623a8
    X86_AT(c, 0xbcdc4u);
    wr32((c.sbase[3] + (uint32_t)(0x9C488u)), 0x623A8u);
    // 0bcdce  jmp 0xbce00
    X86_AT(c, 0xbcdceu);
    goto L_bce00;
L_bcdd0:
    X86_TICK(c, 13);
    // 0bcdd0  mov eax, 0x623a8
    X86_AT(c, 0xbcdd0u);
    c.r[0] = 0x623A8u;
    // 0bcdd5  cmp eax, dword ptr [0x9c488]
    X86_AT(c, 0xbcdd5u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x9C488u))), 0, 4);
    // 0bcddb  jne 0xbcde9
    X86_AT(c, 0xbcddbu);
    if (x86_cc(c, 5)) { goto L_bcde9; }
    X86_TICK(c, 9);
    // 0bcddd  mov dword ptr [0x9c488], 0x625a8
    X86_AT(c, 0xbcdddu);
    wr32((c.sbase[3] + (uint32_t)(0x9C488u)), 0x625A8u);
    // 0bcde7  jmp 0xbce00
    X86_AT(c, 0xbcde7u);
    goto L_bce00;
L_bcde9:
    X86_TICK(c, 13);
    // 0bcde9  mov eax, 0x625a8
    X86_AT(c, 0xbcde9u);
    c.r[0] = 0x625A8u;
    // 0bcdee  cmp eax, dword ptr [0x9c488]
    X86_AT(c, 0xbcdeeu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x9C488u))), 0, 4);
    // 0bcdf4  jne 0xbce00
    X86_AT(c, 0xbcdf4u);
    if (x86_cc(c, 5)) { goto L_bce00; }
    X86_TICK(c, 2);
    // 0bcdf6  mov dword ptr [0x9c488], 0x621a8
    X86_AT(c, 0xbcdf6u);
    wr32((c.sbase[3] + (uint32_t)(0x9C488u)), 0x621A8u);
L_bce00:
    X86_TICK(c, 12);
    // 0bce00  cmp word ptr [0x9c532], 0
    X86_AT(c, 0xbce00u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x9C532u))), 0x0u, 0, 2);
    // 0bce08  jne 0xbce2d
    X86_AT(c, 0xbce08u);
    if (x86_cc(c, 5)) { goto L_bce2d; }
    X86_TICK(c, 13);
    // 0bce0a  mov eax, 0x5f3a8
    X86_AT(c, 0xbce0au);
    c.r[0] = 0x5F3A8u;
    // 0bce0f  cmp eax, dword ptr [0x9c458]
    X86_AT(c, 0xbce0fu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x9C458u))), 0, 4);
    // 0bce15  jne 0xbce23
    X86_AT(c, 0xbce15u);
    if (x86_cc(c, 5)) { goto L_bce23; }
    X86_TICK(c, 9);
    // 0bce17  mov dword ptr [0x9c458], 0x5f5a8
    X86_AT(c, 0xbce17u);
    wr32((c.sbase[3] + (uint32_t)(0x9C458u)), 0x5F5A8u);
    // 0bce21  jmp 0xbce2d
    X86_AT(c, 0xbce21u);
    goto L_bce2d;
L_bce23:
    X86_TICK(c, 2);
    // 0bce23  mov dword ptr [0x9c458], 0x5f3a8
    X86_AT(c, 0xbce23u);
    wr32((c.sbase[3] + (uint32_t)(0x9C458u)), 0x5F3A8u);
L_bce2d:
    X86_TICK(c, 12);
    // 0bce2d  cmp word ptr [0x9c534], 0
    X86_AT(c, 0xbce2du);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x9C534u))), 0x0u, 0, 2);
    // 0bce35  jne 0xbce63
    X86_AT(c, 0xbce35u);
    if (x86_cc(c, 5)) { goto L_bce63; }
    X86_TICK(c, 12);
    // 0bce37  cmp dword ptr [0xa4a56], 0
    X86_AT(c, 0xbce37u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x0u, 0, 4);
    // 0bce3e  jne 0xbce63
    X86_AT(c, 0xbce3eu);
    if (x86_cc(c, 5)) { goto L_bce63; }
    X86_TICK(c, 13);
    // 0bce40  mov eax, 0x5efa8
    X86_AT(c, 0xbce40u);
    c.r[0] = 0x5EFA8u;
    // 0bce45  cmp eax, dword ptr [0x9c454]
    X86_AT(c, 0xbce45u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x9C454u))), 0, 4);
    // 0bce4b  jne 0xbce59
    X86_AT(c, 0xbce4bu);
    if (x86_cc(c, 5)) { goto L_bce59; }
    X86_TICK(c, 9);
    // 0bce4d  mov dword ptr [0x9c454], 0x5f1a8
    X86_AT(c, 0xbce4du);
    wr32((c.sbase[3] + (uint32_t)(0x9C454u)), 0x5F1A8u);
    // 0bce57  jmp 0xbce63
    X86_AT(c, 0xbce57u);
    goto L_bce63;
L_bce59:
    X86_TICK(c, 2);
    // 0bce59  mov dword ptr [0x9c454], 0x5efa8
    X86_AT(c, 0xbce59u);
    wr32((c.sbase[3] + (uint32_t)(0x9C454u)), 0x5EFA8u);
L_bce63:
    X86_TICK(c, 18);
    // 0bce63  dec word ptr [0x9c532]
    X86_AT(c, 0xbce63u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x9C532u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0bce6a  cmp word ptr [0x9c532], 0xffff
    X86_AT(c, 0xbce6au);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x9C532u))), 0xFFFFu, 0, 2);
    // 0bce72  jne 0xbce7d
    X86_AT(c, 0xbce72u);
    if (x86_cc(c, 5)) { goto L_bce7d; }
    X86_TICK(c, 2);
    // 0bce74  mov word ptr [0x9c532], 4
    X86_AT(c, 0xbce74u);
    wr16((c.sbase[3] + (uint32_t)(0x9C532u)), 0x4u);
L_bce7d:
    X86_TICK(c, 18);
    // 0bce7d  dec word ptr [0x9c534]
    X86_AT(c, 0xbce7du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x9C534u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0bce84  cmp word ptr [0x9c534], 0xffff
    X86_AT(c, 0xbce84u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x9C534u))), 0xFFFFu, 0, 2);
    // 0bce8c  jne 0xbce97
    X86_AT(c, 0xbce8cu);
    if (x86_cc(c, 5)) { goto L_bce97; }
    X86_TICK(c, 2);
    // 0bce8e  mov word ptr [0x9c534], 3
    X86_AT(c, 0xbce8eu);
    wr16((c.sbase[3] + (uint32_t)(0x9C534u)), 0x3u);
L_bce97:
    X86_TICK(c, 18);
    // 0bce97  dec word ptr [0x9c536]
    X86_AT(c, 0xbce97u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x9C536u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0bce9e  cmp word ptr [0x9c536], 0xffff
    X86_AT(c, 0xbce9eu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x9C536u))), 0xFFFFu, 0, 2);
    // 0bcea6  jne 0xbceb1
    X86_AT(c, 0xbcea6u);
    if (x86_cc(c, 5)) { goto L_bceb1; }
    X86_TICK(c, 2);
    // 0bcea8  mov word ptr [0x9c536], 2
    X86_AT(c, 0xbcea8u);
    wr16((c.sbase[3] + (uint32_t)(0x9C536u)), 0x2u);
L_bceb1:
    X86_TICK(c, 18);
    // 0bceb1  dec word ptr [0x9c538]
    X86_AT(c, 0xbceb1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x9C538u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0bceb8  cmp word ptr [0x9c538], 0xffff
    X86_AT(c, 0xbceb8u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x9C538u))), 0xFFFFu, 0, 2);
    // 0bcec0  jne 0xbcecb
    X86_AT(c, 0xbcec0u);
    if (x86_cc(c, 5)) { goto L_bcecb; }
    X86_TICK(c, 2);
    // 0bcec2  mov word ptr [0x9c538], 3
    X86_AT(c, 0xbcec2u);
    wr16((c.sbase[3] + (uint32_t)(0x9C538u)), 0x3u);
L_bcecb:
    X86_TICK(c, 28);
    // 0bcecb  pop edi
    X86_AT(c, 0xbcecbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bcecc  pop esi
    X86_AT(c, 0xbceccu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bcecd  pop ebx
    X86_AT(c, 0xbcecdu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0bcece  leave 
    X86_AT(c, 0xbceceu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bcecf  ret 
    X86_AT(c, 0xbcecfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbccc0u, "ran off the end of a function");
}
void f_000bced0(X86Cpu& c) {
    X86_TICK(c, 37);
    // 0bced0  push ebp
    X86_AT(c, 0xbced0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bced1  mov ebp, esp
    X86_AT(c, 0xbced1u);
    c.r[5] = c.r[4];
    // 0bced3  sub esp, 0xc
    X86_AT(c, 0xbced3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0bced6  push ebx
    X86_AT(c, 0xbced6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bced7  push esi
    X86_AT(c, 0xbced7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bced8  push edi
    X86_AT(c, 0xbced8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bced9  lea eax, [ebp - 0xc]
    X86_AT(c, 0xbced9u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0bcedc  push eax
    X86_AT(c, 0xbcedcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bcedd  lea eax, [ebp - 8]
    X86_AT(c, 0xbceddu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0bcee0  push eax
    X86_AT(c, 0xbcee0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bcee1  lea eax, [ebp - 4]
    X86_AT(c, 0xbcee1u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0bcee4  push eax
    X86_AT(c, 0xbcee4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bcee5  push 0x8000
    X86_AT(c, 0xbcee5u);
    { uint32_t v = 0x8000u; push32(c, v); }
    // 0bceea  push 0x46da8
    X86_AT(c, 0xbceeau);
    { uint32_t v = 0x46DA8u; push32(c, v); }
    // 0bceef  push 0x21d8
    X86_AT(c, 0xbceefu);
    { uint32_t v = 0x21D8u; push32(c, v); }
    // 0bcef4  call 0xbb1f0
    X86_AT(c, 0xbcef4u);
    push32(c, 0xbcef9u); x86_call_known(c, 0xbb1f0u, f_000bb1f0); X86_RET(c, 0xbcef9u);
    X86_TICK(c, 8);
    // 0bcef9  mov esi, 0x7eda8
    X86_AT(c, 0xbcef9u);
    c.r[6] = 0x7EDA8u;
    // 0bcefe  mov ebx, 0x491a8
    X86_AT(c, 0xbcefeu);
    c.r[3] = 0x491A8u;
    // 0bcf03  sub edi, edi
    X86_AT(c, 0xbcf03u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0bcf05  add esp, 0x18
    X86_AT(c, 0xbcf05u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_bcf08:
    X86_TICK(c, 7);
    // 0bcf08  cmp edi, 0x780
    X86_AT(c, 0xbcf08u);
    (void)x86_sub(c, c.r[7], 0x780u, 0, 4);
    // 0bcf0e  jge 0xbcf19
    X86_AT(c, 0xbcf0eu);
    if (x86_cc(c, 13)) { goto L_bcf19; }
    X86_TICK(c, 15);
    // 0bcf10  mov eax, dword ptr [ebx + edi*4]
    X86_AT(c, 0xbcf10u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[7] * 4)));
    // 0bcf13  mov dword ptr [esi + edi*4], eax
    X86_AT(c, 0xbcf13u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4)), c.r[0]);
    // 0bcf16  inc edi
    X86_AT(c, 0xbcf16u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bcf17  jmp 0xbcf08
    X86_AT(c, 0xbcf17u);
    X86_POLL(c, 0xbcf08u); goto L_bcf08;
L_bcf19:
    X86_TICK(c, 25);
    // 0bcf19  lea eax, [ebp - 0xc]
    X86_AT(c, 0xbcf19u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0bcf1c  push eax
    X86_AT(c, 0xbcf1cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bcf1d  lea ecx, [ebp - 8]
    X86_AT(c, 0xbcf1du);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0bcf20  push ecx
    X86_AT(c, 0xbcf20u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0bcf21  lea edx, [ebp - 4]
    X86_AT(c, 0xbcf21u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0bcf24  push edx
    X86_AT(c, 0xbcf24u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0bcf25  push 0x8000
    X86_AT(c, 0xbcf25u);
    { uint32_t v = 0x8000u; push32(c, v); }
    // 0bcf2a  push 0x4eda8
    X86_AT(c, 0xbcf2au);
    { uint32_t v = 0x4EDA8u; push32(c, v); }
    // 0bcf2f  push 0x21e8
    X86_AT(c, 0xbcf2fu);
    { uint32_t v = 0x21E8u; push32(c, v); }
    // 0bcf34  call 0xbb1f0
    X86_AT(c, 0xbcf34u);
    push32(c, 0xbcf39u); x86_call_known(c, 0xbb1f0u, f_000bb1f0); X86_RET(c, 0xbcf39u);
    X86_TICK(c, 25);
    // 0bcf39  lea eax, [ebp - 0xc]
    X86_AT(c, 0xbcf39u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0bcf3c  push eax
    X86_AT(c, 0xbcf3cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bcf3d  lea ecx, [ebp - 8]
    X86_AT(c, 0xbcf3du);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0bcf40  push ecx
    X86_AT(c, 0xbcf40u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0bcf41  lea edx, [ebp - 4]
    X86_AT(c, 0xbcf41u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0bcf44  push edx
    X86_AT(c, 0xbcf44u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0bcf45  push 0x8000
    X86_AT(c, 0xbcf45u);
    { uint32_t v = 0x8000u; push32(c, v); }
    // 0bcf4a  push 0x56da8
    X86_AT(c, 0xbcf4au);
    { uint32_t v = 0x56DA8u; push32(c, v); }
    // 0bcf4f  push 0x21fc
    X86_AT(c, 0xbcf4fu);
    { uint32_t v = 0x21FCu; push32(c, v); }
    // 0bcf54  call 0xbb1f0
    X86_AT(c, 0xbcf54u);
    push32(c, 0xbcf59u); x86_call_known(c, 0xbb1f0u, f_000bb1f0); X86_RET(c, 0xbcf59u);
    X86_TICK(c, 25);
    // 0bcf59  lea eax, [ebp - 0xc]
    X86_AT(c, 0xbcf59u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0bcf5c  push eax
    X86_AT(c, 0xbcf5cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bcf5d  lea ecx, [ebp - 8]
    X86_AT(c, 0xbcf5du);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0bcf60  push ecx
    X86_AT(c, 0xbcf60u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0bcf61  lea edx, [ebp - 4]
    X86_AT(c, 0xbcf61u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0bcf64  push edx
    X86_AT(c, 0xbcf64u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0bcf65  push 0x8000
    X86_AT(c, 0xbcf65u);
    { uint32_t v = 0x8000u; push32(c, v); }
    // 0bcf6a  push 0x5eda8
    X86_AT(c, 0xbcf6au);
    { uint32_t v = 0x5EDA8u; push32(c, v); }
    // 0bcf6f  push 0x2210
    X86_AT(c, 0xbcf6fu);
    { uint32_t v = 0x2210u; push32(c, v); }
    // 0bcf74  call 0xbb1f0
    X86_AT(c, 0xbcf74u);
    push32(c, 0xbcf79u); x86_call_known(c, 0xbb1f0u, f_000bb1f0); X86_RET(c, 0xbcf79u);
    X86_TICK(c, 27);
    // 0bcf79  add esp, 0x48
    X86_AT(c, 0xbcf79u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x48u, 0, 4); }
    // 0bcf7c  lea eax, [ebp - 0xc]
    X86_AT(c, 0xbcf7cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0bcf7f  push eax
    X86_AT(c, 0xbcf7fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bcf80  lea ecx, [ebp - 8]
    X86_AT(c, 0xbcf80u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0bcf83  push ecx
    X86_AT(c, 0xbcf83u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0bcf84  lea edx, [ebp - 4]
    X86_AT(c, 0xbcf84u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0bcf87  push edx
    X86_AT(c, 0xbcf87u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0bcf88  push 0x8000
    X86_AT(c, 0xbcf88u);
    { uint32_t v = 0x8000u; push32(c, v); }
    // 0bcf8d  push 0x66da8
    X86_AT(c, 0xbcf8du);
    { uint32_t v = 0x66DA8u; push32(c, v); }
    // 0bcf92  push 0x2224
    X86_AT(c, 0xbcf92u);
    { uint32_t v = 0x2224u; push32(c, v); }
    // 0bcf97  call 0xbb1f0
    X86_AT(c, 0xbcf97u);
    push32(c, 0xbcf9cu); x86_call_known(c, 0xbb1f0u, f_000bb1f0); X86_RET(c, 0xbcf9cu);
    X86_TICK(c, 25);
    // 0bcf9c  lea eax, [ebp - 0xc]
    X86_AT(c, 0xbcf9cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0bcf9f  push eax
    X86_AT(c, 0xbcf9fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bcfa0  lea ecx, [ebp - 8]
    X86_AT(c, 0xbcfa0u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0bcfa3  push ecx
    X86_AT(c, 0xbcfa3u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0bcfa4  lea edx, [ebp - 4]
    X86_AT(c, 0xbcfa4u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0bcfa7  push edx
    X86_AT(c, 0xbcfa7u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0bcfa8  push 0x8000
    X86_AT(c, 0xbcfa8u);
    { uint32_t v = 0x8000u; push32(c, v); }
    // 0bcfad  push 0x6eda8
    X86_AT(c, 0xbcfadu);
    { uint32_t v = 0x6EDA8u; push32(c, v); }
    // 0bcfb2  push 0x2238
    X86_AT(c, 0xbcfb2u);
    { uint32_t v = 0x2238u; push32(c, v); }
    // 0bcfb7  call 0xbb1f0
    X86_AT(c, 0xbcfb7u);
    push32(c, 0xbcfbcu); x86_call_known(c, 0xbb1f0u, f_000bb1f0); X86_RET(c, 0xbcfbcu);
    X86_TICK(c, 25);
    // 0bcfbc  lea eax, [ebp - 0xc]
    X86_AT(c, 0xbcfbcu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0bcfbf  push eax
    X86_AT(c, 0xbcfbfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bcfc0  lea eax, [ebp - 8]
    X86_AT(c, 0xbcfc0u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0bcfc3  push eax
    X86_AT(c, 0xbcfc3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bcfc4  lea eax, [ebp - 4]
    X86_AT(c, 0xbcfc4u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0bcfc7  push eax
    X86_AT(c, 0xbcfc7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bcfc8  push 0x8000
    X86_AT(c, 0xbcfc8u);
    { uint32_t v = 0x8000u; push32(c, v); }
    // 0bcfcd  push 0x76da8
    X86_AT(c, 0xbcfcdu);
    { uint32_t v = 0x76DA8u; push32(c, v); }
    // 0bcfd2  push 0x224c
    X86_AT(c, 0xbcfd2u);
    { uint32_t v = 0x224Cu; push32(c, v); }
    // 0bcfd7  call 0xbb1f0
    X86_AT(c, 0xbcfd7u);
    push32(c, 0xbcfdcu); x86_call_known(c, 0xbb1f0u, f_000bb1f0); X86_RET(c, 0xbcfdcu);
    X86_TICK(c, 4);
    // 0bcfdc  add esp, 0x48
    X86_AT(c, 0xbcfdcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x48u, 0, 4); }
    // 0bcfdf  sub edi, edi
    X86_AT(c, 0xbcfdfu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_bcfe1:
    X86_TICK(c, 7);
    // 0bcfe1  cmp edi, 0x200
    X86_AT(c, 0xbcfe1u);
    (void)x86_sub(c, c.r[7], 0x200u, 0, 4);
    // 0bcfe7  jge 0xbcff3
    X86_AT(c, 0xbcfe7u);
    if (x86_cc(c, 13)) { goto L_bcff3; }
    X86_TICK(c, 11);
    // 0bcfe9  mov byte ptr [edi + 0x80ba8], 0x99
    X86_AT(c, 0xbcfe9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x80BA8u)), 0x99u);
    // 0bcff0  inc edi
    X86_AT(c, 0xbcff0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bcff1  jmp 0xbcfe1
    X86_AT(c, 0xbcff1u);
    X86_POLL(c, 0xbcfe1u); goto L_bcfe1;
L_bcff3:
    X86_TICK(c, 2);
    // 0bcff3  sub edi, edi
    X86_AT(c, 0xbcff3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_bcff5:
    X86_TICK(c, 7);
    // 0bcff5  cmp edi, 0x200
    X86_AT(c, 0xbcff5u);
    (void)x86_sub(c, c.r[7], 0x200u, 0, 4);
    // 0bcffb  jge 0xbd007
    X86_AT(c, 0xbcffbu);
    if (x86_cc(c, 13)) { goto L_bd007; }
    X86_TICK(c, 11);
    // 0bcffd  mov byte ptr [edi + 0x80da8], 0
    X86_AT(c, 0xbcffdu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x80DA8u)), 0x0u);
    // 0bd004  inc edi
    X86_AT(c, 0xbd004u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bd005  jmp 0xbcff5
    X86_AT(c, 0xbd005u);
    X86_POLL(c, 0xbcff5u); goto L_bcff5;
L_bd007:
    X86_TICK(c, 7);
    // 0bd007  call 0xbdb34
    X86_AT(c, 0xbd007u);
    push32(c, 0xbd00cu); x86_call_known(c, 0xbdb34u, f_000bdb34); X86_RET(c, 0xbd00cu);
    X86_TICK(c, 7);
    // 0bd00c  call 0xbc86c
    X86_AT(c, 0xbd00cu);
    push32(c, 0xbd011u); x86_call_known(c, 0xbc86cu, f_000bc86c); X86_RET(c, 0xbd011u);
    X86_TICK(c, 28);
    // 0bd011  pop edi
    X86_AT(c, 0xbd011u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bd012  pop esi
    X86_AT(c, 0xbd012u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bd013  pop ebx
    X86_AT(c, 0xbd013u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0bd014  leave 
    X86_AT(c, 0xbd014u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bd015  ret 
    X86_AT(c, 0xbd015u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbced0u, "ran off the end of a function");
}
void f_000bd018(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0bd018  push ebp
    X86_AT(c, 0xbd018u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bd019  mov ebp, esp
    X86_AT(c, 0xbd019u);
    c.r[5] = c.r[4];
    // 0bd01b  push edi
    X86_AT(c, 0xbd01bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bd01c  push 0x225e
    X86_AT(c, 0xbd01cu);
    { uint32_t v = 0x225Eu; push32(c, v); }
    // 0bd021  push dword ptr [ebp + 8]
    X86_AT(c, 0xbd021u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0bd024  call 0xd7fc4
    X86_AT(c, 0xbd024u);
    push32(c, 0xbd029u); x86_call_known(c, 0xd7fc4u, f_000d7fc4); X86_RET(c, 0xbd029u);
    X86_TICK(c, 12);
    // 0bd029  add esp, 8
    X86_AT(c, 0xbd029u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0bd02c  xchg edi, eax
    X86_AT(c, 0xbd02cu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0bd02d  and edi, edi
    X86_AT(c, 0xbd02du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0bd02f  jne 0xbd047
    X86_AT(c, 0xbd02fu);
    if (x86_cc(c, 5)) { goto L_bd047; }
    X86_TICK(c, 9);
    // 0bd031  push 0x2264
    X86_AT(c, 0xbd031u);
    { uint32_t v = 0x2264u; push32(c, v); }
    // 0bd036  call 0xbc50c
    X86_AT(c, 0xbd036u);
    push32(c, 0xbd03bu); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xbd03bu);
    X86_TICK(c, 9);
    // 0bd03b  push 3
    X86_AT(c, 0xbd03bu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0bd03d  call 0xb607c
    X86_AT(c, 0xbd03du);
    push32(c, 0xbd042u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xbd042u);
    X86_TICK(c, 9);
    // 0bd042  add esp, 8
    X86_AT(c, 0xbd042u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0bd045  jmp 0xbd062
    X86_AT(c, 0xbd045u);
    goto L_bd062;
L_bd047:
    X86_TICK(c, 15);
    // 0bd047  push edi
    X86_AT(c, 0xbd047u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bd048  push 1
    X86_AT(c, 0xbd048u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bd04a  push 0x1000
    X86_AT(c, 0xbd04au);
    { uint32_t v = 0x1000u; push32(c, v); }
    // 0bd04f  push 0x8afa8
    X86_AT(c, 0xbd04fu);
    { uint32_t v = 0x8AFA8u; push32(c, v); }
    // 0bd054  call 0xd7ce8
    X86_AT(c, 0xbd054u);
    push32(c, 0xbd059u); x86_call_known(c, 0xd7ce8u, f_000d7ce8); X86_RET(c, 0xbd059u);
    X86_TICK(c, 9);
    // 0bd059  push edi
    X86_AT(c, 0xbd059u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bd05a  call 0xd84c0
    X86_AT(c, 0xbd05au);
    push32(c, 0xbd05fu); x86_call_known(c, 0xd84c0u, f_000d84c0); X86_RET(c, 0xbd05fu);
    X86_TICK(c, 2);
    // 0bd05f  add esp, 0x14
    X86_AT(c, 0xbd05fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_bd062:
    X86_TICK(c, 20);
    // 0bd062  pop edi
    X86_AT(c, 0xbd062u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bd063  leave 
    X86_AT(c, 0xbd063u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bd064  ret 
    X86_AT(c, 0xbd064u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbd018u, "ran off the end of a function");
}
void f_000bd068(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0bd068  push ebp
    X86_AT(c, 0xbd068u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bd069  mov ebp, esp
    X86_AT(c, 0xbd069u);
    c.r[5] = c.r[4];
    // 0bd06b  sub esp, 0x1c
    X86_AT(c, 0xbd06bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x1Cu, 0, 4); }
    // 0bd06e  push ebx
    X86_AT(c, 0xbd06eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bd06f  push esi
    X86_AT(c, 0xbd06fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bd070  push edi
    X86_AT(c, 0xbd070u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bd071  cmp dword ptr [0x9c53c], 0
    X86_AT(c, 0xbd071u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x9C53Cu))), 0x0u, 0, 4);
    // 0bd078  je 0xbd090
    X86_AT(c, 0xbd078u);
    if (x86_cc(c, 4)) { goto L_bd090; }
    X86_TICK(c, 22);
    // 0bd07a  push dword ptr [ebp + 0x10]
    X86_AT(c, 0xbd07au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 0bd07d  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xbd07du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0bd080  push dword ptr [ebp + 8]
    X86_AT(c, 0xbd080u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0bd083  call 0xbd33c
    X86_AT(c, 0xbd083u);
    push32(c, 0xbd088u); x86_call_known(c, 0xbd33cu, f_000bd33c); X86_RET(c, 0xbd088u);
    X86_TICK(c, 9);
    // 0bd088  add esp, 0xc
    X86_AT(c, 0xbd088u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0bd08b  jmp 0xbd336
    X86_AT(c, 0xbd08bu);
    goto L_bd336;
L_bd090:
    X86_TICK(c, 11);
    // 0bd090  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xbd090u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0bd093  cmp eax, 1
    X86_AT(c, 0xbd093u);
    (void)x86_sub(c, c.r[0], 0x1u, 0, 4);
    // 0bd096  je 0xbd0a1
    X86_AT(c, 0xbd096u);
    if (x86_cc(c, 4)) { goto L_bd0a1; }
    X86_TICK(c, 7);
    // 0bd098  cmp eax, 4
    X86_AT(c, 0xbd098u);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0bd09b  jne 0xbd12a
    X86_AT(c, 0xbd09bu);
    if (x86_cc(c, 5)) { goto L_bd12a; }
L_bd0a1:
    X86_TICK(c, 22);
    // 0bd0a1  sub eax, eax
    X86_AT(c, 0xbd0a1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0bd0a3  mov word ptr [0x9c544], ax
    X86_AT(c, 0xbd0a3u);
    wr16((c.sbase[3] + (uint32_t)(0x9C544u)), (c.r[0] & 0xFFFFu));
    // 0bd0a9  sub dword ptr [ebp + 8], 5
    X86_AT(c, 0xbd0a9u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x5u, 0, 4)); }
    // 0bd0ad  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xbd0adu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0bd0b0  cmp eax, edx
    X86_AT(c, 0xbd0b0u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0bd0b2  jle 0xbd0b8
    X86_AT(c, 0xbd0b2u);
    if (x86_cc(c, 14)) { goto L_bd0b8; }
    X86_TICK(c, 7);
    // 0bd0b4  add dword ptr [ebp + 8], 0x40
    X86_AT(c, 0xbd0b4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x40u, 0, 4)); }
L_bd0b8:
    X86_TICK(c, 18);
    // 0bd0b8  sub dword ptr [ebp + 0xc], 5
    X86_AT(c, 0xbd0b8u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x5u, 0, 4)); }
    // 0bd0bc  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xbd0bcu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0bd0bf  and eax, eax
    X86_AT(c, 0xbd0bfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0bd0c1  jge 0xbd0c7
    X86_AT(c, 0xbd0c1u);
    if (x86_cc(c, 13)) { goto L_bd0c7; }
    X86_TICK(c, 7);
    // 0bd0c3  add dword ptr [ebp + 0xc], 0x40
    X86_AT(c, 0xbd0c3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x40u, 0, 4)); }
L_bd0c7:
    X86_TICK(c, 2);
    // 0bd0c7  sub esi, esi
    X86_AT(c, 0xbd0c7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_bd0c9:
    X86_TICK(c, 7);
    // 0bd0c9  cmp esi, 0xb
    X86_AT(c, 0xbd0c9u);
    (void)x86_sub(c, c.r[6], 0xBu, 0, 4);
    // 0bd0cc  jge 0xbd125
    X86_AT(c, 0xbd0ccu);
    if (x86_cc(c, 13)) { goto L_bd125; }
    X86_TICK(c, 8);
    // 0bd0ce  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xbd0ceu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0bd0d1  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xbd0d1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0bd0d4  sub edi, edi
    X86_AT(c, 0xbd0d4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_bd0d6:
    X86_TICK(c, 7);
    // 0bd0d6  cmp edi, 0xb
    X86_AT(c, 0xbd0d6u);
    (void)x86_sub(c, c.r[7], 0xBu, 0, 4);
    // 0bd0d9  jge 0xbd110
    X86_AT(c, 0xbd0d9u);
    if (x86_cc(c, 13)) { goto L_bd110; }
    X86_TICK(c, 39);
    // 0bd0db  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xbd0dbu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0bd0de  shl eax, 6
    X86_AT(c, 0xbd0deu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[0] = r; }
    // 0bd0e1  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0xbd0e1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0bd0e4  mov edx, esi
    X86_AT(c, 0xbd0e4u);
    c.r[2] = c.r[6];
    // 0bd0e6  lea ecx, [edx + edx*8]
    X86_AT(c, 0xbd0e6u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0bd0e9  lea edx, [ecx + edx*2]
    X86_AT(c, 0xbd0e9u);
    c.r[2] = (uint32_t)(c.r[1] + c.r[2] * 2);
    // 0bd0ec  lea ecx, [edi + edx*1]
    X86_AT(c, 0xbd0ecu);
    c.r[1] = (uint32_t)(c.r[7] + c.r[2]);
    // 0bd0ef  mov al, byte ptr [eax + 0x8afa8]
    X86_AT(c, 0xbd0efu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8AFA8u))));
    // 0bd0f5  mov byte ptr [ecx + 0x8cfa8], al
    X86_AT(c, 0xbd0f5u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0x8CFA8u)), g8(c, 0));
    // 0bd0fb  cmp dword ptr [ebp - 4], 0x3f
    X86_AT(c, 0xbd0fbu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x3Fu, 0, 4);
    // 0bd0ff  jne 0xbd10a
    X86_AT(c, 0xbd0ffu);
    if (x86_cc(c, 5)) { goto L_bd10a; }
    X86_TICK(c, 9);
    // 0bd101  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xbd101u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0bd108  jmp 0xbd10d
    X86_AT(c, 0xbd108u);
    goto L_bd10d;
L_bd10a:
    X86_TICK(c, 6);
    // 0bd10a  inc dword ptr [ebp - 4]
    X86_AT(c, 0xbd10au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_bd10d:
    X86_TICK(c, 9);
    // 0bd10d  inc edi
    X86_AT(c, 0xbd10du);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bd10e  jmp 0xbd0d6
    X86_AT(c, 0xbd10eu);
    X86_POLL(c, 0xbd0d6u); goto L_bd0d6;
L_bd110:
    X86_TICK(c, 12);
    // 0bd110  cmp dword ptr [ebp + 0xc], 0x3f
    X86_AT(c, 0xbd110u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0x3Fu, 0, 4);
    // 0bd114  jne 0xbd11f
    X86_AT(c, 0xbd114u);
    if (x86_cc(c, 5)) { goto L_bd11f; }
    X86_TICK(c, 9);
    // 0bd116  mov dword ptr [ebp + 0xc], 0
    X86_AT(c, 0xbd116u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)), 0x0u);
    // 0bd11d  jmp 0xbd122
    X86_AT(c, 0xbd11du);
    goto L_bd122;
L_bd11f:
    X86_TICK(c, 6);
    // 0bd11f  inc dword ptr [ebp + 0xc]
    X86_AT(c, 0xbd11fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_bd122:
    X86_TICK(c, 9);
    // 0bd122  inc esi
    X86_AT(c, 0xbd122u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0bd123  jmp 0xbd0c9
    X86_AT(c, 0xbd123u);
    X86_POLL(c, 0xbd0c9u); goto L_bd0c9;
L_bd125:
    X86_TICK(c, 7);
    // 0bd125  call 0xbd7c8
    X86_AT(c, 0xbd125u);
    push32(c, 0xbd12au); x86_call_known(c, 0xbd7c8u, f_000bd7c8); X86_RET(c, 0xbd12au);
L_bd12a:
    X86_TICK(c, 12);
    // 0bd12a  cmp dword ptr [ebp + 0x10], 2
    X86_AT(c, 0xbd12au);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0x2u, 0, 4);
    // 0bd12e  je 0xbd135
    X86_AT(c, 0xbd12eu);
    if (x86_cc(c, 4)) { goto L_bd135; }
    X86_TICK(c, 7);
    // 0bd130  call 0xbccc0
    X86_AT(c, 0xbd130u);
    push32(c, 0xbd135u); x86_call_known(c, 0xbccc0u, f_000bccc0); X86_RET(c, 0xbd135u);
L_bd135:
    X86_TICK(c, 2);
    // 0bd135  sub esi, esi
    X86_AT(c, 0xbd135u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_bd137:
    X86_TICK(c, 7);
    // 0bd137  cmp esi, 0xb
    X86_AT(c, 0xbd137u);
    (void)x86_sub(c, c.r[6], 0xBu, 0, 4);
    // 0bd13a  jge 0xbd21e
    X86_AT(c, 0xbd13au);
    if (x86_cc(c, 13)) { goto L_bd21e; }
    X86_TICK(c, 2);
    // 0bd140  sub edi, edi
    X86_AT(c, 0xbd140u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_bd142:
    X86_TICK(c, 7);
    // 0bd142  cmp edi, 0xb
    X86_AT(c, 0xbd142u);
    (void)x86_sub(c, c.r[7], 0xBu, 0, 4);
    // 0bd145  jge 0xbd218
    X86_AT(c, 0xbd145u);
    if (x86_cc(c, 13)) { goto L_bd218; }
    X86_TICK(c, 74);
    // 0bd14b  mov eax, 0x46200
    X86_AT(c, 0xbd14bu);
    c.r[0] = 0x46200u;
    // 0bd150  mov edx, esi
    X86_AT(c, 0xbd150u);
    c.r[2] = c.r[6];
    // 0bd152  lea ecx, [edx + edx*8]
    X86_AT(c, 0xbd152u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0bd155  lea edx, [ecx + edx*2]
    X86_AT(c, 0xbd155u);
    c.r[2] = (uint32_t)(c.r[1] + c.r[2] * 2);
    // 0bd158  add edx, edi
    X86_AT(c, 0xbd158u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[7], 0, 4); }
    // 0bd15a  mov cl, byte ptr [eax + edx*1 + 0x46da8]
    X86_AT(c, 0xbd15au);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x46DA8u))));
    // 0bd161  mov byte ptr [ebp - 0x11], cl
    X86_AT(c, 0xbd161u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEFu)), g8(c, 1));
    // 0bd164  mov eax, edi
    X86_AT(c, 0xbd164u);
    c.r[0] = c.r[7];
    // 0bd166  shl eax, 5
    X86_AT(c, 0xbd166u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[0] = r; }
    // 0bd169  mov dword ptr [ebp - 0x18], edx
    X86_AT(c, 0xbd169u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[2]);
    // 0bd16c  cdq 
    X86_AT(c, 0xbd16cu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0bd16d  sub eax, edx
    X86_AT(c, 0xbd16du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0bd16f  sar eax, 1
    X86_AT(c, 0xbd16fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0bd171  mov edx, esi
    X86_AT(c, 0xbd171u);
    c.r[2] = c.r[6];
    // 0bd173  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xbd173u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0bd176  lea eax, [edx + edx*4]
    X86_AT(c, 0xbd176u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0bd179  lea eax, [edx + eax*2]
    X86_AT(c, 0xbd179u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0bd17c  shl eax, 0xa
    X86_AT(c, 0xbd17cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[0] = r; }
    // 0bd17f  cdq 
    X86_AT(c, 0xbd17fu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0bd180  sub eax, edx
    X86_AT(c, 0xbd180u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0bd182  sar eax, 1
    X86_AT(c, 0xbd182u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0bd184  add eax, dword ptr [ebp - 0x1c]
    X86_AT(c, 0xbd184u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))), 0, 4); }
    // 0bd187  add eax, 0x8d0a0
    X86_AT(c, 0xbd187u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8D0A0u, 0, 4); }
    // 0bd18c  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xbd18cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0bd18f  mov eax, dword ptr [ebp - 0x18]
    X86_AT(c, 0xbd18fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 0bd192  cmp byte ptr [eax + 0x8d024], 1
    X86_AT(c, 0xbd192u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8D024u))), 0x1u, 0, 1);
    // 0bd199  jne 0xbd1ab
    X86_AT(c, 0xbd199u);
    if (x86_cc(c, 5)) { goto L_bd1ab; }
    X86_TICK(c, 12);
    // 0bd19b  cmp byte ptr [0x9c2a0], 1
    X86_AT(c, 0xbd19bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x9C2A0u))), 0x1u, 0, 1);
    // 0bd1a2  jne 0xbd1ab
    X86_AT(c, 0xbd1a2u);
    if (x86_cc(c, 5)) { goto L_bd1ab; }
    X86_TICK(c, 9);
    // 0bd1a4  mov ebx, 0x80da8
    X86_AT(c, 0xbd1a4u);
    c.r[3] = 0x80DA8u;
    // 0bd1a9  jmp 0xbd1e2
    X86_AT(c, 0xbd1a9u);
    goto L_bd1e2;
L_bd1ab:
    X86_TICK(c, 13);
    // 0bd1ab  movzx edx, byte ptr [ebp - 0x11]
    X86_AT(c, 0xbd1abu);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEFu)));
    // 0bd1af  and edx, edx
    X86_AT(c, 0xbd1afu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0bd1b1  je 0xbd1cd
    X86_AT(c, 0xbd1b1u);
    if (x86_cc(c, 4)) { goto L_bd1cd; }
    X86_TICK(c, 7);
    // 0bd1b3  cmp edx, 7
    X86_AT(c, 0xbd1b3u);
    (void)x86_sub(c, c.r[2], 0x7u, 0, 4);
    // 0bd1b6  je 0xbd1c5
    X86_AT(c, 0xbd1b6u);
    if (x86_cc(c, 4)) { goto L_bd1c5; }
    X86_TICK(c, 7);
    // 0bd1b8  cmp edx, 8
    X86_AT(c, 0xbd1b8u);
    (void)x86_sub(c, c.r[2], 0x8u, 0, 4);
    // 0bd1bb  jne 0xbd1d5
    X86_AT(c, 0xbd1bbu);
    if (x86_cc(c, 5)) { goto L_bd1d5; }
    X86_TICK(c, 11);
    // 0bd1bd  mov ebx, dword ptr [0x9c458]
    X86_AT(c, 0xbd1bdu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0x9C458u)));
    // 0bd1c3  jmp 0xbd1e2
    X86_AT(c, 0xbd1c3u);
    goto L_bd1e2;
L_bd1c5:
    X86_TICK(c, 11);
    // 0bd1c5  mov ebx, dword ptr [0x9c454]
    X86_AT(c, 0xbd1c5u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0x9C454u)));
    // 0bd1cb  jmp 0xbd1e2
    X86_AT(c, 0xbd1cbu);
    goto L_bd1e2;
L_bd1cd:
    X86_TICK(c, 11);
    // 0bd1cd  mov ebx, dword ptr [0x9c45c]
    X86_AT(c, 0xbd1cdu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0x9C45Cu)));
    // 0bd1d3  jmp 0xbd1e2
    X86_AT(c, 0xbd1d3u);
    goto L_bd1e2;
L_bd1d5:
    X86_TICK(c, 11);
    // 0bd1d5  movzx eax, byte ptr [ebp - 0x11]
    X86_AT(c, 0xbd1d5u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEFu)));
    // 0bd1d9  shl eax, 9
    X86_AT(c, 0xbd1d9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0bd1dc  lea ebx, [eax + 0x46da8]
    X86_AT(c, 0xbd1dcu);
    c.r[3] = (uint32_t)(c.r[0] + 0x46DA8u);
L_bd1e2:
    X86_TICK(c, 2);
    // 0bd1e2  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xbd1e2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_bd1e9:
    X86_TICK(c, 11);
    // 0bd1e9  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xbd1e9u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0bd1ec  cmp eax, 0x20
    X86_AT(c, 0xbd1ecu);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 0bd1ef  jge 0xbd212
    X86_AT(c, 0xbd1efu);
    if (x86_cc(c, 13)) { goto L_bd212; }
    X86_TICK(c, 51);
    // 0bd1f1  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0xbd1f1u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0bd1f4  push esi
    X86_AT(c, 0xbd1f4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bd1f5  push edi
    X86_AT(c, 0xbd1f5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bd1f6  mov esi, ebx
    X86_AT(c, 0xbd1f6u);
    c.r[6] = c.r[3];
    // 0bd1f8  mov edi, edx
    X86_AT(c, 0xbd1f8u);
    c.r[7] = c.r[2];
    // 0bd1fa  mov ecx, 4
    X86_AT(c, 0xbd1fau);
    c.r[1] = 0x4u;
    // 0bd1ff  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xbd1ffu);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0bd201  pop edi
    X86_AT(c, 0xbd201u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bd202  pop esi
    X86_AT(c, 0xbd202u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bd203  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xbd203u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bd206  add dword ptr [ebp - 8], 0xb0
    X86_AT(c, 0xbd206u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xB0u, 0, 4)); }
    // 0bd20d  add ebx, 0x10
    X86_AT(c, 0xbd20du);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x10u, 0, 4); }
    // 0bd210  jmp 0xbd1e9
    X86_AT(c, 0xbd210u);
    X86_POLL(c, 0xbd1e9u); goto L_bd1e9;
L_bd212:
    X86_TICK(c, 9);
    // 0bd212  inc edi
    X86_AT(c, 0xbd212u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bd213  jmp 0xbd142
    X86_AT(c, 0xbd213u);
    X86_POLL(c, 0xbd142u); goto L_bd142;
L_bd218:
    X86_TICK(c, 9);
    // 0bd218  inc esi
    X86_AT(c, 0xbd218u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0bd219  jmp 0xbd137
    X86_AT(c, 0xbd219u);
    X86_POLL(c, 0xbd137u); goto L_bd137;
L_bd21e:
    X86_TICK(c, 7);
    // 0bd21e  call 0xbd8b0
    X86_AT(c, 0xbd21eu);
    push32(c, 0xbd223u); x86_call_known(c, 0xbd8b0u, f_000bd8b0); X86_RET(c, 0xbd223u);
    X86_TICK(c, 9);
    // 0bd223  push 1
    X86_AT(c, 0xbd223u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bd225  call 0xba6a0
    X86_AT(c, 0xbd225u);
    push32(c, 0xbd22au); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xbd22au);
    X86_TICK(c, 14);
    // 0bd22a  add esp, 4
    X86_AT(c, 0xbd22au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0bd22d  cmp dword ptr [ebp + 0x10], 1
    X86_AT(c, 0xbd22du);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 4);
    // 0bd231  jne 0xbd2e1
    X86_AT(c, 0xbd231u);
    if (x86_cc(c, 5)) { goto L_bd2e1; }
    X86_TICK(c, 6);
    // 0bd237  mov dword ptr [0x46808], 1
    X86_AT(c, 0xbd237u);
    wr32((c.sbase[3] + (uint32_t)(0x46808u)), 0x1u);
    // 0bd241  mov byte ptr [0x46813], 0
    X86_AT(c, 0xbd241u);
    wr8((c.sbase[3] + (uint32_t)(0x46813u)), 0x0u);
    // 0bd248  mov dword ptr [ebp - 0x10], 1
    X86_AT(c, 0xbd248u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), 0x1u);
L_bd24f:
    X86_TICK(c, 12);
    // 0bd24f  cmp dword ptr [ebp - 0x10], 8
    X86_AT(c, 0xbd24fu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0x8u, 0, 4);
    // 0bd253  jge 0xbd28a
    X86_AT(c, 0xbd253u);
    if (x86_cc(c, 13)) { goto L_bd28a; }
    X86_TICK(c, 27);
    // 0bd255  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xbd255u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0bd258  mov dword ptr [0x4680c], eax
    X86_AT(c, 0xbd258u);
    wr32((c.sbase[3] + (uint32_t)(0x4680Cu)), c.r[0]);
    // 0bd25d  sub edx, edx
    X86_AT(c, 0xbd25du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0bd25f  mov byte ptr [0x46810], dl
    X86_AT(c, 0xbd25fu);
    wr8((c.sbase[3] + (uint32_t)(0x46810u)), g8(c, 2));
    // 0bd265  mov byte ptr [0x46811], dl
    X86_AT(c, 0xbd265u);
    wr8((c.sbase[3] + (uint32_t)(0x46811u)), g8(c, 2));
    // 0bd26b  mov byte ptr [0x46812], dl
    X86_AT(c, 0xbd26bu);
    wr8((c.sbase[3] + (uint32_t)(0x46812u)), g8(c, 2));
    // 0bd271  push 0x46808
    X86_AT(c, 0xbd271u);
    { uint32_t v = 0x46808u; push32(c, v); }
    // 0bd276  push 1
    X86_AT(c, 0xbd276u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bd278  push 0x46208
    X86_AT(c, 0xbd278u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0bd27d  call 0x19c
    X86_AT(c, 0xbd27du);
    push32(c, 0xbd282u); x86_call_known(c, 0x19cu, f_0000019c); X86_RET(c, 0xbd282u);
    X86_TICK(c, 15);
    // 0bd282  inc dword ptr [ebp - 0x10]
    X86_AT(c, 0xbd282u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bd285  add esp, 0xc
    X86_AT(c, 0xbd285u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0bd288  jmp 0xbd24f
    X86_AT(c, 0xbd288u);
    X86_POLL(c, 0xbd24fu); goto L_bd24f;
L_bd28a:
    X86_TICK(c, 25);
    // 0bd28a  mov dword ptr [0x46808], 0x8d0a0
    X86_AT(c, 0xbd28au);
    wr32((c.sbase[3] + (uint32_t)(0x46808u)), 0x8D0A0u);
    // 0bd294  mov word ptr [0x4680c], 0x14
    X86_AT(c, 0xbd294u);
    wr16((c.sbase[3] + (uint32_t)(0x4680Cu)), 0x14u);
    // 0bd29d  mov word ptr [0x4680e], 0x40
    X86_AT(c, 0xbd29du);
    wr16((c.sbase[3] + (uint32_t)(0x4680Eu)), 0x40u);
    // 0bd2a6  mov word ptr [0x46810], 0x60
    X86_AT(c, 0xbd2a6u);
    wr16((c.sbase[3] + (uint32_t)(0x46810u)), 0x60u);
    // 0bd2af  mov word ptr [0x46812], 0x19f
    X86_AT(c, 0xbd2afu);
    wr16((c.sbase[3] + (uint32_t)(0x46812u)), 0x19Fu);
    // 0bd2b8  mov word ptr [0x46814], 0x1bf
    X86_AT(c, 0xbd2b8u);
    wr16((c.sbase[3] + (uint32_t)(0x46814u)), 0x1BFu);
    // 0bd2c1  push 0x46808
    X86_AT(c, 0xbd2c1u);
    { uint32_t v = 0x46808u; push32(c, v); }
    // 0bd2c6  push 0
    X86_AT(c, 0xbd2c6u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bd2c8  push 0x46208
    X86_AT(c, 0xbd2c8u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0bd2cd  call 0x5c4
    X86_AT(c, 0xbd2cdu);
    push32(c, 0xbd2d2u); x86_call_known(c, 0x5c4u, f_000005c4); X86_RET(c, 0xbd2d2u);
    X86_TICK(c, 9);
    // 0bd2d2  push 0x1194
    X86_AT(c, 0xbd2d2u);
    { uint32_t v = 0x1194u; push32(c, v); }
    // 0bd2d7  call 0xbc5e0
    X86_AT(c, 0xbd2d7u);
    push32(c, 0xbd2dcu); x86_call_known(c, 0xbc5e0u, f_000bc5e0); X86_RET(c, 0xbd2dcu);
    X86_TICK(c, 9);
    // 0bd2dc  add esp, 0x10
    X86_AT(c, 0xbd2dcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0bd2df  jmp 0xbd32c
    X86_AT(c, 0xbd2dfu);
    goto L_bd32c;
L_bd2e1:
    X86_TICK(c, 25);
    // 0bd2e1  mov dword ptr [0x46808], 0x8d0a0
    X86_AT(c, 0xbd2e1u);
    wr32((c.sbase[3] + (uint32_t)(0x46808u)), 0x8D0A0u);
    // 0bd2eb  mov word ptr [0x4680c], 0x14
    X86_AT(c, 0xbd2ebu);
    wr16((c.sbase[3] + (uint32_t)(0x4680Cu)), 0x14u);
    // 0bd2f4  mov word ptr [0x4680e], 0x40
    X86_AT(c, 0xbd2f4u);
    wr16((c.sbase[3] + (uint32_t)(0x4680Eu)), 0x40u);
    // 0bd2fd  mov word ptr [0x46810], 0x60
    X86_AT(c, 0xbd2fdu);
    wr16((c.sbase[3] + (uint32_t)(0x46810u)), 0x60u);
    // 0bd306  mov word ptr [0x46812], 0x19f
    X86_AT(c, 0xbd306u);
    wr16((c.sbase[3] + (uint32_t)(0x46812u)), 0x19Fu);
    // 0bd30f  mov word ptr [0x46814], 0x1bf
    X86_AT(c, 0xbd30fu);
    wr16((c.sbase[3] + (uint32_t)(0x46814u)), 0x1BFu);
    // 0bd318  push 0x46808
    X86_AT(c, 0xbd318u);
    { uint32_t v = 0x46808u; push32(c, v); }
    // 0bd31d  push 0
    X86_AT(c, 0xbd31du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bd31f  push 0x46208
    X86_AT(c, 0xbd31fu);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0bd324  call 0x5c4
    X86_AT(c, 0xbd324u);
    push32(c, 0xbd329u); x86_call_known(c, 0x5c4u, f_000005c4); X86_RET(c, 0xbd329u);
    X86_TICK(c, 2);
    // 0bd329  add esp, 0xc
    X86_AT(c, 0xbd329u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_bd32c:
    X86_TICK(c, 9);
    // 0bd32c  push 0
    X86_AT(c, 0xbd32cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bd32e  call 0xba6a0
    X86_AT(c, 0xbd32eu);
    push32(c, 0xbd333u); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xbd333u);
    X86_TICK(c, 2);
    // 0bd333  add esp, 4
    X86_AT(c, 0xbd333u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_bd336:
    X86_TICK(c, 28);
    // 0bd336  pop edi
    X86_AT(c, 0xbd336u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bd337  pop esi
    X86_AT(c, 0xbd337u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bd338  pop ebx
    X86_AT(c, 0xbd338u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0bd339  leave 
    X86_AT(c, 0xbd339u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bd33a  ret 
    X86_AT(c, 0xbd33au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbd068u, "ran off the end of a function");
}
void f_000bd33c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0bd33c  push ebp
    X86_AT(c, 0xbd33cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bd33d  mov ebp, esp
    X86_AT(c, 0xbd33du);
    c.r[5] = c.r[4];
    // 0bd33f  sub esp, 0x1c
    X86_AT(c, 0xbd33fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x1Cu, 0, 4); }
    // 0bd342  push ebx
    X86_AT(c, 0xbd342u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bd343  push esi
    X86_AT(c, 0xbd343u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bd344  push edi
    X86_AT(c, 0xbd344u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bd345  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xbd345u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0bd348  cmp eax, 1
    X86_AT(c, 0xbd348u);
    (void)x86_sub(c, c.r[0], 0x1u, 0, 4);
    // 0bd34b  je 0xbd356
    X86_AT(c, 0xbd34bu);
    if (x86_cc(c, 4)) { goto L_bd356; }
    X86_TICK(c, 7);
    // 0bd34d  cmp eax, 4
    X86_AT(c, 0xbd34du);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0bd350  jne 0xbd3da
    X86_AT(c, 0xbd350u);
    if (x86_cc(c, 5)) { goto L_bd3da; }
L_bd356:
    X86_TICK(c, 21);
    // 0bd356  sub eax, eax
    X86_AT(c, 0xbd356u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0bd358  mov word ptr [0x9c544], ax
    X86_AT(c, 0xbd358u);
    wr16((c.sbase[3] + (uint32_t)(0x9C544u)), (c.r[0] & 0xFFFFu));
    // 0bd35e  sub dword ptr [ebp + 8], 5
    X86_AT(c, 0xbd35eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x5u, 0, 4)); }
    // 0bd362  sub dword ptr [ebp + 0xc], 5
    X86_AT(c, 0xbd362u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x5u, 0, 4)); }
    // 0bd366  xchg esi, eax
    X86_AT(c, 0xbd366u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_bd367:
    X86_TICK(c, 7);
    // 0bd367  cmp esi, 0xb
    X86_AT(c, 0xbd367u);
    (void)x86_sub(c, c.r[6], 0xBu, 0, 4);
    // 0bd36a  jge 0xbd3d5
    X86_AT(c, 0xbd36au);
    if (x86_cc(c, 13)) { goto L_bd3d5; }
    X86_TICK(c, 8);
    // 0bd370  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xbd370u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0bd373  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xbd373u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0bd376  sub edi, edi
    X86_AT(c, 0xbd376u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_bd378:
    X86_TICK(c, 7);
    // 0bd378  cmp edi, 0xb
    X86_AT(c, 0xbd378u);
    (void)x86_sub(c, c.r[7], 0xBu, 0, 4);
    // 0bd37b  jge 0xbd3cf
    X86_AT(c, 0xbd37bu);
    if (x86_cc(c, 13)) { goto L_bd3cf; }
    X86_TICK(c, 11);
    // 0bd37d  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xbd37du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0bd380  and eax, eax
    X86_AT(c, 0xbd380u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0bd382  jl 0xbd395
    X86_AT(c, 0xbd382u);
    if (x86_cc(c, 12)) { goto L_bd395; }
    X86_TICK(c, 11);
    // 0bd384  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xbd384u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0bd387  and edx, edx
    X86_AT(c, 0xbd387u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0bd389  jl 0xbd395
    X86_AT(c, 0xbd389u);
    if (x86_cc(c, 12)) { goto L_bd395; }
    X86_TICK(c, 7);
    // 0bd38b  cmp eax, 0x40
    X86_AT(c, 0xbd38bu);
    (void)x86_sub(c, c.r[0], 0x40u, 0, 4);
    // 0bd38e  jge 0xbd395
    X86_AT(c, 0xbd38eu);
    if (x86_cc(c, 13)) { goto L_bd395; }
    X86_TICK(c, 7);
    // 0bd390  cmp edx, 0x40
    X86_AT(c, 0xbd390u);
    (void)x86_sub(c, c.r[2], 0x40u, 0, 4);
    // 0bd393  jl 0xbd3a9
    X86_AT(c, 0xbd393u);
    if (x86_cc(c, 12)) { goto L_bd3a9; }
L_bd395:
    X86_TICK(c, 17);
    // 0bd395  mov eax, esi
    X86_AT(c, 0xbd395u);
    c.r[0] = c.r[6];
    // 0bd397  lea edx, [eax + eax*8]
    X86_AT(c, 0xbd397u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0bd39a  lea eax, [edx + eax*2]
    X86_AT(c, 0xbd39au);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0bd39d  lea edx, [edi + eax*1]
    X86_AT(c, 0xbd39du);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0bd3a0  mov byte ptr [edx + 0x8cfa8], 2
    X86_AT(c, 0xbd3a0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0x8CFA8u)), 0x2u);
    // 0bd3a7  jmp 0xbd3c9
    X86_AT(c, 0xbd3a7u);
    goto L_bd3c9;
L_bd3a9:
    X86_TICK(c, 27);
    // 0bd3a9  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xbd3a9u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0bd3ac  shl eax, 6
    X86_AT(c, 0xbd3acu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[0] = r; }
    // 0bd3af  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0xbd3afu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0bd3b2  mov edx, esi
    X86_AT(c, 0xbd3b2u);
    c.r[2] = c.r[6];
    // 0bd3b4  lea ecx, [edx + edx*8]
    X86_AT(c, 0xbd3b4u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0bd3b7  lea edx, [ecx + edx*2]
    X86_AT(c, 0xbd3b7u);
    c.r[2] = (uint32_t)(c.r[1] + c.r[2] * 2);
    // 0bd3ba  lea ecx, [edi + edx*1]
    X86_AT(c, 0xbd3bau);
    c.r[1] = (uint32_t)(c.r[7] + c.r[2]);
    // 0bd3bd  mov al, byte ptr [eax + 0x8afa8]
    X86_AT(c, 0xbd3bdu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8AFA8u))));
    // 0bd3c3  mov byte ptr [ecx + 0x8cfa8], al
    X86_AT(c, 0xbd3c3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0x8CFA8u)), g8(c, 0));
L_bd3c9:
    X86_TICK(c, 15);
    // 0bd3c9  inc dword ptr [ebp - 4]
    X86_AT(c, 0xbd3c9u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bd3cc  inc edi
    X86_AT(c, 0xbd3ccu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bd3cd  jmp 0xbd378
    X86_AT(c, 0xbd3cdu);
    X86_POLL(c, 0xbd378u); goto L_bd378;
L_bd3cf:
    X86_TICK(c, 15);
    // 0bd3cf  inc dword ptr [ebp + 0xc]
    X86_AT(c, 0xbd3cfu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bd3d2  inc esi
    X86_AT(c, 0xbd3d2u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0bd3d3  jmp 0xbd367
    X86_AT(c, 0xbd3d3u);
    X86_POLL(c, 0xbd367u); goto L_bd367;
L_bd3d5:
    X86_TICK(c, 7);
    // 0bd3d5  call 0xbd7c8
    X86_AT(c, 0xbd3d5u);
    push32(c, 0xbd3dau); x86_call_known(c, 0xbd7c8u, f_000bd7c8); X86_RET(c, 0xbd3dau);
L_bd3da:
    X86_TICK(c, 12);
    // 0bd3da  cmp dword ptr [ebp + 0x10], 2
    X86_AT(c, 0xbd3dau);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0x2u, 0, 4);
    // 0bd3de  je 0xbd3e5
    X86_AT(c, 0xbd3deu);
    if (x86_cc(c, 4)) { goto L_bd3e5; }
    X86_TICK(c, 7);
    // 0bd3e0  call 0xbccc0
    X86_AT(c, 0xbd3e0u);
    push32(c, 0xbd3e5u); x86_call_known(c, 0xbccc0u, f_000bccc0); X86_RET(c, 0xbd3e5u);
L_bd3e5:
    X86_TICK(c, 2);
    // 0bd3e5  sub esi, esi
    X86_AT(c, 0xbd3e5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_bd3e7:
    X86_TICK(c, 7);
    // 0bd3e7  cmp esi, 0xb
    X86_AT(c, 0xbd3e7u);
    (void)x86_sub(c, c.r[6], 0xBu, 0, 4);
    // 0bd3ea  jge 0xbd4b2
    X86_AT(c, 0xbd3eau);
    if (x86_cc(c, 13)) { goto L_bd4b2; }
    X86_TICK(c, 2);
    // 0bd3f0  sub edi, edi
    X86_AT(c, 0xbd3f0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_bd3f2:
    X86_TICK(c, 7);
    // 0bd3f2  cmp edi, 0xb
    X86_AT(c, 0xbd3f2u);
    (void)x86_sub(c, c.r[7], 0xBu, 0, 4);
    // 0bd3f5  jge 0xbd4ac
    X86_AT(c, 0xbd3f5u);
    if (x86_cc(c, 13)) { goto L_bd4ac; }
    X86_TICK(c, 74);
    // 0bd3fb  mov eax, 0x46200
    X86_AT(c, 0xbd3fbu);
    c.r[0] = 0x46200u;
    // 0bd400  mov edx, esi
    X86_AT(c, 0xbd400u);
    c.r[2] = c.r[6];
    // 0bd402  lea ecx, [edx + edx*8]
    X86_AT(c, 0xbd402u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0bd405  lea edx, [ecx + edx*2]
    X86_AT(c, 0xbd405u);
    c.r[2] = (uint32_t)(c.r[1] + c.r[2] * 2);
    // 0bd408  add edx, edi
    X86_AT(c, 0xbd408u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[7], 0, 4); }
    // 0bd40a  mov cl, byte ptr [eax + edx*1 + 0x46da8]
    X86_AT(c, 0xbd40au);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x46DA8u))));
    // 0bd411  mov byte ptr [ebp - 0x11], cl
    X86_AT(c, 0xbd411u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEFu)), g8(c, 1));
    // 0bd414  mov eax, edi
    X86_AT(c, 0xbd414u);
    c.r[0] = c.r[7];
    // 0bd416  shl eax, 5
    X86_AT(c, 0xbd416u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[0] = r; }
    // 0bd419  mov dword ptr [ebp - 0x18], edx
    X86_AT(c, 0xbd419u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[2]);
    // 0bd41c  cdq 
    X86_AT(c, 0xbd41cu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0bd41d  sub eax, edx
    X86_AT(c, 0xbd41du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0bd41f  sar eax, 1
    X86_AT(c, 0xbd41fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0bd421  mov edx, esi
    X86_AT(c, 0xbd421u);
    c.r[2] = c.r[6];
    // 0bd423  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xbd423u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0bd426  lea eax, [edx + edx*4]
    X86_AT(c, 0xbd426u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0bd429  lea eax, [edx + eax*2]
    X86_AT(c, 0xbd429u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0bd42c  shl eax, 0xa
    X86_AT(c, 0xbd42cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[0] = r; }
    // 0bd42f  cdq 
    X86_AT(c, 0xbd42fu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0bd430  sub eax, edx
    X86_AT(c, 0xbd430u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0bd432  sar eax, 1
    X86_AT(c, 0xbd432u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0bd434  add eax, dword ptr [ebp - 0x1c]
    X86_AT(c, 0xbd434u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))), 0, 4); }
    // 0bd437  add eax, 0x8d0a0
    X86_AT(c, 0xbd437u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8D0A0u, 0, 4); }
    // 0bd43c  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xbd43cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0bd43f  mov eax, dword ptr [ebp - 0x18]
    X86_AT(c, 0xbd43fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 0bd442  cmp byte ptr [eax + 0x8d024], 1
    X86_AT(c, 0xbd442u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8D024u))), 0x1u, 0, 1);
    // 0bd449  jne 0xbd45b
    X86_AT(c, 0xbd449u);
    if (x86_cc(c, 5)) { goto L_bd45b; }
    X86_TICK(c, 12);
    // 0bd44b  cmp byte ptr [0x9c2a0], 1
    X86_AT(c, 0xbd44bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x9C2A0u))), 0x1u, 0, 1);
    // 0bd452  jne 0xbd45b
    X86_AT(c, 0xbd452u);
    if (x86_cc(c, 5)) { goto L_bd45b; }
    X86_TICK(c, 9);
    // 0bd454  mov ebx, 0x80da8
    X86_AT(c, 0xbd454u);
    c.r[3] = 0x80DA8u;
    // 0bd459  jmp 0xbd476
    X86_AT(c, 0xbd459u);
    goto L_bd476;
L_bd45b:
    X86_TICK(c, 12);
    // 0bd45b  cmp byte ptr [ebp - 0x11], 0
    X86_AT(c, 0xbd45bu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEFu))), 0x0u, 0, 1);
    // 0bd45f  jne 0xbd469
    X86_AT(c, 0xbd45fu);
    if (x86_cc(c, 5)) { goto L_bd469; }
    X86_TICK(c, 11);
    // 0bd461  mov ebx, dword ptr [0x9c460]
    X86_AT(c, 0xbd461u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0x9C460u)));
    // 0bd467  jmp 0xbd476
    X86_AT(c, 0xbd467u);
    goto L_bd476;
L_bd469:
    X86_TICK(c, 11);
    // 0bd469  movzx eax, byte ptr [ebp - 0x11]
    X86_AT(c, 0xbd469u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEFu)));
    // 0bd46d  shl eax, 9
    X86_AT(c, 0xbd46du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0bd470  lea ebx, [eax + 0x46da8]
    X86_AT(c, 0xbd470u);
    c.r[3] = (uint32_t)(c.r[0] + 0x46DA8u);
L_bd476:
    X86_TICK(c, 2);
    // 0bd476  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xbd476u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_bd47d:
    X86_TICK(c, 11);
    // 0bd47d  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xbd47du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0bd480  cmp eax, 0x20
    X86_AT(c, 0xbd480u);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 0bd483  jge 0xbd4a6
    X86_AT(c, 0xbd483u);
    if (x86_cc(c, 13)) { goto L_bd4a6; }
    X86_TICK(c, 51);
    // 0bd485  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0xbd485u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0bd488  push esi
    X86_AT(c, 0xbd488u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bd489  push edi
    X86_AT(c, 0xbd489u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bd48a  mov esi, ebx
    X86_AT(c, 0xbd48au);
    c.r[6] = c.r[3];
    // 0bd48c  mov edi, edx
    X86_AT(c, 0xbd48cu);
    c.r[7] = c.r[2];
    // 0bd48e  mov ecx, 4
    X86_AT(c, 0xbd48eu);
    c.r[1] = 0x4u;
    // 0bd493  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xbd493u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0bd495  pop edi
    X86_AT(c, 0xbd495u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bd496  pop esi
    X86_AT(c, 0xbd496u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bd497  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xbd497u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bd49a  add dword ptr [ebp - 8], 0xb0
    X86_AT(c, 0xbd49au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xB0u, 0, 4)); }
    // 0bd4a1  add ebx, 0x10
    X86_AT(c, 0xbd4a1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x10u, 0, 4); }
    // 0bd4a4  jmp 0xbd47d
    X86_AT(c, 0xbd4a4u);
    X86_POLL(c, 0xbd47du); goto L_bd47d;
L_bd4a6:
    X86_TICK(c, 9);
    // 0bd4a6  inc edi
    X86_AT(c, 0xbd4a6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bd4a7  jmp 0xbd3f2
    X86_AT(c, 0xbd4a7u);
    X86_POLL(c, 0xbd3f2u); goto L_bd3f2;
L_bd4ac:
    X86_TICK(c, 9);
    // 0bd4ac  inc esi
    X86_AT(c, 0xbd4acu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0bd4ad  jmp 0xbd3e7
    X86_AT(c, 0xbd4adu);
    X86_POLL(c, 0xbd3e7u); goto L_bd3e7;
L_bd4b2:
    X86_TICK(c, 7);
    // 0bd4b2  call 0xbd8b0
    X86_AT(c, 0xbd4b2u);
    push32(c, 0xbd4b7u); x86_call_known(c, 0xbd8b0u, f_000bd8b0); X86_RET(c, 0xbd4b7u);
    X86_TICK(c, 9);
    // 0bd4b7  push 1
    X86_AT(c, 0xbd4b7u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bd4b9  call 0xba6a0
    X86_AT(c, 0xbd4b9u);
    push32(c, 0xbd4beu); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xbd4beu);
    X86_TICK(c, 14);
    // 0bd4be  add esp, 4
    X86_AT(c, 0xbd4beu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0bd4c1  cmp dword ptr [ebp + 0x10], 1
    X86_AT(c, 0xbd4c1u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 4);
    // 0bd4c5  jne 0xbd575
    X86_AT(c, 0xbd4c5u);
    if (x86_cc(c, 5)) { goto L_bd575; }
    X86_TICK(c, 6);
    // 0bd4cb  mov dword ptr [0x46808], 1
    X86_AT(c, 0xbd4cbu);
    wr32((c.sbase[3] + (uint32_t)(0x46808u)), 0x1u);
    // 0bd4d5  mov byte ptr [0x46813], 0
    X86_AT(c, 0xbd4d5u);
    wr8((c.sbase[3] + (uint32_t)(0x46813u)), 0x0u);
    // 0bd4dc  mov dword ptr [ebp - 0x10], 1
    X86_AT(c, 0xbd4dcu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), 0x1u);
L_bd4e3:
    X86_TICK(c, 12);
    // 0bd4e3  cmp dword ptr [ebp - 0x10], 8
    X86_AT(c, 0xbd4e3u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0x8u, 0, 4);
    // 0bd4e7  jge 0xbd51e
    X86_AT(c, 0xbd4e7u);
    if (x86_cc(c, 13)) { goto L_bd51e; }
    X86_TICK(c, 27);
    // 0bd4e9  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xbd4e9u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0bd4ec  mov dword ptr [0x4680c], eax
    X86_AT(c, 0xbd4ecu);
    wr32((c.sbase[3] + (uint32_t)(0x4680Cu)), c.r[0]);
    // 0bd4f1  sub edx, edx
    X86_AT(c, 0xbd4f1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0bd4f3  mov byte ptr [0x46810], dl
    X86_AT(c, 0xbd4f3u);
    wr8((c.sbase[3] + (uint32_t)(0x46810u)), g8(c, 2));
    // 0bd4f9  mov byte ptr [0x46811], dl
    X86_AT(c, 0xbd4f9u);
    wr8((c.sbase[3] + (uint32_t)(0x46811u)), g8(c, 2));
    // 0bd4ff  mov byte ptr [0x46812], dl
    X86_AT(c, 0xbd4ffu);
    wr8((c.sbase[3] + (uint32_t)(0x46812u)), g8(c, 2));
    // 0bd505  push 0x46808
    X86_AT(c, 0xbd505u);
    { uint32_t v = 0x46808u; push32(c, v); }
    // 0bd50a  push 1
    X86_AT(c, 0xbd50au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bd50c  push 0x46208
    X86_AT(c, 0xbd50cu);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0bd511  call 0x19c
    X86_AT(c, 0xbd511u);
    push32(c, 0xbd516u); x86_call_known(c, 0x19cu, f_0000019c); X86_RET(c, 0xbd516u);
    X86_TICK(c, 15);
    // 0bd516  inc dword ptr [ebp - 0x10]
    X86_AT(c, 0xbd516u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bd519  add esp, 0xc
    X86_AT(c, 0xbd519u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0bd51c  jmp 0xbd4e3
    X86_AT(c, 0xbd51cu);
    X86_POLL(c, 0xbd4e3u); goto L_bd4e3;
L_bd51e:
    X86_TICK(c, 25);
    // 0bd51e  mov dword ptr [0x46808], 0x8d0a0
    X86_AT(c, 0xbd51eu);
    wr32((c.sbase[3] + (uint32_t)(0x46808u)), 0x8D0A0u);
    // 0bd528  mov word ptr [0x4680c], 0x14
    X86_AT(c, 0xbd528u);
    wr16((c.sbase[3] + (uint32_t)(0x4680Cu)), 0x14u);
    // 0bd531  mov word ptr [0x4680e], 0x40
    X86_AT(c, 0xbd531u);
    wr16((c.sbase[3] + (uint32_t)(0x4680Eu)), 0x40u);
    // 0bd53a  mov word ptr [0x46810], 0x60
    X86_AT(c, 0xbd53au);
    wr16((c.sbase[3] + (uint32_t)(0x46810u)), 0x60u);
    // 0bd543  mov word ptr [0x46812], 0x19f
    X86_AT(c, 0xbd543u);
    wr16((c.sbase[3] + (uint32_t)(0x46812u)), 0x19Fu);
    // 0bd54c  mov word ptr [0x46814], 0x1bf
    X86_AT(c, 0xbd54cu);
    wr16((c.sbase[3] + (uint32_t)(0x46814u)), 0x1BFu);
    // 0bd555  push 0x46808
    X86_AT(c, 0xbd555u);
    { uint32_t v = 0x46808u; push32(c, v); }
    // 0bd55a  push 0
    X86_AT(c, 0xbd55au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bd55c  push 0x46208
    X86_AT(c, 0xbd55cu);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0bd561  call 0x5c4
    X86_AT(c, 0xbd561u);
    push32(c, 0xbd566u); x86_call_known(c, 0x5c4u, f_000005c4); X86_RET(c, 0xbd566u);
    X86_TICK(c, 9);
    // 0bd566  push 0x1194
    X86_AT(c, 0xbd566u);
    { uint32_t v = 0x1194u; push32(c, v); }
    // 0bd56b  call 0xbc5e0
    X86_AT(c, 0xbd56bu);
    push32(c, 0xbd570u); x86_call_known(c, 0xbc5e0u, f_000bc5e0); X86_RET(c, 0xbd570u);
    X86_TICK(c, 9);
    // 0bd570  add esp, 0x10
    X86_AT(c, 0xbd570u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0bd573  jmp 0xbd5c0
    X86_AT(c, 0xbd573u);
    goto L_bd5c0;
L_bd575:
    X86_TICK(c, 25);
    // 0bd575  mov dword ptr [0x46808], 0x8d0a0
    X86_AT(c, 0xbd575u);
    wr32((c.sbase[3] + (uint32_t)(0x46808u)), 0x8D0A0u);
    // 0bd57f  mov word ptr [0x4680c], 0x14
    X86_AT(c, 0xbd57fu);
    wr16((c.sbase[3] + (uint32_t)(0x4680Cu)), 0x14u);
    // 0bd588  mov word ptr [0x4680e], 0x40
    X86_AT(c, 0xbd588u);
    wr16((c.sbase[3] + (uint32_t)(0x4680Eu)), 0x40u);
    // 0bd591  mov word ptr [0x46810], 0x60
    X86_AT(c, 0xbd591u);
    wr16((c.sbase[3] + (uint32_t)(0x46810u)), 0x60u);
    // 0bd59a  mov word ptr [0x46812], 0x19f
    X86_AT(c, 0xbd59au);
    wr16((c.sbase[3] + (uint32_t)(0x46812u)), 0x19Fu);
    // 0bd5a3  mov word ptr [0x46814], 0x1bf
    X86_AT(c, 0xbd5a3u);
    wr16((c.sbase[3] + (uint32_t)(0x46814u)), 0x1BFu);
    // 0bd5ac  push 0x46808
    X86_AT(c, 0xbd5acu);
    { uint32_t v = 0x46808u; push32(c, v); }
    // 0bd5b1  push 0
    X86_AT(c, 0xbd5b1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bd5b3  push 0x46208
    X86_AT(c, 0xbd5b3u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0bd5b8  call 0x5c4
    X86_AT(c, 0xbd5b8u);
    push32(c, 0xbd5bdu); x86_call_known(c, 0x5c4u, f_000005c4); X86_RET(c, 0xbd5bdu);
    X86_TICK(c, 2);
    // 0bd5bd  add esp, 0xc
    X86_AT(c, 0xbd5bdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_bd5c0:
    X86_TICK(c, 9);
    // 0bd5c0  push 0
    X86_AT(c, 0xbd5c0u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bd5c2  call 0xba6a0
    X86_AT(c, 0xbd5c2u);
    push32(c, 0xbd5c7u); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xbd5c7u);
    X86_TICK(c, 30);
    // 0bd5c7  add esp, 4
    X86_AT(c, 0xbd5c7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0bd5ca  pop edi
    X86_AT(c, 0xbd5cau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bd5cb  pop esi
    X86_AT(c, 0xbd5cbu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bd5cc  pop ebx
    X86_AT(c, 0xbd5ccu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0bd5cd  leave 
    X86_AT(c, 0xbd5cdu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bd5ce  ret 
    X86_AT(c, 0xbd5ceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbd33cu, "ran off the end of a function");
}
void f_000bd5d0(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0bd5d0  mov word ptr [0x9c544], 0xffff
    X86_AT(c, 0xbd5d0u);
    wr16((c.sbase[3] + (uint32_t)(0x9C544u)), 0xFFFFu);
    // 0bd5d9  push 0
    X86_AT(c, 0xbd5d9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bd5db  push 0x18d
    X86_AT(c, 0xbd5dbu);
    { uint32_t v = 0x18Du; push32(c, v); }
    // 0bd5e0  push 0x168
    X86_AT(c, 0xbd5e0u);
    { uint32_t v = 0x168u; push32(c, v); }
    // 0bd5e5  push 0x30
    X86_AT(c, 0xbd5e5u);
    { uint32_t v = 0x30u; push32(c, v); }
    // 0bd5e7  push 0xb
    X86_AT(c, 0xbd5e7u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0bd5e9  call 0xbac18
    X86_AT(c, 0xbd5e9u);
    push32(c, 0xbd5eeu); x86_call_known(c, 0xbac18u, f_000bac18); X86_RET(c, 0xbd5eeu);
    X86_TICK(c, 9);
    // 0bd5ee  push 0
    X86_AT(c, 0xbd5eeu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bd5f0  call 0xba6b4
    X86_AT(c, 0xbd5f0u);
    push32(c, 0xbd5f5u); x86_call_known(c, 0xba6b4u, f_000ba6b4); X86_RET(c, 0xbd5f5u);
    X86_TICK(c, 9);
    // 0bd5f5  push 1
    X86_AT(c, 0xbd5f5u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bd5f7  call 0xba6a0
    X86_AT(c, 0xbd5f7u);
    push32(c, 0xbd5fcu); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xbd5fcu);
    X86_TICK(c, 17);
    // 0bd5fc  push 0
    X86_AT(c, 0xbd5fcu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bd5fe  push 0x1bf
    X86_AT(c, 0xbd5feu);
    { uint32_t v = 0x1BFu; push32(c, v); }
    // 0bd603  push 0x19f
    X86_AT(c, 0xbd603u);
    { uint32_t v = 0x19Fu; push32(c, v); }
    // 0bd608  push 0x60
    X86_AT(c, 0xbd608u);
    { uint32_t v = 0x60u; push32(c, v); }
    // 0bd60a  push 0x40
    X86_AT(c, 0xbd60au);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0bd60c  call 0xbac18
    X86_AT(c, 0xbd60cu);
    push32(c, 0xbd611u); x86_call_known(c, 0xbac18u, f_000bac18); X86_RET(c, 0xbd611u);
    X86_TICK(c, 9);
    // 0bd611  push 0
    X86_AT(c, 0xbd611u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bd613  call 0xba6a0
    X86_AT(c, 0xbd613u);
    push32(c, 0xbd618u); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xbd618u);
    X86_TICK(c, 9);
    // 0bd618  push 2
    X86_AT(c, 0xbd618u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0bd61a  call 0xba6b4
    X86_AT(c, 0xbd61au);
    push32(c, 0xbd61fu); x86_call_known(c, 0xba6b4u, f_000ba6b4); X86_RET(c, 0xbd61fu);
    X86_TICK(c, 7);
    // 0bd61f  call 0xb6680
    X86_AT(c, 0xbd61fu);
    push32(c, 0xbd624u); x86_call_known(c, 0xb6680u, f_000b6680); X86_RET(c, 0xbd624u);
    X86_TICK(c, 12);
    // 0bd624  add esp, 0x38
    X86_AT(c, 0xbd624u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0bd627  ret 
    X86_AT(c, 0xbd627u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbd5d0u, "ran off the end of a function");
}
}
