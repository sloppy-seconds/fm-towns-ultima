#include "p_game_funcs.h"
namespace p_game {
void f_000b75c0(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0b75c0  push ebx
    X86_AT(c, 0xb75c0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b75c1  push esi
    X86_AT(c, 0xb75c1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b75c2  push edi
    X86_AT(c, 0xb75c2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b75c3  cmp byte ptr [0xa4a49], 0x82
    X86_AT(c, 0xb75c3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xA4A49u))), 0x82u, 0, 1);
    // 0b75ca  jne 0xb75d6
    X86_AT(c, 0xb75cau);
    if (x86_cc(c, 5)) { goto L_b75d6; }
    X86_TICK(c, 9);
    // 0b75cc  mov esi, 0x9a
    X86_AT(c, 0xb75ccu);
    c.r[6] = 0x9Au;
    // 0b75d1  jmp 0xb770e
    X86_AT(c, 0xb75d1u);
    goto L_b770e;
L_b75d6:
    X86_TICK(c, 12);
    // 0b75d6  cmp byte ptr [0xa4a49], 0x81
    X86_AT(c, 0xb75d6u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xA4A49u))), 0x81u, 0, 1);
    // 0b75dd  jne 0xb75e9
    X86_AT(c, 0xb75ddu);
    if (x86_cc(c, 5)) { goto L_b75e9; }
    X86_TICK(c, 9);
    // 0b75df  mov esi, 0x9e
    X86_AT(c, 0xb75dfu);
    c.r[6] = 0x9Eu;
    // 0b75e4  jmp 0xb770e
    X86_AT(c, 0xb75e4u);
    goto L_b770e;
L_b75e9:
    X86_TICK(c, 2);
    // 0b75e9  sub edi, edi
    X86_AT(c, 0xb75e9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_b75eb:
    X86_TICK(c, 7);
    // 0b75eb  cmp edi, 4
    X86_AT(c, 0xb75ebu);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0b75ee  jge 0xb760e
    X86_AT(c, 0xb75eeu);
    if (x86_cc(c, 13)) { goto L_b760e; }
    X86_TICK(c, 17);
    // 0b75f0  lea eax, [edi + edi*2]
    X86_AT(c, 0xb75f0u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0b75f3  lea edx, [eax*8]
    X86_AT(c, 0xb75f3u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0b75fa  lea edx, [eax + edx*8]
    X86_AT(c, 0xb75fau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0b75fd  mov al, byte ptr [edx + 0xa4abd]
    X86_AT(c, 0xb75fdu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu))));
    // 0b7603  cmp al, 0x47
    X86_AT(c, 0xb7603u);
    (void)x86_sub(c, g8(c, 0), 0x47u, 0, 1);
    // 0b7605  je 0xb760e
    X86_AT(c, 0xb7605u);
    if (x86_cc(c, 4)) { goto L_b760e; }
    X86_TICK(c, 7);
    // 0b7607  cmp al, 0x50
    X86_AT(c, 0xb7607u);
    (void)x86_sub(c, g8(c, 0), 0x50u, 0, 1);
    // 0b7609  je 0xb760e
    X86_AT(c, 0xb7609u);
    if (x86_cc(c, 4)) { goto L_b760e; }
    X86_TICK(c, 9);
    // 0b760b  inc edi
    X86_AT(c, 0xb760bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0b760c  jmp 0xb75eb
    X86_AT(c, 0xb760cu);
    X86_POLL(c, 0xb75ebu); goto L_b75eb;
L_b760e:
    X86_TICK(c, 7);
    // 0b760e  cmp edi, 3
    X86_AT(c, 0xb760eu);
    (void)x86_sub(c, c.r[7], 0x3u, 0, 4);
    // 0b7611  jle 0xb7615
    X86_AT(c, 0xb7611u);
    if (x86_cc(c, 14)) { goto L_b7615; }
    X86_TICK(c, 2);
    // 0b7613  sub edi, edi
    X86_AT(c, 0xb7613u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_b7615:
    X86_TICK(c, 24);
    // 0b7615  lea eax, [edi + edi*2]
    X86_AT(c, 0xb7615u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0b7618  lea edx, [eax*8]
    X86_AT(c, 0xb7618u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0b761f  lea edx, [eax + edx*8]
    X86_AT(c, 0xb761fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0b7622  movzx eax, byte ptr [edx + 0xa4acf]
    X86_AT(c, 0xb7622u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ACFu)));
    // 0b7629  xchg edx, eax
    X86_AT(c, 0xb7629u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0b762a  sub edx, 0x41
    X86_AT(c, 0xb762au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x41u, 0, 4); }
    // 0b762d  cmp edx, 0x16
    X86_AT(c, 0xb762du);
    (void)x86_sub(c, c.r[2], 0x16u, 0, 4);
    // 0b7630  ja 0xb76e4
    X86_AT(c, 0xb7630u);
    if (x86_cc(c, 7)) { goto L_b76e4; }
    X86_TICK(c, 7);
    // 0b7636  jmp dword ptr cs:[edx*4 + 0xb763e]
    X86_AT(c, 0xb7636u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xB763Eu)));
      switch (t) {
      case 0xb769au: goto L_b769a;
      case 0xb76a1u: goto L_b76a1;
      case 0xb76a8u: goto L_b76a8;
      case 0xb76afu: goto L_b76af;
      case 0xb76b6u: goto L_b76b6;
      case 0xb76bau: goto L_b76ba;
      case 0xb76c1u: goto L_b76c1;
      case 0xb76c8u: goto L_b76c8;
      case 0xb76cfu: goto L_b76cf;
      case 0xb76d6u: goto L_b76d6;
      case 0xb76ddu: goto L_b76dd;
      case 0xb76e4u: goto L_b76e4;
      default: x86_jump(c, t); return; } }
L_b769a:
    X86_TICK(c, 9);
    // 0b769a  mov esi, 0x24
    X86_AT(c, 0xb769au);
    c.r[6] = 0x24u;
    // 0b769f  jmp 0xb76e9
    X86_AT(c, 0xb769fu);
    goto L_b76e9;
L_b76a1:
    X86_TICK(c, 9);
    // 0b76a1  mov esi, 0x14
    X86_AT(c, 0xb76a1u);
    c.r[6] = 0x14u;
    // 0b76a6  jmp 0xb76e9
    X86_AT(c, 0xb76a6u);
    goto L_b76e9;
L_b76a8:
    X86_TICK(c, 9);
    // 0b76a8  mov esi, 4
    X86_AT(c, 0xb76a8u);
    c.r[6] = 0x4u;
    // 0b76ad  jmp 0xb76e9
    X86_AT(c, 0xb76adu);
    goto L_b76e9;
L_b76af:
    X86_TICK(c, 9);
    // 0b76af  mov esi, 0x20
    X86_AT(c, 0xb76afu);
    c.r[6] = 0x20u;
    // 0b76b4  jmp 0xb76e9
    X86_AT(c, 0xb76b4u);
    goto L_b76e9;
L_b76b6:
    X86_TICK(c, 9);
    // 0b76b6  sub esi, esi
    X86_AT(c, 0xb76b6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0b76b8  jmp 0xb76e9
    X86_AT(c, 0xb76b8u);
    goto L_b76e9;
L_b76ba:
    X86_TICK(c, 9);
    // 0b76ba  mov esi, 0x1c
    X86_AT(c, 0xb76bau);
    c.r[6] = 0x1Cu;
    // 0b76bf  jmp 0xb76e9
    X86_AT(c, 0xb76bfu);
    goto L_b76e9;
L_b76c1:
    X86_TICK(c, 9);
    // 0b76c1  mov esi, 0x18
    X86_AT(c, 0xb76c1u);
    c.r[6] = 0x18u;
    // 0b76c6  jmp 0xb76e9
    X86_AT(c, 0xb76c6u);
    goto L_b76e9;
L_b76c8:
    X86_TICK(c, 9);
    // 0b76c8  mov esi, 0x10
    X86_AT(c, 0xb76c8u);
    c.r[6] = 0x10u;
    // 0b76cd  jmp 0xb76e9
    X86_AT(c, 0xb76cdu);
    goto L_b76e9;
L_b76cf:
    X86_TICK(c, 9);
    // 0b76cf  mov esi, 0x28
    X86_AT(c, 0xb76cfu);
    c.r[6] = 0x28u;
    // 0b76d4  jmp 0xb76e9
    X86_AT(c, 0xb76d4u);
    goto L_b76e9;
L_b76d6:
    X86_TICK(c, 9);
    // 0b76d6  mov esi, 0xc
    X86_AT(c, 0xb76d6u);
    c.r[6] = 0xCu;
    // 0b76db  jmp 0xb76e9
    X86_AT(c, 0xb76dbu);
    goto L_b76e9;
L_b76dd:
    X86_TICK(c, 9);
    // 0b76dd  mov esi, 8
    X86_AT(c, 0xb76ddu);
    c.r[6] = 0x8u;
    // 0b76e2  jmp 0xb76e9
    X86_AT(c, 0xb76e2u);
    goto L_b76e9;
L_b76e4:
    X86_TICK(c, 2);
    // 0b76e4  mov esi, 0x6a
    X86_AT(c, 0xb76e4u);
    c.r[6] = 0x6Au;
L_b76e9:
    X86_TICK(c, 20);
    // 0b76e9  mov ebx, 0x9d
    X86_AT(c, 0xb76e9u);
    c.r[3] = 0x9Du;
    // 0b76ee  lea eax, [edi + edi*2]
    X86_AT(c, 0xb76eeu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0b76f1  lea edx, [eax*8]
    X86_AT(c, 0xb76f1u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0b76f8  lea edx, [eax + edx*8]
    X86_AT(c, 0xb76f8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0b76fb  cmp byte ptr [edx + 0xa4ad0], 0x46
    X86_AT(c, 0xb76fbu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD0u))), 0x46u, 0, 1);
    // 0b7702  jne 0xb7707
    X86_AT(c, 0xb7702u);
    if (x86_cc(c, 5)) { goto L_b7707; }
    X86_TICK(c, 2);
    // 0b7704  add esi, 2
    X86_AT(c, 0xb7704u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
L_b7707:
    X86_TICK(c, 4);
    // 0b7707  mov eax, ebx
    X86_AT(c, 0xb7707u);
    c.r[0] = c.r[3];
    // 0b7709  mov byte ptr [0xa4a49], al
    X86_AT(c, 0xb7709u);
    wr8((c.sbase[3] + (uint32_t)(0xA4A49u)), g8(c, 0));
L_b770e:
    X86_TICK(c, 21);
    // 0b770e  mov dword ptr [0x45990], 1
    X86_AT(c, 0xb770eu);
    wr32((c.sbase[3] + (uint32_t)(0x45990u)), 0x1u);
    // 0b7718  mov eax, 5
    X86_AT(c, 0xb7718u);
    c.r[0] = 0x5u;
    // 0b771d  mov dword ptr [0x45994], eax
    X86_AT(c, 0xb771du);
    wr32((c.sbase[3] + (uint32_t)(0x45994u)), c.r[0]);
    // 0b7722  mov dword ptr [0x45998], eax
    X86_AT(c, 0xb7722u);
    wr32((c.sbase[3] + (uint32_t)(0x45998u)), c.r[0]);
    // 0b7727  mov dword ptr [0x4599c], esi
    X86_AT(c, 0xb7727u);
    wr32((c.sbase[3] + (uint32_t)(0x4599Cu)), c.r[6]);
    // 0b772d  mov dword ptr [0x459a0], 0xffffffff
    X86_AT(c, 0xb772du);
    wr32((c.sbase[3] + (uint32_t)(0x459A0u)), 0xFFFFFFFFu);
    // 0b7737  mov dword ptr [0x45ed8], 1
    X86_AT(c, 0xb7737u);
    wr32((c.sbase[3] + (uint32_t)(0x45ED8u)), 0x1u);
    // 0b7741  call 0xb7818
    X86_AT(c, 0xb7741u);
    push32(c, 0xb7746u); x86_call_known(c, 0xb7818u, f_000b7818); X86_RET(c, 0xb7746u);
    X86_TICK(c, 22);
    // 0b7746  pop edi
    X86_AT(c, 0xb7746u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b7747  pop esi
    X86_AT(c, 0xb7747u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b7748  pop ebx
    X86_AT(c, 0xb7748u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0b7749  ret 
    X86_AT(c, 0xb7749u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb75c0u, "ran off the end of a function");
}
void f_000b770e(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0b770e  mov dword ptr [0x45990], 1
    X86_AT(c, 0xb770eu);
    wr32((c.sbase[3] + (uint32_t)(0x45990u)), 0x1u);
    // 0b7718  mov eax, 5
    X86_AT(c, 0xb7718u);
    c.r[0] = 0x5u;
    // 0b771d  mov dword ptr [0x45994], eax
    X86_AT(c, 0xb771du);
    wr32((c.sbase[3] + (uint32_t)(0x45994u)), c.r[0]);
    // 0b7722  mov dword ptr [0x45998], eax
    X86_AT(c, 0xb7722u);
    wr32((c.sbase[3] + (uint32_t)(0x45998u)), c.r[0]);
    // 0b7727  mov dword ptr [0x4599c], esi
    X86_AT(c, 0xb7727u);
    wr32((c.sbase[3] + (uint32_t)(0x4599Cu)), c.r[6]);
    // 0b772d  mov dword ptr [0x459a0], 0xffffffff
    X86_AT(c, 0xb772du);
    wr32((c.sbase[3] + (uint32_t)(0x459A0u)), 0xFFFFFFFFu);
    // 0b7737  mov dword ptr [0x45ed8], 1
    X86_AT(c, 0xb7737u);
    wr32((c.sbase[3] + (uint32_t)(0x45ED8u)), 0x1u);
    // 0b7741  call 0xb7818
    X86_AT(c, 0xb7741u);
    push32(c, 0xb7746u); x86_call_known(c, 0xb7818u, f_000b7818); X86_RET(c, 0xb7746u);
    X86_TICK(c, 22);
    // 0b7746  pop edi
    X86_AT(c, 0xb7746u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b7747  pop esi
    X86_AT(c, 0xb7747u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b7748  pop ebx
    X86_AT(c, 0xb7748u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0b7749  ret 
    X86_AT(c, 0xb7749u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb770eu, "ran off the end of a function");
}
void f_000b774c(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0b774c  push ebp
    X86_AT(c, 0xb774cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b774d  mov ebp, esp
    X86_AT(c, 0xb774du);
    c.r[5] = c.r[4];
    // 0b774f  push esi
    X86_AT(c, 0xb774fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b7750  push edi
    X86_AT(c, 0xb7750u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b7751  sub edi, edi
    X86_AT(c, 0xb7751u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_b7753:
    X86_TICK(c, 16);
    // 0b7753  lea eax, [edi*8]
    X86_AT(c, 0xb7753u);
    c.r[0] = (uint32_t)(c.r[7] * 8);
    // 0b775a  lea eax, [eax + eax*2]
    X86_AT(c, 0xb775au);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0b775d  cmp dword ptr [eax + 0x45990], 0
    X86_AT(c, 0xb775du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x45990u))), 0x0u, 0, 4);
    // 0b7764  je 0xb776e
    X86_AT(c, 0xb7764u);
    if (x86_cc(c, 4)) { goto L_b776e; }
    X86_TICK(c, 7);
    // 0b7766  cmp edi, 0x30
    X86_AT(c, 0xb7766u);
    (void)x86_sub(c, c.r[7], 0x30u, 0, 4);
    // 0b7769  jge 0xb776e
    X86_AT(c, 0xb7769u);
    if (x86_cc(c, 13)) { goto L_b776e; }
    X86_TICK(c, 9);
    // 0b776b  inc edi
    X86_AT(c, 0xb776bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0b776c  jmp 0xb7753
    X86_AT(c, 0xb776cu);
    X86_POLL(c, 0xb7753u); goto L_b7753;
L_b776e:
    X86_TICK(c, 7);
    // 0b776e  cmp edi, 0x30
    X86_AT(c, 0xb776eu);
    (void)x86_sub(c, c.r[7], 0x30u, 0, 4);
    // 0b7771  jl 0xb777a
    X86_AT(c, 0xb7771u);
    if (x86_cc(c, 12)) { goto L_b777a; }
    X86_TICK(c, 9);
    // 0b7773  sub eax, eax
    X86_AT(c, 0xb7773u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0b7775  jmp 0xb7812
    X86_AT(c, 0xb7775u);
    goto L_b7812;
L_b777a:
    X86_TICK(c, 28);
    // 0b777a  lea eax, [edi*8]
    X86_AT(c, 0xb777au);
    c.r[0] = (uint32_t)(c.r[7] * 8);
    // 0b7781  lea eax, [eax + eax*2]
    X86_AT(c, 0xb7781u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0b7784  mov dword ptr [eax + 0x45990], 1
    X86_AT(c, 0xb7784u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x45990u)), 0x1u);
    // 0b778e  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xb778eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0b7791  mov dword ptr [eax + 0x45994], edx
    X86_AT(c, 0xb7791u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x45994u)), c.r[2]);
    // 0b7797  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xb7797u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0b779a  mov dword ptr [eax + 0x45998], edx
    X86_AT(c, 0xb779au);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x45998u)), c.r[2]);
    // 0b77a0  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xb77a0u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0b77a3  mov dword ptr [eax + 0x4599c], edx
    X86_AT(c, 0xb77a3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4599Cu)), c.r[2]);
    // 0b77a9  mov esi, dword ptr [0x459a4]
    X86_AT(c, 0xb77a9u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x459A4u)));
L_b77af:
    X86_TICK(c, 13);
    // 0b77af  lea eax, [esi*8]
    X86_AT(c, 0xb77afu);
    c.r[0] = (uint32_t)(c.r[6] * 8);
    // 0b77b6  mov eax, dword ptr [eax + eax*2 + 0x459a4]
    X86_AT(c, 0xb77b6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[0] * 2 + 0x459A4u)));
    // 0b77bd  and eax, eax
    X86_AT(c, 0xb77bdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0b77bf  je 0xb77c4
    X86_AT(c, 0xb77bfu);
    if (x86_cc(c, 4)) { goto L_b77c4; }
    X86_TICK(c, 10);
    // 0b77c1  xchg esi, eax
    X86_AT(c, 0xb77c1u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0b77c2  jmp 0xb77af
    X86_AT(c, 0xb77c2u);
    X86_POLL(c, 0xb77afu); goto L_b77af;
L_b77c4:
    X86_TICK(c, 25);
    // 0b77c4  lea eax, [esi*8]
    X86_AT(c, 0xb77c4u);
    c.r[0] = (uint32_t)(c.r[6] * 8);
    // 0b77cb  lea eax, [eax + eax*2]
    X86_AT(c, 0xb77cbu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0b77ce  mov dword ptr [eax + 0x459a4], edi
    X86_AT(c, 0xb77ceu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x459A4u)), c.r[7]);
    // 0b77d4  lea eax, [edi*8]
    X86_AT(c, 0xb77d4u);
    c.r[0] = (uint32_t)(c.r[7] * 8);
    // 0b77db  lea eax, [eax + eax*2]
    X86_AT(c, 0xb77dbu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0b77de  sub edx, edx
    X86_AT(c, 0xb77deu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0b77e0  mov dword ptr [eax + 0x459a4], edx
    X86_AT(c, 0xb77e0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x459A4u)), c.r[2]);
    // 0b77e6  cmp edx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xb77e6u);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0, 4);
    // 0b77e9  je 0xb77f7
    X86_AT(c, 0xb77e9u);
    if (x86_cc(c, 4)) { goto L_b77f7; }
    X86_TICK(c, 9);
    // 0b77eb  mov dword ptr [eax + 0x459a0], 0xffffffff
    X86_AT(c, 0xb77ebu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x459A0u)), 0xFFFFFFFFu);
    // 0b77f5  jmp 0xb780b
    X86_AT(c, 0xb77f5u);
    goto L_b780b;
L_b77f7:
    X86_TICK(c, 6);
    // 0b77f7  lea eax, [edi*8]
    X86_AT(c, 0xb77f7u);
    c.r[0] = (uint32_t)(c.r[7] * 8);
    // 0b77fe  lea eax, [eax + eax*2]
    X86_AT(c, 0xb77feu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0b7801  mov dword ptr [eax + 0x459a0], 0
    X86_AT(c, 0xb7801u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x459A0u)), 0x0u);
L_b780b:
    X86_TICK(c, 7);
    // 0b780b  call 0xb7818
    X86_AT(c, 0xb780bu);
    push32(c, 0xb7810u); x86_call_known(c, 0xb7818u, f_000b7818); X86_RET(c, 0xb7810u);
    X86_TICK(c, 2);
    // 0b7810  mov eax, edi
    X86_AT(c, 0xb7810u);
    c.r[0] = c.r[7];
L_b7812:
    X86_TICK(c, 24);
    // 0b7812  pop edi
    X86_AT(c, 0xb7812u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b7813  pop esi
    X86_AT(c, 0xb7813u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b7814  leave 
    X86_AT(c, 0xb7814u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b7815  ret 
    X86_AT(c, 0xb7815u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb774cu, "ran off the end of a function");
}
void f_000b7818(X86Cpu& c) {
    X86_TICK(c, 50);
    // 0b7818  push ebp
    X86_AT(c, 0xb7818u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b7819  mov ebp, esp
    X86_AT(c, 0xb7819u);
    c.r[5] = c.r[4];
    // 0b781b  push eax
    X86_AT(c, 0xb781bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b781c  push ebx
    X86_AT(c, 0xb781cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b781d  push esi
    X86_AT(c, 0xb781du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b781e  push edi
    X86_AT(c, 0xb781eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b781f  sub esi, esi
    X86_AT(c, 0xb781fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0b7821  mov dword ptr [ebp - 4], esi
    X86_AT(c, 0xb7821u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[6]);
    // 0b7824  mov eax, 0x45658
    X86_AT(c, 0xb7824u);
    c.r[0] = 0x45658u;
    // 0b7829  lea ebx, [eax + 0xc]
    X86_AT(c, 0xb7829u);
    c.r[3] = (uint32_t)(c.r[0] + 0xCu);
    // 0b782c  add ebx, 4
    X86_AT(c, 0xb782cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b782f  mov edx, dword ptr [eax + 0x33c]
    X86_AT(c, 0xb782fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x33Cu)));
    // 0b7835  mov dword ptr [ebx], edx
    X86_AT(c, 0xb7835u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[2]);
    // 0b7837  add ebx, 4
    X86_AT(c, 0xb7837u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b783a  mov edx, dword ptr [eax + 0x340]
    X86_AT(c, 0xb783au);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x340u)));
    // 0b7840  mov dword ptr [ebx], edx
    X86_AT(c, 0xb7840u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[2]);
    // 0b7842  add ebx, 4
    X86_AT(c, 0xb7842u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b7845  mov edx, dword ptr [eax + 0x344]
    X86_AT(c, 0xb7845u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x344u)));
    // 0b784b  mov dword ptr [ebx], edx
    X86_AT(c, 0xb784bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[2]);
    // 0b784d  add ebx, 4
    X86_AT(c, 0xb784du);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b7850  mov edi, dword ptr [eax + 0x34c]
    X86_AT(c, 0xb7850u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x34Cu)));
L_b7856:
    X86_TICK(c, 7);
    // 0b7856  and edi, edi
    X86_AT(c, 0xb7856u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0b7858  je 0xb7897
    X86_AT(c, 0xb7858u);
    if (x86_cc(c, 4)) { goto L_b7897; }
    X86_TICK(c, 43);
    // 0b785a  mov eax, 0x45658
    X86_AT(c, 0xb785au);
    c.r[0] = 0x45658u;
    // 0b785f  lea edx, [edi*8]
    X86_AT(c, 0xb785fu);
    c.r[2] = (uint32_t)(c.r[7] * 8);
    // 0b7866  lea edx, [edx + edx*2]
    X86_AT(c, 0xb7866u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0b7869  mov ecx, dword ptr [eax + edx*1 + 0x33c]
    X86_AT(c, 0xb7869u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x33Cu)));
    // 0b7870  mov dword ptr [ebx], ecx
    X86_AT(c, 0xb7870u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[1]);
    // 0b7872  add ebx, 4
    X86_AT(c, 0xb7872u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b7875  mov ecx, dword ptr [eax + edx*1 + 0x340]
    X86_AT(c, 0xb7875u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x340u)));
    // 0b787c  mov dword ptr [ebx], ecx
    X86_AT(c, 0xb787cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[1]);
    // 0b787e  add ebx, 4
    X86_AT(c, 0xb787eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b7881  mov ecx, dword ptr [eax + edx*1 + 0x344]
    X86_AT(c, 0xb7881u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x344u)));
    // 0b7888  mov dword ptr [ebx], ecx
    X86_AT(c, 0xb7888u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[1]);
    // 0b788a  add ebx, 4
    X86_AT(c, 0xb788au);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b788d  inc esi
    X86_AT(c, 0xb788du);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0b788e  mov edi, dword ptr [eax + edx*1 + 0x34c]
    X86_AT(c, 0xb788eu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x34Cu)));
    // 0b7895  jmp 0xb7856
    X86_AT(c, 0xb7895u);
    X86_POLL(c, 0xb7856u); goto L_b7856;
