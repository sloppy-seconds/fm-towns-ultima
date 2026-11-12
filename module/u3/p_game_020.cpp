#include "p_game_funcs.h"
namespace p_game {
void f_000d08d8(X86Cpu& c) {
    goto L_d08d8;
L_d0481:
    X86_TICK(c, 11);
    // 0d0481  push 0xa630
    X86_AT(c, 0xd0481u);
    { uint32_t v = 0xA630u; push32(c, v); }
    // 0d0486  push 7
    X86_AT(c, 0xd0486u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0488  call 0xba428
    X86_AT(c, 0xd0488u);
    push32(c, 0xd048du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd048du);
    X86_TICK(c, 9);
    // 0d048d  push 7
    X86_AT(c, 0xd048du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d048f  call 0xbbb5c
    X86_AT(c, 0xd048fu);
    push32(c, 0xd0494u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0494u);
    X86_TICK(c, 11);
    // 0d0494  push 0xa654
    X86_AT(c, 0xd0494u);
    { uint32_t v = 0xA654u; push32(c, v); }
    // 0d0499  push 7
    X86_AT(c, 0xd0499u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d049b  call 0xba428
    X86_AT(c, 0xd049bu);
    push32(c, 0xd04a0u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd04a0u);
    X86_TICK(c, 9);
    // 0d04a0  push 7
    X86_AT(c, 0xd04a0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d04a2  call 0xbbb5c
    X86_AT(c, 0xd04a2u);
    push32(c, 0xd04a7u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd04a7u);
    X86_TICK(c, 11);
    // 0d04a7  push 0xa67c
    X86_AT(c, 0xd04a7u);
    { uint32_t v = 0xA67Cu; push32(c, v); }
    // 0d04ac  push 7
    X86_AT(c, 0xd04acu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d04ae  call 0xba428
    X86_AT(c, 0xd04aeu);
    push32(c, 0xd04b3u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd04b3u);
    X86_TICK(c, 9);
    // 0d04b3  push 7
    X86_AT(c, 0xd04b3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d04b5  call 0xbbb5c
    X86_AT(c, 0xd04b5u);
    push32(c, 0xd04bau); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd04bau);
    X86_TICK(c, 11);
    // 0d04ba  push 0xa6b0
    X86_AT(c, 0xd04bau);
    { uint32_t v = 0xA6B0u; push32(c, v); }
    // 0d04bf  push 7
    X86_AT(c, 0xd04bfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d04c1  call 0xba428
    X86_AT(c, 0xd04c1u);
    push32(c, 0xd04c6u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd04c6u);
    X86_TICK(c, 9);
    // 0d04c6  push 7
    X86_AT(c, 0xd04c6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d04c8  call 0xbbb5c
    X86_AT(c, 0xd04c8u);
    push32(c, 0xd04cdu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd04cdu);
    X86_TICK(c, 11);
    // 0d04cd  push 0xa6e0
    X86_AT(c, 0xd04cdu);
    { uint32_t v = 0xA6E0u; push32(c, v); }
    // 0d04d2  push 7
    X86_AT(c, 0xd04d2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d04d4  call 0xba428
    X86_AT(c, 0xd04d4u);
    push32(c, 0xd04d9u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd04d9u);
    X86_TICK(c, 9);
    // 0d04d9  push 7
    X86_AT(c, 0xd04d9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d04db  call 0xbbb5c
    X86_AT(c, 0xd04dbu);
    push32(c, 0xd04e0u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd04e0u);
    X86_TICK(c, 13);
    // 0d04e0  add esp, 0x3c
    X86_AT(c, 0xd04e0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d04e3  push 0xa6fc
    X86_AT(c, 0xd04e3u);
    { uint32_t v = 0xA6FCu; push32(c, v); }
    // 0d04e8  push 7
    X86_AT(c, 0xd04e8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d04ea  call 0xba428
    X86_AT(c, 0xd04eau);
    push32(c, 0xd04efu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd04efu);
    X86_TICK(c, 2);
    // 0d04ef  add esp, 8
    X86_AT(c, 0xd04efu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d04f2:
    X86_TICK(c, 9);
    // 0d04f2  push 7
    X86_AT(c, 0xd04f2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d04f4  call 0xb9514
    X86_AT(c, 0xd04f4u);
    push32(c, 0xd04f9u); x86_call_known(c, 0xb9514u, f_000b9514); X86_RET(c, 0xd04f9u);
    X86_TICK(c, 12);
    // 0d04f9  xchg ebx, eax
    X86_AT(c, 0xd04f9u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d04fa  add esp, 4
    X86_AT(c, 0xd04fau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d04fd  cmp bl, 1
    X86_AT(c, 0xd04fdu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d0500  je 0xd052b
    X86_AT(c, 0xd0500u);
    if (x86_cc(c, 4)) { goto L_d052b; }
    X86_TICK(c, 7);
    // 0d0502  cmp bl, 0x51
    X86_AT(c, 0xd0502u);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0d0505  je 0xd052b
    X86_AT(c, 0xd0505u);
    if (x86_cc(c, 4)) { goto L_d052b; }
    X86_TICK(c, 7);
    // 0d0507  cmp bl, 0x41
    X86_AT(c, 0xd0507u);
    (void)x86_sub(c, g8(c, 3), 0x41u, 0, 1);
    // 0d050a  je 0xd052b
    X86_AT(c, 0xd050au);
    if (x86_cc(c, 4)) { goto L_d052b; }
    X86_TICK(c, 7);
    // 0d050c  cmp bl, 0x42
    X86_AT(c, 0xd050cu);
    (void)x86_sub(c, g8(c, 3), 0x42u, 0, 1);
    // 0d050f  je 0xd052b
    X86_AT(c, 0xd050fu);
    if (x86_cc(c, 4)) { goto L_d052b; }
    X86_TICK(c, 7);
    // 0d0511  cmp bl, 0x43
    X86_AT(c, 0xd0511u);
    (void)x86_sub(c, g8(c, 3), 0x43u, 0, 1);
    // 0d0514  je 0xd052b
    X86_AT(c, 0xd0514u);
    if (x86_cc(c, 4)) { goto L_d052b; }
    X86_TICK(c, 7);
    // 0d0516  cmp bl, 0x44
    X86_AT(c, 0xd0516u);
    (void)x86_sub(c, g8(c, 3), 0x44u, 0, 1);
    // 0d0519  je 0xd052b
    X86_AT(c, 0xd0519u);
    if (x86_cc(c, 4)) { goto L_d052b; }
    X86_TICK(c, 7);
    // 0d051b  and bl, bl
    X86_AT(c, 0xd051bu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d051d  je 0xd04f2
    X86_AT(c, 0xd051du);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd04f2u); goto L_d04f2; }
    X86_TICK(c, 9);
    // 0d051f  push 1
    X86_AT(c, 0xd051fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d0521  call 0xb607c
    X86_AT(c, 0xd0521u);
    push32(c, 0xd0526u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd0526u);
    X86_TICK(c, 9);
    // 0d0526  add esp, 4
    X86_AT(c, 0xd0526u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0529  jmp 0xd04f2
    X86_AT(c, 0xd0529u);
    X86_POLL(c, 0xd04f2u); goto L_d04f2;
L_d052b:
    X86_TICK(c, 7);
    // 0d052b  cmp bl, 1
    X86_AT(c, 0xd052bu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d052e  je 0xd0535
    X86_AT(c, 0xd052eu);
    if (x86_cc(c, 4)) { goto L_d0535; }
    X86_TICK(c, 7);
    // 0d0530  cmp bl, 0x51
    X86_AT(c, 0xd0530u);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0d0533  jne 0xd0550
    X86_AT(c, 0xd0533u);
    if (x86_cc(c, 5)) { goto L_d0550; }
L_d0535:
    X86_TICK(c, 11);
    // 0d0535  push 0xa720
    X86_AT(c, 0xd0535u);
    { uint32_t v = 0xA720u; push32(c, v); }
    // 0d053a  push 7
    X86_AT(c, 0xd053au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d053c  call 0xba428
    X86_AT(c, 0xd053cu);
    push32(c, 0xd0541u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0541u);
    X86_TICK(c, 9);
    // 0d0541  push 7
    X86_AT(c, 0xd0541u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0543  call 0xbbb5c
    X86_AT(c, 0xd0543u);
    push32(c, 0xd0548u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0548u);
    X86_TICK(c, 9);
    // 0d0548  add esp, 0xc
    X86_AT(c, 0xd0548u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d054b  jmp 0xd09b5
    X86_AT(c, 0xd054bu);
    goto L_d09b5;
L_d0550:
    X86_TICK(c, 12);
    // 0d0550  movzx edx, bl
    X86_AT(c, 0xd0550u);
    c.r[2] = g8(c, 3);
    // 0d0553  sub edx, 0x41
    X86_AT(c, 0xd0553u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x41u, 0, 4); }
    // 0d0556  cmp edx, 3
    X86_AT(c, 0xd0556u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0d0559  ja 0xd098e
    X86_AT(c, 0xd0559u);
    if (x86_cc(c, 7)) { goto L_d098e; }
    X86_TICK(c, 7);
    // 0d055f  jmp dword ptr cs:[edx*4 + 0xd0567]
    X86_AT(c, 0xd055fu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD0567u)));
      switch (t) {
      case 0xd0577u: goto L_d0577;
      case 0xd066au: goto L_d066a;
      case 0xd0776u: goto L_d0776;
      case 0xd083eu: goto L_d083e;
      default: x86_jump(c, t); return; } }
L_d0577:
    X86_TICK(c, 11);
    // 0d0577  push 0xa73c
    X86_AT(c, 0xd0577u);
    { uint32_t v = 0xA73Cu; push32(c, v); }
    // 0d057c  push 7
    X86_AT(c, 0xd057cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d057e  call 0xba428
    X86_AT(c, 0xd057eu);
    push32(c, 0xd0583u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0583u);
    X86_TICK(c, 9);
    // 0d0583  push 7
    X86_AT(c, 0xd0583u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0585  call 0xbbb5c
    X86_AT(c, 0xd0585u);
    push32(c, 0xd058au); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd058au);
    X86_TICK(c, 11);
    // 0d058a  push 0xa754
    X86_AT(c, 0xd058au);
    { uint32_t v = 0xA754u; push32(c, v); }
    // 0d058f  push 7
    X86_AT(c, 0xd058fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0591  call 0xba428
    X86_AT(c, 0xd0591u);
    push32(c, 0xd0596u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0596u);
    X86_TICK(c, 11);
    // 0d0596  push 0
    X86_AT(c, 0xd0596u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0598  push 7
    X86_AT(c, 0xd0598u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d059a  call 0xb6f28
    X86_AT(c, 0xd059au);
    push32(c, 0xd059fu); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd059fu);
    X86_TICK(c, 12);
    // 0d059f  xchg edi, eax
    X86_AT(c, 0xd059fu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d05a0  push 7
    X86_AT(c, 0xd05a0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d05a2  call 0xbbb5c
    X86_AT(c, 0xd05a2u);
    push32(c, 0xd05a7u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd05a7u);
    X86_TICK(c, 9);
    // 0d05a7  add esp, 0x20
    X86_AT(c, 0xd05a7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0d05aa  cmp edi, 0xffffffff
    X86_AT(c, 0xd05aau);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d05ad  jne 0xd05b9
    X86_AT(c, 0xd05adu);
    if (x86_cc(c, 5)) { goto L_d05b9; }
    X86_TICK(c, 9);
    // 0d05af  push 0xa7cc
    X86_AT(c, 0xd05afu);
    { uint32_t v = 0xA7CCu; push32(c, v); }
    // 0d05b4  jmp 0xd08d8
    X86_AT(c, 0xd05b4u);
    goto L_d08d8;
L_d05b9:
    X86_TICK(c, 11);
    // 0d05b9  push 0x64
    X86_AT(c, 0xd05b9u);
    { uint32_t v = 0x64u; push32(c, v); }
    // 0d05bb  push edi
    X86_AT(c, 0xd05bbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d05bc  call 0xcfe88
    X86_AT(c, 0xd05bcu);
    push32(c, 0xd05c1u); x86_call_known(c, 0xcfe88u, f_000cfe88); X86_RET(c, 0xd05c1u);
    X86_TICK(c, 9);
    // 0d05c1  add esp, 8
    X86_AT(c, 0xd05c1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d05c4  inc eax
    X86_AT(c, 0xd05c4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d05c5  jne 0xd05d1
    X86_AT(c, 0xd05c5u);
    if (x86_cc(c, 5)) { goto L_d05d1; }
    X86_TICK(c, 9);
    // 0d05c7  push 0xa858
    X86_AT(c, 0xd05c7u);
    { uint32_t v = 0xA858u; push32(c, v); }
    // 0d05cc  jmp 0xd08d8
    X86_AT(c, 0xd05ccu);
    goto L_d08d8;
L_d05d1:
    X86_TICK(c, 11);
    // 0d05d1  push 0xa8e4
    X86_AT(c, 0xd05d1u);
    { uint32_t v = 0xA8E4u; push32(c, v); }
    // 0d05d6  push 7
    X86_AT(c, 0xd05d6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d05d8  call 0xba428
    X86_AT(c, 0xd05d8u);
    push32(c, 0xd05ddu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd05ddu);
    X86_TICK(c, 11);
    // 0d05dd  push 0
    X86_AT(c, 0xd05ddu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d05df  push 7
    X86_AT(c, 0xd05dfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d05e1  call 0xb6f28
    X86_AT(c, 0xd05e1u);
    push32(c, 0xd05e6u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd05e6u);
    X86_TICK(c, 12);
    // 0d05e6  xchg edi, eax
    X86_AT(c, 0xd05e6u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d05e7  add esp, 0x10
    X86_AT(c, 0xd05e7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d05ea  cmp edi, 0xffffffff
    X86_AT(c, 0xd05eau);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d05ed  jne 0xd05fe
    X86_AT(c, 0xd05edu);
    if (x86_cc(c, 5)) { goto L_d05fe; }
    X86_TICK(c, 7);
    // 0d05ef  call 0xce2c8
    X86_AT(c, 0xd05efu);
    push32(c, 0xd05f4u); x86_call_known(c, 0xce2c8u, f_000ce2c8); X86_RET(c, 0xd05f4u);
    X86_TICK(c, 9);
    // 0d05f4  push 0xa914
    X86_AT(c, 0xd05f4u);
    { uint32_t v = 0xA914u; push32(c, v); }
    // 0d05f9  jmp 0xd08d8
    X86_AT(c, 0xd05f9u);
    goto L_d08d8;
L_d05fe:
    X86_TICK(c, 18);
    // 0d05fe  lea eax, [edi + edi*2]
    X86_AT(c, 0xd05feu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d0601  lea edx, [eax*8]
    X86_AT(c, 0xd0601u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d0608  lea edx, [eax + edx*8]
    X86_AT(c, 0xd0608u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d060b  cmp byte ptr [edx + 0xa4abd], 0x50
    X86_AT(c, 0xd060bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu))), 0x50u, 0, 1);
    // 0d0612  je 0xd0638
    X86_AT(c, 0xd0612u);
    if (x86_cc(c, 4)) { goto L_d0638; }
    X86_TICK(c, 9);
    // 0d0614  push 3
    X86_AT(c, 0xd0614u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d0616  call 0xb607c
    X86_AT(c, 0xd0616u);
    push32(c, 0xd061bu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd061bu);
    X86_TICK(c, 11);
    // 0d061b  push 0xa954
    X86_AT(c, 0xd061bu);
    { uint32_t v = 0xA954u; push32(c, v); }
    // 0d0620  push 7
    X86_AT(c, 0xd0620u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0622  call 0xba428
    X86_AT(c, 0xd0622u);
    push32(c, 0xd0627u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0627u);
    X86_TICK(c, 9);
    // 0d0627  push 7
    X86_AT(c, 0xd0627u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0629  call 0xbbb5c
    X86_AT(c, 0xd0629u);
    push32(c, 0xd062eu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd062eu);
    X86_TICK(c, 9);
    // 0d062e  push 0xa98c
    X86_AT(c, 0xd062eu);
    { uint32_t v = 0xA98Cu; push32(c, v); }
    // 0d0633  jmp 0xd0923
    X86_AT(c, 0xd0633u);
    goto L_d0923;
L_d0638:
    X86_TICK(c, 9);
    // 0d0638  push 2
    X86_AT(c, 0xd0638u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d063a  call 0xb607c
    X86_AT(c, 0xd063au);
    push32(c, 0xd063fu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd063fu);
    X86_TICK(c, 7);
    // 0d063f  call 0xcaa9c
    X86_AT(c, 0xd063fu);
    push32(c, 0xd0644u); x86_call_known(c, 0xcaa9cu, f_000caa9c); X86_RET(c, 0xd0644u);
    X86_TICK(c, 9);
    // 0d0644  push edi
    X86_AT(c, 0xd0644u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0645  call 0xc7f0c
    X86_AT(c, 0xd0645u);
    push32(c, 0xd064au); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xd064au);
    X86_TICK(c, 9);
    // 0d064a  push 2
    X86_AT(c, 0xd064au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d064c  call 0xbebbc
    X86_AT(c, 0xd064cu);
    push32(c, 0xd0651u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xd0651u);
    X86_TICK(c, 15);
    // 0d0651  lea eax, [edi + edi*2]
    X86_AT(c, 0xd0651u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d0654  lea edx, [eax*8]
    X86_AT(c, 0xd0654u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d065b  lea edx, [eax + edx*8]
    X86_AT(c, 0xd065bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d065e  mov byte ptr [edx + 0xa4abd], 0x47
    X86_AT(c, 0xd065eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu)), 0x47u);
    // 0d0665  jmp 0xd0765
    X86_AT(c, 0xd0665u);
    goto L_d0765;
L_d066a:
    X86_TICK(c, 11);
    // 0d066a  push 0xa9cc
    X86_AT(c, 0xd066au);
    { uint32_t v = 0xA9CCu; push32(c, v); }
    // 0d066f  push 7
    X86_AT(c, 0xd066fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0671  call 0xba428
    X86_AT(c, 0xd0671u);
    push32(c, 0xd0676u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0676u);
    X86_TICK(c, 9);
    // 0d0676  push 7
    X86_AT(c, 0xd0676u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0678  call 0xbbb5c
    X86_AT(c, 0xd0678u);
    push32(c, 0xd067du); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd067du);
    X86_TICK(c, 11);
    // 0d067d  push 0xa9e4
    X86_AT(c, 0xd067du);
    { uint32_t v = 0xA9E4u; push32(c, v); }
    // 0d0682  push 7
    X86_AT(c, 0xd0682u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0684  call 0xba428
    X86_AT(c, 0xd0684u);
    push32(c, 0xd0689u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0689u);
    X86_TICK(c, 11);
    // 0d0689  push 0
    X86_AT(c, 0xd0689u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d068b  push 7
    X86_AT(c, 0xd068bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d068d  call 0xb6f28
    X86_AT(c, 0xd068du);
    push32(c, 0xd0692u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd0692u);
    X86_TICK(c, 12);
    // 0d0692  xchg edi, eax
    X86_AT(c, 0xd0692u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d0693  push 7
    X86_AT(c, 0xd0693u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0695  call 0xbbb5c
    X86_AT(c, 0xd0695u);
    push32(c, 0xd069au); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd069au);
    X86_TICK(c, 9);
    // 0d069a  add esp, 0x20
    X86_AT(c, 0xd069au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0d069d  cmp edi, 0xffffffff
    X86_AT(c, 0xd069du);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d06a0  jne 0xd06ac
    X86_AT(c, 0xd06a0u);
    if (x86_cc(c, 5)) { goto L_d06ac; }
    X86_TICK(c, 9);
    // 0d06a2  push 0xaa54
    X86_AT(c, 0xd06a2u);
    { uint32_t v = 0xAA54u; push32(c, v); }
    // 0d06a7  jmp 0xd08d8
    X86_AT(c, 0xd06a7u);
    goto L_d08d8;
L_d06ac:
    X86_TICK(c, 11);
    // 0d06ac  push 0xc8
    X86_AT(c, 0xd06acu);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0d06b1  push edi
    X86_AT(c, 0xd06b1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d06b2  call 0xcfe88
    X86_AT(c, 0xd06b2u);
    push32(c, 0xd06b7u); x86_call_known(c, 0xcfe88u, f_000cfe88); X86_RET(c, 0xd06b7u);
    X86_TICK(c, 9);
    // 0d06b7  add esp, 8
    X86_AT(c, 0xd06b7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d06ba  inc eax
    X86_AT(c, 0xd06bau);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d06bb  jne 0xd06c7
    X86_AT(c, 0xd06bbu);
    if (x86_cc(c, 5)) { goto L_d06c7; }
    X86_TICK(c, 9);
    // 0d06bd  push 0xaae0
    X86_AT(c, 0xd06bdu);
    { uint32_t v = 0xAAE0u; push32(c, v); }
    // 0d06c2  jmp 0xd08d8
    X86_AT(c, 0xd06c2u);
    goto L_d08d8;
L_d06c7:
    X86_TICK(c, 11);
    // 0d06c7  push 0xab6c
    X86_AT(c, 0xd06c7u);
    { uint32_t v = 0xAB6Cu; push32(c, v); }
    // 0d06cc  push 7
    X86_AT(c, 0xd06ccu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d06ce  call 0xba428
    X86_AT(c, 0xd06ceu);
    push32(c, 0xd06d3u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd06d3u);
    X86_TICK(c, 11);
    // 0d06d3  push 0
    X86_AT(c, 0xd06d3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d06d5  push 7
    X86_AT(c, 0xd06d5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d06d7  call 0xb6f28
    X86_AT(c, 0xd06d7u);
    push32(c, 0xd06dcu); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd06dcu);
    X86_TICK(c, 12);
    // 0d06dc  xchg edi, eax
    X86_AT(c, 0xd06dcu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d06dd  add esp, 0x10
    X86_AT(c, 0xd06ddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d06e0  cmp edi, 0xffffffff
    X86_AT(c, 0xd06e0u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d06e3  jne 0xd06f4
    X86_AT(c, 0xd06e3u);
    if (x86_cc(c, 5)) { goto L_d06f4; }
    X86_TICK(c, 7);
    // 0d06e5  call 0xce2c8
    X86_AT(c, 0xd06e5u);
    push32(c, 0xd06eau); x86_call_known(c, 0xce2c8u, f_000ce2c8); X86_RET(c, 0xd06eau);
    X86_TICK(c, 9);
    // 0d06ea  push 0xab9c
    X86_AT(c, 0xd06eau);
    { uint32_t v = 0xAB9Cu; push32(c, v); }
    // 0d06ef  jmp 0xd08d8
    X86_AT(c, 0xd06efu);
    goto L_d08d8;
L_d06f4:
    X86_TICK(c, 21);
    // 0d06f4  lea eax, [edi + edi*2]
    X86_AT(c, 0xd06f4u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d06f7  lea edx, [eax*8]
    X86_AT(c, 0xd06f7u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d06fe  lea edx, [eax + edx*8]
    X86_AT(c, 0xd06feu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d0701  mov eax, dword ptr [edx + 0xa4ad9]
    X86_AT(c, 0xd0701u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD9u)));
    // 0d0707  cmp eax, dword ptr [edx + 0xa4ad5]
    X86_AT(c, 0xd0707u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD5u))), 0, 4);
    // 0d070d  jne 0xd0733
    X86_AT(c, 0xd070du);
    if (x86_cc(c, 5)) { goto L_d0733; }
    X86_TICK(c, 9);
    // 0d070f  push 3
    X86_AT(c, 0xd070fu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d0711  call 0xb607c
    X86_AT(c, 0xd0711u);
    push32(c, 0xd0716u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd0716u);
    X86_TICK(c, 11);
    // 0d0716  push 0xabdc
    X86_AT(c, 0xd0716u);
    { uint32_t v = 0xABDCu; push32(c, v); }
    // 0d071b  push 7
    X86_AT(c, 0xd071bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d071d  call 0xba428
    X86_AT(c, 0xd071du);
    push32(c, 0xd0722u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0722u);
    X86_TICK(c, 9);
    // 0d0722  push 7
    X86_AT(c, 0xd0722u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0724  call 0xbbb5c
    X86_AT(c, 0xd0724u);
    push32(c, 0xd0729u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0729u);
    X86_TICK(c, 9);
    // 0d0729  push 0xac10
    X86_AT(c, 0xd0729u);
    { uint32_t v = 0xAC10u; push32(c, v); }
    // 0d072e  jmp 0xd0923
    X86_AT(c, 0xd072eu);
    goto L_d0923;
L_d0733:
    X86_TICK(c, 9);
    // 0d0733  push 2
    X86_AT(c, 0xd0733u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d0735  call 0xb607c
    X86_AT(c, 0xd0735u);
    push32(c, 0xd073au); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd073au);
    X86_TICK(c, 7);
    // 0d073a  call 0xcaa9c
    X86_AT(c, 0xd073au);
    push32(c, 0xd073fu); x86_call_known(c, 0xcaa9cu, f_000caa9c); X86_RET(c, 0xd073fu);
    X86_TICK(c, 9);
    // 0d073f  push edi
    X86_AT(c, 0xd073fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0740  call 0xc7f0c
    X86_AT(c, 0xd0740u);
    push32(c, 0xd0745u); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xd0745u);
    X86_TICK(c, 9);
    // 0d0745  push 2
    X86_AT(c, 0xd0745u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d0747  call 0xbebbc
    X86_AT(c, 0xd0747u);
    push32(c, 0xd074cu); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xd074cu);
    X86_TICK(c, 12);
    // 0d074c  lea eax, [edi + edi*2]
    X86_AT(c, 0xd074cu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d074f  lea edx, [eax*8]
    X86_AT(c, 0xd074fu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d0756  lea edx, [eax + edx*8]
    X86_AT(c, 0xd0756u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d0759  mov eax, dword ptr [edx + 0xa4ad9]
    X86_AT(c, 0xd0759u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD9u)));
    // 0d075f  mov dword ptr [edx + 0xa4ad5], eax
    X86_AT(c, 0xd075fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD5u)), c.r[0]);
L_d0765:
    X86_TICK(c, 9);
    // 0d0765  push edi
    X86_AT(c, 0xd0765u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0766  call 0xc7f0c
    X86_AT(c, 0xd0766u);
    push32(c, 0xd076bu); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xd076bu);
    X86_TICK(c, 9);
    // 0d076b  push edi
    X86_AT(c, 0xd076bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d076c  call 0xbe720
    X86_AT(c, 0xd076cu);
    push32(c, 0xd0771u); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xd0771u);
    X86_TICK(c, 7);
    // 0d0771  jmp 0xd098b
    X86_AT(c, 0xd0771u);
    goto L_d098b;
L_d0776:
    X86_TICK(c, 11);
    // 0d0776  push 0xac50
    X86_AT(c, 0xd0776u);
    { uint32_t v = 0xAC50u; push32(c, v); }
    // 0d077b  push 7
    X86_AT(c, 0xd077bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d077d  call 0xba428
    X86_AT(c, 0xd077du);
    push32(c, 0xd0782u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0782u);
    X86_TICK(c, 9);
    // 0d0782  push 7
    X86_AT(c, 0xd0782u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0784  call 0xbbb5c
    X86_AT(c, 0xd0784u);
    push32(c, 0xd0789u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0789u);
    X86_TICK(c, 11);
    // 0d0789  push 0xac74
    X86_AT(c, 0xd0789u);
    { uint32_t v = 0xAC74u; push32(c, v); }
    // 0d078e  push 7
    X86_AT(c, 0xd078eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0790  call 0xba428
    X86_AT(c, 0xd0790u);
    push32(c, 0xd0795u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0795u);
    X86_TICK(c, 11);
    // 0d0795  push 0
    X86_AT(c, 0xd0795u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0797  push 7
    X86_AT(c, 0xd0797u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0799  call 0xb6f28
    X86_AT(c, 0xd0799u);
    push32(c, 0xd079eu); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd079eu);
    X86_TICK(c, 12);
    // 0d079e  xchg edi, eax
    X86_AT(c, 0xd079eu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d079f  push 7
    X86_AT(c, 0xd079fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d07a1  call 0xbbb5c
    X86_AT(c, 0xd07a1u);
    push32(c, 0xd07a6u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd07a6u);
    X86_TICK(c, 9);
    // 0d07a6  add esp, 0x20
    X86_AT(c, 0xd07a6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0d07a9  cmp edi, 0xffffffff
    X86_AT(c, 0xd07a9u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d07ac  jne 0xd07b8
    X86_AT(c, 0xd07acu);
    if (x86_cc(c, 5)) { goto L_d07b8; }
    X86_TICK(c, 9);
    // 0d07ae  push 0xacf0
    X86_AT(c, 0xd07aeu);
    { uint32_t v = 0xACF0u; push32(c, v); }
    // 0d07b3  jmp 0xd08d8
    X86_AT(c, 0xd07b3u);
    goto L_d08d8;
L_d07b8:
    X86_TICK(c, 11);
    // 0d07b8  push 0x1f4
    X86_AT(c, 0xd07b8u);
    { uint32_t v = 0x1F4u; push32(c, v); }
    // 0d07bd  push edi
    X86_AT(c, 0xd07bdu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d07be  call 0xcfe88
    X86_AT(c, 0xd07beu);
    push32(c, 0xd07c3u); x86_call_known(c, 0xcfe88u, f_000cfe88); X86_RET(c, 0xd07c3u);
    X86_TICK(c, 9);
    // 0d07c3  add esp, 8
    X86_AT(c, 0xd07c3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d07c6  inc eax
    X86_AT(c, 0xd07c6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d07c7  jne 0xd07d3
    X86_AT(c, 0xd07c7u);
    if (x86_cc(c, 5)) { goto L_d07d3; }
    X86_TICK(c, 9);
    // 0d07c9  push 0xad7c
    X86_AT(c, 0xd07c9u);
    { uint32_t v = 0xAD7Cu; push32(c, v); }
    // 0d07ce  jmp 0xd08d8
    X86_AT(c, 0xd07ceu);
    goto L_d08d8;
L_d07d3:
    X86_TICK(c, 11);
    // 0d07d3  push 0xae08
    X86_AT(c, 0xd07d3u);
    { uint32_t v = 0xAE08u; push32(c, v); }
    // 0d07d8  push 7
    X86_AT(c, 0xd07d8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d07da  call 0xba428
    X86_AT(c, 0xd07dau);
    push32(c, 0xd07dfu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd07dfu);
    X86_TICK(c, 11);
    // 0d07df  push 0xffffffff
    X86_AT(c, 0xd07dfu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d07e1  push 7
    X86_AT(c, 0xd07e1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d07e3  call 0xb6f28
    X86_AT(c, 0xd07e3u);
    push32(c, 0xd07e8u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd07e8u);
    X86_TICK(c, 12);
    // 0d07e8  xchg edi, eax
    X86_AT(c, 0xd07e8u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d07e9  add esp, 0x10
    X86_AT(c, 0xd07e9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d07ec  cmp edi, 0xffffffff
    X86_AT(c, 0xd07ecu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d07ef  jne 0xd0800
    X86_AT(c, 0xd07efu);
    if (x86_cc(c, 5)) { goto L_d0800; }
    X86_TICK(c, 7);
    // 0d07f1  call 0xce2c8
    X86_AT(c, 0xd07f1u);
    push32(c, 0xd07f6u); x86_call_known(c, 0xce2c8u, f_000ce2c8); X86_RET(c, 0xd07f6u);
    X86_TICK(c, 9);
    // 0d07f6  push 0xae44
    X86_AT(c, 0xd07f6u);
    { uint32_t v = 0xAE44u; push32(c, v); }
    // 0d07fb  jmp 0xd08d8
    X86_AT(c, 0xd07fbu);
    goto L_d08d8;
L_d0800:
    X86_TICK(c, 18);
    // 0d0800  lea eax, [edi + edi*2]
    X86_AT(c, 0xd0800u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d0803  lea edx, [eax*8]
    X86_AT(c, 0xd0803u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d080a  lea edx, [eax + edx*8]
    X86_AT(c, 0xd080au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d080d  cmp byte ptr [edx + 0xa4abd], 0x44
    X86_AT(c, 0xd080du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu))), 0x44u, 0, 1);
    // 0d0814  je 0xd0936
    X86_AT(c, 0xd0814u);
    if (x86_cc(c, 4)) { goto L_d0936; }
    X86_TICK(c, 9);
    // 0d081a  push 3
    X86_AT(c, 0xd081au);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d081c  call 0xb607c
    X86_AT(c, 0xd081cu);
    push32(c, 0xd0821u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd0821u);
    X86_TICK(c, 11);
    // 0d0821  push 0xae84
    X86_AT(c, 0xd0821u);
    { uint32_t v = 0xAE84u; push32(c, v); }
    // 0d0826  push 7
    X86_AT(c, 0xd0826u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0828  call 0xba428
    X86_AT(c, 0xd0828u);
    push32(c, 0xd082du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd082du);
    X86_TICK(c, 9);
    // 0d082d  push 7
    X86_AT(c, 0xd082du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d082f  call 0xbbb5c
    X86_AT(c, 0xd082fu);
    push32(c, 0xd0834u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0834u);
    X86_TICK(c, 9);
    // 0d0834  push 0xaeb8
    X86_AT(c, 0xd0834u);
    { uint32_t v = 0xAEB8u; push32(c, v); }
    // 0d0839  jmp 0xd0923
    X86_AT(c, 0xd0839u);
    goto L_d0923;
L_d083e:
    X86_TICK(c, 11);
    // 0d083e  push 0xaef8
    X86_AT(c, 0xd083eu);
    { uint32_t v = 0xAEF8u; push32(c, v); }
    // 0d0843  push 7
    X86_AT(c, 0xd0843u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0845  call 0xba428
    X86_AT(c, 0xd0845u);
    push32(c, 0xd084au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd084au);
    X86_TICK(c, 9);
    // 0d084a  push 7
    X86_AT(c, 0xd084au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d084c  call 0xbbb5c
    X86_AT(c, 0xd084cu);
    push32(c, 0xd0851u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0851u);
    X86_TICK(c, 11);
    // 0d0851  push 0xaf14
    X86_AT(c, 0xd0851u);
    { uint32_t v = 0xAF14u; push32(c, v); }
    // 0d0856  push 7
    X86_AT(c, 0xd0856u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0858  call 0xba428
    X86_AT(c, 0xd0858u);
    push32(c, 0xd085du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd085du);
    X86_TICK(c, 11);
    // 0d085d  push 0
    X86_AT(c, 0xd085du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d085f  push 7
    X86_AT(c, 0xd085fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0861  call 0xb6f28
    X86_AT(c, 0xd0861u);
    push32(c, 0xd0866u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd0866u);
    X86_TICK(c, 12);
    // 0d0866  xchg edi, eax
    X86_AT(c, 0xd0866u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d0867  push 7
    X86_AT(c, 0xd0867u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0869  call 0xbbb5c
    X86_AT(c, 0xd0869u);
    push32(c, 0xd086eu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd086eu);
    X86_TICK(c, 9);
    // 0d086e  add esp, 0x20
    X86_AT(c, 0xd086eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0d0871  cmp edi, 0xffffffff
    X86_AT(c, 0xd0871u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d0874  jne 0xd087d
    X86_AT(c, 0xd0874u);
    if (x86_cc(c, 5)) { goto L_d087d; }
    X86_TICK(c, 9);
    // 0d0876  push 0xafa4
    X86_AT(c, 0xd0876u);
    { uint32_t v = 0xAFA4u; push32(c, v); }
    // 0d087b  jmp 0xd08d8
    X86_AT(c, 0xd087bu);
    goto L_d08d8;
L_d087d:
    X86_TICK(c, 11);
    // 0d087d  push 0x384
    X86_AT(c, 0xd087du);
    { uint32_t v = 0x384u; push32(c, v); }
    // 0d0882  push edi
    X86_AT(c, 0xd0882u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0883  call 0xcfe88
    X86_AT(c, 0xd0883u);
    push32(c, 0xd0888u); x86_call_known(c, 0xcfe88u, f_000cfe88); X86_RET(c, 0xd0888u);
    X86_TICK(c, 9);
    // 0d0888  add esp, 8
    X86_AT(c, 0xd0888u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d088b  inc eax
    X86_AT(c, 0xd088bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d088c  jne 0xd08b0
    X86_AT(c, 0xd088cu);
    if (x86_cc(c, 5)) { goto L_d08b0; }
    X86_TICK(c, 9);
    // 0d088e  push 3
    X86_AT(c, 0xd088eu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d0890  call 0xb607c
    X86_AT(c, 0xd0890u);
    push32(c, 0xd0895u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd0895u);
    X86_TICK(c, 11);
    // 0d0895  push 0xb030
    X86_AT(c, 0xd0895u);
    { uint32_t v = 0xB030u; push32(c, v); }
    // 0d089a  push 7
    X86_AT(c, 0xd089au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d089c  call 0xba428
    X86_AT(c, 0xd089cu);
    push32(c, 0xd08a1u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd08a1u);
    X86_TICK(c, 9);
    // 0d08a1  push 7
    X86_AT(c, 0xd08a1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d08a3  call 0xbbb5c
    X86_AT(c, 0xd08a3u);
    push32(c, 0xd08a8u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd08a8u);
    X86_TICK(c, 9);
    // 0d08a8  add esp, 0x10
    X86_AT(c, 0xd08a8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d08ab  jmp 0xd098e
    X86_AT(c, 0xd08abu);
    goto L_d098e;
L_d08b0:
    X86_TICK(c, 11);
    // 0d08b0  push 0xb0bc
    X86_AT(c, 0xd08b0u);
    { uint32_t v = 0xB0BCu; push32(c, v); }
    // 0d08b5  push 7
    X86_AT(c, 0xd08b5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d08b7  call 0xba428
    X86_AT(c, 0xd08b7u);
    push32(c, 0xd08bcu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd08bcu);
    X86_TICK(c, 11);
    // 0d08bc  push 0xffffffff
    X86_AT(c, 0xd08bcu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d08be  push 7
    X86_AT(c, 0xd08beu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d08c0  call 0xb6f28
    X86_AT(c, 0xd08c0u);
    push32(c, 0xd08c5u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd08c5u);
    X86_TICK(c, 12);
    // 0d08c5  xchg edi, eax
    X86_AT(c, 0xd08c5u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d08c6  add esp, 0x10
    X86_AT(c, 0xd08c6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d08c9  cmp edi, 0xffffffff
    X86_AT(c, 0xd08c9u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d08cc  jne 0xd08ee
    X86_AT(c, 0xd08ccu);
    if (x86_cc(c, 5)) { goto L_d08ee; }
    X86_TICK(c, 7);
    // 0d08ce  call 0xce2c8
    X86_AT(c, 0xd08ceu);
    push32(c, 0xd08d3u); x86_call_known(c, 0xce2c8u, f_000ce2c8); X86_RET(c, 0xd08d3u);
    X86_TICK(c, 2);
    // 0d08d3  push 0xb0f4
    X86_AT(c, 0xd08d3u);
    { uint32_t v = 0xB0F4u; push32(c, v); }
L_d08d8:
    X86_TICK(c, 9);
    // 0d08d8  push 7
    X86_AT(c, 0xd08d8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d08da  call 0xba428
    X86_AT(c, 0xd08dau);
    push32(c, 0xd08dfu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd08dfu);
    X86_TICK(c, 9);
    // 0d08df  push 7
    X86_AT(c, 0xd08dfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d08e1  call 0xbbb5c
    X86_AT(c, 0xd08e1u);
    push32(c, 0xd08e6u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd08e6u);
    X86_TICK(c, 9);
    // 0d08e6  add esp, 0xc
    X86_AT(c, 0xd08e6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d08e9  jmp 0xd098e
    X86_AT(c, 0xd08e9u);
    goto L_d098e;
L_d08ee:
    X86_TICK(c, 18);
    // 0d08ee  lea eax, [edi + edi*2]
    X86_AT(c, 0xd08eeu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d08f1  lea edx, [eax*8]
    X86_AT(c, 0xd08f1u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d08f8  lea edx, [eax + edx*8]
    X86_AT(c, 0xd08f8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d08fb  cmp byte ptr [edx + 0xa4abd], 0x41
    X86_AT(c, 0xd08fbu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu))), 0x41u, 0, 1);
    // 0d0902  je 0xd0936
    X86_AT(c, 0xd0902u);
    if (x86_cc(c, 4)) { goto L_d0936; }
    X86_TICK(c, 9);
    // 0d0904  push 3
    X86_AT(c, 0xd0904u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d0906  call 0xb607c
    X86_AT(c, 0xd0906u);
    push32(c, 0xd090bu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd090bu);
    X86_TICK(c, 11);
    // 0d090b  push 0xb134
    X86_AT(c, 0xd090bu);
    { uint32_t v = 0xB134u; push32(c, v); }
    // 0d0910  push 7
    X86_AT(c, 0xd0910u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0912  call 0xba428
    X86_AT(c, 0xd0912u);
    push32(c, 0xd0917u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0917u);
    X86_TICK(c, 9);
    // 0d0917  push 7
    X86_AT(c, 0xd0917u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0919  call 0xbbb5c
    X86_AT(c, 0xd0919u);
    push32(c, 0xd091eu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd091eu);
    X86_TICK(c, 2);
    // 0d091e  push 0xb168
    X86_AT(c, 0xd091eu);
    { uint32_t v = 0xB168u; push32(c, v); }
L_d0923:
    X86_TICK(c, 9);
    // 0d0923  push 7
    X86_AT(c, 0xd0923u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0925  call 0xba428
    X86_AT(c, 0xd0925u);
    push32(c, 0xd092au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd092au);
    X86_TICK(c, 9);
    // 0d092a  push 7
    X86_AT(c, 0xd092au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d092c  call 0xbbb5c
    X86_AT(c, 0xd092cu);
    push32(c, 0xd0931u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0931u);
    X86_TICK(c, 9);
    // 0d0931  add esp, 0x1c
    X86_AT(c, 0xd0931u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d0934  jmp 0xd098e
    X86_AT(c, 0xd0934u);
    goto L_d098e;
L_d0936:
    X86_TICK(c, 9);
    // 0d0936  push 2
    X86_AT(c, 0xd0936u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d0938  call 0xb607c
    X86_AT(c, 0xd0938u);
    push32(c, 0xd093du); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd093du);
    X86_TICK(c, 7);
    // 0d093d  call 0xcaa9c
    X86_AT(c, 0xd093du);
    push32(c, 0xd0942u); x86_call_known(c, 0xcaa9cu, f_000caa9c); X86_RET(c, 0xd0942u);
    X86_TICK(c, 9);
    // 0d0942  push edi
    X86_AT(c, 0xd0942u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0943  call 0xc7f0c
    X86_AT(c, 0xd0943u);
    push32(c, 0xd0948u); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xd0948u);
    X86_TICK(c, 9);
    // 0d0948  push 2
    X86_AT(c, 0xd0948u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d094a  call 0xbebbc
    X86_AT(c, 0xd094au);
    push32(c, 0xd094fu); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xd094fu);
    X86_TICK(c, 36);
    // 0d094f  lea eax, [edi + edi*2]
    X86_AT(c, 0xd094fu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d0952  lea edx, [eax*8]
    X86_AT(c, 0xd0952u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d0959  lea edx, [eax + edx*8]
    X86_AT(c, 0xd0959u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d095c  mov byte ptr [edx + 0xa4abd], 0x47
    X86_AT(c, 0xd095cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu)), 0x47u);
    // 0d0963  mov eax, dword ptr [edx + 0xa4ad9]
    X86_AT(c, 0xd0963u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD9u)));
    // 0d0969  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xd0969u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0d096c  cdq 
    X86_AT(c, 0xd096cu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d096d  sub eax, edx
    X86_AT(c, 0xd096du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0d096f  sar eax, 1
    X86_AT(c, 0xd096fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0d0971  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xd0971u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d0974  mov dword ptr [edx + 0xa4ad5], eax
    X86_AT(c, 0xd0974u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD5u)), c.r[0]);
    // 0d097a  push edi
    X86_AT(c, 0xd097au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d097b  call 0xc7f0c
    X86_AT(c, 0xd097bu);
    push32(c, 0xd0980u); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xd0980u);
    X86_TICK(c, 9);
    // 0d0980  push edi
    X86_AT(c, 0xd0980u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0981  call 0xbe720
    X86_AT(c, 0xd0981u);
    push32(c, 0xd0986u); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xd0986u);
    X86_TICK(c, 7);
    // 0d0986  call 0xb75c0
    X86_AT(c, 0xd0986u);
    push32(c, 0xd098bu); x86_call_known(c, 0xb75c0u, f_000b75c0); X86_RET(c, 0xd098bu);
L_d098b:
    X86_TICK(c, 2);
    // 0d098b  add esp, 0x14
    X86_AT(c, 0xd098bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_d098e:
    X86_TICK(c, 7);
    // 0d098e  cmp edi, 0xffffffff
    X86_AT(c, 0xd098eu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d0991  je 0xd09b5
    X86_AT(c, 0xd0991u);
    if (x86_cc(c, 4)) { goto L_d09b5; }
    X86_TICK(c, 11);
    // 0d0993  push 0xb1a8
    X86_AT(c, 0xd0993u);
    { uint32_t v = 0xB1A8u; push32(c, v); }
    // 0d0998  push 7
    X86_AT(c, 0xd0998u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d099a  call 0xba428
    X86_AT(c, 0xd099au);
    push32(c, 0xd099fu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd099fu);
    X86_TICK(c, 9);
    // 0d099f  push 7
    X86_AT(c, 0xd099fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d09a1  call 0xbbb5c
    X86_AT(c, 0xd09a1u);
    push32(c, 0xd09a6u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd09a6u);
    X86_TICK(c, 9);
    // 0d09a6  push 7
    X86_AT(c, 0xd09a6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d09a8  call 0xc9890
    X86_AT(c, 0xd09a8u);
    push32(c, 0xd09adu); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xd09adu);
    X86_TICK(c, 9);
    // 0d09ad  add esp, 0x10
    X86_AT(c, 0xd09adu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d09b0  jmp 0xd0481
    X86_AT(c, 0xd09b0u);
    X86_POLL(c, 0xd0481u); goto L_d0481;
L_d09b5:
    X86_TICK(c, 11);
    // 0d09b5  push 0xb1e0
    X86_AT(c, 0xd09b5u);
    { uint32_t v = 0xB1E0u; push32(c, v); }
    // 0d09ba  push 7
    X86_AT(c, 0xd09bau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d09bc  call 0xba428
    X86_AT(c, 0xd09bcu);
    push32(c, 0xd09c1u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd09c1u);
    X86_TICK(c, 9);
    // 0d09c1  push 7
    X86_AT(c, 0xd09c1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d09c3  call 0xbbb5c
    X86_AT(c, 0xd09c3u);
    push32(c, 0xd09c8u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd09c8u);
    X86_TICK(c, 26);
    // 0d09c8  add esp, 0xc
    X86_AT(c, 0xd09c8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d09cb  pop edi
    X86_AT(c, 0xd09cbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d09cc  pop ebx
    X86_AT(c, 0xd09ccu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d09cd  leave 
    X86_AT(c, 0xd09cdu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d09ce  ret 
    X86_AT(c, 0xd09ceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd08d8u, "ran off the end of a function");
}
void f_000d0923(X86Cpu& c) {
    goto L_d0923;
L_d0481:
    X86_TICK(c, 11);
    // 0d0481  push 0xa630
    X86_AT(c, 0xd0481u);
    { uint32_t v = 0xA630u; push32(c, v); }
    // 0d0486  push 7
    X86_AT(c, 0xd0486u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0488  call 0xba428
    X86_AT(c, 0xd0488u);
    push32(c, 0xd048du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd048du);
    X86_TICK(c, 9);
    // 0d048d  push 7
    X86_AT(c, 0xd048du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d048f  call 0xbbb5c
    X86_AT(c, 0xd048fu);
    push32(c, 0xd0494u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0494u);
    X86_TICK(c, 11);
    // 0d0494  push 0xa654
    X86_AT(c, 0xd0494u);
    { uint32_t v = 0xA654u; push32(c, v); }
    // 0d0499  push 7
    X86_AT(c, 0xd0499u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d049b  call 0xba428
    X86_AT(c, 0xd049bu);
    push32(c, 0xd04a0u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd04a0u);
    X86_TICK(c, 9);
    // 0d04a0  push 7
    X86_AT(c, 0xd04a0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d04a2  call 0xbbb5c
    X86_AT(c, 0xd04a2u);
    push32(c, 0xd04a7u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd04a7u);
    X86_TICK(c, 11);
    // 0d04a7  push 0xa67c
    X86_AT(c, 0xd04a7u);
    { uint32_t v = 0xA67Cu; push32(c, v); }
    // 0d04ac  push 7
    X86_AT(c, 0xd04acu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d04ae  call 0xba428
    X86_AT(c, 0xd04aeu);
    push32(c, 0xd04b3u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd04b3u);
    X86_TICK(c, 9);
    // 0d04b3  push 7
    X86_AT(c, 0xd04b3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d04b5  call 0xbbb5c
    X86_AT(c, 0xd04b5u);
    push32(c, 0xd04bau); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd04bau);
    X86_TICK(c, 11);
    // 0d04ba  push 0xa6b0
    X86_AT(c, 0xd04bau);
    { uint32_t v = 0xA6B0u; push32(c, v); }
    // 0d04bf  push 7
    X86_AT(c, 0xd04bfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d04c1  call 0xba428
    X86_AT(c, 0xd04c1u);
    push32(c, 0xd04c6u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd04c6u);
    X86_TICK(c, 9);
    // 0d04c6  push 7
    X86_AT(c, 0xd04c6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d04c8  call 0xbbb5c
    X86_AT(c, 0xd04c8u);
    push32(c, 0xd04cdu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd04cdu);
    X86_TICK(c, 11);
    // 0d04cd  push 0xa6e0
    X86_AT(c, 0xd04cdu);
    { uint32_t v = 0xA6E0u; push32(c, v); }
    // 0d04d2  push 7
    X86_AT(c, 0xd04d2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d04d4  call 0xba428
    X86_AT(c, 0xd04d4u);
    push32(c, 0xd04d9u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd04d9u);
    X86_TICK(c, 9);
    // 0d04d9  push 7
    X86_AT(c, 0xd04d9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d04db  call 0xbbb5c
    X86_AT(c, 0xd04dbu);
    push32(c, 0xd04e0u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd04e0u);
    X86_TICK(c, 13);
    // 0d04e0  add esp, 0x3c
    X86_AT(c, 0xd04e0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d04e3  push 0xa6fc
    X86_AT(c, 0xd04e3u);
    { uint32_t v = 0xA6FCu; push32(c, v); }
    // 0d04e8  push 7
    X86_AT(c, 0xd04e8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d04ea  call 0xba428
    X86_AT(c, 0xd04eau);
    push32(c, 0xd04efu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd04efu);
    X86_TICK(c, 2);
    // 0d04ef  add esp, 8
    X86_AT(c, 0xd04efu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d04f2:
    X86_TICK(c, 9);
    // 0d04f2  push 7
    X86_AT(c, 0xd04f2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d04f4  call 0xb9514
    X86_AT(c, 0xd04f4u);
    push32(c, 0xd04f9u); x86_call_known(c, 0xb9514u, f_000b9514); X86_RET(c, 0xd04f9u);
    X86_TICK(c, 12);
    // 0d04f9  xchg ebx, eax
    X86_AT(c, 0xd04f9u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d04fa  add esp, 4
    X86_AT(c, 0xd04fau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d04fd  cmp bl, 1
    X86_AT(c, 0xd04fdu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d0500  je 0xd052b
    X86_AT(c, 0xd0500u);
    if (x86_cc(c, 4)) { goto L_d052b; }
    X86_TICK(c, 7);
    // 0d0502  cmp bl, 0x51
    X86_AT(c, 0xd0502u);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0d0505  je 0xd052b
    X86_AT(c, 0xd0505u);
    if (x86_cc(c, 4)) { goto L_d052b; }
    X86_TICK(c, 7);
    // 0d0507  cmp bl, 0x41
    X86_AT(c, 0xd0507u);
    (void)x86_sub(c, g8(c, 3), 0x41u, 0, 1);
    // 0d050a  je 0xd052b
    X86_AT(c, 0xd050au);
    if (x86_cc(c, 4)) { goto L_d052b; }
    X86_TICK(c, 7);
    // 0d050c  cmp bl, 0x42
    X86_AT(c, 0xd050cu);
    (void)x86_sub(c, g8(c, 3), 0x42u, 0, 1);
    // 0d050f  je 0xd052b
    X86_AT(c, 0xd050fu);
    if (x86_cc(c, 4)) { goto L_d052b; }
    X86_TICK(c, 7);
    // 0d0511  cmp bl, 0x43
    X86_AT(c, 0xd0511u);
    (void)x86_sub(c, g8(c, 3), 0x43u, 0, 1);
    // 0d0514  je 0xd052b
    X86_AT(c, 0xd0514u);
    if (x86_cc(c, 4)) { goto L_d052b; }
    X86_TICK(c, 7);
    // 0d0516  cmp bl, 0x44
    X86_AT(c, 0xd0516u);
    (void)x86_sub(c, g8(c, 3), 0x44u, 0, 1);
    // 0d0519  je 0xd052b
    X86_AT(c, 0xd0519u);
    if (x86_cc(c, 4)) { goto L_d052b; }
    X86_TICK(c, 7);
    // 0d051b  and bl, bl
    X86_AT(c, 0xd051bu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d051d  je 0xd04f2
    X86_AT(c, 0xd051du);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd04f2u); goto L_d04f2; }
    X86_TICK(c, 9);
    // 0d051f  push 1
    X86_AT(c, 0xd051fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d0521  call 0xb607c
    X86_AT(c, 0xd0521u);
    push32(c, 0xd0526u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd0526u);
    X86_TICK(c, 9);
    // 0d0526  add esp, 4
    X86_AT(c, 0xd0526u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0529  jmp 0xd04f2
    X86_AT(c, 0xd0529u);
    X86_POLL(c, 0xd04f2u); goto L_d04f2;
L_d052b:
    X86_TICK(c, 7);
    // 0d052b  cmp bl, 1
    X86_AT(c, 0xd052bu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d052e  je 0xd0535
    X86_AT(c, 0xd052eu);
    if (x86_cc(c, 4)) { goto L_d0535; }
    X86_TICK(c, 7);
    // 0d0530  cmp bl, 0x51
    X86_AT(c, 0xd0530u);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0d0533  jne 0xd0550
    X86_AT(c, 0xd0533u);
    if (x86_cc(c, 5)) { goto L_d0550; }
L_d0535:
    X86_TICK(c, 11);
    // 0d0535  push 0xa720
    X86_AT(c, 0xd0535u);
    { uint32_t v = 0xA720u; push32(c, v); }
    // 0d053a  push 7
    X86_AT(c, 0xd053au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d053c  call 0xba428
    X86_AT(c, 0xd053cu);
    push32(c, 0xd0541u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0541u);
    X86_TICK(c, 9);
    // 0d0541  push 7
    X86_AT(c, 0xd0541u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0543  call 0xbbb5c
    X86_AT(c, 0xd0543u);
    push32(c, 0xd0548u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0548u);
    X86_TICK(c, 9);
    // 0d0548  add esp, 0xc
    X86_AT(c, 0xd0548u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d054b  jmp 0xd09b5
    X86_AT(c, 0xd054bu);
    goto L_d09b5;
L_d0550:
    X86_TICK(c, 12);
    // 0d0550  movzx edx, bl
    X86_AT(c, 0xd0550u);
    c.r[2] = g8(c, 3);
    // 0d0553  sub edx, 0x41
    X86_AT(c, 0xd0553u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x41u, 0, 4); }
    // 0d0556  cmp edx, 3
    X86_AT(c, 0xd0556u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0d0559  ja 0xd098e
    X86_AT(c, 0xd0559u);
    if (x86_cc(c, 7)) { goto L_d098e; }
    X86_TICK(c, 7);
    // 0d055f  jmp dword ptr cs:[edx*4 + 0xd0567]
    X86_AT(c, 0xd055fu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD0567u)));
      switch (t) {
      case 0xd0577u: goto L_d0577;
      case 0xd066au: goto L_d066a;
      case 0xd0776u: goto L_d0776;
      case 0xd083eu: goto L_d083e;
      default: x86_jump(c, t); return; } }
L_d0577:
    X86_TICK(c, 11);
    // 0d0577  push 0xa73c
    X86_AT(c, 0xd0577u);
    { uint32_t v = 0xA73Cu; push32(c, v); }
    // 0d057c  push 7
    X86_AT(c, 0xd057cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d057e  call 0xba428
    X86_AT(c, 0xd057eu);
    push32(c, 0xd0583u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0583u);
    X86_TICK(c, 9);
    // 0d0583  push 7
    X86_AT(c, 0xd0583u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0585  call 0xbbb5c
    X86_AT(c, 0xd0585u);
    push32(c, 0xd058au); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd058au);
    X86_TICK(c, 11);
    // 0d058a  push 0xa754
    X86_AT(c, 0xd058au);
    { uint32_t v = 0xA754u; push32(c, v); }
    // 0d058f  push 7
    X86_AT(c, 0xd058fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0591  call 0xba428
    X86_AT(c, 0xd0591u);
    push32(c, 0xd0596u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0596u);
    X86_TICK(c, 11);
    // 0d0596  push 0
    X86_AT(c, 0xd0596u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0598  push 7
    X86_AT(c, 0xd0598u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d059a  call 0xb6f28
    X86_AT(c, 0xd059au);
    push32(c, 0xd059fu); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd059fu);
    X86_TICK(c, 12);
    // 0d059f  xchg edi, eax
    X86_AT(c, 0xd059fu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d05a0  push 7
    X86_AT(c, 0xd05a0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d05a2  call 0xbbb5c
    X86_AT(c, 0xd05a2u);
    push32(c, 0xd05a7u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd05a7u);
    X86_TICK(c, 9);
    // 0d05a7  add esp, 0x20
    X86_AT(c, 0xd05a7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0d05aa  cmp edi, 0xffffffff
    X86_AT(c, 0xd05aau);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d05ad  jne 0xd05b9
    X86_AT(c, 0xd05adu);
    if (x86_cc(c, 5)) { goto L_d05b9; }
    X86_TICK(c, 9);
    // 0d05af  push 0xa7cc
    X86_AT(c, 0xd05afu);
    { uint32_t v = 0xA7CCu; push32(c, v); }
    // 0d05b4  jmp 0xd08d8
    X86_AT(c, 0xd05b4u);
    goto L_d08d8;
L_d05b9:
    X86_TICK(c, 11);
    // 0d05b9  push 0x64
    X86_AT(c, 0xd05b9u);
    { uint32_t v = 0x64u; push32(c, v); }
    // 0d05bb  push edi
    X86_AT(c, 0xd05bbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d05bc  call 0xcfe88
    X86_AT(c, 0xd05bcu);
    push32(c, 0xd05c1u); x86_call_known(c, 0xcfe88u, f_000cfe88); X86_RET(c, 0xd05c1u);
    X86_TICK(c, 9);
    // 0d05c1  add esp, 8
    X86_AT(c, 0xd05c1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d05c4  inc eax
    X86_AT(c, 0xd05c4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d05c5  jne 0xd05d1
    X86_AT(c, 0xd05c5u);
    if (x86_cc(c, 5)) { goto L_d05d1; }
    X86_TICK(c, 9);
    // 0d05c7  push 0xa858
    X86_AT(c, 0xd05c7u);
    { uint32_t v = 0xA858u; push32(c, v); }
    // 0d05cc  jmp 0xd08d8
    X86_AT(c, 0xd05ccu);
    goto L_d08d8;
L_d05d1:
    X86_TICK(c, 11);
    // 0d05d1  push 0xa8e4
    X86_AT(c, 0xd05d1u);
    { uint32_t v = 0xA8E4u; push32(c, v); }
    // 0d05d6  push 7
    X86_AT(c, 0xd05d6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d05d8  call 0xba428
    X86_AT(c, 0xd05d8u);
    push32(c, 0xd05ddu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd05ddu);
    X86_TICK(c, 11);
    // 0d05dd  push 0
    X86_AT(c, 0xd05ddu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d05df  push 7
    X86_AT(c, 0xd05dfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d05e1  call 0xb6f28
    X86_AT(c, 0xd05e1u);
    push32(c, 0xd05e6u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd05e6u);
    X86_TICK(c, 12);
    // 0d05e6  xchg edi, eax
    X86_AT(c, 0xd05e6u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d05e7  add esp, 0x10
    X86_AT(c, 0xd05e7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d05ea  cmp edi, 0xffffffff
    X86_AT(c, 0xd05eau);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d05ed  jne 0xd05fe
    X86_AT(c, 0xd05edu);
    if (x86_cc(c, 5)) { goto L_d05fe; }
    X86_TICK(c, 7);
    // 0d05ef  call 0xce2c8
    X86_AT(c, 0xd05efu);
    push32(c, 0xd05f4u); x86_call_known(c, 0xce2c8u, f_000ce2c8); X86_RET(c, 0xd05f4u);
    X86_TICK(c, 9);
    // 0d05f4  push 0xa914
    X86_AT(c, 0xd05f4u);
    { uint32_t v = 0xA914u; push32(c, v); }
    // 0d05f9  jmp 0xd08d8
    X86_AT(c, 0xd05f9u);
    goto L_d08d8;
L_d05fe:
    X86_TICK(c, 18);
    // 0d05fe  lea eax, [edi + edi*2]
    X86_AT(c, 0xd05feu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d0601  lea edx, [eax*8]
    X86_AT(c, 0xd0601u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d0608  lea edx, [eax + edx*8]
    X86_AT(c, 0xd0608u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d060b  cmp byte ptr [edx + 0xa4abd], 0x50
    X86_AT(c, 0xd060bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu))), 0x50u, 0, 1);
    // 0d0612  je 0xd0638
    X86_AT(c, 0xd0612u);
    if (x86_cc(c, 4)) { goto L_d0638; }
    X86_TICK(c, 9);
    // 0d0614  push 3
    X86_AT(c, 0xd0614u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d0616  call 0xb607c
    X86_AT(c, 0xd0616u);
    push32(c, 0xd061bu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd061bu);
    X86_TICK(c, 11);
    // 0d061b  push 0xa954
    X86_AT(c, 0xd061bu);
    { uint32_t v = 0xA954u; push32(c, v); }
    // 0d0620  push 7
    X86_AT(c, 0xd0620u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0622  call 0xba428
    X86_AT(c, 0xd0622u);
    push32(c, 0xd0627u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0627u);
    X86_TICK(c, 9);
    // 0d0627  push 7
    X86_AT(c, 0xd0627u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0629  call 0xbbb5c
    X86_AT(c, 0xd0629u);
    push32(c, 0xd062eu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd062eu);
    X86_TICK(c, 9);
    // 0d062e  push 0xa98c
    X86_AT(c, 0xd062eu);
    { uint32_t v = 0xA98Cu; push32(c, v); }
    // 0d0633  jmp 0xd0923
    X86_AT(c, 0xd0633u);
    goto L_d0923;
L_d0638:
    X86_TICK(c, 9);
    // 0d0638  push 2
    X86_AT(c, 0xd0638u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d063a  call 0xb607c
    X86_AT(c, 0xd063au);
    push32(c, 0xd063fu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd063fu);
    X86_TICK(c, 7);
    // 0d063f  call 0xcaa9c
    X86_AT(c, 0xd063fu);
    push32(c, 0xd0644u); x86_call_known(c, 0xcaa9cu, f_000caa9c); X86_RET(c, 0xd0644u);
    X86_TICK(c, 9);
    // 0d0644  push edi
    X86_AT(c, 0xd0644u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0645  call 0xc7f0c
    X86_AT(c, 0xd0645u);
    push32(c, 0xd064au); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xd064au);
    X86_TICK(c, 9);
    // 0d064a  push 2
    X86_AT(c, 0xd064au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d064c  call 0xbebbc
    X86_AT(c, 0xd064cu);
    push32(c, 0xd0651u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xd0651u);
    X86_TICK(c, 15);
    // 0d0651  lea eax, [edi + edi*2]
    X86_AT(c, 0xd0651u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d0654  lea edx, [eax*8]
    X86_AT(c, 0xd0654u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d065b  lea edx, [eax + edx*8]
    X86_AT(c, 0xd065bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d065e  mov byte ptr [edx + 0xa4abd], 0x47
    X86_AT(c, 0xd065eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu)), 0x47u);
    // 0d0665  jmp 0xd0765
    X86_AT(c, 0xd0665u);
    goto L_d0765;
L_d066a:
    X86_TICK(c, 11);
    // 0d066a  push 0xa9cc
    X86_AT(c, 0xd066au);
    { uint32_t v = 0xA9CCu; push32(c, v); }
    // 0d066f  push 7
    X86_AT(c, 0xd066fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0671  call 0xba428
    X86_AT(c, 0xd0671u);
    push32(c, 0xd0676u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0676u);
    X86_TICK(c, 9);
    // 0d0676  push 7
    X86_AT(c, 0xd0676u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0678  call 0xbbb5c
    X86_AT(c, 0xd0678u);
    push32(c, 0xd067du); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd067du);
    X86_TICK(c, 11);
    // 0d067d  push 0xa9e4
    X86_AT(c, 0xd067du);
    { uint32_t v = 0xA9E4u; push32(c, v); }
    // 0d0682  push 7
    X86_AT(c, 0xd0682u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0684  call 0xba428
    X86_AT(c, 0xd0684u);
    push32(c, 0xd0689u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0689u);
    X86_TICK(c, 11);
    // 0d0689  push 0
    X86_AT(c, 0xd0689u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d068b  push 7
    X86_AT(c, 0xd068bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d068d  call 0xb6f28
    X86_AT(c, 0xd068du);
    push32(c, 0xd0692u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd0692u);
    X86_TICK(c, 12);
    // 0d0692  xchg edi, eax
    X86_AT(c, 0xd0692u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d0693  push 7
    X86_AT(c, 0xd0693u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0695  call 0xbbb5c
    X86_AT(c, 0xd0695u);
    push32(c, 0xd069au); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd069au);
    X86_TICK(c, 9);
    // 0d069a  add esp, 0x20
    X86_AT(c, 0xd069au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0d069d  cmp edi, 0xffffffff
    X86_AT(c, 0xd069du);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d06a0  jne 0xd06ac
    X86_AT(c, 0xd06a0u);
    if (x86_cc(c, 5)) { goto L_d06ac; }
    X86_TICK(c, 9);
    // 0d06a2  push 0xaa54
    X86_AT(c, 0xd06a2u);
    { uint32_t v = 0xAA54u; push32(c, v); }
    // 0d06a7  jmp 0xd08d8
    X86_AT(c, 0xd06a7u);
    goto L_d08d8;
L_d06ac:
    X86_TICK(c, 11);
    // 0d06ac  push 0xc8
    X86_AT(c, 0xd06acu);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0d06b1  push edi
    X86_AT(c, 0xd06b1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d06b2  call 0xcfe88
    X86_AT(c, 0xd06b2u);
    push32(c, 0xd06b7u); x86_call_known(c, 0xcfe88u, f_000cfe88); X86_RET(c, 0xd06b7u);
    X86_TICK(c, 9);
    // 0d06b7  add esp, 8
    X86_AT(c, 0xd06b7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d06ba  inc eax
    X86_AT(c, 0xd06bau);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d06bb  jne 0xd06c7
    X86_AT(c, 0xd06bbu);
    if (x86_cc(c, 5)) { goto L_d06c7; }
    X86_TICK(c, 9);
    // 0d06bd  push 0xaae0
    X86_AT(c, 0xd06bdu);
    { uint32_t v = 0xAAE0u; push32(c, v); }
    // 0d06c2  jmp 0xd08d8
    X86_AT(c, 0xd06c2u);
    goto L_d08d8;
L_d06c7:
    X86_TICK(c, 11);
    // 0d06c7  push 0xab6c
    X86_AT(c, 0xd06c7u);
    { uint32_t v = 0xAB6Cu; push32(c, v); }
    // 0d06cc  push 7
    X86_AT(c, 0xd06ccu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d06ce  call 0xba428
    X86_AT(c, 0xd06ceu);
    push32(c, 0xd06d3u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd06d3u);
    X86_TICK(c, 11);
    // 0d06d3  push 0
    X86_AT(c, 0xd06d3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d06d5  push 7
    X86_AT(c, 0xd06d5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d06d7  call 0xb6f28
    X86_AT(c, 0xd06d7u);
    push32(c, 0xd06dcu); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd06dcu);
    X86_TICK(c, 12);
    // 0d06dc  xchg edi, eax
    X86_AT(c, 0xd06dcu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d06dd  add esp, 0x10
    X86_AT(c, 0xd06ddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d06e0  cmp edi, 0xffffffff
    X86_AT(c, 0xd06e0u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d06e3  jne 0xd06f4
    X86_AT(c, 0xd06e3u);
    if (x86_cc(c, 5)) { goto L_d06f4; }
    X86_TICK(c, 7);
    // 0d06e5  call 0xce2c8
    X86_AT(c, 0xd06e5u);
    push32(c, 0xd06eau); x86_call_known(c, 0xce2c8u, f_000ce2c8); X86_RET(c, 0xd06eau);
    X86_TICK(c, 9);
    // 0d06ea  push 0xab9c
    X86_AT(c, 0xd06eau);
    { uint32_t v = 0xAB9Cu; push32(c, v); }
    // 0d06ef  jmp 0xd08d8
    X86_AT(c, 0xd06efu);
    goto L_d08d8;
L_d06f4:
    X86_TICK(c, 21);
    // 0d06f4  lea eax, [edi + edi*2]
    X86_AT(c, 0xd06f4u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d06f7  lea edx, [eax*8]
    X86_AT(c, 0xd06f7u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d06fe  lea edx, [eax + edx*8]
    X86_AT(c, 0xd06feu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d0701  mov eax, dword ptr [edx + 0xa4ad9]
    X86_AT(c, 0xd0701u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD9u)));
    // 0d0707  cmp eax, dword ptr [edx + 0xa4ad5]
    X86_AT(c, 0xd0707u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD5u))), 0, 4);
    // 0d070d  jne 0xd0733
    X86_AT(c, 0xd070du);
    if (x86_cc(c, 5)) { goto L_d0733; }
    X86_TICK(c, 9);
    // 0d070f  push 3
    X86_AT(c, 0xd070fu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d0711  call 0xb607c
    X86_AT(c, 0xd0711u);
    push32(c, 0xd0716u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd0716u);
    X86_TICK(c, 11);
    // 0d0716  push 0xabdc
    X86_AT(c, 0xd0716u);
    { uint32_t v = 0xABDCu; push32(c, v); }
    // 0d071b  push 7
    X86_AT(c, 0xd071bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d071d  call 0xba428
    X86_AT(c, 0xd071du);
    push32(c, 0xd0722u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0722u);
    X86_TICK(c, 9);
    // 0d0722  push 7
    X86_AT(c, 0xd0722u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0724  call 0xbbb5c
    X86_AT(c, 0xd0724u);
    push32(c, 0xd0729u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0729u);
    X86_TICK(c, 9);
    // 0d0729  push 0xac10
    X86_AT(c, 0xd0729u);
    { uint32_t v = 0xAC10u; push32(c, v); }
    // 0d072e  jmp 0xd0923
    X86_AT(c, 0xd072eu);
    goto L_d0923;
L_d0733:
    X86_TICK(c, 9);
    // 0d0733  push 2
    X86_AT(c, 0xd0733u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d0735  call 0xb607c
    X86_AT(c, 0xd0735u);
    push32(c, 0xd073au); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd073au);
    X86_TICK(c, 7);
    // 0d073a  call 0xcaa9c
    X86_AT(c, 0xd073au);
    push32(c, 0xd073fu); x86_call_known(c, 0xcaa9cu, f_000caa9c); X86_RET(c, 0xd073fu);
    X86_TICK(c, 9);
    // 0d073f  push edi
    X86_AT(c, 0xd073fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0740  call 0xc7f0c
    X86_AT(c, 0xd0740u);
    push32(c, 0xd0745u); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xd0745u);
    X86_TICK(c, 9);
    // 0d0745  push 2
    X86_AT(c, 0xd0745u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d0747  call 0xbebbc
    X86_AT(c, 0xd0747u);
    push32(c, 0xd074cu); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xd074cu);
    X86_TICK(c, 12);
    // 0d074c  lea eax, [edi + edi*2]
    X86_AT(c, 0xd074cu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d074f  lea edx, [eax*8]
    X86_AT(c, 0xd074fu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d0756  lea edx, [eax + edx*8]
    X86_AT(c, 0xd0756u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d0759  mov eax, dword ptr [edx + 0xa4ad9]
    X86_AT(c, 0xd0759u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD9u)));
    // 0d075f  mov dword ptr [edx + 0xa4ad5], eax
    X86_AT(c, 0xd075fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD5u)), c.r[0]);
L_d0765:
    X86_TICK(c, 9);
    // 0d0765  push edi
    X86_AT(c, 0xd0765u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0766  call 0xc7f0c
    X86_AT(c, 0xd0766u);
    push32(c, 0xd076bu); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xd076bu);
    X86_TICK(c, 9);
    // 0d076b  push edi
    X86_AT(c, 0xd076bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d076c  call 0xbe720
    X86_AT(c, 0xd076cu);
    push32(c, 0xd0771u); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xd0771u);
    X86_TICK(c, 7);
    // 0d0771  jmp 0xd098b
    X86_AT(c, 0xd0771u);
    goto L_d098b;
L_d0776:
    X86_TICK(c, 11);
    // 0d0776  push 0xac50
    X86_AT(c, 0xd0776u);
    { uint32_t v = 0xAC50u; push32(c, v); }
    // 0d077b  push 7
    X86_AT(c, 0xd077bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d077d  call 0xba428
    X86_AT(c, 0xd077du);
    push32(c, 0xd0782u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0782u);
    X86_TICK(c, 9);
    // 0d0782  push 7
    X86_AT(c, 0xd0782u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0784  call 0xbbb5c
    X86_AT(c, 0xd0784u);
    push32(c, 0xd0789u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0789u);
    X86_TICK(c, 11);
    // 0d0789  push 0xac74
    X86_AT(c, 0xd0789u);
    { uint32_t v = 0xAC74u; push32(c, v); }
    // 0d078e  push 7
    X86_AT(c, 0xd078eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0790  call 0xba428
    X86_AT(c, 0xd0790u);
    push32(c, 0xd0795u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0795u);
    X86_TICK(c, 11);
    // 0d0795  push 0
    X86_AT(c, 0xd0795u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0797  push 7
    X86_AT(c, 0xd0797u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0799  call 0xb6f28
    X86_AT(c, 0xd0799u);
    push32(c, 0xd079eu); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd079eu);
    X86_TICK(c, 12);
    // 0d079e  xchg edi, eax
    X86_AT(c, 0xd079eu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d079f  push 7
    X86_AT(c, 0xd079fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d07a1  call 0xbbb5c
    X86_AT(c, 0xd07a1u);
    push32(c, 0xd07a6u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd07a6u);
    X86_TICK(c, 9);
    // 0d07a6  add esp, 0x20
    X86_AT(c, 0xd07a6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0d07a9  cmp edi, 0xffffffff
    X86_AT(c, 0xd07a9u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d07ac  jne 0xd07b8
    X86_AT(c, 0xd07acu);
    if (x86_cc(c, 5)) { goto L_d07b8; }
    X86_TICK(c, 9);
    // 0d07ae  push 0xacf0
    X86_AT(c, 0xd07aeu);
    { uint32_t v = 0xACF0u; push32(c, v); }
    // 0d07b3  jmp 0xd08d8
    X86_AT(c, 0xd07b3u);
    goto L_d08d8;
L_d07b8:
    X86_TICK(c, 11);
    // 0d07b8  push 0x1f4
    X86_AT(c, 0xd07b8u);
    { uint32_t v = 0x1F4u; push32(c, v); }
    // 0d07bd  push edi
    X86_AT(c, 0xd07bdu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d07be  call 0xcfe88
    X86_AT(c, 0xd07beu);
    push32(c, 0xd07c3u); x86_call_known(c, 0xcfe88u, f_000cfe88); X86_RET(c, 0xd07c3u);
    X86_TICK(c, 9);
    // 0d07c3  add esp, 8
    X86_AT(c, 0xd07c3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d07c6  inc eax
    X86_AT(c, 0xd07c6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d07c7  jne 0xd07d3
    X86_AT(c, 0xd07c7u);
    if (x86_cc(c, 5)) { goto L_d07d3; }
    X86_TICK(c, 9);
    // 0d07c9  push 0xad7c
    X86_AT(c, 0xd07c9u);
    { uint32_t v = 0xAD7Cu; push32(c, v); }
    // 0d07ce  jmp 0xd08d8
    X86_AT(c, 0xd07ceu);
    goto L_d08d8;
L_d07d3:
    X86_TICK(c, 11);
    // 0d07d3  push 0xae08
    X86_AT(c, 0xd07d3u);
    { uint32_t v = 0xAE08u; push32(c, v); }
    // 0d07d8  push 7
    X86_AT(c, 0xd07d8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d07da  call 0xba428
    X86_AT(c, 0xd07dau);
    push32(c, 0xd07dfu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd07dfu);
    X86_TICK(c, 11);
    // 0d07df  push 0xffffffff
    X86_AT(c, 0xd07dfu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d07e1  push 7
    X86_AT(c, 0xd07e1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d07e3  call 0xb6f28
    X86_AT(c, 0xd07e3u);
    push32(c, 0xd07e8u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd07e8u);
    X86_TICK(c, 12);
    // 0d07e8  xchg edi, eax
    X86_AT(c, 0xd07e8u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d07e9  add esp, 0x10
    X86_AT(c, 0xd07e9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d07ec  cmp edi, 0xffffffff
    X86_AT(c, 0xd07ecu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d07ef  jne 0xd0800
    X86_AT(c, 0xd07efu);
    if (x86_cc(c, 5)) { goto L_d0800; }
    X86_TICK(c, 7);
    // 0d07f1  call 0xce2c8
    X86_AT(c, 0xd07f1u);
    push32(c, 0xd07f6u); x86_call_known(c, 0xce2c8u, f_000ce2c8); X86_RET(c, 0xd07f6u);
    X86_TICK(c, 9);
    // 0d07f6  push 0xae44
    X86_AT(c, 0xd07f6u);
    { uint32_t v = 0xAE44u; push32(c, v); }
    // 0d07fb  jmp 0xd08d8
    X86_AT(c, 0xd07fbu);
    goto L_d08d8;
L_d0800:
    X86_TICK(c, 18);
    // 0d0800  lea eax, [edi + edi*2]
    X86_AT(c, 0xd0800u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d0803  lea edx, [eax*8]
    X86_AT(c, 0xd0803u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d080a  lea edx, [eax + edx*8]
    X86_AT(c, 0xd080au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d080d  cmp byte ptr [edx + 0xa4abd], 0x44
    X86_AT(c, 0xd080du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu))), 0x44u, 0, 1);
    // 0d0814  je 0xd0936
    X86_AT(c, 0xd0814u);
    if (x86_cc(c, 4)) { goto L_d0936; }
    X86_TICK(c, 9);
    // 0d081a  push 3
    X86_AT(c, 0xd081au);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d081c  call 0xb607c
    X86_AT(c, 0xd081cu);
    push32(c, 0xd0821u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd0821u);
    X86_TICK(c, 11);
    // 0d0821  push 0xae84
    X86_AT(c, 0xd0821u);
    { uint32_t v = 0xAE84u; push32(c, v); }
    // 0d0826  push 7
    X86_AT(c, 0xd0826u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0828  call 0xba428
    X86_AT(c, 0xd0828u);
    push32(c, 0xd082du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd082du);
    X86_TICK(c, 9);
    // 0d082d  push 7
    X86_AT(c, 0xd082du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d082f  call 0xbbb5c
    X86_AT(c, 0xd082fu);
    push32(c, 0xd0834u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0834u);
    X86_TICK(c, 9);
    // 0d0834  push 0xaeb8
    X86_AT(c, 0xd0834u);
    { uint32_t v = 0xAEB8u; push32(c, v); }
    // 0d0839  jmp 0xd0923
    X86_AT(c, 0xd0839u);
    goto L_d0923;
L_d083e:
    X86_TICK(c, 11);
    // 0d083e  push 0xaef8
    X86_AT(c, 0xd083eu);
    { uint32_t v = 0xAEF8u; push32(c, v); }
    // 0d0843  push 7
    X86_AT(c, 0xd0843u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0845  call 0xba428
    X86_AT(c, 0xd0845u);
    push32(c, 0xd084au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd084au);
    X86_TICK(c, 9);
    // 0d084a  push 7
    X86_AT(c, 0xd084au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d084c  call 0xbbb5c
    X86_AT(c, 0xd084cu);
    push32(c, 0xd0851u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0851u);
    X86_TICK(c, 11);
    // 0d0851  push 0xaf14
    X86_AT(c, 0xd0851u);
    { uint32_t v = 0xAF14u; push32(c, v); }
    // 0d0856  push 7
    X86_AT(c, 0xd0856u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0858  call 0xba428
    X86_AT(c, 0xd0858u);
    push32(c, 0xd085du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd085du);
    X86_TICK(c, 11);
    // 0d085d  push 0
    X86_AT(c, 0xd085du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d085f  push 7
    X86_AT(c, 0xd085fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0861  call 0xb6f28
    X86_AT(c, 0xd0861u);
    push32(c, 0xd0866u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd0866u);
    X86_TICK(c, 12);
    // 0d0866  xchg edi, eax
    X86_AT(c, 0xd0866u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d0867  push 7
    X86_AT(c, 0xd0867u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0869  call 0xbbb5c
    X86_AT(c, 0xd0869u);
    push32(c, 0xd086eu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd086eu);
    X86_TICK(c, 9);
    // 0d086e  add esp, 0x20
    X86_AT(c, 0xd086eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0d0871  cmp edi, 0xffffffff
    X86_AT(c, 0xd0871u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d0874  jne 0xd087d
    X86_AT(c, 0xd0874u);
    if (x86_cc(c, 5)) { goto L_d087d; }
    X86_TICK(c, 9);
    // 0d0876  push 0xafa4
    X86_AT(c, 0xd0876u);
    { uint32_t v = 0xAFA4u; push32(c, v); }
    // 0d087b  jmp 0xd08d8
    X86_AT(c, 0xd087bu);
    goto L_d08d8;
L_d087d:
    X86_TICK(c, 11);
    // 0d087d  push 0x384
    X86_AT(c, 0xd087du);
    { uint32_t v = 0x384u; push32(c, v); }
    // 0d0882  push edi
    X86_AT(c, 0xd0882u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0883  call 0xcfe88
    X86_AT(c, 0xd0883u);
    push32(c, 0xd0888u); x86_call_known(c, 0xcfe88u, f_000cfe88); X86_RET(c, 0xd0888u);
    X86_TICK(c, 9);
    // 0d0888  add esp, 8
    X86_AT(c, 0xd0888u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d088b  inc eax
    X86_AT(c, 0xd088bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d088c  jne 0xd08b0
    X86_AT(c, 0xd088cu);
    if (x86_cc(c, 5)) { goto L_d08b0; }
    X86_TICK(c, 9);
    // 0d088e  push 3
    X86_AT(c, 0xd088eu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d0890  call 0xb607c
    X86_AT(c, 0xd0890u);
    push32(c, 0xd0895u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd0895u);
    X86_TICK(c, 11);
    // 0d0895  push 0xb030
    X86_AT(c, 0xd0895u);
    { uint32_t v = 0xB030u; push32(c, v); }
    // 0d089a  push 7
    X86_AT(c, 0xd089au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d089c  call 0xba428
    X86_AT(c, 0xd089cu);
    push32(c, 0xd08a1u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd08a1u);
    X86_TICK(c, 9);
    // 0d08a1  push 7
    X86_AT(c, 0xd08a1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d08a3  call 0xbbb5c
    X86_AT(c, 0xd08a3u);
    push32(c, 0xd08a8u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd08a8u);
    X86_TICK(c, 9);
    // 0d08a8  add esp, 0x10
    X86_AT(c, 0xd08a8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d08ab  jmp 0xd098e
    X86_AT(c, 0xd08abu);
    goto L_d098e;
L_d08b0:
    X86_TICK(c, 11);
    // 0d08b0  push 0xb0bc
    X86_AT(c, 0xd08b0u);
    { uint32_t v = 0xB0BCu; push32(c, v); }
    // 0d08b5  push 7
    X86_AT(c, 0xd08b5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d08b7  call 0xba428
    X86_AT(c, 0xd08b7u);
    push32(c, 0xd08bcu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd08bcu);
    X86_TICK(c, 11);
    // 0d08bc  push 0xffffffff
    X86_AT(c, 0xd08bcu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d08be  push 7
    X86_AT(c, 0xd08beu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d08c0  call 0xb6f28
    X86_AT(c, 0xd08c0u);
    push32(c, 0xd08c5u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd08c5u);
    X86_TICK(c, 12);
    // 0d08c5  xchg edi, eax
    X86_AT(c, 0xd08c5u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d08c6  add esp, 0x10
    X86_AT(c, 0xd08c6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d08c9  cmp edi, 0xffffffff
    X86_AT(c, 0xd08c9u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d08cc  jne 0xd08ee
    X86_AT(c, 0xd08ccu);
    if (x86_cc(c, 5)) { goto L_d08ee; }
    X86_TICK(c, 7);
    // 0d08ce  call 0xce2c8
    X86_AT(c, 0xd08ceu);
    push32(c, 0xd08d3u); x86_call_known(c, 0xce2c8u, f_000ce2c8); X86_RET(c, 0xd08d3u);
    X86_TICK(c, 2);
    // 0d08d3  push 0xb0f4
    X86_AT(c, 0xd08d3u);
    { uint32_t v = 0xB0F4u; push32(c, v); }
L_d08d8:
    X86_TICK(c, 9);
    // 0d08d8  push 7
    X86_AT(c, 0xd08d8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d08da  call 0xba428
    X86_AT(c, 0xd08dau);
    push32(c, 0xd08dfu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd08dfu);
    X86_TICK(c, 9);
    // 0d08df  push 7
    X86_AT(c, 0xd08dfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d08e1  call 0xbbb5c
    X86_AT(c, 0xd08e1u);
    push32(c, 0xd08e6u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd08e6u);
    X86_TICK(c, 9);
    // 0d08e6  add esp, 0xc
    X86_AT(c, 0xd08e6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d08e9  jmp 0xd098e
    X86_AT(c, 0xd08e9u);
    goto L_d098e;
L_d08ee:
    X86_TICK(c, 18);
    // 0d08ee  lea eax, [edi + edi*2]
    X86_AT(c, 0xd08eeu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d08f1  lea edx, [eax*8]
    X86_AT(c, 0xd08f1u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d08f8  lea edx, [eax + edx*8]
    X86_AT(c, 0xd08f8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d08fb  cmp byte ptr [edx + 0xa4abd], 0x41
    X86_AT(c, 0xd08fbu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu))), 0x41u, 0, 1);
    // 0d0902  je 0xd0936
    X86_AT(c, 0xd0902u);
    if (x86_cc(c, 4)) { goto L_d0936; }
    X86_TICK(c, 9);
    // 0d0904  push 3
    X86_AT(c, 0xd0904u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d0906  call 0xb607c
    X86_AT(c, 0xd0906u);
    push32(c, 0xd090bu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd090bu);
    X86_TICK(c, 11);
    // 0d090b  push 0xb134
    X86_AT(c, 0xd090bu);
    { uint32_t v = 0xB134u; push32(c, v); }
    // 0d0910  push 7
    X86_AT(c, 0xd0910u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0912  call 0xba428
    X86_AT(c, 0xd0912u);
    push32(c, 0xd0917u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0917u);
    X86_TICK(c, 9);
    // 0d0917  push 7
    X86_AT(c, 0xd0917u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0919  call 0xbbb5c
    X86_AT(c, 0xd0919u);
    push32(c, 0xd091eu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd091eu);
    X86_TICK(c, 2);
    // 0d091e  push 0xb168
    X86_AT(c, 0xd091eu);
    { uint32_t v = 0xB168u; push32(c, v); }
L_d0923:
    X86_TICK(c, 9);
    // 0d0923  push 7
    X86_AT(c, 0xd0923u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0925  call 0xba428
    X86_AT(c, 0xd0925u);
    push32(c, 0xd092au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd092au);
    X86_TICK(c, 9);
    // 0d092a  push 7
    X86_AT(c, 0xd092au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d092c  call 0xbbb5c
    X86_AT(c, 0xd092cu);
    push32(c, 0xd0931u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0931u);
    X86_TICK(c, 9);
    // 0d0931  add esp, 0x1c
    X86_AT(c, 0xd0931u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d0934  jmp 0xd098e
    X86_AT(c, 0xd0934u);
    goto L_d098e;
L_d0936:
    X86_TICK(c, 9);
    // 0d0936  push 2
    X86_AT(c, 0xd0936u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d0938  call 0xb607c
    X86_AT(c, 0xd0938u);
    push32(c, 0xd093du); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd093du);
    X86_TICK(c, 7);
    // 0d093d  call 0xcaa9c
    X86_AT(c, 0xd093du);
    push32(c, 0xd0942u); x86_call_known(c, 0xcaa9cu, f_000caa9c); X86_RET(c, 0xd0942u);
    X86_TICK(c, 9);
    // 0d0942  push edi
    X86_AT(c, 0xd0942u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0943  call 0xc7f0c
    X86_AT(c, 0xd0943u);
    push32(c, 0xd0948u); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xd0948u);
    X86_TICK(c, 9);
    // 0d0948  push 2
    X86_AT(c, 0xd0948u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d094a  call 0xbebbc
    X86_AT(c, 0xd094au);
    push32(c, 0xd094fu); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xd094fu);
    X86_TICK(c, 36);
    // 0d094f  lea eax, [edi + edi*2]
    X86_AT(c, 0xd094fu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d0952  lea edx, [eax*8]
    X86_AT(c, 0xd0952u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d0959  lea edx, [eax + edx*8]
    X86_AT(c, 0xd0959u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d095c  mov byte ptr [edx + 0xa4abd], 0x47
    X86_AT(c, 0xd095cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu)), 0x47u);
    // 0d0963  mov eax, dword ptr [edx + 0xa4ad9]
    X86_AT(c, 0xd0963u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD9u)));
    // 0d0969  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xd0969u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0d096c  cdq 
    X86_AT(c, 0xd096cu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d096d  sub eax, edx
    X86_AT(c, 0xd096du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0d096f  sar eax, 1
    X86_AT(c, 0xd096fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0d0971  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xd0971u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d0974  mov dword ptr [edx + 0xa4ad5], eax
    X86_AT(c, 0xd0974u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD5u)), c.r[0]);
    // 0d097a  push edi
    X86_AT(c, 0xd097au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d097b  call 0xc7f0c
    X86_AT(c, 0xd097bu);
    push32(c, 0xd0980u); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xd0980u);
    X86_TICK(c, 9);
    // 0d0980  push edi
    X86_AT(c, 0xd0980u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0981  call 0xbe720
    X86_AT(c, 0xd0981u);
    push32(c, 0xd0986u); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xd0986u);
    X86_TICK(c, 7);
    // 0d0986  call 0xb75c0
    X86_AT(c, 0xd0986u);
    push32(c, 0xd098bu); x86_call_known(c, 0xb75c0u, f_000b75c0); X86_RET(c, 0xd098bu);
L_d098b:
    X86_TICK(c, 2);
    // 0d098b  add esp, 0x14
    X86_AT(c, 0xd098bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_d098e:
    X86_TICK(c, 7);
    // 0d098e  cmp edi, 0xffffffff
    X86_AT(c, 0xd098eu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d0991  je 0xd09b5
    X86_AT(c, 0xd0991u);
    if (x86_cc(c, 4)) { goto L_d09b5; }
    X86_TICK(c, 11);
    // 0d0993  push 0xb1a8
    X86_AT(c, 0xd0993u);
    { uint32_t v = 0xB1A8u; push32(c, v); }
    // 0d0998  push 7
    X86_AT(c, 0xd0998u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d099a  call 0xba428
    X86_AT(c, 0xd099au);
    push32(c, 0xd099fu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd099fu);
    X86_TICK(c, 9);
    // 0d099f  push 7
    X86_AT(c, 0xd099fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d09a1  call 0xbbb5c
    X86_AT(c, 0xd09a1u);
    push32(c, 0xd09a6u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd09a6u);
    X86_TICK(c, 9);
    // 0d09a6  push 7
    X86_AT(c, 0xd09a6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d09a8  call 0xc9890
    X86_AT(c, 0xd09a8u);
    push32(c, 0xd09adu); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xd09adu);
    X86_TICK(c, 9);
    // 0d09ad  add esp, 0x10
    X86_AT(c, 0xd09adu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d09b0  jmp 0xd0481
    X86_AT(c, 0xd09b0u);
    X86_POLL(c, 0xd0481u); goto L_d0481;
L_d09b5:
    X86_TICK(c, 11);
    // 0d09b5  push 0xb1e0
    X86_AT(c, 0xd09b5u);
    { uint32_t v = 0xB1E0u; push32(c, v); }
    // 0d09ba  push 7
    X86_AT(c, 0xd09bau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d09bc  call 0xba428
    X86_AT(c, 0xd09bcu);
    push32(c, 0xd09c1u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd09c1u);
    X86_TICK(c, 9);
    // 0d09c1  push 7
    X86_AT(c, 0xd09c1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d09c3  call 0xbbb5c
    X86_AT(c, 0xd09c3u);
    push32(c, 0xd09c8u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd09c8u);
    X86_TICK(c, 26);
    // 0d09c8  add esp, 0xc
    X86_AT(c, 0xd09c8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d09cb  pop edi
    X86_AT(c, 0xd09cbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d09cc  pop ebx
    X86_AT(c, 0xd09ccu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d09cd  leave 
    X86_AT(c, 0xd09cdu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d09ce  ret 
    X86_AT(c, 0xd09ceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd0923u, "ran off the end of a function");
}
void f_000d098e(X86Cpu& c) {
    goto L_d098e;
L_d0481:
    X86_TICK(c, 11);
    // 0d0481  push 0xa630
    X86_AT(c, 0xd0481u);
    { uint32_t v = 0xA630u; push32(c, v); }
    // 0d0486  push 7
    X86_AT(c, 0xd0486u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0488  call 0xba428
    X86_AT(c, 0xd0488u);
    push32(c, 0xd048du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd048du);
    X86_TICK(c, 9);
    // 0d048d  push 7
    X86_AT(c, 0xd048du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d048f  call 0xbbb5c
    X86_AT(c, 0xd048fu);
    push32(c, 0xd0494u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0494u);
    X86_TICK(c, 11);
    // 0d0494  push 0xa654
    X86_AT(c, 0xd0494u);
    { uint32_t v = 0xA654u; push32(c, v); }
    // 0d0499  push 7
    X86_AT(c, 0xd0499u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d049b  call 0xba428
    X86_AT(c, 0xd049bu);
    push32(c, 0xd04a0u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd04a0u);
    X86_TICK(c, 9);
    // 0d04a0  push 7
    X86_AT(c, 0xd04a0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d04a2  call 0xbbb5c
    X86_AT(c, 0xd04a2u);
    push32(c, 0xd04a7u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd04a7u);
    X86_TICK(c, 11);
    // 0d04a7  push 0xa67c
    X86_AT(c, 0xd04a7u);
    { uint32_t v = 0xA67Cu; push32(c, v); }
    // 0d04ac  push 7
    X86_AT(c, 0xd04acu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d04ae  call 0xba428
    X86_AT(c, 0xd04aeu);
    push32(c, 0xd04b3u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd04b3u);
    X86_TICK(c, 9);
    // 0d04b3  push 7
    X86_AT(c, 0xd04b3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d04b5  call 0xbbb5c
    X86_AT(c, 0xd04b5u);
    push32(c, 0xd04bau); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd04bau);
    X86_TICK(c, 11);
    // 0d04ba  push 0xa6b0
    X86_AT(c, 0xd04bau);
    { uint32_t v = 0xA6B0u; push32(c, v); }
    // 0d04bf  push 7
    X86_AT(c, 0xd04bfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d04c1  call 0xba428
    X86_AT(c, 0xd04c1u);
    push32(c, 0xd04c6u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd04c6u);
    X86_TICK(c, 9);
    // 0d04c6  push 7
    X86_AT(c, 0xd04c6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d04c8  call 0xbbb5c
    X86_AT(c, 0xd04c8u);
    push32(c, 0xd04cdu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd04cdu);
    X86_TICK(c, 11);
    // 0d04cd  push 0xa6e0
    X86_AT(c, 0xd04cdu);
    { uint32_t v = 0xA6E0u; push32(c, v); }
    // 0d04d2  push 7
    X86_AT(c, 0xd04d2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d04d4  call 0xba428
    X86_AT(c, 0xd04d4u);
    push32(c, 0xd04d9u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd04d9u);
    X86_TICK(c, 9);
    // 0d04d9  push 7
    X86_AT(c, 0xd04d9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d04db  call 0xbbb5c
    X86_AT(c, 0xd04dbu);
    push32(c, 0xd04e0u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd04e0u);
    X86_TICK(c, 13);
    // 0d04e0  add esp, 0x3c
    X86_AT(c, 0xd04e0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d04e3  push 0xa6fc
    X86_AT(c, 0xd04e3u);
    { uint32_t v = 0xA6FCu; push32(c, v); }
    // 0d04e8  push 7
    X86_AT(c, 0xd04e8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d04ea  call 0xba428
    X86_AT(c, 0xd04eau);
    push32(c, 0xd04efu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd04efu);
    X86_TICK(c, 2);
    // 0d04ef  add esp, 8
    X86_AT(c, 0xd04efu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d04f2:
    X86_TICK(c, 9);
    // 0d04f2  push 7
    X86_AT(c, 0xd04f2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d04f4  call 0xb9514
    X86_AT(c, 0xd04f4u);
    push32(c, 0xd04f9u); x86_call_known(c, 0xb9514u, f_000b9514); X86_RET(c, 0xd04f9u);
    X86_TICK(c, 12);
    // 0d04f9  xchg ebx, eax
    X86_AT(c, 0xd04f9u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d04fa  add esp, 4
    X86_AT(c, 0xd04fau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d04fd  cmp bl, 1
    X86_AT(c, 0xd04fdu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d0500  je 0xd052b
    X86_AT(c, 0xd0500u);
    if (x86_cc(c, 4)) { goto L_d052b; }
    X86_TICK(c, 7);
    // 0d0502  cmp bl, 0x51
    X86_AT(c, 0xd0502u);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0d0505  je 0xd052b
    X86_AT(c, 0xd0505u);
    if (x86_cc(c, 4)) { goto L_d052b; }
    X86_TICK(c, 7);
    // 0d0507  cmp bl, 0x41
    X86_AT(c, 0xd0507u);
    (void)x86_sub(c, g8(c, 3), 0x41u, 0, 1);
    // 0d050a  je 0xd052b
    X86_AT(c, 0xd050au);
    if (x86_cc(c, 4)) { goto L_d052b; }
    X86_TICK(c, 7);
    // 0d050c  cmp bl, 0x42
    X86_AT(c, 0xd050cu);
    (void)x86_sub(c, g8(c, 3), 0x42u, 0, 1);
    // 0d050f  je 0xd052b
    X86_AT(c, 0xd050fu);
    if (x86_cc(c, 4)) { goto L_d052b; }
    X86_TICK(c, 7);
    // 0d0511  cmp bl, 0x43
    X86_AT(c, 0xd0511u);
    (void)x86_sub(c, g8(c, 3), 0x43u, 0, 1);
    // 0d0514  je 0xd052b
    X86_AT(c, 0xd0514u);
    if (x86_cc(c, 4)) { goto L_d052b; }
    X86_TICK(c, 7);
    // 0d0516  cmp bl, 0x44
    X86_AT(c, 0xd0516u);
    (void)x86_sub(c, g8(c, 3), 0x44u, 0, 1);
    // 0d0519  je 0xd052b
    X86_AT(c, 0xd0519u);
    if (x86_cc(c, 4)) { goto L_d052b; }
    X86_TICK(c, 7);
    // 0d051b  and bl, bl
    X86_AT(c, 0xd051bu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d051d  je 0xd04f2
    X86_AT(c, 0xd051du);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd04f2u); goto L_d04f2; }
    X86_TICK(c, 9);
    // 0d051f  push 1
    X86_AT(c, 0xd051fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d0521  call 0xb607c
    X86_AT(c, 0xd0521u);
    push32(c, 0xd0526u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd0526u);
    X86_TICK(c, 9);
    // 0d0526  add esp, 4
    X86_AT(c, 0xd0526u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0529  jmp 0xd04f2
    X86_AT(c, 0xd0529u);
    X86_POLL(c, 0xd04f2u); goto L_d04f2;
L_d052b:
    X86_TICK(c, 7);
    // 0d052b  cmp bl, 1
    X86_AT(c, 0xd052bu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d052e  je 0xd0535
    X86_AT(c, 0xd052eu);
    if (x86_cc(c, 4)) { goto L_d0535; }
    X86_TICK(c, 7);
    // 0d0530  cmp bl, 0x51
    X86_AT(c, 0xd0530u);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0d0533  jne 0xd0550
    X86_AT(c, 0xd0533u);
    if (x86_cc(c, 5)) { goto L_d0550; }
L_d0535:
    X86_TICK(c, 11);
    // 0d0535  push 0xa720
    X86_AT(c, 0xd0535u);
    { uint32_t v = 0xA720u; push32(c, v); }
    // 0d053a  push 7
    X86_AT(c, 0xd053au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d053c  call 0xba428
    X86_AT(c, 0xd053cu);
    push32(c, 0xd0541u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0541u);
    X86_TICK(c, 9);
    // 0d0541  push 7
    X86_AT(c, 0xd0541u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0543  call 0xbbb5c
    X86_AT(c, 0xd0543u);
    push32(c, 0xd0548u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0548u);
    X86_TICK(c, 9);
    // 0d0548  add esp, 0xc
    X86_AT(c, 0xd0548u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d054b  jmp 0xd09b5
    X86_AT(c, 0xd054bu);
    goto L_d09b5;
L_d0550:
    X86_TICK(c, 12);
    // 0d0550  movzx edx, bl
    X86_AT(c, 0xd0550u);
    c.r[2] = g8(c, 3);
    // 0d0553  sub edx, 0x41
    X86_AT(c, 0xd0553u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x41u, 0, 4); }
    // 0d0556  cmp edx, 3
    X86_AT(c, 0xd0556u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0d0559  ja 0xd098e
    X86_AT(c, 0xd0559u);
    if (x86_cc(c, 7)) { goto L_d098e; }
    X86_TICK(c, 7);
    // 0d055f  jmp dword ptr cs:[edx*4 + 0xd0567]
    X86_AT(c, 0xd055fu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD0567u)));
      switch (t) {
      case 0xd0577u: goto L_d0577;
      case 0xd066au: goto L_d066a;
      case 0xd0776u: goto L_d0776;
      case 0xd083eu: goto L_d083e;
      default: x86_jump(c, t); return; } }
L_d0577:
    X86_TICK(c, 11);
    // 0d0577  push 0xa73c
    X86_AT(c, 0xd0577u);
    { uint32_t v = 0xA73Cu; push32(c, v); }
    // 0d057c  push 7
    X86_AT(c, 0xd057cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d057e  call 0xba428
    X86_AT(c, 0xd057eu);
    push32(c, 0xd0583u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0583u);
    X86_TICK(c, 9);
    // 0d0583  push 7
    X86_AT(c, 0xd0583u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0585  call 0xbbb5c
    X86_AT(c, 0xd0585u);
    push32(c, 0xd058au); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd058au);
    X86_TICK(c, 11);
    // 0d058a  push 0xa754
    X86_AT(c, 0xd058au);
    { uint32_t v = 0xA754u; push32(c, v); }
    // 0d058f  push 7
    X86_AT(c, 0xd058fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0591  call 0xba428
    X86_AT(c, 0xd0591u);
    push32(c, 0xd0596u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0596u);
    X86_TICK(c, 11);
    // 0d0596  push 0
    X86_AT(c, 0xd0596u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0598  push 7
    X86_AT(c, 0xd0598u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d059a  call 0xb6f28
    X86_AT(c, 0xd059au);
    push32(c, 0xd059fu); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd059fu);
    X86_TICK(c, 12);
    // 0d059f  xchg edi, eax
    X86_AT(c, 0xd059fu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d05a0  push 7
    X86_AT(c, 0xd05a0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d05a2  call 0xbbb5c
    X86_AT(c, 0xd05a2u);
    push32(c, 0xd05a7u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd05a7u);
    X86_TICK(c, 9);
    // 0d05a7  add esp, 0x20
    X86_AT(c, 0xd05a7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0d05aa  cmp edi, 0xffffffff
    X86_AT(c, 0xd05aau);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d05ad  jne 0xd05b9
    X86_AT(c, 0xd05adu);
    if (x86_cc(c, 5)) { goto L_d05b9; }
    X86_TICK(c, 9);
    // 0d05af  push 0xa7cc
    X86_AT(c, 0xd05afu);
    { uint32_t v = 0xA7CCu; push32(c, v); }
    // 0d05b4  jmp 0xd08d8
    X86_AT(c, 0xd05b4u);
    goto L_d08d8;
L_d05b9:
    X86_TICK(c, 11);
    // 0d05b9  push 0x64
    X86_AT(c, 0xd05b9u);
    { uint32_t v = 0x64u; push32(c, v); }
    // 0d05bb  push edi
    X86_AT(c, 0xd05bbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d05bc  call 0xcfe88
    X86_AT(c, 0xd05bcu);
    push32(c, 0xd05c1u); x86_call_known(c, 0xcfe88u, f_000cfe88); X86_RET(c, 0xd05c1u);
    X86_TICK(c, 9);
    // 0d05c1  add esp, 8
    X86_AT(c, 0xd05c1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d05c4  inc eax
    X86_AT(c, 0xd05c4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d05c5  jne 0xd05d1
    X86_AT(c, 0xd05c5u);
    if (x86_cc(c, 5)) { goto L_d05d1; }
    X86_TICK(c, 9);
    // 0d05c7  push 0xa858
    X86_AT(c, 0xd05c7u);
    { uint32_t v = 0xA858u; push32(c, v); }
    // 0d05cc  jmp 0xd08d8
    X86_AT(c, 0xd05ccu);
    goto L_d08d8;
L_d05d1:
    X86_TICK(c, 11);
    // 0d05d1  push 0xa8e4
    X86_AT(c, 0xd05d1u);
    { uint32_t v = 0xA8E4u; push32(c, v); }
    // 0d05d6  push 7
    X86_AT(c, 0xd05d6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d05d8  call 0xba428
    X86_AT(c, 0xd05d8u);
    push32(c, 0xd05ddu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd05ddu);
    X86_TICK(c, 11);
    // 0d05dd  push 0
    X86_AT(c, 0xd05ddu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d05df  push 7
    X86_AT(c, 0xd05dfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d05e1  call 0xb6f28
    X86_AT(c, 0xd05e1u);
    push32(c, 0xd05e6u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd05e6u);
    X86_TICK(c, 12);
    // 0d05e6  xchg edi, eax
    X86_AT(c, 0xd05e6u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d05e7  add esp, 0x10
    X86_AT(c, 0xd05e7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d05ea  cmp edi, 0xffffffff
    X86_AT(c, 0xd05eau);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d05ed  jne 0xd05fe
    X86_AT(c, 0xd05edu);
    if (x86_cc(c, 5)) { goto L_d05fe; }
    X86_TICK(c, 7);
    // 0d05ef  call 0xce2c8
    X86_AT(c, 0xd05efu);
    push32(c, 0xd05f4u); x86_call_known(c, 0xce2c8u, f_000ce2c8); X86_RET(c, 0xd05f4u);
    X86_TICK(c, 9);
    // 0d05f4  push 0xa914
    X86_AT(c, 0xd05f4u);
    { uint32_t v = 0xA914u; push32(c, v); }
    // 0d05f9  jmp 0xd08d8
    X86_AT(c, 0xd05f9u);
    goto L_d08d8;
L_d05fe:
    X86_TICK(c, 18);
    // 0d05fe  lea eax, [edi + edi*2]
    X86_AT(c, 0xd05feu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d0601  lea edx, [eax*8]
    X86_AT(c, 0xd0601u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d0608  lea edx, [eax + edx*8]
    X86_AT(c, 0xd0608u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d060b  cmp byte ptr [edx + 0xa4abd], 0x50
    X86_AT(c, 0xd060bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu))), 0x50u, 0, 1);
    // 0d0612  je 0xd0638
    X86_AT(c, 0xd0612u);
    if (x86_cc(c, 4)) { goto L_d0638; }
    X86_TICK(c, 9);
    // 0d0614  push 3
    X86_AT(c, 0xd0614u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d0616  call 0xb607c
    X86_AT(c, 0xd0616u);
    push32(c, 0xd061bu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd061bu);
    X86_TICK(c, 11);
    // 0d061b  push 0xa954
    X86_AT(c, 0xd061bu);
    { uint32_t v = 0xA954u; push32(c, v); }
    // 0d0620  push 7
    X86_AT(c, 0xd0620u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0622  call 0xba428
    X86_AT(c, 0xd0622u);
    push32(c, 0xd0627u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0627u);
    X86_TICK(c, 9);
    // 0d0627  push 7
    X86_AT(c, 0xd0627u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0629  call 0xbbb5c
    X86_AT(c, 0xd0629u);
    push32(c, 0xd062eu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd062eu);
    X86_TICK(c, 9);
    // 0d062e  push 0xa98c
    X86_AT(c, 0xd062eu);
    { uint32_t v = 0xA98Cu; push32(c, v); }
    // 0d0633  jmp 0xd0923
    X86_AT(c, 0xd0633u);
    goto L_d0923;
L_d0638:
    X86_TICK(c, 9);
    // 0d0638  push 2
    X86_AT(c, 0xd0638u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d063a  call 0xb607c
    X86_AT(c, 0xd063au);
    push32(c, 0xd063fu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd063fu);
    X86_TICK(c, 7);
    // 0d063f  call 0xcaa9c
    X86_AT(c, 0xd063fu);
    push32(c, 0xd0644u); x86_call_known(c, 0xcaa9cu, f_000caa9c); X86_RET(c, 0xd0644u);
    X86_TICK(c, 9);
    // 0d0644  push edi
    X86_AT(c, 0xd0644u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0645  call 0xc7f0c
    X86_AT(c, 0xd0645u);
    push32(c, 0xd064au); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xd064au);
    X86_TICK(c, 9);
    // 0d064a  push 2
    X86_AT(c, 0xd064au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d064c  call 0xbebbc
    X86_AT(c, 0xd064cu);
    push32(c, 0xd0651u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xd0651u);
    X86_TICK(c, 15);
    // 0d0651  lea eax, [edi + edi*2]
    X86_AT(c, 0xd0651u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d0654  lea edx, [eax*8]
    X86_AT(c, 0xd0654u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d065b  lea edx, [eax + edx*8]
    X86_AT(c, 0xd065bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d065e  mov byte ptr [edx + 0xa4abd], 0x47
    X86_AT(c, 0xd065eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu)), 0x47u);
    // 0d0665  jmp 0xd0765
    X86_AT(c, 0xd0665u);
    goto L_d0765;
L_d066a:
    X86_TICK(c, 11);
    // 0d066a  push 0xa9cc
    X86_AT(c, 0xd066au);
    { uint32_t v = 0xA9CCu; push32(c, v); }
    // 0d066f  push 7
    X86_AT(c, 0xd066fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0671  call 0xba428
    X86_AT(c, 0xd0671u);
    push32(c, 0xd0676u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0676u);
    X86_TICK(c, 9);
    // 0d0676  push 7
    X86_AT(c, 0xd0676u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0678  call 0xbbb5c
    X86_AT(c, 0xd0678u);
    push32(c, 0xd067du); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd067du);
    X86_TICK(c, 11);
    // 0d067d  push 0xa9e4
    X86_AT(c, 0xd067du);
    { uint32_t v = 0xA9E4u; push32(c, v); }
    // 0d0682  push 7
    X86_AT(c, 0xd0682u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0684  call 0xba428
    X86_AT(c, 0xd0684u);
    push32(c, 0xd0689u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0689u);
    X86_TICK(c, 11);
    // 0d0689  push 0
    X86_AT(c, 0xd0689u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d068b  push 7
    X86_AT(c, 0xd068bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d068d  call 0xb6f28
    X86_AT(c, 0xd068du);
    push32(c, 0xd0692u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd0692u);
    X86_TICK(c, 12);
    // 0d0692  xchg edi, eax
    X86_AT(c, 0xd0692u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d0693  push 7
    X86_AT(c, 0xd0693u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0695  call 0xbbb5c
    X86_AT(c, 0xd0695u);
    push32(c, 0xd069au); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd069au);
    X86_TICK(c, 9);
    // 0d069a  add esp, 0x20
    X86_AT(c, 0xd069au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0d069d  cmp edi, 0xffffffff
    X86_AT(c, 0xd069du);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d06a0  jne 0xd06ac
    X86_AT(c, 0xd06a0u);
    if (x86_cc(c, 5)) { goto L_d06ac; }
    X86_TICK(c, 9);
    // 0d06a2  push 0xaa54
    X86_AT(c, 0xd06a2u);
    { uint32_t v = 0xAA54u; push32(c, v); }
    // 0d06a7  jmp 0xd08d8
    X86_AT(c, 0xd06a7u);
    goto L_d08d8;
L_d06ac:
    X86_TICK(c, 11);
    // 0d06ac  push 0xc8
    X86_AT(c, 0xd06acu);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0d06b1  push edi
    X86_AT(c, 0xd06b1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d06b2  call 0xcfe88
    X86_AT(c, 0xd06b2u);
    push32(c, 0xd06b7u); x86_call_known(c, 0xcfe88u, f_000cfe88); X86_RET(c, 0xd06b7u);
    X86_TICK(c, 9);
    // 0d06b7  add esp, 8
    X86_AT(c, 0xd06b7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d06ba  inc eax
    X86_AT(c, 0xd06bau);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d06bb  jne 0xd06c7
    X86_AT(c, 0xd06bbu);
    if (x86_cc(c, 5)) { goto L_d06c7; }
    X86_TICK(c, 9);
    // 0d06bd  push 0xaae0
    X86_AT(c, 0xd06bdu);
    { uint32_t v = 0xAAE0u; push32(c, v); }
    // 0d06c2  jmp 0xd08d8
    X86_AT(c, 0xd06c2u);
    goto L_d08d8;
L_d06c7:
    X86_TICK(c, 11);
    // 0d06c7  push 0xab6c
    X86_AT(c, 0xd06c7u);
    { uint32_t v = 0xAB6Cu; push32(c, v); }
    // 0d06cc  push 7
    X86_AT(c, 0xd06ccu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d06ce  call 0xba428
    X86_AT(c, 0xd06ceu);
    push32(c, 0xd06d3u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd06d3u);
    X86_TICK(c, 11);
    // 0d06d3  push 0
    X86_AT(c, 0xd06d3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d06d5  push 7
    X86_AT(c, 0xd06d5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d06d7  call 0xb6f28
    X86_AT(c, 0xd06d7u);
    push32(c, 0xd06dcu); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd06dcu);
    X86_TICK(c, 12);
    // 0d06dc  xchg edi, eax
    X86_AT(c, 0xd06dcu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d06dd  add esp, 0x10
    X86_AT(c, 0xd06ddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d06e0  cmp edi, 0xffffffff
    X86_AT(c, 0xd06e0u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d06e3  jne 0xd06f4
    X86_AT(c, 0xd06e3u);
    if (x86_cc(c, 5)) { goto L_d06f4; }
    X86_TICK(c, 7);
    // 0d06e5  call 0xce2c8
    X86_AT(c, 0xd06e5u);
    push32(c, 0xd06eau); x86_call_known(c, 0xce2c8u, f_000ce2c8); X86_RET(c, 0xd06eau);
    X86_TICK(c, 9);
    // 0d06ea  push 0xab9c
    X86_AT(c, 0xd06eau);
    { uint32_t v = 0xAB9Cu; push32(c, v); }
    // 0d06ef  jmp 0xd08d8
    X86_AT(c, 0xd06efu);
    goto L_d08d8;
L_d06f4:
    X86_TICK(c, 21);
    // 0d06f4  lea eax, [edi + edi*2]
    X86_AT(c, 0xd06f4u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d06f7  lea edx, [eax*8]
    X86_AT(c, 0xd06f7u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d06fe  lea edx, [eax + edx*8]
    X86_AT(c, 0xd06feu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d0701  mov eax, dword ptr [edx + 0xa4ad9]
    X86_AT(c, 0xd0701u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD9u)));
    // 0d0707  cmp eax, dword ptr [edx + 0xa4ad5]
    X86_AT(c, 0xd0707u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD5u))), 0, 4);
    // 0d070d  jne 0xd0733
    X86_AT(c, 0xd070du);
    if (x86_cc(c, 5)) { goto L_d0733; }
    X86_TICK(c, 9);
    // 0d070f  push 3
    X86_AT(c, 0xd070fu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d0711  call 0xb607c
    X86_AT(c, 0xd0711u);
    push32(c, 0xd0716u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd0716u);
    X86_TICK(c, 11);
    // 0d0716  push 0xabdc
    X86_AT(c, 0xd0716u);
    { uint32_t v = 0xABDCu; push32(c, v); }
    // 0d071b  push 7
    X86_AT(c, 0xd071bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d071d  call 0xba428
    X86_AT(c, 0xd071du);
    push32(c, 0xd0722u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0722u);
    X86_TICK(c, 9);
    // 0d0722  push 7
    X86_AT(c, 0xd0722u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0724  call 0xbbb5c
    X86_AT(c, 0xd0724u);
    push32(c, 0xd0729u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0729u);
    X86_TICK(c, 9);
    // 0d0729  push 0xac10
    X86_AT(c, 0xd0729u);
    { uint32_t v = 0xAC10u; push32(c, v); }
    // 0d072e  jmp 0xd0923
    X86_AT(c, 0xd072eu);
    goto L_d0923;
L_d0733:
    X86_TICK(c, 9);
    // 0d0733  push 2
    X86_AT(c, 0xd0733u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d0735  call 0xb607c
    X86_AT(c, 0xd0735u);
    push32(c, 0xd073au); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd073au);
    X86_TICK(c, 7);
    // 0d073a  call 0xcaa9c
    X86_AT(c, 0xd073au);
    push32(c, 0xd073fu); x86_call_known(c, 0xcaa9cu, f_000caa9c); X86_RET(c, 0xd073fu);
    X86_TICK(c, 9);
    // 0d073f  push edi
    X86_AT(c, 0xd073fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0740  call 0xc7f0c
    X86_AT(c, 0xd0740u);
    push32(c, 0xd0745u); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xd0745u);
    X86_TICK(c, 9);
    // 0d0745  push 2
    X86_AT(c, 0xd0745u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d0747  call 0xbebbc
    X86_AT(c, 0xd0747u);
    push32(c, 0xd074cu); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xd074cu);
    X86_TICK(c, 12);
    // 0d074c  lea eax, [edi + edi*2]
    X86_AT(c, 0xd074cu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d074f  lea edx, [eax*8]
    X86_AT(c, 0xd074fu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d0756  lea edx, [eax + edx*8]
    X86_AT(c, 0xd0756u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d0759  mov eax, dword ptr [edx + 0xa4ad9]
    X86_AT(c, 0xd0759u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD9u)));
    // 0d075f  mov dword ptr [edx + 0xa4ad5], eax
    X86_AT(c, 0xd075fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD5u)), c.r[0]);
L_d0765:
    X86_TICK(c, 9);
    // 0d0765  push edi
    X86_AT(c, 0xd0765u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0766  call 0xc7f0c
    X86_AT(c, 0xd0766u);
    push32(c, 0xd076bu); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xd076bu);
    X86_TICK(c, 9);
    // 0d076b  push edi
    X86_AT(c, 0xd076bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d076c  call 0xbe720
    X86_AT(c, 0xd076cu);
    push32(c, 0xd0771u); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xd0771u);
    X86_TICK(c, 7);
    // 0d0771  jmp 0xd098b
    X86_AT(c, 0xd0771u);
    goto L_d098b;
L_d0776:
    X86_TICK(c, 11);
    // 0d0776  push 0xac50
    X86_AT(c, 0xd0776u);
    { uint32_t v = 0xAC50u; push32(c, v); }
    // 0d077b  push 7
    X86_AT(c, 0xd077bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d077d  call 0xba428
    X86_AT(c, 0xd077du);
    push32(c, 0xd0782u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0782u);
    X86_TICK(c, 9);
    // 0d0782  push 7
    X86_AT(c, 0xd0782u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0784  call 0xbbb5c
    X86_AT(c, 0xd0784u);
    push32(c, 0xd0789u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0789u);
    X86_TICK(c, 11);
    // 0d0789  push 0xac74
    X86_AT(c, 0xd0789u);
    { uint32_t v = 0xAC74u; push32(c, v); }
    // 0d078e  push 7
    X86_AT(c, 0xd078eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0790  call 0xba428
    X86_AT(c, 0xd0790u);
    push32(c, 0xd0795u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0795u);
    X86_TICK(c, 11);
    // 0d0795  push 0
    X86_AT(c, 0xd0795u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0797  push 7
    X86_AT(c, 0xd0797u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0799  call 0xb6f28
    X86_AT(c, 0xd0799u);
    push32(c, 0xd079eu); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd079eu);
    X86_TICK(c, 12);
    // 0d079e  xchg edi, eax
    X86_AT(c, 0xd079eu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d079f  push 7
    X86_AT(c, 0xd079fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d07a1  call 0xbbb5c
    X86_AT(c, 0xd07a1u);
    push32(c, 0xd07a6u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd07a6u);
    X86_TICK(c, 9);
    // 0d07a6  add esp, 0x20
    X86_AT(c, 0xd07a6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0d07a9  cmp edi, 0xffffffff
    X86_AT(c, 0xd07a9u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d07ac  jne 0xd07b8
    X86_AT(c, 0xd07acu);
    if (x86_cc(c, 5)) { goto L_d07b8; }
    X86_TICK(c, 9);
    // 0d07ae  push 0xacf0
    X86_AT(c, 0xd07aeu);
    { uint32_t v = 0xACF0u; push32(c, v); }
    // 0d07b3  jmp 0xd08d8
    X86_AT(c, 0xd07b3u);
    goto L_d08d8;
L_d07b8:
    X86_TICK(c, 11);
    // 0d07b8  push 0x1f4
    X86_AT(c, 0xd07b8u);
    { uint32_t v = 0x1F4u; push32(c, v); }
    // 0d07bd  push edi
    X86_AT(c, 0xd07bdu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d07be  call 0xcfe88
    X86_AT(c, 0xd07beu);
    push32(c, 0xd07c3u); x86_call_known(c, 0xcfe88u, f_000cfe88); X86_RET(c, 0xd07c3u);
    X86_TICK(c, 9);
    // 0d07c3  add esp, 8
    X86_AT(c, 0xd07c3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d07c6  inc eax
    X86_AT(c, 0xd07c6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d07c7  jne 0xd07d3
    X86_AT(c, 0xd07c7u);
    if (x86_cc(c, 5)) { goto L_d07d3; }
    X86_TICK(c, 9);
    // 0d07c9  push 0xad7c
    X86_AT(c, 0xd07c9u);
    { uint32_t v = 0xAD7Cu; push32(c, v); }
    // 0d07ce  jmp 0xd08d8
    X86_AT(c, 0xd07ceu);
    goto L_d08d8;
L_d07d3:
    X86_TICK(c, 11);
    // 0d07d3  push 0xae08
    X86_AT(c, 0xd07d3u);
    { uint32_t v = 0xAE08u; push32(c, v); }
    // 0d07d8  push 7
    X86_AT(c, 0xd07d8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d07da  call 0xba428
    X86_AT(c, 0xd07dau);
    push32(c, 0xd07dfu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd07dfu);
    X86_TICK(c, 11);
    // 0d07df  push 0xffffffff
    X86_AT(c, 0xd07dfu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d07e1  push 7
    X86_AT(c, 0xd07e1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d07e3  call 0xb6f28
    X86_AT(c, 0xd07e3u);
    push32(c, 0xd07e8u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd07e8u);
    X86_TICK(c, 12);
    // 0d07e8  xchg edi, eax
    X86_AT(c, 0xd07e8u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d07e9  add esp, 0x10
    X86_AT(c, 0xd07e9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d07ec  cmp edi, 0xffffffff
    X86_AT(c, 0xd07ecu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d07ef  jne 0xd0800
    X86_AT(c, 0xd07efu);
    if (x86_cc(c, 5)) { goto L_d0800; }
    X86_TICK(c, 7);
    // 0d07f1  call 0xce2c8
    X86_AT(c, 0xd07f1u);
    push32(c, 0xd07f6u); x86_call_known(c, 0xce2c8u, f_000ce2c8); X86_RET(c, 0xd07f6u);
    X86_TICK(c, 9);
    // 0d07f6  push 0xae44
    X86_AT(c, 0xd07f6u);
    { uint32_t v = 0xAE44u; push32(c, v); }
    // 0d07fb  jmp 0xd08d8
    X86_AT(c, 0xd07fbu);
    goto L_d08d8;
L_d0800:
    X86_TICK(c, 18);
    // 0d0800  lea eax, [edi + edi*2]
    X86_AT(c, 0xd0800u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d0803  lea edx, [eax*8]
    X86_AT(c, 0xd0803u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d080a  lea edx, [eax + edx*8]
    X86_AT(c, 0xd080au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d080d  cmp byte ptr [edx + 0xa4abd], 0x44
    X86_AT(c, 0xd080du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu))), 0x44u, 0, 1);
    // 0d0814  je 0xd0936
    X86_AT(c, 0xd0814u);
    if (x86_cc(c, 4)) { goto L_d0936; }
    X86_TICK(c, 9);
    // 0d081a  push 3
    X86_AT(c, 0xd081au);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d081c  call 0xb607c
    X86_AT(c, 0xd081cu);
    push32(c, 0xd0821u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd0821u);
    X86_TICK(c, 11);
    // 0d0821  push 0xae84
    X86_AT(c, 0xd0821u);
    { uint32_t v = 0xAE84u; push32(c, v); }
    // 0d0826  push 7
    X86_AT(c, 0xd0826u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0828  call 0xba428
    X86_AT(c, 0xd0828u);
    push32(c, 0xd082du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd082du);
    X86_TICK(c, 9);
    // 0d082d  push 7
    X86_AT(c, 0xd082du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d082f  call 0xbbb5c
    X86_AT(c, 0xd082fu);
    push32(c, 0xd0834u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0834u);
    X86_TICK(c, 9);
    // 0d0834  push 0xaeb8
    X86_AT(c, 0xd0834u);
    { uint32_t v = 0xAEB8u; push32(c, v); }
    // 0d0839  jmp 0xd0923
    X86_AT(c, 0xd0839u);
    goto L_d0923;
L_d083e:
    X86_TICK(c, 11);
    // 0d083e  push 0xaef8
    X86_AT(c, 0xd083eu);
    { uint32_t v = 0xAEF8u; push32(c, v); }
    // 0d0843  push 7
    X86_AT(c, 0xd0843u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0845  call 0xba428
    X86_AT(c, 0xd0845u);
    push32(c, 0xd084au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd084au);
    X86_TICK(c, 9);
    // 0d084a  push 7
    X86_AT(c, 0xd084au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d084c  call 0xbbb5c
    X86_AT(c, 0xd084cu);
    push32(c, 0xd0851u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0851u);
    X86_TICK(c, 11);
    // 0d0851  push 0xaf14
    X86_AT(c, 0xd0851u);
    { uint32_t v = 0xAF14u; push32(c, v); }
    // 0d0856  push 7
    X86_AT(c, 0xd0856u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0858  call 0xba428
    X86_AT(c, 0xd0858u);
    push32(c, 0xd085du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd085du);
    X86_TICK(c, 11);
    // 0d085d  push 0
    X86_AT(c, 0xd085du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d085f  push 7
    X86_AT(c, 0xd085fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0861  call 0xb6f28
    X86_AT(c, 0xd0861u);
    push32(c, 0xd0866u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd0866u);
    X86_TICK(c, 12);
    // 0d0866  xchg edi, eax
    X86_AT(c, 0xd0866u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d0867  push 7
    X86_AT(c, 0xd0867u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0869  call 0xbbb5c
    X86_AT(c, 0xd0869u);
    push32(c, 0xd086eu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd086eu);
    X86_TICK(c, 9);
    // 0d086e  add esp, 0x20
    X86_AT(c, 0xd086eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0d0871  cmp edi, 0xffffffff
    X86_AT(c, 0xd0871u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d0874  jne 0xd087d
    X86_AT(c, 0xd0874u);
    if (x86_cc(c, 5)) { goto L_d087d; }
    X86_TICK(c, 9);
    // 0d0876  push 0xafa4
    X86_AT(c, 0xd0876u);
    { uint32_t v = 0xAFA4u; push32(c, v); }
    // 0d087b  jmp 0xd08d8
    X86_AT(c, 0xd087bu);
    goto L_d08d8;
L_d087d:
    X86_TICK(c, 11);
    // 0d087d  push 0x384
    X86_AT(c, 0xd087du);
    { uint32_t v = 0x384u; push32(c, v); }
    // 0d0882  push edi
    X86_AT(c, 0xd0882u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0883  call 0xcfe88
    X86_AT(c, 0xd0883u);
    push32(c, 0xd0888u); x86_call_known(c, 0xcfe88u, f_000cfe88); X86_RET(c, 0xd0888u);
    X86_TICK(c, 9);
    // 0d0888  add esp, 8
    X86_AT(c, 0xd0888u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d088b  inc eax
    X86_AT(c, 0xd088bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d088c  jne 0xd08b0
    X86_AT(c, 0xd088cu);
    if (x86_cc(c, 5)) { goto L_d08b0; }
    X86_TICK(c, 9);
    // 0d088e  push 3
    X86_AT(c, 0xd088eu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d0890  call 0xb607c
    X86_AT(c, 0xd0890u);
    push32(c, 0xd0895u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd0895u);
    X86_TICK(c, 11);
    // 0d0895  push 0xb030
    X86_AT(c, 0xd0895u);
    { uint32_t v = 0xB030u; push32(c, v); }
    // 0d089a  push 7
    X86_AT(c, 0xd089au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d089c  call 0xba428
    X86_AT(c, 0xd089cu);
    push32(c, 0xd08a1u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd08a1u);
    X86_TICK(c, 9);
    // 0d08a1  push 7
    X86_AT(c, 0xd08a1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d08a3  call 0xbbb5c
    X86_AT(c, 0xd08a3u);
    push32(c, 0xd08a8u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd08a8u);
    X86_TICK(c, 9);
    // 0d08a8  add esp, 0x10
    X86_AT(c, 0xd08a8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d08ab  jmp 0xd098e
    X86_AT(c, 0xd08abu);
    goto L_d098e;
L_d08b0:
    X86_TICK(c, 11);
    // 0d08b0  push 0xb0bc
    X86_AT(c, 0xd08b0u);
    { uint32_t v = 0xB0BCu; push32(c, v); }
    // 0d08b5  push 7
    X86_AT(c, 0xd08b5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d08b7  call 0xba428
    X86_AT(c, 0xd08b7u);
    push32(c, 0xd08bcu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd08bcu);
    X86_TICK(c, 11);
    // 0d08bc  push 0xffffffff
    X86_AT(c, 0xd08bcu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d08be  push 7
    X86_AT(c, 0xd08beu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d08c0  call 0xb6f28
    X86_AT(c, 0xd08c0u);
    push32(c, 0xd08c5u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd08c5u);
    X86_TICK(c, 12);
    // 0d08c5  xchg edi, eax
    X86_AT(c, 0xd08c5u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d08c6  add esp, 0x10
    X86_AT(c, 0xd08c6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d08c9  cmp edi, 0xffffffff
    X86_AT(c, 0xd08c9u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d08cc  jne 0xd08ee
    X86_AT(c, 0xd08ccu);
    if (x86_cc(c, 5)) { goto L_d08ee; }
    X86_TICK(c, 7);
    // 0d08ce  call 0xce2c8
    X86_AT(c, 0xd08ceu);
    push32(c, 0xd08d3u); x86_call_known(c, 0xce2c8u, f_000ce2c8); X86_RET(c, 0xd08d3u);
    X86_TICK(c, 2);
    // 0d08d3  push 0xb0f4
    X86_AT(c, 0xd08d3u);
    { uint32_t v = 0xB0F4u; push32(c, v); }
L_d08d8:
    X86_TICK(c, 9);
    // 0d08d8  push 7
    X86_AT(c, 0xd08d8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d08da  call 0xba428
    X86_AT(c, 0xd08dau);
    push32(c, 0xd08dfu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd08dfu);
    X86_TICK(c, 9);
    // 0d08df  push 7
    X86_AT(c, 0xd08dfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d08e1  call 0xbbb5c
    X86_AT(c, 0xd08e1u);
    push32(c, 0xd08e6u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd08e6u);
    X86_TICK(c, 9);
    // 0d08e6  add esp, 0xc
    X86_AT(c, 0xd08e6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d08e9  jmp 0xd098e
    X86_AT(c, 0xd08e9u);
    goto L_d098e;
L_d08ee:
    X86_TICK(c, 18);
    // 0d08ee  lea eax, [edi + edi*2]
    X86_AT(c, 0xd08eeu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d08f1  lea edx, [eax*8]
    X86_AT(c, 0xd08f1u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d08f8  lea edx, [eax + edx*8]
    X86_AT(c, 0xd08f8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d08fb  cmp byte ptr [edx + 0xa4abd], 0x41
    X86_AT(c, 0xd08fbu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu))), 0x41u, 0, 1);
    // 0d0902  je 0xd0936
    X86_AT(c, 0xd0902u);
    if (x86_cc(c, 4)) { goto L_d0936; }
    X86_TICK(c, 9);
    // 0d0904  push 3
    X86_AT(c, 0xd0904u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d0906  call 0xb607c
    X86_AT(c, 0xd0906u);
    push32(c, 0xd090bu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd090bu);
    X86_TICK(c, 11);
    // 0d090b  push 0xb134
    X86_AT(c, 0xd090bu);
    { uint32_t v = 0xB134u; push32(c, v); }
    // 0d0910  push 7
    X86_AT(c, 0xd0910u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0912  call 0xba428
    X86_AT(c, 0xd0912u);
    push32(c, 0xd0917u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0917u);
    X86_TICK(c, 9);
    // 0d0917  push 7
    X86_AT(c, 0xd0917u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0919  call 0xbbb5c
    X86_AT(c, 0xd0919u);
    push32(c, 0xd091eu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd091eu);
    X86_TICK(c, 2);
    // 0d091e  push 0xb168
    X86_AT(c, 0xd091eu);
    { uint32_t v = 0xB168u; push32(c, v); }
L_d0923:
    X86_TICK(c, 9);
    // 0d0923  push 7
    X86_AT(c, 0xd0923u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0925  call 0xba428
    X86_AT(c, 0xd0925u);
    push32(c, 0xd092au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd092au);
    X86_TICK(c, 9);
    // 0d092a  push 7
    X86_AT(c, 0xd092au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d092c  call 0xbbb5c
    X86_AT(c, 0xd092cu);
    push32(c, 0xd0931u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0931u);
    X86_TICK(c, 9);
    // 0d0931  add esp, 0x1c
    X86_AT(c, 0xd0931u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d0934  jmp 0xd098e
    X86_AT(c, 0xd0934u);
    goto L_d098e;
L_d0936:
    X86_TICK(c, 9);
    // 0d0936  push 2
    X86_AT(c, 0xd0936u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d0938  call 0xb607c
    X86_AT(c, 0xd0938u);
    push32(c, 0xd093du); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd093du);
    X86_TICK(c, 7);
    // 0d093d  call 0xcaa9c
    X86_AT(c, 0xd093du);
    push32(c, 0xd0942u); x86_call_known(c, 0xcaa9cu, f_000caa9c); X86_RET(c, 0xd0942u);
    X86_TICK(c, 9);
    // 0d0942  push edi
    X86_AT(c, 0xd0942u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0943  call 0xc7f0c
    X86_AT(c, 0xd0943u);
    push32(c, 0xd0948u); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xd0948u);
    X86_TICK(c, 9);
    // 0d0948  push 2
    X86_AT(c, 0xd0948u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d094a  call 0xbebbc
    X86_AT(c, 0xd094au);
    push32(c, 0xd094fu); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xd094fu);
    X86_TICK(c, 36);
    // 0d094f  lea eax, [edi + edi*2]
    X86_AT(c, 0xd094fu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d0952  lea edx, [eax*8]
    X86_AT(c, 0xd0952u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d0959  lea edx, [eax + edx*8]
    X86_AT(c, 0xd0959u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d095c  mov byte ptr [edx + 0xa4abd], 0x47
    X86_AT(c, 0xd095cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu)), 0x47u);
    // 0d0963  mov eax, dword ptr [edx + 0xa4ad9]
    X86_AT(c, 0xd0963u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD9u)));
    // 0d0969  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xd0969u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0d096c  cdq 
    X86_AT(c, 0xd096cu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d096d  sub eax, edx
    X86_AT(c, 0xd096du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0d096f  sar eax, 1
    X86_AT(c, 0xd096fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0d0971  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xd0971u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d0974  mov dword ptr [edx + 0xa4ad5], eax
    X86_AT(c, 0xd0974u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD5u)), c.r[0]);
    // 0d097a  push edi
    X86_AT(c, 0xd097au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d097b  call 0xc7f0c
    X86_AT(c, 0xd097bu);
    push32(c, 0xd0980u); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xd0980u);
    X86_TICK(c, 9);
    // 0d0980  push edi
    X86_AT(c, 0xd0980u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0981  call 0xbe720
    X86_AT(c, 0xd0981u);
    push32(c, 0xd0986u); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xd0986u);
    X86_TICK(c, 7);
    // 0d0986  call 0xb75c0
    X86_AT(c, 0xd0986u);
    push32(c, 0xd098bu); x86_call_known(c, 0xb75c0u, f_000b75c0); X86_RET(c, 0xd098bu);
L_d098b:
    X86_TICK(c, 2);
    // 0d098b  add esp, 0x14
    X86_AT(c, 0xd098bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_d098e:
    X86_TICK(c, 7);
    // 0d098e  cmp edi, 0xffffffff
    X86_AT(c, 0xd098eu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d0991  je 0xd09b5
    X86_AT(c, 0xd0991u);
    if (x86_cc(c, 4)) { goto L_d09b5; }
    X86_TICK(c, 11);
    // 0d0993  push 0xb1a8
    X86_AT(c, 0xd0993u);
    { uint32_t v = 0xB1A8u; push32(c, v); }
    // 0d0998  push 7
    X86_AT(c, 0xd0998u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d099a  call 0xba428
    X86_AT(c, 0xd099au);
    push32(c, 0xd099fu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd099fu);
    X86_TICK(c, 9);
    // 0d099f  push 7
    X86_AT(c, 0xd099fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d09a1  call 0xbbb5c
    X86_AT(c, 0xd09a1u);
    push32(c, 0xd09a6u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd09a6u);
    X86_TICK(c, 9);
    // 0d09a6  push 7
    X86_AT(c, 0xd09a6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d09a8  call 0xc9890
    X86_AT(c, 0xd09a8u);
    push32(c, 0xd09adu); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xd09adu);
    X86_TICK(c, 9);
    // 0d09ad  add esp, 0x10
    X86_AT(c, 0xd09adu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d09b0  jmp 0xd0481
    X86_AT(c, 0xd09b0u);
    X86_POLL(c, 0xd0481u); goto L_d0481;
L_d09b5:
    X86_TICK(c, 11);
    // 0d09b5  push 0xb1e0
    X86_AT(c, 0xd09b5u);
    { uint32_t v = 0xB1E0u; push32(c, v); }
    // 0d09ba  push 7
    X86_AT(c, 0xd09bau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d09bc  call 0xba428
    X86_AT(c, 0xd09bcu);
    push32(c, 0xd09c1u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd09c1u);
    X86_TICK(c, 9);
    // 0d09c1  push 7
    X86_AT(c, 0xd09c1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d09c3  call 0xbbb5c
    X86_AT(c, 0xd09c3u);
    push32(c, 0xd09c8u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd09c8u);
    X86_TICK(c, 26);
    // 0d09c8  add esp, 0xc
    X86_AT(c, 0xd09c8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d09cb  pop edi
    X86_AT(c, 0xd09cbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d09cc  pop ebx
    X86_AT(c, 0xd09ccu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d09cd  leave 
    X86_AT(c, 0xd09cdu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d09ce  ret 
    X86_AT(c, 0xd09ceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd098eu, "ran off the end of a function");
}
void f_000d09d0(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0d09d0  push ebp
    X86_AT(c, 0xd09d0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d09d1  mov ebp, esp
    X86_AT(c, 0xd09d1u);
    c.r[5] = c.r[4];
    // 0d09d3  push ebx
    X86_AT(c, 0xd09d3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d09d4  push edi
    X86_AT(c, 0xd09d4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d09d5  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd09d5u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d09d8  push 7
    X86_AT(c, 0xd09d8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d09da  call 0xbb6b0
    X86_AT(c, 0xd09dau);
    push32(c, 0xd09dfu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd09dfu);
    X86_TICK(c, 11);
    // 0d09df  push 0xb22c
    X86_AT(c, 0xd09dfu);
    { uint32_t v = 0xB22Cu; push32(c, v); }
    // 0d09e4  push 7
    X86_AT(c, 0xd09e4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d09e6  call 0xba428
    X86_AT(c, 0xd09e6u);
    push32(c, 0xd09ebu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd09ebu);
    X86_TICK(c, 9);
    // 0d09eb  push 7
    X86_AT(c, 0xd09ebu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d09ed  call 0xbbb5c
    X86_AT(c, 0xd09edu);
    push32(c, 0xd09f2u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd09f2u);
    X86_TICK(c, 11);
    // 0d09f2  push 0xb260
    X86_AT(c, 0xd09f2u);
    { uint32_t v = 0xB260u; push32(c, v); }
    // 0d09f7  push 7
    X86_AT(c, 0xd09f7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d09f9  call 0xba428
    X86_AT(c, 0xd09f9u);
    push32(c, 0xd09feu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd09feu);
    X86_TICK(c, 9);
    // 0d09fe  push 7
    X86_AT(c, 0xd09feu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0a00  call 0xbbb5c
    X86_AT(c, 0xd0a00u);
    push32(c, 0xd0a05u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0a05u);
    X86_TICK(c, 2);
    // 0d0a05  add esp, 0x1c
    X86_AT(c, 0xd0a05u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_d0a08:
    X86_TICK(c, 11);
    // 0d0a08  push 0xb2d0
    X86_AT(c, 0xd0a08u);
    { uint32_t v = 0xB2D0u; push32(c, v); }
    // 0d0a0d  push 7
    X86_AT(c, 0xd0a0du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0a0f  call 0xba428
    X86_AT(c, 0xd0a0fu);
    push32(c, 0xd0a14u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0a14u);
    X86_TICK(c, 9);
    // 0d0a14  push 7
    X86_AT(c, 0xd0a14u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0a16  call 0xbbb5c
    X86_AT(c, 0xd0a16u);
    push32(c, 0xd0a1bu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0a1bu);
    X86_TICK(c, 11);
    // 0d0a1b  push 0xb2f0
    X86_AT(c, 0xd0a1bu);
    { uint32_t v = 0xB2F0u; push32(c, v); }
    // 0d0a20  push 7
    X86_AT(c, 0xd0a20u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0a22  call 0xba428
    X86_AT(c, 0xd0a22u);
    push32(c, 0xd0a27u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0a27u);
    X86_TICK(c, 9);
    // 0d0a27  push 7
    X86_AT(c, 0xd0a27u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0a29  call 0xbbb5c
    X86_AT(c, 0xd0a29u);
    push32(c, 0xd0a2eu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0a2eu);
    X86_TICK(c, 11);
    // 0d0a2e  push 0xb310
    X86_AT(c, 0xd0a2eu);
    { uint32_t v = 0xB310u; push32(c, v); }
    // 0d0a33  push 7
    X86_AT(c, 0xd0a33u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0a35  call 0xba428
    X86_AT(c, 0xd0a35u);
    push32(c, 0xd0a3au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0a3au);
    X86_TICK(c, 9);
    // 0d0a3a  push 7
    X86_AT(c, 0xd0a3au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0a3c  call 0xbbb5c
    X86_AT(c, 0xd0a3cu);
    push32(c, 0xd0a41u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0a41u);
    X86_TICK(c, 11);
    // 0d0a41  push 0xb32c
    X86_AT(c, 0xd0a41u);
    { uint32_t v = 0xB32Cu; push32(c, v); }
    // 0d0a46  push 7
    X86_AT(c, 0xd0a46u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0a48  call 0xba428
    X86_AT(c, 0xd0a48u);
    push32(c, 0xd0a4du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0a4du);
    X86_TICK(c, 2);
    // 0d0a4d  add esp, 0x2c
    X86_AT(c, 0xd0a4du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
L_d0a50:
    X86_TICK(c, 9);
    // 0d0a50  push 7
    X86_AT(c, 0xd0a50u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0a52  call 0xb9514
    X86_AT(c, 0xd0a52u);
    push32(c, 0xd0a57u); x86_call_known(c, 0xb9514u, f_000b9514); X86_RET(c, 0xd0a57u);
    X86_TICK(c, 12);
    // 0d0a57  xchg ebx, eax
    X86_AT(c, 0xd0a57u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d0a58  add esp, 4
    X86_AT(c, 0xd0a58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0a5b  cmp bl, 1
    X86_AT(c, 0xd0a5bu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d0a5e  je 0xd0a7f
    X86_AT(c, 0xd0a5eu);
    if (x86_cc(c, 4)) { goto L_d0a7f; }
    X86_TICK(c, 7);
    // 0d0a60  cmp bl, 0x51
    X86_AT(c, 0xd0a60u);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0d0a63  je 0xd0a7f
    X86_AT(c, 0xd0a63u);
    if (x86_cc(c, 4)) { goto L_d0a7f; }
    X86_TICK(c, 7);
    // 0d0a65  cmp bl, 0x41
    X86_AT(c, 0xd0a65u);
    (void)x86_sub(c, g8(c, 3), 0x41u, 0, 1);
    // 0d0a68  je 0xd0a7f
    X86_AT(c, 0xd0a68u);
    if (x86_cc(c, 4)) { goto L_d0a7f; }
    X86_TICK(c, 7);
    // 0d0a6a  cmp bl, 0x42
    X86_AT(c, 0xd0a6au);
    (void)x86_sub(c, g8(c, 3), 0x42u, 0, 1);
    // 0d0a6d  je 0xd0a7f
    X86_AT(c, 0xd0a6du);
    if (x86_cc(c, 4)) { goto L_d0a7f; }
    X86_TICK(c, 7);
    // 0d0a6f  and bl, bl
    X86_AT(c, 0xd0a6fu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d0a71  je 0xd0a50
    X86_AT(c, 0xd0a71u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd0a50u); goto L_d0a50; }
    X86_TICK(c, 9);
    // 0d0a73  push 1
    X86_AT(c, 0xd0a73u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d0a75  call 0xb607c
    X86_AT(c, 0xd0a75u);
    push32(c, 0xd0a7au); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd0a7au);
    X86_TICK(c, 9);
    // 0d0a7a  add esp, 4
    X86_AT(c, 0xd0a7au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0a7d  jmp 0xd0a50
    X86_AT(c, 0xd0a7du);
    X86_POLL(c, 0xd0a50u); goto L_d0a50;
L_d0a7f:
    X86_TICK(c, 7);
    // 0d0a7f  cmp bl, 1
    X86_AT(c, 0xd0a7fu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d0a82  je 0xd0a89
    X86_AT(c, 0xd0a82u);
    if (x86_cc(c, 4)) { goto L_d0a89; }
    X86_TICK(c, 7);
    // 0d0a84  cmp bl, 0x51
    X86_AT(c, 0xd0a84u);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0d0a87  jne 0xd0aa1
    X86_AT(c, 0xd0a87u);
    if (x86_cc(c, 5)) { goto L_d0aa1; }
L_d0a89:
    X86_TICK(c, 11);
    // 0d0a89  push 0xb350
    X86_AT(c, 0xd0a89u);
    { uint32_t v = 0xB350u; push32(c, v); }
    // 0d0a8e  push 7
    X86_AT(c, 0xd0a8eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0a90  call 0xba428
    X86_AT(c, 0xd0a90u);
    push32(c, 0xd0a95u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0a95u);
    X86_TICK(c, 9);
    // 0d0a95  push 7
    X86_AT(c, 0xd0a95u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0a97  call 0xbbb5c
    X86_AT(c, 0xd0a97u);
    push32(c, 0xd0a9cu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0a9cu);
    X86_TICK(c, 9);
    // 0d0a9c  add esp, 0xc
    X86_AT(c, 0xd0a9cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d0a9f  jmp 0xd0af1
    X86_AT(c, 0xd0a9fu);
    goto L_d0af1;
L_d0aa1:
    X86_TICK(c, 7);
    // 0d0aa1  cmp bl, 0x41
    X86_AT(c, 0xd0aa1u);
    (void)x86_sub(c, g8(c, 3), 0x41u, 0, 1);
    // 0d0aa4  jne 0xd0ab2
    X86_AT(c, 0xd0aa4u);
    if (x86_cc(c, 5)) { goto L_d0ab2; }
    X86_TICK(c, 9);
    // 0d0aa6  push edi
    X86_AT(c, 0xd0aa6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0aa7  call 0xd0b0c
    X86_AT(c, 0xd0aa7u);
    push32(c, 0xd0aacu); x86_call_known(c, 0xd0b0cu, f_000d0b0c); X86_RET(c, 0xd0aacu);
    X86_TICK(c, 9);
    // 0d0aac  add esp, 4
    X86_AT(c, 0xd0aacu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0aaf  inc eax
    X86_AT(c, 0xd0aafu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d0ab0  je 0xd0ac3
    X86_AT(c, 0xd0ab0u);
    if (x86_cc(c, 4)) { goto L_d0ac3; }
L_d0ab2:
    X86_TICK(c, 7);
    // 0d0ab2  cmp bl, 0x42
    X86_AT(c, 0xd0ab2u);
    (void)x86_sub(c, g8(c, 3), 0x42u, 0, 1);
    // 0d0ab5  jne 0xd0acf
    X86_AT(c, 0xd0ab5u);
    if (x86_cc(c, 5)) { goto L_d0acf; }
    X86_TICK(c, 9);
    // 0d0ab7  push edi
    X86_AT(c, 0xd0ab7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0ab8  call 0xd0e20
    X86_AT(c, 0xd0ab8u);
    push32(c, 0xd0abdu); x86_call_known(c, 0xd0e20u, f_000d0e20); X86_RET(c, 0xd0abdu);
    X86_TICK(c, 9);
    // 0d0abd  add esp, 4
    X86_AT(c, 0xd0abdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0ac0  inc eax
    X86_AT(c, 0xd0ac0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d0ac1  jne 0xd0acf
    X86_AT(c, 0xd0ac1u);
    if (x86_cc(c, 5)) { goto L_d0acf; }
L_d0ac3:
    X86_TICK(c, 9);
    // 0d0ac3  push 7
    X86_AT(c, 0xd0ac3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0ac5  call 0xbb6b0
    X86_AT(c, 0xd0ac5u);
    push32(c, 0xd0acau); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd0acau);
    X86_TICK(c, 9);
    // 0d0aca  add esp, 4
    X86_AT(c, 0xd0acau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0acd  jmp 0xd0af1
    X86_AT(c, 0xd0acdu);
    goto L_d0af1;
L_d0acf:
    X86_TICK(c, 9);
    // 0d0acf  push 7
    X86_AT(c, 0xd0acfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0ad1  call 0xbb6b0
    X86_AT(c, 0xd0ad1u);
    push32(c, 0xd0ad6u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd0ad6u);
    X86_TICK(c, 11);
    // 0d0ad6  push 0xb36c
    X86_AT(c, 0xd0ad6u);
    { uint32_t v = 0xB36Cu; push32(c, v); }
    // 0d0adb  push 7
    X86_AT(c, 0xd0adbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0add  call 0xba428
    X86_AT(c, 0xd0addu);
    push32(c, 0xd0ae2u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0ae2u);
    X86_TICK(c, 9);
    // 0d0ae2  push 7
    X86_AT(c, 0xd0ae2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0ae4  call 0xbbb5c
    X86_AT(c, 0xd0ae4u);
    push32(c, 0xd0ae9u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0ae9u);
    X86_TICK(c, 9);
    // 0d0ae9  add esp, 0x10
    X86_AT(c, 0xd0ae9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d0aec  jmp 0xd0a08
    X86_AT(c, 0xd0aecu);
    X86_POLL(c, 0xd0a08u); goto L_d0a08;
L_d0af1:
    X86_TICK(c, 11);
    // 0d0af1  push 0xb3d0
    X86_AT(c, 0xd0af1u);
    { uint32_t v = 0xB3D0u; push32(c, v); }
    // 0d0af6  push 7
    X86_AT(c, 0xd0af6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0af8  call 0xba428
    X86_AT(c, 0xd0af8u);
    push32(c, 0xd0afdu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0afdu);
    X86_TICK(c, 9);
    // 0d0afd  push 7
    X86_AT(c, 0xd0afdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0aff  call 0xbbb5c
    X86_AT(c, 0xd0affu);
    push32(c, 0xd0b04u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0b04u);
    X86_TICK(c, 26);
    // 0d0b04  add esp, 0xc
    X86_AT(c, 0xd0b04u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d0b07  pop edi
    X86_AT(c, 0xd0b07u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d0b08  pop ebx
    X86_AT(c, 0xd0b08u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d0b09  leave 
    X86_AT(c, 0xd0b09u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d0b0a  ret 
    X86_AT(c, 0xd0b0au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd09d0u, "ran off the end of a function");
}
void f_000d0b0c(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0d0b0c  push ebp
    X86_AT(c, 0xd0b0cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d0b0d  mov ebp, esp
    X86_AT(c, 0xd0b0du);
    c.r[5] = c.r[4];
    // 0d0b0f  sub esp, 0xc
    X86_AT(c, 0xd0b0fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0d0b12  push ebx
    X86_AT(c, 0xd0b12u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d0b13  push esi
    X86_AT(c, 0xd0b13u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d0b14  push edi
    X86_AT(c, 0xd0b14u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0b15  mov byte ptr [ebp - 0xa], 0
    X86_AT(c, 0xd0b15u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u)), 0x0u);
    // 0d0b19  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xd0b19u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
    // 0d0b20  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xd0b20u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0d0b27  push 7
    X86_AT(c, 0xd0b27u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0b29  call 0xbb6b0
    X86_AT(c, 0xd0b29u);
    push32(c, 0xd0b2eu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd0b2eu);
    X86_TICK(c, 11);
    // 0d0b2e  push 0xb400
    X86_AT(c, 0xd0b2eu);
    { uint32_t v = 0xB400u; push32(c, v); }
    // 0d0b33  push 7
    X86_AT(c, 0xd0b33u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0b35  call 0xba428
    X86_AT(c, 0xd0b35u);
    push32(c, 0xd0b3au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0b3au);
    X86_TICK(c, 9);
    // 0d0b3a  push 7
    X86_AT(c, 0xd0b3au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0b3c  call 0xbbb5c
    X86_AT(c, 0xd0b3cu);
    push32(c, 0xd0b41u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0b41u);
    X86_TICK(c, 7);
    // 0d0b41  call 0xb6680
    X86_AT(c, 0xd0b41u);
    push32(c, 0xd0b46u); x86_call_known(c, 0xb6680u, f_000b6680); X86_RET(c, 0xd0b46u);
    X86_TICK(c, 7);
    // 0d0b46  call 0xbd5d0
    X86_AT(c, 0xd0b46u);
    push32(c, 0xd0b4bu); x86_call_known(c, 0xbd5d0u, f_000bd5d0); X86_RET(c, 0xd0b4bu);
    X86_TICK(c, 27);
    // 0d0b4b  push 0xa
    X86_AT(c, 0xd0b4bu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d0b4d  push 0xf
    X86_AT(c, 0xd0b4du);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d0b4f  push 0xb
    X86_AT(c, 0xd0b4fu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d0b51  push 0x12
    X86_AT(c, 0xd0b51u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0d0b53  push 0x26
    X86_AT(c, 0xd0b53u);
    { uint32_t v = 0x26u; push32(c, v); }
    // 0d0b55  push 0x140
    X86_AT(c, 0xd0b55u);
    { uint32_t v = 0x140u; push32(c, v); }
    // 0d0b5a  push 0x140
    X86_AT(c, 0xd0b5au);
    { uint32_t v = 0x140u; push32(c, v); }
    // 0d0b5f  push 0x3f
    X86_AT(c, 0xd0b5fu);
    { uint32_t v = 0x3Fu; push32(c, v); }
    // 0d0b61  push 0x1a
    X86_AT(c, 0xd0b61u);
    { uint32_t v = 0x1Au; push32(c, v); }
    // 0d0b63  push 6
    X86_AT(c, 0xd0b63u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d0b65  call 0xbb5cc
    X86_AT(c, 0xd0b65u);
    push32(c, 0xd0b6au); x86_call_known(c, 0xbb5ccu, f_000bb5cc); X86_RET(c, 0xd0b6au);
    X86_TICK(c, 9);
    // 0d0b6a  push 6
    X86_AT(c, 0xd0b6au);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d0b6c  call 0xbb710
    X86_AT(c, 0xd0b6cu);
    push32(c, 0xd0b71u); x86_call_known(c, 0xbb710u, f_000bb710); X86_RET(c, 0xd0b71u);
    X86_TICK(c, 11);
    // 0d0b71  add esp, 0x3c
    X86_AT(c, 0xd0b71u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d0b74  push 6
    X86_AT(c, 0xd0b74u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d0b76  call 0xbb6b0
    X86_AT(c, 0xd0b76u);
    push32(c, 0xd0b7bu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd0b7bu);
    X86_TICK(c, 13);
    // 0d0b7b  push 0
    X86_AT(c, 0xd0b7bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0b7d  push 2
    X86_AT(c, 0xd0b7du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d0b7f  push 6
    X86_AT(c, 0xd0b7fu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d0b81  call 0xbc174
    X86_AT(c, 0xd0b81u);
    push32(c, 0xd0b86u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xd0b86u);
    X86_TICK(c, 11);
    // 0d0b86  push 0xb414
    X86_AT(c, 0xd0b86u);
    { uint32_t v = 0xB414u; push32(c, v); }
    // 0d0b8b  push 6
    X86_AT(c, 0xd0b8bu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d0b8d  call 0xba428
    X86_AT(c, 0xd0b8du);
    push32(c, 0xd0b92u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0b92u);
    X86_TICK(c, 13);
    // 0d0b92  push 2
    X86_AT(c, 0xd0b92u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d0b94  push 4
    X86_AT(c, 0xd0b94u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0b96  push 6
    X86_AT(c, 0xd0b96u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d0b98  call 0xbc174
    X86_AT(c, 0xd0b98u);
    push32(c, 0xd0b9du); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xd0b9du);
    X86_TICK(c, 11);
    // 0d0b9d  push 0xb454
    X86_AT(c, 0xd0b9du);
    { uint32_t v = 0xB454u; push32(c, v); }
    // 0d0ba2  push 6
    X86_AT(c, 0xd0ba2u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d0ba4  call 0xba428
    X86_AT(c, 0xd0ba4u);
    push32(c, 0xd0ba9u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0ba9u);
    X86_TICK(c, 14);
    // 0d0ba9  add esp, 0x2c
    X86_AT(c, 0xd0ba9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0d0bac  cmp dword ptr [0xa4a66], 0x25
    X86_AT(c, 0xd0bacu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A66u))), 0x25u, 0, 4);
    // 0d0bb3  jne 0xd0bc6
    X86_AT(c, 0xd0bb3u);
    if (x86_cc(c, 5)) { goto L_d0bc6; }
    X86_TICK(c, 11);
    // 0d0bb5  mov dword ptr [0xa4a96], 0
    X86_AT(c, 0xd0bb5u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A96u)), 0x0u);
    // 0d0bbf  mov esi, 0xe
    X86_AT(c, 0xd0bbfu);
    c.r[6] = 0xEu;
    // 0d0bc4  jmp 0xd0bcb
    X86_AT(c, 0xd0bc4u);
    goto L_d0bcb;
L_d0bc6:
    X86_TICK(c, 2);
    // 0d0bc6  mov esi, 7
    X86_AT(c, 0xd0bc6u);
    c.r[6] = 0x7u;
L_d0bcb:
    X86_TICK(c, 2);
    // 0d0bcb  sub edi, edi
    X86_AT(c, 0xd0bcbu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_d0bcd:
    X86_TICK(c, 7);
    // 0d0bcd  cmp esi, edi
    X86_AT(c, 0xd0bcdu);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 0d0bcf  jle 0xd0bf2
    X86_AT(c, 0xd0bcfu);
    if (x86_cc(c, 14)) { goto L_d0bf2; }
    X86_TICK(c, 15);
    // 0d0bd1  lea eax, [edi + 4]
    X86_AT(c, 0xd0bd1u);
    c.r[0] = (uint32_t)(c.r[7] + 0x4u);
    // 0d0bd4  push eax
    X86_AT(c, 0xd0bd4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d0bd5  push 4
    X86_AT(c, 0xd0bd5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0bd7  push 6
    X86_AT(c, 0xd0bd7u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d0bd9  call 0xbc174
    X86_AT(c, 0xd0bd9u);
    push32(c, 0xd0bdeu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xd0bdeu);
    X86_TICK(c, 14);
    // 0d0bde  push dword ptr [edi*4 + 0xb30c4]
    X86_AT(c, 0xd0bdeu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xB30C4u))); push32(c, v); }
    // 0d0be5  push 6
    X86_AT(c, 0xd0be5u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d0be7  call 0xba428
    X86_AT(c, 0xd0be7u);
    push32(c, 0xd0becu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0becu);
    X86_TICK(c, 11);
    // 0d0bec  inc edi
    X86_AT(c, 0xd0becu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d0bed  add esp, 0x14
    X86_AT(c, 0xd0bedu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d0bf0  jmp 0xd0bcd
    X86_AT(c, 0xd0bf0u);
    X86_POLL(c, 0xd0bcdu); goto L_d0bcd;
L_d0bf2:
    X86_TICK(c, 15);
    // 0d0bf2  lea eax, [edi + 4]
    X86_AT(c, 0xd0bf2u);
    c.r[0] = (uint32_t)(c.r[7] + 0x4u);
    // 0d0bf5  push eax
    X86_AT(c, 0xd0bf5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d0bf6  push 4
    X86_AT(c, 0xd0bf6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0bf8  push 6
    X86_AT(c, 0xd0bf8u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d0bfa  call 0xbc174
    X86_AT(c, 0xd0bfau);
    push32(c, 0xd0bffu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xd0bffu);
    X86_TICK(c, 11);
    // 0d0bff  push 0xb494
    X86_AT(c, 0xd0bffu);
    { uint32_t v = 0xB494u; push32(c, v); }
    // 0d0c04  push 6
    X86_AT(c, 0xd0c04u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d0c06  call 0xba428
    X86_AT(c, 0xd0c06u);
    push32(c, 0xd0c0bu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0c0bu);
    X86_TICK(c, 9);
    // 0d0c0b  push 7
    X86_AT(c, 0xd0c0bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0c0d  call 0xbb6b0
    X86_AT(c, 0xd0c0du);
    push32(c, 0xd0c12u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd0c12u);
    X86_TICK(c, 9);
    // 0d0c12  push 7
    X86_AT(c, 0xd0c12u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0c14  call 0xbbb5c
    X86_AT(c, 0xd0c14u);
    push32(c, 0xd0c19u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0c19u);
    X86_TICK(c, 11);
    // 0d0c19  push 0xb4ac
    X86_AT(c, 0xd0c19u);
    { uint32_t v = 0xB4ACu; push32(c, v); }
    // 0d0c1e  push 7
    X86_AT(c, 0xd0c1eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0c20  call 0xba428
    X86_AT(c, 0xd0c20u);
    push32(c, 0xd0c25u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0c25u);
    X86_TICK(c, 9);
    // 0d0c25  push 7
    X86_AT(c, 0xd0c25u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0c27  call 0xbbb5c
    X86_AT(c, 0xd0c27u);
    push32(c, 0xd0c2cu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0c2cu);
    X86_TICK(c, 2);
    // 0d0c2c  add esp, 0x28
    X86_AT(c, 0xd0c2cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
L_d0c2f:
    X86_TICK(c, 11);
    // 0d0c2f  push 0xb4dc
    X86_AT(c, 0xd0c2fu);
    { uint32_t v = 0xB4DCu; push32(c, v); }
    // 0d0c34  push 7
    X86_AT(c, 0xd0c34u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0c36  call 0xbbba4
    X86_AT(c, 0xd0c36u);
    push32(c, 0xd0c3bu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xd0c3bu);
    X86_TICK(c, 17);
    // 0d0c3b  lea eax, [ebp - 8]
    X86_AT(c, 0xd0c3bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0d0c3e  push eax
    X86_AT(c, 0xd0c3eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d0c3f  lea eax, [ebp - 4]
    X86_AT(c, 0xd0c3fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0d0c42  push eax
    X86_AT(c, 0xd0c42u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d0c43  push 7
    X86_AT(c, 0xd0c43u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0c45  call 0xbc428
    X86_AT(c, 0xd0c45u);
    push32(c, 0xd0c4au); x86_call_known(c, 0xbc428u, f_000bc428); X86_RET(c, 0xd0c4au);
    X86_TICK(c, 2);
    // 0d0c4a  add esp, 0x14
    X86_AT(c, 0xd0c4au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_d0c4d:
    X86_TICK(c, 9);
    // 0d0c4d  push 7
    X86_AT(c, 0xd0c4du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0c4f  call 0xb9514
    X86_AT(c, 0xd0c4fu);
    push32(c, 0xd0c54u); x86_call_known(c, 0xb9514u, f_000b9514); X86_RET(c, 0xd0c54u);
    X86_TICK(c, 12);
    // 0d0c54  xchg ebx, eax
    X86_AT(c, 0xd0c54u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d0c55  add esp, 4
    X86_AT(c, 0xd0c55u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0c58  cmp bl, 1
    X86_AT(c, 0xd0c58u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d0c5b  je 0xd0c7f
    X86_AT(c, 0xd0c5bu);
    if (x86_cc(c, 4)) { goto L_d0c7f; }
    X86_TICK(c, 7);
    // 0d0c5d  cmp bl, 0x51
    X86_AT(c, 0xd0c5du);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0d0c60  je 0xd0c7f
    X86_AT(c, 0xd0c60u);
    if (x86_cc(c, 4)) { goto L_d0c7f; }
    X86_TICK(c, 7);
    // 0d0c62  cmp bl, 0x41
    X86_AT(c, 0xd0c62u);
    (void)x86_sub(c, g8(c, 3), 0x41u, 0, 1);
    // 0d0c65  jbe 0xd0c6f
    X86_AT(c, 0xd0c65u);
    if (x86_cc(c, 6)) { goto L_d0c6f; }
    X86_TICK(c, 11);
    // 0d0c67  mov eax, esi
    X86_AT(c, 0xd0c67u);
    c.r[0] = c.r[6];
    // 0d0c69  add al, 0x41
    X86_AT(c, 0xd0c69u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x41u, 0, 1)); }
    // 0d0c6b  cmp al, bl
    X86_AT(c, 0xd0c6bu);
    (void)x86_sub(c, g8(c, 0), g8(c, 3), 0, 1);
    // 0d0c6d  jae 0xd0c7f
    X86_AT(c, 0xd0c6du);
    if (x86_cc(c, 3)) { goto L_d0c7f; }
L_d0c6f:
    X86_TICK(c, 7);
    // 0d0c6f  and bl, bl
    X86_AT(c, 0xd0c6fu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d0c71  je 0xd0c4d
    X86_AT(c, 0xd0c71u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd0c4du); goto L_d0c4d; }
    X86_TICK(c, 9);
    // 0d0c73  push 1
    X86_AT(c, 0xd0c73u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d0c75  call 0xb607c
    X86_AT(c, 0xd0c75u);
    push32(c, 0xd0c7au); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd0c7au);
    X86_TICK(c, 9);
    // 0d0c7a  add esp, 4
    X86_AT(c, 0xd0c7au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0c7d  jmp 0xd0c4d
    X86_AT(c, 0xd0c7du);
    X86_POLL(c, 0xd0c4du); goto L_d0c4d;
L_d0c7f:
    X86_TICK(c, 9);
    // 0d0c7f  push 7
    X86_AT(c, 0xd0c7fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0c81  call 0xbb6b0
    X86_AT(c, 0xd0c81u);
    push32(c, 0xd0c86u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd0c86u);
    X86_TICK(c, 19);
    // 0d0c86  push dword ptr [ebp - 8]
    X86_AT(c, 0xd0c86u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0d0c89  push dword ptr [ebp - 4]
    X86_AT(c, 0xd0c89u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0d0c8c  push 7
    X86_AT(c, 0xd0c8cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0c8e  call 0xbc174
    X86_AT(c, 0xd0c8eu);
    push32(c, 0xd0c93u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xd0c93u);
    X86_TICK(c, 9);
    // 0d0c93  add esp, 0x10
    X86_AT(c, 0xd0c93u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d0c96  cmp bl, 1
    X86_AT(c, 0xd0c96u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d0c99  je 0xd0ca0
    X86_AT(c, 0xd0c99u);
    if (x86_cc(c, 4)) { goto L_d0ca0; }
    X86_TICK(c, 7);
    // 0d0c9b  cmp bl, 0x51
    X86_AT(c, 0xd0c9bu);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0d0c9e  jne 0xd0cd5
    X86_AT(c, 0xd0c9eu);
    if (x86_cc(c, 5)) { goto L_d0cd5; }
L_d0ca0:
    X86_TICK(c, 11);
    // 0d0ca0  push 0xb4e0
    X86_AT(c, 0xd0ca0u);
    { uint32_t v = 0xB4E0u; push32(c, v); }
    // 0d0ca5  push 7
    X86_AT(c, 0xd0ca5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0ca7  call 0xba428
    X86_AT(c, 0xd0ca7u);
    push32(c, 0xd0cacu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0cacu);
    X86_TICK(c, 9);
    // 0d0cac  push 7
    X86_AT(c, 0xd0cacu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0cae  call 0xbbb5c
    X86_AT(c, 0xd0caeu);
    push32(c, 0xd0cb3u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0cb3u);
    X86_TICK(c, 11);
    // 0d0cb3  push 0
    X86_AT(c, 0xd0cb3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0cb5  push 6
    X86_AT(c, 0xd0cb5u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d0cb7  call 0xbba64
    X86_AT(c, 0xd0cb7u);
    push32(c, 0xd0cbcu); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xd0cbcu);
    X86_TICK(c, 9);
    // 0d0cbc  push 1
    X86_AT(c, 0xd0cbcu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d0cbe  call 0xb61d4
    X86_AT(c, 0xd0cbeu);
    push32(c, 0xd0cc3u); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xd0cc3u);
    X86_TICK(c, 7);
    // 0d0cc3  call 0xb8d78
    X86_AT(c, 0xd0cc3u);
    push32(c, 0xd0cc8u); x86_call_known(c, 0xb8d78u, f_000b8d78); X86_RET(c, 0xd0cc8u);
    X86_TICK(c, 11);
    // 0d0cc8  mov eax, 0xffffffff
    X86_AT(c, 0xd0cc8u);
    c.r[0] = 0xFFFFFFFFu;
    // 0d0ccd  add esp, 0x18
    X86_AT(c, 0xd0ccdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d0cd0  jmp 0xd0e19
    X86_AT(c, 0xd0cd0u);
    goto L_d0e19;
L_d0cd5:
    X86_TICK(c, 19);
    // 0d0cd5  lea eax, [ebp - 0xa]
    X86_AT(c, 0xd0cd5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF6u);
    // 0d0cd8  push eax
    X86_AT(c, 0xd0cd8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d0cd9  push ebx
    X86_AT(c, 0xd0cd9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d0cda  lea eax, [esi + 1]
    X86_AT(c, 0xd0cdau);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 0d0cdd  push eax
    X86_AT(c, 0xd0cddu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d0cde  push 0xa6bac
    X86_AT(c, 0xd0cdeu);
    { uint32_t v = 0xA6BACu; push32(c, v); }
    // 0d0ce3  call 0xba1b4
    X86_AT(c, 0xd0ce3u);
    push32(c, 0xd0ce8u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xd0ce8u);
    X86_TICK(c, 11);
    // 0d0ce8  push eax
    X86_AT(c, 0xd0ce8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d0ce9  push 7
    X86_AT(c, 0xd0ce9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0ceb  call 0xbbba4
    X86_AT(c, 0xd0cebu);
    push32(c, 0xd0cf0u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xd0cf0u);
    X86_TICK(c, 9);
    // 0d0cf0  push 7
    X86_AT(c, 0xd0cf0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0cf2  call 0xbbb5c
    X86_AT(c, 0xd0cf2u);
    push32(c, 0xd0cf7u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0cf7u);
    X86_TICK(c, 29);
    // 0d0cf7  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xd0cf7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d0cfa  lea eax, [eax + eax*2]
    X86_AT(c, 0xd0cfau);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d0cfd  lea edx, [eax*8]
    X86_AT(c, 0xd0cfdu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d0d04  lea edx, [eax + edx*8]
    X86_AT(c, 0xd0d04u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d0d07  movzx ebx, bl
    X86_AT(c, 0xd0d07u);
    c.r[3] = g8(c, 3);
    // 0d0d0a  lea eax, [ebx - 0x41]
    X86_AT(c, 0xd0d0au);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0d0d0d  add esp, 0x1c
    X86_AT(c, 0xd0d0du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d0d10  cmp dword ptr [edx + eax*4 + 0xa4b1b], 0x63
    X86_AT(c, 0xd0d10u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[0] * 4 + 0xA4B1Bu))), 0x63u, 0, 4);
    // 0d0d18  jl 0xd0d3c
    X86_AT(c, 0xd0d18u);
    if (x86_cc(c, 12)) { goto L_d0d3c; }
    X86_TICK(c, 9);
    // 0d0d1a  push 0
    X86_AT(c, 0xd0d1au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0d1c  call 0xb607c
    X86_AT(c, 0xd0d1cu);
    push32(c, 0xd0d21u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd0d21u);
    X86_TICK(c, 11);
    // 0d0d21  push 0xb4fc
    X86_AT(c, 0xd0d21u);
    { uint32_t v = 0xB4FCu; push32(c, v); }
    // 0d0d26  push 7
    X86_AT(c, 0xd0d26u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0d28  call 0xba428
    X86_AT(c, 0xd0d28u);
    push32(c, 0xd0d2du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0d2du);
    X86_TICK(c, 9);
    // 0d0d2d  push 7
    X86_AT(c, 0xd0d2du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0d2f  call 0xbbb5c
    X86_AT(c, 0xd0d2fu);
    push32(c, 0xd0d34u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0d34u);
    X86_TICK(c, 9);
    // 0d0d34  add esp, 0x10
    X86_AT(c, 0xd0d34u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d0d37  jmp 0xd0c2f
    X86_AT(c, 0xd0d37u);
    X86_POLL(c, 0xd0c2fu); goto L_d0c2f;
L_d0d3c:
    X86_TICK(c, 21);
    // 0d0d3c  push 4
    X86_AT(c, 0xd0d3cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0d3e  movzx ebx, bl
    X86_AT(c, 0xd0d3eu);
    c.r[3] = g8(c, 3);
    // 0d0d41  lea eax, [ebx - 0x41]
    X86_AT(c, 0xd0d41u);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0d0d44  push dword ptr [eax*4 + 0xb03fc]
    X86_AT(c, 0xd0d44u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB03FCu))); push32(c, v); }
    // 0d0d4b  push 7
    X86_AT(c, 0xd0d4bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0d4d  call 0xba404
    X86_AT(c, 0xd0d4du);
    push32(c, 0xd0d52u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xd0d52u);
    X86_TICK(c, 11);
    // 0d0d52  push 0xb528
    X86_AT(c, 0xd0d52u);
    { uint32_t v = 0xB528u; push32(c, v); }
    // 0d0d57  push 7
    X86_AT(c, 0xd0d57u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0d59  call 0xba428
    X86_AT(c, 0xd0d59u);
    push32(c, 0xd0d5eu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0d5eu);
    X86_TICK(c, 9);
    // 0d0d5e  push 7
    X86_AT(c, 0xd0d5eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0d60  call 0xb6e88
    X86_AT(c, 0xd0d60u);
    push32(c, 0xd0d65u); x86_call_known(c, 0xb6e88u, f_000b6e88); X86_RET(c, 0xd0d65u);
    X86_TICK(c, 11);
    // 0d0d65  mov byte ptr [ebp - 9], al
    X86_AT(c, 0xd0d65u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), g8(c, 0));
    // 0d0d68  add esp, 0x18
    X86_AT(c, 0xd0d68u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d0d6b  cmp al, 0x59
    X86_AT(c, 0xd0d6bu);
    (void)x86_sub(c, g8(c, 0), 0x59u, 0, 1);
    // 0d0d6d  jne 0xd0dff
    X86_AT(c, 0xd0d6du);
    if (x86_cc(c, 5)) { goto L_d0dff; }
    X86_TICK(c, 22);
    // 0d0d73  movzx ebx, bl
    X86_AT(c, 0xd0d73u);
    c.r[3] = g8(c, 3);
    // 0d0d76  lea eax, [ebx - 0x41]
    X86_AT(c, 0xd0d76u);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0d0d79  push dword ptr [eax*4 + 0xb03fc]
    X86_AT(c, 0xd0d79u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB03FCu))); push32(c, v); }
    // 0d0d80  push dword ptr [ebp + 8]
    X86_AT(c, 0xd0d80u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0d0d83  call 0xcfe88
    X86_AT(c, 0xd0d83u);
    push32(c, 0xd0d88u); x86_call_known(c, 0xcfe88u, f_000cfe88); X86_RET(c, 0xd0d88u);
    X86_TICK(c, 9);
    // 0d0d88  add esp, 8
    X86_AT(c, 0xd0d88u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d0d8b  inc eax
    X86_AT(c, 0xd0d8bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d0d8c  jne 0xd0dc7
    X86_AT(c, 0xd0d8cu);
    if (x86_cc(c, 5)) { goto L_d0dc7; }
    X86_TICK(c, 9);
    // 0d0d8e  push 3
    X86_AT(c, 0xd0d8eu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d0d90  call 0xb607c
    X86_AT(c, 0xd0d90u);
    push32(c, 0xd0d95u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd0d95u);
    X86_TICK(c, 11);
    // 0d0d95  push 0xb56c
    X86_AT(c, 0xd0d95u);
    { uint32_t v = 0xB56Cu; push32(c, v); }
    // 0d0d9a  push 7
    X86_AT(c, 0xd0d9au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0d9c  call 0xba428
    X86_AT(c, 0xd0d9cu);
    push32(c, 0xd0da1u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0da1u);
    X86_TICK(c, 9);
    // 0d0da1  push 7
    X86_AT(c, 0xd0da1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0da3  call 0xbbb5c
    X86_AT(c, 0xd0da3u);
    push32(c, 0xd0da8u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0da8u);
    X86_TICK(c, 11);
    // 0d0da8  push 0
    X86_AT(c, 0xd0da8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0daa  push 6
    X86_AT(c, 0xd0daau);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d0dac  call 0xbba64
    X86_AT(c, 0xd0dacu);
    push32(c, 0xd0db1u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xd0db1u);
    X86_TICK(c, 9);
    // 0d0db1  push 1
    X86_AT(c, 0xd0db1u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d0db3  call 0xb61d4
    X86_AT(c, 0xd0db3u);
    push32(c, 0xd0db8u); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xd0db8u);
    X86_TICK(c, 7);
    // 0d0db8  call 0xb8d78
    X86_AT(c, 0xd0db8u);
    push32(c, 0xd0dbdu); x86_call_known(c, 0xb8d78u, f_000b8d78); X86_RET(c, 0xd0dbdu);
    X86_TICK(c, 11);
    // 0d0dbd  mov eax, 0xffffffff
    X86_AT(c, 0xd0dbdu);
    c.r[0] = 0xFFFFFFFFu;
    // 0d0dc2  add esp, 0x1c
    X86_AT(c, 0xd0dc2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d0dc5  jmp 0xd0e19
    X86_AT(c, 0xd0dc5u);
    goto L_d0e19;
L_d0dc7:
    X86_TICK(c, 32);
    // 0d0dc7  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xd0dc7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d0dca  lea eax, [eax + eax*2]
    X86_AT(c, 0xd0dcau);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d0dcd  lea edx, [eax*8]
    X86_AT(c, 0xd0dcdu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d0dd4  lea edx, [eax + edx*8]
    X86_AT(c, 0xd0dd4u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d0dd7  movzx ebx, bl
    X86_AT(c, 0xd0dd7u);
    c.r[3] = g8(c, 3);
    // 0d0dda  lea eax, [ebx - 0x41]
    X86_AT(c, 0xd0ddau);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0d0ddd  inc dword ptr [edx + eax*4 + 0xa4b1b]
    X86_AT(c, 0xd0dddu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + c.r[0] * 4 + 0xA4B1Bu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d0de4  push 0xb5e8
    X86_AT(c, 0xd0de4u);
    { uint32_t v = 0xB5E8u; push32(c, v); }
    // 0d0de9  push 7
    X86_AT(c, 0xd0de9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0deb  call 0xba428
    X86_AT(c, 0xd0debu);
    push32(c, 0xd0df0u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0df0u);
    X86_TICK(c, 9);
    // 0d0df0  push 7
    X86_AT(c, 0xd0df0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0df2  call 0xbbb5c
    X86_AT(c, 0xd0df2u);
    push32(c, 0xd0df7u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0df7u);
    X86_TICK(c, 9);
    // 0d0df7  add esp, 0xc
    X86_AT(c, 0xd0df7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d0dfa  jmp 0xd0c2f
    X86_AT(c, 0xd0dfau);
    X86_POLL(c, 0xd0c2fu); goto L_d0c2f;
L_d0dff:
    X86_TICK(c, 11);
    // 0d0dff  push 0
    X86_AT(c, 0xd0dffu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0e01  push 6
    X86_AT(c, 0xd0e01u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d0e03  call 0xbba64
    X86_AT(c, 0xd0e03u);
    push32(c, 0xd0e08u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xd0e08u);
    X86_TICK(c, 9);
    // 0d0e08  push 1
    X86_AT(c, 0xd0e08u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d0e0a  call 0xb61d4
    X86_AT(c, 0xd0e0au);
    push32(c, 0xd0e0fu); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xd0e0fu);
    X86_TICK(c, 7);
    // 0d0e0f  call 0xb8d78
    X86_AT(c, 0xd0e0fu);
    push32(c, 0xd0e14u); x86_call_known(c, 0xb8d78u, f_000b8d78); X86_RET(c, 0xd0e14u);
    X86_TICK(c, 4);
    // 0d0e14  sub eax, eax
    X86_AT(c, 0xd0e14u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d0e16  add esp, 0xc
    X86_AT(c, 0xd0e16u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_d0e19:
    X86_TICK(c, 28);
    // 0d0e19  pop edi
    X86_AT(c, 0xd0e19u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d0e1a  pop esi
    X86_AT(c, 0xd0e1au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d0e1b  pop ebx
    X86_AT(c, 0xd0e1bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d0e1c  leave 
    X86_AT(c, 0xd0e1cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d0e1d  ret 
    X86_AT(c, 0xd0e1du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd0b0cu, "ran off the end of a function");
}
void f_000d0c2f(X86Cpu& c) {
L_d0c2f:
    X86_TICK(c, 11);
    // 0d0c2f  push 0xb4dc
    X86_AT(c, 0xd0c2fu);
    { uint32_t v = 0xB4DCu; push32(c, v); }
    // 0d0c34  push 7
    X86_AT(c, 0xd0c34u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0c36  call 0xbbba4
    X86_AT(c, 0xd0c36u);
    push32(c, 0xd0c3bu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xd0c3bu);
    X86_TICK(c, 17);
    // 0d0c3b  lea eax, [ebp - 8]
    X86_AT(c, 0xd0c3bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0d0c3e  push eax
    X86_AT(c, 0xd0c3eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d0c3f  lea eax, [ebp - 4]
    X86_AT(c, 0xd0c3fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0d0c42  push eax
    X86_AT(c, 0xd0c42u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d0c43  push 7
    X86_AT(c, 0xd0c43u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0c45  call 0xbc428
    X86_AT(c, 0xd0c45u);
    push32(c, 0xd0c4au); x86_call_known(c, 0xbc428u, f_000bc428); X86_RET(c, 0xd0c4au);
    X86_TICK(c, 2);
    // 0d0c4a  add esp, 0x14
    X86_AT(c, 0xd0c4au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_d0c4d:
    X86_TICK(c, 9);
    // 0d0c4d  push 7
    X86_AT(c, 0xd0c4du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0c4f  call 0xb9514
    X86_AT(c, 0xd0c4fu);
    push32(c, 0xd0c54u); x86_call_known(c, 0xb9514u, f_000b9514); X86_RET(c, 0xd0c54u);
    X86_TICK(c, 12);
    // 0d0c54  xchg ebx, eax
    X86_AT(c, 0xd0c54u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d0c55  add esp, 4
    X86_AT(c, 0xd0c55u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0c58  cmp bl, 1
    X86_AT(c, 0xd0c58u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d0c5b  je 0xd0c7f
    X86_AT(c, 0xd0c5bu);
    if (x86_cc(c, 4)) { goto L_d0c7f; }
    X86_TICK(c, 7);
    // 0d0c5d  cmp bl, 0x51
    X86_AT(c, 0xd0c5du);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0d0c60  je 0xd0c7f
    X86_AT(c, 0xd0c60u);
    if (x86_cc(c, 4)) { goto L_d0c7f; }
    X86_TICK(c, 7);
    // 0d0c62  cmp bl, 0x41
    X86_AT(c, 0xd0c62u);
    (void)x86_sub(c, g8(c, 3), 0x41u, 0, 1);
    // 0d0c65  jbe 0xd0c6f
    X86_AT(c, 0xd0c65u);
    if (x86_cc(c, 6)) { goto L_d0c6f; }
    X86_TICK(c, 11);
    // 0d0c67  mov eax, esi
    X86_AT(c, 0xd0c67u);
    c.r[0] = c.r[6];
    // 0d0c69  add al, 0x41
    X86_AT(c, 0xd0c69u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x41u, 0, 1)); }
    // 0d0c6b  cmp al, bl
    X86_AT(c, 0xd0c6bu);
    (void)x86_sub(c, g8(c, 0), g8(c, 3), 0, 1);
    // 0d0c6d  jae 0xd0c7f
    X86_AT(c, 0xd0c6du);
    if (x86_cc(c, 3)) { goto L_d0c7f; }
L_d0c6f:
    X86_TICK(c, 7);
    // 0d0c6f  and bl, bl
    X86_AT(c, 0xd0c6fu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d0c71  je 0xd0c4d
    X86_AT(c, 0xd0c71u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd0c4du); goto L_d0c4d; }
    X86_TICK(c, 9);
    // 0d0c73  push 1
    X86_AT(c, 0xd0c73u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d0c75  call 0xb607c
    X86_AT(c, 0xd0c75u);
    push32(c, 0xd0c7au); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd0c7au);
    X86_TICK(c, 9);
    // 0d0c7a  add esp, 4
    X86_AT(c, 0xd0c7au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0c7d  jmp 0xd0c4d
    X86_AT(c, 0xd0c7du);
    X86_POLL(c, 0xd0c4du); goto L_d0c4d;
L_d0c7f:
    X86_TICK(c, 9);
    // 0d0c7f  push 7
    X86_AT(c, 0xd0c7fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0c81  call 0xbb6b0
    X86_AT(c, 0xd0c81u);
    push32(c, 0xd0c86u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd0c86u);
    X86_TICK(c, 19);
    // 0d0c86  push dword ptr [ebp - 8]
    X86_AT(c, 0xd0c86u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0d0c89  push dword ptr [ebp - 4]
    X86_AT(c, 0xd0c89u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0d0c8c  push 7
    X86_AT(c, 0xd0c8cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0c8e  call 0xbc174
    X86_AT(c, 0xd0c8eu);
    push32(c, 0xd0c93u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xd0c93u);
    X86_TICK(c, 9);
    // 0d0c93  add esp, 0x10
    X86_AT(c, 0xd0c93u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d0c96  cmp bl, 1
    X86_AT(c, 0xd0c96u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d0c99  je 0xd0ca0
    X86_AT(c, 0xd0c99u);
    if (x86_cc(c, 4)) { goto L_d0ca0; }
    X86_TICK(c, 7);
    // 0d0c9b  cmp bl, 0x51
    X86_AT(c, 0xd0c9bu);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0d0c9e  jne 0xd0cd5
    X86_AT(c, 0xd0c9eu);
    if (x86_cc(c, 5)) { goto L_d0cd5; }
L_d0ca0:
    X86_TICK(c, 11);
    // 0d0ca0  push 0xb4e0
    X86_AT(c, 0xd0ca0u);
    { uint32_t v = 0xB4E0u; push32(c, v); }
    // 0d0ca5  push 7
    X86_AT(c, 0xd0ca5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0ca7  call 0xba428
    X86_AT(c, 0xd0ca7u);
    push32(c, 0xd0cacu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0cacu);
    X86_TICK(c, 9);
    // 0d0cac  push 7
    X86_AT(c, 0xd0cacu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0cae  call 0xbbb5c
    X86_AT(c, 0xd0caeu);
    push32(c, 0xd0cb3u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0cb3u);
    X86_TICK(c, 11);
    // 0d0cb3  push 0
    X86_AT(c, 0xd0cb3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0cb5  push 6
    X86_AT(c, 0xd0cb5u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d0cb7  call 0xbba64
    X86_AT(c, 0xd0cb7u);
    push32(c, 0xd0cbcu); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xd0cbcu);
    X86_TICK(c, 9);
    // 0d0cbc  push 1
    X86_AT(c, 0xd0cbcu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d0cbe  call 0xb61d4
    X86_AT(c, 0xd0cbeu);
    push32(c, 0xd0cc3u); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xd0cc3u);
    X86_TICK(c, 7);
    // 0d0cc3  call 0xb8d78
    X86_AT(c, 0xd0cc3u);
    push32(c, 0xd0cc8u); x86_call_known(c, 0xb8d78u, f_000b8d78); X86_RET(c, 0xd0cc8u);
    X86_TICK(c, 11);
    // 0d0cc8  mov eax, 0xffffffff
    X86_AT(c, 0xd0cc8u);
    c.r[0] = 0xFFFFFFFFu;
    // 0d0ccd  add esp, 0x18
    X86_AT(c, 0xd0ccdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d0cd0  jmp 0xd0e19
    X86_AT(c, 0xd0cd0u);
    goto L_d0e19;
L_d0cd5:
    X86_TICK(c, 19);
    // 0d0cd5  lea eax, [ebp - 0xa]
    X86_AT(c, 0xd0cd5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF6u);
    // 0d0cd8  push eax
    X86_AT(c, 0xd0cd8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d0cd9  push ebx
    X86_AT(c, 0xd0cd9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d0cda  lea eax, [esi + 1]
    X86_AT(c, 0xd0cdau);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 0d0cdd  push eax
    X86_AT(c, 0xd0cddu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d0cde  push 0xa6bac
    X86_AT(c, 0xd0cdeu);
    { uint32_t v = 0xA6BACu; push32(c, v); }
    // 0d0ce3  call 0xba1b4
    X86_AT(c, 0xd0ce3u);
    push32(c, 0xd0ce8u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xd0ce8u);
    X86_TICK(c, 11);
    // 0d0ce8  push eax
    X86_AT(c, 0xd0ce8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d0ce9  push 7
    X86_AT(c, 0xd0ce9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0ceb  call 0xbbba4
    X86_AT(c, 0xd0cebu);
    push32(c, 0xd0cf0u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xd0cf0u);
    X86_TICK(c, 9);
    // 0d0cf0  push 7
    X86_AT(c, 0xd0cf0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0cf2  call 0xbbb5c
    X86_AT(c, 0xd0cf2u);
    push32(c, 0xd0cf7u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0cf7u);
    X86_TICK(c, 29);
    // 0d0cf7  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xd0cf7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d0cfa  lea eax, [eax + eax*2]
    X86_AT(c, 0xd0cfau);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d0cfd  lea edx, [eax*8]
    X86_AT(c, 0xd0cfdu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d0d04  lea edx, [eax + edx*8]
    X86_AT(c, 0xd0d04u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d0d07  movzx ebx, bl
    X86_AT(c, 0xd0d07u);
    c.r[3] = g8(c, 3);
    // 0d0d0a  lea eax, [ebx - 0x41]
    X86_AT(c, 0xd0d0au);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0d0d0d  add esp, 0x1c
    X86_AT(c, 0xd0d0du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d0d10  cmp dword ptr [edx + eax*4 + 0xa4b1b], 0x63
    X86_AT(c, 0xd0d10u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[0] * 4 + 0xA4B1Bu))), 0x63u, 0, 4);
    // 0d0d18  jl 0xd0d3c
    X86_AT(c, 0xd0d18u);
    if (x86_cc(c, 12)) { goto L_d0d3c; }
    X86_TICK(c, 9);
    // 0d0d1a  push 0
    X86_AT(c, 0xd0d1au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0d1c  call 0xb607c
    X86_AT(c, 0xd0d1cu);
    push32(c, 0xd0d21u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd0d21u);
    X86_TICK(c, 11);
    // 0d0d21  push 0xb4fc
    X86_AT(c, 0xd0d21u);
    { uint32_t v = 0xB4FCu; push32(c, v); }
    // 0d0d26  push 7
    X86_AT(c, 0xd0d26u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0d28  call 0xba428
    X86_AT(c, 0xd0d28u);
    push32(c, 0xd0d2du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0d2du);
    X86_TICK(c, 9);
    // 0d0d2d  push 7
    X86_AT(c, 0xd0d2du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0d2f  call 0xbbb5c
    X86_AT(c, 0xd0d2fu);
    push32(c, 0xd0d34u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0d34u);
    X86_TICK(c, 9);
    // 0d0d34  add esp, 0x10
    X86_AT(c, 0xd0d34u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d0d37  jmp 0xd0c2f
    X86_AT(c, 0xd0d37u);
    X86_POLL(c, 0xd0c2fu); goto L_d0c2f;
L_d0d3c:
    X86_TICK(c, 21);
    // 0d0d3c  push 4
    X86_AT(c, 0xd0d3cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0d3e  movzx ebx, bl
    X86_AT(c, 0xd0d3eu);
    c.r[3] = g8(c, 3);
    // 0d0d41  lea eax, [ebx - 0x41]
    X86_AT(c, 0xd0d41u);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0d0d44  push dword ptr [eax*4 + 0xb03fc]
    X86_AT(c, 0xd0d44u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB03FCu))); push32(c, v); }
    // 0d0d4b  push 7
    X86_AT(c, 0xd0d4bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0d4d  call 0xba404
    X86_AT(c, 0xd0d4du);
    push32(c, 0xd0d52u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xd0d52u);
    X86_TICK(c, 11);
    // 0d0d52  push 0xb528
    X86_AT(c, 0xd0d52u);
    { uint32_t v = 0xB528u; push32(c, v); }
    // 0d0d57  push 7
    X86_AT(c, 0xd0d57u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0d59  call 0xba428
    X86_AT(c, 0xd0d59u);
    push32(c, 0xd0d5eu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0d5eu);
    X86_TICK(c, 9);
    // 0d0d5e  push 7
    X86_AT(c, 0xd0d5eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0d60  call 0xb6e88
    X86_AT(c, 0xd0d60u);
    push32(c, 0xd0d65u); x86_call_known(c, 0xb6e88u, f_000b6e88); X86_RET(c, 0xd0d65u);
    X86_TICK(c, 11);
    // 0d0d65  mov byte ptr [ebp - 9], al
    X86_AT(c, 0xd0d65u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), g8(c, 0));
    // 0d0d68  add esp, 0x18
    X86_AT(c, 0xd0d68u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d0d6b  cmp al, 0x59
    X86_AT(c, 0xd0d6bu);
    (void)x86_sub(c, g8(c, 0), 0x59u, 0, 1);
    // 0d0d6d  jne 0xd0dff
    X86_AT(c, 0xd0d6du);
    if (x86_cc(c, 5)) { goto L_d0dff; }
    X86_TICK(c, 22);
    // 0d0d73  movzx ebx, bl
    X86_AT(c, 0xd0d73u);
    c.r[3] = g8(c, 3);
    // 0d0d76  lea eax, [ebx - 0x41]
    X86_AT(c, 0xd0d76u);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0d0d79  push dword ptr [eax*4 + 0xb03fc]
    X86_AT(c, 0xd0d79u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB03FCu))); push32(c, v); }
    // 0d0d80  push dword ptr [ebp + 8]
    X86_AT(c, 0xd0d80u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0d0d83  call 0xcfe88
    X86_AT(c, 0xd0d83u);
    push32(c, 0xd0d88u); x86_call_known(c, 0xcfe88u, f_000cfe88); X86_RET(c, 0xd0d88u);
    X86_TICK(c, 9);
    // 0d0d88  add esp, 8
    X86_AT(c, 0xd0d88u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d0d8b  inc eax
    X86_AT(c, 0xd0d8bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d0d8c  jne 0xd0dc7
    X86_AT(c, 0xd0d8cu);
    if (x86_cc(c, 5)) { goto L_d0dc7; }
    X86_TICK(c, 9);
    // 0d0d8e  push 3
    X86_AT(c, 0xd0d8eu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d0d90  call 0xb607c
    X86_AT(c, 0xd0d90u);
    push32(c, 0xd0d95u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd0d95u);
    X86_TICK(c, 11);
    // 0d0d95  push 0xb56c
    X86_AT(c, 0xd0d95u);
    { uint32_t v = 0xB56Cu; push32(c, v); }
    // 0d0d9a  push 7
    X86_AT(c, 0xd0d9au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0d9c  call 0xba428
    X86_AT(c, 0xd0d9cu);
    push32(c, 0xd0da1u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0da1u);
    X86_TICK(c, 9);
    // 0d0da1  push 7
    X86_AT(c, 0xd0da1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0da3  call 0xbbb5c
    X86_AT(c, 0xd0da3u);
    push32(c, 0xd0da8u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0da8u);
    X86_TICK(c, 11);
    // 0d0da8  push 0
    X86_AT(c, 0xd0da8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0daa  push 6
    X86_AT(c, 0xd0daau);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d0dac  call 0xbba64
    X86_AT(c, 0xd0dacu);
    push32(c, 0xd0db1u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xd0db1u);
    X86_TICK(c, 9);
    // 0d0db1  push 1
    X86_AT(c, 0xd0db1u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d0db3  call 0xb61d4
    X86_AT(c, 0xd0db3u);
    push32(c, 0xd0db8u); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xd0db8u);
    X86_TICK(c, 7);
    // 0d0db8  call 0xb8d78
    X86_AT(c, 0xd0db8u);
    push32(c, 0xd0dbdu); x86_call_known(c, 0xb8d78u, f_000b8d78); X86_RET(c, 0xd0dbdu);
    X86_TICK(c, 11);
    // 0d0dbd  mov eax, 0xffffffff
    X86_AT(c, 0xd0dbdu);
    c.r[0] = 0xFFFFFFFFu;
    // 0d0dc2  add esp, 0x1c
    X86_AT(c, 0xd0dc2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d0dc5  jmp 0xd0e19
    X86_AT(c, 0xd0dc5u);
    goto L_d0e19;
L_d0dc7:
    X86_TICK(c, 32);
    // 0d0dc7  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xd0dc7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d0dca  lea eax, [eax + eax*2]
    X86_AT(c, 0xd0dcau);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d0dcd  lea edx, [eax*8]
    X86_AT(c, 0xd0dcdu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d0dd4  lea edx, [eax + edx*8]
    X86_AT(c, 0xd0dd4u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d0dd7  movzx ebx, bl
    X86_AT(c, 0xd0dd7u);
    c.r[3] = g8(c, 3);
    // 0d0dda  lea eax, [ebx - 0x41]
    X86_AT(c, 0xd0ddau);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0d0ddd  inc dword ptr [edx + eax*4 + 0xa4b1b]
    X86_AT(c, 0xd0dddu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + c.r[0] * 4 + 0xA4B1Bu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d0de4  push 0xb5e8
    X86_AT(c, 0xd0de4u);
    { uint32_t v = 0xB5E8u; push32(c, v); }
    // 0d0de9  push 7
    X86_AT(c, 0xd0de9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0deb  call 0xba428
    X86_AT(c, 0xd0debu);
    push32(c, 0xd0df0u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0df0u);
    X86_TICK(c, 9);
    // 0d0df0  push 7
    X86_AT(c, 0xd0df0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0df2  call 0xbbb5c
    X86_AT(c, 0xd0df2u);
    push32(c, 0xd0df7u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0df7u);
    X86_TICK(c, 9);
    // 0d0df7  add esp, 0xc
    X86_AT(c, 0xd0df7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d0dfa  jmp 0xd0c2f
    X86_AT(c, 0xd0dfau);
    X86_POLL(c, 0xd0c2fu); goto L_d0c2f;
L_d0dff:
    X86_TICK(c, 11);
    // 0d0dff  push 0
    X86_AT(c, 0xd0dffu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0e01  push 6
    X86_AT(c, 0xd0e01u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d0e03  call 0xbba64
    X86_AT(c, 0xd0e03u);
    push32(c, 0xd0e08u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xd0e08u);
    X86_TICK(c, 9);
    // 0d0e08  push 1
    X86_AT(c, 0xd0e08u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d0e0a  call 0xb61d4
    X86_AT(c, 0xd0e0au);
    push32(c, 0xd0e0fu); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xd0e0fu);
    X86_TICK(c, 7);
    // 0d0e0f  call 0xb8d78
    X86_AT(c, 0xd0e0fu);
    push32(c, 0xd0e14u); x86_call_known(c, 0xb8d78u, f_000b8d78); X86_RET(c, 0xd0e14u);
    X86_TICK(c, 4);
    // 0d0e14  sub eax, eax
    X86_AT(c, 0xd0e14u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d0e16  add esp, 0xc
    X86_AT(c, 0xd0e16u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_d0e19:
    X86_TICK(c, 28);
    // 0d0e19  pop edi
    X86_AT(c, 0xd0e19u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d0e1a  pop esi
    X86_AT(c, 0xd0e1au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d0e1b  pop ebx
    X86_AT(c, 0xd0e1bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d0e1c  leave 
    X86_AT(c, 0xd0e1cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d0e1d  ret 
    X86_AT(c, 0xd0e1du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd0c2fu, "ran off the end of a function");
}
void f_000d0e20(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0d0e20  push ebp
    X86_AT(c, 0xd0e20u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d0e21  mov ebp, esp
    X86_AT(c, 0xd0e21u);
    c.r[5] = c.r[4];
    // 0d0e23  sub esp, 0x14
    X86_AT(c, 0xd0e23u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x14u, 0, 4); }
    // 0d0e26  push ebx
    X86_AT(c, 0xd0e26u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d0e27  push esi
    X86_AT(c, 0xd0e27u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d0e28  push edi
    X86_AT(c, 0xd0e28u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0e29  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd0e29u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d0e2c  mov byte ptr [ebp - 0xe], 0
    X86_AT(c, 0xd0e2cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)), 0x0u);
    // 0d0e30  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xd0e30u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
    // 0d0e37  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xd0e37u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0d0e3e  push 7
    X86_AT(c, 0xd0e3eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0e40  call 0xbb6b0
    X86_AT(c, 0xd0e40u);
    push32(c, 0xd0e45u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd0e45u);
    X86_TICK(c, 11);
    // 0d0e45  push 0xb658
    X86_AT(c, 0xd0e45u);
    { uint32_t v = 0xB658u; push32(c, v); }
    // 0d0e4a  push 7
    X86_AT(c, 0xd0e4au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0e4c  call 0xba428
    X86_AT(c, 0xd0e4cu);
    push32(c, 0xd0e51u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0e51u);
    X86_TICK(c, 9);
    // 0d0e51  push 7
    X86_AT(c, 0xd0e51u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0e53  call 0xbbb5c
    X86_AT(c, 0xd0e53u);
    push32(c, 0xd0e58u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0e58u);
    X86_TICK(c, 7);
    // 0d0e58  call 0xb8d84
    X86_AT(c, 0xd0e58u);
    push32(c, 0xd0e5du); x86_call_known(c, 0xb8d84u, f_000b8d84); X86_RET(c, 0xd0e5du);
    X86_TICK(c, 7);
    // 0d0e5d  call 0xb6680
    X86_AT(c, 0xd0e5du);
    push32(c, 0xd0e62u); x86_call_known(c, 0xb6680u, f_000b6680); X86_RET(c, 0xd0e62u);
    X86_TICK(c, 7);
    // 0d0e62  call 0xbd5d0
    X86_AT(c, 0xd0e62u);
    push32(c, 0xd0e67u); x86_call_known(c, 0xbd5d0u, f_000bd5d0); X86_RET(c, 0xd0e67u);
    X86_TICK(c, 27);
    // 0d0e67  push 0xa
    X86_AT(c, 0xd0e67u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d0e69  push 0xf
    X86_AT(c, 0xd0e69u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d0e6b  push 0xb
    X86_AT(c, 0xd0e6bu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d0e6d  push 0x12
    X86_AT(c, 0xd0e6du);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0d0e6f  push 0x26
    X86_AT(c, 0xd0e6fu);
    { uint32_t v = 0x26u; push32(c, v); }
    // 0d0e71  push 0x140
    X86_AT(c, 0xd0e71u);
    { uint32_t v = 0x140u; push32(c, v); }
    // 0d0e76  push 0x140
    X86_AT(c, 0xd0e76u);
    { uint32_t v = 0x140u; push32(c, v); }
    // 0d0e7b  push 0x3f
    X86_AT(c, 0xd0e7bu);
    { uint32_t v = 0x3Fu; push32(c, v); }
    // 0d0e7d  push 0x1a
    X86_AT(c, 0xd0e7du);
    { uint32_t v = 0x1Au; push32(c, v); }
    // 0d0e7f  push 6
    X86_AT(c, 0xd0e7fu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d0e81  call 0xbb5cc
    X86_AT(c, 0xd0e81u);
    push32(c, 0xd0e86u); x86_call_known(c, 0xbb5ccu, f_000bb5cc); X86_RET(c, 0xd0e86u);
    X86_TICK(c, 9);
    // 0d0e86  push 6
    X86_AT(c, 0xd0e86u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d0e88  call 0xbb710
    X86_AT(c, 0xd0e88u);
    push32(c, 0xd0e8du); x86_call_known(c, 0xbb710u, f_000bb710); X86_RET(c, 0xd0e8du);
    X86_TICK(c, 11);
    // 0d0e8d  add esp, 0x3c
    X86_AT(c, 0xd0e8du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d0e90  push 6
    X86_AT(c, 0xd0e90u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d0e92  call 0xbb6b0
    X86_AT(c, 0xd0e92u);
    push32(c, 0xd0e97u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd0e97u);
    X86_TICK(c, 13);
    // 0d0e97  push 0
    X86_AT(c, 0xd0e97u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0e99  push 2
    X86_AT(c, 0xd0e99u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d0e9b  push 6
    X86_AT(c, 0xd0e9bu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d0e9d  call 0xbc174
    X86_AT(c, 0xd0e9du);
    push32(c, 0xd0ea2u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xd0ea2u);
    X86_TICK(c, 11);
    // 0d0ea2  push 0xb66c
    X86_AT(c, 0xd0ea2u);
    { uint32_t v = 0xB66Cu; push32(c, v); }
    // 0d0ea7  push 6
    X86_AT(c, 0xd0ea7u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d0ea9  call 0xba428
    X86_AT(c, 0xd0ea9u);
    push32(c, 0xd0eaeu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0eaeu);
    X86_TICK(c, 13);
    // 0d0eae  push 2
    X86_AT(c, 0xd0eaeu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d0eb0  push 2
    X86_AT(c, 0xd0eb0u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d0eb2  push 6
    X86_AT(c, 0xd0eb2u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d0eb4  call 0xbc174
    X86_AT(c, 0xd0eb4u);
    push32(c, 0xd0eb9u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xd0eb9u);
    X86_TICK(c, 11);
    // 0d0eb9  push 0xb6ac
    X86_AT(c, 0xd0eb9u);
    { uint32_t v = 0xB6ACu; push32(c, v); }
    // 0d0ebe  push 6
    X86_AT(c, 0xd0ebeu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d0ec0  call 0xba428
    X86_AT(c, 0xd0ec0u);
    push32(c, 0xd0ec5u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0ec5u);
    X86_TICK(c, 14);
    // 0d0ec5  add esp, 0x2c
    X86_AT(c, 0xd0ec5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0d0ec8  cmp dword ptr [0xa4a66], 0x25
    X86_AT(c, 0xd0ec8u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A66u))), 0x25u, 0, 4);
    // 0d0ecf  jne 0xd0ee4
    X86_AT(c, 0xd0ecfu);
    if (x86_cc(c, 5)) { goto L_d0ee4; }
    X86_TICK(c, 11);
    // 0d0ed1  mov dword ptr [0xa4a96], 0
    X86_AT(c, 0xd0ed1u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A96u)), 0x0u);
    // 0d0edb  mov dword ptr [ebp - 0xc], 0xe
    X86_AT(c, 0xd0edbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0xEu);
    // 0d0ee2  jmp 0xd0eeb
    X86_AT(c, 0xd0ee2u);
    goto L_d0eeb;
L_d0ee4:
    X86_TICK(c, 2);
    // 0d0ee4  mov dword ptr [ebp - 0xc], 7
    X86_AT(c, 0xd0ee4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x7u);
L_d0eeb:
    X86_TICK(c, 2);
    // 0d0eeb  sub esi, esi
    X86_AT(c, 0xd0eebu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_d0eed:
    X86_TICK(c, 11);
    // 0d0eed  cmp esi, dword ptr [ebp - 0xc]
    X86_AT(c, 0xd0eedu);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4);
    // 0d0ef0  jge 0xd0f13
    X86_AT(c, 0xd0ef0u);
    if (x86_cc(c, 13)) { goto L_d0f13; }
    X86_TICK(c, 15);
    // 0d0ef2  lea eax, [esi + 4]
    X86_AT(c, 0xd0ef2u);
    c.r[0] = (uint32_t)(c.r[6] + 0x4u);
    // 0d0ef5  push eax
    X86_AT(c, 0xd0ef5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d0ef6  push 4
    X86_AT(c, 0xd0ef6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0ef8  push 6
    X86_AT(c, 0xd0ef8u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d0efa  call 0xbc174
    X86_AT(c, 0xd0efau);
    push32(c, 0xd0effu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xd0effu);
    X86_TICK(c, 14);
    // 0d0eff  push dword ptr [esi*4 + 0xb30fc]
    X86_AT(c, 0xd0effu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xB30FCu))); push32(c, v); }
    // 0d0f06  push 6
    X86_AT(c, 0xd0f06u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d0f08  call 0xba428
    X86_AT(c, 0xd0f08u);
    push32(c, 0xd0f0du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0f0du);
    X86_TICK(c, 11);
    // 0d0f0d  inc esi
    X86_AT(c, 0xd0f0du);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d0f0e  add esp, 0x14
    X86_AT(c, 0xd0f0eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d0f11  jmp 0xd0eed
    X86_AT(c, 0xd0f11u);
    X86_POLL(c, 0xd0eedu); goto L_d0eed;
L_d0f13:
    X86_TICK(c, 15);
    // 0d0f13  lea eax, [esi + 4]
    X86_AT(c, 0xd0f13u);
    c.r[0] = (uint32_t)(c.r[6] + 0x4u);
    // 0d0f16  push eax
    X86_AT(c, 0xd0f16u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d0f17  push 4
    X86_AT(c, 0xd0f17u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d0f19  push 6
    X86_AT(c, 0xd0f19u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d0f1b  call 0xbc174
    X86_AT(c, 0xd0f1bu);
    push32(c, 0xd0f20u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xd0f20u);
    X86_TICK(c, 11);
    // 0d0f20  push 0xb6f0
    X86_AT(c, 0xd0f20u);
    { uint32_t v = 0xB6F0u; push32(c, v); }
    // 0d0f25  push 6
    X86_AT(c, 0xd0f25u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d0f27  call 0xba428
    X86_AT(c, 0xd0f27u);
    push32(c, 0xd0f2cu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0f2cu);
    X86_TICK(c, 9);
    // 0d0f2c  push 7
    X86_AT(c, 0xd0f2cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0f2e  call 0xbb6b0
    X86_AT(c, 0xd0f2eu);
    push32(c, 0xd0f33u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd0f33u);
    X86_TICK(c, 9);
    // 0d0f33  push 7
    X86_AT(c, 0xd0f33u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0f35  call 0xbbb5c
    X86_AT(c, 0xd0f35u);
    push32(c, 0xd0f3au); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0f3au);
    X86_TICK(c, 11);
    // 0d0f3a  push 0xb708
    X86_AT(c, 0xd0f3au);
    { uint32_t v = 0xB708u; push32(c, v); }
    // 0d0f3f  push 7
    X86_AT(c, 0xd0f3fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0f41  call 0xba428
    X86_AT(c, 0xd0f41u);
    push32(c, 0xd0f46u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0f46u);
    X86_TICK(c, 9);
    // 0d0f46  push 7
    X86_AT(c, 0xd0f46u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0f48  call 0xbbb5c
    X86_AT(c, 0xd0f48u);
    push32(c, 0xd0f4du); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0f4du);
    X86_TICK(c, 2);
    // 0d0f4d  add esp, 0x28
    X86_AT(c, 0xd0f4du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
L_d0f50:
    X86_TICK(c, 11);
    // 0d0f50  push 0xb734
    X86_AT(c, 0xd0f50u);
    { uint32_t v = 0xB734u; push32(c, v); }
    // 0d0f55  push 7
    X86_AT(c, 0xd0f55u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0f57  call 0xbbba4
    X86_AT(c, 0xd0f57u);
    push32(c, 0xd0f5cu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xd0f5cu);
    X86_TICK(c, 17);
    // 0d0f5c  lea eax, [ebp - 8]
    X86_AT(c, 0xd0f5cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0d0f5f  push eax
    X86_AT(c, 0xd0f5fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d0f60  lea eax, [ebp - 4]
    X86_AT(c, 0xd0f60u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0d0f63  push eax
    X86_AT(c, 0xd0f63u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d0f64  push 7
    X86_AT(c, 0xd0f64u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0f66  call 0xbc428
    X86_AT(c, 0xd0f66u);
    push32(c, 0xd0f6bu); x86_call_known(c, 0xbc428u, f_000bc428); X86_RET(c, 0xd0f6bu);
    X86_TICK(c, 2);
    // 0d0f6b  add esp, 0x14
    X86_AT(c, 0xd0f6bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_d0f6e:
    X86_TICK(c, 9);
    // 0d0f6e  push 7
    X86_AT(c, 0xd0f6eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0f70  call 0xb9514
    X86_AT(c, 0xd0f70u);
    push32(c, 0xd0f75u); x86_call_known(c, 0xb9514u, f_000b9514); X86_RET(c, 0xd0f75u);
    X86_TICK(c, 12);
    // 0d0f75  xchg ebx, eax
    X86_AT(c, 0xd0f75u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d0f76  add esp, 4
    X86_AT(c, 0xd0f76u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0f79  cmp bl, 1
    X86_AT(c, 0xd0f79u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d0f7c  je 0xd0fa1
    X86_AT(c, 0xd0f7cu);
    if (x86_cc(c, 4)) { goto L_d0fa1; }
    X86_TICK(c, 7);
    // 0d0f7e  cmp bl, 0x51
    X86_AT(c, 0xd0f7eu);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0d0f81  je 0xd0fa1
    X86_AT(c, 0xd0f81u);
    if (x86_cc(c, 4)) { goto L_d0fa1; }
    X86_TICK(c, 7);
    // 0d0f83  cmp bl, 0x41
    X86_AT(c, 0xd0f83u);
    (void)x86_sub(c, g8(c, 3), 0x41u, 0, 1);
    // 0d0f86  jbe 0xd0f91
    X86_AT(c, 0xd0f86u);
    if (x86_cc(c, 6)) { goto L_d0f91; }
    X86_TICK(c, 13);
    // 0d0f88  mov al, byte ptr [ebp - 0xc]
    X86_AT(c, 0xd0f88u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))));
    // 0d0f8b  add al, 0x41
    X86_AT(c, 0xd0f8bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x41u, 0, 1)); }
    // 0d0f8d  cmp al, bl
    X86_AT(c, 0xd0f8du);
    (void)x86_sub(c, g8(c, 0), g8(c, 3), 0, 1);
    // 0d0f8f  jae 0xd0fa1
    X86_AT(c, 0xd0f8fu);
    if (x86_cc(c, 3)) { goto L_d0fa1; }
L_d0f91:
    X86_TICK(c, 7);
    // 0d0f91  and bl, bl
    X86_AT(c, 0xd0f91u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d0f93  je 0xd0f6e
    X86_AT(c, 0xd0f93u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd0f6eu); goto L_d0f6e; }
    X86_TICK(c, 9);
    // 0d0f95  push 1
    X86_AT(c, 0xd0f95u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d0f97  call 0xb607c
    X86_AT(c, 0xd0f97u);
    push32(c, 0xd0f9cu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd0f9cu);
    X86_TICK(c, 9);
    // 0d0f9c  add esp, 4
    X86_AT(c, 0xd0f9cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0f9f  jmp 0xd0f6e
    X86_AT(c, 0xd0f9fu);
    X86_POLL(c, 0xd0f6eu); goto L_d0f6e;
L_d0fa1:
    X86_TICK(c, 9);
    // 0d0fa1  push 7
    X86_AT(c, 0xd0fa1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0fa3  call 0xbb6b0
    X86_AT(c, 0xd0fa3u);
    push32(c, 0xd0fa8u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd0fa8u);
    X86_TICK(c, 19);
    // 0d0fa8  push dword ptr [ebp - 8]
    X86_AT(c, 0xd0fa8u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0d0fab  push dword ptr [ebp - 4]
    X86_AT(c, 0xd0fabu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0d0fae  push 7
    X86_AT(c, 0xd0faeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0fb0  call 0xbc174
    X86_AT(c, 0xd0fb0u);
    push32(c, 0xd0fb5u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xd0fb5u);
    X86_TICK(c, 9);
    // 0d0fb5  add esp, 0x10
    X86_AT(c, 0xd0fb5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d0fb8  cmp bl, 1
    X86_AT(c, 0xd0fb8u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d0fbb  je 0xd0fc2
    X86_AT(c, 0xd0fbbu);
    if (x86_cc(c, 4)) { goto L_d0fc2; }
    X86_TICK(c, 7);
    // 0d0fbd  cmp bl, 0x51
    X86_AT(c, 0xd0fbdu);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0d0fc0  jne 0xd0ff7
    X86_AT(c, 0xd0fc0u);
    if (x86_cc(c, 5)) { goto L_d0ff7; }
L_d0fc2:
    X86_TICK(c, 11);
    // 0d0fc2  push 0xb738
    X86_AT(c, 0xd0fc2u);
    { uint32_t v = 0xB738u; push32(c, v); }
    // 0d0fc7  push 7
    X86_AT(c, 0xd0fc7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0fc9  call 0xba428
    X86_AT(c, 0xd0fc9u);
    push32(c, 0xd0fceu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0fceu);
    X86_TICK(c, 9);
    // 0d0fce  push 7
    X86_AT(c, 0xd0fceu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0fd0  call 0xbbb5c
    X86_AT(c, 0xd0fd0u);
    push32(c, 0xd0fd5u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0fd5u);
    X86_TICK(c, 11);
    // 0d0fd5  push 0
    X86_AT(c, 0xd0fd5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0fd7  push 6
    X86_AT(c, 0xd0fd7u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d0fd9  call 0xbba64
    X86_AT(c, 0xd0fd9u);
    push32(c, 0xd0fdeu); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xd0fdeu);
    X86_TICK(c, 9);
    // 0d0fde  push 1
    X86_AT(c, 0xd0fdeu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d0fe0  call 0xb61d4
    X86_AT(c, 0xd0fe0u);
    push32(c, 0xd0fe5u); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xd0fe5u);
    X86_TICK(c, 7);
    // 0d0fe5  call 0xb8d78
    X86_AT(c, 0xd0fe5u);
    push32(c, 0xd0feau); x86_call_known(c, 0xb8d78u, f_000b8d78); X86_RET(c, 0xd0feau);
    X86_TICK(c, 11);
    // 0d0fea  mov eax, 0xffffffff
    X86_AT(c, 0xd0feau);
    c.r[0] = 0xFFFFFFFFu;
    // 0d0fef  add esp, 0x18
    X86_AT(c, 0xd0fefu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d0ff2  jmp 0xd1182
    X86_AT(c, 0xd0ff2u);
    goto L_d1182;
L_d0ff7:
    X86_TICK(c, 23);
    // 0d0ff7  lea eax, [ebp - 0xe]
    X86_AT(c, 0xd0ff7u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF2u);
    // 0d0ffa  push eax
    X86_AT(c, 0xd0ffau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d0ffb  push ebx
    X86_AT(c, 0xd0ffbu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d0ffc  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xd0ffcu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0d0fff  inc eax
    X86_AT(c, 0xd0fffu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d1000  push eax
    X86_AT(c, 0xd1000u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d1001  push 0xa6bac
    X86_AT(c, 0xd1001u);
    { uint32_t v = 0xA6BACu; push32(c, v); }
    // 0d1006  call 0xba1b4
    X86_AT(c, 0xd1006u);
    push32(c, 0xd100bu); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xd100bu);
    X86_TICK(c, 11);
    // 0d100b  push eax
    X86_AT(c, 0xd100bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d100c  push 7
    X86_AT(c, 0xd100cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d100e  call 0xbbba4
    X86_AT(c, 0xd100eu);
    push32(c, 0xd1013u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xd1013u);
    X86_TICK(c, 9);
    // 0d1013  push 7
    X86_AT(c, 0xd1013u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1015  call 0xbbb5c
    X86_AT(c, 0xd1015u);
    push32(c, 0xd101au); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd101au);
    X86_TICK(c, 25);
    // 0d101a  lea eax, [edi + edi*2]
    X86_AT(c, 0xd101au);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d101d  lea edx, [eax*8]
    X86_AT(c, 0xd101du);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d1024  lea edx, [eax + edx*8]
    X86_AT(c, 0xd1024u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d1027  movzx ebx, bl
    X86_AT(c, 0xd1027u);
    c.r[3] = g8(c, 3);
    // 0d102a  lea eax, [ebx - 0x41]
    X86_AT(c, 0xd102au);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0d102d  add esp, 0x1c
    X86_AT(c, 0xd102du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d1030  cmp dword ptr [edx + eax*4 + 0xa4b1b], 1
    X86_AT(c, 0xd1030u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[0] * 4 + 0xA4B1Bu))), 0x1u, 0, 4);
    // 0d1038  jge 0xd1048
    X86_AT(c, 0xd1038u);
    if (x86_cc(c, 13)) { goto L_d1048; }
    X86_TICK(c, 9);
    // 0d103a  push 0
    X86_AT(c, 0xd103au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d103c  call 0xb607c
    X86_AT(c, 0xd103cu);
    push32(c, 0xd1041u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd1041u);
    X86_TICK(c, 9);
    // 0d1041  push 0xb754
    X86_AT(c, 0xd1041u);
    { uint32_t v = 0xB754u; push32(c, v); }
    // 0d1046  jmp 0xd1079
    X86_AT(c, 0xd1046u);
    goto L_d1079;
L_d1048:
    X86_TICK(c, 23);
    // 0d1048  lea eax, [edi + edi*2]
    X86_AT(c, 0xd1048u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d104b  lea edx, [eax*8]
    X86_AT(c, 0xd104bu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d1052  lea edx, [eax + edx*8]
    X86_AT(c, 0xd1052u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d1055  movzx ebx, bl
    X86_AT(c, 0xd1055u);
    c.r[3] = g8(c, 3);
    // 0d1058  lea eax, [ebx - 0x41]
    X86_AT(c, 0xd1058u);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0d105b  cmp dword ptr [edx + eax*4 + 0xa4b1b], 1
    X86_AT(c, 0xd105bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[0] * 4 + 0xA4B1Bu))), 0x1u, 0, 4);
    // 0d1063  jne 0xd108f
    X86_AT(c, 0xd1063u);
    if (x86_cc(c, 5)) { goto L_d108f; }
    X86_TICK(c, 11);
    // 0d1065  cmp bl, byte ptr [edx + 0xa4b1a]
    X86_AT(c, 0xd1065u);
    (void)x86_sub(c, g8(c, 3), rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4B1Au))), 0, 1);
    // 0d106b  jne 0xd108f
    X86_AT(c, 0xd106bu);
    if (x86_cc(c, 5)) { goto L_d108f; }
    X86_TICK(c, 9);
    // 0d106d  push 1
    X86_AT(c, 0xd106du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d106f  call 0xb607c
    X86_AT(c, 0xd106fu);
    push32(c, 0xd1074u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd1074u);
    X86_TICK(c, 2);
    // 0d1074  push 0xb7a4
    X86_AT(c, 0xd1074u);
    { uint32_t v = 0xB7A4u; push32(c, v); }
L_d1079:
    X86_TICK(c, 9);
    // 0d1079  push 7
    X86_AT(c, 0xd1079u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d107b  call 0xba428
    X86_AT(c, 0xd107bu);
    push32(c, 0xd1080u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1080u);
    X86_TICK(c, 9);
    // 0d1080  push 7
    X86_AT(c, 0xd1080u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1082  call 0xbbb5c
    X86_AT(c, 0xd1082u);
    push32(c, 0xd1087u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1087u);
    X86_TICK(c, 9);
    // 0d1087  add esp, 0x10
    X86_AT(c, 0xd1087u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d108a  jmp 0xd0f50
    X86_AT(c, 0xd108au);
    X86_POLL(c, 0xd0f50u); goto L_d0f50;
L_d108f:
    X86_TICK(c, 23);
    // 0d108f  push 4
    X86_AT(c, 0xd108fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1091  movzx ebx, bl
    X86_AT(c, 0xd1091u);
    c.r[3] = g8(c, 3);
    // 0d1094  lea eax, [ebx - 0x41]
    X86_AT(c, 0xd1094u);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0d1097  push dword ptr [eax*4 + 0xb0438]
    X86_AT(c, 0xd1097u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB0438u))); push32(c, v); }
    // 0d109e  push 7
    X86_AT(c, 0xd109eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d10a0  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xd10a0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0d10a3  call 0xba404
    X86_AT(c, 0xd10a3u);
    push32(c, 0xd10a8u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xd10a8u);
    X86_TICK(c, 11);
    // 0d10a8  push 0xb7e0
    X86_AT(c, 0xd10a8u);
    { uint32_t v = 0xB7E0u; push32(c, v); }
    // 0d10ad  push 7
    X86_AT(c, 0xd10adu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d10af  call 0xba428
    X86_AT(c, 0xd10afu);
    push32(c, 0xd10b4u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd10b4u);
    X86_TICK(c, 9);
    // 0d10b4  push 7
    X86_AT(c, 0xd10b4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d10b6  call 0xb6e88
    X86_AT(c, 0xd10b6u);
    push32(c, 0xd10bbu); x86_call_known(c, 0xb6e88u, f_000b6e88); X86_RET(c, 0xd10bbu);
    X86_TICK(c, 11);
    // 0d10bb  mov byte ptr [ebp - 0xd], al
    X86_AT(c, 0xd10bbu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), g8(c, 0));
    // 0d10be  add esp, 0x18
    X86_AT(c, 0xd10beu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d10c1  cmp al, 0x59
    X86_AT(c, 0xd10c1u);
    (void)x86_sub(c, g8(c, 0), 0x59u, 0, 1);
    // 0d10c3  jne 0xd1168
    X86_AT(c, 0xd10c3u);
    if (x86_cc(c, 5)) { goto L_d1168; }
    X86_TICK(c, 32);
    // 0d10c9  mov eax, edi
    X86_AT(c, 0xd10c9u);
    c.r[0] = c.r[7];
    // 0d10cb  lea edx, [eax + eax*2]
    X86_AT(c, 0xd10cbu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d10ce  shl edx, 5
    X86_AT(c, 0xd10ceu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0d10d1  add edx, eax
    X86_AT(c, 0xd10d1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d10d3  lea edx, [eax + edx*2]
    X86_AT(c, 0xd10d3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0d10d6  mov eax, dword ptr [edx + 0xa4ae9]
    X86_AT(c, 0xd10d6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE9u)));
    // 0d10dc  mov edx, dword ptr [ebp - 0x14]
    X86_AT(c, 0xd10dcu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0d10df  add eax, dword ptr [edx*4 + 0xb0438]
    X86_AT(c, 0xd10dfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2] * 4 + 0xB0438u))), 0, 4); }
    // 0d10e6  cmp eax, 0x270f
    X86_AT(c, 0xd10e6u);
    (void)x86_sub(c, c.r[0], 0x270Fu, 0, 4);
    // 0d10eb  jle 0xd1126
    X86_AT(c, 0xd10ebu);
    if (x86_cc(c, 14)) { goto L_d1126; }
    X86_TICK(c, 9);
    // 0d10ed  push 3
    X86_AT(c, 0xd10edu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d10ef  call 0xb607c
    X86_AT(c, 0xd10efu);
    push32(c, 0xd10f4u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd10f4u);
    X86_TICK(c, 11);
    // 0d10f4  push 0xb82c
    X86_AT(c, 0xd10f4u);
    { uint32_t v = 0xB82Cu; push32(c, v); }
    // 0d10f9  push 7
    X86_AT(c, 0xd10f9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d10fb  call 0xba428
    X86_AT(c, 0xd10fbu);
    push32(c, 0xd1100u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1100u);
    X86_TICK(c, 9);
    // 0d1100  push 7
    X86_AT(c, 0xd1100u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1102  call 0xbbb5c
    X86_AT(c, 0xd1102u);
    push32(c, 0xd1107u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1107u);
    X86_TICK(c, 11);
    // 0d1107  push 0
    X86_AT(c, 0xd1107u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1109  push 6
    X86_AT(c, 0xd1109u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d110b  call 0xbba64
    X86_AT(c, 0xd110bu);
    push32(c, 0xd1110u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xd1110u);
    X86_TICK(c, 9);
    // 0d1110  push 1
    X86_AT(c, 0xd1110u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d1112  call 0xb61d4
    X86_AT(c, 0xd1112u);
    push32(c, 0xd1117u); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xd1117u);
    X86_TICK(c, 7);
    // 0d1117  call 0xb8d78
    X86_AT(c, 0xd1117u);
    push32(c, 0xd111cu); x86_call_known(c, 0xb8d78u, f_000b8d78); X86_RET(c, 0xd111cu);
    X86_TICK(c, 11);
    // 0d111c  mov eax, 0xffffffff
    X86_AT(c, 0xd111cu);
    c.r[0] = 0xFFFFFFFFu;
    // 0d1121  add esp, 0x1c
    X86_AT(c, 0xd1121u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d1124  jmp 0xd1182
    X86_AT(c, 0xd1124u);
    goto L_d1182;
L_d1126:
    X86_TICK(c, 44);
    // 0d1126  mov eax, edi
    X86_AT(c, 0xd1126u);
    c.r[0] = c.r[7];
    // 0d1128  lea edx, [eax + eax*2]
    X86_AT(c, 0xd1128u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d112b  shl edx, 5
    X86_AT(c, 0xd112bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0d112e  add edx, eax
    X86_AT(c, 0xd112eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d1130  lea edx, [eax + edx*2]
    X86_AT(c, 0xd1130u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0d1133  movzx ebx, bl
    X86_AT(c, 0xd1133u);
    c.r[3] = g8(c, 3);
    // 0d1136  lea eax, [ebx - 0x41]
    X86_AT(c, 0xd1136u);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0d1139  mov ecx, dword ptr [eax*4 + 0xb0438]
    X86_AT(c, 0xd1139u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB0438u)));
    // 0d1140  add dword ptr [edx + 0xa4ae9], ecx
    X86_AT(c, 0xd1140u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE9u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[1], 0, 4)); }
    // 0d1146  dec dword ptr [edx + eax*4 + 0xa4b1b]
    X86_AT(c, 0xd1146u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + c.r[0] * 4 + 0xA4B1Bu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d114d  push 0xb88c
    X86_AT(c, 0xd114du);
    { uint32_t v = 0xB88Cu; push32(c, v); }
    // 0d1152  push 7
    X86_AT(c, 0xd1152u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1154  call 0xba428
    X86_AT(c, 0xd1154u);
    push32(c, 0xd1159u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1159u);
    X86_TICK(c, 9);
    // 0d1159  push 7
    X86_AT(c, 0xd1159u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d115b  call 0xbbb5c
    X86_AT(c, 0xd115bu);
    push32(c, 0xd1160u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1160u);
    X86_TICK(c, 9);
    // 0d1160  add esp, 0xc
    X86_AT(c, 0xd1160u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d1163  jmp 0xd0f50
    X86_AT(c, 0xd1163u);
    X86_POLL(c, 0xd0f50u); goto L_d0f50;
L_d1168:
    X86_TICK(c, 11);
    // 0d1168  push 0
    X86_AT(c, 0xd1168u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d116a  push 6
    X86_AT(c, 0xd116au);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d116c  call 0xbba64
    X86_AT(c, 0xd116cu);
    push32(c, 0xd1171u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xd1171u);
    X86_TICK(c, 9);
    // 0d1171  push 1
    X86_AT(c, 0xd1171u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d1173  call 0xb61d4
    X86_AT(c, 0xd1173u);
    push32(c, 0xd1178u); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xd1178u);
    X86_TICK(c, 7);
    // 0d1178  call 0xb8d78
    X86_AT(c, 0xd1178u);
    push32(c, 0xd117du); x86_call_known(c, 0xb8d78u, f_000b8d78); X86_RET(c, 0xd117du);
    X86_TICK(c, 4);
    // 0d117d  sub eax, eax
    X86_AT(c, 0xd117du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d117f  add esp, 0xc
    X86_AT(c, 0xd117fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_d1182:
    X86_TICK(c, 28);
    // 0d1182  pop edi
    X86_AT(c, 0xd1182u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d1183  pop esi
    X86_AT(c, 0xd1183u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d1184  pop ebx
    X86_AT(c, 0xd1184u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d1185  leave 
    X86_AT(c, 0xd1185u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d1186  ret 
    X86_AT(c, 0xd1186u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd0e20u, "ran off the end of a function");
}
}
