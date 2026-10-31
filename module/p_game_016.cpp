#include "p_game_funcs.h"
namespace p_game {
void f_000f66e8(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0f66e8  push 7
    X86_AT(c, 0xf66e8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f66ea  call 0xe693c
    X86_AT(c, 0xf66eau);
    push32(c, 0xf66efu); f_000e693c(c); X86_RET(c, 0xf66efu);
    X86_TICK(c, 11);
    // 0f66ef  push 0x96e4
    X86_AT(c, 0xf66efu);
    { uint32_t v = 0x96E4u; push32(c, v); }
    // 0f66f4  push 7
    X86_AT(c, 0xf66f4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f66f6  call 0xe5654
    X86_AT(c, 0xf66f6u);
    push32(c, 0xf66fbu); f_000e5654(c); X86_RET(c, 0xf66fbu);
    X86_TICK(c, 9);
    // 0f66fb  push 7
    X86_AT(c, 0xf66fbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f66fd  call 0xe6c68
    X86_AT(c, 0xf66fdu);
    push32(c, 0xf6702u); f_000e6c68(c); X86_RET(c, 0xf6702u);
    X86_TICK(c, 12);
    // 0f6702  add esp, 0x10
    X86_AT(c, 0xf6702u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f6705  ret 
    X86_AT(c, 0xf6705u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf66e8u, "ran off the end of a function");
}
void f_000f6708(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0f6708  push ebx
    X86_AT(c, 0xf6708u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f6709  push esi
    X86_AT(c, 0xf6709u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f670a  push edi
    X86_AT(c, 0xf670au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f670b  sub esi, esi
    X86_AT(c, 0xf670bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0f670d  mov ebx, 0xffffffff
    X86_AT(c, 0xf670du);
    c.r[3] = 0xFFFFFFFFu;
    // 0f6712  push 7
    X86_AT(c, 0xf6712u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6714  call 0xe6c68
    X86_AT(c, 0xf6714u);
    push32(c, 0xf6719u); f_000e6c68(c); X86_RET(c, 0xf6719u);
    X86_TICK(c, 9);
    // 0f6719  push 7
    X86_AT(c, 0xf6719u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f671b  call 0xe7618
    X86_AT(c, 0xf671bu);
    push32(c, 0xf6720u); f_000e7618(c); X86_RET(c, 0xf6720u);
    X86_TICK(c, 2);
    // 0f6720  add esp, 8
    X86_AT(c, 0xf6720u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_f6723:
    X86_TICK(c, 9);
    // 0f6723  push 7
    X86_AT(c, 0xf6723u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6725  call 0xe693c
    X86_AT(c, 0xf6725u);
    push32(c, 0xf672au); f_000e693c(c); X86_RET(c, 0xf672au);
    X86_TICK(c, 9);
    // 0f672a  push 7
    X86_AT(c, 0xf672au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f672c  call 0xe4748
    X86_AT(c, 0xf672cu);
    push32(c, 0xf6731u); f_000e4748(c); X86_RET(c, 0xf6731u);
    X86_TICK(c, 14);
    // 0f6731  movzx edi, al
    X86_AT(c, 0xf6731u);
    c.r[7] = g8(c, 0);
    // 0f6734  add esp, 8
    X86_AT(c, 0xf6734u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f6737  mov edx, edi
    X86_AT(c, 0xf6737u);
    c.r[2] = c.r[7];
    // 0f6739  cmp edx, 0x4a
    X86_AT(c, 0xf6739u);
    (void)x86_sub(c, c.r[2], 0x4Au, 0, 4);
    // 0f673c  ja 0xf6778
    X86_AT(c, 0xf673cu);
    if (x86_cc(c, 7)) { goto L_f6778; }
    X86_TICK(c, 7);
    // 0f673e  cmp edx, 0x4a
    X86_AT(c, 0xf673eu);
    (void)x86_sub(c, c.r[2], 0x4Au, 0, 4);
    // 0f6741  je 0xf685a
    X86_AT(c, 0xf6741u);
    if (x86_cc(c, 4)) { goto L_f685a; }
    X86_TICK(c, 7);
    // 0f6747  cmp edx, 7
    X86_AT(c, 0xf6747u);
    (void)x86_sub(c, c.r[2], 0x7u, 0, 4);
    // 0f674a  ja 0xf68dc
    X86_AT(c, 0xf674au);
    if (x86_cc(c, 7)) { goto L_f68dc; }
    X86_TICK(c, 7);
    // 0f6750  jmp dword ptr cs:[edx*4 + 0xf6758]
    X86_AT(c, 0xf6750u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF6758u)));
      switch (t) {
      case 0xf67c8u: goto L_f67c8;
      case 0xf67e2u: goto L_f67e2;
      case 0xf6801u: goto L_f6801;
      case 0xf6820u: goto L_f6820;
      case 0xf683fu: goto L_f683f;
      case 0xf68dcu: goto L_f68dc;
      case 0xf68f9u: goto L_f68f9;
      default: x86_jump(c, t); return; } }
L_f6778:
    X86_TICK(c, 9);
    // 0f6778  sub edx, 0x4c
    X86_AT(c, 0xf6778u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x4Cu, 0, 4); }
    // 0f677b  cmp edx, 0xe
    X86_AT(c, 0xf677bu);
    (void)x86_sub(c, c.r[2], 0xEu, 0, 4);
    // 0f677e  ja 0xf68dc
    X86_AT(c, 0xf677eu);
    if (x86_cc(c, 7)) { goto L_f68dc; }
    X86_TICK(c, 7);
    // 0f6784  jmp dword ptr cs:[edx*4 + 0xf678c]
    X86_AT(c, 0xf6784u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF678Cu)));
      switch (t) {
      case 0xf683fu: goto L_f683f;
      case 0xf6861u: goto L_f6861;
      case 0xf6868u: goto L_f6868;
      case 0xf686fu: goto L_f686f;
      case 0xf6876u: goto L_f6876;
      case 0xf687du: goto L_f687d;
      case 0xf6884u: goto L_f6884;
      case 0xf6895u: goto L_f6895;
      case 0xf68dcu: goto L_f68dc;
      default: x86_jump(c, t); return; } }
L_f67c8:
    X86_TICK(c, 11);
    // 0f67c8  push 0x9714
    X86_AT(c, 0xf67c8u);
    { uint32_t v = 0x9714u; push32(c, v); }
    // 0f67cd  push 7
    X86_AT(c, 0xf67cdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f67cf  call 0xe5654
    X86_AT(c, 0xf67cfu);
    push32(c, 0xf67d4u); f_000e5654(c); X86_RET(c, 0xf67d4u);
    X86_TICK(c, 9);
    // 0f67d4  push 7
    X86_AT(c, 0xf67d4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f67d6  call 0xe6c68
    X86_AT(c, 0xf67d6u);
    push32(c, 0xf67dbu); f_000e6c68(c); X86_RET(c, 0xf67dbu);
    X86_TICK(c, 9);
    // 0f67db  mov esi, 0xffffffff
    X86_AT(c, 0xf67dbu);
    c.r[6] = 0xFFFFFFFFu;
    // 0f67e0  jmp 0xf67fa
    X86_AT(c, 0xf67e0u);
    goto L_f67fa;
L_f67e2:
    X86_TICK(c, 11);
    // 0f67e2  push 0x9728
    X86_AT(c, 0xf67e2u);
    { uint32_t v = 0x9728u; push32(c, v); }
    // 0f67e7  push 7
    X86_AT(c, 0xf67e7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f67e9  call 0xe5654
    X86_AT(c, 0xf67e9u);
    push32(c, 0xf67eeu); f_000e5654(c); X86_RET(c, 0xf67eeu);
    X86_TICK(c, 9);
    // 0f67ee  push 7
    X86_AT(c, 0xf67eeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f67f0  call 0xe6c68
    X86_AT(c, 0xf67f0u);
    push32(c, 0xf67f5u); f_000e6c68(c); X86_RET(c, 0xf67f5u);
    X86_TICK(c, 2);
    // 0f67f5  mov esi, 1
    X86_AT(c, 0xf67f5u);
    c.r[6] = 0x1u;
L_f67fa:
    X86_TICK(c, 9);
    // 0f67fa  sub ebx, ebx
    X86_AT(c, 0xf67fau);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0f67fc  jmp 0xf68ef
    X86_AT(c, 0xf67fcu);
    goto L_f68ef;
L_f6801:
    X86_TICK(c, 11);
    // 0f6801  push 0x973c
    X86_AT(c, 0xf6801u);
    { uint32_t v = 0x973Cu; push32(c, v); }
    // 0f6806  push 7
    X86_AT(c, 0xf6806u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6808  call 0xe5654
    X86_AT(c, 0xf6808u);
    push32(c, 0xf680du); f_000e5654(c); X86_RET(c, 0xf680du);
    X86_TICK(c, 9);
    // 0f680d  push 7
    X86_AT(c, 0xf680du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f680f  call 0xe6c68
    X86_AT(c, 0xf680fu);
    push32(c, 0xf6814u); f_000e6c68(c); X86_RET(c, 0xf6814u);
    X86_TICK(c, 11);
    // 0f6814  sub esi, esi
    X86_AT(c, 0xf6814u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0f6816  mov ebx, 0xffffffff
    X86_AT(c, 0xf6816u);
    c.r[3] = 0xFFFFFFFFu;
    // 0f681b  jmp 0xf68ef
    X86_AT(c, 0xf681bu);
    goto L_f68ef;
L_f6820:
    X86_TICK(c, 11);
    // 0f6820  push 0x9750
    X86_AT(c, 0xf6820u);
    { uint32_t v = 0x9750u; push32(c, v); }
    // 0f6825  push 7
    X86_AT(c, 0xf6825u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6827  call 0xe5654
    X86_AT(c, 0xf6827u);
    push32(c, 0xf682cu); f_000e5654(c); X86_RET(c, 0xf682cu);
    X86_TICK(c, 9);
    // 0f682c  push 7
    X86_AT(c, 0xf682cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f682e  call 0xe6c68
    X86_AT(c, 0xf682eu);
    push32(c, 0xf6833u); f_000e6c68(c); X86_RET(c, 0xf6833u);
    X86_TICK(c, 11);
    // 0f6833  sub esi, esi
    X86_AT(c, 0xf6833u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0f6835  mov ebx, 1
    X86_AT(c, 0xf6835u);
    c.r[3] = 0x1u;
    // 0f683a  jmp 0xf68ef
    X86_AT(c, 0xf683au);
    goto L_f68ef;
L_f683f:
    X86_TICK(c, 7);
    // 0f683f  call 0xf326c
    X86_AT(c, 0xf683fu);
    push32(c, 0xf6844u); f_000f326c(c); X86_RET(c, 0xf6844u);
    X86_TICK(c, 9);
    // 0f6844  push 7
    X86_AT(c, 0xf6844u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6846  call 0xe6c68
    X86_AT(c, 0xf6846u);
    push32(c, 0xf684bu); f_000e6c68(c); X86_RET(c, 0xf684bu);
    X86_TICK(c, 9);
    // 0f684b  push 7
    X86_AT(c, 0xf684bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f684d  call 0xe7618
    X86_AT(c, 0xf684du);
    push32(c, 0xf6852u); f_000e7618(c); X86_RET(c, 0xf6852u);
    X86_TICK(c, 9);
    // 0f6852  add esp, 8
    X86_AT(c, 0xf6852u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f6855  jmp 0xf68f9
    X86_AT(c, 0xf6855u);
    goto L_f68f9;
L_f685a:
    X86_TICK(c, 7);
    // 0f685a  call 0xf738c
    X86_AT(c, 0xf685au);
    push32(c, 0xf685fu); f_000f738c(c); X86_RET(c, 0xf685fu);
    X86_TICK(c, 7);
    // 0f685f  jmp 0xf6889
    X86_AT(c, 0xf685fu);
    goto L_f6889;
L_f6861:
    X86_TICK(c, 7);
    // 0f6861  call 0xf73ec
    X86_AT(c, 0xf6861u);
    push32(c, 0xf6866u); f_000f73ec(c); X86_RET(c, 0xf6866u);
    X86_TICK(c, 7);
    // 0f6866  jmp 0xf6889
    X86_AT(c, 0xf6866u);
    goto L_f6889;
L_f6868:
    X86_TICK(c, 7);
    // 0f6868  call 0xf0dec
    X86_AT(c, 0xf6868u);
    push32(c, 0xf686du); f_000f0dec(c); X86_RET(c, 0xf686du);
    X86_TICK(c, 7);
    // 0f686d  jmp 0xf6889
    X86_AT(c, 0xf686du);
    goto L_f6889;
L_f686f:
    X86_TICK(c, 7);
    // 0f686f  call 0xf8c78
    X86_AT(c, 0xf686fu);
    push32(c, 0xf6874u); f_000f8c78(c); X86_RET(c, 0xf6874u);
    X86_TICK(c, 7);
    // 0f6874  jmp 0xf6889
    X86_AT(c, 0xf6874u);
    goto L_f6889;
L_f6876:
    X86_TICK(c, 7);
    // 0f6876  call 0xf1b08
    X86_AT(c, 0xf6876u);
    push32(c, 0xf687bu); f_000f1b08(c); X86_RET(c, 0xf687bu);
    X86_TICK(c, 7);
    // 0f687b  jmp 0xf6889
    X86_AT(c, 0xf687bu);
    goto L_f6889;
L_f687d:
    X86_TICK(c, 7);
    // 0f687d  call 0xf82c4
    X86_AT(c, 0xf687du);
    push32(c, 0xf6882u); f_000f82c4(c); X86_RET(c, 0xf6882u);
    X86_TICK(c, 7);
    // 0f6882  jmp 0xf6889
    X86_AT(c, 0xf6882u);
    goto L_f6889;
L_f6884:
    X86_TICK(c, 7);
    // 0f6884  call 0xf1964
    X86_AT(c, 0xf6884u);
    push32(c, 0xf6889u); f_000f1964(c); X86_RET(c, 0xf6889u);
L_f6889:
    X86_TICK(c, 9);
    // 0f6889  push 7
    X86_AT(c, 0xf6889u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f688b  call 0xe7618
    X86_AT(c, 0xf688bu);
    push32(c, 0xf6890u); f_000e7618(c); X86_RET(c, 0xf6890u);
    X86_TICK(c, 9);
    // 0f6890  add esp, 4
    X86_AT(c, 0xf6890u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f6893  jmp 0xf68f9
    X86_AT(c, 0xf6893u);
    goto L_f68f9;
L_f6895:
    X86_TICK(c, 11);
    // 0f6895  push 0x9764
    X86_AT(c, 0xf6895u);
    { uint32_t v = 0x9764u; push32(c, v); }
    // 0f689a  push 7
    X86_AT(c, 0xf689au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f689c  call 0xe5654
    X86_AT(c, 0xf689cu);
    push32(c, 0xf68a1u); f_000e5654(c); X86_RET(c, 0xf68a1u);
    X86_TICK(c, 9);
    // 0f68a1  push 7
    X86_AT(c, 0xf68a1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f68a3  call 0xe6c68
    X86_AT(c, 0xf68a3u);
    push32(c, 0xf68a8u); f_000e6c68(c); X86_RET(c, 0xf68a8u);
    X86_TICK(c, 30);
    // 0f68a8  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf68a8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f68ad  lea edx, [eax + eax*4]
    X86_AT(c, 0xf68adu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f68b0  lea edx, [eax + edx*2]
    X86_AT(c, 0xf68b0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f68b3  shl edx, 5
    X86_AT(c, 0xf68b3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f68b6  sub edx, eax
    X86_AT(c, 0xf68b6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f68b8  push dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf68b8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))); push32(c, v); }
    // 0f68be  push dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf68beu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))); push32(c, v); }
    // 0f68c4  call 0xef8ac
    X86_AT(c, 0xf68c4u);
    push32(c, 0xf68c9u); f_000ef8ac(c); X86_RET(c, 0xf68c9u);
    X86_TICK(c, 9);
    // 0f68c9  add esp, 0x14
    X86_AT(c, 0xf68c9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0f68cc  cmp eax, 2
    X86_AT(c, 0xf68ccu);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 0f68cf  je 0xf69e9
    X86_AT(c, 0xf68cfu);
    if (x86_cc(c, 4)) { goto L_f69e9; }
    X86_TICK(c, 9);
    // 0f68d5  push 0x977c
    X86_AT(c, 0xf68d5u);
    { uint32_t v = 0x977Cu; push32(c, v); }
    // 0f68da  jmp 0xf68e1
    X86_AT(c, 0xf68dau);
    goto L_f68e1;
L_f68dc:
    X86_TICK(c, 2);
    // 0f68dc  push 0x97ac
    X86_AT(c, 0xf68dcu);
    { uint32_t v = 0x97ACu; push32(c, v); }
L_f68e1:
    X86_TICK(c, 9);
    // 0f68e1  push 7
    X86_AT(c, 0xf68e1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f68e3  call 0xe5654
    X86_AT(c, 0xf68e3u);
    push32(c, 0xf68e8u); f_000e5654(c); X86_RET(c, 0xf68e8u);
    X86_TICK(c, 9);
    // 0f68e8  push 7
    X86_AT(c, 0xf68e8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f68ea  call 0xe6c68
    X86_AT(c, 0xf68eau);
    push32(c, 0xf68efu); f_000e6c68(c); X86_RET(c, 0xf68efu);
L_f68ef:
    X86_TICK(c, 9);
    // 0f68ef  push 7
    X86_AT(c, 0xf68efu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f68f1  call 0xe7618
    X86_AT(c, 0xf68f1u);
    push32(c, 0xf68f6u); f_000e7618(c); X86_RET(c, 0xf68f6u);
    X86_TICK(c, 2);
    // 0f68f6  add esp, 0x10
    X86_AT(c, 0xf68f6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_f68f9:
    X86_TICK(c, 39);
    // 0f68f9  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf68f9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f68fe  lea edx, [eax + eax*4]
    X86_AT(c, 0xf68feu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f6901  lea edx, [eax + edx*2]
    X86_AT(c, 0xf6901u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f6904  shl edx, 5
    X86_AT(c, 0xf6904u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f6907  sub edx, eax
    X86_AT(c, 0xf6907u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f6909  add dword ptr [edx + 0xcdf6b], esi
    X86_AT(c, 0xf6909u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 0f690f  add dword ptr [edx + 0xcdf6f], ebx
    X86_AT(c, 0xf690fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[3], 0, 4)); }
    // 0f6915  cmp dword ptr [0xcda6c], 0xffffffff
    X86_AT(c, 0xf6915u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDA6Cu))), 0xFFFFFFFFu, 0, 4);
    // 0f691c  jne 0xf694a
    X86_AT(c, 0xf691cu);
    if (x86_cc(c, 5)) { goto L_f694a; }
    X86_TICK(c, 11);
    // 0f691e  mov eax, dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf691eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)));
    // 0f6924  and eax, eax
    X86_AT(c, 0xf6924u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f6926  jle 0xf6940
    X86_AT(c, 0xf6926u);
    if (x86_cc(c, 14)) { goto L_f6940; }
    X86_TICK(c, 7);
    // 0f6928  cmp eax, 0x3f
    X86_AT(c, 0xf6928u);
    (void)x86_sub(c, c.r[0], 0x3Fu, 0, 4);
    // 0f692b  jge 0xf6940
    X86_AT(c, 0xf692bu);
    if (x86_cc(c, 13)) { goto L_f6940; }
    X86_TICK(c, 11);
    // 0f692d  mov eax, dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf692du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)));
    // 0f6933  and eax, eax
    X86_AT(c, 0xf6933u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f6935  jle 0xf6940
    X86_AT(c, 0xf6935u);
    if (x86_cc(c, 14)) { goto L_f6940; }
    X86_TICK(c, 7);
    // 0f6937  cmp eax, 0x3f
    X86_AT(c, 0xf6937u);
    (void)x86_sub(c, c.r[0], 0x3Fu, 0, 4);
    // 0f693a  jl 0xf69da
    X86_AT(c, 0xf693au);
    if (x86_cc(c, 12)) { goto L_f69da; }
L_f6940:
    X86_TICK(c, 7);
    // 0f6940  call 0xf808c
    X86_AT(c, 0xf6940u);
    push32(c, 0xf6945u); f_000f808c(c); X86_RET(c, 0xf6945u);
    X86_TICK(c, 7);
    // 0f6945  jmp 0xf69da
    X86_AT(c, 0xf6945u);
    goto L_f69da;
L_f694a:
    X86_TICK(c, 25);
    // 0f694a  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf694au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f694f  lea edx, [eax + eax*4]
    X86_AT(c, 0xf694fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f6952  lea edx, [eax + edx*2]
    X86_AT(c, 0xf6952u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f6955  shl edx, 5
    X86_AT(c, 0xf6955u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f6958  sub edx, eax
    X86_AT(c, 0xf6958u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f695a  cmp dword ptr [edx + 0xcdf6b], 0x40
    X86_AT(c, 0xf695au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))), 0x40u, 0, 4);
    // 0f6961  jl 0xf696f
    X86_AT(c, 0xf6961u);
    if (x86_cc(c, 12)) { goto L_f696f; }
    X86_TICK(c, 9);
    // 0f6963  mov dword ptr [edx + 0xcdf6b], 0
    X86_AT(c, 0xf6963u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)), 0x0u);
    // 0f696d  jmp 0xf6992
    X86_AT(c, 0xf696du);
    goto L_f6992;
L_f696f:
    X86_TICK(c, 25);
    // 0f696f  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf696fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f6974  lea edx, [eax + eax*4]
    X86_AT(c, 0xf6974u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f6977  lea edx, [eax + edx*2]
    X86_AT(c, 0xf6977u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f697a  shl edx, 5
    X86_AT(c, 0xf697au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f697d  sub edx, eax
    X86_AT(c, 0xf697du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f697f  cmp dword ptr [edx + 0xcdf6b], 0
    X86_AT(c, 0xf697fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))), 0x0u, 0, 4);
    // 0f6986  jge 0xf6992
    X86_AT(c, 0xf6986u);
    if (x86_cc(c, 13)) { goto L_f6992; }
    X86_TICK(c, 2);
    // 0f6988  mov dword ptr [edx + 0xcdf6b], 0x3f
    X86_AT(c, 0xf6988u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)), 0x3Fu);
L_f6992:
    X86_TICK(c, 25);
    // 0f6992  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf6992u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f6997  lea edx, [eax + eax*4]
    X86_AT(c, 0xf6997u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f699a  lea edx, [eax + edx*2]
    X86_AT(c, 0xf699au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f699d  shl edx, 5
    X86_AT(c, 0xf699du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f69a0  sub edx, eax
    X86_AT(c, 0xf69a0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f69a2  cmp dword ptr [edx + 0xcdf6f], 0x40
    X86_AT(c, 0xf69a2u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))), 0x40u, 0, 4);
    // 0f69a9  jl 0xf69b7
    X86_AT(c, 0xf69a9u);
    if (x86_cc(c, 12)) { goto L_f69b7; }
    X86_TICK(c, 9);
    // 0f69ab  mov dword ptr [edx + 0xcdf6f], 0
    X86_AT(c, 0xf69abu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)), 0x0u);
    // 0f69b5  jmp 0xf69da
    X86_AT(c, 0xf69b5u);
    goto L_f69da;
L_f69b7:
    X86_TICK(c, 25);
    // 0f69b7  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf69b7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f69bc  lea edx, [eax + eax*4]
    X86_AT(c, 0xf69bcu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f69bf  lea edx, [eax + edx*2]
    X86_AT(c, 0xf69bfu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f69c2  shl edx, 5
    X86_AT(c, 0xf69c2u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f69c5  sub edx, eax
    X86_AT(c, 0xf69c5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f69c7  cmp dword ptr [edx + 0xcdf6f], 0
    X86_AT(c, 0xf69c7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))), 0x0u, 0, 4);
    // 0f69ce  jge 0xf69da
    X86_AT(c, 0xf69ceu);
    if (x86_cc(c, 13)) { goto L_f69da; }
    X86_TICK(c, 2);
    // 0f69d0  mov dword ptr [edx + 0xcdf6f], 0x3f
    X86_AT(c, 0xf69d0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)), 0x3Fu);
L_f69da:
    X86_TICK(c, 9);
    // 0f69da  push 4
    X86_AT(c, 0xf69dau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0f69dc  call 0xe1a9c
    X86_AT(c, 0xf69dcu);
    push32(c, 0xf69e1u); f_000e1a9c(c); X86_RET(c, 0xf69e1u);
    X86_TICK(c, 9);
    // 0f69e1  add esp, 4
    X86_AT(c, 0xf69e1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f69e4  jmp 0xf6723
    X86_AT(c, 0xf69e4u);
    X86_POLL(c, 0xf6723u); goto L_f6723;
L_f69e9:
    X86_TICK(c, 22);
    // 0f69e9  pop edi
    X86_AT(c, 0xf69e9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f69ea  pop esi
    X86_AT(c, 0xf69eau);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f69eb  pop ebx
    X86_AT(c, 0xf69ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f69ec  ret 
    X86_AT(c, 0xf69ecu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf6708u, "ran off the end of a function");
}
void f_000f68ef(X86Cpu& c) {
    goto L_f68ef;
L_f6723:
    X86_TICK(c, 9);
    // 0f6723  push 7
    X86_AT(c, 0xf6723u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6725  call 0xe693c
    X86_AT(c, 0xf6725u);
    push32(c, 0xf672au); f_000e693c(c); X86_RET(c, 0xf672au);
    X86_TICK(c, 9);
    // 0f672a  push 7
    X86_AT(c, 0xf672au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f672c  call 0xe4748
    X86_AT(c, 0xf672cu);
    push32(c, 0xf6731u); f_000e4748(c); X86_RET(c, 0xf6731u);
    X86_TICK(c, 14);
    // 0f6731  movzx edi, al
    X86_AT(c, 0xf6731u);
    c.r[7] = g8(c, 0);
    // 0f6734  add esp, 8
    X86_AT(c, 0xf6734u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f6737  mov edx, edi
    X86_AT(c, 0xf6737u);
    c.r[2] = c.r[7];
    // 0f6739  cmp edx, 0x4a
    X86_AT(c, 0xf6739u);
    (void)x86_sub(c, c.r[2], 0x4Au, 0, 4);
    // 0f673c  ja 0xf6778
    X86_AT(c, 0xf673cu);
    if (x86_cc(c, 7)) { goto L_f6778; }
    X86_TICK(c, 7);
    // 0f673e  cmp edx, 0x4a
    X86_AT(c, 0xf673eu);
    (void)x86_sub(c, c.r[2], 0x4Au, 0, 4);
    // 0f6741  je 0xf685a
    X86_AT(c, 0xf6741u);
    if (x86_cc(c, 4)) { goto L_f685a; }
    X86_TICK(c, 7);
    // 0f6747  cmp edx, 7
    X86_AT(c, 0xf6747u);
    (void)x86_sub(c, c.r[2], 0x7u, 0, 4);
    // 0f674a  ja 0xf68dc
    X86_AT(c, 0xf674au);
    if (x86_cc(c, 7)) { goto L_f68dc; }
    X86_TICK(c, 7);
    // 0f6750  jmp dword ptr cs:[edx*4 + 0xf6758]
    X86_AT(c, 0xf6750u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF6758u)));
      switch (t) {
      case 0xf67c8u: goto L_f67c8;
      case 0xf67e2u: goto L_f67e2;
      case 0xf6801u: goto L_f6801;
      case 0xf6820u: goto L_f6820;
      case 0xf683fu: goto L_f683f;
      case 0xf68dcu: goto L_f68dc;
      case 0xf68f9u: goto L_f68f9;
      default: x86_jump(c, t); return; } }
L_f6778:
    X86_TICK(c, 9);
    // 0f6778  sub edx, 0x4c
    X86_AT(c, 0xf6778u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x4Cu, 0, 4); }
    // 0f677b  cmp edx, 0xe
    X86_AT(c, 0xf677bu);
    (void)x86_sub(c, c.r[2], 0xEu, 0, 4);
    // 0f677e  ja 0xf68dc
    X86_AT(c, 0xf677eu);
    if (x86_cc(c, 7)) { goto L_f68dc; }
    X86_TICK(c, 7);
    // 0f6784  jmp dword ptr cs:[edx*4 + 0xf678c]
    X86_AT(c, 0xf6784u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF678Cu)));
      switch (t) {
      case 0xf683fu: goto L_f683f;
      case 0xf6861u: goto L_f6861;
      case 0xf6868u: goto L_f6868;
      case 0xf686fu: goto L_f686f;
      case 0xf6876u: goto L_f6876;
      case 0xf687du: goto L_f687d;
      case 0xf6884u: goto L_f6884;
      case 0xf6895u: goto L_f6895;
      case 0xf68dcu: goto L_f68dc;
      default: x86_jump(c, t); return; } }
L_f67c8:
    X86_TICK(c, 11);
    // 0f67c8  push 0x9714
    X86_AT(c, 0xf67c8u);
    { uint32_t v = 0x9714u; push32(c, v); }
    // 0f67cd  push 7
    X86_AT(c, 0xf67cdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f67cf  call 0xe5654
    X86_AT(c, 0xf67cfu);
    push32(c, 0xf67d4u); f_000e5654(c); X86_RET(c, 0xf67d4u);
    X86_TICK(c, 9);
    // 0f67d4  push 7
    X86_AT(c, 0xf67d4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f67d6  call 0xe6c68
    X86_AT(c, 0xf67d6u);
    push32(c, 0xf67dbu); f_000e6c68(c); X86_RET(c, 0xf67dbu);
    X86_TICK(c, 9);
    // 0f67db  mov esi, 0xffffffff
    X86_AT(c, 0xf67dbu);
    c.r[6] = 0xFFFFFFFFu;
    // 0f67e0  jmp 0xf67fa
    X86_AT(c, 0xf67e0u);
    goto L_f67fa;
L_f67e2:
    X86_TICK(c, 11);
    // 0f67e2  push 0x9728
    X86_AT(c, 0xf67e2u);
    { uint32_t v = 0x9728u; push32(c, v); }
    // 0f67e7  push 7
    X86_AT(c, 0xf67e7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f67e9  call 0xe5654
    X86_AT(c, 0xf67e9u);
    push32(c, 0xf67eeu); f_000e5654(c); X86_RET(c, 0xf67eeu);
    X86_TICK(c, 9);
    // 0f67ee  push 7
    X86_AT(c, 0xf67eeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f67f0  call 0xe6c68
    X86_AT(c, 0xf67f0u);
    push32(c, 0xf67f5u); f_000e6c68(c); X86_RET(c, 0xf67f5u);
    X86_TICK(c, 2);
    // 0f67f5  mov esi, 1
    X86_AT(c, 0xf67f5u);
    c.r[6] = 0x1u;
L_f67fa:
    X86_TICK(c, 9);
    // 0f67fa  sub ebx, ebx
    X86_AT(c, 0xf67fau);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0f67fc  jmp 0xf68ef
    X86_AT(c, 0xf67fcu);
    goto L_f68ef;
L_f6801:
    X86_TICK(c, 11);
    // 0f6801  push 0x973c
    X86_AT(c, 0xf6801u);
    { uint32_t v = 0x973Cu; push32(c, v); }
    // 0f6806  push 7
    X86_AT(c, 0xf6806u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6808  call 0xe5654
    X86_AT(c, 0xf6808u);
    push32(c, 0xf680du); f_000e5654(c); X86_RET(c, 0xf680du);
    X86_TICK(c, 9);
    // 0f680d  push 7
    X86_AT(c, 0xf680du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f680f  call 0xe6c68
    X86_AT(c, 0xf680fu);
    push32(c, 0xf6814u); f_000e6c68(c); X86_RET(c, 0xf6814u);
    X86_TICK(c, 11);
    // 0f6814  sub esi, esi
    X86_AT(c, 0xf6814u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0f6816  mov ebx, 0xffffffff
    X86_AT(c, 0xf6816u);
    c.r[3] = 0xFFFFFFFFu;
    // 0f681b  jmp 0xf68ef
    X86_AT(c, 0xf681bu);
    goto L_f68ef;
L_f6820:
    X86_TICK(c, 11);
    // 0f6820  push 0x9750
    X86_AT(c, 0xf6820u);
    { uint32_t v = 0x9750u; push32(c, v); }
    // 0f6825  push 7
    X86_AT(c, 0xf6825u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6827  call 0xe5654
    X86_AT(c, 0xf6827u);
    push32(c, 0xf682cu); f_000e5654(c); X86_RET(c, 0xf682cu);
    X86_TICK(c, 9);
    // 0f682c  push 7
    X86_AT(c, 0xf682cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f682e  call 0xe6c68
    X86_AT(c, 0xf682eu);
    push32(c, 0xf6833u); f_000e6c68(c); X86_RET(c, 0xf6833u);
    X86_TICK(c, 11);
    // 0f6833  sub esi, esi
    X86_AT(c, 0xf6833u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0f6835  mov ebx, 1
    X86_AT(c, 0xf6835u);
    c.r[3] = 0x1u;
    // 0f683a  jmp 0xf68ef
    X86_AT(c, 0xf683au);
    goto L_f68ef;
L_f683f:
    X86_TICK(c, 7);
    // 0f683f  call 0xf326c
    X86_AT(c, 0xf683fu);
    push32(c, 0xf6844u); f_000f326c(c); X86_RET(c, 0xf6844u);
    X86_TICK(c, 9);
    // 0f6844  push 7
    X86_AT(c, 0xf6844u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6846  call 0xe6c68
    X86_AT(c, 0xf6846u);
    push32(c, 0xf684bu); f_000e6c68(c); X86_RET(c, 0xf684bu);
    X86_TICK(c, 9);
    // 0f684b  push 7
    X86_AT(c, 0xf684bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f684d  call 0xe7618
    X86_AT(c, 0xf684du);
    push32(c, 0xf6852u); f_000e7618(c); X86_RET(c, 0xf6852u);
    X86_TICK(c, 9);
    // 0f6852  add esp, 8
    X86_AT(c, 0xf6852u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f6855  jmp 0xf68f9
    X86_AT(c, 0xf6855u);
    goto L_f68f9;
L_f685a:
    X86_TICK(c, 7);
    // 0f685a  call 0xf738c
    X86_AT(c, 0xf685au);
    push32(c, 0xf685fu); f_000f738c(c); X86_RET(c, 0xf685fu);
    X86_TICK(c, 7);
    // 0f685f  jmp 0xf6889
    X86_AT(c, 0xf685fu);
    goto L_f6889;
L_f6861:
    X86_TICK(c, 7);
    // 0f6861  call 0xf73ec
    X86_AT(c, 0xf6861u);
    push32(c, 0xf6866u); f_000f73ec(c); X86_RET(c, 0xf6866u);
    X86_TICK(c, 7);
    // 0f6866  jmp 0xf6889
    X86_AT(c, 0xf6866u);
    goto L_f6889;
L_f6868:
    X86_TICK(c, 7);
    // 0f6868  call 0xf0dec
    X86_AT(c, 0xf6868u);
    push32(c, 0xf686du); f_000f0dec(c); X86_RET(c, 0xf686du);
    X86_TICK(c, 7);
    // 0f686d  jmp 0xf6889
    X86_AT(c, 0xf686du);
    goto L_f6889;
L_f686f:
    X86_TICK(c, 7);
    // 0f686f  call 0xf8c78
    X86_AT(c, 0xf686fu);
    push32(c, 0xf6874u); f_000f8c78(c); X86_RET(c, 0xf6874u);
    X86_TICK(c, 7);
    // 0f6874  jmp 0xf6889
    X86_AT(c, 0xf6874u);
    goto L_f6889;
L_f6876:
    X86_TICK(c, 7);
    // 0f6876  call 0xf1b08
    X86_AT(c, 0xf6876u);
    push32(c, 0xf687bu); f_000f1b08(c); X86_RET(c, 0xf687bu);
    X86_TICK(c, 7);
    // 0f687b  jmp 0xf6889
    X86_AT(c, 0xf687bu);
    goto L_f6889;
L_f687d:
    X86_TICK(c, 7);
    // 0f687d  call 0xf82c4
    X86_AT(c, 0xf687du);
    push32(c, 0xf6882u); f_000f82c4(c); X86_RET(c, 0xf6882u);
    X86_TICK(c, 7);
    // 0f6882  jmp 0xf6889
    X86_AT(c, 0xf6882u);
    goto L_f6889;
L_f6884:
    X86_TICK(c, 7);
    // 0f6884  call 0xf1964
    X86_AT(c, 0xf6884u);
    push32(c, 0xf6889u); f_000f1964(c); X86_RET(c, 0xf6889u);
L_f6889:
    X86_TICK(c, 9);
    // 0f6889  push 7
    X86_AT(c, 0xf6889u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f688b  call 0xe7618
    X86_AT(c, 0xf688bu);
    push32(c, 0xf6890u); f_000e7618(c); X86_RET(c, 0xf6890u);
    X86_TICK(c, 9);
    // 0f6890  add esp, 4
    X86_AT(c, 0xf6890u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f6893  jmp 0xf68f9
    X86_AT(c, 0xf6893u);
    goto L_f68f9;
L_f6895:
    X86_TICK(c, 11);
    // 0f6895  push 0x9764
    X86_AT(c, 0xf6895u);
    { uint32_t v = 0x9764u; push32(c, v); }
    // 0f689a  push 7
    X86_AT(c, 0xf689au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f689c  call 0xe5654
    X86_AT(c, 0xf689cu);
    push32(c, 0xf68a1u); f_000e5654(c); X86_RET(c, 0xf68a1u);
    X86_TICK(c, 9);
    // 0f68a1  push 7
    X86_AT(c, 0xf68a1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f68a3  call 0xe6c68
    X86_AT(c, 0xf68a3u);
    push32(c, 0xf68a8u); f_000e6c68(c); X86_RET(c, 0xf68a8u);
    X86_TICK(c, 30);
    // 0f68a8  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf68a8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f68ad  lea edx, [eax + eax*4]
    X86_AT(c, 0xf68adu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f68b0  lea edx, [eax + edx*2]
    X86_AT(c, 0xf68b0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f68b3  shl edx, 5
    X86_AT(c, 0xf68b3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f68b6  sub edx, eax
    X86_AT(c, 0xf68b6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f68b8  push dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf68b8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))); push32(c, v); }
    // 0f68be  push dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf68beu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))); push32(c, v); }
    // 0f68c4  call 0xef8ac
    X86_AT(c, 0xf68c4u);
    push32(c, 0xf68c9u); f_000ef8ac(c); X86_RET(c, 0xf68c9u);
    X86_TICK(c, 9);
    // 0f68c9  add esp, 0x14
    X86_AT(c, 0xf68c9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0f68cc  cmp eax, 2
    X86_AT(c, 0xf68ccu);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 0f68cf  je 0xf69e9
    X86_AT(c, 0xf68cfu);
    if (x86_cc(c, 4)) { goto L_f69e9; }
    X86_TICK(c, 9);
    // 0f68d5  push 0x977c
    X86_AT(c, 0xf68d5u);
    { uint32_t v = 0x977Cu; push32(c, v); }
    // 0f68da  jmp 0xf68e1
    X86_AT(c, 0xf68dau);
    goto L_f68e1;
L_f68dc:
    X86_TICK(c, 2);
    // 0f68dc  push 0x97ac
    X86_AT(c, 0xf68dcu);
    { uint32_t v = 0x97ACu; push32(c, v); }
L_f68e1:
    X86_TICK(c, 9);
    // 0f68e1  push 7
    X86_AT(c, 0xf68e1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f68e3  call 0xe5654
    X86_AT(c, 0xf68e3u);
    push32(c, 0xf68e8u); f_000e5654(c); X86_RET(c, 0xf68e8u);
    X86_TICK(c, 9);
    // 0f68e8  push 7
    X86_AT(c, 0xf68e8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f68ea  call 0xe6c68
    X86_AT(c, 0xf68eau);
    push32(c, 0xf68efu); f_000e6c68(c); X86_RET(c, 0xf68efu);
L_f68ef:
    X86_TICK(c, 9);
    // 0f68ef  push 7
    X86_AT(c, 0xf68efu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f68f1  call 0xe7618
    X86_AT(c, 0xf68f1u);
    push32(c, 0xf68f6u); f_000e7618(c); X86_RET(c, 0xf68f6u);
    X86_TICK(c, 2);
    // 0f68f6  add esp, 0x10
    X86_AT(c, 0xf68f6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_f68f9:
    X86_TICK(c, 39);
    // 0f68f9  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf68f9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f68fe  lea edx, [eax + eax*4]
    X86_AT(c, 0xf68feu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f6901  lea edx, [eax + edx*2]
    X86_AT(c, 0xf6901u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f6904  shl edx, 5
    X86_AT(c, 0xf6904u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f6907  sub edx, eax
    X86_AT(c, 0xf6907u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f6909  add dword ptr [edx + 0xcdf6b], esi
    X86_AT(c, 0xf6909u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 0f690f  add dword ptr [edx + 0xcdf6f], ebx
    X86_AT(c, 0xf690fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[3], 0, 4)); }
    // 0f6915  cmp dword ptr [0xcda6c], 0xffffffff
    X86_AT(c, 0xf6915u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDA6Cu))), 0xFFFFFFFFu, 0, 4);
    // 0f691c  jne 0xf694a
    X86_AT(c, 0xf691cu);
    if (x86_cc(c, 5)) { goto L_f694a; }
    X86_TICK(c, 11);
    // 0f691e  mov eax, dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf691eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)));
    // 0f6924  and eax, eax
    X86_AT(c, 0xf6924u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f6926  jle 0xf6940
    X86_AT(c, 0xf6926u);
    if (x86_cc(c, 14)) { goto L_f6940; }
    X86_TICK(c, 7);
    // 0f6928  cmp eax, 0x3f
    X86_AT(c, 0xf6928u);
    (void)x86_sub(c, c.r[0], 0x3Fu, 0, 4);
    // 0f692b  jge 0xf6940
    X86_AT(c, 0xf692bu);
    if (x86_cc(c, 13)) { goto L_f6940; }
    X86_TICK(c, 11);
    // 0f692d  mov eax, dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf692du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)));
    // 0f6933  and eax, eax
    X86_AT(c, 0xf6933u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f6935  jle 0xf6940
    X86_AT(c, 0xf6935u);
    if (x86_cc(c, 14)) { goto L_f6940; }
    X86_TICK(c, 7);
    // 0f6937  cmp eax, 0x3f
    X86_AT(c, 0xf6937u);
    (void)x86_sub(c, c.r[0], 0x3Fu, 0, 4);
    // 0f693a  jl 0xf69da
    X86_AT(c, 0xf693au);
    if (x86_cc(c, 12)) { goto L_f69da; }
L_f6940:
    X86_TICK(c, 7);
    // 0f6940  call 0xf808c
    X86_AT(c, 0xf6940u);
    push32(c, 0xf6945u); f_000f808c(c); X86_RET(c, 0xf6945u);
    X86_TICK(c, 7);
    // 0f6945  jmp 0xf69da
    X86_AT(c, 0xf6945u);
    goto L_f69da;
L_f694a:
    X86_TICK(c, 25);
    // 0f694a  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf694au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f694f  lea edx, [eax + eax*4]
    X86_AT(c, 0xf694fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f6952  lea edx, [eax + edx*2]
    X86_AT(c, 0xf6952u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f6955  shl edx, 5
    X86_AT(c, 0xf6955u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f6958  sub edx, eax
    X86_AT(c, 0xf6958u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f695a  cmp dword ptr [edx + 0xcdf6b], 0x40
    X86_AT(c, 0xf695au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))), 0x40u, 0, 4);
    // 0f6961  jl 0xf696f
    X86_AT(c, 0xf6961u);
    if (x86_cc(c, 12)) { goto L_f696f; }
    X86_TICK(c, 9);
    // 0f6963  mov dword ptr [edx + 0xcdf6b], 0
    X86_AT(c, 0xf6963u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)), 0x0u);
    // 0f696d  jmp 0xf6992
    X86_AT(c, 0xf696du);
    goto L_f6992;
L_f696f:
    X86_TICK(c, 25);
    // 0f696f  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf696fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f6974  lea edx, [eax + eax*4]
    X86_AT(c, 0xf6974u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f6977  lea edx, [eax + edx*2]
    X86_AT(c, 0xf6977u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f697a  shl edx, 5
    X86_AT(c, 0xf697au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f697d  sub edx, eax
    X86_AT(c, 0xf697du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f697f  cmp dword ptr [edx + 0xcdf6b], 0
    X86_AT(c, 0xf697fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))), 0x0u, 0, 4);
    // 0f6986  jge 0xf6992
    X86_AT(c, 0xf6986u);
    if (x86_cc(c, 13)) { goto L_f6992; }
    X86_TICK(c, 2);
    // 0f6988  mov dword ptr [edx + 0xcdf6b], 0x3f
    X86_AT(c, 0xf6988u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)), 0x3Fu);
L_f6992:
    X86_TICK(c, 25);
    // 0f6992  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf6992u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f6997  lea edx, [eax + eax*4]
    X86_AT(c, 0xf6997u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f699a  lea edx, [eax + edx*2]
    X86_AT(c, 0xf699au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f699d  shl edx, 5
    X86_AT(c, 0xf699du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f69a0  sub edx, eax
    X86_AT(c, 0xf69a0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f69a2  cmp dword ptr [edx + 0xcdf6f], 0x40
    X86_AT(c, 0xf69a2u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))), 0x40u, 0, 4);
    // 0f69a9  jl 0xf69b7
    X86_AT(c, 0xf69a9u);
    if (x86_cc(c, 12)) { goto L_f69b7; }
    X86_TICK(c, 9);
    // 0f69ab  mov dword ptr [edx + 0xcdf6f], 0
    X86_AT(c, 0xf69abu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)), 0x0u);
    // 0f69b5  jmp 0xf69da
    X86_AT(c, 0xf69b5u);
    goto L_f69da;
L_f69b7:
    X86_TICK(c, 25);
    // 0f69b7  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf69b7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f69bc  lea edx, [eax + eax*4]
    X86_AT(c, 0xf69bcu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f69bf  lea edx, [eax + edx*2]
    X86_AT(c, 0xf69bfu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f69c2  shl edx, 5
    X86_AT(c, 0xf69c2u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f69c5  sub edx, eax
    X86_AT(c, 0xf69c5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f69c7  cmp dword ptr [edx + 0xcdf6f], 0
    X86_AT(c, 0xf69c7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))), 0x0u, 0, 4);
    // 0f69ce  jge 0xf69da
    X86_AT(c, 0xf69ceu);
    if (x86_cc(c, 13)) { goto L_f69da; }
    X86_TICK(c, 2);
    // 0f69d0  mov dword ptr [edx + 0xcdf6f], 0x3f
    X86_AT(c, 0xf69d0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)), 0x3Fu);
L_f69da:
    X86_TICK(c, 9);
    // 0f69da  push 4
    X86_AT(c, 0xf69dau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0f69dc  call 0xe1a9c
    X86_AT(c, 0xf69dcu);
    push32(c, 0xf69e1u); f_000e1a9c(c); X86_RET(c, 0xf69e1u);
    X86_TICK(c, 9);
    // 0f69e1  add esp, 4
    X86_AT(c, 0xf69e1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f69e4  jmp 0xf6723
    X86_AT(c, 0xf69e4u);
    X86_POLL(c, 0xf6723u); goto L_f6723;
L_f69e9:
    X86_TICK(c, 22);
    // 0f69e9  pop edi
    X86_AT(c, 0xf69e9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f69ea  pop esi
    X86_AT(c, 0xf69eau);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f69eb  pop ebx
    X86_AT(c, 0xf69ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f69ec  ret 
    X86_AT(c, 0xf69ecu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf68efu, "ran off the end of a function");
}
void f_000f69f0(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0f69f0  push 7
    X86_AT(c, 0xf69f0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f69f2  call 0xe693c
    X86_AT(c, 0xf69f2u);
    push32(c, 0xf69f7u); f_000e693c(c); X86_RET(c, 0xf69f7u);
    X86_TICK(c, 28);
    // 0f69f7  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf69f7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f69fc  lea edx, [eax + eax*4]
    X86_AT(c, 0xf69fcu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f69ff  lea edx, [eax + edx*2]
    X86_AT(c, 0xf69ffu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f6a02  shl edx, 5
    X86_AT(c, 0xf6a02u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f6a05  sub edx, eax
    X86_AT(c, 0xf6a05u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f6a07  add esp, 4
    X86_AT(c, 0xf6a07u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f6a0a  mov edx, dword ptr [edx + 0xcde99]
    X86_AT(c, 0xf6a0au);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u)));
    // 0f6a10  sub edx, 5
    X86_AT(c, 0xf6a10u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x5u, 0, 4); }
    // 0f6a13  cmp edx, 8
    X86_AT(c, 0xf6a13u);
    (void)x86_sub(c, c.r[2], 0x8u, 0, 4);
    // 0f6a16  ja 0xf6a87
    X86_AT(c, 0xf6a16u);
    if (x86_cc(c, 7)) { goto L_f6a87; }
    X86_TICK(c, 7);
    // 0f6a1c  jmp dword ptr cs:[edx*4 + 0xf6a24]
    X86_AT(c, 0xf6a1cu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF6A24u)));
      switch (t) {
      case 0xf6a48u: goto L_f6a48;
      case 0xf6a4fu: goto L_f6a4f;
      case 0xf6a56u: goto L_f6a56;
      case 0xf6a5du: goto L_f6a5d;
      case 0xf6a64u: goto L_f6a64;
      case 0xf6a6bu: goto L_f6a6b;
      case 0xf6a72u: goto L_f6a72;
      case 0xf6a79u: goto L_f6a79;
      case 0xf6a80u: goto L_f6a80;
      default: x86_jump(c, t); return; } }
L_f6a48:
    X86_TICK(c, 9);
    // 0f6a48  push 0x97dc
    X86_AT(c, 0xf6a48u);
    { uint32_t v = 0x97DCu; push32(c, v); }
    // 0f6a4d  jmp 0xf6a8c
    X86_AT(c, 0xf6a4du);
    goto L_f6a8c;
L_f6a4f:
    X86_TICK(c, 9);
    // 0f6a4f  push 0x97f0
    X86_AT(c, 0xf6a4fu);
    { uint32_t v = 0x97F0u; push32(c, v); }
    // 0f6a54  jmp 0xf6a8c
    X86_AT(c, 0xf6a54u);
    goto L_f6a8c;
L_f6a56:
    X86_TICK(c, 9);
    // 0f6a56  push 0x9800
    X86_AT(c, 0xf6a56u);
    { uint32_t v = 0x9800u; push32(c, v); }
    // 0f6a5b  jmp 0xf6a8c
    X86_AT(c, 0xf6a5bu);
    goto L_f6a8c;
L_f6a5d:
    X86_TICK(c, 9);
    // 0f6a5d  push 0x9810
    X86_AT(c, 0xf6a5du);
    { uint32_t v = 0x9810u; push32(c, v); }
    // 0f6a62  jmp 0xf6a8c
    X86_AT(c, 0xf6a62u);
    goto L_f6a8c;
L_f6a64:
    X86_TICK(c, 9);
    // 0f6a64  push 0x9824
    X86_AT(c, 0xf6a64u);
    { uint32_t v = 0x9824u; push32(c, v); }
    // 0f6a69  jmp 0xf6a8c
    X86_AT(c, 0xf6a69u);
    goto L_f6a8c;
L_f6a6b:
    X86_TICK(c, 9);
    // 0f6a6b  push 0x9838
    X86_AT(c, 0xf6a6bu);
    { uint32_t v = 0x9838u; push32(c, v); }
    // 0f6a70  jmp 0xf6a8c
    X86_AT(c, 0xf6a70u);
    goto L_f6a8c;
L_f6a72:
    X86_TICK(c, 9);
    // 0f6a72  push 0x984c
    X86_AT(c, 0xf6a72u);
    { uint32_t v = 0x984Cu; push32(c, v); }
    // 0f6a77  jmp 0xf6a8c
    X86_AT(c, 0xf6a77u);
    goto L_f6a8c;
L_f6a79:
    X86_TICK(c, 9);
    // 0f6a79  push 0x9864
    X86_AT(c, 0xf6a79u);
    { uint32_t v = 0x9864u; push32(c, v); }
    // 0f6a7e  jmp 0xf6a8c
    X86_AT(c, 0xf6a7eu);
    goto L_f6a8c;
L_f6a80:
    X86_TICK(c, 9);
    // 0f6a80  push 0x9878
    X86_AT(c, 0xf6a80u);
    { uint32_t v = 0x9878u; push32(c, v); }
    // 0f6a85  jmp 0xf6a8c
    X86_AT(c, 0xf6a85u);
    goto L_f6a8c;
L_f6a87:
    X86_TICK(c, 2);
    // 0f6a87  push 0x9890
    X86_AT(c, 0xf6a87u);
    { uint32_t v = 0x9890u; push32(c, v); }
L_f6a8c:
    X86_TICK(c, 9);
    // 0f6a8c  push 7
    X86_AT(c, 0xf6a8cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6a8e  call 0xe5654
    X86_AT(c, 0xf6a8eu);
    push32(c, 0xf6a93u); f_000e5654(c); X86_RET(c, 0xf6a93u);
    X86_TICK(c, 12);
    // 0f6a93  add esp, 8
    X86_AT(c, 0xf6a93u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f6a96  ret 
    X86_AT(c, 0xf6a96u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf69f0u, "ran off the end of a function");
}
void f_000f6a98(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0f6a98  push esi
    X86_AT(c, 0xf6a98u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f6a99  push edi
    X86_AT(c, 0xf6a99u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f6a9a  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf6a9au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f6a9f  lea edx, [eax + eax*4]
    X86_AT(c, 0xf6a9fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f6aa2  lea edx, [eax + edx*2]
    X86_AT(c, 0xf6aa2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f6aa5  shl edx, 5
    X86_AT(c, 0xf6aa5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f6aa8  sub edx, eax
    X86_AT(c, 0xf6aa8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f6aaa  cmp dword ptr [edx + 0xcdf57], 2
    X86_AT(c, 0xf6aaau);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))), 0x2u, 0, 4);
    // 0f6ab1  jne 0xf6b4c
    X86_AT(c, 0xf6ab1u);
    if (x86_cc(c, 5)) { goto L_f6b4c; }
    X86_TICK(c, 13);
    // 0f6ab7  mov edx, dword ptr [edx + 0xcde99]
    X86_AT(c, 0xf6ab7u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u)));
    // 0f6abd  sub edx, 2
    X86_AT(c, 0xf6abdu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0f6ac0  cmp edx, 0xb
    X86_AT(c, 0xf6ac0u);
    (void)x86_sub(c, c.r[2], 0xBu, 0, 4);
    // 0f6ac3  ja 0xf6cac
    X86_AT(c, 0xf6ac3u);
    if (x86_cc(c, 7)) { goto L_f6cac; }
    X86_TICK(c, 7);
    // 0f6ac9  jmp dword ptr cs:[edx*4 + 0xf6ad1]
    X86_AT(c, 0xf6ac9u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF6AD1u)));
      switch (t) {
      case 0xf6b01u: goto L_f6b01;
      case 0xf6b10u: goto L_f6b10;
      case 0xf6b1fu: goto L_f6b1f;
      case 0xf6b2eu: goto L_f6b2e;
      case 0xf6b3du: goto L_f6b3d;
      case 0xf6cacu: goto L_f6cac;
      default: x86_jump(c, t); return; } }
L_f6b01:
    X86_TICK(c, 11);
    // 0f6b01  mov edi, 0x98a8
    X86_AT(c, 0xf6b01u);
    c.r[7] = 0x98A8u;
    // 0f6b06  mov esi, 0x98b8
    X86_AT(c, 0xf6b06u);
    c.r[6] = 0x98B8u;
    // 0f6b0b  jmp 0xf6cac
    X86_AT(c, 0xf6b0bu);
    goto L_f6cac;
L_f6b10:
    X86_TICK(c, 11);
    // 0f6b10  mov edi, 0x98d0
    X86_AT(c, 0xf6b10u);
    c.r[7] = 0x98D0u;
    // 0f6b15  mov esi, 0x98ec
    X86_AT(c, 0xf6b15u);
    c.r[6] = 0x98ECu;
    // 0f6b1a  jmp 0xf6cac
    X86_AT(c, 0xf6b1au);
    goto L_f6cac;
L_f6b1f:
    X86_TICK(c, 11);
    // 0f6b1f  mov edi, 0x990c
    X86_AT(c, 0xf6b1fu);
    c.r[7] = 0x990Cu;
    // 0f6b24  mov esi, 0x991c
    X86_AT(c, 0xf6b24u);
    c.r[6] = 0x991Cu;
    // 0f6b29  jmp 0xf6cac
    X86_AT(c, 0xf6b29u);
    goto L_f6cac;
L_f6b2e:
    X86_TICK(c, 11);
    // 0f6b2e  mov edi, 0x9930
    X86_AT(c, 0xf6b2eu);
    c.r[7] = 0x9930u;
    // 0f6b33  mov esi, 0x9944
    X86_AT(c, 0xf6b33u);
    c.r[6] = 0x9944u;
    // 0f6b38  jmp 0xf6cac
    X86_AT(c, 0xf6b38u);
    goto L_f6cac;
L_f6b3d:
    X86_TICK(c, 11);
    // 0f6b3d  mov edi, 0x995c
    X86_AT(c, 0xf6b3du);
    c.r[7] = 0x995Cu;
    // 0f6b42  mov esi, 0x996c
    X86_AT(c, 0xf6b42u);
    c.r[6] = 0x996Cu;
    // 0f6b47  jmp 0xf6cac
    X86_AT(c, 0xf6b47u);
    goto L_f6cac;
L_f6b4c:
    X86_TICK(c, 25);
    // 0f6b4c  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf6b4cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f6b51  lea edx, [eax + eax*4]
    X86_AT(c, 0xf6b51u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f6b54  lea edx, [eax + edx*2]
    X86_AT(c, 0xf6b54u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f6b57  shl edx, 5
    X86_AT(c, 0xf6b57u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f6b5a  sub edx, eax
    X86_AT(c, 0xf6b5au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f6b5c  cmp dword ptr [edx + 0xcdf57], 1
    X86_AT(c, 0xf6b5cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))), 0x1u, 0, 4);
    // 0f6b63  jne 0xf6c16
    X86_AT(c, 0xf6b63u);
    if (x86_cc(c, 5)) { goto L_f6c16; }
    X86_TICK(c, 13);
    // 0f6b69  mov edx, dword ptr [edx + 0xcde99]
    X86_AT(c, 0xf6b69u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u)));
    // 0f6b6f  dec edx
    X86_AT(c, 0xf6b6fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0f6b70  cmp edx, 0xa
    X86_AT(c, 0xf6b70u);
    (void)x86_sub(c, c.r[2], 0xAu, 0, 4);
    // 0f6b73  ja 0xf6cac
    X86_AT(c, 0xf6b73u);
    if (x86_cc(c, 7)) { goto L_f6cac; }
    X86_TICK(c, 7);
    // 0f6b79  jmp dword ptr cs:[edx*4 + 0xf6b81]
    X86_AT(c, 0xf6b79u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF6B81u)));
      switch (t) {
      case 0xf6badu: goto L_f6bad;
      case 0xf6bbcu: goto L_f6bbc;
      case 0xf6bcbu: goto L_f6bcb;
      case 0xf6bdau: goto L_f6bda;
      case 0xf6be9u: goto L_f6be9;
      case 0xf6bf8u: goto L_f6bf8;
      case 0xf6c07u: goto L_f6c07;
      case 0xf6cacu: goto L_f6cac;
      default: x86_jump(c, t); return; } }
L_f6bad:
    X86_TICK(c, 11);
    // 0f6bad  mov edi, 0x9984
    X86_AT(c, 0xf6badu);
    c.r[7] = 0x9984u;
    // 0f6bb2  mov esi, 0x999c
    X86_AT(c, 0xf6bb2u);
    c.r[6] = 0x999Cu;
    // 0f6bb7  jmp 0xf6cac
    X86_AT(c, 0xf6bb7u);
    goto L_f6cac;
L_f6bbc:
    X86_TICK(c, 11);
    // 0f6bbc  mov edi, 0x99b8
    X86_AT(c, 0xf6bbcu);
    c.r[7] = 0x99B8u;
    // 0f6bc1  mov esi, 0x99c8
    X86_AT(c, 0xf6bc1u);
    c.r[6] = 0x99C8u;
    // 0f6bc6  jmp 0xf6cac
    X86_AT(c, 0xf6bc6u);
    goto L_f6cac;
L_f6bcb:
    X86_TICK(c, 11);
    // 0f6bcb  mov edi, 0x99dc
    X86_AT(c, 0xf6bcbu);
    c.r[7] = 0x99DCu;
    // 0f6bd0  mov esi, 0x99f0
    X86_AT(c, 0xf6bd0u);
    c.r[6] = 0x99F0u;
    // 0f6bd5  jmp 0xf6cac
    X86_AT(c, 0xf6bd5u);
    goto L_f6cac;
L_f6bda:
    X86_TICK(c, 11);
    // 0f6bda  mov edi, 0x9a0c
    X86_AT(c, 0xf6bdau);
    c.r[7] = 0x9A0Cu;
    // 0f6bdf  mov esi, 0x9a24
    X86_AT(c, 0xf6bdfu);
    c.r[6] = 0x9A24u;
    // 0f6be4  jmp 0xf6cac
    X86_AT(c, 0xf6be4u);
    goto L_f6cac;
L_f6be9:
    X86_TICK(c, 11);
    // 0f6be9  mov edi, 0x9a44
    X86_AT(c, 0xf6be9u);
    c.r[7] = 0x9A44u;
    // 0f6bee  mov esi, 0x9a5c
    X86_AT(c, 0xf6beeu);
    c.r[6] = 0x9A5Cu;
    // 0f6bf3  jmp 0xf6cac
    X86_AT(c, 0xf6bf3u);
    goto L_f6cac;
L_f6bf8:
    X86_TICK(c, 11);
    // 0f6bf8  mov edi, 0x9a7c
    X86_AT(c, 0xf6bf8u);
    c.r[7] = 0x9A7Cu;
    // 0f6bfd  mov esi, 0x9a90
    X86_AT(c, 0xf6bfdu);
    c.r[6] = 0x9A90u;
    // 0f6c02  jmp 0xf6cac
    X86_AT(c, 0xf6c02u);
    goto L_f6cac;
L_f6c07:
    X86_TICK(c, 11);
    // 0f6c07  mov edi, 0x9aa4
    X86_AT(c, 0xf6c07u);
    c.r[7] = 0x9AA4u;
    // 0f6c0c  mov esi, 0x9abc
    X86_AT(c, 0xf6c0cu);
    c.r[6] = 0x9ABCu;
    // 0f6c11  jmp 0xf6cac
    X86_AT(c, 0xf6c11u);
    goto L_f6cac;
L_f6c16:
    X86_TICK(c, 25);
    // 0f6c16  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf6c16u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f6c1b  lea edx, [eax + eax*4]
    X86_AT(c, 0xf6c1bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f6c1e  lea edx, [eax + edx*2]
    X86_AT(c, 0xf6c1eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f6c21  shl edx, 5
    X86_AT(c, 0xf6c21u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f6c24  sub edx, eax
    X86_AT(c, 0xf6c24u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f6c26  cmp dword ptr [edx + 0xcdf57], 3
    X86_AT(c, 0xf6c26u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))), 0x3u, 0, 4);
    // 0f6c2d  jne 0xf6cd7
    X86_AT(c, 0xf6c2du);
    if (x86_cc(c, 5)) { goto L_f6cd7; }
    X86_TICK(c, 11);
    // 0f6c33  mov edx, dword ptr [edx + 0xcde99]
    X86_AT(c, 0xf6c33u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u)));
    // 0f6c39  cmp edx, 0xd
    X86_AT(c, 0xf6c39u);
    (void)x86_sub(c, c.r[2], 0xDu, 0, 4);
    // 0f6c3c  ja 0xf6cac
    X86_AT(c, 0xf6c3cu);
    if (x86_cc(c, 7)) { goto L_f6cac; }
    X86_TICK(c, 7);
    // 0f6c3e  jmp dword ptr cs:[edx*4 + 0xf6c46]
    X86_AT(c, 0xf6c3eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF6C46u)));
      switch (t) {
      case 0xf6c7eu: goto L_f6c7e;
      case 0xf6c8au: goto L_f6c8a;
      case 0xf6c96u: goto L_f6c96;
      case 0xf6ca2u: goto L_f6ca2;
      case 0xf6cacu: goto L_f6cac;
      default: x86_jump(c, t); return; } }
L_f6c7e:
    X86_TICK(c, 11);
    // 0f6c7e  mov edi, 0x9ad8
    X86_AT(c, 0xf6c7eu);
    c.r[7] = 0x9AD8u;
    // 0f6c83  mov esi, 0x9ae4
    X86_AT(c, 0xf6c83u);
    c.r[6] = 0x9AE4u;
    // 0f6c88  jmp 0xf6cac
    X86_AT(c, 0xf6c88u);
    goto L_f6cac;
L_f6c8a:
    X86_TICK(c, 11);
    // 0f6c8a  mov edi, 0x9b04
    X86_AT(c, 0xf6c8au);
    c.r[7] = 0x9B04u;
    // 0f6c8f  mov esi, 0x9b18
    X86_AT(c, 0xf6c8fu);
    c.r[6] = 0x9B18u;
    // 0f6c94  jmp 0xf6cac
    X86_AT(c, 0xf6c94u);
    goto L_f6cac;
L_f6c96:
    X86_TICK(c, 11);
    // 0f6c96  mov edi, 0x9b44
    X86_AT(c, 0xf6c96u);
    c.r[7] = 0x9B44u;
    // 0f6c9b  mov esi, 0x9b58
    X86_AT(c, 0xf6c9bu);
    c.r[6] = 0x9B58u;
    // 0f6ca0  jmp 0xf6cac
    X86_AT(c, 0xf6ca0u);
    goto L_f6cac;
L_f6ca2:
    X86_TICK(c, 4);
    // 0f6ca2  mov edi, 0x9b84
    X86_AT(c, 0xf6ca2u);
    c.r[7] = 0x9B84u;
    // 0f6ca7  mov esi, 0x9b98
    X86_AT(c, 0xf6ca7u);
    c.r[6] = 0x9B98u;
L_f6cac:
    X86_TICK(c, 9);
    // 0f6cac  push 7
    X86_AT(c, 0xf6cacu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6cae  call 0xe693c
    X86_AT(c, 0xf6caeu);
    push32(c, 0xf6cb3u); f_000e693c(c); X86_RET(c, 0xf6cb3u);
    X86_TICK(c, 14);
    // 0f6cb3  add esp, 4
    X86_AT(c, 0xf6cb3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f6cb6  cmp dword ptr [0x7a6b4], 0
    X86_AT(c, 0xf6cb6u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x7A6B4u))), 0x0u, 0, 4);
    // 0f6cbd  jne 0xf6cc2
    X86_AT(c, 0xf6cbdu);
    if (x86_cc(c, 5)) { goto L_f6cc2; }
    X86_TICK(c, 9);
    // 0f6cbf  push esi
    X86_AT(c, 0xf6cbfu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f6cc0  jmp 0xf6cc3
    X86_AT(c, 0xf6cc0u);
    goto L_f6cc3;
L_f6cc2:
    X86_TICK(c, 2);
    // 0f6cc2  push edi
    X86_AT(c, 0xf6cc2u);
    { uint32_t v = c.r[7]; push32(c, v); }
L_f6cc3:
    X86_TICK(c, 9);
    // 0f6cc3  push 7
    X86_AT(c, 0xf6cc3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6cc5  call 0xe6cb0
    X86_AT(c, 0xf6cc5u);
    push32(c, 0xf6ccau); f_000e6cb0(c); X86_RET(c, 0xf6ccau);
    X86_TICK(c, 11);
    // 0f6cca  add esp, 8
    X86_AT(c, 0xf6ccau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f6ccd  push 7
    X86_AT(c, 0xf6ccdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6ccf  call 0xe6c68
    X86_AT(c, 0xf6ccfu);
    push32(c, 0xf6cd4u); f_000e6c68(c); X86_RET(c, 0xf6cd4u);
    X86_TICK(c, 2);
    // 0f6cd4  add esp, 4
    X86_AT(c, 0xf6cd4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_f6cd7:
    X86_TICK(c, 18);
    // 0f6cd7  pop edi
    X86_AT(c, 0xf6cd7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f6cd8  pop esi
    X86_AT(c, 0xf6cd8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f6cd9  ret 
    X86_AT(c, 0xf6cd9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf6a98u, "ran off the end of a function");
}
void f_000f6cac(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0f6cac  push 7
    X86_AT(c, 0xf6cacu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6cae  call 0xe693c
    X86_AT(c, 0xf6caeu);
    push32(c, 0xf6cb3u); f_000e693c(c); X86_RET(c, 0xf6cb3u);
    X86_TICK(c, 14);
    // 0f6cb3  add esp, 4
    X86_AT(c, 0xf6cb3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f6cb6  cmp dword ptr [0x7a6b4], 0
    X86_AT(c, 0xf6cb6u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x7A6B4u))), 0x0u, 0, 4);
    // 0f6cbd  jne 0xf6cc2
    X86_AT(c, 0xf6cbdu);
    if (x86_cc(c, 5)) { goto L_f6cc2; }
    X86_TICK(c, 9);
    // 0f6cbf  push esi
    X86_AT(c, 0xf6cbfu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f6cc0  jmp 0xf6cc3
    X86_AT(c, 0xf6cc0u);
    goto L_f6cc3;
L_f6cc2:
    X86_TICK(c, 2);
    // 0f6cc2  push edi
    X86_AT(c, 0xf6cc2u);
    { uint32_t v = c.r[7]; push32(c, v); }
L_f6cc3:
    X86_TICK(c, 9);
    // 0f6cc3  push 7
    X86_AT(c, 0xf6cc3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6cc5  call 0xe6cb0
    X86_AT(c, 0xf6cc5u);
    push32(c, 0xf6ccau); f_000e6cb0(c); X86_RET(c, 0xf6ccau);
    X86_TICK(c, 11);
    // 0f6cca  add esp, 8
    X86_AT(c, 0xf6ccau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f6ccd  push 7
    X86_AT(c, 0xf6ccdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6ccf  call 0xe6c68
    X86_AT(c, 0xf6ccfu);
    push32(c, 0xf6cd4u); f_000e6c68(c); X86_RET(c, 0xf6cd4u);
    X86_TICK(c, 20);
    // 0f6cd4  add esp, 4
    X86_AT(c, 0xf6cd4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f6cd7  pop edi
    X86_AT(c, 0xf6cd7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f6cd8  pop esi
    X86_AT(c, 0xf6cd8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f6cd9  ret 
    X86_AT(c, 0xf6cd9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf6cacu, "ran off the end of a function");
}
void f_000f6cdc(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0f6cdc  mov word ptr [0xcde48], 0xffff
    X86_AT(c, 0xf6cdcu);
    wr16((c.sbase[3] + (uint32_t)(0xCDE48u)), 0xFFFFu);
    // 0f6ce5  push 7
    X86_AT(c, 0xf6ce5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6ce7  call 0xe693c
    X86_AT(c, 0xf6ce7u);
    push32(c, 0xf6cecu); f_000e693c(c); X86_RET(c, 0xf6cecu);
    X86_TICK(c, 27);
    // 0f6cec  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf6cecu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f6cf1  lea edx, [eax + eax*4]
    X86_AT(c, 0xf6cf1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f6cf4  lea edx, [eax + edx*2]
    X86_AT(c, 0xf6cf4u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f6cf7  shl edx, 5
    X86_AT(c, 0xf6cf7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f6cfa  sub edx, eax
    X86_AT(c, 0xf6cfau);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f6cfc  add esp, 4
    X86_AT(c, 0xf6cfcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f6cff  cmp dword ptr [edx + 0xcde81], 0
    X86_AT(c, 0xf6cffu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE81u))), 0x0u, 0, 4);
    // 0f6d06  jne 0xf6d0d
    X86_AT(c, 0xf6d06u);
    if (x86_cc(c, 5)) { goto L_f6d0d; }
    X86_TICK(c, 7);
    // 0f6d08  call 0xf0a80
    X86_AT(c, 0xf6d08u);
    push32(c, 0xf6d0du); f_000f0a80(c); X86_RET(c, 0xf6d0du);
L_f6d0d:
    X86_TICK(c, 9);
    // 0f6d0d  push 7
    X86_AT(c, 0xf6d0du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6d0f  call 0xe7618
    X86_AT(c, 0xf6d0fu);
    push32(c, 0xf6d14u); f_000e7618(c); X86_RET(c, 0xf6d14u);
    X86_TICK(c, 7);
    // 0f6d14  call 0xf0928
    X86_AT(c, 0xf6d14u);
    push32(c, 0xf6d19u); f_000f0928(c); X86_RET(c, 0xf6d19u);
    X86_TICK(c, 27);
    // 0f6d19  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf6d19u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f6d1e  lea edx, [eax + eax*4]
    X86_AT(c, 0xf6d1eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f6d21  lea edx, [eax + edx*2]
    X86_AT(c, 0xf6d21u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f6d24  shl edx, 5
    X86_AT(c, 0xf6d24u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f6d27  sub edx, eax
    X86_AT(c, 0xf6d27u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f6d29  add esp, 4
    X86_AT(c, 0xf6d29u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f6d2c  cmp dword ptr [edx + 0xcdf9b], 0
    X86_AT(c, 0xf6d2cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF9Bu))), 0x0u, 0, 4);
    // 0f6d33  jg 0xf6ffc
    X86_AT(c, 0xf6d33u);
    if (x86_cc(c, 15)) { goto L_f6ffc; }
L_f6d39:
    X86_TICK(c, 9);
    // 0f6d39  push 7
    X86_AT(c, 0xf6d39u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6d3b  call 0xe4748
    X86_AT(c, 0xf6d3bu);
    push32(c, 0xf6d40u); f_000e4748(c); X86_RET(c, 0xf6d40u);
    X86_TICK(c, 11);
    // 0f6d40  mov byte ptr [0xd460c], al
    X86_AT(c, 0xf6d40u);
    wr8((c.sbase[3] + (uint32_t)(0xD460Cu)), g8(c, 0));
    // 0f6d45  add esp, 4
    X86_AT(c, 0xf6d45u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f6d48  and al, al
    X86_AT(c, 0xf6d48u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0f6d4a  je 0xf6d39
    X86_AT(c, 0xf6d4au);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf6d39u); goto L_f6d39; }
    X86_TICK(c, 15);
    // 0f6d4c  movzx edx, byte ptr [0xd460c]
    X86_AT(c, 0xf6d4cu);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(0xD460Cu)));
    // 0f6d53  dec edx
    X86_AT(c, 0xf6d53u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0f6d54  cmp edx, 0x59
    X86_AT(c, 0xf6d54u);
    (void)x86_sub(c, c.r[2], 0x59u, 0, 4);
    // 0f6d57  ja 0xf6fd6
    X86_AT(c, 0xf6d57u);
    if (x86_cc(c, 7)) { goto L_f6fd6; }
    X86_TICK(c, 7);
    // 0f6d5d  jmp dword ptr cs:[edx*4 + 0xf6d65]
    X86_AT(c, 0xf6d5du);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF6D65u)));
      switch (t) {
      case 0xf6ecdu: goto L_f6ecd;
      case 0xf6ed4u: goto L_f6ed4;
      case 0xf6edbu: goto L_f6edb;
      case 0xf6ee2u: goto L_f6ee2;
      case 0xf6ef6u: goto L_f6ef6;
      case 0xf6f00u: goto L_f6f00;
      case 0xf6f0au: goto L_f6f0a;
      case 0xf6f14u: goto L_f6f14;
      case 0xf6f1eu: goto L_f6f1e;
      case 0xf6f25u: goto L_f6f25;
      case 0xf6f2fu: goto L_f6f2f;
      case 0xf6f39u: goto L_f6f39;
      case 0xf6f43u: goto L_f6f43;
      case 0xf6f4du: goto L_f6f4d;
      case 0xf6f57u: goto L_f6f57;
      case 0xf6f61u: goto L_f6f61;
      case 0xf6f6bu: goto L_f6f6b;
      case 0xf6f75u: goto L_f6f75;
      case 0xf6f7fu: goto L_f6f7f;
      case 0xf6f90u: goto L_f6f90;
      case 0xf6f97u: goto L_f6f97;
      case 0xf6f9eu: goto L_f6f9e;
      case 0xf6fa5u: goto L_f6fa5;
      case 0xf6facu: goto L_f6fac;
      case 0xf6fb3u: goto L_f6fb3;
      case 0xf6fbau: goto L_f6fba;
      case 0xf6fc1u: goto L_f6fc1;
      case 0xf6fc8u: goto L_f6fc8;
      case 0xf6fcfu: goto L_f6fcf;
      case 0xf6fd6u: goto L_f6fd6;
      default: x86_jump(c, t); return; } }
L_f6ecd:
    X86_TICK(c, 7);
    // 0f6ecd  call 0xf728c
    X86_AT(c, 0xf6ecdu);
    push32(c, 0xf6ed2u); f_000f728c(c); X86_RET(c, 0xf6ed2u);
    X86_TICK(c, 7);
    // 0f6ed2  jmp 0xf6ee7
    X86_AT(c, 0xf6ed2u);
    goto L_f6ee7;
L_f6ed4:
    X86_TICK(c, 7);
    // 0f6ed4  call 0xf71b4
    X86_AT(c, 0xf6ed4u);
    push32(c, 0xf6ed9u); f_000f71b4(c); X86_RET(c, 0xf6ed9u);
    X86_TICK(c, 7);
    // 0f6ed9  jmp 0xf6ee7
    X86_AT(c, 0xf6ed9u);
    goto L_f6ee7;
L_f6edb:
    X86_TICK(c, 7);
    // 0f6edb  call 0xf7014
    X86_AT(c, 0xf6edbu);
    push32(c, 0xf6ee0u); f_000f7014(c); X86_RET(c, 0xf6ee0u);
    X86_TICK(c, 7);
    // 0f6ee0  jmp 0xf6ee7
    X86_AT(c, 0xf6ee0u);
    goto L_f6ee7;
L_f6ee2:
    X86_TICK(c, 7);
    // 0f6ee2  call 0xf70e4
    X86_AT(c, 0xf6ee2u);
    push32(c, 0xf6ee7u); f_000f70e4(c); X86_RET(c, 0xf6ee7u);
L_f6ee7:
    X86_TICK(c, 9);
    // 0f6ee7  push 7
    X86_AT(c, 0xf6ee7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6ee9  call 0xe6c68
    X86_AT(c, 0xf6ee9u);
    push32(c, 0xf6eeeu); f_000e6c68(c); X86_RET(c, 0xf6eeeu);
    X86_TICK(c, 9);
    // 0f6eee  add esp, 4
    X86_AT(c, 0xf6eeeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f6ef1  jmp 0xf6ff3
    X86_AT(c, 0xf6ef1u);
    goto L_f6ff3;
L_f6ef6:
    X86_TICK(c, 7);
    // 0f6ef6  call 0xf2810
    X86_AT(c, 0xf6ef6u);
    push32(c, 0xf6efbu); f_000f2810(c); X86_RET(c, 0xf6efbu);
    X86_TICK(c, 7);
    // 0f6efb  jmp 0xf6ff3
    X86_AT(c, 0xf6efbu);
    goto L_f6ff3;
L_f6f00:
    X86_TICK(c, 7);
    // 0f6f00  call 0xf76f4
    X86_AT(c, 0xf6f00u);
    push32(c, 0xf6f05u); f_000f76f4(c); X86_RET(c, 0xf6f05u);
    X86_TICK(c, 7);
    // 0f6f05  jmp 0xf6ff3
    X86_AT(c, 0xf6f05u);
    goto L_f6ff3;
L_f6f0a:
    X86_TICK(c, 7);
    // 0f6f0a  call 0xf79f0
    X86_AT(c, 0xf6f0au);
    push32(c, 0xf6f0fu); f_000f79f0(c); X86_RET(c, 0xf6f0fu);
    X86_TICK(c, 7);
    // 0f6f0f  jmp 0xf6ff3
    X86_AT(c, 0xf6f0fu);
    goto L_f6ff3;
L_f6f14:
    X86_TICK(c, 7);
    // 0f6f14  call 0xf79f8
    X86_AT(c, 0xf6f14u);
    push32(c, 0xf6f19u); f_000f79f8(c); X86_RET(c, 0xf6f19u);
    X86_TICK(c, 7);
    // 0f6f19  jmp 0xf6ff3
    X86_AT(c, 0xf6f19u);
    goto L_f6ff3;
L_f6f1e:
    X86_TICK(c, 7);
    // 0f6f1e  call 0xeeba8
    X86_AT(c, 0xf6f1eu);
    push32(c, 0xf6f23u); f_000eeba8(c); X86_RET(c, 0xf6f23u);
    X86_TICK(c, 7);
    // 0f6f23  jmp 0xf6f84
    X86_AT(c, 0xf6f23u);
    goto L_f6f84;
L_f6f25:
    X86_TICK(c, 7);
    // 0f6f25  call 0xf21c4
    X86_AT(c, 0xf6f25u);
    push32(c, 0xf6f2au); f_000f21c4(c); X86_RET(c, 0xf6f2au);
    X86_TICK(c, 7);
    // 0f6f2a  jmp 0xf6ff3
    X86_AT(c, 0xf6f2au);
    goto L_f6ff3;
L_f6f2f:
    X86_TICK(c, 7);
    // 0f6f2f  call 0xf7364
    X86_AT(c, 0xf6f2fu);
    push32(c, 0xf6f34u); f_000f7364(c); X86_RET(c, 0xf6f34u);
    X86_TICK(c, 7);
    // 0f6f34  jmp 0xf6ff3
    X86_AT(c, 0xf6f34u);
    goto L_f6ff3;
L_f6f39:
    X86_TICK(c, 7);
    // 0f6f39  call 0xeeecc
    X86_AT(c, 0xf6f39u);
    push32(c, 0xf6f3eu); f_000eeecc(c); X86_RET(c, 0xf6f3eu);
    X86_TICK(c, 7);
    // 0f6f3e  jmp 0xf6ff3
    X86_AT(c, 0xf6f3eu);
    goto L_f6ff3;
L_f6f43:
    X86_TICK(c, 7);
    // 0f6f43  call 0xf738c
    X86_AT(c, 0xf6f43u);
    push32(c, 0xf6f48u); f_000f738c(c); X86_RET(c, 0xf6f48u);
    X86_TICK(c, 7);
    // 0f6f48  jmp 0xf6ff3
    X86_AT(c, 0xf6f48u);
    goto L_f6ff3;
L_f6f4d:
    X86_TICK(c, 7);
    // 0f6f4d  call 0xf73c0
    X86_AT(c, 0xf6f4du);
    push32(c, 0xf6f52u); f_000f73c0(c); X86_RET(c, 0xf6f52u);
    X86_TICK(c, 7);
    // 0f6f52  jmp 0xf6ff3
    X86_AT(c, 0xf6f52u);
    goto L_f6ff3;
L_f6f57:
    X86_TICK(c, 7);
    // 0f6f57  call 0xf61c4
    X86_AT(c, 0xf6f57u);
    push32(c, 0xf6f5cu); f_000f61c4(c); X86_RET(c, 0xf6f5cu);
    X86_TICK(c, 7);
    // 0f6f5c  jmp 0xf6ff3
    X86_AT(c, 0xf6f5cu);
    goto L_f6ff3;
L_f6f61:
    X86_TICK(c, 7);
    // 0f6f61  call 0xf73ec
    X86_AT(c, 0xf6f61u);
    push32(c, 0xf6f66u); f_000f73ec(c); X86_RET(c, 0xf6f66u);
    X86_TICK(c, 7);
    // 0f6f66  jmp 0xf6ff3
    X86_AT(c, 0xf6f66u);
    goto L_f6ff3;
L_f6f6b:
    X86_TICK(c, 7);
    // 0f6f6b  call 0xeef7c
    X86_AT(c, 0xf6f6bu);
    push32(c, 0xf6f70u); f_000eef7c(c); X86_RET(c, 0xf6f70u);
    X86_TICK(c, 7);
    // 0f6f70  jmp 0xf6ff3
    X86_AT(c, 0xf6f70u);
    goto L_f6ff3;
L_f6f75:
    X86_TICK(c, 7);
    // 0f6f75  call 0xf1294
    X86_AT(c, 0xf6f75u);
    push32(c, 0xf6f7au); f_000f1294(c); X86_RET(c, 0xf6f7au);
    X86_TICK(c, 7);
    // 0f6f7a  jmp 0xf6ff3
    X86_AT(c, 0xf6f7au);
    goto L_f6ff3;
L_f6f7f:
    X86_TICK(c, 7);
    // 0f6f7f  call 0xf326c
    X86_AT(c, 0xf6f7fu);
    push32(c, 0xf6f84u); f_000f326c(c); X86_RET(c, 0xf6f84u);
L_f6f84:
    X86_TICK(c, 9);
    // 0f6f84  mov byte ptr [0xd460c], 0x41
    X86_AT(c, 0xf6f84u);
    wr8((c.sbase[3] + (uint32_t)(0xD460Cu)), 0x41u);
    // 0f6f8b  jmp 0xf6ff3
    X86_AT(c, 0xf6f8bu);
    goto L_f6ff3;
L_f6f90:
    X86_TICK(c, 7);
    // 0f6f90  call 0xf8384
    X86_AT(c, 0xf6f90u);
    push32(c, 0xf6f95u); f_000f8384(c); X86_RET(c, 0xf6f95u);
    X86_TICK(c, 7);
    // 0f6f95  jmp 0xf6ff3
    X86_AT(c, 0xf6f95u);
    goto L_f6ff3;
L_f6f97:
    X86_TICK(c, 7);
    // 0f6f97  call 0xf1964
    X86_AT(c, 0xf6f97u);
    push32(c, 0xf6f9cu); f_000f1964(c); X86_RET(c, 0xf6f9cu);
    X86_TICK(c, 7);
    // 0f6f9c  jmp 0xf6ff3
    X86_AT(c, 0xf6f9cu);
    goto L_f6ff3;
L_f6f9e:
    X86_TICK(c, 7);
    // 0f6f9e  call 0xf8474
    X86_AT(c, 0xf6f9eu);
    push32(c, 0xf6fa3u); f_000f8474(c); X86_RET(c, 0xf6fa3u);
    X86_TICK(c, 7);
    // 0f6fa3  jmp 0xf6ff3
    X86_AT(c, 0xf6fa3u);
    goto L_f6ff3;
L_f6fa5:
    X86_TICK(c, 7);
    // 0f6fa5  call 0xf1cac
    X86_AT(c, 0xf6fa5u);
    push32(c, 0xf6faau); f_000f1cac(c); X86_RET(c, 0xf6faau);
    X86_TICK(c, 7);
    // 0f6faa  jmp 0xf6ff3
    X86_AT(c, 0xf6faau);
    goto L_f6ff3;
L_f6fac:
    X86_TICK(c, 7);
    // 0f6fac  call 0xf8914
    X86_AT(c, 0xf6facu);
    push32(c, 0xf6fb1u); f_000f8914(c); X86_RET(c, 0xf6fb1u);
    X86_TICK(c, 7);
    // 0f6fb1  jmp 0xf6ff3
    X86_AT(c, 0xf6fb1u);
    goto L_f6ff3;
L_f6fb3:
    X86_TICK(c, 7);
    // 0f6fb3  call 0xf82c4
    X86_AT(c, 0xf6fb3u);
    push32(c, 0xf6fb8u); f_000f82c4(c); X86_RET(c, 0xf6fb8u);
    X86_TICK(c, 7);
    // 0f6fb8  jmp 0xf6ff3
    X86_AT(c, 0xf6fb8u);
    goto L_f6ff3;
L_f6fba:
    X86_TICK(c, 7);
    // 0f6fba  call 0xf1b08
    X86_AT(c, 0xf6fbau);
    push32(c, 0xf6fbfu); f_000f1b08(c); X86_RET(c, 0xf6fbfu);
    X86_TICK(c, 7);
    // 0f6fbf  jmp 0xf6ff3
    X86_AT(c, 0xf6fbfu);
    goto L_f6ff3;
L_f6fc1:
    X86_TICK(c, 7);
    // 0f6fc1  call 0xf8a60
    X86_AT(c, 0xf6fc1u);
    push32(c, 0xf6fc6u); f_000f8a60(c); X86_RET(c, 0xf6fc6u);
    X86_TICK(c, 7);
    // 0f6fc6  jmp 0xf6ff3
    X86_AT(c, 0xf6fc6u);
    goto L_f6ff3;
L_f6fc8:
    X86_TICK(c, 7);
    // 0f6fc8  call 0xf0dec
    X86_AT(c, 0xf6fc8u);
    push32(c, 0xf6fcdu); f_000f0dec(c); X86_RET(c, 0xf6fcdu);
    X86_TICK(c, 7);
    // 0f6fcd  jmp 0xf6ff3
    X86_AT(c, 0xf6fcdu);
    goto L_f6ff3;
L_f6fcf:
    X86_TICK(c, 7);
    // 0f6fcf  call 0xf8c78
    X86_AT(c, 0xf6fcfu);
    push32(c, 0xf6fd4u); f_000f8c78(c); X86_RET(c, 0xf6fd4u);
    X86_TICK(c, 7);
    // 0f6fd4  jmp 0xf6ff3
    X86_AT(c, 0xf6fd4u);
    goto L_f6ff3;
L_f6fd6:
    X86_TICK(c, 9);
    // 0f6fd6  push 1
    X86_AT(c, 0xf6fd6u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f6fd8  call 0xe1944
    X86_AT(c, 0xf6fd8u);
    push32(c, 0xf6fddu); f_000e1944(c); X86_RET(c, 0xf6fddu);
    X86_TICK(c, 11);
    // 0f6fdd  push 0x9bac
    X86_AT(c, 0xf6fddu);
    { uint32_t v = 0x9BACu; push32(c, v); }
    // 0f6fe2  push 7
    X86_AT(c, 0xf6fe2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6fe4  call 0xe5654
    X86_AT(c, 0xf6fe4u);
    push32(c, 0xf6fe9u); f_000e5654(c); X86_RET(c, 0xf6fe9u);
    X86_TICK(c, 9);
    // 0f6fe9  push 7
    X86_AT(c, 0xf6fe9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f6feb  call 0xe6c68
    X86_AT(c, 0xf6febu);
    push32(c, 0xf6ff0u); f_000e6c68(c); X86_RET(c, 0xf6ff0u);
    X86_TICK(c, 2);
    // 0f6ff0  add esp, 0x10
    X86_AT(c, 0xf6ff0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_f6ff3:
    X86_TICK(c, 12);
    // 0f6ff3  cmp dword ptr [0xcde34], 0
    X86_AT(c, 0xf6ff3u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDE34u))), 0x0u, 0, 4);
    // 0f6ffa  je 0xf7010
    X86_AT(c, 0xf6ffau);
    if (x86_cc(c, 4)) { goto L_f7010; }
L_f6ffc:
    X86_TICK(c, 12);
    // 0f6ffc  cmp word ptr [0xcde48], 0xffff
    X86_AT(c, 0xf6ffcu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xCDE48u))), 0xFFFFu, 0, 2);
    // 0f7004  jne 0xf7010
    X86_AT(c, 0xf7004u);
    if (x86_cc(c, 5)) { goto L_f7010; }
    X86_TICK(c, 7);
    // 0f7006  call 0xf7540
    X86_AT(c, 0xf7006u);
    push32(c, 0xf700bu); f_000f7540(c); X86_RET(c, 0xf700bu);
    X86_TICK(c, 7);
    // 0f700b  call 0xf8d4c
    X86_AT(c, 0xf700bu);
    push32(c, 0xf7010u); f_000f8d4c(c); X86_RET(c, 0xf7010u);
L_f7010:
    X86_TICK(c, 10);
    // 0f7010  ret 
    X86_AT(c, 0xf7010u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf6cdcu, "ran off the end of a function");
}
void f_000f6ff3(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0f6ff3  cmp dword ptr [0xcde34], 0
    X86_AT(c, 0xf6ff3u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDE34u))), 0x0u, 0, 4);
    // 0f6ffa  je 0xf7010
    X86_AT(c, 0xf6ffau);
    if (x86_cc(c, 4)) { goto L_f7010; }
    X86_TICK(c, 12);
    // 0f6ffc  cmp word ptr [0xcde48], 0xffff
    X86_AT(c, 0xf6ffcu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xCDE48u))), 0xFFFFu, 0, 2);
    // 0f7004  jne 0xf7010
    X86_AT(c, 0xf7004u);
    if (x86_cc(c, 5)) { goto L_f7010; }
    X86_TICK(c, 7);
    // 0f7006  call 0xf7540
    X86_AT(c, 0xf7006u);
    push32(c, 0xf700bu); f_000f7540(c); X86_RET(c, 0xf700bu);
    X86_TICK(c, 7);
    // 0f700b  call 0xf8d4c
    X86_AT(c, 0xf700bu);
    push32(c, 0xf7010u); f_000f8d4c(c); X86_RET(c, 0xf7010u);
L_f7010:
    X86_TICK(c, 10);
    // 0f7010  ret 
    X86_AT(c, 0xf7010u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf6ff3u, "ran off the end of a function");
}
void f_000f7014(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0f7014  push 7
    X86_AT(c, 0xf7014u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7016  call 0xe693c
    X86_AT(c, 0xf7016u);
    push32(c, 0xf701bu); f_000e693c(c); X86_RET(c, 0xf701bu);
    X86_TICK(c, 11);
    // 0f701b  push 0x9bc0
    X86_AT(c, 0xf701bu);
    { uint32_t v = 0x9BC0u; push32(c, v); }
    // 0f7020  push 7
    X86_AT(c, 0xf7020u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7022  call 0xe5654
    X86_AT(c, 0xf7022u);
    push32(c, 0xf7027u); f_000e5654(c); X86_RET(c, 0xf7027u);
    X86_TICK(c, 9);
    // 0f7027  push 7
    X86_AT(c, 0xf7027u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7029  call 0xe6c68
    X86_AT(c, 0xf7029u);
    push32(c, 0xf702eu); f_000e6c68(c); X86_RET(c, 0xf702eu);
    X86_TICK(c, 27);
    // 0f702e  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf702eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7033  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7033u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7036  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7036u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7039  shl edx, 5
    X86_AT(c, 0xf7039u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f703c  sub edx, eax
    X86_AT(c, 0xf703cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f703e  add esp, 0x10
    X86_AT(c, 0xf703eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f7041  cmp dword ptr [edx + 0xcde56], 4
    X86_AT(c, 0xf7041u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE56u))), 0x4u, 0, 4);
    // 0f7048  jne 0xf7051
    X86_AT(c, 0xf7048u);
    if (x86_cc(c, 5)) { goto L_f7051; }
    X86_TICK(c, 9);
    // 0f704a  push 0x9bd4
    X86_AT(c, 0xf704au);
    { uint32_t v = 0x9BD4u; push32(c, v); }
    // 0f704f  jmp 0xf706f
    X86_AT(c, 0xf704fu);
    goto L_f706f;
L_f7051:
    X86_TICK(c, 25);
    // 0f7051  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7051u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7056  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7056u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7059  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7059u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f705c  shl edx, 5
    X86_AT(c, 0xf705cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f705f  sub edx, eax
    X86_AT(c, 0xf705fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7061  cmp dword ptr [edx + 0xcdf97], 0
    X86_AT(c, 0xf7061u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF97u))), 0x0u, 0, 4);
    // 0f7068  jle 0xf707f
    X86_AT(c, 0xf7068u);
    if (x86_cc(c, 14)) { goto L_f707f; }
    X86_TICK(c, 2);
    // 0f706a  push 0x9c00
    X86_AT(c, 0xf706au);
    { uint32_t v = 0x9C00u; push32(c, v); }
L_f706f:
    X86_TICK(c, 9);
    // 0f706f  push 7
    X86_AT(c, 0xf706fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7071  call 0xe5654
    X86_AT(c, 0xf7071u);
    push32(c, 0xf7076u); f_000e5654(c); X86_RET(c, 0xf7076u);
    X86_TICK(c, 9);
    // 0f7076  push 7
    X86_AT(c, 0xf7076u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7078  call 0xe6c68
    X86_AT(c, 0xf7078u);
    push32(c, 0xf707du); f_000e6c68(c); X86_RET(c, 0xf707du);
    X86_TICK(c, 7);
    // 0f707d  jmp 0xf70df
    X86_AT(c, 0xf707du);
    goto L_f70df;
L_f707f:
    X86_TICK(c, 12);
    // 0f707f  cmp dword ptr [0xcda6c], 0xffffffff
    X86_AT(c, 0xf707fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDA6Cu))), 0xFFFFFFFFu, 0, 4);
    // 0f7086  jne 0xf70ad
    X86_AT(c, 0xf7086u);
    if (x86_cc(c, 5)) { goto L_f70ad; }
    X86_TICK(c, 25);
    // 0f7088  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7088u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f708d  lea edx, [eax + eax*4]
    X86_AT(c, 0xf708du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7090  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7090u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7093  shl edx, 5
    X86_AT(c, 0xf7093u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7096  sub edx, eax
    X86_AT(c, 0xf7096u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7098  cmp dword ptr [edx + 0xcdf6f], 0
    X86_AT(c, 0xf7098u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))), 0x0u, 0, 4);
    // 0f709f  jne 0xf70ad
    X86_AT(c, 0xf709fu);
    if (x86_cc(c, 5)) { goto L_f70ad; }
    X86_TICK(c, 9);
    // 0f70a1  push 0
    X86_AT(c, 0xf70a1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f70a3  call 0xe1944
    X86_AT(c, 0xf70a3u);
    push32(c, 0xf70a8u); f_000e1944(c); X86_RET(c, 0xf70a8u);
    X86_TICK(c, 9);
    // 0f70a8  add esp, 4
    X86_AT(c, 0xf70a8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f70ab  jmp 0xf70e2
    X86_AT(c, 0xf70abu);
    goto L_f70e2;
L_f70ad:
    X86_TICK(c, 9);
    // 0f70ad  push 5
    X86_AT(c, 0xf70adu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0f70af  call 0xef968
    X86_AT(c, 0xf70afu);
    push32(c, 0xf70b4u); f_000ef968(c); X86_RET(c, 0xf70b4u);
    X86_TICK(c, 9);
    // 0f70b4  add esp, 4
    X86_AT(c, 0xf70b4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f70b7  inc eax
    X86_AT(c, 0xf70b7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0f70b8  je 0xf70e2
    X86_AT(c, 0xf70b8u);
    if (x86_cc(c, 4)) { goto L_f70e2; }
    X86_TICK(c, 30);
    // 0f70ba  push 5
    X86_AT(c, 0xf70bau);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0f70bc  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf70bcu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f70c1  lea edx, [eax + eax*4]
    X86_AT(c, 0xf70c1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f70c4  lea edx, [eax + edx*2]
    X86_AT(c, 0xf70c4u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f70c7  shl edx, 5
    X86_AT(c, 0xf70c7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f70ca  sub edx, eax
    X86_AT(c, 0xf70cau);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f70cc  lea eax, [edx + 0xcdf6f]
    X86_AT(c, 0xf70ccu);
    c.r[0] = (uint32_t)(c.r[2] + 0xCDF6Fu);
    // 0f70d2  push eax
    X86_AT(c, 0xf70d2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f70d3  add edx, 0xcdf6b
    X86_AT(c, 0xf70d3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xCDF6Bu, 0, 4); }
    // 0f70d9  push edx
    X86_AT(c, 0xf70d9u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0f70da  call 0xe84c4
    X86_AT(c, 0xf70dau);
    push32(c, 0xf70dfu); f_000e84c4(c); X86_RET(c, 0xf70dfu);
L_f70df:
    X86_TICK(c, 2);
    // 0f70df  add esp, 0xc
    X86_AT(c, 0xf70dfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_f70e2:
    X86_TICK(c, 10);
    // 0f70e2  ret 
    X86_AT(c, 0xf70e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf7014u, "ran off the end of a function");
}
void f_000f70e4(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0f70e4  push 7
    X86_AT(c, 0xf70e4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f70e6  call 0xe693c
    X86_AT(c, 0xf70e6u);
    push32(c, 0xf70ebu); f_000e693c(c); X86_RET(c, 0xf70ebu);
    X86_TICK(c, 11);
    // 0f70eb  push 0x9c28
    X86_AT(c, 0xf70ebu);
    { uint32_t v = 0x9C28u; push32(c, v); }
    // 0f70f0  push 7
    X86_AT(c, 0xf70f0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f70f2  call 0xe5654
    X86_AT(c, 0xf70f2u);
    push32(c, 0xf70f7u); f_000e5654(c); X86_RET(c, 0xf70f7u);
    X86_TICK(c, 9);
    // 0f70f7  push 7
    X86_AT(c, 0xf70f7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f70f9  call 0xe6c68
    X86_AT(c, 0xf70f9u);
    push32(c, 0xf70feu); f_000e6c68(c); X86_RET(c, 0xf70feu);
    X86_TICK(c, 27);
    // 0f70fe  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf70feu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7103  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7103u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7106  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7106u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7109  shl edx, 5
    X86_AT(c, 0xf7109u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f710c  sub edx, eax
    X86_AT(c, 0xf710cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f710e  add esp, 0x10
    X86_AT(c, 0xf710eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f7111  cmp dword ptr [edx + 0xcde56], 4
    X86_AT(c, 0xf7111u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE56u))), 0x4u, 0, 4);
    // 0f7118  jne 0xf7121
    X86_AT(c, 0xf7118u);
    if (x86_cc(c, 5)) { goto L_f7121; }
    X86_TICK(c, 9);
    // 0f711a  push 0x9c3c
    X86_AT(c, 0xf711au);
    { uint32_t v = 0x9C3Cu; push32(c, v); }
    // 0f711f  jmp 0xf713f
    X86_AT(c, 0xf711fu);
    goto L_f713f;
L_f7121:
    X86_TICK(c, 25);
    // 0f7121  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7121u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7126  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7126u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7129  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7129u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f712c  shl edx, 5
    X86_AT(c, 0xf712cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f712f  sub edx, eax
    X86_AT(c, 0xf712fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7131  cmp dword ptr [edx + 0xcdf97], 0
    X86_AT(c, 0xf7131u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF97u))), 0x0u, 0, 4);
    // 0f7138  jle 0xf714f
    X86_AT(c, 0xf7138u);
    if (x86_cc(c, 14)) { goto L_f714f; }
    X86_TICK(c, 2);
    // 0f713a  push 0x9c68
    X86_AT(c, 0xf713au);
    { uint32_t v = 0x9C68u; push32(c, v); }
L_f713f:
    X86_TICK(c, 9);
    // 0f713f  push 7
    X86_AT(c, 0xf713fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7141  call 0xe5654
    X86_AT(c, 0xf7141u);
    push32(c, 0xf7146u); f_000e5654(c); X86_RET(c, 0xf7146u);
    X86_TICK(c, 9);
    // 0f7146  push 7
    X86_AT(c, 0xf7146u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7148  call 0xe6c68
    X86_AT(c, 0xf7148u);
    push32(c, 0xf714du); f_000e6c68(c); X86_RET(c, 0xf714du);
    X86_TICK(c, 7);
    // 0f714d  jmp 0xf71af
    X86_AT(c, 0xf714du);
    goto L_f71af;
L_f714f:
    X86_TICK(c, 12);
    // 0f714f  cmp dword ptr [0xcda6c], 0xffffffff
    X86_AT(c, 0xf714fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDA6Cu))), 0xFFFFFFFFu, 0, 4);
    // 0f7156  jne 0xf717d
    X86_AT(c, 0xf7156u);
    if (x86_cc(c, 5)) { goto L_f717d; }
    X86_TICK(c, 25);
    // 0f7158  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7158u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f715d  lea edx, [eax + eax*4]
    X86_AT(c, 0xf715du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7160  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7160u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7163  shl edx, 5
    X86_AT(c, 0xf7163u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7166  sub edx, eax
    X86_AT(c, 0xf7166u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7168  cmp dword ptr [edx + 0xcdf6f], 0x3f
    X86_AT(c, 0xf7168u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))), 0x3Fu, 0, 4);
    // 0f716f  jne 0xf717d
    X86_AT(c, 0xf716fu);
    if (x86_cc(c, 5)) { goto L_f717d; }
    X86_TICK(c, 9);
    // 0f7171  push 0
    X86_AT(c, 0xf7171u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f7173  call 0xe1944
    X86_AT(c, 0xf7173u);
    push32(c, 0xf7178u); f_000e1944(c); X86_RET(c, 0xf7178u);
    X86_TICK(c, 9);
    // 0f7178  add esp, 4
    X86_AT(c, 0xf7178u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f717b  jmp 0xf71b2
    X86_AT(c, 0xf717bu);
    goto L_f71b2;
L_f717d:
    X86_TICK(c, 9);
    // 0f717d  push 6
    X86_AT(c, 0xf717du);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f717f  call 0xef968
    X86_AT(c, 0xf717fu);
    push32(c, 0xf7184u); f_000ef968(c); X86_RET(c, 0xf7184u);
    X86_TICK(c, 9);
    // 0f7184  add esp, 4
    X86_AT(c, 0xf7184u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f7187  inc eax
    X86_AT(c, 0xf7187u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0f7188  je 0xf71b2
    X86_AT(c, 0xf7188u);
    if (x86_cc(c, 4)) { goto L_f71b2; }
    X86_TICK(c, 30);
    // 0f718a  push 6
    X86_AT(c, 0xf718au);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f718c  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf718cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7191  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7191u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7194  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7194u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7197  shl edx, 5
    X86_AT(c, 0xf7197u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f719a  sub edx, eax
    X86_AT(c, 0xf719au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f719c  lea eax, [edx + 0xcdf6f]
    X86_AT(c, 0xf719cu);
    c.r[0] = (uint32_t)(c.r[2] + 0xCDF6Fu);
    // 0f71a2  push eax
    X86_AT(c, 0xf71a2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f71a3  add edx, 0xcdf6b
    X86_AT(c, 0xf71a3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xCDF6Bu, 0, 4); }
    // 0f71a9  push edx
    X86_AT(c, 0xf71a9u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0f71aa  call 0xe84c4
    X86_AT(c, 0xf71aau);
    push32(c, 0xf71afu); f_000e84c4(c); X86_RET(c, 0xf71afu);
L_f71af:
    X86_TICK(c, 2);
    // 0f71af  add esp, 0xc
    X86_AT(c, 0xf71afu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_f71b2:
    X86_TICK(c, 10);
    // 0f71b2  ret 
    X86_AT(c, 0xf71b2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf70e4u, "ran off the end of a function");
}
void f_000f71b4(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0f71b4  push 7
    X86_AT(c, 0xf71b4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f71b6  call 0xe693c
    X86_AT(c, 0xf71b6u);
    push32(c, 0xf71bbu); f_000e693c(c); X86_RET(c, 0xf71bbu);
    X86_TICK(c, 11);
    // 0f71bb  push 0x9c90
    X86_AT(c, 0xf71bbu);
    { uint32_t v = 0x9C90u; push32(c, v); }
    // 0f71c0  push 7
    X86_AT(c, 0xf71c0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f71c2  call 0xe5654
    X86_AT(c, 0xf71c2u);
    push32(c, 0xf71c7u); f_000e5654(c); X86_RET(c, 0xf71c7u);
    X86_TICK(c, 9);
    // 0f71c7  push 7
    X86_AT(c, 0xf71c7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f71c9  call 0xe6c68
    X86_AT(c, 0xf71c9u);
    push32(c, 0xf71ceu); f_000e6c68(c); X86_RET(c, 0xf71ceu);
    X86_TICK(c, 27);
    // 0f71ce  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf71ceu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f71d3  lea edx, [eax + eax*4]
    X86_AT(c, 0xf71d3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f71d6  lea edx, [eax + edx*2]
    X86_AT(c, 0xf71d6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f71d9  shl edx, 5
    X86_AT(c, 0xf71d9u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f71dc  sub edx, eax
    X86_AT(c, 0xf71dcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f71de  add esp, 0x10
    X86_AT(c, 0xf71deu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f71e1  cmp dword ptr [edx + 0xcde56], 4
    X86_AT(c, 0xf71e1u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE56u))), 0x4u, 0, 4);
    // 0f71e8  jne 0xf71f1
    X86_AT(c, 0xf71e8u);
    if (x86_cc(c, 5)) { goto L_f71f1; }
    X86_TICK(c, 9);
    // 0f71ea  push 0x9ca4
    X86_AT(c, 0xf71eau);
    { uint32_t v = 0x9CA4u; push32(c, v); }
    // 0f71ef  jmp 0xf720f
    X86_AT(c, 0xf71efu);
    goto L_f720f;
L_f71f1:
    X86_TICK(c, 25);
    // 0f71f1  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf71f1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f71f6  lea edx, [eax + eax*4]
    X86_AT(c, 0xf71f6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f71f9  lea edx, [eax + edx*2]
    X86_AT(c, 0xf71f9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f71fc  shl edx, 5
    X86_AT(c, 0xf71fcu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f71ff  sub edx, eax
    X86_AT(c, 0xf71ffu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7201  cmp dword ptr [edx + 0xcdf97], 0
    X86_AT(c, 0xf7201u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF97u))), 0x0u, 0, 4);
    // 0f7208  jle 0xf721f
    X86_AT(c, 0xf7208u);
    if (x86_cc(c, 14)) { goto L_f721f; }
    X86_TICK(c, 2);
    // 0f720a  push 0x9cd0
    X86_AT(c, 0xf720au);
    { uint32_t v = 0x9CD0u; push32(c, v); }
L_f720f:
    X86_TICK(c, 9);
    // 0f720f  push 7
    X86_AT(c, 0xf720fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7211  call 0xe5654
    X86_AT(c, 0xf7211u);
    push32(c, 0xf7216u); f_000e5654(c); X86_RET(c, 0xf7216u);
    X86_TICK(c, 9);
    // 0f7216  push 7
    X86_AT(c, 0xf7216u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7218  call 0xe6c68
    X86_AT(c, 0xf7218u);
    push32(c, 0xf721du); f_000e6c68(c); X86_RET(c, 0xf721du);
    X86_TICK(c, 7);
    // 0f721d  jmp 0xf7286
    X86_AT(c, 0xf721du);
    goto L_f7286;
L_f721f:
    X86_TICK(c, 12);
    // 0f721f  cmp dword ptr [0xcda6c], 0xffffffff
    X86_AT(c, 0xf721fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDA6Cu))), 0xFFFFFFFFu, 0, 4);
    // 0f7226  jne 0xf724d
    X86_AT(c, 0xf7226u);
    if (x86_cc(c, 5)) { goto L_f724d; }
    X86_TICK(c, 25);
    // 0f7228  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7228u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f722d  lea edx, [eax + eax*4]
    X86_AT(c, 0xf722du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7230  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7230u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7233  shl edx, 5
    X86_AT(c, 0xf7233u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7236  sub edx, eax
    X86_AT(c, 0xf7236u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7238  cmp dword ptr [edx + 0xcdf6b], 0x3f
    X86_AT(c, 0xf7238u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))), 0x3Fu, 0, 4);
    // 0f723f  jne 0xf724d
    X86_AT(c, 0xf723fu);
    if (x86_cc(c, 5)) { goto L_f724d; }
    X86_TICK(c, 9);
    // 0f7241  push 0
    X86_AT(c, 0xf7241u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f7243  call 0xe1944
    X86_AT(c, 0xf7243u);
    push32(c, 0xf7248u); f_000e1944(c); X86_RET(c, 0xf7248u);
    X86_TICK(c, 9);
    // 0f7248  add esp, 4
    X86_AT(c, 0xf7248u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f724b  jmp 0xf7289
    X86_AT(c, 0xf724bu);
    goto L_f7289;
L_f724d:
    X86_TICK(c, 9);
    // 0f724d  push 2
    X86_AT(c, 0xf724du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f724f  call 0xe38f0
    X86_AT(c, 0xf724fu);
    push32(c, 0xf7254u); f_000e38f0(c); X86_RET(c, 0xf7254u);
    X86_TICK(c, 9);
    // 0f7254  push 7
    X86_AT(c, 0xf7254u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7256  call 0xef968
    X86_AT(c, 0xf7256u);
    push32(c, 0xf725bu); f_000ef968(c); X86_RET(c, 0xf725bu);
    X86_TICK(c, 9);
    // 0f725b  add esp, 8
    X86_AT(c, 0xf725bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f725e  inc eax
    X86_AT(c, 0xf725eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0f725f  je 0xf7289
    X86_AT(c, 0xf725fu);
    if (x86_cc(c, 4)) { goto L_f7289; }
    X86_TICK(c, 30);
    // 0f7261  push 7
    X86_AT(c, 0xf7261u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7263  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7263u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7268  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7268u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f726b  lea edx, [eax + edx*2]
    X86_AT(c, 0xf726bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f726e  shl edx, 5
    X86_AT(c, 0xf726eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7271  sub edx, eax
    X86_AT(c, 0xf7271u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7273  lea eax, [edx + 0xcdf6f]
    X86_AT(c, 0xf7273u);
    c.r[0] = (uint32_t)(c.r[2] + 0xCDF6Fu);
    // 0f7279  push eax
    X86_AT(c, 0xf7279u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f727a  add edx, 0xcdf6b
    X86_AT(c, 0xf727au);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xCDF6Bu, 0, 4); }
    // 0f7280  push edx
    X86_AT(c, 0xf7280u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0f7281  call 0xe84c4
    X86_AT(c, 0xf7281u);
    push32(c, 0xf7286u); f_000e84c4(c); X86_RET(c, 0xf7286u);
L_f7286:
    X86_TICK(c, 2);
    // 0f7286  add esp, 0xc
    X86_AT(c, 0xf7286u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_f7289:
    X86_TICK(c, 10);
    // 0f7289  ret 
    X86_AT(c, 0xf7289u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf71b4u, "ran off the end of a function");
}
void f_000f728c(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0f728c  push 7
    X86_AT(c, 0xf728cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f728e  call 0xe693c
    X86_AT(c, 0xf728eu);
    push32(c, 0xf7293u); f_000e693c(c); X86_RET(c, 0xf7293u);
    X86_TICK(c, 11);
    // 0f7293  push 0x9cf8
    X86_AT(c, 0xf7293u);
    { uint32_t v = 0x9CF8u; push32(c, v); }
    // 0f7298  push 7
    X86_AT(c, 0xf7298u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f729a  call 0xe5654
    X86_AT(c, 0xf729au);
    push32(c, 0xf729fu); f_000e5654(c); X86_RET(c, 0xf729fu);
    X86_TICK(c, 9);
    // 0f729f  push 7
    X86_AT(c, 0xf729fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f72a1  call 0xe6c68
    X86_AT(c, 0xf72a1u);
    push32(c, 0xf72a6u); f_000e6c68(c); X86_RET(c, 0xf72a6u);
    X86_TICK(c, 27);
    // 0f72a6  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf72a6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f72ab  lea edx, [eax + eax*4]
    X86_AT(c, 0xf72abu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f72ae  lea edx, [eax + edx*2]
    X86_AT(c, 0xf72aeu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f72b1  shl edx, 5
    X86_AT(c, 0xf72b1u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f72b4  sub edx, eax
    X86_AT(c, 0xf72b4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f72b6  add esp, 0x10
    X86_AT(c, 0xf72b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f72b9  cmp dword ptr [edx + 0xcde56], 4
    X86_AT(c, 0xf72b9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE56u))), 0x4u, 0, 4);
    // 0f72c0  jne 0xf72c9
    X86_AT(c, 0xf72c0u);
    if (x86_cc(c, 5)) { goto L_f72c9; }
    X86_TICK(c, 9);
    // 0f72c2  push 0x9d0c
    X86_AT(c, 0xf72c2u);
    { uint32_t v = 0x9D0Cu; push32(c, v); }
    // 0f72c7  jmp 0xf72e7
    X86_AT(c, 0xf72c7u);
    goto L_f72e7;
L_f72c9:
    X86_TICK(c, 25);
    // 0f72c9  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf72c9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f72ce  lea edx, [eax + eax*4]
    X86_AT(c, 0xf72ceu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f72d1  lea edx, [eax + edx*2]
    X86_AT(c, 0xf72d1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f72d4  shl edx, 5
    X86_AT(c, 0xf72d4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f72d7  sub edx, eax
    X86_AT(c, 0xf72d7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f72d9  cmp dword ptr [edx + 0xcdf97], 0
    X86_AT(c, 0xf72d9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF97u))), 0x0u, 0, 4);
    // 0f72e0  jle 0xf72f7
    X86_AT(c, 0xf72e0u);
    if (x86_cc(c, 14)) { goto L_f72f7; }
    X86_TICK(c, 2);
    // 0f72e2  push 0x9d38
    X86_AT(c, 0xf72e2u);
    { uint32_t v = 0x9D38u; push32(c, v); }
L_f72e7:
    X86_TICK(c, 9);
    // 0f72e7  push 7
    X86_AT(c, 0xf72e7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f72e9  call 0xe5654
    X86_AT(c, 0xf72e9u);
    push32(c, 0xf72eeu); f_000e5654(c); X86_RET(c, 0xf72eeu);
    X86_TICK(c, 9);
    // 0f72ee  push 7
    X86_AT(c, 0xf72eeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f72f0  call 0xe6c68
    X86_AT(c, 0xf72f0u);
    push32(c, 0xf72f5u); f_000e6c68(c); X86_RET(c, 0xf72f5u);
    X86_TICK(c, 7);
    // 0f72f5  jmp 0xf735e
    X86_AT(c, 0xf72f5u);
    goto L_f735e;
L_f72f7:
    X86_TICK(c, 12);
    // 0f72f7  cmp dword ptr [0xcda6c], 0xffffffff
    X86_AT(c, 0xf72f7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDA6Cu))), 0xFFFFFFFFu, 0, 4);
    // 0f72fe  jne 0xf7325
    X86_AT(c, 0xf72feu);
    if (x86_cc(c, 5)) { goto L_f7325; }
    X86_TICK(c, 25);
    // 0f7300  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7300u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7305  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7305u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7308  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7308u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f730b  shl edx, 5
    X86_AT(c, 0xf730bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f730e  sub edx, eax
    X86_AT(c, 0xf730eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7310  cmp dword ptr [edx + 0xcdf6b], 0
    X86_AT(c, 0xf7310u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))), 0x0u, 0, 4);
    // 0f7317  jne 0xf7325
    X86_AT(c, 0xf7317u);
    if (x86_cc(c, 5)) { goto L_f7325; }
    X86_TICK(c, 9);
    // 0f7319  push 0
    X86_AT(c, 0xf7319u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f731b  call 0xe1944
    X86_AT(c, 0xf731bu);
    push32(c, 0xf7320u); f_000e1944(c); X86_RET(c, 0xf7320u);
    X86_TICK(c, 9);
    // 0f7320  add esp, 4
    X86_AT(c, 0xf7320u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f7323  jmp 0xf7361
    X86_AT(c, 0xf7323u);
    goto L_f7361;
L_f7325:
    X86_TICK(c, 9);
    // 0f7325  push 4
    X86_AT(c, 0xf7325u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0f7327  call 0xe38f0
    X86_AT(c, 0xf7327u);
    push32(c, 0xf732cu); f_000e38f0(c); X86_RET(c, 0xf732cu);
    X86_TICK(c, 9);
    // 0f732c  push 3
    X86_AT(c, 0xf732cu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f732e  call 0xef968
    X86_AT(c, 0xf732eu);
    push32(c, 0xf7333u); f_000ef968(c); X86_RET(c, 0xf7333u);
    X86_TICK(c, 9);
    // 0f7333  add esp, 8
    X86_AT(c, 0xf7333u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f7336  inc eax
    X86_AT(c, 0xf7336u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0f7337  je 0xf7361
    X86_AT(c, 0xf7337u);
    if (x86_cc(c, 4)) { goto L_f7361; }
    X86_TICK(c, 30);
    // 0f7339  push 3
    X86_AT(c, 0xf7339u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f733b  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf733bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7340  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7340u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7343  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7343u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7346  shl edx, 5
    X86_AT(c, 0xf7346u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7349  sub edx, eax
    X86_AT(c, 0xf7349u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f734b  lea eax, [edx + 0xcdf6f]
    X86_AT(c, 0xf734bu);
    c.r[0] = (uint32_t)(c.r[2] + 0xCDF6Fu);
    // 0f7351  push eax
    X86_AT(c, 0xf7351u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f7352  add edx, 0xcdf6b
    X86_AT(c, 0xf7352u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xCDF6Bu, 0, 4); }
    // 0f7358  push edx
    X86_AT(c, 0xf7358u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0f7359  call 0xe84c4
    X86_AT(c, 0xf7359u);
    push32(c, 0xf735eu); f_000e84c4(c); X86_RET(c, 0xf735eu);
L_f735e:
    X86_TICK(c, 2);
    // 0f735e  add esp, 0xc
    X86_AT(c, 0xf735eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_f7361:
    X86_TICK(c, 10);
    // 0f7361  ret 
    X86_AT(c, 0xf7361u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf728cu, "ran off the end of a function");
}
void f_000f7364(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0f7364  push 7
    X86_AT(c, 0xf7364u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7366  call 0xe693c
    X86_AT(c, 0xf7366u);
    push32(c, 0xf736bu); f_000e693c(c); X86_RET(c, 0xf736bu);
    X86_TICK(c, 9);
    // 0f736b  push 1
    X86_AT(c, 0xf736bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f736d  call 0xe1944
    X86_AT(c, 0xf736du);
    push32(c, 0xf7372u); f_000e1944(c); X86_RET(c, 0xf7372u);
    X86_TICK(c, 11);
    // 0f7372  push 0x9d60
    X86_AT(c, 0xf7372u);
    { uint32_t v = 0x9D60u; push32(c, v); }
    // 0f7377  push 7
    X86_AT(c, 0xf7377u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7379  call 0xe5654
    X86_AT(c, 0xf7379u);
    push32(c, 0xf737eu); f_000e5654(c); X86_RET(c, 0xf737eu);
    X86_TICK(c, 9);
    // 0f737e  push 7
    X86_AT(c, 0xf737eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7380  call 0xe6c68
    X86_AT(c, 0xf7380u);
    push32(c, 0xf7385u); f_000e6c68(c); X86_RET(c, 0xf7385u);
    X86_TICK(c, 12);
    // 0f7385  add esp, 0x14
    X86_AT(c, 0xf7385u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0f7388  ret 
    X86_AT(c, 0xf7388u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf7364u, "ran off the end of a function");
}
void f_000f738c(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0f738c  push 7
    X86_AT(c, 0xf738cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f738e  call 0xe693c
    X86_AT(c, 0xf738eu);
    push32(c, 0xf7393u); f_000e693c(c); X86_RET(c, 0xf7393u);
    X86_TICK(c, 9);
    // 0f7393  push 1
    X86_AT(c, 0xf7393u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f7395  call 0xe1944
    X86_AT(c, 0xf7395u);
    push32(c, 0xf739au); f_000e1944(c); X86_RET(c, 0xf739au);
    X86_TICK(c, 11);
    // 0f739a  push 0x9d8c
    X86_AT(c, 0xf739au);
    { uint32_t v = 0x9D8Cu; push32(c, v); }
    // 0f739f  push 7
    X86_AT(c, 0xf739fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f73a1  call 0xe5654
    X86_AT(c, 0xf73a1u);
    push32(c, 0xf73a6u); f_000e5654(c); X86_RET(c, 0xf73a6u);
    X86_TICK(c, 9);
    // 0f73a6  push 7
    X86_AT(c, 0xf73a6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f73a8  call 0xe6c68
    X86_AT(c, 0xf73a8u);
    push32(c, 0xf73adu); f_000e6c68(c); X86_RET(c, 0xf73adu);
    X86_TICK(c, 14);
    // 0f73ad  add esp, 0x14
    X86_AT(c, 0xf73adu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0f73b0  cmp dword ptr [0xcde44], 0
    X86_AT(c, 0xf73b0u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDE44u))), 0x0u, 0, 4);
    // 0f73b7  je 0xf73be
    X86_AT(c, 0xf73b7u);
    if (x86_cc(c, 4)) { goto L_f73be; }
    X86_TICK(c, 7);
    // 0f73b9  call 0xf4944
    X86_AT(c, 0xf73b9u);
    push32(c, 0xf73beu); f_000f4944(c); X86_RET(c, 0xf73beu);
L_f73be:
    X86_TICK(c, 10);
    // 0f73be  ret 
    X86_AT(c, 0xf73beu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf738cu, "ran off the end of a function");
}
void f_000f73c0(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0f73c0  push 7
    X86_AT(c, 0xf73c0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f73c2  call 0xe693c
    X86_AT(c, 0xf73c2u);
    push32(c, 0xf73c7u); f_000e693c(c); X86_RET(c, 0xf73c7u);
    X86_TICK(c, 9);
    // 0f73c7  push 1
    X86_AT(c, 0xf73c7u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f73c9  call 0xe1944
    X86_AT(c, 0xf73c9u);
    push32(c, 0xf73ceu); f_000e1944(c); X86_RET(c, 0xf73ceu);
    X86_TICK(c, 9);
    // 0f73ce  push 3
    X86_AT(c, 0xf73ceu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f73d0  call 0xe1944
    X86_AT(c, 0xf73d0u);
    push32(c, 0xf73d5u); f_000e1944(c); X86_RET(c, 0xf73d5u);
    X86_TICK(c, 11);
    // 0f73d5  push 0x9dc0
    X86_AT(c, 0xf73d5u);
    { uint32_t v = 0x9DC0u; push32(c, v); }
    // 0f73da  push 7
    X86_AT(c, 0xf73dau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f73dc  call 0xe5654
    X86_AT(c, 0xf73dcu);
    push32(c, 0xf73e1u); f_000e5654(c); X86_RET(c, 0xf73e1u);
    X86_TICK(c, 9);
    // 0f73e1  push 7
    X86_AT(c, 0xf73e1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f73e3  call 0xe6c68
    X86_AT(c, 0xf73e3u);
    push32(c, 0xf73e8u); f_000e6c68(c); X86_RET(c, 0xf73e8u);
    X86_TICK(c, 12);
    // 0f73e8  add esp, 0x18
    X86_AT(c, 0xf73e8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0f73eb  ret 
    X86_AT(c, 0xf73ebu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf73c0u, "ran off the end of a function");
}
void f_000f73ec(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0f73ec  push ebp
    X86_AT(c, 0xf73ecu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f73ed  mov ebp, esp
    X86_AT(c, 0xf73edu);
    c.r[5] = c.r[4];
    // 0f73ef  push eax
    X86_AT(c, 0xf73efu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f73f0  push ebx
    X86_AT(c, 0xf73f0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f73f1  push edi
    X86_AT(c, 0xf73f1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f73f2  push 7
    X86_AT(c, 0xf73f2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f73f4  call 0xe693c
    X86_AT(c, 0xf73f4u);
    push32(c, 0xf73f9u); f_000e693c(c); X86_RET(c, 0xf73f9u);
    X86_TICK(c, 11);
    // 0f73f9  push 0x9dfc
    X86_AT(c, 0xf73f9u);
    { uint32_t v = 0x9DFCu; push32(c, v); }
    // 0f73fe  push 7
    X86_AT(c, 0xf73feu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7400  call 0xe5654
    X86_AT(c, 0xf7400u);
    push32(c, 0xf7405u); f_000e5654(c); X86_RET(c, 0xf7405u);
    X86_TICK(c, 9);
    // 0f7405  push 7
    X86_AT(c, 0xf7405u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7407  call 0xe6c68
    X86_AT(c, 0xf7407u);
    push32(c, 0xf740cu); f_000e6c68(c); X86_RET(c, 0xf740cu);
    X86_TICK(c, 11);
    // 0f740c  push 0x9e1c
    X86_AT(c, 0xf740cu);
    { uint32_t v = 0x9E1Cu; push32(c, v); }
    // 0f7411  push 7
    X86_AT(c, 0xf7411u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7413  call 0xe5654
    X86_AT(c, 0xf7413u);
    push32(c, 0xf7418u); f_000e5654(c); X86_RET(c, 0xf7418u);
    X86_TICK(c, 9);
    // 0f7418  push 7
    X86_AT(c, 0xf7418u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f741a  call 0xe6c68
    X86_AT(c, 0xf741au);
    push32(c, 0xf741fu); f_000e6c68(c); X86_RET(c, 0xf741fu);
    X86_TICK(c, 11);
    // 0f741f  push 0x9e58
    X86_AT(c, 0xf741fu);
    { uint32_t v = 0x9E58u; push32(c, v); }
    // 0f7424  push 7
    X86_AT(c, 0xf7424u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7426  call 0xe5654
    X86_AT(c, 0xf7426u);
    push32(c, 0xf742bu); f_000e5654(c); X86_RET(c, 0xf742bu);
    X86_TICK(c, 9);
    // 0f742b  push 7
    X86_AT(c, 0xf742bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f742d  call 0xe6c68
    X86_AT(c, 0xf742du);
    push32(c, 0xf7432u); f_000e6c68(c); X86_RET(c, 0xf7432u);
    X86_TICK(c, 11);
    // 0f7432  push 0x9e94
    X86_AT(c, 0xf7432u);
    { uint32_t v = 0x9E94u; push32(c, v); }
    // 0f7437  push 7
    X86_AT(c, 0xf7437u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7439  call 0xe5654
    X86_AT(c, 0xf7439u);
    push32(c, 0xf743eu); f_000e5654(c); X86_RET(c, 0xf743eu);
    X86_TICK(c, 9);
    // 0f743e  push 7
    X86_AT(c, 0xf743eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7440  call 0xe6c68
    X86_AT(c, 0xf7440u);
    push32(c, 0xf7445u); f_000e6c68(c); X86_RET(c, 0xf7445u);
    X86_TICK(c, 11);
    // 0f7445  push 0x9ed0
    X86_AT(c, 0xf7445u);
    { uint32_t v = 0x9ED0u; push32(c, v); }
    // 0f744a  push 7
    X86_AT(c, 0xf744au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f744c  call 0xe5654
    X86_AT(c, 0xf744cu);
    push32(c, 0xf7451u); f_000e5654(c); X86_RET(c, 0xf7451u);
    X86_TICK(c, 11);
    // 0f7451  add esp, 0x3c
    X86_AT(c, 0xf7451u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0f7454  push 7
    X86_AT(c, 0xf7454u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7456  call 0xe6c68
    X86_AT(c, 0xf7456u);
    push32(c, 0xf745bu); f_000e6c68(c); X86_RET(c, 0xf745bu);
    X86_TICK(c, 11);
    // 0f745b  push 0x9f0c
    X86_AT(c, 0xf745bu);
    { uint32_t v = 0x9F0Cu; push32(c, v); }
    // 0f7460  push 7
    X86_AT(c, 0xf7460u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7462  call 0xe5654
    X86_AT(c, 0xf7462u);
    push32(c, 0xf7467u); f_000e5654(c); X86_RET(c, 0xf7467u);
    X86_TICK(c, 2);
    // 0f7467  add esp, 0xc
    X86_AT(c, 0xf7467u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_f746a:
    X86_TICK(c, 9);
    // 0f746a  push 7
    X86_AT(c, 0xf746au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f746c  call 0xe4748
    X86_AT(c, 0xf746cu);
    push32(c, 0xf7471u); f_000e4748(c); X86_RET(c, 0xf7471u);
    X86_TICK(c, 12);
    // 0f7471  xchg ebx, eax
    X86_AT(c, 0xf7471u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0f7472  add esp, 4
    X86_AT(c, 0xf7472u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f7475  cmp bl, 1
    X86_AT(c, 0xf7475u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0f7478  je 0xf7494
    X86_AT(c, 0xf7478u);
    if (x86_cc(c, 4)) { goto L_f7494; }
    X86_TICK(c, 7);
    // 0f747a  cmp bl, 0x41
    X86_AT(c, 0xf747au);
    (void)x86_sub(c, g8(c, 3), 0x41u, 0, 1);
    // 0f747d  jb 0xf7484
    X86_AT(c, 0xf747du);
    if (x86_cc(c, 2)) { goto L_f7484; }
    X86_TICK(c, 7);
    // 0f747f  cmp bl, 0x4a
    X86_AT(c, 0xf747fu);
    (void)x86_sub(c, g8(c, 3), 0x4Au, 0, 1);
    // 0f7482  jbe 0xf7494
    X86_AT(c, 0xf7482u);
    if (x86_cc(c, 6)) { goto L_f7494; }
L_f7484:
    X86_TICK(c, 7);
    // 0f7484  and bl, bl
    X86_AT(c, 0xf7484u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0f7486  je 0xf746a
    X86_AT(c, 0xf7486u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xf746au); goto L_f746a; }
    X86_TICK(c, 9);
    // 0f7488  push 1
    X86_AT(c, 0xf7488u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f748a  call 0xe1944
    X86_AT(c, 0xf748au);
    push32(c, 0xf748fu); f_000e1944(c); X86_RET(c, 0xf748fu);
    X86_TICK(c, 9);
    // 0f748f  add esp, 4
    X86_AT(c, 0xf748fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f7492  jmp 0xf746a
    X86_AT(c, 0xf7492u);
    X86_POLL(c, 0xf746au); goto L_f746a;
L_f7494:
    X86_TICK(c, 7);
    // 0f7494  cmp bl, 1
    X86_AT(c, 0xf7494u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0f7497  jne 0xf74a3
    X86_AT(c, 0xf7497u);
    if (x86_cc(c, 5)) { goto L_f74a3; }
    X86_TICK(c, 9);
    // 0f7499  push 0x9f44
    X86_AT(c, 0xf7499u);
    { uint32_t v = 0x9F44u; push32(c, v); }
    // 0f749e  jmp 0xf7529
    X86_AT(c, 0xf749eu);
    goto L_f7529;
L_f74a3:
    X86_TICK(c, 19);
    // 0f74a3  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0xf74a3u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
    // 0f74a7  lea eax, [ebp - 1]
    X86_AT(c, 0xf74a7u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0f74aa  push eax
    X86_AT(c, 0xf74aau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f74ab  push ebx
    X86_AT(c, 0xf74abu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f74ac  push 0xa
    X86_AT(c, 0xf74acu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0f74ae  push 0xd0e78
    X86_AT(c, 0xf74aeu);
    { uint32_t v = 0xD0E78u; push32(c, v); }
    // 0f74b3  call 0xe53e0
    X86_AT(c, 0xf74b3u);
    push32(c, 0xf74b8u); f_000e53e0(c); X86_RET(c, 0xf74b8u);
    X86_TICK(c, 11);
    // 0f74b8  push eax
    X86_AT(c, 0xf74b8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f74b9  push 7
    X86_AT(c, 0xf74b9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f74bb  call 0xe6cb0
    X86_AT(c, 0xf74bbu);
    push32(c, 0xf74c0u); f_000e6cb0(c); X86_RET(c, 0xf74c0u);
    X86_TICK(c, 9);
    // 0f74c0  push 7
    X86_AT(c, 0xf74c0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f74c2  call 0xe6c68
    X86_AT(c, 0xf74c2u);
    push32(c, 0xf74c7u); f_000e6c68(c); X86_RET(c, 0xf74c7u);
    X86_TICK(c, 14);
    // 0f74c7  movzx edi, bl
    X86_AT(c, 0xf74c7u);
    c.r[7] = g8(c, 3);
    // 0f74ca  sub edi, 0x41
    X86_AT(c, 0xf74cau);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, 0x41u, 0, 4); }
    // 0f74cd  add esp, 0x1c
    X86_AT(c, 0xf74cdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0f74d0  cmp bl, 0x41
    X86_AT(c, 0xf74d0u);
    (void)x86_sub(c, g8(c, 3), 0x41u, 0, 1);
    // 0f74d3  je 0xf750e
    X86_AT(c, 0xf74d3u);
    if (x86_cc(c, 4)) { goto L_f750e; }
    X86_TICK(c, 25);
    // 0f74d5  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf74d5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f74da  lea edx, [eax + eax*4]
    X86_AT(c, 0xf74dau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f74dd  lea edx, [eax + edx*2]
    X86_AT(c, 0xf74ddu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f74e0  shl edx, 5
    X86_AT(c, 0xf74e0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f74e3  sub edx, eax
    X86_AT(c, 0xf74e3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f74e5  cmp dword ptr [edx + edi*4 + 0xcdf27], 0
    X86_AT(c, 0xf74e5u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[7] * 4 + 0xCDF27u))), 0x0u, 0, 4);
    // 0f74ed  jne 0xf750e
    X86_AT(c, 0xf74edu);
    if (x86_cc(c, 5)) { goto L_f750e; }
    X86_TICK(c, 9);
    // 0f74ef  push 0
    X86_AT(c, 0xf74efu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f74f1  call 0xe1944
    X86_AT(c, 0xf74f1u);
    push32(c, 0xf74f6u); f_000e1944(c); X86_RET(c, 0xf74f6u);
    X86_TICK(c, 11);
    // 0f74f6  push 0x9f5c
    X86_AT(c, 0xf74f6u);
    { uint32_t v = 0x9F5Cu; push32(c, v); }
    // 0f74fb  push 7
    X86_AT(c, 0xf74fbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f74fd  call 0xe5654
    X86_AT(c, 0xf74fdu);
    push32(c, 0xf7502u); f_000e5654(c); X86_RET(c, 0xf7502u);
    X86_TICK(c, 9);
    // 0f7502  push 7
    X86_AT(c, 0xf7502u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7504  call 0xe6c68
    X86_AT(c, 0xf7504u);
    push32(c, 0xf7509u); f_000e6c68(c); X86_RET(c, 0xf7509u);
    X86_TICK(c, 9);
    // 0f7509  add esp, 0x10
    X86_AT(c, 0xf7509u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f750c  jmp 0xf753a
    X86_AT(c, 0xf750cu);
    goto L_f753a;
L_f750e:
    X86_TICK(c, 17);
    // 0f750e  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf750eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7513  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7513u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7516  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7516u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7519  shl edx, 5
    X86_AT(c, 0xf7519u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f751c  sub edx, eax
    X86_AT(c, 0xf751cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f751e  mov dword ptr [edx + 0xcdf77], edi
    X86_AT(c, 0xf751eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF77u)), c.r[7]);
    // 0f7524  push 0x9f90
    X86_AT(c, 0xf7524u);
    { uint32_t v = 0x9F90u; push32(c, v); }
L_f7529:
    X86_TICK(c, 9);
    // 0f7529  push 7
    X86_AT(c, 0xf7529u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f752b  call 0xe5654
    X86_AT(c, 0xf752bu);
    push32(c, 0xf7530u); f_000e5654(c); X86_RET(c, 0xf7530u);
    X86_TICK(c, 9);
    // 0f7530  push 7
    X86_AT(c, 0xf7530u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7532  call 0xe6c68
    X86_AT(c, 0xf7532u);
    push32(c, 0xf7537u); f_000e6c68(c); X86_RET(c, 0xf7537u);
    X86_TICK(c, 2);
    // 0f7537  add esp, 0xc
    X86_AT(c, 0xf7537u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_f753a:
    X86_TICK(c, 24);
    // 0f753a  pop edi
    X86_AT(c, 0xf753au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f753b  pop ebx
    X86_AT(c, 0xf753bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f753c  leave 
    X86_AT(c, 0xf753cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f753d  ret 
    X86_AT(c, 0xf753du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf73ecu, "ran off the end of a function");
}
void f_000f7540(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0f7540  push 1
    X86_AT(c, 0xf7540u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f7542  call 0xf1948
    X86_AT(c, 0xf7542u);
    push32(c, 0xf7547u); f_000f1948(c); X86_RET(c, 0xf7547u);
    X86_TICK(c, 27);
    // 0f7547  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7547u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f754c  lea edx, [eax + eax*4]
    X86_AT(c, 0xf754cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f754f  lea edx, [eax + edx*2]
    X86_AT(c, 0xf754fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7552  shl edx, 5
    X86_AT(c, 0xf7552u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7555  sub edx, eax
    X86_AT(c, 0xf7555u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7557  add esp, 4
    X86_AT(c, 0xf7557u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f755a  cmp dword ptr [edx + 0xcdf57], 0
    X86_AT(c, 0xf755au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))), 0x0u, 0, 4);
    // 0f7561  je 0xf7586
    X86_AT(c, 0xf7561u);
    if (x86_cc(c, 4)) { goto L_f7586; }
    X86_TICK(c, 11);
    // 0f7563  mov eax, dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf7563u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)));
    // 0f7569  and eax, eax
    X86_AT(c, 0xf7569u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f756b  je 0xf7581
    X86_AT(c, 0xf756bu);
    if (x86_cc(c, 4)) { goto L_f7581; }
    X86_TICK(c, 7);
    // 0f756d  cmp eax, 0x3f
    X86_AT(c, 0xf756du);
    (void)x86_sub(c, c.r[0], 0x3Fu, 0, 4);
    // 0f7570  je 0xf7581
    X86_AT(c, 0xf7570u);
    if (x86_cc(c, 4)) { goto L_f7581; }
    X86_TICK(c, 11);
    // 0f7572  mov eax, dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf7572u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)));
    // 0f7578  and eax, eax
    X86_AT(c, 0xf7578u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f757a  je 0xf7581
    X86_AT(c, 0xf757au);
    if (x86_cc(c, 4)) { goto L_f7581; }
    X86_TICK(c, 7);
    // 0f757c  cmp eax, 0x3f
    X86_AT(c, 0xf757cu);
    (void)x86_sub(c, c.r[0], 0x3Fu, 0, 4);
    // 0f757f  jne 0xf7586
    X86_AT(c, 0xf757fu);
    if (x86_cc(c, 5)) { goto L_f7586; }
L_f7581:
    X86_TICK(c, 7);
    // 0f7581  call 0xf808c
    X86_AT(c, 0xf7581u);
    push32(c, 0xf7586u); f_000f808c(c); X86_RET(c, 0xf7586u);
L_f7586:
    X86_TICK(c, 25);
    // 0f7586  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7586u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f758b  lea edx, [eax + eax*4]
    X86_AT(c, 0xf758bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f758e  lea edx, [eax + edx*2]
    X86_AT(c, 0xf758eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7591  shl edx, 5
    X86_AT(c, 0xf7591u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7594  sub edx, eax
    X86_AT(c, 0xf7594u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7596  cmp dword ptr [edx + 0xcde99], 4
    X86_AT(c, 0xf7596u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u))), 0x4u, 0, 4);
    // 0f759d  jg 0xf76b9
    X86_AT(c, 0xf759du);
    if (x86_cc(c, 15)) { goto L_f76b9; }
    X86_TICK(c, 12);
    // 0f75a3  cmp dword ptr [edx + 0xcdf57], 0
    X86_AT(c, 0xf75a3u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))), 0x0u, 0, 4);
    // 0f75aa  jne 0xf76b9
    X86_AT(c, 0xf75aau);
    if (x86_cc(c, 5)) { goto L_f76b9; }
    X86_TICK(c, 15);
    // 0f75b0  mov eax, dword ptr [edx + 0xcdf9f]
    X86_AT(c, 0xf75b0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF9Fu)));
    // 0f75b6  cmp eax, dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf75b6u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))), 0, 4);
    // 0f75bc  jne 0xf75d6
    X86_AT(c, 0xf75bcu);
    if (x86_cc(c, 5)) { goto L_f75d6; }
    X86_TICK(c, 15);
    // 0f75be  mov eax, dword ptr [edx + 0xcdfa3]
    X86_AT(c, 0xf75beu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDFA3u)));
    // 0f75c4  cmp eax, dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf75c4u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))), 0, 4);
    // 0f75ca  jne 0xf75d6
    X86_AT(c, 0xf75cau);
    if (x86_cc(c, 5)) { goto L_f75d6; }
    X86_TICK(c, 7);
    // 0f75cc  call 0xf9780
    X86_AT(c, 0xf75ccu);
    push32(c, 0xf75d1u); f_000f9780(c); X86_RET(c, 0xf75d1u);
    X86_TICK(c, 7);
    // 0f75d1  jmp 0xf76b9
    X86_AT(c, 0xf75d1u);
    goto L_f76b9;
L_f75d6:
    X86_TICK(c, 31);
    // 0f75d6  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf75d6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f75db  lea edx, [eax + eax*4]
    X86_AT(c, 0xf75dbu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f75de  lea edx, [eax + edx*2]
    X86_AT(c, 0xf75deu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f75e1  shl edx, 5
    X86_AT(c, 0xf75e1u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f75e4  sub edx, eax
    X86_AT(c, 0xf75e4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f75e6  dec dword ptr [edx + 0xcdfa7]
    X86_AT(c, 0xf75e6u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDFA7u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0f75ec  cmp dword ptr [edx + 0xcdfa7], 1
    X86_AT(c, 0xf75ecu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDFA7u))), 0x1u, 0, 4);
    // 0f75f3  jge 0xf76b9
    X86_AT(c, 0xf75f3u);
    if (x86_cc(c, 13)) { goto L_f76b9; }
    X86_TICK(c, 20);
    // 0f75f9  mov dword ptr [edx + 0xcdfa7], 6
    X86_AT(c, 0xf75f9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDFA7u)), 0x6u);
    // 0f7603  inc dword ptr [edx + 0xcdf8f]
    X86_AT(c, 0xf7603u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF8Fu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0f7609  cmp dword ptr [edx + 0xcdf8f], 3
    X86_AT(c, 0xf7609u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF8Fu))), 0x3u, 0, 4);
    // 0f7610  jle 0xf761c
    X86_AT(c, 0xf7610u);
    if (x86_cc(c, 14)) { goto L_f761c; }
    X86_TICK(c, 2);
    // 0f7612  mov dword ptr [edx + 0xcdf8f], 0
    X86_AT(c, 0xf7612u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF8Fu)), 0x0u);
L_f761c:
    X86_TICK(c, 32);
    // 0f761c  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf761cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7621  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7621u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7624  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7624u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7627  shl edx, 5
    X86_AT(c, 0xf7627u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f762a  sub edx, eax
    X86_AT(c, 0xf762au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f762c  push dword ptr [edx + 0xcdfa3]
    X86_AT(c, 0xf762cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDFA3u))); push32(c, v); }
    // 0f7632  push dword ptr [edx + 0xcdf9f]
    X86_AT(c, 0xf7632u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF9Fu))); push32(c, v); }
    // 0f7638  push 0xb
    X86_AT(c, 0xf7638u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0f763a  call 0xf3c0c
    X86_AT(c, 0xf763au);
    push32(c, 0xf763fu); f_000f3c0c(c); X86_RET(c, 0xf763fu);
    X86_TICK(c, 63);
    // 0f763f  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf763fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7644  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7644u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7647  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7647u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f764a  shl edx, 5
    X86_AT(c, 0xf764au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f764d  sub edx, eax
    X86_AT(c, 0xf764du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f764f  mov eax, dword ptr [edx + 0xcde99]
    X86_AT(c, 0xf764fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u)));
    // 0f7655  shl eax, 5
    X86_AT(c, 0xf7655u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[0] = r; }
    // 0f7658  mov ecx, dword ptr [edx + 0xcdf8f]
    X86_AT(c, 0xf7658u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF8Fu)));
    // 0f765e  mov eax, dword ptr [eax + ecx*8 + 0xd4610]
    X86_AT(c, 0xf765eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] * 8 + 0xD4610u)));
    // 0f7665  mov dword ptr [edx + 0xcdf9f], eax
    X86_AT(c, 0xf7665u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF9Fu)), c.r[0]);
    // 0f766b  mov eax, dword ptr [edx + 0xcde99]
    X86_AT(c, 0xf766bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u)));
    // 0f7671  shl eax, 5
    X86_AT(c, 0xf7671u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[0] = r; }
    // 0f7674  mov ecx, dword ptr [edx + 0xcdf8f]
    X86_AT(c, 0xf7674u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF8Fu)));
    // 0f767a  mov eax, dword ptr [eax + ecx*8 + 0xd4614]
    X86_AT(c, 0xf767au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] * 8 + 0xD4614u)));
    // 0f7681  mov dword ptr [edx + 0xcdfa3], eax
    X86_AT(c, 0xf7681u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDFA3u)), c.r[0]);
    // 0f7687  push eax
    X86_AT(c, 0xf7687u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f7688  push dword ptr [edx + 0xcdf9f]
    X86_AT(c, 0xf7688u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF9Fu))); push32(c, v); }
    // 0f768e  push 0x10
    X86_AT(c, 0xf768eu);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0f7690  call 0xf3c0c
    X86_AT(c, 0xf7690u);
    push32(c, 0xf7695u); f_000f3c0c(c); X86_RET(c, 0xf7695u);
    X86_TICK(c, 30);
    // 0f7695  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7695u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f769a  lea edx, [eax + eax*4]
    X86_AT(c, 0xf769au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f769d  lea edx, [eax + edx*2]
    X86_AT(c, 0xf769du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f76a0  shl edx, 5
    X86_AT(c, 0xf76a0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f76a3  sub edx, eax
    X86_AT(c, 0xf76a3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f76a5  push dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf76a5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))); push32(c, v); }
    // 0f76ab  push dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf76abu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))); push32(c, v); }
    // 0f76b1  call 0xe854c
    X86_AT(c, 0xf76b1u);
    push32(c, 0xf76b6u); f_000e854c(c); X86_RET(c, 0xf76b6u);
    X86_TICK(c, 2);
    // 0f76b6  add esp, 0x20
    X86_AT(c, 0xf76b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_f76b9:
    X86_TICK(c, 10);
    // 0f76b9  ret 
    X86_AT(c, 0xf76b9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf7540u, "ran off the end of a function");
}
void f_000f76bc(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0f76bc  push ebp
    X86_AT(c, 0xf76bcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f76bd  mov ebp, esp
    X86_AT(c, 0xf76bdu);
    c.r[5] = c.r[4];
    // 0f76bf  push esi
    X86_AT(c, 0xf76bfu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f76c0  push edi
    X86_AT(c, 0xf76c0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f76c1  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xf76c1u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0f76c4  cmp edi, 4
    X86_AT(c, 0xf76c4u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0f76c7  jg 0xf76f0
    X86_AT(c, 0xf76c7u);
    if (x86_cc(c, 15)) { goto L_f76f0; }
    X86_TICK(c, 2);
    // 0f76c9  sub esi, esi
    X86_AT(c, 0xf76c9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_f76cb:
    X86_TICK(c, 7);
    // 0f76cb  cmp esi, 4
    X86_AT(c, 0xf76cbu);
    (void)x86_sub(c, c.r[6], 0x4u, 0, 4);
    // 0f76ce  jge 0xf76f0
    X86_AT(c, 0xf76ceu);
    if (x86_cc(c, 13)) { goto L_f76f0; }
    X86_TICK(c, 24);
    // 0f76d0  mov eax, edi
    X86_AT(c, 0xf76d0u);
    c.r[0] = c.r[7];
    // 0f76d2  shl eax, 5
    X86_AT(c, 0xf76d2u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[0] = r; }
    // 0f76d5  push dword ptr [eax + esi*8 + 0xd4614]
    X86_AT(c, 0xf76d5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6] * 8 + 0xD4614u))); push32(c, v); }
    // 0f76dc  push dword ptr [eax + esi*8 + 0xd4610]
    X86_AT(c, 0xf76dcu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6] * 8 + 0xD4610u))); push32(c, v); }
    // 0f76e3  push 0xb
    X86_AT(c, 0xf76e3u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0f76e5  call 0xf3c0c
    X86_AT(c, 0xf76e5u);
    push32(c, 0xf76eau); f_000f3c0c(c); X86_RET(c, 0xf76eau);
    X86_TICK(c, 11);
    // 0f76ea  inc esi
    X86_AT(c, 0xf76eau);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0f76eb  add esp, 0xc
    X86_AT(c, 0xf76ebu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f76ee  jmp 0xf76cb
    X86_AT(c, 0xf76eeu);
    X86_POLL(c, 0xf76cbu); goto L_f76cb;
L_f76f0:
    X86_TICK(c, 24);
    // 0f76f0  pop edi
    X86_AT(c, 0xf76f0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f76f1  pop esi
    X86_AT(c, 0xf76f1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f76f2  leave 
    X86_AT(c, 0xf76f2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f76f3  ret 
    X86_AT(c, 0xf76f3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf76bcu, "ran off the end of a function");
}
void f_000f76f4(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0f76f4  push ebx
    X86_AT(c, 0xf76f4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f76f5  push esi
    X86_AT(c, 0xf76f5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f76f6  push edi
    X86_AT(c, 0xf76f6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f76f7  push 7
    X86_AT(c, 0xf76f7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f76f9  call 0xe693c
    X86_AT(c, 0xf76f9u);
    push32(c, 0xf76feu); f_000e693c(c); X86_RET(c, 0xf76feu);
    X86_TICK(c, 27);
    // 0f76fe  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf76feu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7703  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7703u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7706  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7706u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7709  shl edx, 5
    X86_AT(c, 0xf7709u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f770c  sub edx, eax
    X86_AT(c, 0xf770cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f770e  add esp, 4
    X86_AT(c, 0xf770eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f7711  cmp dword ptr [edx + 0xcde56], 0xec
    X86_AT(c, 0xf7711u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE56u))), 0xECu, 0, 4);
    // 0f771b  je 0xf7741
    X86_AT(c, 0xf771bu);
    if (x86_cc(c, 4)) { goto L_f7741; }
    X86_TICK(c, 11);
    // 0f771d  push 0x9fa4
    X86_AT(c, 0xf771du);
    { uint32_t v = 0x9FA4u; push32(c, v); }
    // 0f7722  push 7
    X86_AT(c, 0xf7722u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7724  call 0xe5654
    X86_AT(c, 0xf7724u);
    push32(c, 0xf7729u); f_000e5654(c); X86_RET(c, 0xf7729u);
    X86_TICK(c, 9);
    // 0f7729  push 7
    X86_AT(c, 0xf7729u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f772b  call 0xe6c68
    X86_AT(c, 0xf772bu);
    push32(c, 0xf7730u); f_000e6c68(c); X86_RET(c, 0xf7730u);
    X86_TICK(c, 9);
    // 0f7730  push 1
    X86_AT(c, 0xf7730u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f7732  call 0xe1944
    X86_AT(c, 0xf7732u);
    push32(c, 0xf7737u); f_000e1944(c); X86_RET(c, 0xf7737u);
    X86_TICK(c, 9);
    // 0f7737  push 0x9fb8
    X86_AT(c, 0xf7737u);
    { uint32_t v = 0x9FB8u; push32(c, v); }
    // 0f773c  jmp 0xf79d9
    X86_AT(c, 0xf773cu);
    goto L_f79d9;
L_f7741:
    X86_TICK(c, 32);
    // 0f7741  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7741u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7746  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7746u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7749  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7749u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f774c  shl edx, 5
    X86_AT(c, 0xf774cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f774f  sub edx, eax
    X86_AT(c, 0xf774fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7751  mov esi, dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf7751u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)));
    // 0f7757  mov ebx, dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf7757u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)));
    // 0f775d  push ebx
    X86_AT(c, 0xf775du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f775e  push esi
    X86_AT(c, 0xf775eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f775f  call 0xef920
    X86_AT(c, 0xf775fu);
    push32(c, 0xf7764u); f_000ef920(c); X86_RET(c, 0xf7764u);
    X86_TICK(c, 12);
    // 0f7764  xchg edi, eax
    X86_AT(c, 0xf7764u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0f7765  add esp, 8
    X86_AT(c, 0xf7765u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f7768  cmp edi, 0x6f
    X86_AT(c, 0xf7768u);
    (void)x86_sub(c, c.r[7], 0x6Fu, 0, 4);
    // 0f776b  je 0xf7772
    X86_AT(c, 0xf776bu);
    if (x86_cc(c, 4)) { goto L_f7772; }
    X86_TICK(c, 7);
    // 0f776d  cmp edi, 0x71
    X86_AT(c, 0xf776du);
    (void)x86_sub(c, c.r[7], 0x71u, 0, 4);
    // 0f7770  jne 0xf77b5
    X86_AT(c, 0xf7770u);
    if (x86_cc(c, 5)) { goto L_f77b5; }
L_f7772:
    X86_TICK(c, 11);
    // 0f7772  push 0x9fe4
    X86_AT(c, 0xf7772u);
    { uint32_t v = 0x9FE4u; push32(c, v); }
    // 0f7777  push 7
    X86_AT(c, 0xf7777u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7779  call 0xe5654
    X86_AT(c, 0xf7779u);
    push32(c, 0xf777eu); f_000e5654(c); X86_RET(c, 0xf777eu);
    X86_TICK(c, 9);
    // 0f777e  push 7
    X86_AT(c, 0xf777eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7780  call 0xe6c68
    X86_AT(c, 0xf7780u);
    push32(c, 0xf7785u); f_000e6c68(c); X86_RET(c, 0xf7785u);
    X86_TICK(c, 28);
    // 0f7785  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7785u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f778a  lea edx, [eax + eax*4]
    X86_AT(c, 0xf778au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f778d  lea edx, [eax + edx*2]
    X86_AT(c, 0xf778du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7790  shl edx, 5
    X86_AT(c, 0xf7790u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7793  sub edx, eax
    X86_AT(c, 0xf7793u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7795  mov dword ptr [edx + 0xcde56], 2
    X86_AT(c, 0xf7795u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE56u)), 0x2u);
    // 0f779f  push ebx
    X86_AT(c, 0xf779fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f77a0  push esi
    X86_AT(c, 0xf77a0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f77a1  push 0
    X86_AT(c, 0xf77a1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f77a3  call 0xf3c24
    X86_AT(c, 0xf77a3u);
    push32(c, 0xf77a8u); f_000f3c24(c); X86_RET(c, 0xf77a8u);
    X86_TICK(c, 7);
    // 0f77a8  call 0xe2c18
    X86_AT(c, 0xf77a8u);
    push32(c, 0xf77adu); f_000e2c18(c); X86_RET(c, 0xf77adu);
    X86_TICK(c, 9);
    // 0f77ad  add esp, 0x18
    X86_AT(c, 0xf77adu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0f77b0  jmp 0xf79ea
    X86_AT(c, 0xf77b0u);
    goto L_f79ea;
L_f77b5:
    X86_TICK(c, 7);
    // 0f77b5  cmp edi, 0x73
    X86_AT(c, 0xf77b5u);
    (void)x86_sub(c, c.r[7], 0x73u, 0, 4);
    // 0f77b8  je 0xf77c8
    X86_AT(c, 0xf77b8u);
    if (x86_cc(c, 4)) { goto L_f77c8; }
    X86_TICK(c, 7);
    // 0f77ba  cmp edi, 0x75
    X86_AT(c, 0xf77bau);
    (void)x86_sub(c, c.r[7], 0x75u, 0, 4);
    // 0f77bd  je 0xf77c8
    X86_AT(c, 0xf77bdu);
    if (x86_cc(c, 4)) { goto L_f77c8; }
    X86_TICK(c, 7);
    // 0f77bf  cmp edi, 0x78
    X86_AT(c, 0xf77bfu);
    (void)x86_sub(c, c.r[7], 0x78u, 0, 4);
    // 0f77c2  jne 0xf7865
    X86_AT(c, 0xf77c2u);
    if (x86_cc(c, 5)) { goto L_f7865; }
L_f77c8:
    X86_TICK(c, 11);
    // 0f77c8  push 0xa010
    X86_AT(c, 0xf77c8u);
    { uint32_t v = 0xA010u; push32(c, v); }
    // 0f77cd  push 7
    X86_AT(c, 0xf77cdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f77cf  call 0xe5654
    X86_AT(c, 0xf77cfu);
    push32(c, 0xf77d4u); f_000e5654(c); X86_RET(c, 0xf77d4u);
    X86_TICK(c, 9);
    // 0f77d4  push 7
    X86_AT(c, 0xf77d4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f77d6  call 0xe6c68
    X86_AT(c, 0xf77d6u);
    push32(c, 0xf77dbu); f_000e6c68(c); X86_RET(c, 0xf77dbu);
    X86_TICK(c, 14);
    // 0f77db  add esp, 0xc
    X86_AT(c, 0xf77dbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f77de  cmp dword ptr [0xcde44], 2
    X86_AT(c, 0xf77deu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDE44u))), 0x2u, 0, 4);
    // 0f77e5  je 0xf7811
    X86_AT(c, 0xf77e5u);
    if (x86_cc(c, 4)) { goto L_f7811; }
    X86_TICK(c, 25);
    // 0f77e7  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf77e7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f77ec  lea edx, [eax + eax*4]
    X86_AT(c, 0xf77ecu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f77ef  lea edx, [eax + edx*2]
    X86_AT(c, 0xf77efu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f77f2  shl edx, 5
    X86_AT(c, 0xf77f2u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f77f5  sub edx, eax
    X86_AT(c, 0xf77f5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f77f7  cmp dword ptr [edx + 0xcdf17], 0
    X86_AT(c, 0xf77f7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF17u))), 0x0u, 0, 4);
    // 0f77fe  jne 0xf7811
    X86_AT(c, 0xf77feu);
    if (x86_cc(c, 5)) { goto L_f7811; }
    X86_TICK(c, 9);
    // 0f7800  push 3
    X86_AT(c, 0xf7800u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f7802  call 0xe1944
    X86_AT(c, 0xf7802u);
    push32(c, 0xf7807u); f_000e1944(c); X86_RET(c, 0xf7807u);
    X86_TICK(c, 9);
    // 0f7807  push 0xa03c
    X86_AT(c, 0xf7807u);
    { uint32_t v = 0xA03Cu; push32(c, v); }
    // 0f780c  jmp 0xf7958
    X86_AT(c, 0xf780cu);
    goto L_f7958;
L_f7811:
    X86_TICK(c, 12);
    // 0f7811  cmp dword ptr [0xcde44], 2
    X86_AT(c, 0xf7811u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDE44u))), 0x2u, 0, 4);
    // 0f7818  je 0xf7830
    X86_AT(c, 0xf7818u);
    if (x86_cc(c, 4)) { goto L_f7830; }
    X86_TICK(c, 19);
    // 0f781a  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf781au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f781f  lea edx, [eax + eax*4]
    X86_AT(c, 0xf781fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7822  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7822u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7825  shl edx, 5
    X86_AT(c, 0xf7825u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7828  sub edx, eax
    X86_AT(c, 0xf7828u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f782a  dec dword ptr [edx + 0xcdf17]
    X86_AT(c, 0xf782au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF17u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_f7830:
    X86_TICK(c, 22);
    // 0f7830  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7830u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7835  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7835u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7838  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7838u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f783b  shl edx, 5
    X86_AT(c, 0xf783bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f783e  sub edx, eax
    X86_AT(c, 0xf783eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7840  mov dword ptr [edx + 0xcde56], 1
    X86_AT(c, 0xf7840u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE56u)), 0x1u);
    // 0f784a  cmp edi, 0x78
    X86_AT(c, 0xf784au);
    (void)x86_sub(c, c.r[7], 0x78u, 0, 4);
    // 0f784d  je 0xf785b
    X86_AT(c, 0xf784du);
    if (x86_cc(c, 4)) { goto L_f785b; }
    X86_TICK(c, 13);
    // 0f784f  push ebx
    X86_AT(c, 0xf784fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f7850  push esi
    X86_AT(c, 0xf7850u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f7851  push 0
    X86_AT(c, 0xf7851u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f7853  call 0xf3c24
    X86_AT(c, 0xf7853u);
    push32(c, 0xf7858u); f_000f3c24(c); X86_RET(c, 0xf7858u);
    X86_TICK(c, 2);
    // 0f7858  add esp, 0xc
    X86_AT(c, 0xf7858u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_f785b:
    X86_TICK(c, 7);
    // 0f785b  call 0xe2c18
    X86_AT(c, 0xf785bu);
    push32(c, 0xf7860u); f_000e2c18(c); X86_RET(c, 0xf7860u);
    X86_TICK(c, 7);
    // 0f7860  jmp 0xf79ea
    X86_AT(c, 0xf7860u);
    goto L_f79ea;
L_f7865:
    X86_TICK(c, 7);
    // 0f7865  cmp edi, 0x196
    X86_AT(c, 0xf7865u);
    (void)x86_sub(c, c.r[7], 0x196u, 0, 4);
    // 0f786b  je 0xf7879
    X86_AT(c, 0xf786bu);
    if (x86_cc(c, 4)) { goto L_f7879; }
    X86_TICK(c, 7);
    // 0f786d  cmp edi, 0x96
    X86_AT(c, 0xf786du);
    (void)x86_sub(c, c.r[7], 0x96u, 0, 4);
    // 0f7873  jne 0xf7900
    X86_AT(c, 0xf7873u);
    if (x86_cc(c, 5)) { goto L_f7900; }
L_f7879:
    X86_TICK(c, 11);
    // 0f7879  push 0xa0b4
    X86_AT(c, 0xf7879u);
    { uint32_t v = 0xA0B4u; push32(c, v); }
    // 0f787e  push 7
    X86_AT(c, 0xf787eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7880  call 0xe5654
    X86_AT(c, 0xf7880u);
    push32(c, 0xf7885u); f_000e5654(c); X86_RET(c, 0xf7885u);
    X86_TICK(c, 9);
    // 0f7885  push 7
    X86_AT(c, 0xf7885u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7887  call 0xe6c68
    X86_AT(c, 0xf7887u);
    push32(c, 0xf788cu); f_000e6c68(c); X86_RET(c, 0xf788cu);
    X86_TICK(c, 14);
    // 0f788c  add esp, 0xc
    X86_AT(c, 0xf788cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f788f  cmp dword ptr [0xcde44], 2
    X86_AT(c, 0xf788fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDE44u))), 0x2u, 0, 4);
    // 0f7896  je 0xf78c2
    X86_AT(c, 0xf7896u);
    if (x86_cc(c, 4)) { goto L_f78c2; }
    X86_TICK(c, 25);
    // 0f7898  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7898u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f789d  lea edx, [eax + eax*4]
    X86_AT(c, 0xf789du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f78a0  lea edx, [eax + edx*2]
    X86_AT(c, 0xf78a0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f78a3  shl edx, 5
    X86_AT(c, 0xf78a3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f78a6  sub edx, eax
    X86_AT(c, 0xf78a6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f78a8  cmp dword ptr [edx + 0xcdf03], 0
    X86_AT(c, 0xf78a8u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF03u))), 0x0u, 0, 4);
    // 0f78af  jne 0xf78c2
    X86_AT(c, 0xf78afu);
    if (x86_cc(c, 5)) { goto L_f78c2; }
    X86_TICK(c, 9);
    // 0f78b1  push 3
    X86_AT(c, 0xf78b1u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f78b3  call 0xe1944
    X86_AT(c, 0xf78b3u);
    push32(c, 0xf78b8u); f_000e1944(c); X86_RET(c, 0xf78b8u);
    X86_TICK(c, 9);
    // 0f78b8  push 0xa0e4
    X86_AT(c, 0xf78b8u);
    { uint32_t v = 0xA0E4u; push32(c, v); }
    // 0f78bd  jmp 0xf7958
    X86_AT(c, 0xf78bdu);
    goto L_f7958;
L_f78c2:
    X86_TICK(c, 12);
    // 0f78c2  cmp dword ptr [0xcde44], 2
    X86_AT(c, 0xf78c2u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDE44u))), 0x2u, 0, 4);
    // 0f78c9  je 0xf78e1
    X86_AT(c, 0xf78c9u);
    if (x86_cc(c, 4)) { goto L_f78e1; }
    X86_TICK(c, 19);
    // 0f78cb  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf78cbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f78d0  lea edx, [eax + eax*4]
    X86_AT(c, 0xf78d0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f78d3  lea edx, [eax + edx*2]
    X86_AT(c, 0xf78d3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f78d6  shl edx, 5
    X86_AT(c, 0xf78d6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f78d9  sub edx, eax
    X86_AT(c, 0xf78d9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f78db  dec dword ptr [edx + 0xcdf03]
    X86_AT(c, 0xf78dbu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF03u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_f78e1:
    X86_TICK(c, 22);
    // 0f78e1  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf78e1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f78e6  lea edx, [eax + eax*4]
    X86_AT(c, 0xf78e6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f78e9  lea edx, [eax + edx*2]
    X86_AT(c, 0xf78e9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f78ec  shl edx, 5
    X86_AT(c, 0xf78ecu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f78ef  sub edx, eax
    X86_AT(c, 0xf78efu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f78f1  mov dword ptr [edx + 0xcde56], 4
    X86_AT(c, 0xf78f1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE56u)), 0x4u);
    // 0f78fb  jmp 0xf79a7
    X86_AT(c, 0xf78fbu);
    goto L_f79a7;
L_f7900:
    X86_TICK(c, 7);
    // 0f7900  cmp edi, 0x194
    X86_AT(c, 0xf7900u);
    (void)x86_sub(c, c.r[7], 0x194u, 0, 4);
    // 0f7906  je 0xf7914
    X86_AT(c, 0xf7906u);
    if (x86_cc(c, 4)) { goto L_f7914; }
    X86_TICK(c, 7);
    // 0f7908  cmp edi, 0x94
    X86_AT(c, 0xf7908u);
    (void)x86_sub(c, c.r[7], 0x94u, 0, 4);
    // 0f790e  jne 0xf79ba
    X86_AT(c, 0xf790eu);
    if (x86_cc(c, 5)) { goto L_f79ba; }
L_f7914:
    X86_TICK(c, 11);
    // 0f7914  push 0xa168
    X86_AT(c, 0xf7914u);
    { uint32_t v = 0xA168u; push32(c, v); }
    // 0f7919  push 7
    X86_AT(c, 0xf7919u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f791b  call 0xe5654
    X86_AT(c, 0xf791bu);
    push32(c, 0xf7920u); f_000e5654(c); X86_RET(c, 0xf7920u);
    X86_TICK(c, 9);
    // 0f7920  push 7
    X86_AT(c, 0xf7920u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7922  call 0xe6c68
    X86_AT(c, 0xf7922u);
    push32(c, 0xf7927u); f_000e6c68(c); X86_RET(c, 0xf7927u);
    X86_TICK(c, 14);
    // 0f7927  add esp, 0xc
    X86_AT(c, 0xf7927u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f792a  cmp dword ptr [0xcde44], 2
    X86_AT(c, 0xf792au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDE44u))), 0x2u, 0, 4);
    // 0f7931  je 0xf796e
    X86_AT(c, 0xf7931u);
    if (x86_cc(c, 4)) { goto L_f796e; }
    X86_TICK(c, 25);
    // 0f7933  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7933u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7938  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7938u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f793b  lea edx, [eax + edx*2]
    X86_AT(c, 0xf793bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f793e  shl edx, 5
    X86_AT(c, 0xf793eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7941  sub edx, eax
    X86_AT(c, 0xf7941u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7943  cmp dword ptr [edx + 0xcdf0b], 0
    X86_AT(c, 0xf7943u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF0Bu))), 0x0u, 0, 4);
    // 0f794a  jne 0xf796e
    X86_AT(c, 0xf794au);
    if (x86_cc(c, 5)) { goto L_f796e; }
    X86_TICK(c, 9);
    // 0f794c  push 3
    X86_AT(c, 0xf794cu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f794e  call 0xe1944
    X86_AT(c, 0xf794eu);
    push32(c, 0xf7953u); f_000e1944(c); X86_RET(c, 0xf7953u);
    X86_TICK(c, 2);
    // 0f7953  push 0xa194
    X86_AT(c, 0xf7953u);
    { uint32_t v = 0xA194u; push32(c, v); }
L_f7958:
    X86_TICK(c, 9);
    // 0f7958  push 7
    X86_AT(c, 0xf7958u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f795a  call 0xe5654
    X86_AT(c, 0xf795au);
    push32(c, 0xf795fu); f_000e5654(c); X86_RET(c, 0xf795fu);
    X86_TICK(c, 9);
    // 0f795f  push 7
    X86_AT(c, 0xf795fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7961  call 0xe6c68
    X86_AT(c, 0xf7961u);
    push32(c, 0xf7966u); f_000e6c68(c); X86_RET(c, 0xf7966u);
    X86_TICK(c, 9);
    // 0f7966  add esp, 0x10
    X86_AT(c, 0xf7966u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f7969  jmp 0xf79ea
    X86_AT(c, 0xf7969u);
    goto L_f79ea;
L_f796e:
    X86_TICK(c, 12);
    // 0f796e  cmp dword ptr [0xcde44], 2
    X86_AT(c, 0xf796eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDE44u))), 0x2u, 0, 4);
    // 0f7975  je 0xf798d
    X86_AT(c, 0xf7975u);
    if (x86_cc(c, 4)) { goto L_f798d; }
    X86_TICK(c, 19);
    // 0f7977  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7977u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f797c  lea edx, [eax + eax*4]
    X86_AT(c, 0xf797cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f797f  lea edx, [eax + edx*2]
    X86_AT(c, 0xf797fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7982  shl edx, 5
    X86_AT(c, 0xf7982u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7985  sub edx, eax
    X86_AT(c, 0xf7985u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7987  dec dword ptr [edx + 0xcdf0b]
    X86_AT(c, 0xf7987u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF0Bu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_f798d:
    X86_TICK(c, 15);
    // 0f798d  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf798du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7992  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7992u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7995  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7995u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7998  shl edx, 5
    X86_AT(c, 0xf7998u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f799b  sub edx, eax
    X86_AT(c, 0xf799bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f799d  mov dword ptr [edx + 0xcde56], 3
    X86_AT(c, 0xf799du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE56u)), 0x3u);
L_f79a7:
    X86_TICK(c, 13);
    // 0f79a7  push ebx
    X86_AT(c, 0xf79a7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f79a8  push esi
    X86_AT(c, 0xf79a8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f79a9  push 0
    X86_AT(c, 0xf79a9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f79ab  call 0xf3c24
    X86_AT(c, 0xf79abu);
    push32(c, 0xf79b0u); f_000f3c24(c); X86_RET(c, 0xf79b0u);
    X86_TICK(c, 7);
    // 0f79b0  call 0xe2c18
    X86_AT(c, 0xf79b0u);
    push32(c, 0xf79b5u); f_000e2c18(c); X86_RET(c, 0xf79b5u);
    X86_TICK(c, 9);
    // 0f79b5  add esp, 0xc
    X86_AT(c, 0xf79b5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f79b8  jmp 0xf79ea
    X86_AT(c, 0xf79b8u);
    goto L_f79ea;
L_f79ba:
    X86_TICK(c, 11);
    // 0f79ba  push 0xa1dc
    X86_AT(c, 0xf79bau);
    { uint32_t v = 0xA1DCu; push32(c, v); }
    // 0f79bf  push 7
    X86_AT(c, 0xf79bfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f79c1  call 0xe5654
    X86_AT(c, 0xf79c1u);
    push32(c, 0xf79c6u); f_000e5654(c); X86_RET(c, 0xf79c6u);
    X86_TICK(c, 9);
    // 0f79c6  push 7
    X86_AT(c, 0xf79c6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f79c8  call 0xe6c68
    X86_AT(c, 0xf79c8u);
    push32(c, 0xf79cdu); f_000e6c68(c); X86_RET(c, 0xf79cdu);
    X86_TICK(c, 9);
    // 0f79cd  push 1
    X86_AT(c, 0xf79cdu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f79cf  call 0xe1944
    X86_AT(c, 0xf79cfu);
    push32(c, 0xf79d4u); f_000e1944(c); X86_RET(c, 0xf79d4u);
    X86_TICK(c, 2);
    // 0f79d4  push 0xa1f0
    X86_AT(c, 0xf79d4u);
    { uint32_t v = 0xA1F0u; push32(c, v); }
L_f79d9:
    X86_TICK(c, 9);
    // 0f79d9  push 7
    X86_AT(c, 0xf79d9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f79db  call 0xe5654
    X86_AT(c, 0xf79dbu);
    push32(c, 0xf79e0u); f_000e5654(c); X86_RET(c, 0xf79e0u);
    X86_TICK(c, 9);
    // 0f79e0  push 7
    X86_AT(c, 0xf79e0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f79e2  call 0xe6c68
    X86_AT(c, 0xf79e2u);
    push32(c, 0xf79e7u); f_000e6c68(c); X86_RET(c, 0xf79e7u);
    X86_TICK(c, 2);
    // 0f79e7  add esp, 0x1c
    X86_AT(c, 0xf79e7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_f79ea:
    X86_TICK(c, 22);
    // 0f79ea  pop edi
    X86_AT(c, 0xf79eau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f79eb  pop esi
    X86_AT(c, 0xf79ebu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f79ec  pop ebx
    X86_AT(c, 0xf79ecu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f79ed  ret 
    X86_AT(c, 0xf79edu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf76f4u, "ran off the end of a function");
}
void f_000f7958(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0f7958  push 7
    X86_AT(c, 0xf7958u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f795a  call 0xe5654
    X86_AT(c, 0xf795au);
    push32(c, 0xf795fu); f_000e5654(c); X86_RET(c, 0xf795fu);
    X86_TICK(c, 9);
    // 0f795f  push 7
    X86_AT(c, 0xf795fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7961  call 0xe6c68
    X86_AT(c, 0xf7961u);
    push32(c, 0xf7966u); f_000e6c68(c); X86_RET(c, 0xf7966u);
    X86_TICK(c, 9);
    // 0f7966  add esp, 0x10
    X86_AT(c, 0xf7966u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f7969  jmp 0xf79ea
    X86_AT(c, 0xf7969u);
    goto L_f79ea;
L_f79ea:
    X86_TICK(c, 22);
    // 0f79ea  pop edi
    X86_AT(c, 0xf79eau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f79eb  pop esi
    X86_AT(c, 0xf79ebu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f79ec  pop ebx
    X86_AT(c, 0xf79ecu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f79ed  ret 
    X86_AT(c, 0xf79edu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf7958u, "ran off the end of a function");
}
void f_000f79ea(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0f79ea  pop edi
    X86_AT(c, 0xf79eau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f79eb  pop esi
    X86_AT(c, 0xf79ebu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f79ec  pop ebx
    X86_AT(c, 0xf79ecu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f79ed  ret 
    X86_AT(c, 0xf79edu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf79eau, "ran off the end of a function");
}
void f_000f79f0(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0f79f0  call 0xef0f4
    X86_AT(c, 0xf79f0u);
    push32(c, 0xf79f5u); f_000ef0f4(c); X86_RET(c, 0xf79f5u);
    X86_TICK(c, 10);
    // 0f79f5  ret 
    X86_AT(c, 0xf79f5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf79f0u, "ran off the end of a function");
}
void f_000f79f8(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0f79f8  push ebx
    X86_AT(c, 0xf79f8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f79f9  push 7
    X86_AT(c, 0xf79f9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f79fb  call 0xe693c
    X86_AT(c, 0xf79fbu);
    push32(c, 0xf7a00u); f_000e693c(c); X86_RET(c, 0xf7a00u);
    X86_TICK(c, 27);
    // 0f7a00  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7a00u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7a05  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7a05u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7a08  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7a08u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7a0b  shl edx, 5
    X86_AT(c, 0xf7a0bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7a0e  sub edx, eax
    X86_AT(c, 0xf7a0eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7a10  add esp, 4
    X86_AT(c, 0xf7a10u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f7a13  cmp dword ptr [edx + 0xcdf57], 0
    X86_AT(c, 0xf7a13u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))), 0x0u, 0, 4);
    // 0f7a1a  je 0xf7a3d
    X86_AT(c, 0xf7a1au);
    if (x86_cc(c, 4)) { goto L_f7a3d; }
    X86_TICK(c, 9);
    // 0f7a1c  push 1
    X86_AT(c, 0xf7a1cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f7a1e  call 0xe1944
    X86_AT(c, 0xf7a1eu);
    push32(c, 0xf7a23u); f_000e1944(c); X86_RET(c, 0xf7a23u);
    X86_TICK(c, 11);
    // 0f7a23  push 0xa220
    X86_AT(c, 0xf7a23u);
    { uint32_t v = 0xA220u; push32(c, v); }
    // 0f7a28  push 7
    X86_AT(c, 0xf7a28u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7a2a  call 0xe5654
    X86_AT(c, 0xf7a2au);
    push32(c, 0xf7a2fu); f_000e5654(c); X86_RET(c, 0xf7a2fu);
    X86_TICK(c, 9);
    // 0f7a2f  push 7
    X86_AT(c, 0xf7a2fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7a31  call 0xe6c68
    X86_AT(c, 0xf7a31u);
    push32(c, 0xf7a36u); f_000e6c68(c); X86_RET(c, 0xf7a36u);
    X86_TICK(c, 9);
    // 0f7a36  push 0xa234
    X86_AT(c, 0xf7a36u);
    { uint32_t v = 0xA234u; push32(c, v); }
    // 0f7a3b  jmp 0xf7a78
    X86_AT(c, 0xf7a3bu);
    goto L_f7a78;
L_f7a3d:
    X86_TICK(c, 25);
    // 0f7a3d  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7a3du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7a42  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7a42u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7a45  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7a45u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7a48  shl edx, 5
    X86_AT(c, 0xf7a48u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7a4b  sub edx, eax
    X86_AT(c, 0xf7a4bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7a4d  cmp dword ptr [edx + 0xcde56], 0xec
    X86_AT(c, 0xf7a4du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE56u))), 0xECu, 0, 4);
    // 0f7a57  je 0xf7a8e
    X86_AT(c, 0xf7a57u);
    if (x86_cc(c, 4)) { goto L_f7a8e; }
    X86_TICK(c, 9);
    // 0f7a59  push 3
    X86_AT(c, 0xf7a59u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f7a5b  call 0xe1944
    X86_AT(c, 0xf7a5bu);
    push32(c, 0xf7a60u); f_000e1944(c); X86_RET(c, 0xf7a60u);
    X86_TICK(c, 11);
    // 0f7a60  push 0xa248
    X86_AT(c, 0xf7a60u);
    { uint32_t v = 0xA248u; push32(c, v); }
    // 0f7a65  push 7
    X86_AT(c, 0xf7a65u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7a67  call 0xe5654
    X86_AT(c, 0xf7a67u);
    push32(c, 0xf7a6cu); f_000e5654(c); X86_RET(c, 0xf7a6cu);
    X86_TICK(c, 9);
    // 0f7a6c  push 7
    X86_AT(c, 0xf7a6cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7a6e  call 0xe6c68
    X86_AT(c, 0xf7a6eu);
    push32(c, 0xf7a73u); f_000e6c68(c); X86_RET(c, 0xf7a73u);
    X86_TICK(c, 2);
    // 0f7a73  push 0xa25c
    X86_AT(c, 0xf7a73u);
    { uint32_t v = 0xA25Cu; push32(c, v); }
L_f7a78:
    X86_TICK(c, 9);
    // 0f7a78  push 7
    X86_AT(c, 0xf7a78u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7a7a  call 0xe5654
    X86_AT(c, 0xf7a7au);
    push32(c, 0xf7a7fu); f_000e5654(c); X86_RET(c, 0xf7a7fu);
    X86_TICK(c, 9);
    // 0f7a7f  push 7
    X86_AT(c, 0xf7a7fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7a81  call 0xe6c68
    X86_AT(c, 0xf7a81u);
    push32(c, 0xf7a86u); f_000e6c68(c); X86_RET(c, 0xf7a86u);
    X86_TICK(c, 9);
    // 0f7a86  add esp, 0x1c
    X86_AT(c, 0xf7a86u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0f7a89  jmp 0xf7ca6
    X86_AT(c, 0xf7a89u);
    goto L_f7ca6;
L_f7a8e:
    X86_TICK(c, 30);
    // 0f7a8e  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7a8eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7a93  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7a93u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7a96  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7a96u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7a99  shl edx, 5
    X86_AT(c, 0xf7a99u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7a9c  sub edx, eax
    X86_AT(c, 0xf7a9cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7a9e  push dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf7a9eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))); push32(c, v); }
    // 0f7aa4  push dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf7aa4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))); push32(c, v); }
    // 0f7aaa  call 0xef8f4
    X86_AT(c, 0xf7aaau);
    push32(c, 0xf7aafu); f_000ef8f4(c); X86_RET(c, 0xf7aafu);
    X86_TICK(c, 12);
    // 0f7aaf  xchg ebx, eax
    X86_AT(c, 0xf7aafu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0f7ab0  push 7
    X86_AT(c, 0xf7ab0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7ab2  call 0xe693c
    X86_AT(c, 0xf7ab2u);
    push32(c, 0xf7ab7u); f_000e693c(c); X86_RET(c, 0xf7ab7u);
    X86_TICK(c, 14);
    // 0f7ab7  add esp, 0xc
    X86_AT(c, 0xf7ab7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f7aba  movzx edx, bl
    X86_AT(c, 0xf7abau);
    c.r[2] = g8(c, 3);
    // 0f7abd  sub edx, 6
    X86_AT(c, 0xf7abdu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x6u, 0, 4); }
    // 0f7ac0  cmp edx, 9
    X86_AT(c, 0xf7ac0u);
    (void)x86_sub(c, c.r[2], 0x9u, 0, 4);
    // 0f7ac3  ja 0xf7c52
    X86_AT(c, 0xf7ac3u);
    if (x86_cc(c, 7)) { goto L_f7c52; }
    X86_TICK(c, 7);
    // 0f7ac9  jmp dword ptr cs:[edx*4 + 0xf7ad1]
    X86_AT(c, 0xf7ac9u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF7AD1u)));
      switch (t) {
      case 0xf7af9u: goto L_f7af9;
      case 0xf7b3eu: goto L_f7b3e;
      case 0xf7b80u: goto L_f7b80;
      case 0xf7bbbu: goto L_f7bbb;
      case 0xf7c00u: goto L_f7c00;
      case 0xf7c38u: goto L_f7c38;
      case 0xf7c52u: goto L_f7c52;
      default: x86_jump(c, t); return; } }
L_f7af9:
    X86_TICK(c, 11);
    // 0f7af9  push 0xa28c
    X86_AT(c, 0xf7af9u);
    { uint32_t v = 0xA28Cu; push32(c, v); }
    // 0f7afe  push 7
    X86_AT(c, 0xf7afeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7b00  call 0xe5654
    X86_AT(c, 0xf7b00u);
    push32(c, 0xf7b05u); f_000e5654(c); X86_RET(c, 0xf7b05u);
    X86_TICK(c, 9);
    // 0f7b05  push 7
    X86_AT(c, 0xf7b05u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7b07  call 0xe6c68
    X86_AT(c, 0xf7b07u);
    push32(c, 0xf7b0cu); f_000e6c68(c); X86_RET(c, 0xf7b0cu);
    X86_TICK(c, 28);
    // 0f7b0c  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7b0cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7b11  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7b11u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7b14  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7b14u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7b17  shl edx, 5
    X86_AT(c, 0xf7b17u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7b1a  sub edx, eax
    X86_AT(c, 0xf7b1au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7b1c  sub eax, eax
    X86_AT(c, 0xf7b1cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7b1e  mov dword ptr [edx + 0xcdf97], eax
    X86_AT(c, 0xf7b1eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF97u)), c.r[0]);
    // 0f7b24  mov dword ptr [edx + 0xcdf93], eax
    X86_AT(c, 0xf7b24u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF93u)), c.r[0]);
    // 0f7b2a  mov dword ptr [0xd4608], 0xffffffff
    X86_AT(c, 0xf7b2au);
    wr32((c.sbase[3] + (uint32_t)(0xD4608u)), 0xFFFFFFFFu);
    // 0f7b34  call 0xf7d28
    X86_AT(c, 0xf7b34u);
    push32(c, 0xf7b39u); f_000f7d28(c); X86_RET(c, 0xf7b39u);
    X86_TICK(c, 7);
    // 0f7b39  jmp 0xf7bfb
    X86_AT(c, 0xf7b39u);
    goto L_f7bfb;
L_f7b3e:
    X86_TICK(c, 11);
    // 0f7b3e  push 0xa2b4
    X86_AT(c, 0xf7b3eu);
    { uint32_t v = 0xA2B4u; push32(c, v); }
    // 0f7b43  push 7
    X86_AT(c, 0xf7b43u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7b45  call 0xe5654
    X86_AT(c, 0xf7b45u);
    push32(c, 0xf7b4au); f_000e5654(c); X86_RET(c, 0xf7b4au);
    X86_TICK(c, 9);
    // 0f7b4a  push 7
    X86_AT(c, 0xf7b4au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7b4c  call 0xe6c68
    X86_AT(c, 0xf7b4cu);
    push32(c, 0xf7b51u); f_000e6c68(c); X86_RET(c, 0xf7b51u);
    X86_TICK(c, 28);
    // 0f7b51  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7b51u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7b56  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7b56u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7b59  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7b59u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7b5c  shl edx, 5
    X86_AT(c, 0xf7b5cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7b5f  sub edx, eax
    X86_AT(c, 0xf7b5fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7b61  sub eax, eax
    X86_AT(c, 0xf7b61u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7b63  mov dword ptr [edx + 0xcdf97], eax
    X86_AT(c, 0xf7b63u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF97u)), c.r[0]);
    // 0f7b69  mov dword ptr [edx + 0xcdf93], eax
    X86_AT(c, 0xf7b69u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF93u)), c.r[0]);
    // 0f7b6f  mov dword ptr [0xd4608], 0xffffffff
    X86_AT(c, 0xf7b6fu);
    wr32((c.sbase[3] + (uint32_t)(0xD4608u)), 0xFFFFFFFFu);
    // 0f7b79  call 0xf7ea0
    X86_AT(c, 0xf7b79u);
    push32(c, 0xf7b7eu); f_000f7ea0(c); X86_RET(c, 0xf7b7eu);
    X86_TICK(c, 7);
    // 0f7b7e  jmp 0xf7bfb
    X86_AT(c, 0xf7b7eu);
    goto L_f7bfb;
L_f7b80:
    X86_TICK(c, 11);
    // 0f7b80  push 0xa2d8
    X86_AT(c, 0xf7b80u);
    { uint32_t v = 0xA2D8u; push32(c, v); }
    // 0f7b85  push 7
    X86_AT(c, 0xf7b85u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7b87  call 0xe5654
    X86_AT(c, 0xf7b87u);
    push32(c, 0xf7b8cu); f_000e5654(c); X86_RET(c, 0xf7b8cu);
    X86_TICK(c, 9);
    // 0f7b8c  push 7
    X86_AT(c, 0xf7b8cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7b8e  call 0xe6c68
    X86_AT(c, 0xf7b8eu);
    push32(c, 0xf7b93u); f_000e6c68(c); X86_RET(c, 0xf7b93u);
    X86_TICK(c, 26);
    // 0f7b93  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7b93u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7b98  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7b98u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7b9b  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7b9bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7b9e  shl edx, 5
    X86_AT(c, 0xf7b9eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7ba1  sub edx, eax
    X86_AT(c, 0xf7ba1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7ba3  sub eax, eax
    X86_AT(c, 0xf7ba3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7ba5  mov dword ptr [edx + 0xcdf97], eax
    X86_AT(c, 0xf7ba5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF97u)), c.r[0]);
    // 0f7bab  mov dword ptr [edx + 0xcdf93], eax
    X86_AT(c, 0xf7babu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF93u)), c.r[0]);
    // 0f7bb1  call 0xf7ca8
    X86_AT(c, 0xf7bb1u);
    push32(c, 0xf7bb6u); f_000f7ca8(c); X86_RET(c, 0xf7bb6u);
    X86_TICK(c, 7);
    // 0f7bb6  jmp 0xf7ca3
    X86_AT(c, 0xf7bb6u);
    goto L_f7ca3;
L_f7bbb:
    X86_TICK(c, 11);
    // 0f7bbb  push 0xa2fc
    X86_AT(c, 0xf7bbbu);
    { uint32_t v = 0xA2FCu; push32(c, v); }
    // 0f7bc0  push 7
    X86_AT(c, 0xf7bc0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7bc2  call 0xe5654
    X86_AT(c, 0xf7bc2u);
    push32(c, 0xf7bc7u); f_000e5654(c); X86_RET(c, 0xf7bc7u);
    X86_TICK(c, 9);
    // 0f7bc7  push 7
    X86_AT(c, 0xf7bc7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7bc9  call 0xe6c68
    X86_AT(c, 0xf7bc9u);
    push32(c, 0xf7bceu); f_000e6c68(c); X86_RET(c, 0xf7bceu);
    X86_TICK(c, 28);
    // 0f7bce  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7bceu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7bd3  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7bd3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7bd6  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7bd6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7bd9  shl edx, 5
    X86_AT(c, 0xf7bd9u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7bdc  sub edx, eax
    X86_AT(c, 0xf7bdcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7bde  sub eax, eax
    X86_AT(c, 0xf7bdeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7be0  mov dword ptr [edx + 0xcdf97], eax
    X86_AT(c, 0xf7be0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF97u)), c.r[0]);
    // 0f7be6  mov dword ptr [edx + 0xcdf93], eax
    X86_AT(c, 0xf7be6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF93u)), c.r[0]);
    // 0f7bec  mov dword ptr [0xd4608], 0xffffffff
    X86_AT(c, 0xf7becu);
    wr32((c.sbase[3] + (uint32_t)(0xD4608u)), 0xFFFFFFFFu);
    // 0f7bf6  call 0xf7de0
    X86_AT(c, 0xf7bf6u);
    push32(c, 0xf7bfbu); f_000f7de0(c); X86_RET(c, 0xf7bfbu);
L_f7bfb:
    X86_TICK(c, 9);
    // 0f7bfb  add esp, 0xc
    X86_AT(c, 0xf7bfbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f7bfe  jmp 0xf7c71
    X86_AT(c, 0xf7bfeu);
    goto L_f7c71;
L_f7c00:
    X86_TICK(c, 11);
    // 0f7c00  push 0xa324
    X86_AT(c, 0xf7c00u);
    { uint32_t v = 0xA324u; push32(c, v); }
    // 0f7c05  push 7
    X86_AT(c, 0xf7c05u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7c07  call 0xe5654
    X86_AT(c, 0xf7c07u);
    push32(c, 0xf7c0cu); f_000e5654(c); X86_RET(c, 0xf7c0cu);
    X86_TICK(c, 9);
    // 0f7c0c  push 7
    X86_AT(c, 0xf7c0cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7c0e  call 0xe6c68
    X86_AT(c, 0xf7c0eu);
    push32(c, 0xf7c13u); f_000e6c68(c); X86_RET(c, 0xf7c13u);
    X86_TICK(c, 26);
    // 0f7c13  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7c13u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7c18  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7c18u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7c1b  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7c1bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7c1e  shl edx, 5
    X86_AT(c, 0xf7c1eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7c21  sub edx, eax
    X86_AT(c, 0xf7c21u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7c23  sub eax, eax
    X86_AT(c, 0xf7c23u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7c25  mov dword ptr [edx + 0xcdf97], eax
    X86_AT(c, 0xf7c25u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF97u)), c.r[0]);
    // 0f7c2b  mov dword ptr [edx + 0xcdf93], eax
    X86_AT(c, 0xf7c2bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF93u)), c.r[0]);
    // 0f7c31  call 0xf7f60
    X86_AT(c, 0xf7c31u);
    push32(c, 0xf7c36u); f_000f7f60(c); X86_RET(c, 0xf7c36u);
    X86_TICK(c, 7);
    // 0f7c36  jmp 0xf7ca3
    X86_AT(c, 0xf7c36u);
    goto L_f7ca3;
L_f7c38:
    X86_TICK(c, 11);
    // 0f7c38  push 0xa354
    X86_AT(c, 0xf7c38u);
    { uint32_t v = 0xA354u; push32(c, v); }
    // 0f7c3d  push 7
    X86_AT(c, 0xf7c3du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7c3f  call 0xe5654
    X86_AT(c, 0xf7c3fu);
    push32(c, 0xf7c44u); f_000e5654(c); X86_RET(c, 0xf7c44u);
    X86_TICK(c, 9);
    // 0f7c44  push 7
    X86_AT(c, 0xf7c44u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7c46  call 0xe6c68
    X86_AT(c, 0xf7c46u);
    push32(c, 0xf7c4bu); f_000e6c68(c); X86_RET(c, 0xf7c4bu);
    X86_TICK(c, 7);
    // 0f7c4b  call 0xf7fe0
    X86_AT(c, 0xf7c4bu);
    push32(c, 0xf7c50u); f_000f7fe0(c); X86_RET(c, 0xf7c50u);
    X86_TICK(c, 7);
    // 0f7c50  jmp 0xf7ca3
    X86_AT(c, 0xf7c50u);
    goto L_f7ca3;
L_f7c52:
    X86_TICK(c, 9);
    // 0f7c52  push 1
    X86_AT(c, 0xf7c52u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f7c54  call 0xe1944
    X86_AT(c, 0xf7c54u);
    push32(c, 0xf7c59u); f_000e1944(c); X86_RET(c, 0xf7c59u);
    X86_TICK(c, 11);
    // 0f7c59  push 0xa37c
    X86_AT(c, 0xf7c59u);
    { uint32_t v = 0xA37Cu; push32(c, v); }
    // 0f7c5e  push 7
    X86_AT(c, 0xf7c5eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7c60  call 0xe5654
    X86_AT(c, 0xf7c60u);
    push32(c, 0xf7c65u); f_000e5654(c); X86_RET(c, 0xf7c65u);
    X86_TICK(c, 9);
    // 0f7c65  push 7
    X86_AT(c, 0xf7c65u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7c67  call 0xe6c68
    X86_AT(c, 0xf7c67u);
    push32(c, 0xf7c6cu); f_000e6c68(c); X86_RET(c, 0xf7c6cu);
    X86_TICK(c, 9);
    // 0f7c6c  add esp, 0x10
    X86_AT(c, 0xf7c6cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f7c6f  jmp 0xf7ca6
    X86_AT(c, 0xf7c6fu);
    goto L_f7ca6;
L_f7c71:
    X86_TICK(c, 7);
    // 0f7c71  call 0xe2c18
    X86_AT(c, 0xf7c71u);
    push32(c, 0xf7c76u); f_000e2c18(c); X86_RET(c, 0xf7c76u);
    X86_TICK(c, 30);
    // 0f7c76  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7c76u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7c7b  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7c7bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7c7e  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7c7eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7c81  shl edx, 5
    X86_AT(c, 0xf7c81u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7c84  sub edx, eax
    X86_AT(c, 0xf7c84u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7c86  push dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf7c86u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))); push32(c, v); }
    // 0f7c8c  push dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf7c8cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))); push32(c, v); }
    // 0f7c92  call 0xe305c
    X86_AT(c, 0xf7c92u);
    push32(c, 0xf7c97u); f_000e305c(c); X86_RET(c, 0xf7c97u);
    X86_TICK(c, 7);
    // 0f7c97  call 0xe2ea0
    X86_AT(c, 0xf7c97u);
    push32(c, 0xf7c9cu); f_000e2ea0(c); X86_RET(c, 0xf7c9cu);
    X86_TICK(c, 9);
    // 0f7c9c  push 1
    X86_AT(c, 0xf7c9cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f7c9e  call 0xe1a9c
    X86_AT(c, 0xf7c9eu);
    push32(c, 0xf7ca3u); f_000e1a9c(c); X86_RET(c, 0xf7ca3u);
L_f7ca3:
    X86_TICK(c, 2);
    // 0f7ca3  add esp, 0xc
    X86_AT(c, 0xf7ca3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_f7ca6:
    X86_TICK(c, 14);
    // 0f7ca6  pop ebx
    X86_AT(c, 0xf7ca6u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f7ca7  ret 
    X86_AT(c, 0xf7ca7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf79f8u, "ran off the end of a function");
}
void f_000f7ca8(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0f7ca8  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7ca8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7cad  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7cadu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7cb0  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7cb0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7cb3  shl edx, 5
    X86_AT(c, 0xf7cb3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7cb6  sub edx, eax
    X86_AT(c, 0xf7cb6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7cb8  push dword ptr [edx + 0xcde99]
    X86_AT(c, 0xf7cb8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u))); push32(c, v); }
    // 0f7cbe  call 0xe3b24
    X86_AT(c, 0xf7cbeu);
    push32(c, 0xf7cc3u); f_000e3b24(c); X86_RET(c, 0xf7cc3u);
    X86_TICK(c, 25);
    // 0f7cc3  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7cc3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7cc8  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7cc8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7ccb  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7ccbu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7cce  shl edx, 5
    X86_AT(c, 0xf7cceu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7cd1  sub edx, eax
    X86_AT(c, 0xf7cd1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7cd3  push dword ptr [edx + 0xcde99]
    X86_AT(c, 0xf7cd3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u))); push32(c, v); }
    // 0f7cd9  call 0xfd76c
    X86_AT(c, 0xf7cd9u);
    push32(c, 0xf7cdeu); f_000fd76c(c); X86_RET(c, 0xf7cdeu);
    X86_TICK(c, 22);
    // 0f7cde  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7cdeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7ce3  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7ce3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7ce6  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7ce6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7ce9  shl edx, 5
    X86_AT(c, 0xf7ce9u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7cec  sub edx, eax
    X86_AT(c, 0xf7cecu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7cee  mov dword ptr [edx + 0xcdf57], 4
    X86_AT(c, 0xf7ceeu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u)), 0x4u);
    // 0f7cf8  call 0xe3974
    X86_AT(c, 0xf7cf8u);
    push32(c, 0xf7cfdu); f_000e3974(c); X86_RET(c, 0xf7cfdu);
    X86_TICK(c, 30);
    // 0f7cfd  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7cfdu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7d02  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7d02u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7d05  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7d05u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7d08  shl edx, 5
    X86_AT(c, 0xf7d08u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7d0b  sub edx, eax
    X86_AT(c, 0xf7d0bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7d0d  push dword ptr [edx + 0xcdf57]
    X86_AT(c, 0xf7d0du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))); push32(c, v); }
    // 0f7d13  push dword ptr [edx + 0xcde99]
    X86_AT(c, 0xf7d13u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u))); push32(c, v); }
    // 0f7d19  call 0xf3c40
    X86_AT(c, 0xf7d19u);
    push32(c, 0xf7d1eu); f_000f3c40(c); X86_RET(c, 0xf7d1eu);
    X86_TICK(c, 7);
    // 0f7d1e  call 0xfa748
    X86_AT(c, 0xf7d1eu);
    push32(c, 0xf7d23u); f_000fa748(c); X86_RET(c, 0xf7d23u);
    X86_TICK(c, 12);
    // 0f7d23  add esp, 0x10
    X86_AT(c, 0xf7d23u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0f7d26  ret 
    X86_AT(c, 0xf7d26u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf7ca8u, "ran off the end of a function");
}
void f_000f7d28(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0f7d28  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7d28u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7d2d  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7d2du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7d30  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7d30u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7d33  shl edx, 5
    X86_AT(c, 0xf7d33u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7d36  sub edx, eax
    X86_AT(c, 0xf7d36u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7d38  push dword ptr [edx + 0xcde99]
    X86_AT(c, 0xf7d38u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u))); push32(c, v); }
    // 0f7d3e  call 0xe3b24
    X86_AT(c, 0xf7d3eu);
    push32(c, 0xf7d43u); f_000e3b24(c); X86_RET(c, 0xf7d43u);
    X86_TICK(c, 25);
    // 0f7d43  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7d43u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7d48  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7d48u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7d4b  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7d4bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7d4e  shl edx, 5
    X86_AT(c, 0xf7d4eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7d51  sub edx, eax
    X86_AT(c, 0xf7d51u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7d53  push dword ptr [edx + 0xcde99]
    X86_AT(c, 0xf7d53u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u))); push32(c, v); }
    // 0f7d59  call 0xfd76c
    X86_AT(c, 0xf7d59u);
    push32(c, 0xf7d5eu); f_000fd76c(c); X86_RET(c, 0xf7d5eu);
    X86_TICK(c, 38);
    // 0f7d5e  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7d5eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7d63  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7d63u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7d66  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7d66u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7d69  shl edx, 5
    X86_AT(c, 0xf7d69u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7d6c  sub edx, eax
    X86_AT(c, 0xf7d6cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7d6e  mov eax, dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf7d6eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)));
    // 0f7d74  mov dword ptr [edx + 0xcdf5b], eax
    X86_AT(c, 0xf7d74u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF5Bu)), c.r[0]);
    // 0f7d7a  mov eax, dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf7d7au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)));
    // 0f7d80  mov dword ptr [edx + 0xcdf5f], eax
    X86_AT(c, 0xf7d80u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF5Fu)), c.r[0]);
    // 0f7d86  mov dword ptr [edx + 0xcdf6b], 0x1f
    X86_AT(c, 0xf7d86u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)), 0x1Fu);
    // 0f7d90  mov dword ptr [edx + 0xcdf6f], 0x3e
    X86_AT(c, 0xf7d90u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)), 0x3Eu);
    // 0f7d9a  mov dword ptr [0xcda6c], 0xffffffff
    X86_AT(c, 0xf7d9au);
    wr32((c.sbase[3] + (uint32_t)(0xCDA6Cu)), 0xFFFFFFFFu);
    // 0f7da4  call 0xe2a20
    X86_AT(c, 0xf7da4u);
    push32(c, 0xf7da9u); f_000e2a20(c); X86_RET(c, 0xf7da9u);
    X86_TICK(c, 7);
    // 0f7da9  call 0xe3974
    X86_AT(c, 0xf7da9u);
    push32(c, 0xf7daeu); f_000e3974(c); X86_RET(c, 0xf7daeu);
    X86_TICK(c, 31);
    // 0f7dae  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7daeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7db3  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7db3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7db6  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7db6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7db9  shl edx, 5
    X86_AT(c, 0xf7db9u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7dbc  sub edx, eax
    X86_AT(c, 0xf7dbcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7dbe  mov eax, 1
    X86_AT(c, 0xf7dbeu);
    c.r[0] = 0x1u;
    // 0f7dc3  mov dword ptr [edx + 0xcdf57], eax
    X86_AT(c, 0xf7dc3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u)), c.r[0]);
    // 0f7dc9  push eax
    X86_AT(c, 0xf7dc9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f7dca  push dword ptr [edx + 0xcde99]
    X86_AT(c, 0xf7dcau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u))); push32(c, v); }
    // 0f7dd0  call 0xf3c40
    X86_AT(c, 0xf7dd0u);
    push32(c, 0xf7dd5u); f_000f3c40(c); X86_RET(c, 0xf7dd5u);
    X86_TICK(c, 9);
    // 0f7dd5  push 9
    X86_AT(c, 0xf7dd5u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0f7dd7  call 0xe3188
    X86_AT(c, 0xf7dd7u);
    push32(c, 0xf7ddcu); f_000e3188(c); X86_RET(c, 0xf7ddcu);
    X86_TICK(c, 12);
    // 0f7ddc  add esp, 0x14
    X86_AT(c, 0xf7ddcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0f7ddf  ret 
    X86_AT(c, 0xf7ddfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf7d28u, "ran off the end of a function");
}
void f_000f7de0(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0f7de0  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7de0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7de5  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7de5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7de8  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7de8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7deb  shl edx, 5
    X86_AT(c, 0xf7debu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7dee  sub edx, eax
    X86_AT(c, 0xf7deeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7df0  push dword ptr [edx + 0xcde99]
    X86_AT(c, 0xf7df0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u))); push32(c, v); }
    // 0f7df6  call 0xe3b24
    X86_AT(c, 0xf7df6u);
    push32(c, 0xf7dfbu); f_000e3b24(c); X86_RET(c, 0xf7dfbu);
    X86_TICK(c, 25);
    // 0f7dfb  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7dfbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7e00  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7e00u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7e03  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7e03u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7e06  shl edx, 5
    X86_AT(c, 0xf7e06u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7e09  sub edx, eax
    X86_AT(c, 0xf7e09u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7e0b  push dword ptr [edx + 0xcde99]
    X86_AT(c, 0xf7e0bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u))); push32(c, v); }
    // 0f7e11  call 0xfd76c
    X86_AT(c, 0xf7e11u);
    push32(c, 0xf7e16u); f_000fd76c(c); X86_RET(c, 0xf7e16u);
    X86_TICK(c, 9);
    // 0f7e16  push 7
    X86_AT(c, 0xf7e16u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7e18  call 0xe693c
    X86_AT(c, 0xf7e18u);
    push32(c, 0xf7e1du); f_000e693c(c); X86_RET(c, 0xf7e1du);
    X86_TICK(c, 38);
    // 0f7e1d  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7e1du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7e22  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7e22u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7e25  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7e25u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7e28  shl edx, 5
    X86_AT(c, 0xf7e28u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7e2b  sub edx, eax
    X86_AT(c, 0xf7e2bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7e2d  mov eax, dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf7e2du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)));
    // 0f7e33  mov dword ptr [edx + 0xcdf5b], eax
    X86_AT(c, 0xf7e33u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF5Bu)), c.r[0]);
    // 0f7e39  mov eax, dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf7e39u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)));
    // 0f7e3f  mov dword ptr [edx + 0xcdf5f], eax
    X86_AT(c, 0xf7e3fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF5Fu)), c.r[0]);
    // 0f7e45  mov dword ptr [edx + 0xcdf6b], 0x1f
    X86_AT(c, 0xf7e45u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)), 0x1Fu);
    // 0f7e4f  mov dword ptr [edx + 0xcdf6f], 0x3e
    X86_AT(c, 0xf7e4fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)), 0x3Eu);
    // 0f7e59  mov dword ptr [0xcda6c], 0xffffffff
    X86_AT(c, 0xf7e59u);
    wr32((c.sbase[3] + (uint32_t)(0xCDA6Cu)), 0xFFFFFFFFu);
    // 0f7e63  call 0xe2a20
    X86_AT(c, 0xf7e63u);
    push32(c, 0xf7e68u); f_000e2a20(c); X86_RET(c, 0xf7e68u);
    X86_TICK(c, 7);
    // 0f7e68  call 0xe3974
    X86_AT(c, 0xf7e68u);
    push32(c, 0xf7e6du); f_000e3974(c); X86_RET(c, 0xf7e6du);
    X86_TICK(c, 31);
    // 0f7e6d  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7e6du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7e72  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7e72u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7e75  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7e75u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7e78  shl edx, 5
    X86_AT(c, 0xf7e78u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7e7b  sub edx, eax
    X86_AT(c, 0xf7e7bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7e7d  mov eax, 3
    X86_AT(c, 0xf7e7du);
    c.r[0] = 0x3u;
    // 0f7e82  mov dword ptr [edx + 0xcdf57], eax
    X86_AT(c, 0xf7e82u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u)), c.r[0]);
    // 0f7e88  push eax
    X86_AT(c, 0xf7e88u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f7e89  push dword ptr [edx + 0xcde99]
    X86_AT(c, 0xf7e89u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u))); push32(c, v); }
    // 0f7e8f  call 0xf3c40
    X86_AT(c, 0xf7e8fu);
    push32(c, 0xf7e94u); f_000f3c40(c); X86_RET(c, 0xf7e94u);
    X86_TICK(c, 9);
    // 0f7e94  push 6
    X86_AT(c, 0xf7e94u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f7e96  call 0xe3188
    X86_AT(c, 0xf7e96u);
    push32(c, 0xf7e9bu); f_000e3188(c); X86_RET(c, 0xf7e9bu);
    X86_TICK(c, 12);
    // 0f7e9b  add esp, 0x18
    X86_AT(c, 0xf7e9bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0f7e9e  ret 
    X86_AT(c, 0xf7e9eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf7de0u, "ran off the end of a function");
}
void f_000f7ea0(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0f7ea0  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7ea0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7ea5  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7ea5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7ea8  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7ea8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7eab  shl edx, 5
    X86_AT(c, 0xf7eabu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7eae  sub edx, eax
    X86_AT(c, 0xf7eaeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7eb0  push dword ptr [edx + 0xcde99]
    X86_AT(c, 0xf7eb0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u))); push32(c, v); }
    // 0f7eb6  call 0xe3b24
    X86_AT(c, 0xf7eb6u);
    push32(c, 0xf7ebbu); f_000e3b24(c); X86_RET(c, 0xf7ebbu);
    X86_TICK(c, 25);
    // 0f7ebb  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7ebbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7ec0  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7ec0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7ec3  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7ec3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7ec6  shl edx, 5
    X86_AT(c, 0xf7ec6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7ec9  sub edx, eax
    X86_AT(c, 0xf7ec9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7ecb  push dword ptr [edx + 0xcde99]
    X86_AT(c, 0xf7ecbu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u))); push32(c, v); }
    // 0f7ed1  call 0xfd76c
    X86_AT(c, 0xf7ed1u);
    push32(c, 0xf7ed6u); f_000fd76c(c); X86_RET(c, 0xf7ed6u);
    X86_TICK(c, 9);
    // 0f7ed6  push 7
    X86_AT(c, 0xf7ed6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f7ed8  call 0xe693c
    X86_AT(c, 0xf7ed8u);
    push32(c, 0xf7eddu); f_000e693c(c); X86_RET(c, 0xf7eddu);
    X86_TICK(c, 38);
    // 0f7edd  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7eddu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7ee2  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7ee2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7ee5  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7ee5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7ee8  shl edx, 5
    X86_AT(c, 0xf7ee8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7eeb  sub edx, eax
    X86_AT(c, 0xf7eebu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7eed  mov eax, dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xf7eedu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)));
    // 0f7ef3  mov dword ptr [edx + 0xcdf5b], eax
    X86_AT(c, 0xf7ef3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF5Bu)), c.r[0]);
    // 0f7ef9  mov eax, dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xf7ef9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)));
    // 0f7eff  mov dword ptr [edx + 0xcdf5f], eax
    X86_AT(c, 0xf7effu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF5Fu)), c.r[0]);
    // 0f7f05  mov dword ptr [edx + 0xcdf6b], 0x1f
    X86_AT(c, 0xf7f05u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)), 0x1Fu);
    // 0f7f0f  mov dword ptr [edx + 0xcdf6f], 0x3e
    X86_AT(c, 0xf7f0fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)), 0x3Eu);
    // 0f7f19  mov dword ptr [0xcda6c], 0xffffffff
    X86_AT(c, 0xf7f19u);
    wr32((c.sbase[3] + (uint32_t)(0xCDA6Cu)), 0xFFFFFFFFu);
    // 0f7f23  call 0xe2a20
    X86_AT(c, 0xf7f23u);
    push32(c, 0xf7f28u); f_000e2a20(c); X86_RET(c, 0xf7f28u);
    X86_TICK(c, 7);
    // 0f7f28  call 0xe3974
    X86_AT(c, 0xf7f28u);
    push32(c, 0xf7f2du); f_000e3974(c); X86_RET(c, 0xf7f2du);
    X86_TICK(c, 31);
    // 0f7f2d  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf7f2du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f7f32  lea edx, [eax + eax*4]
    X86_AT(c, 0xf7f32u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f7f35  lea edx, [eax + edx*2]
    X86_AT(c, 0xf7f35u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f7f38  shl edx, 5
    X86_AT(c, 0xf7f38u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f7f3b  sub edx, eax
    X86_AT(c, 0xf7f3bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f7f3d  mov eax, 2
    X86_AT(c, 0xf7f3du);
    c.r[0] = 0x2u;
    // 0f7f42  mov dword ptr [edx + 0xcdf57], eax
    X86_AT(c, 0xf7f42u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u)), c.r[0]);
    // 0f7f48  push eax
    X86_AT(c, 0xf7f48u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f7f49  push dword ptr [edx + 0xcde99]
    X86_AT(c, 0xf7f49u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u))); push32(c, v); }
    // 0f7f4f  call 0xf3c40
    X86_AT(c, 0xf7f4fu);
    push32(c, 0xf7f54u); f_000f3c40(c); X86_RET(c, 0xf7f54u);
    X86_TICK(c, 9);
    // 0f7f54  push 8
    X86_AT(c, 0xf7f54u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0f7f56  call 0xe3188
    X86_AT(c, 0xf7f56u);
    push32(c, 0xf7f5bu); f_000e3188(c); X86_RET(c, 0xf7f5bu);
    X86_TICK(c, 12);
    // 0f7f5b  add esp, 0x18
    X86_AT(c, 0xf7f5bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0f7f5e  ret 
    X86_AT(c, 0xf7f5eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf7ea0u, "ran off the end of a function");
}
}