L_b7897:
    X86_TICK(c, 32);
    // 0b7897  lea eax, [esi + 1]
    X86_AT(c, 0xb7897u);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 0b789a  mov dword ptr [0x45664], eax
    X86_AT(c, 0xb789au);
    wr32((c.sbase[3] + (uint32_t)(0x45664u)), c.r[0]);
    // 0b789f  pop edi
    X86_AT(c, 0xb789fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b78a0  pop esi
    X86_AT(c, 0xb78a0u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b78a1  pop ebx
    X86_AT(c, 0xb78a1u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0b78a2  leave 
    X86_AT(c, 0xb78a2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b78a3  ret 
    X86_AT(c, 0xb78a3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb7818u, "ran off the end of a function");
}
void f_000b78a4(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0b78a4  push ebp
    X86_AT(c, 0xb78a4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b78a5  mov ebp, esp
    X86_AT(c, 0xb78a5u);
    c.r[5] = c.r[4];
    // 0b78a7  push esi
    X86_AT(c, 0xb78a7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b78a8  push edi
    X86_AT(c, 0xb78a8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b78a9  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xb78a9u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0b78ac  lea eax, [edi*8]
    X86_AT(c, 0xb78acu);
    c.r[0] = (uint32_t)(c.r[7] * 8);
    // 0b78b3  lea eax, [eax + eax*2]
    X86_AT(c, 0xb78b3u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0b78b6  mov dword ptr [eax + 0x45990], 0
    X86_AT(c, 0xb78b6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x45990u)), 0x0u);
    // 0b78c0  mov esi, dword ptr [0x459a4]
    X86_AT(c, 0xb78c0u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x459A4u)));
L_b78c6:
    X86_TICK(c, 15);
    // 0b78c6  lea eax, [esi*8]
    X86_AT(c, 0xb78c6u);
    c.r[0] = (uint32_t)(c.r[6] * 8);
    // 0b78cd  lea eax, [eax + eax*2]
    X86_AT(c, 0xb78cdu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0b78d0  cmp edi, dword ptr [eax + 0x459a4]
    X86_AT(c, 0xb78d0u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x459A4u))), 0, 4);
    // 0b78d6  je 0xb7900
    X86_AT(c, 0xb78d6u);
    if (x86_cc(c, 4)) { goto L_b7900; }
    X86_TICK(c, 7);
    // 0b78d8  and edi, edi
    X86_AT(c, 0xb78d8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0b78da  jl 0xb78e1
    X86_AT(c, 0xb78dau);
    if (x86_cc(c, 12)) { goto L_b78e1; }
    X86_TICK(c, 7);
    // 0b78dc  cmp edi, 0x30
    X86_AT(c, 0xb78dcu);
    (void)x86_sub(c, c.r[7], 0x30u, 0, 4);
    // 0b78df  jl 0xb78ee
    X86_AT(c, 0xb78dfu);
    if (x86_cc(c, 12)) { goto L_b78ee; }
L_b78e1:
    X86_TICK(c, 9);
    // 0b78e1  push 0x1ed8
    X86_AT(c, 0xb78e1u);
    { uint32_t v = 0x1ED8u; push32(c, v); }
    // 0b78e6  call 0xbc50c
    X86_AT(c, 0xb78e6u);
    push32(c, 0xb78ebu); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xb78ebu);
    X86_TICK(c, 2);
    // 0b78eb  add esp, 4
    X86_AT(c, 0xb78ebu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_b78ee:
    X86_TICK(c, 15);
    // 0b78ee  lea eax, [esi*8]
    X86_AT(c, 0xb78eeu);
    c.r[0] = (uint32_t)(c.r[6] * 8);
    // 0b78f5  lea eax, [eax + eax*2]
    X86_AT(c, 0xb78f5u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0b78f8  mov esi, dword ptr [eax + 0x459a4]
    X86_AT(c, 0xb78f8u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x459A4u)));
    // 0b78fe  jmp 0xb78c6
    X86_AT(c, 0xb78feu);
    X86_POLL(c, 0xb78c6u); goto L_b78c6;
L_b7900:
    X86_TICK(c, 21);
    // 0b7900  lea eax, [edi*8]
    X86_AT(c, 0xb7900u);
    c.r[0] = (uint32_t)(c.r[7] * 8);
    // 0b7907  lea eax, [eax + eax*2]
    X86_AT(c, 0xb7907u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0b790a  lea edx, [esi*8]
    X86_AT(c, 0xb790au);
    c.r[2] = (uint32_t)(c.r[6] * 8);
    // 0b7911  lea edx, [edx + edx*2]
    X86_AT(c, 0xb7911u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0b7914  mov eax, dword ptr [eax + 0x459a4]
    X86_AT(c, 0xb7914u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x459A4u)));
    // 0b791a  mov dword ptr [edx + 0x459a4], eax
    X86_AT(c, 0xb791au);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x459A4u)), c.r[0]);
    // 0b7920  call 0xb7818
    X86_AT(c, 0xb7920u);
    push32(c, 0xb7925u); x86_call_known(c, 0xb7818u, f_000b7818); X86_RET(c, 0xb7925u);
    X86_TICK(c, 24);
    // 0b7925  pop edi
    X86_AT(c, 0xb7925u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b7926  pop esi
    X86_AT(c, 0xb7926u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b7927  leave 
    X86_AT(c, 0xb7927u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b7928  ret 
    X86_AT(c, 0xb7928u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb78a4u, "ran off the end of a function");
}
void f_000b792c(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0b792c  push ebp
    X86_AT(c, 0xb792cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b792d  mov ebp, esp
    X86_AT(c, 0xb792du);
    c.r[5] = c.r[4];
    // 0b792f  push edi
    X86_AT(c, 0xb792fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b7930  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xb7930u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0b7933  lea eax, [edi*8]
    X86_AT(c, 0xb7933u);
    c.r[0] = (uint32_t)(c.r[7] * 8);
    // 0b793a  lea eax, [eax + eax*2]
    X86_AT(c, 0xb793au);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0b793d  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xb793du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0b7940  mov dword ptr [eax + 0x45994], edx
    X86_AT(c, 0xb7940u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x45994u)), c.r[2]);
    // 0b7946  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xb7946u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0b7949  mov dword ptr [eax + 0x45998], edx
    X86_AT(c, 0xb7949u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x45998u)), c.r[2]);
    // 0b794f  call 0xb7818
    X86_AT(c, 0xb794fu);
    push32(c, 0xb7954u); x86_call_known(c, 0xb7818u, f_000b7818); X86_RET(c, 0xb7954u);
    X86_TICK(c, 20);
    // 0b7954  pop edi
    X86_AT(c, 0xb7954u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b7955  leave 
    X86_AT(c, 0xb7955u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b7956  ret 
    X86_AT(c, 0xb7956u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb792cu, "ran off the end of a function");
}
void f_000b7984(X86Cpu& c) {
    X86_TICK(c, 41);
    // 0b7984  push ebp
    X86_AT(c, 0xb7984u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b7985  mov ebp, esp
    X86_AT(c, 0xb7985u);
    c.r[5] = c.r[4];
    // 0b7987  push edi
    X86_AT(c, 0xb7987u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b7988  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xb7988u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0b798b  mov eax, 0x45658
    X86_AT(c, 0xb798bu);
    c.r[0] = 0x45658u;
    // 0b7990  lea edx, [edi*8]
    X86_AT(c, 0xb7990u);
    c.r[2] = (uint32_t)(c.r[7] * 8);
    // 0b7997  lea edx, [edx + edx*2]
    X86_AT(c, 0xb7997u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0b799a  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xb799au);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0b799d  mov dword ptr [eax + edx*1 + 0x33c], ecx
    X86_AT(c, 0xb799du);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x33Cu)), c.r[1]);
    // 0b79a4  mov ecx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xb79a4u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0b79a7  mov dword ptr [eax + edx*1 + 0x340], ecx
    X86_AT(c, 0xb79a7u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x340u)), c.r[1]);
    // 0b79ae  mov ecx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xb79aeu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0b79b1  mov dword ptr [eax + edx*1 + 0x344], ecx
    X86_AT(c, 0xb79b1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x344u)), c.r[1]);
    // 0b79b8  call 0xb7818
    X86_AT(c, 0xb79b8u);
    push32(c, 0xb79bdu); x86_call_known(c, 0xb7818u, f_000b7818); X86_RET(c, 0xb79bdu);
    X86_TICK(c, 20);
    // 0b79bd  pop edi
    X86_AT(c, 0xb79bdu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b79be  leave 
    X86_AT(c, 0xb79beu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b79bf  ret 
    X86_AT(c, 0xb79bfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb7984u, "ran off the end of a function");
}
void f_000b79f4(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0b79f4  push ebp
    X86_AT(c, 0xb79f4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b79f5  mov ebp, esp
    X86_AT(c, 0xb79f5u);
    c.r[5] = c.r[4];
    // 0b79f7  push eax
    X86_AT(c, 0xb79f7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b79f8  push ebx
    X86_AT(c, 0xb79f8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b79f9  push esi
    X86_AT(c, 0xb79f9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b79fa  push edi
    X86_AT(c, 0xb79fau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b79fb  cmp dword ptr [0x45f5c], 0
    X86_AT(c, 0xb79fbu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x45F5Cu))), 0x0u, 0, 4);
    // 0b7a02  jne 0xb7a30
    X86_AT(c, 0xb7a02u);
    if (x86_cc(c, 5)) { goto L_b7a30; }
    X86_TICK(c, 18);
    // 0b7a04  mov dword ptr [0x45f5c], 3
    X86_AT(c, 0xb7a04u);
    wr32((c.sbase[3] + (uint32_t)(0x45F5Cu)), 0x3u);
    // 0b7a0e  mov esi, dword ptr [0x45670]
    X86_AT(c, 0xb7a0eu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x45670u)));
    // 0b7a14  mov ebx, dword ptr [esi*4 + 0x9c2a4]
    X86_AT(c, 0xb7a14u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0x9C2A4u)));
    // 0b7a1b  mov eax, dword ptr [esi*4 + 0x9c2a8]
    X86_AT(c, 0xb7a1bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0x9C2A8u)));
    // 0b7a22  mov dword ptr [esi*4 + 0x9c2a4], eax
    X86_AT(c, 0xb7a22u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0x9C2A4u)), c.r[0]);
    // 0b7a29  mov dword ptr [esi*4 + 0x9c2a8], ebx
    X86_AT(c, 0xb7a29u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0x9C2A8u)), c.r[3]);
L_b7a30:
    X86_TICK(c, 8);
    // 0b7a30  dec dword ptr [0x45f5c]
    X86_AT(c, 0xb7a30u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x45F5Cu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0b7a36  sub edi, edi
    X86_AT(c, 0xb7a36u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_b7a38:
    X86_TICK(c, 7);
    // 0b7a38  cmp edi, 0x30
    X86_AT(c, 0xb7a38u);
    (void)x86_sub(c, c.r[7], 0x30u, 0, 4);
    // 0b7a3b  jge 0xb7a99
    X86_AT(c, 0xb7a3bu);
    if (x86_cc(c, 13)) { goto L_b7a99; }
    X86_TICK(c, 18);
    // 0b7a3d  mov eax, 0x45658
    X86_AT(c, 0xb7a3du);
    c.r[0] = 0x45658u;
    // 0b7a42  lea edx, [edi*8]
    X86_AT(c, 0xb7a42u);
    c.r[2] = (uint32_t)(c.r[7] * 8);
    // 0b7a49  lea edx, [edx + edx*2]
    X86_AT(c, 0xb7a49u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0b7a4c  cmp dword ptr [eax + edx*1 + 0x338], 0
    X86_AT(c, 0xb7a4cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x338u))), 0x0u, 0, 4);
    // 0b7a54  je 0xb7a96
    X86_AT(c, 0xb7a54u);
    if (x86_cc(c, 4)) { goto L_b7a96; }
    X86_TICK(c, 12);
    // 0b7a56  cmp dword ptr [eax + edx*1 + 0x348], 0xffffffff
    X86_AT(c, 0xb7a56u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x348u))), 0xFFFFFFFFu, 0, 4);
    // 0b7a5e  je 0xb7a96
    X86_AT(c, 0xb7a5eu);
    if (x86_cc(c, 4)) { goto L_b7a96; }
    X86_TICK(c, 11);
    // 0b7a60  push 6
    X86_AT(c, 0xb7a60u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0b7a62  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xb7a62u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0b7a65  call 0xb61b4
    X86_AT(c, 0xb7a65u);
    push32(c, 0xb7a6au); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xb7a6au);
    X86_TICK(c, 9);
    // 0b7a6a  add esp, 4
    X86_AT(c, 0xb7a6au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b7a6d  and eax, eax
    X86_AT(c, 0xb7a6du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0b7a6f  jne 0xb7a96
    X86_AT(c, 0xb7a6fu);
    if (x86_cc(c, 5)) { goto L_b7a96; }
    X86_TICK(c, 20);
    // 0b7a71  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xb7a71u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0b7a74  mov esi, dword ptr [eax + 0x4599c]
    X86_AT(c, 0xb7a74u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4599Cu)));
    // 0b7a7a  mov ebx, dword ptr [esi*4 + 0x9c2a4]
    X86_AT(c, 0xb7a7au);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0x9C2A4u)));
    // 0b7a81  mov eax, dword ptr [esi*4 + 0x9c2a8]
    X86_AT(c, 0xb7a81u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0x9C2A8u)));
    // 0b7a88  mov dword ptr [esi*4 + 0x9c2a4], eax
    X86_AT(c, 0xb7a88u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0x9C2A4u)), c.r[0]);
    // 0b7a8f  mov dword ptr [esi*4 + 0x9c2a8], ebx
    X86_AT(c, 0xb7a8fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0x9C2A8u)), c.r[3]);
L_b7a96:
    X86_TICK(c, 9);
    // 0b7a96  inc edi
    X86_AT(c, 0xb7a96u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0b7a97  jmp 0xb7a38
    X86_AT(c, 0xb7a97u);
    X86_POLL(c, 0xb7a38u); goto L_b7a38;
L_b7a99:
    X86_TICK(c, 28);
    // 0b7a99  pop edi
    X86_AT(c, 0xb7a99u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b7a9a  pop esi
    X86_AT(c, 0xb7a9au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b7a9b  pop ebx
    X86_AT(c, 0xb7a9bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0b7a9c  leave 
    X86_AT(c, 0xb7a9cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b7a9d  ret 
    X86_AT(c, 0xb7a9du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb79f4u, "ran off the end of a function");
}
void f_000b7aa0(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0b7aa0  push ebp
    X86_AT(c, 0xb7aa0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b7aa1  mov ebp, esp
    X86_AT(c, 0xb7aa1u);
    c.r[5] = c.r[4];
    // 0b7aa3  sub esp, 0x10
    X86_AT(c, 0xb7aa3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x10u, 0, 4); }
    // 0b7aa6  push ebx
    X86_AT(c, 0xb7aa6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b7aa7  push esi
    X86_AT(c, 0xb7aa7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b7aa8  push edi
    X86_AT(c, 0xb7aa8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b7aa9  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xb7aa9u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0b7aac  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xb7aacu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0b7aaf  sub ebx, ebx
    X86_AT(c, 0xb7aafu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_b7ab1:
    X86_TICK(c, 7);
    // 0b7ab1  cmp ebx, 0x30
    X86_AT(c, 0xb7ab1u);
    (void)x86_sub(c, c.r[3], 0x30u, 0, 4);
    // 0b7ab4  jge 0xb7c60
    X86_AT(c, 0xb7ab4u);
    if (x86_cc(c, 13)) { goto L_b7c60; }
    X86_TICK(c, 12);
    // 0b7aba  cmp byte ptr [ebx + 0xa5ce8], 0
    X86_AT(c, 0xb7abau);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xA5CE8u))), 0x0u, 0, 1);
    // 0b7ac1  je 0xb7c3b
    X86_AT(c, 0xb7ac1u);
    if (x86_cc(c, 4)) { goto L_b7c3b; }
    X86_TICK(c, 21);
    // 0b7ac7  mov eax, dword ptr [ebx*4 + 0xa5d48]
    X86_AT(c, 0xb7ac7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xA5D48u)));
    // 0b7ace  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xb7aceu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0b7ad1  mov edx, dword ptr [ebx*4 + 0xa5e08]
    X86_AT(c, 0xb7ad1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xA5E08u)));
    // 0b7ad8  mov dword ptr [ebp - 0x10], edx
    X86_AT(c, 0xb7ad8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[2]);
    // 0b7adb  mov dword ptr [ebp - 4], 0xffffffff
    X86_AT(c, 0xb7adbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xFFFFFFFFu);
    // 0b7ae2  cmp edi, 5
    X86_AT(c, 0xb7ae2u);
    (void)x86_sub(c, c.r[7], 0x5u, 0, 4);
    // 0b7ae5  jg 0xb7b07
    X86_AT(c, 0xb7ae5u);
    if (x86_cc(c, 15)) { goto L_b7b07; }
    X86_TICK(c, 9);
    // 0b7ae7  lea edx, [edi + 0x3b]
    X86_AT(c, 0xb7ae7u);
    c.r[2] = (uint32_t)(c.r[7] + 0x3Bu);
    // 0b7aea  cmp edx, eax
    X86_AT(c, 0xb7aeau);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0b7aec  jg 0xb7aff
    X86_AT(c, 0xb7aecu);
    if (x86_cc(c, 15)) { goto L_b7aff; }
    X86_TICK(c, 12);
    // 0b7aee  cmp dword ptr [0x9c53c], 0
    X86_AT(c, 0xb7aeeu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x9C53Cu))), 0x0u, 0, 4);
    // 0b7af5  jne 0xb7aff
    X86_AT(c, 0xb7af5u);
    if (x86_cc(c, 5)) { goto L_b7aff; }
    X86_TICK(c, 6);
    // 0b7af7  sub eax, 0x3b
    X86_AT(c, 0xb7af7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3Bu, 0, 4); }
    // 0b7afa  sub eax, edi
    X86_AT(c, 0xb7afau);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0b7afc  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xb7afcu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_b7aff:
    X86_TICK(c, 13);
    // 0b7aff  lea eax, [edi + 5]
    X86_AT(c, 0xb7affu);
    c.r[0] = (uint32_t)(c.r[7] + 0x5u);
    // 0b7b02  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xb7b02u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0b7b05  jmp 0xb7b46
    X86_AT(c, 0xb7b05u);
    goto L_b7b46;
L_b7b07:
    X86_TICK(c, 7);
    // 0b7b07  cmp edi, 0x3b
    X86_AT(c, 0xb7b07u);
    (void)x86_sub(c, c.r[7], 0x3Bu, 0, 4);
    // 0b7b0a  jl 0xb7b39
    X86_AT(c, 0xb7b0au);
    if (x86_cc(c, 12)) { goto L_b7b39; }
    X86_TICK(c, 13);
    // 0b7b0c  lea eax, [edi - 5]
    X86_AT(c, 0xb7b0cu);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFFFBu);
    // 0b7b0f  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xb7b0fu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0b7b12  cmp eax, edx
    X86_AT(c, 0xb7b12u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0b7b14  jg 0xb7b1b
    X86_AT(c, 0xb7b14u);
    if (x86_cc(c, 15)) { goto L_b7b1b; }
    X86_TICK(c, 4);
    // 0b7b16  sub edx, eax
    X86_AT(c, 0xb7b16u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0b7b18  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xb7b18u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
L_b7b1b:
    X86_TICK(c, 13);
    // 0b7b1b  lea eax, [edi - 0x3b]
    X86_AT(c, 0xb7b1bu);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFFC5u);
    // 0b7b1e  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xb7b1eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0b7b21  cmp eax, edx
    X86_AT(c, 0xb7b21u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0b7b23  jl 0xb7b52
    X86_AT(c, 0xb7b23u);
    if (x86_cc(c, 12)) { goto L_b7b52; }
    X86_TICK(c, 12);
    // 0b7b25  cmp dword ptr [0x9c53c], 0
    X86_AT(c, 0xb7b25u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x9C53Cu))), 0x0u, 0, 4);
    // 0b7b2c  jne 0xb7b52
    X86_AT(c, 0xb7b2cu);
    if (x86_cc(c, 5)) { goto L_b7b52; }
    X86_TICK(c, 13);
    // 0b7b2e  mov eax, 0x40
    X86_AT(c, 0xb7b2eu);
    c.r[0] = 0x40u;
    // 0b7b33  sub eax, edi
    X86_AT(c, 0xb7b33u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0b7b35  add edx, eax
    X86_AT(c, 0xb7b35u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0b7b37  jmp 0xb7b4c
    X86_AT(c, 0xb7b37u);
    goto L_b7b4c;
L_b7b39:
    X86_TICK(c, 13);
    // 0b7b39  lea eax, [edi - 5]
    X86_AT(c, 0xb7b39u);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFFFBu);
    // 0b7b3c  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xb7b3cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0b7b3f  cmp eax, edx
    X86_AT(c, 0xb7b3fu);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0b7b41  jg 0xb7b52
    X86_AT(c, 0xb7b41u);
    if (x86_cc(c, 15)) { goto L_b7b52; }
    X86_TICK(c, 2);
    // 0b7b43  lea eax, [edi + 5]
    X86_AT(c, 0xb7b43u);
    c.r[0] = (uint32_t)(c.r[7] + 0x5u);
L_b7b46:
    X86_TICK(c, 7);
    // 0b7b46  cmp eax, edx
    X86_AT(c, 0xb7b46u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0b7b48  jl 0xb7b52
    X86_AT(c, 0xb7b48u);
    if (x86_cc(c, 12)) { goto L_b7b52; }
    X86_TICK(c, 2);
    // 0b7b4a  sub edx, edi
    X86_AT(c, 0xb7b4au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[7], 0, 4); }
L_b7b4c:
    X86_TICK(c, 4);
    // 0b7b4c  add edx, 5
    X86_AT(c, 0xb7b4cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x5u, 0, 4); }
    // 0b7b4f  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xb7b4fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
L_b7b52:
    X86_TICK(c, 9);
    // 0b7b52  mov dword ptr [ebp - 8], 0xffffffff
    X86_AT(c, 0xb7b52u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0xFFFFFFFFu);
    // 0b7b59  cmp esi, 5
    X86_AT(c, 0xb7b59u);
    (void)x86_sub(c, c.r[6], 0x5u, 0, 4);
    // 0b7b5c  jg 0xb7b8a
    X86_AT(c, 0xb7b5cu);
    if (x86_cc(c, 15)) { goto L_b7b8a; }
    X86_TICK(c, 13);
    // 0b7b5e  lea eax, [esi + 0x3b]
    X86_AT(c, 0xb7b5eu);
    c.r[0] = (uint32_t)(c.r[6] + 0x3Bu);
    // 0b7b61  mov edx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xb7b61u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0b7b64  cmp eax, edx
    X86_AT(c, 0xb7b64u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0b7b66  jg 0xb7b79
    X86_AT(c, 0xb7b66u);
    if (x86_cc(c, 15)) { goto L_b7b79; }
    X86_TICK(c, 12);
    // 0b7b68  cmp dword ptr [0x9c53c], 0
    X86_AT(c, 0xb7b68u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x9C53Cu))), 0x0u, 0, 4);
    // 0b7b6f  jne 0xb7b79
    X86_AT(c, 0xb7b6fu);
    if (x86_cc(c, 5)) { goto L_b7b79; }
    X86_TICK(c, 6);
    // 0b7b71  sub edx, 0x3b
    X86_AT(c, 0xb7b71u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x3Bu, 0, 4); }
    // 0b7b74  sub edx, esi
    X86_AT(c, 0xb7b74u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0b7b76  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0xb7b76u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
L_b7b79:
    X86_TICK(c, 13);
    // 0b7b79  lea eax, [esi + 5]
    X86_AT(c, 0xb7b79u);
    c.r[0] = (uint32_t)(c.r[6] + 0x5u);
    // 0b7b7c  mov edx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xb7b7cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0b7b7f  cmp eax, edx
    X86_AT(c, 0xb7b7fu);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0b7b81  jl 0xb7bd8
    X86_AT(c, 0xb7b81u);
    if (x86_cc(c, 12)) { goto L_b7bd8; }
    X86_TICK(c, 11);
    // 0b7b83  add edx, 5
    X86_AT(c, 0xb7b83u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x5u, 0, 4); }
    // 0b7b86  sub edx, esi
    X86_AT(c, 0xb7b86u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0b7b88  jmp 0xb7bd5
    X86_AT(c, 0xb7b88u);
    goto L_b7bd5;
L_b7b8a:
    X86_TICK(c, 7);
    // 0b7b8a  cmp esi, 0x3b
    X86_AT(c, 0xb7b8au);
    (void)x86_sub(c, c.r[6], 0x3Bu, 0, 4);
    // 0b7b8d  jl 0xb7bbf
    X86_AT(c, 0xb7b8du);
    if (x86_cc(c, 12)) { goto L_b7bbf; }
    X86_TICK(c, 13);
    // 0b7b8f  lea eax, [esi - 5]
    X86_AT(c, 0xb7b8fu);
    c.r[0] = (uint32_t)(c.r[6] + 0xFFFFFFFBu);
    // 0b7b92  mov edx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xb7b92u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0b7b95  cmp eax, edx
    X86_AT(c, 0xb7b95u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0b7b97  jg 0xb7ba1
    X86_AT(c, 0xb7b97u);
    if (x86_cc(c, 15)) { goto L_b7ba1; }
    X86_TICK(c, 6);
    // 0b7b99  add edx, 5
    X86_AT(c, 0xb7b99u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x5u, 0, 4); }
    // 0b7b9c  sub edx, esi
    X86_AT(c, 0xb7b9cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0b7b9e  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0xb7b9eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
L_b7ba1:
    X86_TICK(c, 13);
    // 0b7ba1  lea eax, [esi - 0x3b]
    X86_AT(c, 0xb7ba1u);
    c.r[0] = (uint32_t)(c.r[6] + 0xFFFFFFC5u);
    // 0b7ba4  mov edx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xb7ba4u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0b7ba7  cmp eax, edx
    X86_AT(c, 0xb7ba7u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0b7ba9  jl 0xb7bd8
    X86_AT(c, 0xb7ba9u);
    if (x86_cc(c, 12)) { goto L_b7bd8; }
    X86_TICK(c, 12);
    // 0b7bab  cmp dword ptr [0x9c53c], 0
    X86_AT(c, 0xb7babu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x9C53Cu))), 0x0u, 0, 4);
    // 0b7bb2  jne 0xb7bd8
    X86_AT(c, 0xb7bb2u);
    if (x86_cc(c, 5)) { goto L_b7bd8; }
    X86_TICK(c, 13);
    // 0b7bb4  mov eax, 0x40
    X86_AT(c, 0xb7bb4u);
    c.r[0] = 0x40u;
    // 0b7bb9  sub eax, esi
    X86_AT(c, 0xb7bb9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0b7bbb  add edx, eax
    X86_AT(c, 0xb7bbbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0b7bbd  jmp 0xb7bd2
    X86_AT(c, 0xb7bbdu);
    goto L_b7bd2;
L_b7bbf:
    X86_TICK(c, 13);
    // 0b7bbf  lea eax, [esi - 5]
    X86_AT(c, 0xb7bbfu);
    c.r[0] = (uint32_t)(c.r[6] + 0xFFFFFFFBu);
    // 0b7bc2  mov edx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xb7bc2u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0b7bc5  cmp eax, edx
    X86_AT(c, 0xb7bc5u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0b7bc7  jg 0xb7bd8
    X86_AT(c, 0xb7bc7u);
    if (x86_cc(c, 15)) { goto L_b7bd8; }
    X86_TICK(c, 9);
    // 0b7bc9  lea eax, [esi + 5]
    X86_AT(c, 0xb7bc9u);
    c.r[0] = (uint32_t)(c.r[6] + 0x5u);
    // 0b7bcc  cmp eax, edx
    X86_AT(c, 0xb7bccu);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0b7bce  jl 0xb7bd8
    X86_AT(c, 0xb7bceu);
    if (x86_cc(c, 12)) { goto L_b7bd8; }
    X86_TICK(c, 2);
    // 0b7bd0  sub edx, esi
    X86_AT(c, 0xb7bd0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[6], 0, 4); }
L_b7bd2:
    X86_TICK(c, 2);
    // 0b7bd2  add edx, 5
    X86_AT(c, 0xb7bd2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x5u, 0, 4); }
L_b7bd5:
    X86_TICK(c, 2);
    // 0b7bd5  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0xb7bd5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
L_b7bd8:
    X86_TICK(c, 11);
    // 0b7bd8  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xb7bd8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0b7bdb  cmp eax, 0xffffffff
    X86_AT(c, 0xb7bdbu);
    (void)x86_sub(c, c.r[0], 0xFFFFFFFFu, 0, 4);
    // 0b7bde  je 0xb7c3b
    X86_AT(c, 0xb7bdeu);
    if (x86_cc(c, 4)) { goto L_b7c3b; }
    X86_TICK(c, 11);
    // 0b7be0  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0xb7be0u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0b7be3  cmp edx, 0xffffffff
    X86_AT(c, 0xb7be3u);
    (void)x86_sub(c, c.r[2], 0xFFFFFFFFu, 0, 4);
    // 0b7be6  je 0xb7c3b
    X86_AT(c, 0xb7be6u);
    if (x86_cc(c, 4)) { goto L_b7c3b; }
    X86_TICK(c, 11);
    // 0b7be8  mov ecx, dword ptr [ebx*4 + 0x45e10]
    X86_AT(c, 0xb7be8u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0x45E10u)));
    // 0b7bef  and ecx, ecx
    X86_AT(c, 0xb7befu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[1], 4); }
    // 0b7bf1  je 0xb7c00
    X86_AT(c, 0xb7bf1u);
    if (x86_cc(c, 4)) { goto L_b7c00; }
    X86_TICK(c, 13);
    // 0b7bf3  push edx
    X86_AT(c, 0xb7bf3u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0b7bf4  push eax
    X86_AT(c, 0xb7bf4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b7bf5  push ecx
    X86_AT(c, 0xb7bf5u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0b7bf6  call 0xb792c
    X86_AT(c, 0xb7bf6u);
    push32(c, 0xb7bfbu); x86_call_known(c, 0xb792cu, f_000b792c); X86_RET(c, 0xb7bfbu);
    X86_TICK(c, 9);
    // 0b7bfb  add esp, 0xc
    X86_AT(c, 0xb7bfbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0b7bfe  jmp 0xb7c5a
    X86_AT(c, 0xb7bfeu);
    goto L_b7c5a;
L_b7c00:
    X86_TICK(c, 11);
    // 0b7c00  mov al, byte ptr [ebx + 0xa5ce8]
    X86_AT(c, 0xb7c00u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xA5CE8u))));
    // 0b7c06  cmp al, 0x80
    X86_AT(c, 0xb7c06u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 0b7c08  je 0xb7c1a
    X86_AT(c, 0xb7c08u);
    if (x86_cc(c, 4)) { goto L_b7c1a; }
    X86_TICK(c, 7);
    // 0b7c0a  cmp al, 0x86
    X86_AT(c, 0xb7c0au);
    (void)x86_sub(c, g8(c, 0), 0x86u, 0, 1);
    // 0b7c0c  je 0xb7c1a
    X86_AT(c, 0xb7c0cu);
    if (x86_cc(c, 4)) { goto L_b7c1a; }
    X86_TICK(c, 7);
    // 0b7c0e  cmp al, 0x82
    X86_AT(c, 0xb7c0eu);
    (void)x86_sub(c, g8(c, 0), 0x82u, 0, 1);
    // 0b7c10  je 0xb7c1a
    X86_AT(c, 0xb7c10u);
    if (x86_cc(c, 4)) { goto L_b7c1a; }
    X86_TICK(c, 7);
    // 0b7c12  cmp al, 0xa1
    X86_AT(c, 0xb7c12u);
    (void)x86_sub(c, g8(c, 0), 0xA1u, 0, 1);
    // 0b7c14  je 0xb7c1a
    X86_AT(c, 0xb7c14u);
    if (x86_cc(c, 4)) { goto L_b7c1a; }
    X86_TICK(c, 9);
    // 0b7c16  push 0
    X86_AT(c, 0xb7c16u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0b7c18  jmp 0xb7c1c
    X86_AT(c, 0xb7c18u);
    goto L_b7c1c;
L_b7c1a:
    X86_TICK(c, 2);
    // 0b7c1a  push 0xffffffff
    X86_AT(c, 0xb7c1au);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
L_b7c1c:
    X86_TICK(c, 25);
    // 0b7c1c  movzx eax, byte ptr [ebx + 0xa5d18]
    X86_AT(c, 0xb7c1cu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xA5D18u)));
    // 0b7c23  push eax
    X86_AT(c, 0xb7c23u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b7c24  push dword ptr [ebp - 8]
    X86_AT(c, 0xb7c24u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0b7c27  push dword ptr [ebp - 4]
    X86_AT(c, 0xb7c27u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0b7c2a  call 0xb774c
    X86_AT(c, 0xb7c2au);
    push32(c, 0xb7c2fu); x86_call_known(c, 0xb774cu, f_000b774c); X86_RET(c, 0xb7c2fu);
    X86_TICK(c, 11);
    // 0b7c2f  mov dword ptr [ebx*4 + 0x45e10], eax
    X86_AT(c, 0xb7c2fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0x45E10u)), c.r[0]);
    // 0b7c36  add esp, 0x10
    X86_AT(c, 0xb7c36u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0b7c39  jmp 0xb7c5a
    X86_AT(c, 0xb7c39u);
    goto L_b7c5a;
L_b7c3b:
    X86_TICK(c, 11);
    // 0b7c3b  mov eax, dword ptr [ebx*4 + 0x45e10]
    X86_AT(c, 0xb7c3bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0x45E10u)));
    // 0b7c42  and eax, eax
    X86_AT(c, 0xb7c42u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0b7c44  je 0xb7c5a
    X86_AT(c, 0xb7c44u);
    if (x86_cc(c, 4)) { goto L_b7c5a; }
    X86_TICK(c, 9);
    // 0b7c46  push eax
    X86_AT(c, 0xb7c46u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b7c47  call 0xb78a4
    X86_AT(c, 0xb7c47u);
    push32(c, 0xb7c4cu); x86_call_known(c, 0xb78a4u, f_000b78a4); X86_RET(c, 0xb7c4cu);
    X86_TICK(c, 4);
    // 0b7c4c  mov dword ptr [ebx*4 + 0x45e10], 0
    X86_AT(c, 0xb7c4cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0x45E10u)), 0x0u);
    // 0b7c57  add esp, 4
    X86_AT(c, 0xb7c57u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_b7c5a:
    X86_TICK(c, 9);
    // 0b7c5a  inc ebx
    X86_AT(c, 0xb7c5au);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0b7c5b  jmp 0xb7ab1
    X86_AT(c, 0xb7c5bu);
    X86_POLL(c, 0xb7ab1u); goto L_b7ab1;
L_b7c60:
    X86_TICK(c, 12);
    // 0b7c60  cmp dword ptr [0xa4a56], 0
    X86_AT(c, 0xb7c60u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x0u, 0, 4);
    // 0b7c67  je 0xb7cb3
    X86_AT(c, 0xb7c67u);
    if (x86_cc(c, 4)) { goto L_b7cb3; }
    X86_TICK(c, 11);
    // 0b7c69  mov eax, dword ptr [0x45ed0]
    X86_AT(c, 0xb7c69u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x45ED0u)));
    // 0b7c6e  and eax, eax
    X86_AT(c, 0xb7c6eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0b7c70  je 0xb7c85
    X86_AT(c, 0xb7c70u);
    if (x86_cc(c, 4)) { goto L_b7c85; }
    X86_TICK(c, 9);
    // 0b7c72  push eax
    X86_AT(c, 0xb7c72u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b7c73  call 0xb78a4
    X86_AT(c, 0xb7c73u);
    push32(c, 0xb7c78u); x86_call_known(c, 0xb78a4u, f_000b78a4); X86_RET(c, 0xb7c78u);
    X86_TICK(c, 4);
    // 0b7c78  mov dword ptr [0x45ed0], 0
    X86_AT(c, 0xb7c78u);
    wr32((c.sbase[3] + (uint32_t)(0x45ED0u)), 0x0u);
    // 0b7c82  add esp, 4
    X86_AT(c, 0xb7c82u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_b7c85:
    X86_TICK(c, 12);
    // 0b7c85  cmp dword ptr [0xa4a56], 0xff
    X86_AT(c, 0xb7c85u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0xFFu, 0, 4);
    // 0b7c8f  je 0xb7cb3
    X86_AT(c, 0xb7c8fu);
    if (x86_cc(c, 4)) { goto L_b7cb3; }
    X86_TICK(c, 11);
    // 0b7c91  mov eax, dword ptr [0x45ed4]
    X86_AT(c, 0xb7c91u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x45ED4u)));
    // 0b7c96  and eax, eax
    X86_AT(c, 0xb7c96u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0b7c98  je 0xb7f4c
    X86_AT(c, 0xb7c98u);
    if (x86_cc(c, 4)) { goto L_b7f4c; }
    X86_TICK(c, 9);
    // 0b7c9e  push eax
    X86_AT(c, 0xb7c9eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b7c9f  call 0xb78a4
    X86_AT(c, 0xb7c9fu);
    push32(c, 0xb7ca4u); x86_call_known(c, 0xb78a4u, f_000b78a4); X86_RET(c, 0xb7ca4u);
    X86_TICK(c, 9);
    // 0b7ca4  mov dword ptr [0x45ed4], 0
    X86_AT(c, 0xb7ca4u);
    wr32((c.sbase[3] + (uint32_t)(0x45ED4u)), 0x0u);
    // 0b7cae  jmp 0xb7f49
    X86_AT(c, 0xb7caeu);
    goto L_b7f49;
L_b7cb3:
    X86_TICK(c, 21);
    // 0b7cb3  mov eax, dword ptr [0xa6048]
    X86_AT(c, 0xb7cb3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA6048u)));
    // 0b7cb8  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xb7cb8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0b7cbb  mov edx, dword ptr [0xa604c]
    X86_AT(c, 0xb7cbbu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xA604Cu)));
    // 0b7cc1  mov dword ptr [ebp - 0x10], edx
    X86_AT(c, 0xb7cc1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[2]);
    // 0b7cc4  mov dword ptr [ebp - 4], 0xffffffff
    X86_AT(c, 0xb7cc4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xFFFFFFFFu);
    // 0b7ccb  cmp edi, 5
    X86_AT(c, 0xb7ccbu);
    (void)x86_sub(c, c.r[7], 0x5u, 0, 4);
    // 0b7cce  jg 0xb7ce7
    X86_AT(c, 0xb7cceu);
    if (x86_cc(c, 15)) { goto L_b7ce7; }
    X86_TICK(c, 9);
    // 0b7cd0  lea edx, [edi + 0x3b]
    X86_AT(c, 0xb7cd0u);
    c.r[2] = (uint32_t)(c.r[7] + 0x3Bu);
    // 0b7cd3  cmp edx, eax
    X86_AT(c, 0xb7cd3u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0b7cd5  jg 0xb7cdf
    X86_AT(c, 0xb7cd5u);
    if (x86_cc(c, 15)) { goto L_b7cdf; }
    X86_TICK(c, 6);
    // 0b7cd7  sub eax, 0x3b
    X86_AT(c, 0xb7cd7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3Bu, 0, 4); }
    // 0b7cda  sub eax, edi
    X86_AT(c, 0xb7cdau);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0b7cdc  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xb7cdcu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_b7cdf:
    X86_TICK(c, 13);
    // 0b7cdf  lea eax, [edi + 5]
    X86_AT(c, 0xb7cdfu);
    c.r[0] = (uint32_t)(c.r[7] + 0x5u);
    // 0b7ce2  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xb7ce2u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0b7ce5  jmp 0xb7d1d
    X86_AT(c, 0xb7ce5u);
    goto L_b7d1d;
L_b7ce7:
    X86_TICK(c, 7);
    // 0b7ce7  cmp edi, 0x3b
    X86_AT(c, 0xb7ce7u);
    (void)x86_sub(c, c.r[7], 0x3Bu, 0, 4);
    // 0b7cea  jl 0xb7d10
    X86_AT(c, 0xb7ceau);
    if (x86_cc(c, 12)) { goto L_b7d10; }
    X86_TICK(c, 13);
    // 0b7cec  lea eax, [edi - 5]
    X86_AT(c, 0xb7cecu);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFFFBu);
    // 0b7cef  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xb7cefu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0b7cf2  cmp eax, edx
    X86_AT(c, 0xb7cf2u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0b7cf4  jg 0xb7cfb
    X86_AT(c, 0xb7cf4u);
    if (x86_cc(c, 15)) { goto L_b7cfb; }
    X86_TICK(c, 4);
    // 0b7cf6  sub edx, eax
    X86_AT(c, 0xb7cf6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0b7cf8  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xb7cf8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
L_b7cfb:
    X86_TICK(c, 13);
    // 0b7cfb  lea eax, [edi - 0x3b]
    X86_AT(c, 0xb7cfbu);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFFC5u);
    // 0b7cfe  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xb7cfeu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0b7d01  cmp eax, edx
    X86_AT(c, 0xb7d01u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0b7d03  jl 0xb7d29
    X86_AT(c, 0xb7d03u);
    if (x86_cc(c, 12)) { goto L_b7d29; }
    X86_TICK(c, 13);
    // 0b7d05  mov eax, 0x40
    X86_AT(c, 0xb7d05u);
    c.r[0] = 0x40u;
    // 0b7d0a  sub eax, edi
    X86_AT(c, 0xb7d0au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0b7d0c  add edx, eax
    X86_AT(c, 0xb7d0cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0b7d0e  jmp 0xb7d23
    X86_AT(c, 0xb7d0eu);
    goto L_b7d23;
L_b7d10:
    X86_TICK(c, 13);
    // 0b7d10  lea eax, [edi - 5]
    X86_AT(c, 0xb7d10u);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFFFBu);
    // 0b7d13  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xb7d13u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0b7d16  cmp eax, edx
    X86_AT(c, 0xb7d16u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0b7d18  jg 0xb7d29
    X86_AT(c, 0xb7d18u);
    if (x86_cc(c, 15)) { goto L_b7d29; }
    X86_TICK(c, 2);
    // 0b7d1a  lea eax, [edi + 5]
    X86_AT(c, 0xb7d1au);
    c.r[0] = (uint32_t)(c.r[7] + 0x5u);
L_b7d1d:
    X86_TICK(c, 7);
    // 0b7d1d  cmp eax, edx
    X86_AT(c, 0xb7d1du);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0b7d1f  jl 0xb7d29
    X86_AT(c, 0xb7d1fu);
    if (x86_cc(c, 12)) { goto L_b7d29; }
    X86_TICK(c, 2);
    // 0b7d21  sub edx, edi
    X86_AT(c, 0xb7d21u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[7], 0, 4); }
L_b7d23:
    X86_TICK(c, 4);
    // 0b7d23  add edx, 5
    X86_AT(c, 0xb7d23u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x5u, 0, 4); }
    // 0b7d26  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xb7d26u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
L_b7d29:
    X86_TICK(c, 9);
    // 0b7d29  mov dword ptr [ebp - 8], 0xffffffff
    X86_AT(c, 0xb7d29u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0xFFFFFFFFu);
    // 0b7d30  cmp esi, 5
    X86_AT(c, 0xb7d30u);
    (void)x86_sub(c, c.r[6], 0x5u, 0, 4);
    // 0b7d33  jg 0xb7d58
    X86_AT(c, 0xb7d33u);
    if (x86_cc(c, 15)) { goto L_b7d58; }
    X86_TICK(c, 13);
    // 0b7d35  lea eax, [esi + 0x3b]
    X86_AT(c, 0xb7d35u);
    c.r[0] = (uint32_t)(c.r[6] + 0x3Bu);
    // 0b7d38  mov edx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xb7d38u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0b7d3b  cmp eax, edx
    X86_AT(c, 0xb7d3bu);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0b7d3d  jg 0xb7d47
    X86_AT(c, 0xb7d3du);
    if (x86_cc(c, 15)) { goto L_b7d47; }
    X86_TICK(c, 6);
    // 0b7d3f  sub edx, 0x3b
    X86_AT(c, 0xb7d3fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x3Bu, 0, 4); }
    // 0b7d42  sub edx, esi
    X86_AT(c, 0xb7d42u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0b7d44  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0xb7d44u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
L_b7d47:
    X86_TICK(c, 13);
    // 0b7d47  lea eax, [esi + 5]
    X86_AT(c, 0xb7d47u);
    c.r[0] = (uint32_t)(c.r[6] + 0x5u);
    // 0b7d4a  mov edx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xb7d4au);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0b7d4d  cmp eax, edx
    X86_AT(c, 0xb7d4du);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0b7d4f  jl 0xb7d9d
    X86_AT(c, 0xb7d4fu);
    if (x86_cc(c, 12)) { goto L_b7d9d; }
    X86_TICK(c, 11);
    // 0b7d51  add edx, 5
    X86_AT(c, 0xb7d51u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x5u, 0, 4); }
    // 0b7d54  sub edx, esi
    X86_AT(c, 0xb7d54u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0b7d56  jmp 0xb7d9a
    X86_AT(c, 0xb7d56u);
    goto L_b7d9a;
L_b7d58:
    X86_TICK(c, 7);
    // 0b7d58  cmp esi, 0x3b
    X86_AT(c, 0xb7d58u);
    (void)x86_sub(c, c.r[6], 0x3Bu, 0, 4);
    // 0b7d5b  jl 0xb7d84
    X86_AT(c, 0xb7d5bu);
    if (x86_cc(c, 12)) { goto L_b7d84; }
    X86_TICK(c, 13);
    // 0b7d5d  lea eax, [esi - 5]
    X86_AT(c, 0xb7d5du);
    c.r[0] = (uint32_t)(c.r[6] + 0xFFFFFFFBu);
    // 0b7d60  mov edx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xb7d60u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0b7d63  cmp eax, edx
    X86_AT(c, 0xb7d63u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0b7d65  jg 0xb7d6f
    X86_AT(c, 0xb7d65u);
    if (x86_cc(c, 15)) { goto L_b7d6f; }
    X86_TICK(c, 6);
    // 0b7d67  add edx, 5
    X86_AT(c, 0xb7d67u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x5u, 0, 4); }
    // 0b7d6a  sub edx, esi
    X86_AT(c, 0xb7d6au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0b7d6c  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0xb7d6cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
L_b7d6f:
    X86_TICK(c, 13);
    // 0b7d6f  lea eax, [esi - 0x3b]
    X86_AT(c, 0xb7d6fu);
    c.r[0] = (uint32_t)(c.r[6] + 0xFFFFFFC5u);
    // 0b7d72  mov edx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xb7d72u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0b7d75  cmp eax, edx
    X86_AT(c, 0xb7d75u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0b7d77  jl 0xb7d9d
    X86_AT(c, 0xb7d77u);
    if (x86_cc(c, 12)) { goto L_b7d9d; }
    X86_TICK(c, 13);
    // 0b7d79  mov eax, 0x40
    X86_AT(c, 0xb7d79u);
    c.r[0] = 0x40u;
    // 0b7d7e  sub eax, esi
    X86_AT(c, 0xb7d7eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0b7d80  add edx, eax
    X86_AT(c, 0xb7d80u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0b7d82  jmp 0xb7d97
    X86_AT(c, 0xb7d82u);
    goto L_b7d97;
L_b7d84:
    X86_TICK(c, 13);
    // 0b7d84  lea eax, [esi - 5]
    X86_AT(c, 0xb7d84u);
    c.r[0] = (uint32_t)(c.r[6] + 0xFFFFFFFBu);
    // 0b7d87  mov edx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xb7d87u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0b7d8a  cmp eax, edx
    X86_AT(c, 0xb7d8au);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0b7d8c  jg 0xb7d9d
    X86_AT(c, 0xb7d8cu);
    if (x86_cc(c, 15)) { goto L_b7d9d; }
    X86_TICK(c, 9);
    // 0b7d8e  lea eax, [esi + 5]
    X86_AT(c, 0xb7d8eu);
    c.r[0] = (uint32_t)(c.r[6] + 0x5u);
    // 0b7d91  cmp eax, edx
    X86_AT(c, 0xb7d91u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0b7d93  jl 0xb7d9d
    X86_AT(c, 0xb7d93u);
    if (x86_cc(c, 12)) { goto L_b7d9d; }
    X86_TICK(c, 2);
    // 0b7d95  sub edx, esi
    X86_AT(c, 0xb7d95u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[6], 0, 4); }
L_b7d97:
    X86_TICK(c, 2);
    // 0b7d97  add edx, 5
    X86_AT(c, 0xb7d97u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x5u, 0, 4); }
L_b7d9a:
    X86_TICK(c, 2);
    // 0b7d9a  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0xb7d9au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
L_b7d9d:
    X86_TICK(c, 11);
    // 0b7d9d  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xb7d9du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0b7da0  cmp eax, 0xffffffff
    X86_AT(c, 0xb7da0u);
    (void)x86_sub(c, c.r[0], 0xFFFFFFFFu, 0, 4);
    // 0b7da3  je 0xb7ddd
    X86_AT(c, 0xb7da3u);
    if (x86_cc(c, 4)) { goto L_b7ddd; }
    X86_TICK(c, 11);
    // 0b7da5  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0xb7da5u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0b7da8  cmp edx, 0xffffffff
    X86_AT(c, 0xb7da8u);
    (void)x86_sub(c, c.r[2], 0xFFFFFFFFu, 0, 4);
    // 0b7dab  je 0xb7ddd
    X86_AT(c, 0xb7dabu);
    if (x86_cc(c, 4)) { goto L_b7ddd; }
    X86_TICK(c, 11);
    // 0b7dad  mov ecx, dword ptr [0x45ed4]
    X86_AT(c, 0xb7dadu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x45ED4u)));
    // 0b7db3  and ecx, ecx
    X86_AT(c, 0xb7db3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[1], 4); }
    // 0b7db5  je 0xb7dc4
    X86_AT(c, 0xb7db5u);
    if (x86_cc(c, 4)) { goto L_b7dc4; }
    X86_TICK(c, 13);
    // 0b7db7  push edx
    X86_AT(c, 0xb7db7u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0b7db8  push eax
    X86_AT(c, 0xb7db8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b7db9  push ecx
    X86_AT(c, 0xb7db9u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0b7dba  call 0xb792c
    X86_AT(c, 0xb7dbau);
    push32(c, 0xb7dbfu); x86_call_known(c, 0xb792cu, f_000b792c); X86_RET(c, 0xb7dbfu);
    X86_TICK(c, 9);
    // 0b7dbf  add esp, 0xc
    X86_AT(c, 0xb7dbfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0b7dc2  jmp 0xb7df9
    X86_AT(c, 0xb7dc2u);
    goto L_b7df9;
L_b7dc4:
    X86_TICK(c, 21);
    // 0b7dc4  push 0xffffffff
    X86_AT(c, 0xb7dc4u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0b7dc6  push 0x79
    X86_AT(c, 0xb7dc6u);
    { uint32_t v = 0x79u; push32(c, v); }
    // 0b7dc8  push dword ptr [ebp - 8]
    X86_AT(c, 0xb7dc8u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0b7dcb  push dword ptr [ebp - 4]
    X86_AT(c, 0xb7dcbu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0b7dce  call 0xb774c
    X86_AT(c, 0xb7dceu);
    push32(c, 0xb7dd3u); x86_call_known(c, 0xb774cu, f_000b774c); X86_RET(c, 0xb7dd3u);
    X86_TICK(c, 11);
    // 0b7dd3  mov dword ptr [0x45ed4], eax
    X86_AT(c, 0xb7dd3u);
    wr32((c.sbase[3] + (uint32_t)(0x45ED4u)), c.r[0]);
    // 0b7dd8  add esp, 0x10
    X86_AT(c, 0xb7dd8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0b7ddb  jmp 0xb7df9
    X86_AT(c, 0xb7ddbu);
    goto L_b7df9;
L_b7ddd:
    X86_TICK(c, 11);
    // 0b7ddd  mov eax, dword ptr [0x45ed4]
    X86_AT(c, 0xb7dddu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x45ED4u)));
    // 0b7de2  and eax, eax
    X86_AT(c, 0xb7de2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0b7de4  je 0xb7df9
    X86_AT(c, 0xb7de4u);
    if (x86_cc(c, 4)) { goto L_b7df9; }
    X86_TICK(c, 9);
    // 0b7de6  push eax
    X86_AT(c, 0xb7de6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b7de7  call 0xb78a4
    X86_AT(c, 0xb7de7u);
    push32(c, 0xb7decu); x86_call_known(c, 0xb78a4u, f_000b78a4); X86_RET(c, 0xb7decu);
    X86_TICK(c, 4);
    // 0b7dec  mov dword ptr [0x45ed4], 0
    X86_AT(c, 0xb7decu);
    wr32((c.sbase[3] + (uint32_t)(0x45ED4u)), 0x0u);
    // 0b7df6  add esp, 4
    X86_AT(c, 0xb7df6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_b7df9:
    X86_TICK(c, 12);
    // 0b7df9  cmp dword ptr [0xa4a56], 0
    X86_AT(c, 0xb7df9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x0u, 0, 4);
    // 0b7e00  jne 0xb7f4c
    X86_AT(c, 0xb7e00u);
    if (x86_cc(c, 5)) { goto L_b7f4c; }
    X86_TICK(c, 21);
    // 0b7e06  mov eax, dword ptr [0xa6068]
    X86_AT(c, 0xb7e06u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA6068u)));
    // 0b7e0b  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xb7e0bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0b7e0e  mov edx, dword ptr [0xa606c]
    X86_AT(c, 0xb7e0eu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xA606Cu)));
    // 0b7e14  mov dword ptr [ebp - 0x10], edx
    X86_AT(c, 0xb7e14u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[2]);
    // 0b7e17  mov dword ptr [ebp - 4], 0xffffffff
    X86_AT(c, 0xb7e17u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xFFFFFFFFu);
    // 0b7e1e  cmp edi, 5
    X86_AT(c, 0xb7e1eu);
    (void)x86_sub(c, c.r[7], 0x5u, 0, 4);
    // 0b7e21  jg 0xb7e3a
    X86_AT(c, 0xb7e21u);
    if (x86_cc(c, 15)) { goto L_b7e3a; }
    X86_TICK(c, 9);
    // 0b7e23  lea edx, [edi + 0x3b]
    X86_AT(c, 0xb7e23u);
    c.r[2] = (uint32_t)(c.r[7] + 0x3Bu);
    // 0b7e26  cmp edx, eax
    X86_AT(c, 0xb7e26u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0b7e28  jg 0xb7e32
    X86_AT(c, 0xb7e28u);
    if (x86_cc(c, 15)) { goto L_b7e32; }
    X86_TICK(c, 6);
    // 0b7e2a  sub eax, 0x3b
    X86_AT(c, 0xb7e2au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3Bu, 0, 4); }
    // 0b7e2d  sub eax, edi
    X86_AT(c, 0xb7e2du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0b7e2f  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xb7e2fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_b7e32:
    X86_TICK(c, 13);
    // 0b7e32  lea eax, [edi + 5]
    X86_AT(c, 0xb7e32u);
    c.r[0] = (uint32_t)(c.r[7] + 0x5u);
    // 0b7e35  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xb7e35u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0b7e38  jmp 0xb7e70
    X86_AT(c, 0xb7e38u);
    goto L_b7e70;
L_b7e3a:
    X86_TICK(c, 7);
    // 0b7e3a  cmp edi, 0x3b
    X86_AT(c, 0xb7e3au);
    (void)x86_sub(c, c.r[7], 0x3Bu, 0, 4);
    // 0b7e3d  jl 0xb7e63
    X86_AT(c, 0xb7e3du);
    if (x86_cc(c, 12)) { goto L_b7e63; }
    X86_TICK(c, 13);
    // 0b7e3f  lea eax, [edi - 5]
    X86_AT(c, 0xb7e3fu);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFFFBu);
    // 0b7e42  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xb7e42u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0b7e45  cmp eax, edx
    X86_AT(c, 0xb7e45u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0b7e47  jg 0xb7e4e
    X86_AT(c, 0xb7e47u);
    if (x86_cc(c, 15)) { goto L_b7e4e; }
    X86_TICK(c, 4);
    // 0b7e49  sub edx, eax
    X86_AT(c, 0xb7e49u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0b7e4b  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xb7e4bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
L_b7e4e:
    X86_TICK(c, 13);
    // 0b7e4e  lea eax, [edi - 0x3b]
    X86_AT(c, 0xb7e4eu);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFFC5u);
    // 0b7e51  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xb7e51u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0b7e54  cmp eax, edx
    X86_AT(c, 0xb7e54u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0b7e56  jl 0xb7e7c
    X86_AT(c, 0xb7e56u);
    if (x86_cc(c, 12)) { goto L_b7e7c; }
    X86_TICK(c, 13);
    // 0b7e58  mov eax, 0x40
    X86_AT(c, 0xb7e58u);
    c.r[0] = 0x40u;
    // 0b7e5d  sub eax, edi
    X86_AT(c, 0xb7e5du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0b7e5f  add edx, eax
    X86_AT(c, 0xb7e5fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0b7e61  jmp 0xb7e76
    X86_AT(c, 0xb7e61u);
    goto L_b7e76;
L_b7e63:
    X86_TICK(c, 13);
    // 0b7e63  lea eax, [edi - 5]
    X86_AT(c, 0xb7e63u);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFFFBu);
    // 0b7e66  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xb7e66u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0b7e69  cmp eax, edx
    X86_AT(c, 0xb7e69u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0b7e6b  jg 0xb7e7c
    X86_AT(c, 0xb7e6bu);
    if (x86_cc(c, 15)) { goto L_b7e7c; }
    X86_TICK(c, 2);
    // 0b7e6d  lea eax, [edi + 5]
    X86_AT(c, 0xb7e6du);
    c.r[0] = (uint32_t)(c.r[7] + 0x5u);
L_b7e70:
    X86_TICK(c, 7);
    // 0b7e70  cmp eax, edx
    X86_AT(c, 0xb7e70u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0b7e72  jl 0xb7e7c
    X86_AT(c, 0xb7e72u);
    if (x86_cc(c, 12)) { goto L_b7e7c; }
    X86_TICK(c, 2);
    // 0b7e74  sub edx, edi
    X86_AT(c, 0xb7e74u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[7], 0, 4); }
L_b7e76:
    X86_TICK(c, 4);
    // 0b7e76  add edx, 5
    X86_AT(c, 0xb7e76u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x5u, 0, 4); }
    // 0b7e79  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xb7e79u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
L_b7e7c:
    X86_TICK(c, 9);
    // 0b7e7c  mov dword ptr [ebp - 8], 0xffffffff
    X86_AT(c, 0xb7e7cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0xFFFFFFFFu);
    // 0b7e83  cmp esi, 5
    X86_AT(c, 0xb7e83u);
    (void)x86_sub(c, c.r[6], 0x5u, 0, 4);
    // 0b7e86  jg 0xb7eab
    X86_AT(c, 0xb7e86u);
    if (x86_cc(c, 15)) { goto L_b7eab; }
    X86_TICK(c, 13);
    // 0b7e88  lea eax, [esi + 0x3b]
    X86_AT(c, 0xb7e88u);
    c.r[0] = (uint32_t)(c.r[6] + 0x3Bu);
    // 0b7e8b  mov edx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xb7e8bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0b7e8e  cmp eax, edx
    X86_AT(c, 0xb7e8eu);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0b7e90  jg 0xb7e9a
    X86_AT(c, 0xb7e90u);
    if (x86_cc(c, 15)) { goto L_b7e9a; }
    X86_TICK(c, 6);
    // 0b7e92  sub edx, 0x3b
    X86_AT(c, 0xb7e92u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x3Bu, 0, 4); }
    // 0b7e95  sub edx, esi
    X86_AT(c, 0xb7e95u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0b7e97  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0xb7e97u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
L_b7e9a:
    X86_TICK(c, 13);
    // 0b7e9a  lea eax, [esi + 5]
    X86_AT(c, 0xb7e9au);
    c.r[0] = (uint32_t)(c.r[6] + 0x5u);
    // 0b7e9d  mov edx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xb7e9du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0b7ea0  cmp eax, edx
    X86_AT(c, 0xb7ea0u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0b7ea2  jl 0xb7ef0
    X86_AT(c, 0xb7ea2u);
    if (x86_cc(c, 12)) { goto L_b7ef0; }
    X86_TICK(c, 11);
    // 0b7ea4  add edx, 5
    X86_AT(c, 0xb7ea4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x5u, 0, 4); }
    // 0b7ea7  sub edx, esi
    X86_AT(c, 0xb7ea7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0b7ea9  jmp 0xb7eed
    X86_AT(c, 0xb7ea9u);
    goto L_b7eed;
L_b7eab:
    X86_TICK(c, 7);
    // 0b7eab  cmp esi, 0x3b
    X86_AT(c, 0xb7eabu);
    (void)x86_sub(c, c.r[6], 0x3Bu, 0, 4);
    // 0b7eae  jl 0xb7ed7
    X86_AT(c, 0xb7eaeu);
    if (x86_cc(c, 12)) { goto L_b7ed7; }
    X86_TICK(c, 13);
    // 0b7eb0  lea eax, [esi - 5]
    X86_AT(c, 0xb7eb0u);
    c.r[0] = (uint32_t)(c.r[6] + 0xFFFFFFFBu);
    // 0b7eb3  mov edx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xb7eb3u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0b7eb6  cmp eax, edx
    X86_AT(c, 0xb7eb6u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0b7eb8  jg 0xb7ec2
    X86_AT(c, 0xb7eb8u);
    if (x86_cc(c, 15)) { goto L_b7ec2; }
    X86_TICK(c, 6);
    // 0b7eba  add edx, 5
    X86_AT(c, 0xb7ebau);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x5u, 0, 4); }
    // 0b7ebd  sub edx, esi
    X86_AT(c, 0xb7ebdu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0b7ebf  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0xb7ebfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
L_b7ec2:
    X86_TICK(c, 13);
    // 0b7ec2  lea eax, [esi - 0x3b]
    X86_AT(c, 0xb7ec2u);
    c.r[0] = (uint32_t)(c.r[6] + 0xFFFFFFC5u);
    // 0b7ec5  mov edx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xb7ec5u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0b7ec8  cmp eax, edx
    X86_AT(c, 0xb7ec8u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0b7eca  jl 0xb7ef0
    X86_AT(c, 0xb7ecau);
    if (x86_cc(c, 12)) { goto L_b7ef0; }
    X86_TICK(c, 13);
    // 0b7ecc  mov eax, 0x40
    X86_AT(c, 0xb7eccu);
    c.r[0] = 0x40u;
    // 0b7ed1  sub eax, esi
    X86_AT(c, 0xb7ed1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0b7ed3  add edx, eax
    X86_AT(c, 0xb7ed3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0b7ed5  jmp 0xb7eea
    X86_AT(c, 0xb7ed5u);
    goto L_b7eea;
L_b7ed7:
    X86_TICK(c, 13);
    // 0b7ed7  lea eax, [esi - 5]
    X86_AT(c, 0xb7ed7u);
    c.r[0] = (uint32_t)(c.r[6] + 0xFFFFFFFBu);
    // 0b7eda  mov edx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xb7edau);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0b7edd  cmp eax, edx
    X86_AT(c, 0xb7eddu);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0b7edf  jg 0xb7ef0
    X86_AT(c, 0xb7edfu);
    if (x86_cc(c, 15)) { goto L_b7ef0; }
    X86_TICK(c, 9);
    // 0b7ee1  lea eax, [esi + 5]
    X86_AT(c, 0xb7ee1u);
    c.r[0] = (uint32_t)(c.r[6] + 0x5u);
    // 0b7ee4  cmp eax, edx
    X86_AT(c, 0xb7ee4u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0b7ee6  jl 0xb7ef0
    X86_AT(c, 0xb7ee6u);
    if (x86_cc(c, 12)) { goto L_b7ef0; }
    X86_TICK(c, 2);
    // 0b7ee8  sub edx, esi
    X86_AT(c, 0xb7ee8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[6], 0, 4); }
L_b7eea:
    X86_TICK(c, 2);
    // 0b7eea  add edx, 5
    X86_AT(c, 0xb7eeau);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x5u, 0, 4); }
L_b7eed:
    X86_TICK(c, 2);
    // 0b7eed  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0xb7eedu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
L_b7ef0:
    X86_TICK(c, 11);
    // 0b7ef0  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xb7ef0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0b7ef3  cmp eax, 0xffffffff
    X86_AT(c, 0xb7ef3u);
    (void)x86_sub(c, c.r[0], 0xFFFFFFFFu, 0, 4);
    // 0b7ef6  je 0xb7f30
    X86_AT(c, 0xb7ef6u);
    if (x86_cc(c, 4)) { goto L_b7f30; }
    X86_TICK(c, 11);
    // 0b7ef8  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0xb7ef8u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0b7efb  cmp edx, 0xffffffff
    X86_AT(c, 0xb7efbu);
    (void)x86_sub(c, c.r[2], 0xFFFFFFFFu, 0, 4);
    // 0b7efe  je 0xb7f30
    X86_AT(c, 0xb7efeu);
    if (x86_cc(c, 4)) { goto L_b7f30; }
    X86_TICK(c, 11);
    // 0b7f00  mov ecx, dword ptr [0x45ed0]
    X86_AT(c, 0xb7f00u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x45ED0u)));
    // 0b7f06  and ecx, ecx
    X86_AT(c, 0xb7f06u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[1], 4); }
    // 0b7f08  je 0xb7f17
    X86_AT(c, 0xb7f08u);
    if (x86_cc(c, 4)) { goto L_b7f17; }
    X86_TICK(c, 13);
    // 0b7f0a  push edx
    X86_AT(c, 0xb7f0au);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0b7f0b  push eax
    X86_AT(c, 0xb7f0bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b7f0c  push ecx
    X86_AT(c, 0xb7f0cu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0b7f0d  call 0xb792c
    X86_AT(c, 0xb7f0du);
    push32(c, 0xb7f12u); x86_call_known(c, 0xb792cu, f_000b792c); X86_RET(c, 0xb7f12u);
    X86_TICK(c, 9);
    // 0b7f12  add esp, 0xc
    X86_AT(c, 0xb7f12u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0b7f15  jmp 0xb7f4c
    X86_AT(c, 0xb7f15u);
    goto L_b7f4c;
L_b7f17:
    X86_TICK(c, 21);
    // 0b7f17  push 0xffffffff
    X86_AT(c, 0xb7f17u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0b7f19  push 0x7a
    X86_AT(c, 0xb7f19u);
    { uint32_t v = 0x7Au; push32(c, v); }
    // 0b7f1b  push dword ptr [ebp - 8]
    X86_AT(c, 0xb7f1bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0b7f1e  push dword ptr [ebp - 4]
    X86_AT(c, 0xb7f1eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0b7f21  call 0xb774c
    X86_AT(c, 0xb7f21u);
    push32(c, 0xb7f26u); x86_call_known(c, 0xb774cu, f_000b774c); X86_RET(c, 0xb7f26u);
    X86_TICK(c, 11);
    // 0b7f26  mov dword ptr [0x45ed0], eax
    X86_AT(c, 0xb7f26u);
    wr32((c.sbase[3] + (uint32_t)(0x45ED0u)), c.r[0]);
    // 0b7f2b  add esp, 0x10
    X86_AT(c, 0xb7f2bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0b7f2e  jmp 0xb7f4c
    X86_AT(c, 0xb7f2eu);
    goto L_b7f4c;
L_b7f30:
    X86_TICK(c, 11);
    // 0b7f30  mov eax, dword ptr [0x45ed0]
    X86_AT(c, 0xb7f30u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x45ED0u)));
    // 0b7f35  and eax, eax
    X86_AT(c, 0xb7f35u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0b7f37  je 0xb7f4c
    X86_AT(c, 0xb7f37u);
    if (x86_cc(c, 4)) { goto L_b7f4c; }
    X86_TICK(c, 9);
    // 0b7f39  push eax
    X86_AT(c, 0xb7f39u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b7f3a  call 0xb78a4
    X86_AT(c, 0xb7f3au);
    push32(c, 0xb7f3fu); x86_call_known(c, 0xb78a4u, f_000b78a4); X86_RET(c, 0xb7f3fu);
    X86_TICK(c, 2);
    // 0b7f3f  mov dword ptr [0x45ed0], 0
    X86_AT(c, 0xb7f3fu);
    wr32((c.sbase[3] + (uint32_t)(0x45ED0u)), 0x0u);
L_b7f49:
    X86_TICK(c, 2);
    // 0b7f49  add esp, 4
    X86_AT(c, 0xb7f49u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_b7f4c:
    X86_TICK(c, 28);
    // 0b7f4c  pop edi
    X86_AT(c, 0xb7f4cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b7f4d  pop esi
    X86_AT(c, 0xb7f4du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b7f4e  pop ebx
    X86_AT(c, 0xb7f4eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0b7f4f  leave 
    X86_AT(c, 0xb7f4fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b7f50  ret 
    X86_AT(c, 0xb7f50u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb7aa0u, "ran off the end of a function");
}
void f_000b7f54(X86Cpu& c) {
    X86_TICK(c, 2);
    // 0b7f54  sub eax, eax
    X86_AT(c, 0xb7f54u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_b7f56:
    X86_TICK(c, 7);
    // 0b7f56  cmp eax, 0x30
    X86_AT(c, 0xb7f56u);
    (void)x86_sub(c, c.r[0], 0x30u, 0, 4);
    // 0b7f59  jge 0xb7f69
    X86_AT(c, 0xb7f59u);
    if (x86_cc(c, 13)) { goto L_b7f69; }
    X86_TICK(c, 11);
    // 0b7f5b  mov dword ptr [eax*4 + 0x45e10], 0
    X86_AT(c, 0xb7f5bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x45E10u)), 0x0u);
    // 0b7f66  inc eax
    X86_AT(c, 0xb7f66u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0b7f67  jmp 0xb7f56
    X86_AT(c, 0xb7f67u);
    X86_POLL(c, 0xb7f56u); goto L_b7f56;
L_b7f69:
    X86_TICK(c, 10);
    // 0b7f69  ret 
    X86_AT(c, 0xb7f69u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb7f54u, "ran off the end of a function");
}
void f_000b7f6c(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0b7f6c  push ebp
    X86_AT(c, 0xb7f6cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b7f6d  mov ebp, esp
    X86_AT(c, 0xb7f6du);
    c.r[5] = c.r[4];
    // 0b7f6f  push ebx
    X86_AT(c, 0xb7f6fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b7f70  push esi
    X86_AT(c, 0xb7f70u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b7f71  push edi
    X86_AT(c, 0xb7f71u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b7f72  mov ebx, 0x458a8
    X86_AT(c, 0xb7f72u);
    c.r[3] = 0x458A8u;
    // 0b7f77  add ebx, 4
    X86_AT(c, 0xb7f77u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b7f7a  mov ax, word ptr [ebp + 8]
    X86_AT(c, 0xb7f7au);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0b7f7e  mov word ptr [0x4565e], ax
    X86_AT(c, 0xb7f7eu);
    wr16((c.sbase[3] + (uint32_t)(0x4565Eu)), (c.r[0] & 0xFFFFu));
    // 0b7f84  sub esi, esi
    X86_AT(c, 0xb7f84u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0b7f86  mov edi, esi
    X86_AT(c, 0xb7f86u);
    c.r[7] = c.r[6];
L_b7f88:
    X86_TICK(c, 7);
    // 0b7f88  cmp edi, 4
    X86_AT(c, 0xb7f88u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0b7f8b  jge 0xb804d
    X86_AT(c, 0xb7f8bu);
    if (x86_cc(c, 13)) { goto L_b804d; }
    X86_TICK(c, 17);
    // 0b7f91  lea eax, [edi + edi*2]
    X86_AT(c, 0xb7f91u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0b7f94  lea edx, [eax*8]
    X86_AT(c, 0xb7f94u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0b7f9b  lea edx, [eax + edx*8]
    X86_AT(c, 0xb7f9bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0b7f9e  mov al, byte ptr [edx + 0xa4abd]
    X86_AT(c, 0xb7f9eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu))));
    // 0b7fa4  cmp al, 0x47
    X86_AT(c, 0xb7fa4u);
    (void)x86_sub(c, g8(c, 0), 0x47u, 0, 1);
    // 0b7fa6  je 0xb7fb0
    X86_AT(c, 0xb7fa6u);
    if (x86_cc(c, 4)) { goto L_b7fb0; }
    X86_TICK(c, 7);
    // 0b7fa8  cmp al, 0x50
    X86_AT(c, 0xb7fa8u);
    (void)x86_sub(c, g8(c, 0), 0x50u, 0, 1);
    // 0b7faa  jne 0xb8047
    X86_AT(c, 0xb7faau);
    if (x86_cc(c, 5)) { goto L_b8047; }
L_b7fb0:
    X86_TICK(c, 12);
    // 0b7fb0  cmp dword ptr [edi*4 + 0xa4a05], 0
    X86_AT(c, 0xb7fb0u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4A05u))), 0x0u, 0, 4);
    // 0b7fb8  jl 0xb8047
    X86_AT(c, 0xb7fb8u);
    if (x86_cc(c, 12)) { goto L_b8047; }
    X86_TICK(c, 9);
    // 0b7fbe  push 6
    X86_AT(c, 0xb7fbeu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0b7fc0  call 0xb61b4
    X86_AT(c, 0xb7fc0u);
    push32(c, 0xb7fc5u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xb7fc5u);
    X86_TICK(c, 9);
    // 0b7fc5  add esp, 4
    X86_AT(c, 0xb7fc5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b7fc8  and eax, eax
    X86_AT(c, 0xb7fc8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0b7fca  jne 0xb7fee
    X86_AT(c, 0xb7fcau);
    if (x86_cc(c, 5)) { goto L_b7fee; }
    X86_TICK(c, 12);
    // 0b7fcc  cmp dword ptr [edi*4 + 0xa4a25], 0
    X86_AT(c, 0xb7fccu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4A25u))), 0x0u, 0, 4);
    // 0b7fd4  jne 0xb7fe3
    X86_AT(c, 0xb7fd4u);
    if (x86_cc(c, 5)) { goto L_b7fe3; }
    X86_TICK(c, 9);
    // 0b7fd6  mov dword ptr [edi*4 + 0xa4a25], 1
    X86_AT(c, 0xb7fd6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4A25u)), 0x1u);
    // 0b7fe1  jmp 0xb7fee
    X86_AT(c, 0xb7fe1u);
    goto L_b7fee;
L_b7fe3:
    X86_TICK(c, 2);
    // 0b7fe3  mov dword ptr [edi*4 + 0xa4a25], 0
    X86_AT(c, 0xb7fe3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4A25u)), 0x0u);
L_b7fee:
    X86_TICK(c, 43);
    // 0b7fee  mov eax, dword ptr [edi*4 + 0xa49f5]
    X86_AT(c, 0xb7feeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA49F5u)));
    // 0b7ff5  mov dword ptr [ebx], eax
    X86_AT(c, 0xb7ff5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0b7ff7  add ebx, 4
    X86_AT(c, 0xb7ff7u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b7ffa  mov eax, dword ptr [edi*4 + 0xa4a05]
    X86_AT(c, 0xb7ffau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4A05u)));
    // 0b8001  mov dword ptr [ebx], eax
    X86_AT(c, 0xb8001u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0b8003  add ebx, 4
    X86_AT(c, 0xb8003u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b8006  mov eax, dword ptr [edi*4 + 0xa4a15]
    X86_AT(c, 0xb8006u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4A15u)));
    // 0b800d  add eax, dword ptr [edi*4 + 0xa4a25]
    X86_AT(c, 0xb800du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4A25u))), 0, 4); }
    // 0b8014  mov dword ptr [ebx], eax
    X86_AT(c, 0xb8014u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0b8016  add ebx, 4
    X86_AT(c, 0xb8016u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b8019  inc esi
    X86_AT(c, 0xb8019u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0b801a  cmp edi, dword ptr [ebp + 8]
    X86_AT(c, 0xb801au);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0, 4);
    // 0b801d  jne 0xb8047
    X86_AT(c, 0xb801du);
    if (x86_cc(c, 5)) { goto L_b8047; }
    X86_TICK(c, 28);
    // 0b801f  mov eax, dword ptr [edi*4 + 0xa49f5]
    X86_AT(c, 0xb801fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA49F5u)));
    // 0b8026  mov dword ptr [ebx], eax
    X86_AT(c, 0xb8026u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0b8028  add ebx, 4
    X86_AT(c, 0xb8028u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b802b  mov eax, dword ptr [edi*4 + 0xa4a05]
    X86_AT(c, 0xb802bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4A05u)));
    // 0b8032  mov dword ptr [ebx], eax
    X86_AT(c, 0xb8032u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0b8034  add ebx, 4
    X86_AT(c, 0xb8034u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b8037  mov eax, dword ptr [0x45f60]
    X86_AT(c, 0xb8037u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x45F60u)));
    // 0b803c  add eax, 0x91
    X86_AT(c, 0xb803cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x91u, 0, 4); }
    // 0b8041  mov dword ptr [ebx], eax
    X86_AT(c, 0xb8041u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0b8043  add ebx, 4
    X86_AT(c, 0xb8043u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b8046  inc esi
    X86_AT(c, 0xb8046u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_b8047:
    X86_TICK(c, 9);
    // 0b8047  inc edi
    X86_AT(c, 0xb8047u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0b8048  jmp 0xb7f88
    X86_AT(c, 0xb8048u);
    X86_POLL(c, 0xb7f88u); goto L_b7f88;
L_b804d:
    X86_TICK(c, 2);
    // 0b804d  sub edi, edi
    X86_AT(c, 0xb804du);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_b804f:
    X86_TICK(c, 7);
    // 0b804f  cmp edi, 8
    X86_AT(c, 0xb804fu);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0b8052  jge 0xb80f8
    X86_AT(c, 0xb8052u);
    if (x86_cc(c, 13)) { goto L_b80f8; }
    X86_TICK(c, 12);
    // 0b8058  cmp dword ptr [edi*4 + 0xa49b5], 0
    X86_AT(c, 0xb8058u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA49B5u))), 0x0u, 0, 4);
    // 0b8060  je 0xb80f2
    X86_AT(c, 0xb8060u);
    if (x86_cc(c, 4)) { goto L_b80f2; }
    X86_TICK(c, 9);
    // 0b8066  push 6
    X86_AT(c, 0xb8066u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0b8068  call 0xb61b4
    X86_AT(c, 0xb8068u);
    push32(c, 0xb806du); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xb806du);
    X86_TICK(c, 9);
    // 0b806d  add esp, 4
    X86_AT(c, 0xb806du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b8070  and eax, eax
    X86_AT(c, 0xb8070u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0b8072  jne 0xb8096
    X86_AT(c, 0xb8072u);
    if (x86_cc(c, 5)) { goto L_b8096; }
    X86_TICK(c, 12);
    // 0b8074  cmp dword ptr [edi*4 + 0xa4995], 0
    X86_AT(c, 0xb8074u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4995u))), 0x0u, 0, 4);
    // 0b807c  jne 0xb808b
    X86_AT(c, 0xb807cu);
    if (x86_cc(c, 5)) { goto L_b808b; }
    X86_TICK(c, 9);
    // 0b807e  mov dword ptr [edi*4 + 0xa4995], 1
    X86_AT(c, 0xb807eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4995u)), 0x1u);
    // 0b8089  jmp 0xb8096
    X86_AT(c, 0xb8089u);
    goto L_b8096;
L_b808b:
    X86_TICK(c, 2);
    // 0b808b  mov dword ptr [edi*4 + 0xa4995], 0
    X86_AT(c, 0xb808bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4995u)), 0x0u);
L_b8096:
    X86_TICK(c, 45);
    // 0b8096  mov eax, dword ptr [edi*4 + 0xa4935]
    X86_AT(c, 0xb8096u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4935u)));
    // 0b809d  mov dword ptr [ebx], eax
    X86_AT(c, 0xb809du);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0b809f  add ebx, 4
    X86_AT(c, 0xb809fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b80a2  mov eax, dword ptr [edi*4 + 0xa4955]
    X86_AT(c, 0xb80a2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4955u)));
    // 0b80a9  mov dword ptr [ebx], eax
    X86_AT(c, 0xb80a9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0b80ab  add ebx, 4
    X86_AT(c, 0xb80abu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b80ae  mov eax, dword ptr [edi*4 + 0xa4975]
    X86_AT(c, 0xb80aeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4975u)));
    // 0b80b5  add eax, dword ptr [edi*4 + 0xa4995]
    X86_AT(c, 0xb80b5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4995u))), 0, 4); }
    // 0b80bc  mov dword ptr [ebx], eax
    X86_AT(c, 0xb80bcu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0b80be  add ebx, 4
    X86_AT(c, 0xb80beu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b80c1  inc esi
    X86_AT(c, 0xb80c1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0b80c2  lea eax, [edi + 4]
    X86_AT(c, 0xb80c2u);
    c.r[0] = (uint32_t)(c.r[7] + 0x4u);
    // 0b80c5  cmp eax, dword ptr [ebp + 8]
    X86_AT(c, 0xb80c5u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0, 4);
    // 0b80c8  jne 0xb80f2
    X86_AT(c, 0xb80c8u);
    if (x86_cc(c, 5)) { goto L_b80f2; }
    X86_TICK(c, 28);
    // 0b80ca  mov eax, dword ptr [edi*4 + 0xa4935]
    X86_AT(c, 0xb80cau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4935u)));
    // 0b80d1  mov dword ptr [ebx], eax
    X86_AT(c, 0xb80d1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0b80d3  add ebx, 4
    X86_AT(c, 0xb80d3u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b80d6  mov eax, dword ptr [edi*4 + 0xa4955]
    X86_AT(c, 0xb80d6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4955u)));
    // 0b80dd  mov dword ptr [ebx], eax
    X86_AT(c, 0xb80ddu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0b80df  add ebx, 4
    X86_AT(c, 0xb80dfu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b80e2  mov eax, dword ptr [0x45f60]
    X86_AT(c, 0xb80e2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x45F60u)));
    // 0b80e7  add eax, 0x91
    X86_AT(c, 0xb80e7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x91u, 0, 4); }
    // 0b80ec  mov dword ptr [ebx], eax
    X86_AT(c, 0xb80ecu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0b80ee  add ebx, 4
    X86_AT(c, 0xb80eeu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b80f1  inc esi
    X86_AT(c, 0xb80f1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_b80f2:
    X86_TICK(c, 9);
    // 0b80f2  inc edi
    X86_AT(c, 0xb80f2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0b80f3  jmp 0xb804f
    X86_AT(c, 0xb80f3u);
    X86_POLL(c, 0xb804fu); goto L_b804f;
L_b80f8:
    X86_TICK(c, 20);
    // 0b80f8  mov dword ptr [0x458a8], esi
    X86_AT(c, 0xb80f8u);
    wr32((c.sbase[3] + (uint32_t)(0x458A8u)), c.r[6]);
    // 0b80fe  inc dword ptr [0x45f60]
    X86_AT(c, 0xb80feu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x45F60u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0b8104  cmp dword ptr [0x45f60], 2
    X86_AT(c, 0xb8104u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x45F60u))), 0x2u, 0, 4);
    // 0b810b  jle 0xb8117
    X86_AT(c, 0xb810bu);
    if (x86_cc(c, 14)) { goto L_b8117; }
    X86_TICK(c, 2);
    // 0b810d  mov dword ptr [0x45f60], 0
    X86_AT(c, 0xb810du);
    wr32((c.sbase[3] + (uint32_t)(0x45F60u)), 0x0u);
L_b8117:
    X86_TICK(c, 28);
    // 0b8117  pop edi
    X86_AT(c, 0xb8117u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b8118  pop esi
    X86_AT(c, 0xb8118u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b8119  pop ebx
    X86_AT(c, 0xb8119u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0b811a  leave 
    X86_AT(c, 0xb811au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b811b  ret 
    X86_AT(c, 0xb811bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb7f6cu, "ran off the end of a function");
}
void f_000b811c(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0b811c  push ebp
    X86_AT(c, 0xb811cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b811d  mov ebp, esp
    X86_AT(c, 0xb811du);
    c.r[5] = c.r[4];
    // 0b811f  sub esp, 0x10
    X86_AT(c, 0xb811fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x10u, 0, 4); }
    // 0b8122  push ebx
    X86_AT(c, 0xb8122u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b8123  push esi
    X86_AT(c, 0xb8123u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b8124  push edi
    X86_AT(c, 0xb8124u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b8125  mov al, byte ptr [0xa4934]
    X86_AT(c, 0xb8125u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xA4934u))));
    // 0b812a  mov byte ptr [ebp - 0xd], al
    X86_AT(c, 0xb812au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), g8(c, 0));
    // 0b812d  cmp al, 0x86
    X86_AT(c, 0xb812du);
    (void)x86_sub(c, g8(c, 0), 0x86u, 0, 1);
    // 0b812f  jne 0xb8138
    X86_AT(c, 0xb812fu);
    if (x86_cc(c, 5)) { goto L_b8138; }
    X86_TICK(c, 2);
    // 0b8131  mov byte ptr [0xa4934], 0x8e
    X86_AT(c, 0xb8131u);
    wr8((c.sbase[3] + (uint32_t)(0xA4934u)), 0x8Eu);
L_b8138:
    X86_TICK(c, 13);
    // 0b8138  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xb8138u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0b813b  sub edx, 3
    X86_AT(c, 0xb813bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0b813e  cmp edx, 6
    X86_AT(c, 0xb813eu);
    (void)x86_sub(c, c.r[2], 0x6u, 0, 4);
    // 0b8141  ja 0xb8199
    X86_AT(c, 0xb8141u);
    if (x86_cc(c, 7)) { goto L_b8199; }
    X86_TICK(c, 7);
    // 0b8143  jmp dword ptr cs:[edx*4 + 0xb814b]
    X86_AT(c, 0xb8143u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xB814Bu)));
      switch (t) {
      case 0xb8167u: goto L_b8167;
      case 0xb8170u: goto L_b8170;
      case 0xb8180u: goto L_b8180;
      case 0xb8190u: goto L_b8190;
      case 0xb8199u: goto L_b8199;
      default: x86_jump(c, t); return; } }
L_b8167:
    X86_TICK(c, 9);
    // 0b8167  mov dword ptr [ebp - 4], 0x45f64
    X86_AT(c, 0xb8167u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x45F64u);
    // 0b816e  jmp 0xb8187
    X86_AT(c, 0xb816eu);
    goto L_b8187;
L_b8170:
    X86_TICK(c, 11);
    // 0b8170  mov dword ptr [ebp - 4], 0x45fa4
    X86_AT(c, 0xb8170u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x45FA4u);
    // 0b8177  mov dword ptr [ebp - 8], 0x46044
    X86_AT(c, 0xb8177u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x46044u);
    // 0b817e  jmp 0xb81a7
    X86_AT(c, 0xb817eu);
    goto L_b81a7;
L_b8180:
    X86_TICK(c, 2);
    // 0b8180  mov dword ptr [ebp - 4], 0x45f84
    X86_AT(c, 0xb8180u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x45F84u);
L_b8187:
    X86_TICK(c, 9);
    // 0b8187  mov dword ptr [ebp - 8], 0x46004
    X86_AT(c, 0xb8187u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x46004u);
    // 0b818e  jmp 0xb81a7
    X86_AT(c, 0xb818eu);
    goto L_b81a7;
L_b8190:
    X86_TICK(c, 9);
    // 0b8190  mov dword ptr [ebp - 4], 0x45f84
    X86_AT(c, 0xb8190u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x45F84u);
    // 0b8197  jmp 0xb81a0
    X86_AT(c, 0xb8197u);
    goto L_b81a0;
L_b8199:
    X86_TICK(c, 2);
    // 0b8199  mov dword ptr [ebp - 4], 0x45f64
    X86_AT(c, 0xb8199u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x45F64u);
L_b81a0:
    X86_TICK(c, 2);
    // 0b81a0  mov dword ptr [ebp - 8], 0x45fc4
    X86_AT(c, 0xb81a0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x45FC4u);
L_b81a7:
    X86_TICK(c, 2);
    // 0b81a7  sub esi, esi
    X86_AT(c, 0xb81a7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_b81a9:
    X86_TICK(c, 7);
    // 0b81a9  cmp esi, 0x3a
    X86_AT(c, 0xb81a9u);
    (void)x86_sub(c, c.r[6], 0x3Au, 0, 4);
    // 0b81ac  jge 0xb81bc
    X86_AT(c, 0xb81acu);
    if (x86_cc(c, 13)) { goto L_b81bc; }
    X86_TICK(c, 11);
    // 0b81ae  mov dword ptr [esi*4 + 0x458a8], 0
    X86_AT(c, 0xb81aeu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0x458A8u)), 0x0u);
    // 0b81b9  inc esi
    X86_AT(c, 0xb81b9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0b81ba  jmp 0xb81a9
    X86_AT(c, 0xb81bau);
    X86_POLL(c, 0xb81a9u); goto L_b81a9;
L_b81bc:
    X86_TICK(c, 8);
    // 0b81bc  mov ebx, 0x458a8
    X86_AT(c, 0xb81bcu);
    c.r[3] = 0x458A8u;
    // 0b81c1  sub esi, esi
    X86_AT(c, 0xb81c1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0b81c3  add ebx, 4
    X86_AT(c, 0xb81c3u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b81c6  mov edi, esi
    X86_AT(c, 0xb81c6u);
    c.r[7] = c.r[6];
L_b81c8:
    X86_TICK(c, 7);
    // 0b81c8  cmp edi, 4
    X86_AT(c, 0xb81c8u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0b81cb  jge 0xb8262
    X86_AT(c, 0xb81cbu);
    if (x86_cc(c, 13)) { goto L_b8262; }
    X86_TICK(c, 19);
    // 0b81d1  mov dword ptr [edi*4 + 0xa4a25], 0
    X86_AT(c, 0xb81d1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4A25u)), 0x0u);
    // 0b81dc  lea eax, [edi + edi*2]
    X86_AT(c, 0xb81dcu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0b81df  lea edx, [eax*8]
    X86_AT(c, 0xb81dfu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0b81e6  lea edx, [eax + edx*8]
    X86_AT(c, 0xb81e6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0b81e9  mov al, byte ptr [edx + 0xa4abd]
    X86_AT(c, 0xb81e9u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu))));
    // 0b81ef  cmp al, 0x47
    X86_AT(c, 0xb81efu);
    (void)x86_sub(c, g8(c, 0), 0x47u, 0, 1);
    // 0b81f1  je 0xb81f7
    X86_AT(c, 0xb81f1u);
    if (x86_cc(c, 4)) { goto L_b81f7; }
    X86_TICK(c, 7);
    // 0b81f3  cmp al, 0x50
    X86_AT(c, 0xb81f3u);
    (void)x86_sub(c, g8(c, 0), 0x50u, 0, 1);
    // 0b81f5  jne 0xb823e
    X86_AT(c, 0xb81f5u);
    if (x86_cc(c, 5)) { goto L_b823e; }
L_b81f7:
    X86_TICK(c, 51);
    // 0b81f7  lea eax, [edi + edi*2]
    X86_AT(c, 0xb81f7u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0b81fa  lea edx, [eax*8]
    X86_AT(c, 0xb81fau);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0b8201  lea edx, [eax + edx*8]
    X86_AT(c, 0xb8201u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0b8204  mov eax, dword ptr [edx + 0xa4aa9]
    X86_AT(c, 0xb8204u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AA9u)));
    // 0b820a  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xb820au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0b820d  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xb820du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0b8210  mov ecx, dword ptr [edx + edi*8]
    X86_AT(c, 0xb8210u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[7] * 8)));
    // 0b8213  mov dword ptr [edi*4 + 0xa49f5], ecx
    X86_AT(c, 0xb8213u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA49F5u)), c.r[1]);
    // 0b821a  mov dword ptr [ebx], ecx
    X86_AT(c, 0xb821au);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[1]);
    // 0b821c  add ebx, 4
    X86_AT(c, 0xb821cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b821f  mov edx, dword ptr [edx + edi*8 + 4]
    X86_AT(c, 0xb821fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[7] * 8 + 0x4u)));
    // 0b8223  mov dword ptr [edi*4 + 0xa4a05], edx
    X86_AT(c, 0xb8223u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4A05u)), c.r[2]);
    // 0b822a  mov dword ptr [ebx], edx
    X86_AT(c, 0xb822au);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[2]);
    // 0b822c  add ebx, 4
    X86_AT(c, 0xb822cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b822f  mov dword ptr [edi*4 + 0xa4a15], eax
    X86_AT(c, 0xb822fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4A15u)), c.r[0]);
    // 0b8236  mov dword ptr [ebx], eax
    X86_AT(c, 0xb8236u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0b8238  add ebx, 4
    X86_AT(c, 0xb8238u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b823b  inc esi
    X86_AT(c, 0xb823bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0b823c  jmp 0xb825c
    X86_AT(c, 0xb823cu);
    goto L_b825c;
L_b823e:
    X86_TICK(c, 8);
    // 0b823e  mov eax, 0xffffffff
    X86_AT(c, 0xb823eu);
    c.r[0] = 0xFFFFFFFFu;
    // 0b8243  mov dword ptr [edi*4 + 0xa49f5], eax
    X86_AT(c, 0xb8243u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA49F5u)), c.r[0]);
    // 0b824a  mov dword ptr [edi*4 + 0xa4a05], eax
    X86_AT(c, 0xb824au);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4A05u)), c.r[0]);
    // 0b8251  mov dword ptr [edi*4 + 0xa4a15], 0
    X86_AT(c, 0xb8251u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4A15u)), 0x0u);
L_b825c:
    X86_TICK(c, 9);
    // 0b825c  inc edi
    X86_AT(c, 0xb825cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0b825d  jmp 0xb81c8
    X86_AT(c, 0xb825du);
    X86_POLL(c, 0xb81c8u); goto L_b81c8;
L_b8262:
    X86_TICK(c, 11);
    // 0b8262  mov al, byte ptr [0xa4934]
    X86_AT(c, 0xb8262u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xA4934u))));
    // 0b8267  cmp al, 0x8a
    X86_AT(c, 0xb8267u);
    (void)x86_sub(c, g8(c, 0), 0x8Au, 0, 1);
    // 0b8269  je 0xb8277
    X86_AT(c, 0xb8269u);
    if (x86_cc(c, 4)) { goto L_b8277; }
    X86_TICK(c, 7);
    // 0b826b  cmp al, 0x87
    X86_AT(c, 0xb826bu);
    (void)x86_sub(c, g8(c, 0), 0x87u, 0, 1);
    // 0b826d  je 0xb8277
    X86_AT(c, 0xb826du);
    if (x86_cc(c, 4)) { goto L_b8277; }
    X86_TICK(c, 7);
    // 0b826f  cmp al, 0x81
    X86_AT(c, 0xb826fu);
    (void)x86_sub(c, g8(c, 0), 0x81u, 0, 1);
    // 0b8271  jne 0xb8303
    X86_AT(c, 0xb8271u);
    if (x86_cc(c, 5)) { goto L_b8303; }
L_b8277:
    X86_TICK(c, 2);
    // 0b8277  sub edi, edi
    X86_AT(c, 0xb8277u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_b8279:
    X86_TICK(c, 7);
    // 0b8279  cmp edi, 8
    X86_AT(c, 0xb8279u);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0b827c  jge 0xb829f
    X86_AT(c, 0xb827cu);
    if (x86_cc(c, 13)) { goto L_b829f; }
    X86_TICK(c, 17);
    // 0b827e  mov dword ptr [edi*4 + 0xa49b5], 0
    X86_AT(c, 0xb827eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA49B5u)), 0x0u);
    // 0b8289  mov eax, 0xffffffff
    X86_AT(c, 0xb8289u);
    c.r[0] = 0xFFFFFFFFu;
    // 0b828e  mov dword ptr [edi*4 + 0xa4935], eax
    X86_AT(c, 0xb828eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4935u)), c.r[0]);
    // 0b8295  mov dword ptr [edi*4 + 0xa4955], eax
    X86_AT(c, 0xb8295u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4955u)), c.r[0]);
    // 0b829c  inc edi
    X86_AT(c, 0xb829cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0b829d  jmp 0xb8279
    X86_AT(c, 0xb829du);
    X86_POLL(c, 0xb8279u); goto L_b8279;
L_b829f:
    X86_TICK(c, 13);
    // 0b829f  mov al, byte ptr [0xa4934]
    X86_AT(c, 0xb829fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xA4934u))));
    // 0b82a4  push eax
    X86_AT(c, 0xb82a4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b82a5  call 0xb8938
    X86_AT(c, 0xb82a5u);
    push32(c, 0xb82aau); x86_call_known(c, 0xb8938u, f_000b8938); X86_RET(c, 0xb82aau);
    X86_TICK(c, 39);
    // 0b82aa  mov dword ptr [0xa49b5], eax
    X86_AT(c, 0xb82aau);
    wr32((c.sbase[3] + (uint32_t)(0xA49B5u)), c.r[0]);
    // 0b82af  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xb82afu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0b82b2  mov edx, dword ptr [eax + 0x20]
    X86_AT(c, 0xb82b2u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x20u)));
    // 0b82b5  mov dword ptr [0xa4935], edx
    X86_AT(c, 0xb82b5u);
    wr32((c.sbase[3] + (uint32_t)(0xA4935u)), c.r[2]);
    // 0b82bb  mov dword ptr [ebx], edx
    X86_AT(c, 0xb82bbu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[2]);
    // 0b82bd  add ebx, 4
    X86_AT(c, 0xb82bdu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b82c0  mov eax, dword ptr [eax + 0x24]
    X86_AT(c, 0xb82c0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x24u)));
    // 0b82c3  mov dword ptr [0xa4955], eax
    X86_AT(c, 0xb82c3u);
    wr32((c.sbase[3] + (uint32_t)(0xA4955u)), c.r[0]);
    // 0b82c8  mov dword ptr [ebx], eax
    X86_AT(c, 0xb82c8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0b82ca  add ebx, 4
    X86_AT(c, 0xb82cau);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b82cd  mov al, byte ptr [0xa4934]
    X86_AT(c, 0xb82cdu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xA4934u))));
    // 0b82d2  push eax
    X86_AT(c, 0xb82d2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b82d3  call 0xb8b4c
    X86_AT(c, 0xb82d3u);
    push32(c, 0xb82d8u); x86_call_known(c, 0xb8b4cu, f_000b8b4c); X86_RET(c, 0xb82d8u);
    X86_TICK(c, 25);
    // 0b82d8  mov dword ptr [0xa4975], eax
    X86_AT(c, 0xb82d8u);
    wr32((c.sbase[3] + (uint32_t)(0xA4975u)), c.r[0]);
    // 0b82dd  mov dword ptr [ebx], eax
    X86_AT(c, 0xb82ddu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0b82df  add ebx, 4
    X86_AT(c, 0xb82dfu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b82e2  inc esi
    X86_AT(c, 0xb82e2u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0b82e3  mov dword ptr [0x458a8], esi
    X86_AT(c, 0xb82e3u);
    wr32((c.sbase[3] + (uint32_t)(0x458A8u)), c.r[6]);
    // 0b82e9  mov al, byte ptr [ebp - 0xd]
    X86_AT(c, 0xb82e9u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))));
    // 0b82ec  mov byte ptr [0xa4934], al
    X86_AT(c, 0xb82ecu);
    wr8((c.sbase[3] + (uint32_t)(0xA4934u)), g8(c, 0));
    // 0b82f1  push 0x458a8
    X86_AT(c, 0xb82f1u);
    { uint32_t v = 0x458A8u; push32(c, v); }
    // 0b82f6  call 0xbd8a4
    X86_AT(c, 0xb82f6u);
    push32(c, 0xb82fbu); x86_call_known(c, 0xbd8a4u, f_000bd8a4); X86_RET(c, 0xb82fbu);
    X86_TICK(c, 9);
    // 0b82fb  add esp, 0xc
    X86_AT(c, 0xb82fbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0b82fe  jmp 0xb84db
    X86_AT(c, 0xb82feu);
    goto L_b84db;
L_b8303:
    X86_TICK(c, 12);
    // 0b8303  cmp dword ptr [0xa4a5a], 3
    X86_AT(c, 0xb8303u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A5Au))), 0x3u, 0, 4);
    // 0b830a  je 0xb8319
    X86_AT(c, 0xb830au);
    if (x86_cc(c, 4)) { goto L_b8319; }
    X86_TICK(c, 12);
    // 0b830c  cmp byte ptr [0xa4934], 0x89
    X86_AT(c, 0xb830cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xA4934u))), 0x89u, 0, 1);
    // 0b8313  jne 0xb83a5
    X86_AT(c, 0xb8313u);
    if (x86_cc(c, 5)) { goto L_b83a5; }
L_b8319:
    X86_TICK(c, 2);
    // 0b8319  sub edi, edi
    X86_AT(c, 0xb8319u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_b831b:
    X86_TICK(c, 7);
    // 0b831b  cmp edi, 8
    X86_AT(c, 0xb831bu);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0b831e  jge 0xb844d
    X86_AT(c, 0xb831eu);
    if (x86_cc(c, 13)) { goto L_b844d; }
    X86_TICK(c, 11);
    // 0b8324  mov dword ptr [edi*4 + 0xa4995], 0
    X86_AT(c, 0xb8324u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4995u)), 0x0u);
    // 0b832f  push 0xa
    X86_AT(c, 0xb832fu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0b8331  call 0xb61b4
    X86_AT(c, 0xb8331u);
    push32(c, 0xb8336u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xb8336u);
    X86_TICK(c, 9);
    // 0b8336  add esp, 4
    X86_AT(c, 0xb8336u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b8339  cmp eax, 5
    X86_AT(c, 0xb8339u);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0b833c  jge 0xb8349
    X86_AT(c, 0xb833cu);
    if (x86_cc(c, 13)) { goto L_b8349; }
    X86_TICK(c, 2);
    // 0b833e  mov dword ptr [edi*4 + 0xa4995], 1
    X86_AT(c, 0xb833eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4995u)), 0x1u);
L_b8349:
    X86_TICK(c, 13);
    // 0b8349  mov al, byte ptr [0xa4934]
    X86_AT(c, 0xb8349u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xA4934u))));
    // 0b834e  push eax
    X86_AT(c, 0xb834eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b834f  call 0xb8938
    X86_AT(c, 0xb834fu);
    push32(c, 0xb8354u); x86_call_known(c, 0xb8938u, f_000b8938); X86_RET(c, 0xb8354u);
    X86_TICK(c, 39);
    // 0b8354  mov dword ptr [edi*4 + 0xa49b5], eax
    X86_AT(c, 0xb8354u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA49B5u)), c.r[0]);
    // 0b835b  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xb835bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0b835e  mov edx, dword ptr [eax + edi*8]
    X86_AT(c, 0xb835eu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7] * 8)));
    // 0b8361  mov dword ptr [edi*4 + 0xa4935], edx
    X86_AT(c, 0xb8361u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4935u)), c.r[2]);
    // 0b8368  mov dword ptr [ebx], edx
    X86_AT(c, 0xb8368u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[2]);
    // 0b836a  add ebx, 4
    X86_AT(c, 0xb836au);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b836d  mov eax, dword ptr [eax + edi*8 + 4]
    X86_AT(c, 0xb836du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7] * 8 + 0x4u)));
    // 0b8371  mov dword ptr [edi*4 + 0xa4955], eax
    X86_AT(c, 0xb8371u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4955u)), c.r[0]);
    // 0b8378  mov dword ptr [ebx], eax
    X86_AT(c, 0xb8378u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0b837a  add ebx, 4
    X86_AT(c, 0xb837au);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b837d  mov al, byte ptr [0xa4934]
    X86_AT(c, 0xb837du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xA4934u))));
    // 0b8382  push eax
    X86_AT(c, 0xb8382u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b8383  call 0xb8b4c
    X86_AT(c, 0xb8383u);
    push32(c, 0xb8388u); x86_call_known(c, 0xb8b4cu, f_000b8b4c); X86_RET(c, 0xb8388u);
    X86_TICK(c, 25);
    // 0b8388  mov dword ptr [edi*4 + 0xa4975], eax
    X86_AT(c, 0xb8388u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4975u)), c.r[0]);
    // 0b838f  add eax, dword ptr [edi*4 + 0xa4995]
    X86_AT(c, 0xb838fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4995u))), 0, 4); }
    // 0b8396  mov dword ptr [ebx], eax
    X86_AT(c, 0xb8396u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0b8398  add ebx, 4
    X86_AT(c, 0xb8398u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b839b  inc esi
    X86_AT(c, 0xb839bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0b839c  inc edi
    X86_AT(c, 0xb839cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0b839d  add esp, 8
    X86_AT(c, 0xb839du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b83a0  jmp 0xb831b
    X86_AT(c, 0xb83a0u);
    X86_POLL(c, 0xb831bu); goto L_b831b;
L_b83a5:
    X86_TICK(c, 2);
    // 0b83a5  sub edi, edi
    X86_AT(c, 0xb83a5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_b83a7:
    X86_TICK(c, 7);
    // 0b83a7  cmp edi, 8
    X86_AT(c, 0xb83a7u);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0b83aa  jge 0xb844d
    X86_AT(c, 0xb83aau);
    if (x86_cc(c, 13)) { goto L_b844d; }
    X86_TICK(c, 11);
    // 0b83b0  mov dword ptr [edi*4 + 0xa4995], 0
    X86_AT(c, 0xb83b0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4995u)), 0x0u);
    // 0b83bb  push 0xa
    X86_AT(c, 0xb83bbu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0b83bd  call 0xb61b4
    X86_AT(c, 0xb83bdu);
    push32(c, 0xb83c2u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xb83c2u);
    X86_TICK(c, 9);
    // 0b83c2  add esp, 4
    X86_AT(c, 0xb83c2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b83c5  cmp eax, 5
    X86_AT(c, 0xb83c5u);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0b83c8  jge 0xb83d5
    X86_AT(c, 0xb83c8u);
    if (x86_cc(c, 13)) { goto L_b83d5; }
    X86_TICK(c, 2);
    // 0b83ca  mov dword ptr [edi*4 + 0xa4995], 1
    X86_AT(c, 0xb83cau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4995u)), 0x1u);
L_b83d5:
    X86_TICK(c, 9);
    // 0b83d5  push 0xa
    X86_AT(c, 0xb83d5u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0b83d7  call 0xb61b4
    X86_AT(c, 0xb83d7u);
    push32(c, 0xb83dcu); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xb83dcu);
    X86_TICK(c, 9);
    // 0b83dc  add esp, 4
    X86_AT(c, 0xb83dcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b83df  cmp eax, 5
    X86_AT(c, 0xb83dfu);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0b83e2  jge 0xb843c
    X86_AT(c, 0xb83e2u);
    if (x86_cc(c, 13)) { goto L_b843c; }
    X86_TICK(c, 13);
    // 0b83e4  mov al, byte ptr [0xa4934]
    X86_AT(c, 0xb83e4u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xA4934u))));
    // 0b83e9  push eax
    X86_AT(c, 0xb83e9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b83ea  call 0xb8938
    X86_AT(c, 0xb83eau);
    push32(c, 0xb83efu); x86_call_known(c, 0xb8938u, f_000b8938); X86_RET(c, 0xb83efu);
    X86_TICK(c, 39);
    // 0b83ef  mov dword ptr [edi*4 + 0xa49b5], eax
    X86_AT(c, 0xb83efu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA49B5u)), c.r[0]);
    // 0b83f6  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xb83f6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0b83f9  mov edx, dword ptr [eax + edi*8]
    X86_AT(c, 0xb83f9u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7] * 8)));
    // 0b83fc  mov dword ptr [edi*4 + 0xa4935], edx
    X86_AT(c, 0xb83fcu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4935u)), c.r[2]);
    // 0b8403  mov dword ptr [ebx], edx
    X86_AT(c, 0xb8403u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[2]);
    // 0b8405  add ebx, 4
    X86_AT(c, 0xb8405u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b8408  mov eax, dword ptr [eax + edi*8 + 4]
    X86_AT(c, 0xb8408u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7] * 8 + 0x4u)));
    // 0b840c  mov dword ptr [edi*4 + 0xa4955], eax
    X86_AT(c, 0xb840cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4955u)), c.r[0]);
    // 0b8413  mov dword ptr [ebx], eax
    X86_AT(c, 0xb8413u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0b8415  add ebx, 4
    X86_AT(c, 0xb8415u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b8418  mov al, byte ptr [0xa4934]
    X86_AT(c, 0xb8418u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xA4934u))));
    // 0b841d  push eax
    X86_AT(c, 0xb841du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b841e  call 0xb8b4c
    X86_AT(c, 0xb841eu);
    push32(c, 0xb8423u); x86_call_known(c, 0xb8b4cu, f_000b8b4c); X86_RET(c, 0xb8423u);
    X86_TICK(c, 23);
    // 0b8423  mov dword ptr [edi*4 + 0xa4975], eax
    X86_AT(c, 0xb8423u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4975u)), c.r[0]);
    // 0b842a  add eax, dword ptr [edi*4 + 0xa4995]
    X86_AT(c, 0xb842au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4995u))), 0, 4); }
    // 0b8431  mov dword ptr [ebx], eax
    X86_AT(c, 0xb8431u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0b8433  add ebx, 4
    X86_AT(c, 0xb8433u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b8436  inc esi
    X86_AT(c, 0xb8436u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0b8437  add esp, 8
    X86_AT(c, 0xb8437u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b843a  jmp 0xb8447
    X86_AT(c, 0xb843au);
    goto L_b8447;
L_b843c:
    X86_TICK(c, 2);
    // 0b843c  mov dword ptr [edi*4 + 0xa49b5], 0
    X86_AT(c, 0xb843cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA49B5u)), 0x0u);
L_b8447:
    X86_TICK(c, 9);
    // 0b8447  inc edi
    X86_AT(c, 0xb8447u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0b8448  jmp 0xb83a7
    X86_AT(c, 0xb8448u);
    X86_POLL(c, 0xb83a7u); goto L_b83a7;
L_b844d:
    X86_TICK(c, 7);
    // 0b844d  sub eax, eax
    X86_AT(c, 0xb844du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0b844f  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xb844fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0b8452  xchg edi, eax
    X86_AT(c, 0xb8452u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
L_b8453:
    X86_TICK(c, 7);
    // 0b8453  cmp edi, 8
    X86_AT(c, 0xb8453u);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0b8456  jge 0xb846e
    X86_AT(c, 0xb8456u);
    if (x86_cc(c, 13)) { goto L_b846e; }
    X86_TICK(c, 12);
    // 0b8458  cmp dword ptr [edi*4 + 0xa49b5], 0
    X86_AT(c, 0xb8458u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA49B5u))), 0x0u, 0, 4);
    // 0b8460  jle 0xb846b
    X86_AT(c, 0xb8460u);
    if (x86_cc(c, 14)) { goto L_b846b; }
    X86_TICK(c, 9);
    // 0b8462  mov dword ptr [ebp - 0xc], 1
    X86_AT(c, 0xb8462u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x1u);
    // 0b8469  jmp 0xb846e
    X86_AT(c, 0xb8469u);
    goto L_b846e;
L_b846b:
    X86_TICK(c, 9);
    // 0b846b  inc edi
    X86_AT(c, 0xb846bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0b846c  jmp 0xb8453
    X86_AT(c, 0xb846cu);
    X86_POLL(c, 0xb8453u); goto L_b8453;
L_b846e:
    X86_TICK(c, 12);
    // 0b846e  cmp dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xb846eu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x0u, 0, 4);
    // 0b8472  jne 0xb84c0
    X86_AT(c, 0xb8472u);
    if (x86_cc(c, 5)) { goto L_b84c0; }
    X86_TICK(c, 13);
    // 0b8474  mov al, byte ptr [0xa4934]
    X86_AT(c, 0xb8474u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xA4934u))));
    // 0b8479  push eax
    X86_AT(c, 0xb8479u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b847a  call 0xb8938
    X86_AT(c, 0xb847au);
    push32(c, 0xb847fu); x86_call_known(c, 0xb8938u, f_000b8938); X86_RET(c, 0xb847fu);
    X86_TICK(c, 39);
    // 0b847f  mov dword ptr [0xa49b5], eax
    X86_AT(c, 0xb847fu);
    wr32((c.sbase[3] + (uint32_t)(0xA49B5u)), c.r[0]);
    // 0b8484  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xb8484u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0b8487  mov edx, dword ptr [eax]
    X86_AT(c, 0xb8487u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0b8489  mov dword ptr [0xa4935], edx
    X86_AT(c, 0xb8489u);
    wr32((c.sbase[3] + (uint32_t)(0xA4935u)), c.r[2]);
    // 0b848f  mov dword ptr [ebx], edx
    X86_AT(c, 0xb848fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[2]);
    // 0b8491  add ebx, 4
    X86_AT(c, 0xb8491u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b8494  mov eax, dword ptr [eax + 4]
    X86_AT(c, 0xb8494u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)));
    // 0b8497  mov dword ptr [0xa4955], eax
    X86_AT(c, 0xb8497u);
    wr32((c.sbase[3] + (uint32_t)(0xA4955u)), c.r[0]);
    // 0b849c  mov dword ptr [ebx], eax
    X86_AT(c, 0xb849cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0b849e  add ebx, 4
    X86_AT(c, 0xb849eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b84a1  mov al, byte ptr [0xa4934]
    X86_AT(c, 0xb84a1u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xA4934u))));
    // 0b84a6  push eax
    X86_AT(c, 0xb84a6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b84a7  call 0xb8b4c
    X86_AT(c, 0xb84a7u);
    push32(c, 0xb84acu); x86_call_known(c, 0xb8b4cu, f_000b8b4c); X86_RET(c, 0xb84acu);
    X86_TICK(c, 16);
    // 0b84ac  mov dword ptr [0xa4975], eax
    X86_AT(c, 0xb84acu);
    wr32((c.sbase[3] + (uint32_t)(0xA4975u)), c.r[0]);
    // 0b84b1  add eax, dword ptr [0xa4995]
    X86_AT(c, 0xb84b1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xA4995u))), 0, 4); }
    // 0b84b7  mov dword ptr [ebx], eax
    X86_AT(c, 0xb84b7u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0b84b9  add ebx, 4
    X86_AT(c, 0xb84b9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b84bc  inc esi
    X86_AT(c, 0xb84bcu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0b84bd  add esp, 8
    X86_AT(c, 0xb84bdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_b84c0:
    X86_TICK(c, 17);
    // 0b84c0  mov dword ptr [0x458a8], esi
    X86_AT(c, 0xb84c0u);
    wr32((c.sbase[3] + (uint32_t)(0x458A8u)), c.r[6]);
    // 0b84c6  mov al, byte ptr [ebp - 0xd]
    X86_AT(c, 0xb84c6u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))));
    // 0b84c9  mov byte ptr [0xa4934], al
    X86_AT(c, 0xb84c9u);
    wr8((c.sbase[3] + (uint32_t)(0xA4934u)), g8(c, 0));
    // 0b84ce  push 0x458a8
    X86_AT(c, 0xb84ceu);
    { uint32_t v = 0x458A8u; push32(c, v); }
    // 0b84d3  call 0xbd8a4
    X86_AT(c, 0xb84d3u);
    push32(c, 0xb84d8u); x86_call_known(c, 0xbd8a4u, f_000bd8a4); X86_RET(c, 0xb84d8u);
    X86_TICK(c, 2);
    // 0b84d8  add esp, 4
    X86_AT(c, 0xb84d8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_b84db:
    X86_TICK(c, 28);
    // 0b84db  pop edi
    X86_AT(c, 0xb84dbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b84dc  pop esi
    X86_AT(c, 0xb84dcu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b84dd  pop ebx
    X86_AT(c, 0xb84ddu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0b84de  leave 
    X86_AT(c, 0xb84deu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b84df  ret 
    X86_AT(c, 0xb84dfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb811cu, "ran off the end of a function");
}
void f_000b84e0(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0b84e0  push ebp
    X86_AT(c, 0xb84e0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b84e1  mov ebp, esp
    X86_AT(c, 0xb84e1u);
    c.r[5] = c.r[4];
    // 0b84e3  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xb84e3u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0b84e6  cmp edx, 9
    X86_AT(c, 0xb84e6u);
    (void)x86_sub(c, c.r[2], 0x9u, 0, 4);
    // 0b84e9  ja 0xb86f9
    X86_AT(c, 0xb84e9u);
    if (x86_cc(c, 7)) { goto L_b86f9; }
    X86_TICK(c, 7);
    // 0b84ef  jmp dword ptr cs:[edx*4 + 0xb84f7]
    X86_AT(c, 0xb84efu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xB84F7u)));
      switch (t) {
      case 0xb851fu: goto L_b851f;
      case 0xb854fu: goto L_b854f;
      case 0xb857fu: goto L_b857f;
      case 0xb85afu: goto L_b85af;
      case 0xb85dfu: goto L_b85df;
      case 0xb860fu: goto L_b860f;
      case 0xb863fu: goto L_b863f;
      case 0xb866fu: goto L_b866f;
      case 0xb869fu: goto L_b869f;
      case 0xb86ccu: goto L_b86cc;
      default: x86_jump(c, t); return; } }
L_b851f:
    X86_TICK(c, 19);
    // 0b851f  push 0x7a
    X86_AT(c, 0xb851fu);
    { uint32_t v = 0x7Au; push32(c, v); }
    // 0b8521  push 0x1b
    X86_AT(c, 0xb8521u);
    { uint32_t v = 0x1Bu; push32(c, v); }
    // 0b8523  push 5
    X86_AT(c, 0xb8523u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0b8525  push 5
    X86_AT(c, 0xb8525u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0b8527  push 5
    X86_AT(c, 0xb8527u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0b8529  push 9
    X86_AT(c, 0xb8529u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0b852b  call 0xb615c
    X86_AT(c, 0xb852bu);
    push32(c, 0xb8530u); x86_call_known(c, 0xb615cu, f_000b615c); X86_RET(c, 0xb8530u);
    X86_TICK(c, 19);
    // 0b8530  push 0xa
    X86_AT(c, 0xb8530u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0b8532  push 7
    X86_AT(c, 0xb8532u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b8534  push 3
    X86_AT(c, 0xb8534u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0b8536  push 3
    X86_AT(c, 0xb8536u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0b8538  push 3
    X86_AT(c, 0xb8538u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0b853a  push 2
    X86_AT(c, 0xb853au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b853c  call 0xb612c
    X86_AT(c, 0xb853cu);
    push32(c, 0xb8541u); x86_call_known(c, 0xb612cu, f_000b612c); X86_RET(c, 0xb8541u);
    X86_TICK(c, 13);
    // 0b8541  push 0x1b
    X86_AT(c, 0xb8541u);
    { uint32_t v = 0x1Bu; push32(c, v); }
    // 0b8543  push 4
    X86_AT(c, 0xb8543u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0b8545  push 0x1ee4
    X86_AT(c, 0xb8545u);
    { uint32_t v = 0x1EE4u; push32(c, v); }
    // 0b854a  jmp 0xb8724
    X86_AT(c, 0xb854au);
    goto L_b8724;
L_b854f:
    X86_TICK(c, 19);
    // 0b854f  push 0x7a
    X86_AT(c, 0xb854fu);
    { uint32_t v = 0x7Au; push32(c, v); }
    // 0b8551  push 9
    X86_AT(c, 0xb8551u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0b8553  push 0x1f
    X86_AT(c, 0xb8553u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0b8555  push 0x12
    X86_AT(c, 0xb8555u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0b8557  push 0x12
    X86_AT(c, 0xb8557u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0b8559  push 0x12
    X86_AT(c, 0xb8559u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0b855b  call 0xb615c
    X86_AT(c, 0xb855bu);
    push32(c, 0xb8560u); x86_call_known(c, 0xb615cu, f_000b615c); X86_RET(c, 0xb8560u);
    X86_TICK(c, 19);
    // 0b8560  push 0xa
    X86_AT(c, 0xb8560u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0b8562  push 5
    X86_AT(c, 0xb8562u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0b8564  push 3
    X86_AT(c, 0xb8564u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0b8566  push 2
    X86_AT(c, 0xb8566u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b8568  push 2
    X86_AT(c, 0xb8568u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b856a  push 2
    X86_AT(c, 0xb856au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b856c  call 0xb612c
    X86_AT(c, 0xb856cu);
    push32(c, 0xb8571u); x86_call_known(c, 0xb612cu, f_000b612c); X86_RET(c, 0xb8571u);
    X86_TICK(c, 13);
    // 0b8571  push 0x1b
    X86_AT(c, 0xb8571u);
    { uint32_t v = 0x1Bu; push32(c, v); }
    // 0b8573  push 0
    X86_AT(c, 0xb8573u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0b8575  push 0x1ef4
    X86_AT(c, 0xb8575u);
    { uint32_t v = 0x1EF4u; push32(c, v); }
    // 0b857a  jmp 0xb8724
    X86_AT(c, 0xb857au);
    goto L_b8724;
L_b857f:
    X86_TICK(c, 19);
    // 0b857f  push 0x7a
    X86_AT(c, 0xb857fu);
    { uint32_t v = 0x7Au; push32(c, v); }
    // 0b8581  push 8
    X86_AT(c, 0xb8581u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0b8583  push 0x75
    X86_AT(c, 0xb8583u);
    { uint32_t v = 0x75u; push32(c, v); }
    // 0b8585  push 0xd
    X86_AT(c, 0xb8585u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0b8587  push 0xd
    X86_AT(c, 0xb8587u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0b8589  push 0x70
    X86_AT(c, 0xb8589u);
    { uint32_t v = 0x70u; push32(c, v); }
    // 0b858b  call 0xb615c
    X86_AT(c, 0xb858bu);
    push32(c, 0xb8590u); x86_call_known(c, 0xb615cu, f_000b615c); X86_RET(c, 0xb8590u);
    X86_TICK(c, 19);
    // 0b8590  push 0xa
    X86_AT(c, 0xb8590u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0b8592  push 7
    X86_AT(c, 0xb8592u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b8594  push 5
    X86_AT(c, 0xb8594u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0b8596  push 3
    X86_AT(c, 0xb8596u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0b8598  push 3
    X86_AT(c, 0xb8598u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0b859a  push 2
    X86_AT(c, 0xb859au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b859c  call 0xb612c
    X86_AT(c, 0xb859cu);
    push32(c, 0xb85a1u); x86_call_known(c, 0xb612cu, f_000b612c); X86_RET(c, 0xb85a1u);
    X86_TICK(c, 13);
    // 0b85a1  push 0x13
    X86_AT(c, 0xb85a1u);
    { uint32_t v = 0x13u; push32(c, v); }
    // 0b85a3  push 0
    X86_AT(c, 0xb85a3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0b85a5  push 0x1f08
    X86_AT(c, 0xb85a5u);
    { uint32_t v = 0x1F08u; push32(c, v); }
    // 0b85aa  jmp 0xb8724
    X86_AT(c, 0xb85aau);
    goto L_b8724;
L_b85af:
    X86_TICK(c, 19);
    // 0b85af  push 0x7a
    X86_AT(c, 0xb85afu);
    { uint32_t v = 0x7Au; push32(c, v); }
    // 0b85b1  push 0x20
    X86_AT(c, 0xb85b1u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0b85b3  push 4
    X86_AT(c, 0xb85b3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0b85b5  push 4
    X86_AT(c, 0xb85b5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0b85b7  push 0x16
    X86_AT(c, 0xb85b7u);
    { uint32_t v = 0x16u; push32(c, v); }
    // 0b85b9  push 0x16
    X86_AT(c, 0xb85b9u);
    { uint32_t v = 0x16u; push32(c, v); }
    // 0b85bb  call 0xb615c
    X86_AT(c, 0xb85bbu);
    push32(c, 0xb85c0u); x86_call_known(c, 0xb615cu, f_000b615c); X86_RET(c, 0xb85c0u);
    X86_TICK(c, 19);
    // 0b85c0  push 0xa
    X86_AT(c, 0xb85c0u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0b85c2  push 5
    X86_AT(c, 0xb85c2u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0b85c4  push 3
    X86_AT(c, 0xb85c4u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0b85c6  push 3
    X86_AT(c, 0xb85c6u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0b85c8  push 2
    X86_AT(c, 0xb85c8u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b85ca  push 2
    X86_AT(c, 0xb85cau);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b85cc  call 0xb612c
    X86_AT(c, 0xb85ccu);
    push32(c, 0xb85d1u); x86_call_known(c, 0xb612cu, f_000b612c); X86_RET(c, 0xb85d1u);
    X86_TICK(c, 13);
    // 0b85d1  push 0x16
    X86_AT(c, 0xb85d1u);
    { uint32_t v = 0x16u; push32(c, v); }
    // 0b85d3  push 0
    X86_AT(c, 0xb85d3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0b85d5  push 0x1f1c
    X86_AT(c, 0xb85d5u);
    { uint32_t v = 0x1F1Cu; push32(c, v); }
    // 0b85da  jmp 0xb8724
    X86_AT(c, 0xb85dau);
    goto L_b8724;
L_b85df:
    X86_TICK(c, 19);
    // 0b85df  push 0x7a
    X86_AT(c, 0xb85dfu);
    { uint32_t v = 0x7Au; push32(c, v); }
    // 0b85e1  push 0x72
    X86_AT(c, 0xb85e1u);
    { uint32_t v = 0x72u; push32(c, v); }
    // 0b85e3  push 8
    X86_AT(c, 0xb85e3u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0b85e5  push 0xc
    X86_AT(c, 0xb85e5u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0b85e7  push 0xc
    X86_AT(c, 0xb85e7u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0b85e9  push 1
    X86_AT(c, 0xb85e9u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b85eb  call 0xb615c
    X86_AT(c, 0xb85ebu);
    push32(c, 0xb85f0u); x86_call_known(c, 0xb615cu, f_000b615c); X86_RET(c, 0xb85f0u);
    X86_TICK(c, 19);
    // 0b85f0  push 0xa
    X86_AT(c, 0xb85f0u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0b85f2  push 7
    X86_AT(c, 0xb85f2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b85f4  push 5
    X86_AT(c, 0xb85f4u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0b85f6  push 3
    X86_AT(c, 0xb85f6u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0b85f8  push 3
    X86_AT(c, 0xb85f8u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0b85fa  push 2
    X86_AT(c, 0xb85fau);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b85fc  call 0xb612c
    X86_AT(c, 0xb85fcu);
    push32(c, 0xb8601u); x86_call_known(c, 0xb612cu, f_000b612c); X86_RET(c, 0xb8601u);
    X86_TICK(c, 13);
    // 0b8601  push 0x1f
    X86_AT(c, 0xb8601u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0b8603  push 4
    X86_AT(c, 0xb8603u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0b8605  push 0x1f30
    X86_AT(c, 0xb8605u);
    { uint32_t v = 0x1F30u; push32(c, v); }
    // 0b860a  jmp 0xb8724
    X86_AT(c, 0xb860au);
    goto L_b8724;
L_b860f:
    X86_TICK(c, 19);
    // 0b860f  push 0x7a
    X86_AT(c, 0xb860fu);
    { uint32_t v = 0x7Au; push32(c, v); }
    // 0b8611  push 0x16
    X86_AT(c, 0xb8611u);
    { uint32_t v = 0x16u; push32(c, v); }
    // 0b8613  push 0x16
    X86_AT(c, 0xb8613u);
    { uint32_t v = 0x16u; push32(c, v); }
    // 0b8615  push 0x54
    X86_AT(c, 0xb8615u);
    { uint32_t v = 0x54u; push32(c, v); }
    // 0b8617  push 0x54
    X86_AT(c, 0xb8617u);
    { uint32_t v = 0x54u; push32(c, v); }
    // 0b8619  push 0x13
    X86_AT(c, 0xb8619u);
    { uint32_t v = 0x13u; push32(c, v); }
    // 0b861b  call 0xb615c
    X86_AT(c, 0xb861bu);
    push32(c, 0xb8620u); x86_call_known(c, 0xb615cu, f_000b615c); X86_RET(c, 0xb8620u);
    X86_TICK(c, 19);
    // 0b8620  push 0xa
    X86_AT(c, 0xb8620u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0b8622  push 5
    X86_AT(c, 0xb8622u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0b8624  push 5
    X86_AT(c, 0xb8624u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0b8626  push 3
    X86_AT(c, 0xb8626u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0b8628  push 3
    X86_AT(c, 0xb8628u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0b862a  push 2
    X86_AT(c, 0xb862au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b862c  call 0xb612c
    X86_AT(c, 0xb862cu);
    push32(c, 0xb8631u); x86_call_known(c, 0xb612cu, f_000b612c); X86_RET(c, 0xb8631u);
    X86_TICK(c, 13);
    // 0b8631  push 0x23
    X86_AT(c, 0xb8631u);
    { uint32_t v = 0x23u; push32(c, v); }
    // 0b8633  push 8
    X86_AT(c, 0xb8633u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0b8635  push 0x1f44
    X86_AT(c, 0xb8635u);
    { uint32_t v = 0x1F44u; push32(c, v); }
    // 0b863a  jmp 0xb8724
    X86_AT(c, 0xb863au);
    goto L_b8724;
L_b863f:
    X86_TICK(c, 19);
    // 0b863f  push 0x7a
    X86_AT(c, 0xb863fu);
    { uint32_t v = 0x7Au; push32(c, v); }
    // 0b8641  push 0xc
    X86_AT(c, 0xb8641u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0b8643  push 0xc
    X86_AT(c, 0xb8643u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0b8645  push 9
    X86_AT(c, 0xb8645u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0b8647  push 0x72
    X86_AT(c, 0xb8647u);
    { uint32_t v = 0x72u; push32(c, v); }
    // 0b8649  push 4
    X86_AT(c, 0xb8649u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0b864b  call 0xb615c
    X86_AT(c, 0xb864bu);
    push32(c, 0xb8650u); x86_call_known(c, 0xb615cu, f_000b615c); X86_RET(c, 0xb8650u);
    X86_TICK(c, 19);
    // 0b8650  push 0xa
    X86_AT(c, 0xb8650u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0b8652  push 5
    X86_AT(c, 0xb8652u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0b8654  push 5
    X86_AT(c, 0xb8654u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0b8656  push 3
    X86_AT(c, 0xb8656u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0b8658  push 7
    X86_AT(c, 0xb8658u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b865a  push 2
    X86_AT(c, 0xb865au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b865c  call 0xb612c
    X86_AT(c, 0xb865cu);
    push32(c, 0xb8661u); x86_call_known(c, 0xb612cu, f_000b612c); X86_RET(c, 0xb8661u);
    X86_TICK(c, 13);
    // 0b8661  push 0x13
    X86_AT(c, 0xb8661u);
    { uint32_t v = 0x13u; push32(c, v); }
    // 0b8663  push 2
    X86_AT(c, 0xb8663u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b8665  push 0x1f54
    X86_AT(c, 0xb8665u);
    { uint32_t v = 0x1F54u; push32(c, v); }
    // 0b866a  jmp 0xb8724
    X86_AT(c, 0xb866au);
    goto L_b8724;
L_b866f:
    X86_TICK(c, 19);
    // 0b866f  push 0x7a
    X86_AT(c, 0xb866fu);
    { uint32_t v = 0x7Au; push32(c, v); }
    // 0b8671  push 0x1f
    X86_AT(c, 0xb8671u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0b8673  push 0x1f
    X86_AT(c, 0xb8673u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0b8675  push 0x38
    X86_AT(c, 0xb8675u);
    { uint32_t v = 0x38u; push32(c, v); }
    // 0b8677  push 0x38
    X86_AT(c, 0xb8677u);
    { uint32_t v = 0x38u; push32(c, v); }
    // 0b8679  push 8
    X86_AT(c, 0xb8679u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0b867b  call 0xb615c
    X86_AT(c, 0xb867bu);
    push32(c, 0xb8680u); x86_call_known(c, 0xb615cu, f_000b615c); X86_RET(c, 0xb8680u);
    X86_TICK(c, 19);
    // 0b8680  push 0xa
    X86_AT(c, 0xb8680u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0b8682  push 5
    X86_AT(c, 0xb8682u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0b8684  push 5
    X86_AT(c, 0xb8684u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0b8686  push 3
    X86_AT(c, 0xb8686u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0b8688  push 3
    X86_AT(c, 0xb8688u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0b868a  push 2
    X86_AT(c, 0xb868au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b868c  call 0xb612c
    X86_AT(c, 0xb868cu);
    push32(c, 0xb8691u); x86_call_known(c, 0xb612cu, f_000b612c); X86_RET(c, 0xb8691u);
    X86_TICK(c, 13);
    // 0b8691  push 0xf
    X86_AT(c, 0xb8691u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0b8693  push 0
    X86_AT(c, 0xb8693u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0b8695  push 0x1f68
    X86_AT(c, 0xb8695u);
    { uint32_t v = 0x1F68u; push32(c, v); }
    // 0b869a  jmp 0xb8724
    X86_AT(c, 0xb869au);
    goto L_b8724;
L_b869f:
    X86_TICK(c, 19);
    // 0b869f  push 0x7a
    X86_AT(c, 0xb869fu);
    { uint32_t v = 0x7Au; push32(c, v); }
    // 0b86a1  push 0x1f
    X86_AT(c, 0xb86a1u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0b86a3  push 0x1f
    X86_AT(c, 0xb86a3u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0b86a5  push 0x51
    X86_AT(c, 0xb86a5u);
    { uint32_t v = 0x51u; push32(c, v); }
    // 0b86a7  push 0x51
    X86_AT(c, 0xb86a7u);
    { uint32_t v = 0x51u; push32(c, v); }
    // 0b86a9  push 8
    X86_AT(c, 0xb86a9u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0b86ab  call 0xb615c
    X86_AT(c, 0xb86abu);
    push32(c, 0xb86b0u); x86_call_known(c, 0xb615cu, f_000b615c); X86_RET(c, 0xb86b0u);
    X86_TICK(c, 19);
    // 0b86b0  push 0xa
    X86_AT(c, 0xb86b0u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0b86b2  push 5
    X86_AT(c, 0xb86b2u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0b86b4  push 5
    X86_AT(c, 0xb86b4u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0b86b6  push 3
    X86_AT(c, 0xb86b6u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0b86b8  push 3
    X86_AT(c, 0xb86b8u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0b86ba  push 2
    X86_AT(c, 0xb86bau);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b86bc  call 0xb612c
    X86_AT(c, 0xb86bcu);
    push32(c, 0xb86c1u); x86_call_known(c, 0xb612cu, f_000b612c); X86_RET(c, 0xb86c1u);
    X86_TICK(c, 13);
    // 0b86c1  push 0xf
    X86_AT(c, 0xb86c1u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0b86c3  push 0
    X86_AT(c, 0xb86c3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0b86c5  push 0x1f7c
    X86_AT(c, 0xb86c5u);
    { uint32_t v = 0x1F7Cu; push32(c, v); }
    // 0b86ca  jmp 0xb8724
    X86_AT(c, 0xb86cau);
    goto L_b8724;
L_b86cc:
    X86_TICK(c, 19);
    // 0b86cc  push 0x7a
    X86_AT(c, 0xb86ccu);
    { uint32_t v = 0x7Au; push32(c, v); }
    // 0b86ce  push 0x1f
    X86_AT(c, 0xb86ceu);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0b86d0  push 0x1f
    X86_AT(c, 0xb86d0u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0b86d2  push 0x38
    X86_AT(c, 0xb86d2u);
    { uint32_t v = 0x38u; push32(c, v); }
    // 0b86d4  push 0x38
    X86_AT(c, 0xb86d4u);
    { uint32_t v = 0x38u; push32(c, v); }
    // 0b86d6  push 8
    X86_AT(c, 0xb86d6u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0b86d8  call 0xb615c
    X86_AT(c, 0xb86d8u);
    push32(c, 0xb86ddu); x86_call_known(c, 0xb615cu, f_000b615c); X86_RET(c, 0xb86ddu);
    X86_TICK(c, 19);
    // 0b86dd  push 0xa
    X86_AT(c, 0xb86ddu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0b86df  push 5
    X86_AT(c, 0xb86dfu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0b86e1  push 5
    X86_AT(c, 0xb86e1u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0b86e3  push 3
    X86_AT(c, 0xb86e3u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0b86e5  push 3
    X86_AT(c, 0xb86e5u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0b86e7  push 2
    X86_AT(c, 0xb86e7u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b86e9  call 0xb612c
    X86_AT(c, 0xb86e9u);
    push32(c, 0xb86eeu); x86_call_known(c, 0xb612cu, f_000b612c); X86_RET(c, 0xb86eeu);
    X86_TICK(c, 13);
    // 0b86ee  push 0xf
    X86_AT(c, 0xb86eeu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0b86f0  push 1
    X86_AT(c, 0xb86f0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b86f2  push 0x1f8c
    X86_AT(c, 0xb86f2u);
    { uint32_t v = 0x1F8Cu; push32(c, v); }
    // 0b86f7  jmp 0xb8724
    X86_AT(c, 0xb86f7u);
    goto L_b8724;
L_b86f9:
    X86_TICK(c, 19);
    // 0b86f9  push 0x7a
    X86_AT(c, 0xb86f9u);
    { uint32_t v = 0x7Au; push32(c, v); }
    // 0b86fb  push 3
    X86_AT(c, 0xb86fbu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0b86fd  push 4
    X86_AT(c, 0xb86fdu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0b86ff  push 4
    X86_AT(c, 0xb86ffu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0b8701  push 4
    X86_AT(c, 0xb8701u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0b8703  push 9
    X86_AT(c, 0xb8703u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0b8705  call 0xb615c
    X86_AT(c, 0xb8705u);
    push32(c, 0xb870au); x86_call_known(c, 0xb615cu, f_000b615c); X86_RET(c, 0xb870au);
    X86_TICK(c, 19);
    // 0b870a  push 0
    X86_AT(c, 0xb870au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0b870c  push 7
    X86_AT(c, 0xb870cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b870e  push 3
    X86_AT(c, 0xb870eu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0b8710  push 3
    X86_AT(c, 0xb8710u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0b8712  push 3
    X86_AT(c, 0xb8712u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0b8714  push 2
    X86_AT(c, 0xb8714u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b8716  call 0xb612c
    X86_AT(c, 0xb8716u);
    push32(c, 0xb871bu); x86_call_known(c, 0xb612cu, f_000b612c); X86_RET(c, 0xb871bu);
    X86_TICK(c, 6);
    // 0b871b  push 0x1b
    X86_AT(c, 0xb871bu);
    { uint32_t v = 0x1Bu; push32(c, v); }
    // 0b871d  push 4
    X86_AT(c, 0xb871du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0b871f  push 0x1fa0
    X86_AT(c, 0xb871fu);
    { uint32_t v = 0x1FA0u; push32(c, v); }
L_b8724:
    X86_TICK(c, 7);
    // 0b8724  call 0xb5ea8
    X86_AT(c, 0xb8724u);
    push32(c, 0xb8729u); x86_call_known(c, 0xb5ea8u, f_000b5ea8); X86_RET(c, 0xb8729u);
    X86_TICK(c, 18);
    // 0b8729  add esp, 0x3c
    X86_AT(c, 0xb8729u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0b872c  leave 
    X86_AT(c, 0xb872cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b872d  ret 
    X86_AT(c, 0xb872du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb84e0u, "ran off the end of a function");
}
void f_000b8724(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0b8724  call 0xb5ea8
    X86_AT(c, 0xb8724u);
    push32(c, 0xb8729u); x86_call_known(c, 0xb5ea8u, f_000b5ea8); X86_RET(c, 0xb8729u);
    X86_TICK(c, 18);
    // 0b8729  add esp, 0x3c
    X86_AT(c, 0xb8729u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0b872c  leave 
    X86_AT(c, 0xb872cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b872d  ret 
    X86_AT(c, 0xb872du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb8724u, "ran off the end of a function");
}
void f_000b8730(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0b8730  push ebp
    X86_AT(c, 0xb8730u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b8731  mov ebp, esp
    X86_AT(c, 0xb8731u);
    c.r[5] = c.r[4];
    // 0b8733  sub esp, 8
    X86_AT(c, 0xb8733u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0b8736  push ebx
    X86_AT(c, 0xb8736u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b8737  push esi
    X86_AT(c, 0xb8737u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b8738  push edi
    X86_AT(c, 0xb8738u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b8739  push 7
    X86_AT(c, 0xb8739u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b873b  call 0xbb6b0
    X86_AT(c, 0xb873bu);
    push32(c, 0xb8740u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xb8740u);
    X86_TICK(c, 11);
    // 0b8740  push 0x2054
    X86_AT(c, 0xb8740u);
    { uint32_t v = 0x2054u; push32(c, v); }
    // 0b8745  push 7
    X86_AT(c, 0xb8745u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b8747  call 0xba428
    X86_AT(c, 0xb8747u);
    push32(c, 0xb874cu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xb874cu);
    X86_TICK(c, 9);
    // 0b874c  push 7
    X86_AT(c, 0xb874cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b874e  call 0xbbb5c
    X86_AT(c, 0xb874eu);
    push32(c, 0xb8753u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb8753u);
    X86_TICK(c, 8);
    // 0b8753  sub eax, eax
    X86_AT(c, 0xb8753u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0b8755  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xb8755u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0b8758  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xb8758u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0b875b  add esp, 0x10
    X86_AT(c, 0xb875bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_b875e:
    X86_TICK(c, 11);
    // 0b875e  push 0x207c
    X86_AT(c, 0xb875eu);
    { uint32_t v = 0x207Cu; push32(c, v); }
    // 0b8763  push 7
    X86_AT(c, 0xb8763u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b8765  call 0xba428
    X86_AT(c, 0xb8765u);
    push32(c, 0xb876au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xb876au);
    X86_TICK(c, 9);
    // 0b876a  push 7
    X86_AT(c, 0xb876au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b876c  call 0xbbb5c
    X86_AT(c, 0xb876cu);
    push32(c, 0xb8771u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb8771u);
    X86_TICK(c, 17);
    // 0b8771  lea ebx, [ebp - 8]
    X86_AT(c, 0xb8771u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0b8774  push ebx
    X86_AT(c, 0xb8774u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b8775  lea esi, [ebp - 4]
    X86_AT(c, 0xb8775u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0b8778  push esi
    X86_AT(c, 0xb8778u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b8779  push 7
    X86_AT(c, 0xb8779u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b877b  call 0xbc428
    X86_AT(c, 0xb877bu);
    push32(c, 0xb8780u); x86_call_known(c, 0xbc428u, f_000bc428); X86_RET(c, 0xb8780u);
    X86_TICK(c, 9);
    // 0b8780  push 7
    X86_AT(c, 0xb8780u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b8782  call 0xb6308
    X86_AT(c, 0xb8782u);
    push32(c, 0xb8787u); x86_call_known(c, 0xb6308u, f_000b6308); X86_RET(c, 0xb8787u);
    X86_TICK(c, 22);
    // 0b8787  xchg edi, eax
    X86_AT(c, 0xb8787u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0b8788  push dword ptr [ebx]
    X86_AT(c, 0xb8788u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3]))); push32(c, v); }
    // 0b878a  push dword ptr [esi]
    X86_AT(c, 0xb878au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6]))); push32(c, v); }
    // 0b878c  push 7
    X86_AT(c, 0xb878cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b878e  call 0xbc174
    X86_AT(c, 0xb878eu);
    push32(c, 0xb8793u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb8793u);
    X86_TICK(c, 9);
    // 0b8793  add esp, 0x28
    X86_AT(c, 0xb8793u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0b8796  cmp edi, 0xffffffff
    X86_AT(c, 0xb8796u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0b8799  je 0xb87b1
    X86_AT(c, 0xb8799u);
    if (x86_cc(c, 4)) { goto L_b87b1; }
    X86_TICK(c, 7);
    // 0b879b  cmp edi, 1
    X86_AT(c, 0xb879bu);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0b879e  jl 0xb87a5
    X86_AT(c, 0xb879eu);
    if (x86_cc(c, 12)) { goto L_b87a5; }
    X86_TICK(c, 7);
    // 0b87a0  cmp edi, 0xc
    X86_AT(c, 0xb87a0u);
    (void)x86_sub(c, c.r[7], 0xCu, 0, 4);
    // 0b87a3  jle 0xb87b1
    X86_AT(c, 0xb87a3u);
    if (x86_cc(c, 14)) { goto L_b87b1; }
L_b87a5:
    X86_TICK(c, 9);
    // 0b87a5  push 1
    X86_AT(c, 0xb87a5u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b87a7  call 0xb607c
    X86_AT(c, 0xb87a7u);
    push32(c, 0xb87acu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xb87acu);
    X86_TICK(c, 9);
    // 0b87ac  add esp, 4
    X86_AT(c, 0xb87acu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b87af  jmp 0xb875e
    X86_AT(c, 0xb87afu);
    X86_POLL(c, 0xb875eu); goto L_b875e;
L_b87b1:
    X86_TICK(c, 7);
    // 0b87b1  cmp edi, 0xffffffff
    X86_AT(c, 0xb87b1u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0b87b4  je 0xb87d5
    X86_AT(c, 0xb87b4u);
    if (x86_cc(c, 4)) { goto L_b87d5; }
    X86_TICK(c, 16);
    // 0b87b6  dec edi
    X86_AT(c, 0xb87b6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0b87b7  push dword ptr [edi*4 + 0x46084]
    X86_AT(c, 0xb87b7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0x46084u))); push32(c, v); }
    // 0b87be  push 7
    X86_AT(c, 0xb87beu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b87c0  call 0xbbba4
    X86_AT(c, 0xb87c0u);
    push32(c, 0xb87c5u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb87c5u);
    X86_TICK(c, 9);
    // 0b87c5  push 7
    X86_AT(c, 0xb87c5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b87c7  call 0xbbb5c
    X86_AT(c, 0xb87c7u);
    push32(c, 0xb87ccu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb87ccu);
    X86_TICK(c, 9);
    // 0b87cc  push edi
    X86_AT(c, 0xb87ccu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b87cd  call 0xb84e0
    X86_AT(c, 0xb87cdu);
    push32(c, 0xb87d2u); x86_call_known(c, 0xb84e0u, f_000b84e0); X86_RET(c, 0xb87d2u);
    X86_TICK(c, 2);
    // 0b87d2  add esp, 0x10
    X86_AT(c, 0xb87d2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_b87d5:
    X86_TICK(c, 28);
    // 0b87d5  pop edi
    X86_AT(c, 0xb87d5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b87d6  pop esi
    X86_AT(c, 0xb87d6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b87d7  pop ebx
    X86_AT(c, 0xb87d7u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0b87d8  leave 
    X86_AT(c, 0xb87d8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b87d9  ret 
    X86_AT(c, 0xb87d9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb8730u, "ran off the end of a function");
}
void f_000b87dc(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0b87dc  push ebp
    X86_AT(c, 0xb87dcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b87dd  mov ebp, esp
    X86_AT(c, 0xb87ddu);
    c.r[5] = c.r[4];
    // 0b87df  sub esp, 8
    X86_AT(c, 0xb87dfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0b87e2  push ebx
    X86_AT(c, 0xb87e2u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b87e3  push esi
    X86_AT(c, 0xb87e3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b87e4  push edi
    X86_AT(c, 0xb87e4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b87e5  push 7
    X86_AT(c, 0xb87e5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b87e7  call 0xbb6b0
    X86_AT(c, 0xb87e7u);
    push32(c, 0xb87ecu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xb87ecu);
    X86_TICK(c, 11);
    // 0b87ec  push 0x2158
    X86_AT(c, 0xb87ecu);
    { uint32_t v = 0x2158u; push32(c, v); }
    // 0b87f1  push 7
    X86_AT(c, 0xb87f1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b87f3  call 0xba428
    X86_AT(c, 0xb87f3u);
    push32(c, 0xb87f8u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xb87f8u);
    X86_TICK(c, 9);
    // 0b87f8  push 7
    X86_AT(c, 0xb87f8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b87fa  call 0xbbb5c
    X86_AT(c, 0xb87fau);
    push32(c, 0xb87ffu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb87ffu);
    X86_TICK(c, 8);
    // 0b87ff  sub eax, eax
    X86_AT(c, 0xb87ffu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0b8801  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xb8801u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0b8804  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xb8804u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0b8807  add esp, 0x10
    X86_AT(c, 0xb8807u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_b880a:
    X86_TICK(c, 11);
    // 0b880a  push 0x2178
    X86_AT(c, 0xb880au);
    { uint32_t v = 0x2178u; push32(c, v); }
    // 0b880f  push 7
    X86_AT(c, 0xb880fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b8811  call 0xba428
    X86_AT(c, 0xb8811u);
    push32(c, 0xb8816u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xb8816u);
    X86_TICK(c, 9);
    // 0b8816  push 7
    X86_AT(c, 0xb8816u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b8818  call 0xbbb5c
    X86_AT(c, 0xb8818u);
    push32(c, 0xb881du); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb881du);
    X86_TICK(c, 17);
    // 0b881d  lea ebx, [ebp - 8]
    X86_AT(c, 0xb881du);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0b8820  push ebx
    X86_AT(c, 0xb8820u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b8821  lea esi, [ebp - 4]
    X86_AT(c, 0xb8821u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0b8824  push esi
    X86_AT(c, 0xb8824u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b8825  push 7
    X86_AT(c, 0xb8825u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b8827  call 0xbc428
    X86_AT(c, 0xb8827u);
    push32(c, 0xb882cu); x86_call_known(c, 0xbc428u, f_000bc428); X86_RET(c, 0xb882cu);
    X86_TICK(c, 9);
    // 0b882c  push 7
    X86_AT(c, 0xb882cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b882e  call 0xb6308
    X86_AT(c, 0xb882eu);
    push32(c, 0xb8833u); x86_call_known(c, 0xb6308u, f_000b6308); X86_RET(c, 0xb8833u);
    X86_TICK(c, 22);
    // 0b8833  xchg edi, eax
    X86_AT(c, 0xb8833u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0b8834  push dword ptr [ebx]
    X86_AT(c, 0xb8834u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3]))); push32(c, v); }
    // 0b8836  push dword ptr [esi]
    X86_AT(c, 0xb8836u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6]))); push32(c, v); }
    // 0b8838  push 7
    X86_AT(c, 0xb8838u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b883a  call 0xbc174
    X86_AT(c, 0xb883au);
    push32(c, 0xb883fu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb883fu);
    X86_TICK(c, 9);
    // 0b883f  add esp, 0x28
    X86_AT(c, 0xb883fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0b8842  cmp edi, 0xffffffff
    X86_AT(c, 0xb8842u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0b8845  je 0xb885d
    X86_AT(c, 0xb8845u);
    if (x86_cc(c, 4)) { goto L_b885d; }
    X86_TICK(c, 7);
    // 0b8847  cmp edi, 1
    X86_AT(c, 0xb8847u);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0b884a  jl 0xb8851
    X86_AT(c, 0xb884au);
    if (x86_cc(c, 12)) { goto L_b8851; }
    X86_TICK(c, 7);
    // 0b884c  cmp edi, 0xe
    X86_AT(c, 0xb884cu);
    (void)x86_sub(c, c.r[7], 0xEu, 0, 4);
    // 0b884f  jle 0xb885d
    X86_AT(c, 0xb884fu);
    if (x86_cc(c, 14)) { goto L_b885d; }
L_b8851:
    X86_TICK(c, 9);
    // 0b8851  push 1
    X86_AT(c, 0xb8851u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b8853  call 0xb607c
    X86_AT(c, 0xb8853u);
    push32(c, 0xb8858u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xb8858u);
    X86_TICK(c, 9);
    // 0b8858  add esp, 4
    X86_AT(c, 0xb8858u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b885b  jmp 0xb880a
    X86_AT(c, 0xb885bu);
    X86_POLL(c, 0xb880au); goto L_b880a;
L_b885d:
    X86_TICK(c, 7);
    // 0b885d  cmp edi, 0xffffffff
    X86_AT(c, 0xb885du);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0b8860  je 0xb8881
    X86_AT(c, 0xb8860u);
    if (x86_cc(c, 4)) { goto L_b8881; }
    X86_TICK(c, 16);
    // 0b8862  dec edi
    X86_AT(c, 0xb8862u);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0b8863  push dword ptr [edi*4 + 0x460ac]
    X86_AT(c, 0xb8863u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0x460ACu))); push32(c, v); }
    // 0b886a  push 7
    X86_AT(c, 0xb886au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b886c  call 0xbbba4
    X86_AT(c, 0xb886cu);
    push32(c, 0xb8871u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb8871u);
    X86_TICK(c, 9);
    // 0b8871  push 7
    X86_AT(c, 0xb8871u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b8873  call 0xbbb5c
    X86_AT(c, 0xb8873u);
    push32(c, 0xb8878u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xb8878u);
    X86_TICK(c, 9);
    // 0b8878  push edi
    X86_AT(c, 0xb8878u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b8879  call 0xb607c
    X86_AT(c, 0xb8879u);
    push32(c, 0xb887eu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xb887eu);
    X86_TICK(c, 2);
    // 0b887e  add esp, 0x10
    X86_AT(c, 0xb887eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_b8881:
    X86_TICK(c, 28);
    // 0b8881  pop edi
    X86_AT(c, 0xb8881u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b8882  pop esi
    X86_AT(c, 0xb8882u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b8883  pop ebx
    X86_AT(c, 0xb8883u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0b8884  leave 
    X86_AT(c, 0xb8884u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b8885  ret 
    X86_AT(c, 0xb8885u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb87dcu, "ran off the end of a function");
}
void f_000b8888(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0b8888  push ebp
    X86_AT(c, 0xb8888u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b8889  mov ebp, esp
    X86_AT(c, 0xb8889u);
    c.r[5] = c.r[4];
    // 0b888b  push 0xffffffff
    X86_AT(c, 0xb888bu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0b888d  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xb888du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0b8890  push dword ptr [eax*4 + 0x45ee0]
    X86_AT(c, 0xb8890u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x45EE0u))); push32(c, v); }
    // 0b8897  call 0xb4ef8
    X86_AT(c, 0xb8897u);
    push32(c, 0xb889cu); x86_call_known(c, 0xb4ef8u, f_000b4ef8); X86_RET(c, 0xb889cu);
    X86_TICK(c, 16);
    // 0b889c  leave 
    X86_AT(c, 0xb889cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b889d  ret 
    X86_AT(c, 0xb889du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb8888u, "ran off the end of a function");
}
void f_000b88a0(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0b88a0  push 1
    X86_AT(c, 0xb88a0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b88a2  call 0xba6a0
    X86_AT(c, 0xb88a2u);
    push32(c, 0xb88a7u); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xb88a7u);
    X86_TICK(c, 15);
    // 0b88a7  push 0
    X86_AT(c, 0xb88a7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0b88a9  push 0x96
    X86_AT(c, 0xb88a9u);
    { uint32_t v = 0x96u; push32(c, v); }
    // 0b88ae  push 0xc8
    X86_AT(c, 0xb88aeu);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0b88b3  push 1
    X86_AT(c, 0xb88b3u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b88b5  call 0xba4d4
    X86_AT(c, 0xb88b5u);
    push32(c, 0xb88bau); x86_call_known(c, 0xba4d4u, f_000ba4d4); X86_RET(c, 0xb88bau);
    X86_TICK(c, 15);
    // 0b88ba  push 0
    X86_AT(c, 0xb88bau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0b88bc  push 0xff
    X86_AT(c, 0xb88bcu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b88c1  push 0
    X86_AT(c, 0xb88c1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0b88c3  push 2
    X86_AT(c, 0xb88c3u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b88c5  call 0xba4d4
    X86_AT(c, 0xb88c5u);
    push32(c, 0xb88cau); x86_call_known(c, 0xba4d4u, f_000ba4d4); X86_RET(c, 0xb88cau);
    X86_TICK(c, 15);
    // 0b88ca  push 5
    X86_AT(c, 0xb88cau);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0b88cc  push 0xc8
    X86_AT(c, 0xb88ccu);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0b88d1  push 0
    X86_AT(c, 0xb88d1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0b88d3  push 4
    X86_AT(c, 0xb88d3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0b88d5  call 0xba4d4
    X86_AT(c, 0xb88d5u);
    push32(c, 0xb88dau); x86_call_known(c, 0xba4d4u, f_000ba4d4); X86_RET(c, 0xb88dau);
    X86_TICK(c, 15);
    // 0b88da  push 0
    X86_AT(c, 0xb88dau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0b88dc  push 0x64
    X86_AT(c, 0xb88dcu);
    { uint32_t v = 0x64u; push32(c, v); }
    // 0b88de  push 0
    X86_AT(c, 0xb88deu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0b88e0  push 5
    X86_AT(c, 0xb88e0u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0b88e2  call 0xba4d4
    X86_AT(c, 0xb88e2u);
    push32(c, 0xb88e7u); x86_call_known(c, 0xba4d4u, f_000ba4d4); X86_RET(c, 0xb88e7u);
    X86_TICK(c, 17);
    // 0b88e7  add esp, 0x44
    X86_AT(c, 0xb88e7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 0b88ea  push 0x96
    X86_AT(c, 0xb88eau);
    { uint32_t v = 0x96u; push32(c, v); }
    // 0b88ef  push 0xff
    X86_AT(c, 0xb88efu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b88f4  push 0
    X86_AT(c, 0xb88f4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0b88f6  push 6
    X86_AT(c, 0xb88f6u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0b88f8  call 0xba4d4
    X86_AT(c, 0xb88f8u);
    push32(c, 0xb88fdu); x86_call_known(c, 0xba4d4u, f_000ba4d4); X86_RET(c, 0xb88fdu);
    X86_TICK(c, 15);
    // 0b88fd  push 0xff
    X86_AT(c, 0xb88fdu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b8902  push 0xff
    X86_AT(c, 0xb8902u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b8907  push 0xff
    X86_AT(c, 0xb8907u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0b890c  push 7
    X86_AT(c, 0xb890cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0b890e  call 0xba4d4
    X86_AT(c, 0xb890eu);
    push32(c, 0xb8913u); x86_call_known(c, 0xba4d4u, f_000ba4d4); X86_RET(c, 0xb8913u);
    X86_TICK(c, 9);
    // 0b8913  push 0
    X86_AT(c, 0xb8913u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0b8915  call 0xba6a0
    X86_AT(c, 0xb8915u);
    push32(c, 0xb891au); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xb891au);
    X86_TICK(c, 12);
    // 0b891a  add esp, 0x24
    X86_AT(c, 0xb891au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0b891d  ret 
    X86_AT(c, 0xb891du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb88a0u, "ran off the end of a function");
}
void f_000b8920(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0b8920  push 1
    X86_AT(c, 0xb8920u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b8922  call 0xba6a0
    X86_AT(c, 0xb8922u);
    push32(c, 0xb8927u); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xb8927u);
    X86_TICK(c, 7);
    // 0b8927  call 0xba464
    X86_AT(c, 0xb8927u);
    push32(c, 0xb892cu); x86_call_known(c, 0xba464u, f_000ba464); X86_RET(c, 0xb892cu);
    X86_TICK(c, 9);
    // 0b892c  push 0
    X86_AT(c, 0xb892cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0b892e  call 0xba6a0
    X86_AT(c, 0xb892eu);
    push32(c, 0xb8933u); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xb8933u);
    X86_TICK(c, 12);
    // 0b8933  add esp, 8
    X86_AT(c, 0xb8933u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b8936  ret 
    X86_AT(c, 0xb8936u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb8920u, "ran off the end of a function");
}
void f_000b8938(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0b8938  push ebp
    X86_AT(c, 0xb8938u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b8939  mov ebp, esp
    X86_AT(c, 0xb8939u);
    c.r[5] = c.r[4];
    // 0b893b  push edi
    X86_AT(c, 0xb893bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b893c  movzx edx, byte ptr [ebp + 8]
    X86_AT(c, 0xb893cu);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0b8940  sub edx, 0x81
    X86_AT(c, 0xb8940u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x81u, 0, 4); }
    // 0b8946  cmp edx, 0x1f
    X86_AT(c, 0xb8946u);
    (void)x86_sub(c, c.r[2], 0x1Fu, 0, 4);
    // 0b8949  ja 0xb8a30
    X86_AT(c, 0xb8949u);
    if (x86_cc(c, 7)) { goto L_b8a30; }
    X86_TICK(c, 7);
    // 0b894f  jmp dword ptr cs:[edx*4 + 0xb8957]
    X86_AT(c, 0xb894fu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xB8957u)));
      switch (t) {
      case 0xb89d7u: goto L_b89d7;
      case 0xb89deu: goto L_b89de;
      case 0xb89e5u: goto L_b89e5;
      case 0xb89ecu: goto L_b89ec;
      case 0xb89f3u: goto L_b89f3;
      case 0xb89fau: goto L_b89fa;
      case 0xb8a01u: goto L_b8a01;
      case 0xb8a08u: goto L_b8a08;
      case 0xb8a0fu: goto L_b8a0f;
      case 0xb8a16u: goto L_b8a16;
      case 0xb8a1du: goto L_b8a1d;
      case 0xb8a24u: goto L_b8a24;
      case 0xb8a2bu: goto L_b8a2b;
      case 0xb8a30u: goto L_b8a30;
      default: x86_jump(c, t); return; } }
L_b89d7:
    X86_TICK(c, 9);
    // 0b89d7  mov edi, 0x60
    X86_AT(c, 0xb89d7u);
    c.r[7] = 0x60u;
    // 0b89dc  jmp 0xb8a30
    X86_AT(c, 0xb89dcu);
    goto L_b8a30;
L_b89de:
    X86_TICK(c, 9);
    // 0b89de  mov edi, 0xa0
    X86_AT(c, 0xb89deu);
    c.r[7] = 0xA0u;
    // 0b89e3  jmp 0xb8a30
    X86_AT(c, 0xb89e3u);
    goto L_b8a30;
L_b89e5:
    X86_TICK(c, 9);
    // 0b89e5  mov edi, 0x80
    X86_AT(c, 0xb89e5u);
    c.r[7] = 0x80u;
    // 0b89ea  jmp 0xb8a30
    X86_AT(c, 0xb89eau);
    goto L_b8a30;
L_b89ec:
    X86_TICK(c, 9);
    // 0b89ec  mov edi, 0xb4
    X86_AT(c, 0xb89ecu);
    c.r[7] = 0xB4u;
    // 0b89f1  jmp 0xb8a30
    X86_AT(c, 0xb89f1u);
    goto L_b8a30;
L_b89f3:
    X86_TICK(c, 9);
    // 0b89f3  mov edi, 0xc0
    X86_AT(c, 0xb89f3u);
    c.r[7] = 0xC0u;
    // 0b89f8  jmp 0xb8a30
    X86_AT(c, 0xb89f8u);
    goto L_b8a30;
L_b89fa:
    X86_TICK(c, 9);
    // 0b89fa  mov edi, 0x12c
    X86_AT(c, 0xb89fau);
    c.r[7] = 0x12Cu;
    // 0b89ff  jmp 0xb8a30
    X86_AT(c, 0xb89ffu);
    goto L_b8a30;
L_b8a01:
    X86_TICK(c, 9);
    // 0b8a01  mov edi, 0x140
    X86_AT(c, 0xb8a01u);
    c.r[7] = 0x140u;
    // 0b8a06  jmp 0xb8a30
    X86_AT(c, 0xb8a06u);
    goto L_b8a30;
L_b8a08:
    X86_TICK(c, 9);
    // 0b8a08  mov edi, 0x20
    X86_AT(c, 0xb8a08u);
    c.r[7] = 0x20u;
    // 0b8a0d  jmp 0xb8a30
    X86_AT(c, 0xb8a0du);
    goto L_b8a30;
L_b8a0f:
    X86_TICK(c, 9);
    // 0b8a0f  mov edi, 0x30
    X86_AT(c, 0xb8a0fu);
    c.r[7] = 0x30u;
    // 0b8a14  jmp 0xb8a30
    X86_AT(c, 0xb8a14u);
    goto L_b8a30;
L_b8a16:
    X86_TICK(c, 9);
    // 0b8a16  mov edi, 0x50
    X86_AT(c, 0xb8a16u);
    c.r[7] = 0x50u;
    // 0b8a1b  jmp 0xb8a30
    X86_AT(c, 0xb8a1bu);
    goto L_b8a30;
L_b8a1d:
    X86_TICK(c, 9);
    // 0b8a1d  mov edi, 0xe0
    X86_AT(c, 0xb8a1du);
    c.r[7] = 0xE0u;
    // 0b8a22  jmp 0xb8a30
    X86_AT(c, 0xb8a22u);
    goto L_b8a30;
L_b8a24:
    X86_TICK(c, 9);
    // 0b8a24  mov edi, 0xf0
    X86_AT(c, 0xb8a24u);
    c.r[7] = 0xF0u;
    // 0b8a29  jmp 0xb8a30
    X86_AT(c, 0xb8a29u);
    goto L_b8a30;
L_b8a2b:
    X86_TICK(c, 2);
    // 0b8a2b  mov edi, 0x70
    X86_AT(c, 0xb8a2bu);
    c.r[7] = 0x70u;
L_b8a30:
    X86_TICK(c, 9);
    // 0b8a30  push 0xf
    X86_AT(c, 0xb8a30u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0b8a32  call 0xb61b4
    X86_AT(c, 0xb8a32u);
    push32(c, 0xb8a37u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xb8a37u);
    X86_TICK(c, 70);
    // 0b8a37  add edi, eax
    X86_AT(c, 0xb8a37u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 0b8a39  mov eax, edi
    X86_AT(c, 0xb8a39u);
    c.r[0] = c.r[7];
    // 0b8a3b  cdq 
    X86_AT(c, 0xb8a3bu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0b8a3c  mov ecx, 3
    X86_AT(c, 0xb8a3cu);
    c.r[1] = 0x3u;
    // 0b8a41  idiv ecx
    X86_AT(c, 0xb8a41u);
    x86_idiv(c, c.r[1], 4, 0xb8a41u);
    // 0b8a43  add esp, 4
    X86_AT(c, 0xb8a43u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b8a46  pop edi
    X86_AT(c, 0xb8a46u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b8a47  leave 
    X86_AT(c, 0xb8a47u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b8a48  ret 
    X86_AT(c, 0xb8a48u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb8938u, "ran off the end of a function");
}
void f_000b8a4c(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0b8a4c  push ebp
    X86_AT(c, 0xb8a4cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b8a4d  mov ebp, esp
    X86_AT(c, 0xb8a4du);
    c.r[5] = c.r[4];
    // 0b8a4f  push edi
    X86_AT(c, 0xb8a4fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b8a50  movzx edx, byte ptr [ebp + 8]
    X86_AT(c, 0xb8a50u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0b8a54  sub edx, 0x81
    X86_AT(c, 0xb8a54u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x81u, 0, 4); }
    // 0b8a5a  cmp edx, 0x1f
    X86_AT(c, 0xb8a5au);
    (void)x86_sub(c, c.r[2], 0x1Fu, 0, 4);
    // 0b8a5d  ja 0xb8b33
    X86_AT(c, 0xb8a5du);
    if (x86_cc(c, 7)) { goto L_b8b33; }
    X86_TICK(c, 7);
    // 0b8a63  jmp dword ptr cs:[edx*4 + 0xb8a6b]
    X86_AT(c, 0xb8a63u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xB8A6Bu)));
      switch (t) {
      case 0xb8aebu: goto L_b8aeb;
      case 0xb8af2u: goto L_b8af2;
      case 0xb8af9u: goto L_b8af9;
      case 0xb8b00u: goto L_b8b00;
      case 0xb8b07u: goto L_b8b07;
      case 0xb8b0eu: goto L_b8b0e;
      case 0xb8b15u: goto L_b8b15;
      case 0xb8b1cu: goto L_b8b1c;
      case 0xb8b23u: goto L_b8b23;
      case 0xb8b2au: goto L_b8b2a;
      case 0xb8b2eu: goto L_b8b2e;
      case 0xb8b33u: goto L_b8b33;
      default: x86_jump(c, t); return; } }
L_b8aeb:
    X86_TICK(c, 9);
    // 0b8aeb  mov edi, 1
    X86_AT(c, 0xb8aebu);
    c.r[7] = 0x1u;
    // 0b8af0  jmp 0xb8b33
    X86_AT(c, 0xb8af0u);
    goto L_b8b33;
L_b8af2:
    X86_TICK(c, 9);
    // 0b8af2  mov edi, 5
    X86_AT(c, 0xb8af2u);
    c.r[7] = 0x5u;
    // 0b8af7  jmp 0xb8b33
    X86_AT(c, 0xb8af7u);
    goto L_b8b33;
L_b8af9:
    X86_TICK(c, 9);
    // 0b8af9  mov edi, 8
    X86_AT(c, 0xb8af9u);
    c.r[7] = 0x8u;
    // 0b8afe  jmp 0xb8b33
    X86_AT(c, 0xb8afeu);
    goto L_b8b33;
L_b8b00:
    X86_TICK(c, 9);
    // 0b8b00  mov edi, 0xa
    X86_AT(c, 0xb8b00u);
    c.r[7] = 0xAu;
    // 0b8b05  jmp 0xb8b33
    X86_AT(c, 0xb8b05u);
    goto L_b8b33;
L_b8b07:
    X86_TICK(c, 9);
    // 0b8b07  mov edi, 2
    X86_AT(c, 0xb8b07u);
    c.r[7] = 0x2u;
    // 0b8b0c  jmp 0xb8b33
    X86_AT(c, 0xb8b0cu);
    goto L_b8b33;
L_b8b0e:
    X86_TICK(c, 9);
    // 0b8b0e  mov edi, 3
    X86_AT(c, 0xb8b0eu);
    c.r[7] = 0x3u;
    // 0b8b13  jmp 0xb8b33
    X86_AT(c, 0xb8b13u);
    goto L_b8b33;
L_b8b15:
    X86_TICK(c, 9);
    // 0b8b15  mov edi, 4
    X86_AT(c, 0xb8b15u);
    c.r[7] = 0x4u;
    // 0b8b1a  jmp 0xb8b33
    X86_AT(c, 0xb8b1au);
    goto L_b8b33;
L_b8b1c:
    X86_TICK(c, 9);
    // 0b8b1c  mov edi, 0xf
    X86_AT(c, 0xb8b1cu);
    c.r[7] = 0xFu;
    // 0b8b21  jmp 0xb8b33
    X86_AT(c, 0xb8b21u);
    goto L_b8b33;
L_b8b23:
    X86_TICK(c, 9);
    // 0b8b23  mov edi, 0x14
    X86_AT(c, 0xb8b23u);
    c.r[7] = 0x14u;
    // 0b8b28  jmp 0xb8b33
    X86_AT(c, 0xb8b28u);
    goto L_b8b33;
L_b8b2a:
    X86_TICK(c, 9);
    // 0b8b2a  sub edi, edi
    X86_AT(c, 0xb8b2au);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0b8b2c  jmp 0xb8b33
    X86_AT(c, 0xb8b2cu);
    goto L_b8b33;
L_b8b2e:
    X86_TICK(c, 2);
    // 0b8b2e  mov edi, 6
    X86_AT(c, 0xb8b2eu);
    c.r[7] = 0x6u;
L_b8b33:
    X86_TICK(c, 9);
    // 0b8b33  push edi
    X86_AT(c, 0xb8b33u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b8b34  call 0xb61b4
    X86_AT(c, 0xb8b34u);
    push32(c, 0xb8b39u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xb8b39u);
    X86_TICK(c, 70);
    // 0b8b39  cdq 
    X86_AT(c, 0xb8b39u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0b8b3a  mov ecx, 3
    X86_AT(c, 0xb8b3au);
    c.r[1] = 0x3u;
    // 0b8b3f  idiv ecx
    X86_AT(c, 0xb8b3fu);
    x86_idiv(c, c.r[1], 4, 0xb8b3fu);
    // 0b8b41  add edi, eax
    X86_AT(c, 0xb8b41u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 0b8b43  mov eax, edi
    X86_AT(c, 0xb8b43u);
    c.r[0] = c.r[7];
    // 0b8b45  add esp, 4
    X86_AT(c, 0xb8b45u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b8b48  pop edi
    X86_AT(c, 0xb8b48u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b8b49  leave 
    X86_AT(c, 0xb8b49u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b8b4a  ret 
    X86_AT(c, 0xb8b4au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb8a4cu, "ran off the end of a function");
}
void f_000b8b4c(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0b8b4c  push ebp
    X86_AT(c, 0xb8b4cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b8b4d  mov ebp, esp
    X86_AT(c, 0xb8b4du);
    c.r[5] = c.r[4];
    // 0b8b4f  push esi
    X86_AT(c, 0xb8b4fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b8b50  push edi
    X86_AT(c, 0xb8b50u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b8b51  sub edi, edi
    X86_AT(c, 0xb8b51u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0b8b53  mov esi, edi
    X86_AT(c, 0xb8b53u);
    c.r[6] = c.r[7];
    // 0b8b55  push 3
    X86_AT(c, 0xb8b55u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0b8b57  call 0xb61b4
    X86_AT(c, 0xb8b57u);
    push32(c, 0xb8b5cu); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xb8b5cu);
    X86_TICK(c, 9);
    // 0b8b5c  add esp, 4
    X86_AT(c, 0xb8b5cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b8b5f  cmp edi, eax
    X86_AT(c, 0xb8b5fu);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 0b8b61  jne 0xb8b73
    X86_AT(c, 0xb8b61u);
    if (x86_cc(c, 5)) { goto L_b8b73; }
    X86_TICK(c, 11);
    // 0b8b63  inc esi
    X86_AT(c, 0xb8b63u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0b8b64  push 2
    X86_AT(c, 0xb8b64u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0b8b66  call 0xb61b4
    X86_AT(c, 0xb8b66u);
    push32(c, 0xb8b6bu); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xb8b6bu);
    X86_TICK(c, 9);
    // 0b8b6b  add esp, 4
    X86_AT(c, 0xb8b6bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b8b6e  cmp edi, eax
    X86_AT(c, 0xb8b6eu);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 0b8b70  jne 0xb8b73
    X86_AT(c, 0xb8b70u);
    if (x86_cc(c, 5)) { goto L_b8b73; }
    X86_TICK(c, 2);
    // 0b8b72  inc esi
    X86_AT(c, 0xb8b72u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_b8b73:
    X86_TICK(c, 15);
    // 0b8b73  movzx edx, byte ptr [ebp + 8]
    X86_AT(c, 0xb8b73u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0b8b77  sub edx, 0x81
    X86_AT(c, 0xb8b77u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x81u, 0, 4); }
    // 0b8b7d  cmp edx, 0x1f
    X86_AT(c, 0xb8b7du);
    (void)x86_sub(c, c.r[2], 0x1Fu, 0, 4);
    // 0b8b80  ja 0xb8c99
    X86_AT(c, 0xb8b80u);
    if (x86_cc(c, 7)) { goto L_b8c99; }
    X86_TICK(c, 7);
    // 0b8b86  jmp dword ptr cs:[edx*4 + 0xb8b8e]
    X86_AT(c, 0xb8b86u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xB8B8Eu)));
      switch (t) {
      case 0xb8c0eu: goto L_b8c0e;
      case 0xb8c18u: goto L_b8c18;
      case 0xb8c22u: goto L_b8c22;
      case 0xb8c2cu: goto L_b8c2c;
      case 0xb8c36u: goto L_b8c36;
      case 0xb8c40u: goto L_b8c40;
      case 0xb8c47u: goto L_b8c47;
      case 0xb8c4eu: goto L_b8c4e;
      case 0xb8c54u: goto L_b8c54;
      case 0xb8c5au: goto L_b8c5a;
      case 0xb8c60u: goto L_b8c60;
      case 0xb8c66u: goto L_b8c66;
      case 0xb8c6cu: goto L_b8c6c;
      case 0xb8c72u: goto L_b8c72;
      case 0xb8c78u: goto L_b8c78;
      case 0xb8c7fu: goto L_b8c7f;
      case 0xb8c86u: goto L_b8c86;
      case 0xb8c8du: goto L_b8c8d;
      case 0xb8c94u: goto L_b8c94;
      case 0xb8c99u: goto L_b8c99;
      default: x86_jump(c, t); return; } }
L_b8c0e:
    X86_TICK(c, 9);
    // 0b8c0e  mov edi, 0x38
    X86_AT(c, 0xb8c0eu);
    c.r[7] = 0x38u;
    // 0b8c13  jmp 0xb8c99
    X86_AT(c, 0xb8c13u);
    goto L_b8c99;
L_b8c18:
    X86_TICK(c, 9);
    // 0b8c18  mov edi, 0x3a
    X86_AT(c, 0xb8c18u);
    c.r[7] = 0x3Au;
    // 0b8c1d  jmp 0xb8c99
    X86_AT(c, 0xb8c1du);
    goto L_b8c99;
L_b8c22:
    X86_TICK(c, 9);
    // 0b8c22  mov edi, 0x36
    X86_AT(c, 0xb8c22u);
    c.r[7] = 0x36u;
    // 0b8c27  jmp 0xb8c99
    X86_AT(c, 0xb8c27u);
    goto L_b8c99;
L_b8c2c:
    X86_TICK(c, 9);
    // 0b8c2c  mov edi, 0x2c
    X86_AT(c, 0xb8c2cu);
    c.r[7] = 0x2Cu;
    // 0b8c31  jmp 0xb8c99
    X86_AT(c, 0xb8c31u);
    goto L_b8c99;
L_b8c36:
    X86_TICK(c, 9);
    // 0b8c36  mov edi, 0x32
    X86_AT(c, 0xb8c36u);
    c.r[7] = 0x32u;
    // 0b8c3b  jmp 0xb8c99
    X86_AT(c, 0xb8c3bu);
    goto L_b8c99;
L_b8c40:
    X86_TICK(c, 9);
    // 0b8c40  mov edi, 0x30
    X86_AT(c, 0xb8c40u);
    c.r[7] = 0x30u;
    // 0b8c45  jmp 0xb8c99
    X86_AT(c, 0xb8c45u);
    goto L_b8c99;
L_b8c47:
    X86_TICK(c, 9);
    // 0b8c47  mov edi, 0x2e
    X86_AT(c, 0xb8c47u);
    c.r[7] = 0x2Eu;
    // 0b8c4c  jmp 0xb8c99
    X86_AT(c, 0xb8c4cu);
    goto L_b8c99;
L_b8c4e:
    X86_TICK(c, 9);
    // 0b8c4e  lea edi, [esi + esi*1 + 0x3c]
    X86_AT(c, 0xb8c4eu);
    c.r[7] = (uint32_t)(c.r[6] + c.r[6] + 0x3Cu);
    // 0b8c52  jmp 0xb8c99
    X86_AT(c, 0xb8c52u);
    goto L_b8c99;
L_b8c54:
    X86_TICK(c, 9);
    // 0b8c54  lea edi, [esi + esi*1 + 0x42]
    X86_AT(c, 0xb8c54u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[6] + 0x42u);
    // 0b8c58  jmp 0xb8c99
    X86_AT(c, 0xb8c58u);
    goto L_b8c99;
L_b8c5a:
    X86_TICK(c, 9);
    // 0b8c5a  lea edi, [esi + esi*1 + 0x48]
    X86_AT(c, 0xb8c5au);
    c.r[7] = (uint32_t)(c.r[6] + c.r[6] + 0x48u);
    // 0b8c5e  jmp 0xb8c99
    X86_AT(c, 0xb8c5eu);
    goto L_b8c99;
L_b8c60:
    X86_TICK(c, 9);
    // 0b8c60  lea edi, [esi + esi*1 + 0x54]
    X86_AT(c, 0xb8c60u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[6] + 0x54u);
    // 0b8c64  jmp 0xb8c99
    X86_AT(c, 0xb8c64u);
    goto L_b8c99;
L_b8c66:
    X86_TICK(c, 9);
    // 0b8c66  lea edi, [esi + esi*1 + 0x4e]
    X86_AT(c, 0xb8c66u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[6] + 0x4Eu);
    // 0b8c6a  jmp 0xb8c99
    X86_AT(c, 0xb8c6au);
    goto L_b8c99;
L_b8c6c:
    X86_TICK(c, 9);
    // 0b8c6c  lea edi, [esi + esi*1 + 0x5a]
    X86_AT(c, 0xb8c6cu);
    c.r[7] = (uint32_t)(c.r[6] + c.r[6] + 0x5Au);
    // 0b8c70  jmp 0xb8c99
    X86_AT(c, 0xb8c70u);
    goto L_b8c99;
L_b8c72:
    X86_TICK(c, 9);
    // 0b8c72  lea edi, [esi + esi*1 + 0x60]
    X86_AT(c, 0xb8c72u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[6] + 0x60u);
    // 0b8c76  jmp 0xb8c99
    X86_AT(c, 0xb8c76u);
    goto L_b8c99;
L_b8c78:
    X86_TICK(c, 9);
    // 0b8c78  mov edi, 0x94
    X86_AT(c, 0xb8c78u);
    c.r[7] = 0x94u;
    // 0b8c7d  jmp 0xb8c99
    X86_AT(c, 0xb8c7du);
    goto L_b8c99;
L_b8c7f:
    X86_TICK(c, 9);
    // 0b8c7f  mov edi, 0x68
    X86_AT(c, 0xb8c7fu);
    c.r[7] = 0x68u;
    // 0b8c84  jmp 0xb8c99
    X86_AT(c, 0xb8c84u);
    goto L_b8c99;
L_b8c86:
    X86_TICK(c, 9);
    // 0b8c86  mov edi, 0x66
    X86_AT(c, 0xb8c86u);
    c.r[7] = 0x66u;
    // 0b8c8b  jmp 0xb8c99
    X86_AT(c, 0xb8c8bu);
    goto L_b8c99;
L_b8c8d:
    X86_TICK(c, 9);
    // 0b8c8d  mov edi, 0x6a
    X86_AT(c, 0xb8c8du);
    c.r[7] = 0x6Au;
    // 0b8c92  jmp 0xb8c99
    X86_AT(c, 0xb8c92u);
    goto L_b8c99;
L_b8c94:
    X86_TICK(c, 2);
    // 0b8c94  mov edi, 0x71
    X86_AT(c, 0xb8c94u);
    c.r[7] = 0x71u;
L_b8c99:
    X86_TICK(c, 26);
    // 0b8c99  mov eax, edi
    X86_AT(c, 0xb8c99u);
    c.r[0] = c.r[7];
    // 0b8c9b  pop edi
    X86_AT(c, 0xb8c9bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b8c9c  pop esi
    X86_AT(c, 0xb8c9cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b8c9d  leave 
    X86_AT(c, 0xb8c9du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b8c9e  ret 
    X86_AT(c, 0xb8c9eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb8b4cu, "ran off the end of a function");
}
void f_000b8c99(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0b8c99  mov eax, edi
    X86_AT(c, 0xb8c99u);
    c.r[0] = c.r[7];
    // 0b8c9b  pop edi
    X86_AT(c, 0xb8c9bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b8c9c  pop esi
    X86_AT(c, 0xb8c9cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b8c9d  leave 
    X86_AT(c, 0xb8c9du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b8c9e  ret 
    X86_AT(c, 0xb8c9eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb8c99u, "ran off the end of a function");
}
void f_000b8ca0(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0b8ca0  push ebp
    X86_AT(c, 0xb8ca0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b8ca1  mov ebp, esp
    X86_AT(c, 0xb8ca1u);
    c.r[5] = c.r[4];
    // 0b8ca3  push edi
    X86_AT(c, 0xb8ca3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b8ca4  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xb8ca4u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0b8ca7  cmp edi, dword ptr [0x45ed8]
    X86_AT(c, 0xb8ca7u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0x45ED8u))), 0, 4);
    // 0b8cad  je 0xb8d04
    X86_AT(c, 0xb8cadu);
    if (x86_cc(c, 4)) { goto L_b8d04; }
    X86_TICK(c, 12);
    // 0b8caf  cmp byte ptr [0xa4a49], 0x82
    X86_AT(c, 0xb8cafu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xA4A49u))), 0x82u, 0, 1);
    // 0b8cb6  jne 0xb8cd5
    X86_AT(c, 0xb8cb6u);
    if (x86_cc(c, 5)) { goto L_b8cd5; }
    X86_TICK(c, 7);
    // 0b8cb8  cmp edi, 4
    X86_AT(c, 0xb8cb8u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0b8cbb  jne 0xb8cc9
    X86_AT(c, 0xb8cbbu);
    if (x86_cc(c, 5)) { goto L_b8cc9; }
    X86_TICK(c, 9);
    // 0b8cbd  mov dword ptr [0x4599c], 0x9a
    X86_AT(c, 0xb8cbdu);
    wr32((c.sbase[3] + (uint32_t)(0x4599Cu)), 0x9Au);
    // 0b8cc7  jmp 0xb8cf9
    X86_AT(c, 0xb8cc7u);
    goto L_b8cf9;
L_b8cc9:
    X86_TICK(c, 9);
    // 0b8cc9  mov dword ptr [0x4599c], 0x9c
    X86_AT(c, 0xb8cc9u);
    wr32((c.sbase[3] + (uint32_t)(0x4599Cu)), 0x9Cu);
    // 0b8cd3  jmp 0xb8cf9
    X86_AT(c, 0xb8cd3u);
    goto L_b8cf9;
L_b8cd5:
    X86_TICK(c, 12);
    // 0b8cd5  cmp byte ptr [0xa4a49], 0x81
    X86_AT(c, 0xb8cd5u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xA4A49u))), 0x81u, 0, 1);
    // 0b8cdc  jne 0xb8cf9
    X86_AT(c, 0xb8cdcu);
    if (x86_cc(c, 5)) { goto L_b8cf9; }
    X86_TICK(c, 7);
    // 0b8cde  cmp edi, 4
    X86_AT(c, 0xb8cdeu);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0b8ce1  jne 0xb8cef
    X86_AT(c, 0xb8ce1u);
    if (x86_cc(c, 5)) { goto L_b8cef; }
    X86_TICK(c, 9);
    // 0b8ce3  mov dword ptr [0x4599c], 0x9e
    X86_AT(c, 0xb8ce3u);
    wr32((c.sbase[3] + (uint32_t)(0x4599Cu)), 0x9Eu);
    // 0b8ced  jmp 0xb8cf9
    X86_AT(c, 0xb8cedu);
    goto L_b8cf9;
L_b8cef:
    X86_TICK(c, 2);
    // 0b8cef  mov dword ptr [0x4599c], 0xa0
    X86_AT(c, 0xb8cefu);
    wr32((c.sbase[3] + (uint32_t)(0x4599Cu)), 0xA0u);
L_b8cf9:
    X86_TICK(c, 7);
    // 0b8cf9  call 0xb7818
    X86_AT(c, 0xb8cf9u);
    push32(c, 0xb8cfeu); x86_call_known(c, 0xb7818u, f_000b7818); X86_RET(c, 0xb8cfeu);
    X86_TICK(c, 2);
    // 0b8cfe  mov dword ptr [0x45ed8], edi
    X86_AT(c, 0xb8cfeu);
    wr32((c.sbase[3] + (uint32_t)(0x45ED8u)), c.r[7]);
L_b8d04:
    X86_TICK(c, 20);
    // 0b8d04  pop edi
    X86_AT(c, 0xb8d04u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b8d05  leave 
    X86_AT(c, 0xb8d05u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b8d06  ret 
    X86_AT(c, 0xb8d06u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb8ca0u, "ran off the end of a function");
}
void f_000b8d08(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0b8d08  mov ax, word ptr [0x4565e]
    X86_AT(c, 0xb8d08u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x4565Eu))));
    // 0b8d0e  and ax, ax
    X86_AT(c, 0xb8d0eu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 0b8d11  jl 0xb8d26
    X86_AT(c, 0xb8d11u);
    if (x86_cc(c, 12)) { goto L_b8d26; }
    X86_TICK(c, 12);
    // 0b8d13  movsx eax, ax
    X86_AT(c, 0xb8d13u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 0b8d16  push eax
    X86_AT(c, 0xb8d16u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b8d17  call 0xb7f6c
    X86_AT(c, 0xb8d17u);
    push32(c, 0xb8d1cu); x86_call_known(c, 0xb7f6cu, f_000b7f6c); X86_RET(c, 0xb8d1cu);
    X86_TICK(c, 9);
    // 0b8d1c  push 1
    X86_AT(c, 0xb8d1cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b8d1e  call 0xbdea8
    X86_AT(c, 0xb8d1eu);
    push32(c, 0xb8d23u); x86_call_known(c, 0xbdea8u, f_000bdea8); X86_RET(c, 0xb8d23u);
    X86_TICK(c, 2);
    // 0b8d23  add esp, 8
    X86_AT(c, 0xb8d23u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_b8d26:
    X86_TICK(c, 10);
    // 0b8d26  ret 
    X86_AT(c, 0xb8d26u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb8d08u, "ran off the end of a function");
}
void f_000b8d28(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0b8d28  push edi
    X86_AT(c, 0xb8d28u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b8d29  call 0xb7f54
    X86_AT(c, 0xb8d29u);
    push32(c, 0xb8d2eu); x86_call_known(c, 0xb7f54u, f_000b7f54); X86_RET(c, 0xb8d2eu);
    X86_TICK(c, 8);
    // 0b8d2e  sub eax, eax
    X86_AT(c, 0xb8d2eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0b8d30  mov dword ptr [0x45ed4], eax
    X86_AT(c, 0xb8d30u);
    wr32((c.sbase[3] + (uint32_t)(0x45ED4u)), c.r[0]);
    // 0b8d35  mov dword ptr [0x45ed0], eax
    X86_AT(c, 0xb8d35u);
    wr32((c.sbase[3] + (uint32_t)(0x45ED0u)), c.r[0]);
    // 0b8d3a  mov edi, 1
    X86_AT(c, 0xb8d3au);
    c.r[7] = 0x1u;
L_b8d3f:
    X86_TICK(c, 7);
    // 0b8d3f  cmp edi, 0x30
    X86_AT(c, 0xb8d3fu);
    (void)x86_sub(c, c.r[7], 0x30u, 0, 4);
    // 0b8d42  jge 0xb8d5f
    X86_AT(c, 0xb8d42u);
    if (x86_cc(c, 13)) { goto L_b8d5f; }
    X86_TICK(c, 19);
    // 0b8d44  lea eax, [edi*8]
    X86_AT(c, 0xb8d44u);
    c.r[0] = (uint32_t)(c.r[7] * 8);
    // 0b8d4b  lea eax, [eax + eax*2]
    X86_AT(c, 0xb8d4bu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0b8d4e  sub edx, edx
    X86_AT(c, 0xb8d4eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0b8d50  mov dword ptr [eax + 0x45990], edx
    X86_AT(c, 0xb8d50u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x45990u)), c.r[2]);
    // 0b8d56  mov dword ptr [eax + 0x459a4], edx
    X86_AT(c, 0xb8d56u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x459A4u)), c.r[2]);
    // 0b8d5c  inc edi
    X86_AT(c, 0xb8d5cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0b8d5d  jmp 0xb8d3f
    X86_AT(c, 0xb8d5du);
    X86_POLL(c, 0xb8d3fu); goto L_b8d3f;
L_b8d5f:
    X86_TICK(c, 9);
    // 0b8d5f  mov dword ptr [0x459a4], 0
    X86_AT(c, 0xb8d5fu);
    wr32((c.sbase[3] + (uint32_t)(0x459A4u)), 0x0u);
    // 0b8d69  call 0xb7818
    X86_AT(c, 0xb8d69u);
    push32(c, 0xb8d6eu); x86_call_known(c, 0xb7818u, f_000b7818); X86_RET(c, 0xb8d6eu);
    X86_TICK(c, 7);
    // 0b8d6e  call 0xb75c0
    X86_AT(c, 0xb8d6eu);
    push32(c, 0xb8d73u); x86_call_known(c, 0xb75c0u, f_000b75c0); X86_RET(c, 0xb8d73u);
    X86_TICK(c, 14);
    // 0b8d73  pop edi
    X86_AT(c, 0xb8d73u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b8d74  ret 
    X86_AT(c, 0xb8d74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb8d28u, "ran off the end of a function");
}
void f_000b8d78(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0b8d78  mov word ptr [0x45660], 0
    X86_AT(c, 0xb8d78u);
    wr16((c.sbase[3] + (uint32_t)(0x45660u)), 0x0u);
    // 0b8d81  ret 
    X86_AT(c, 0xb8d81u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb8d78u, "ran off the end of a function");
}
void f_000b8d84(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0b8d84  cmp word ptr [0x45edc], 0
    X86_AT(c, 0xb8d84u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x45EDCu))), 0x0u, 0, 2);
    // 0b8d8c  je 0xb8d93
    X86_AT(c, 0xb8d8cu);
    if (x86_cc(c, 4)) { goto L_b8d93; }
    X86_TICK(c, 7);
    // 0b8d8e  call 0xb6680
    X86_AT(c, 0xb8d8eu);
    push32(c, 0xb8d93u); x86_call_known(c, 0xb6680u, f_000b6680); X86_RET(c, 0xb8d93u);
L_b8d93:
    X86_TICK(c, 12);
    // 0b8d93  mov word ptr [0x45660], 0xffff
    X86_AT(c, 0xb8d93u);
    wr16((c.sbase[3] + (uint32_t)(0x45660u)), 0xFFFFu);
    // 0b8d9c  ret 
    X86_AT(c, 0xb8d9cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb8d84u, "ran off the end of a function");
}
void f_000b8da0(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0b8da0  push ebp
    X86_AT(c, 0xb8da0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b8da1  mov ebp, esp
    X86_AT(c, 0xb8da1u);
    c.r[5] = c.r[4];
    // 0b8da3  push ebx
    X86_AT(c, 0xb8da3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b8da4  push esi
    X86_AT(c, 0xb8da4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b8da5  push edi
    X86_AT(c, 0xb8da5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b8da6  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xb8da6u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0b8da9  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xb8da9u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0b8dac  and edi, edi
    X86_AT(c, 0xb8dacu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0b8dae  jne 0xb8dc8
    X86_AT(c, 0xb8daeu);
    if (x86_cc(c, 5)) { goto L_b8dc8; }
    X86_TICK(c, 4);
    // 0b8db0  mov byte ptr [0x460fa], 0x30
    X86_AT(c, 0xb8db0u);
    wr8((c.sbase[3] + (uint32_t)(0x460FAu)), 0x30u);
    // 0b8db7  mov ebx, 0x460fa
    X86_AT(c, 0xb8db7u);
    c.r[3] = 0x460FAu;
L_b8dbc:
    X86_TICK(c, 7);
    // 0b8dbc  cmp esi, 1
    X86_AT(c, 0xb8dbcu);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0b8dbf  jle 0xb8dff
    X86_AT(c, 0xb8dbfu);
    if (x86_cc(c, 14)) { goto L_b8dff; }
    X86_TICK(c, 13);
    // 0b8dc1  dec ebx
    X86_AT(c, 0xb8dc1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 0b8dc2  mov byte ptr [ebx], 0x20
    X86_AT(c, 0xb8dc2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3])), 0x20u);
    // 0b8dc5  dec esi
    X86_AT(c, 0xb8dc5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0b8dc6  jmp 0xb8dbc
    X86_AT(c, 0xb8dc6u);
    X86_POLL(c, 0xb8dbcu); goto L_b8dbc;
L_b8dc8:
    X86_TICK(c, 2);
    // 0b8dc8  mov ebx, 0x460fa
    X86_AT(c, 0xb8dc8u);
    c.r[3] = 0x460FAu;
L_b8dcd:
    X86_TICK(c, 7);
    // 0b8dcd  and edi, edi
    X86_AT(c, 0xb8dcdu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0b8dcf  jle 0xb8df3
    X86_AT(c, 0xb8dcfu);
    if (x86_cc(c, 14)) { goto L_b8df3; }
    X86_TICK(c, 59);
    // 0b8dd1  mov eax, edi
    X86_AT(c, 0xb8dd1u);
    c.r[0] = c.r[7];
    // 0b8dd3  cdq 
    X86_AT(c, 0xb8dd3u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0b8dd4  mov ecx, 0xa
    X86_AT(c, 0xb8dd4u);
    c.r[1] = 0xAu;
    // 0b8dd9  idiv ecx
    X86_AT(c, 0xb8dd9u);
    x86_idiv(c, c.r[1], 4, 0xb8dd9u);
    // 0b8ddb  add dl, 0x30
    X86_AT(c, 0xb8ddbu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x30u, 0, 1)); }
    // 0b8dde  mov byte ptr [ebx], dl
    X86_AT(c, 0xb8ddeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[3])), g8(c, 2));
    // 0b8de0  dec esi
    X86_AT(c, 0xb8de0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0b8de1  cmp esi, 1
    X86_AT(c, 0xb8de1u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0b8de4  jl 0xb8dff
    X86_AT(c, 0xb8de4u);
    if (x86_cc(c, 12)) { goto L_b8dff; }
    X86_TICK(c, 59);
    // 0b8de6  xchg edi, eax
    X86_AT(c, 0xb8de6u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0b8de7  cdq 
    X86_AT(c, 0xb8de7u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0b8de8  mov ecx, 0xa
    X86_AT(c, 0xb8de8u);
    c.r[1] = 0xAu;
    // 0b8ded  idiv ecx
    X86_AT(c, 0xb8dedu);
    x86_idiv(c, c.r[1], 4, 0xb8dedu);
    // 0b8def  xchg edi, eax
    X86_AT(c, 0xb8defu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0b8df0  dec ebx
    X86_AT(c, 0xb8df0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 0b8df1  jmp 0xb8dcd
    X86_AT(c, 0xb8df1u);
    X86_POLL(c, 0xb8dcdu); goto L_b8dcd;
L_b8df3:
    X86_TICK(c, 7);
    // 0b8df3  and esi, esi
    X86_AT(c, 0xb8df3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0b8df5  jle 0xb8dfe
    X86_AT(c, 0xb8df5u);
    if (x86_cc(c, 14)) { goto L_b8dfe; }
    X86_TICK(c, 13);
    // 0b8df7  mov byte ptr [ebx], 0x20
    X86_AT(c, 0xb8df7u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3])), 0x20u);
    // 0b8dfa  dec ebx
    X86_AT(c, 0xb8dfau);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 0b8dfb  dec esi
    X86_AT(c, 0xb8dfbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0b8dfc  jmp 0xb8df3
    X86_AT(c, 0xb8dfcu);
    X86_POLL(c, 0xb8df3u); goto L_b8df3;
L_b8dfe:
    X86_TICK(c, 2);
    // 0b8dfe  inc ebx
    X86_AT(c, 0xb8dfeu);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
L_b8dff:
    X86_TICK(c, 30);
    // 0b8dff  mov eax, ebx
    X86_AT(c, 0xb8dffu);
    c.r[0] = c.r[3];
    // 0b8e01  pop edi
    X86_AT(c, 0xb8e01u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b8e02  pop esi
    X86_AT(c, 0xb8e02u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b8e03  pop ebx
    X86_AT(c, 0xb8e03u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0b8e04  leave 
    X86_AT(c, 0xb8e04u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b8e05  ret 
    X86_AT(c, 0xb8e05u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb8da0u, "ran off the end of a function");
}
}
