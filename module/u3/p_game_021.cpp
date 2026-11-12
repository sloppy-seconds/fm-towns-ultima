#include "p_game_funcs.h"
namespace p_game {
void f_000d0f50(X86Cpu& c) {
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
    x86_fault(c, 0xd0f50u, "ran off the end of a function");
}
void f_000d1188(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0d1188  push ebp
    X86_AT(c, 0xd1188u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d1189  mov ebp, esp
    X86_AT(c, 0xd1189u);
    c.r[5] = c.r[4];
    // 0d118b  push ebx
    X86_AT(c, 0xd118bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d118c  push edi
    X86_AT(c, 0xd118cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d118d  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd118du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d1190  push 7
    X86_AT(c, 0xd1190u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1192  call 0xbb6b0
    X86_AT(c, 0xd1192u);
    push32(c, 0xd1197u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd1197u);
    X86_TICK(c, 11);
    // 0d1197  push 0xb8e4
    X86_AT(c, 0xd1197u);
    { uint32_t v = 0xB8E4u; push32(c, v); }
    // 0d119c  push 7
    X86_AT(c, 0xd119cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d119e  call 0xba428
    X86_AT(c, 0xd119eu);
    push32(c, 0xd11a3u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd11a3u);
    X86_TICK(c, 9);
    // 0d11a3  push 7
    X86_AT(c, 0xd11a3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d11a5  call 0xbbb5c
    X86_AT(c, 0xd11a5u);
    push32(c, 0xd11aau); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd11aau);
    X86_TICK(c, 11);
    // 0d11aa  push 0xb918
    X86_AT(c, 0xd11aau);
    { uint32_t v = 0xB918u; push32(c, v); }
    // 0d11af  push 7
    X86_AT(c, 0xd11afu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d11b1  call 0xba428
    X86_AT(c, 0xd11b1u);
    push32(c, 0xd11b6u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd11b6u);
    X86_TICK(c, 9);
    // 0d11b6  push 7
    X86_AT(c, 0xd11b6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d11b8  call 0xbbb5c
    X86_AT(c, 0xd11b8u);
    push32(c, 0xd11bdu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd11bdu);
    X86_TICK(c, 2);
    // 0d11bd  add esp, 0x1c
    X86_AT(c, 0xd11bdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_d11c0:
    X86_TICK(c, 11);
    // 0d11c0  push 0xb988
    X86_AT(c, 0xd11c0u);
    { uint32_t v = 0xB988u; push32(c, v); }
    // 0d11c5  push 7
    X86_AT(c, 0xd11c5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d11c7  call 0xba428
    X86_AT(c, 0xd11c7u);
    push32(c, 0xd11ccu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd11ccu);
    X86_TICK(c, 9);
    // 0d11cc  push 7
    X86_AT(c, 0xd11ccu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d11ce  call 0xbbb5c
    X86_AT(c, 0xd11ceu);
    push32(c, 0xd11d3u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd11d3u);
    X86_TICK(c, 11);
    // 0d11d3  push 0xb9a8
    X86_AT(c, 0xd11d3u);
    { uint32_t v = 0xB9A8u; push32(c, v); }
    // 0d11d8  push 7
    X86_AT(c, 0xd11d8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d11da  call 0xba428
    X86_AT(c, 0xd11dau);
    push32(c, 0xd11dfu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd11dfu);
    X86_TICK(c, 9);
    // 0d11df  push 7
    X86_AT(c, 0xd11dfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d11e1  call 0xbbb5c
    X86_AT(c, 0xd11e1u);
    push32(c, 0xd11e6u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd11e6u);
    X86_TICK(c, 11);
    // 0d11e6  push 0xb9c8
    X86_AT(c, 0xd11e6u);
    { uint32_t v = 0xB9C8u; push32(c, v); }
    // 0d11eb  push 7
    X86_AT(c, 0xd11ebu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d11ed  call 0xba428
    X86_AT(c, 0xd11edu);
    push32(c, 0xd11f2u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd11f2u);
    X86_TICK(c, 9);
    // 0d11f2  push 7
    X86_AT(c, 0xd11f2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d11f4  call 0xbbb5c
    X86_AT(c, 0xd11f4u);
    push32(c, 0xd11f9u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd11f9u);
    X86_TICK(c, 11);
    // 0d11f9  push 0xb9e4
    X86_AT(c, 0xd11f9u);
    { uint32_t v = 0xB9E4u; push32(c, v); }
    // 0d11fe  push 7
    X86_AT(c, 0xd11feu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1200  call 0xba428
    X86_AT(c, 0xd1200u);
    push32(c, 0xd1205u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1205u);
    X86_TICK(c, 2);
    // 0d1205  add esp, 0x2c
    X86_AT(c, 0xd1205u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
L_d1208:
    X86_TICK(c, 9);
    // 0d1208  push 7
    X86_AT(c, 0xd1208u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d120a  call 0xb9514
    X86_AT(c, 0xd120au);
    push32(c, 0xd120fu); x86_call_known(c, 0xb9514u, f_000b9514); X86_RET(c, 0xd120fu);
    X86_TICK(c, 12);
    // 0d120f  xchg ebx, eax
    X86_AT(c, 0xd120fu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d1210  add esp, 4
    X86_AT(c, 0xd1210u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d1213  cmp bl, 1
    X86_AT(c, 0xd1213u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d1216  je 0xd1237
    X86_AT(c, 0xd1216u);
    if (x86_cc(c, 4)) { goto L_d1237; }
    X86_TICK(c, 7);
    // 0d1218  cmp bl, 0x51
    X86_AT(c, 0xd1218u);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0d121b  je 0xd1237
    X86_AT(c, 0xd121bu);
    if (x86_cc(c, 4)) { goto L_d1237; }
    X86_TICK(c, 7);
    // 0d121d  cmp bl, 0x41
    X86_AT(c, 0xd121du);
    (void)x86_sub(c, g8(c, 3), 0x41u, 0, 1);
    // 0d1220  je 0xd1237
    X86_AT(c, 0xd1220u);
    if (x86_cc(c, 4)) { goto L_d1237; }
    X86_TICK(c, 7);
    // 0d1222  cmp bl, 0x42
    X86_AT(c, 0xd1222u);
    (void)x86_sub(c, g8(c, 3), 0x42u, 0, 1);
    // 0d1225  je 0xd1237
    X86_AT(c, 0xd1225u);
    if (x86_cc(c, 4)) { goto L_d1237; }
    X86_TICK(c, 7);
    // 0d1227  and bl, bl
    X86_AT(c, 0xd1227u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d1229  je 0xd1208
    X86_AT(c, 0xd1229u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd1208u); goto L_d1208; }
    X86_TICK(c, 9);
    // 0d122b  push 1
    X86_AT(c, 0xd122bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d122d  call 0xb607c
    X86_AT(c, 0xd122du);
    push32(c, 0xd1232u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd1232u);
    X86_TICK(c, 9);
    // 0d1232  add esp, 4
    X86_AT(c, 0xd1232u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d1235  jmp 0xd1208
    X86_AT(c, 0xd1235u);
    X86_POLL(c, 0xd1208u); goto L_d1208;
L_d1237:
    X86_TICK(c, 7);
    // 0d1237  cmp bl, 1
    X86_AT(c, 0xd1237u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d123a  je 0xd1241
    X86_AT(c, 0xd123au);
    if (x86_cc(c, 4)) { goto L_d1241; }
    X86_TICK(c, 7);
    // 0d123c  cmp bl, 0x51
    X86_AT(c, 0xd123cu);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0d123f  jne 0xd1259
    X86_AT(c, 0xd123fu);
    if (x86_cc(c, 5)) { goto L_d1259; }
L_d1241:
    X86_TICK(c, 11);
    // 0d1241  push 0xba08
    X86_AT(c, 0xd1241u);
    { uint32_t v = 0xBA08u; push32(c, v); }
    // 0d1246  push 7
    X86_AT(c, 0xd1246u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1248  call 0xba428
    X86_AT(c, 0xd1248u);
    push32(c, 0xd124du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd124du);
    X86_TICK(c, 9);
    // 0d124d  push 7
    X86_AT(c, 0xd124du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d124f  call 0xbbb5c
    X86_AT(c, 0xd124fu);
    push32(c, 0xd1254u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1254u);
    X86_TICK(c, 9);
    // 0d1254  add esp, 0xc
    X86_AT(c, 0xd1254u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d1257  jmp 0xd12a9
    X86_AT(c, 0xd1257u);
    goto L_d12a9;
L_d1259:
    X86_TICK(c, 7);
    // 0d1259  cmp bl, 0x41
    X86_AT(c, 0xd1259u);
    (void)x86_sub(c, g8(c, 3), 0x41u, 0, 1);
    // 0d125c  jne 0xd126a
    X86_AT(c, 0xd125cu);
    if (x86_cc(c, 5)) { goto L_d126a; }
    X86_TICK(c, 9);
    // 0d125e  push edi
    X86_AT(c, 0xd125eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d125f  call 0xd12c4
    X86_AT(c, 0xd125fu);
    push32(c, 0xd1264u); x86_call_known(c, 0xd12c4u, f_000d12c4); X86_RET(c, 0xd1264u);
    X86_TICK(c, 9);
    // 0d1264  add esp, 4
    X86_AT(c, 0xd1264u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d1267  inc eax
    X86_AT(c, 0xd1267u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d1268  je 0xd127b
    X86_AT(c, 0xd1268u);
    if (x86_cc(c, 4)) { goto L_d127b; }
L_d126a:
    X86_TICK(c, 7);
    // 0d126a  cmp bl, 0x42
    X86_AT(c, 0xd126au);
    (void)x86_sub(c, g8(c, 3), 0x42u, 0, 1);
    // 0d126d  jne 0xd1287
    X86_AT(c, 0xd126du);
    if (x86_cc(c, 5)) { goto L_d1287; }
    X86_TICK(c, 9);
    // 0d126f  push edi
    X86_AT(c, 0xd126fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d1270  call 0xd15d8
    X86_AT(c, 0xd1270u);
    push32(c, 0xd1275u); x86_call_known(c, 0xd15d8u, f_000d15d8); X86_RET(c, 0xd1275u);
    X86_TICK(c, 9);
    // 0d1275  add esp, 4
    X86_AT(c, 0xd1275u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d1278  inc eax
    X86_AT(c, 0xd1278u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d1279  jne 0xd1287
    X86_AT(c, 0xd1279u);
    if (x86_cc(c, 5)) { goto L_d1287; }
L_d127b:
    X86_TICK(c, 9);
    // 0d127b  push 7
    X86_AT(c, 0xd127bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d127d  call 0xbb6b0
    X86_AT(c, 0xd127du);
    push32(c, 0xd1282u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd1282u);
    X86_TICK(c, 9);
    // 0d1282  add esp, 4
    X86_AT(c, 0xd1282u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d1285  jmp 0xd12a9
    X86_AT(c, 0xd1285u);
    goto L_d12a9;
L_d1287:
    X86_TICK(c, 9);
    // 0d1287  push 7
    X86_AT(c, 0xd1287u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1289  call 0xbb6b0
    X86_AT(c, 0xd1289u);
    push32(c, 0xd128eu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd128eu);
    X86_TICK(c, 11);
    // 0d128e  push 0xba24
    X86_AT(c, 0xd128eu);
    { uint32_t v = 0xBA24u; push32(c, v); }
    // 0d1293  push 7
    X86_AT(c, 0xd1293u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1295  call 0xba428
    X86_AT(c, 0xd1295u);
    push32(c, 0xd129au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd129au);
    X86_TICK(c, 9);
    // 0d129a  push 7
    X86_AT(c, 0xd129au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d129c  call 0xbbb5c
    X86_AT(c, 0xd129cu);
    push32(c, 0xd12a1u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd12a1u);
    X86_TICK(c, 9);
    // 0d12a1  add esp, 0x10
    X86_AT(c, 0xd12a1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d12a4  jmp 0xd11c0
    X86_AT(c, 0xd12a4u);
    X86_POLL(c, 0xd11c0u); goto L_d11c0;
L_d12a9:
    X86_TICK(c, 11);
    // 0d12a9  push 0xba88
    X86_AT(c, 0xd12a9u);
    { uint32_t v = 0xBA88u; push32(c, v); }
    // 0d12ae  push 7
    X86_AT(c, 0xd12aeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d12b0  call 0xba428
    X86_AT(c, 0xd12b0u);
    push32(c, 0xd12b5u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd12b5u);
    X86_TICK(c, 9);
    // 0d12b5  push 7
    X86_AT(c, 0xd12b5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d12b7  call 0xbbb5c
    X86_AT(c, 0xd12b7u);
    push32(c, 0xd12bcu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd12bcu);
    X86_TICK(c, 26);
    // 0d12bc  add esp, 0xc
    X86_AT(c, 0xd12bcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d12bf  pop edi
    X86_AT(c, 0xd12bfu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d12c0  pop ebx
    X86_AT(c, 0xd12c0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d12c1  leave 
    X86_AT(c, 0xd12c1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d12c2  ret 
    X86_AT(c, 0xd12c2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd1188u, "ran off the end of a function");
}
void f_000d12c4(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0d12c4  push ebp
    X86_AT(c, 0xd12c4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d12c5  mov ebp, esp
    X86_AT(c, 0xd12c5u);
    c.r[5] = c.r[4];
    // 0d12c7  sub esp, 0xc
    X86_AT(c, 0xd12c7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0d12ca  push ebx
    X86_AT(c, 0xd12cau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d12cb  push esi
    X86_AT(c, 0xd12cbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d12cc  push edi
    X86_AT(c, 0xd12ccu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d12cd  mov byte ptr [ebp - 0xa], 0
    X86_AT(c, 0xd12cdu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u)), 0x0u);
    // 0d12d1  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xd12d1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
    // 0d12d8  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xd12d8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0d12df  push 7
    X86_AT(c, 0xd12dfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d12e1  call 0xbb6b0
    X86_AT(c, 0xd12e1u);
    push32(c, 0xd12e6u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd12e6u);
    X86_TICK(c, 11);
    // 0d12e6  push 0xbab8
    X86_AT(c, 0xd12e6u);
    { uint32_t v = 0xBAB8u; push32(c, v); }
    // 0d12eb  push 7
    X86_AT(c, 0xd12ebu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d12ed  call 0xba428
    X86_AT(c, 0xd12edu);
    push32(c, 0xd12f2u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd12f2u);
    X86_TICK(c, 9);
    // 0d12f2  push 7
    X86_AT(c, 0xd12f2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d12f4  call 0xbbb5c
    X86_AT(c, 0xd12f4u);
    push32(c, 0xd12f9u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd12f9u);
    X86_TICK(c, 7);
    // 0d12f9  call 0xb8d84
    X86_AT(c, 0xd12f9u);
    push32(c, 0xd12feu); x86_call_known(c, 0xb8d84u, f_000b8d84); X86_RET(c, 0xd12feu);
    X86_TICK(c, 7);
    // 0d12fe  call 0xb6680
    X86_AT(c, 0xd12feu);
    push32(c, 0xd1303u); x86_call_known(c, 0xb6680u, f_000b6680); X86_RET(c, 0xd1303u);
    X86_TICK(c, 7);
    // 0d1303  call 0xbd5d0
    X86_AT(c, 0xd1303u);
    push32(c, 0xd1308u); x86_call_known(c, 0xbd5d0u, f_000bd5d0); X86_RET(c, 0xd1308u);
    X86_TICK(c, 27);
    // 0d1308  push 0xa
    X86_AT(c, 0xd1308u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d130a  push 0xf
    X86_AT(c, 0xd130au);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d130c  push 0xb
    X86_AT(c, 0xd130cu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d130e  push 0x12
    X86_AT(c, 0xd130eu);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0d1310  push 0x26
    X86_AT(c, 0xd1310u);
    { uint32_t v = 0x26u; push32(c, v); }
    // 0d1312  push 0x140
    X86_AT(c, 0xd1312u);
    { uint32_t v = 0x140u; push32(c, v); }
    // 0d1317  push 0x140
    X86_AT(c, 0xd1317u);
    { uint32_t v = 0x140u; push32(c, v); }
    // 0d131c  push 0x3f
    X86_AT(c, 0xd131cu);
    { uint32_t v = 0x3Fu; push32(c, v); }
    // 0d131e  push 0x1a
    X86_AT(c, 0xd131eu);
    { uint32_t v = 0x1Au; push32(c, v); }
    // 0d1320  push 6
    X86_AT(c, 0xd1320u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d1322  call 0xbb5cc
    X86_AT(c, 0xd1322u);
    push32(c, 0xd1327u); x86_call_known(c, 0xbb5ccu, f_000bb5cc); X86_RET(c, 0xd1327u);
    X86_TICK(c, 9);
    // 0d1327  push 6
    X86_AT(c, 0xd1327u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d1329  call 0xbb710
    X86_AT(c, 0xd1329u);
    push32(c, 0xd132eu); x86_call_known(c, 0xbb710u, f_000bb710); X86_RET(c, 0xd132eu);
    X86_TICK(c, 11);
    // 0d132e  add esp, 0x3c
    X86_AT(c, 0xd132eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d1331  push 6
    X86_AT(c, 0xd1331u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d1333  call 0xbb6b0
    X86_AT(c, 0xd1333u);
    push32(c, 0xd1338u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd1338u);
    X86_TICK(c, 13);
    // 0d1338  push 0
    X86_AT(c, 0xd1338u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d133a  push 2
    X86_AT(c, 0xd133au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d133c  push 6
    X86_AT(c, 0xd133cu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d133e  call 0xbc174
    X86_AT(c, 0xd133eu);
    push32(c, 0xd1343u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xd1343u);
    X86_TICK(c, 11);
    // 0d1343  push 0xbacc
    X86_AT(c, 0xd1343u);
    { uint32_t v = 0xBACCu; push32(c, v); }
    // 0d1348  push 6
    X86_AT(c, 0xd1348u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d134a  call 0xba428
    X86_AT(c, 0xd134au);
    push32(c, 0xd134fu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd134fu);
    X86_TICK(c, 13);
    // 0d134f  push 2
    X86_AT(c, 0xd134fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d1351  push 4
    X86_AT(c, 0xd1351u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1353  push 6
    X86_AT(c, 0xd1353u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d1355  call 0xbc174
    X86_AT(c, 0xd1355u);
    push32(c, 0xd135au); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xd135au);
    X86_TICK(c, 11);
    // 0d135a  push 0xbb0c
    X86_AT(c, 0xd135au);
    { uint32_t v = 0xBB0Cu; push32(c, v); }
    // 0d135f  push 6
    X86_AT(c, 0xd135fu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d1361  call 0xba428
    X86_AT(c, 0xd1361u);
    push32(c, 0xd1366u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1366u);
    X86_TICK(c, 14);
    // 0d1366  add esp, 0x2c
    X86_AT(c, 0xd1366u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0d1369  cmp dword ptr [0xa4a66], 0x25
    X86_AT(c, 0xd1369u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A66u))), 0x25u, 0, 4);
    // 0d1370  jne 0xd1383
    X86_AT(c, 0xd1370u);
    if (x86_cc(c, 5)) { goto L_d1383; }
    X86_TICK(c, 11);
    // 0d1372  mov dword ptr [0xa4a96], 0
    X86_AT(c, 0xd1372u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A96u)), 0x0u);
    // 0d137c  mov esi, 6
    X86_AT(c, 0xd137cu);
    c.r[6] = 0x6u;
    // 0d1381  jmp 0xd1388
    X86_AT(c, 0xd1381u);
    goto L_d1388;
L_d1383:
    X86_TICK(c, 2);
    // 0d1383  mov esi, 4
    X86_AT(c, 0xd1383u);
    c.r[6] = 0x4u;
L_d1388:
    X86_TICK(c, 2);
    // 0d1388  sub edi, edi
    X86_AT(c, 0xd1388u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_d138a:
    X86_TICK(c, 7);
    // 0d138a  cmp esi, edi
    X86_AT(c, 0xd138au);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 0d138c  jle 0xd13af
    X86_AT(c, 0xd138cu);
    if (x86_cc(c, 14)) { goto L_d13af; }
    X86_TICK(c, 15);
    // 0d138e  lea eax, [edi + 4]
    X86_AT(c, 0xd138eu);
    c.r[0] = (uint32_t)(c.r[7] + 0x4u);
    // 0d1391  push eax
    X86_AT(c, 0xd1391u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d1392  push 4
    X86_AT(c, 0xd1392u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1394  push 6
    X86_AT(c, 0xd1394u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d1396  call 0xbc174
    X86_AT(c, 0xd1396u);
    push32(c, 0xd139bu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xd139bu);
    X86_TICK(c, 14);
    // 0d139b  push dword ptr [edi*4 + 0xb3134]
    X86_AT(c, 0xd139bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xB3134u))); push32(c, v); }
    // 0d13a2  push 6
    X86_AT(c, 0xd13a2u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d13a4  call 0xba428
    X86_AT(c, 0xd13a4u);
    push32(c, 0xd13a9u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd13a9u);
    X86_TICK(c, 11);
    // 0d13a9  inc edi
    X86_AT(c, 0xd13a9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d13aa  add esp, 0x14
    X86_AT(c, 0xd13aau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d13ad  jmp 0xd138a
    X86_AT(c, 0xd13adu);
    X86_POLL(c, 0xd138au); goto L_d138a;
L_d13af:
    X86_TICK(c, 15);
    // 0d13af  lea eax, [edi + 4]
    X86_AT(c, 0xd13afu);
    c.r[0] = (uint32_t)(c.r[7] + 0x4u);
    // 0d13b2  push eax
    X86_AT(c, 0xd13b2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d13b3  push 4
    X86_AT(c, 0xd13b3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d13b5  push 6
    X86_AT(c, 0xd13b5u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d13b7  call 0xbc174
    X86_AT(c, 0xd13b7u);
    push32(c, 0xd13bcu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xd13bcu);
    X86_TICK(c, 11);
    // 0d13bc  push 0xbb4c
    X86_AT(c, 0xd13bcu);
    { uint32_t v = 0xBB4Cu; push32(c, v); }
    // 0d13c1  push 6
    X86_AT(c, 0xd13c1u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d13c3  call 0xba428
    X86_AT(c, 0xd13c3u);
    push32(c, 0xd13c8u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd13c8u);
    X86_TICK(c, 9);
    // 0d13c8  push 7
    X86_AT(c, 0xd13c8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d13ca  call 0xbb6b0
    X86_AT(c, 0xd13cau);
    push32(c, 0xd13cfu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd13cfu);
    X86_TICK(c, 9);
    // 0d13cf  push 7
    X86_AT(c, 0xd13cfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d13d1  call 0xbbb5c
    X86_AT(c, 0xd13d1u);
    push32(c, 0xd13d6u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd13d6u);
    X86_TICK(c, 11);
    // 0d13d6  push 0xbb64
    X86_AT(c, 0xd13d6u);
    { uint32_t v = 0xBB64u; push32(c, v); }
    // 0d13db  push 7
    X86_AT(c, 0xd13dbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d13dd  call 0xba428
    X86_AT(c, 0xd13ddu);
    push32(c, 0xd13e2u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd13e2u);
    X86_TICK(c, 9);
    // 0d13e2  push 7
    X86_AT(c, 0xd13e2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d13e4  call 0xbbb5c
    X86_AT(c, 0xd13e4u);
    push32(c, 0xd13e9u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd13e9u);
    X86_TICK(c, 2);
    // 0d13e9  add esp, 0x28
    X86_AT(c, 0xd13e9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
L_d13ec:
    X86_TICK(c, 11);
    // 0d13ec  push 0xbb94
    X86_AT(c, 0xd13ecu);
    { uint32_t v = 0xBB94u; push32(c, v); }
    // 0d13f1  push 7
    X86_AT(c, 0xd13f1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d13f3  call 0xbbba4
    X86_AT(c, 0xd13f3u);
    push32(c, 0xd13f8u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xd13f8u);
    X86_TICK(c, 17);
    // 0d13f8  lea eax, [ebp - 8]
    X86_AT(c, 0xd13f8u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0d13fb  push eax
    X86_AT(c, 0xd13fbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d13fc  lea eax, [ebp - 4]
    X86_AT(c, 0xd13fcu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0d13ff  push eax
    X86_AT(c, 0xd13ffu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d1400  push 7
    X86_AT(c, 0xd1400u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1402  call 0xbc428
    X86_AT(c, 0xd1402u);
    push32(c, 0xd1407u); x86_call_known(c, 0xbc428u, f_000bc428); X86_RET(c, 0xd1407u);
    X86_TICK(c, 2);
    // 0d1407  add esp, 0x14
    X86_AT(c, 0xd1407u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_d140a:
    X86_TICK(c, 9);
    // 0d140a  push 7
    X86_AT(c, 0xd140au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d140c  call 0xb9514
    X86_AT(c, 0xd140cu);
    push32(c, 0xd1411u); x86_call_known(c, 0xb9514u, f_000b9514); X86_RET(c, 0xd1411u);
    X86_TICK(c, 12);
    // 0d1411  xchg ebx, eax
    X86_AT(c, 0xd1411u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d1412  add esp, 4
    X86_AT(c, 0xd1412u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d1415  cmp bl, 1
    X86_AT(c, 0xd1415u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d1418  je 0xd143c
    X86_AT(c, 0xd1418u);
    if (x86_cc(c, 4)) { goto L_d143c; }
    X86_TICK(c, 7);
    // 0d141a  cmp bl, 0x51
    X86_AT(c, 0xd141au);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0d141d  je 0xd143c
    X86_AT(c, 0xd141du);
    if (x86_cc(c, 4)) { goto L_d143c; }
    X86_TICK(c, 7);
    // 0d141f  cmp bl, 0x41
    X86_AT(c, 0xd141fu);
    (void)x86_sub(c, g8(c, 3), 0x41u, 0, 1);
    // 0d1422  jbe 0xd142c
    X86_AT(c, 0xd1422u);
    if (x86_cc(c, 6)) { goto L_d142c; }
    X86_TICK(c, 11);
    // 0d1424  mov eax, esi
    X86_AT(c, 0xd1424u);
    c.r[0] = c.r[6];
    // 0d1426  add al, 0x41
    X86_AT(c, 0xd1426u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x41u, 0, 1)); }
    // 0d1428  cmp al, bl
    X86_AT(c, 0xd1428u);
    (void)x86_sub(c, g8(c, 0), g8(c, 3), 0, 1);
    // 0d142a  jae 0xd143c
    X86_AT(c, 0xd142au);
    if (x86_cc(c, 3)) { goto L_d143c; }
L_d142c:
    X86_TICK(c, 7);
    // 0d142c  and bl, bl
    X86_AT(c, 0xd142cu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d142e  je 0xd140a
    X86_AT(c, 0xd142eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd140au); goto L_d140a; }
    X86_TICK(c, 9);
    // 0d1430  push 1
    X86_AT(c, 0xd1430u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d1432  call 0xb607c
    X86_AT(c, 0xd1432u);
    push32(c, 0xd1437u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd1437u);
    X86_TICK(c, 9);
    // 0d1437  add esp, 4
    X86_AT(c, 0xd1437u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d143a  jmp 0xd140a
    X86_AT(c, 0xd143au);
    X86_POLL(c, 0xd140au); goto L_d140a;
L_d143c:
    X86_TICK(c, 9);
    // 0d143c  push 7
    X86_AT(c, 0xd143cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d143e  call 0xbb6b0
    X86_AT(c, 0xd143eu);
    push32(c, 0xd1443u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd1443u);
    X86_TICK(c, 19);
    // 0d1443  push dword ptr [ebp - 8]
    X86_AT(c, 0xd1443u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0d1446  push dword ptr [ebp - 4]
    X86_AT(c, 0xd1446u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0d1449  push 7
    X86_AT(c, 0xd1449u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d144b  call 0xbc174
    X86_AT(c, 0xd144bu);
    push32(c, 0xd1450u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xd1450u);
    X86_TICK(c, 9);
    // 0d1450  add esp, 0x10
    X86_AT(c, 0xd1450u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d1453  cmp bl, 1
    X86_AT(c, 0xd1453u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d1456  je 0xd145d
    X86_AT(c, 0xd1456u);
    if (x86_cc(c, 4)) { goto L_d145d; }
    X86_TICK(c, 7);
    // 0d1458  cmp bl, 0x51
    X86_AT(c, 0xd1458u);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0d145b  jne 0xd1492
    X86_AT(c, 0xd145bu);
    if (x86_cc(c, 5)) { goto L_d1492; }
L_d145d:
    X86_TICK(c, 11);
    // 0d145d  push 0xbb98
    X86_AT(c, 0xd145du);
    { uint32_t v = 0xBB98u; push32(c, v); }
    // 0d1462  push 7
    X86_AT(c, 0xd1462u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1464  call 0xba428
    X86_AT(c, 0xd1464u);
    push32(c, 0xd1469u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1469u);
    X86_TICK(c, 9);
    // 0d1469  push 7
    X86_AT(c, 0xd1469u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d146b  call 0xbbb5c
    X86_AT(c, 0xd146bu);
    push32(c, 0xd1470u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1470u);
    X86_TICK(c, 11);
    // 0d1470  push 0
    X86_AT(c, 0xd1470u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1472  push 6
    X86_AT(c, 0xd1472u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d1474  call 0xbba64
    X86_AT(c, 0xd1474u);
    push32(c, 0xd1479u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xd1479u);
    X86_TICK(c, 9);
    // 0d1479  push 1
    X86_AT(c, 0xd1479u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d147b  call 0xb61d4
    X86_AT(c, 0xd147bu);
    push32(c, 0xd1480u); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xd1480u);
    X86_TICK(c, 7);
    // 0d1480  call 0xb8d78
    X86_AT(c, 0xd1480u);
    push32(c, 0xd1485u); x86_call_known(c, 0xb8d78u, f_000b8d78); X86_RET(c, 0xd1485u);
    X86_TICK(c, 11);
    // 0d1485  mov eax, 0xffffffff
    X86_AT(c, 0xd1485u);
    c.r[0] = 0xFFFFFFFFu;
    // 0d148a  add esp, 0x18
    X86_AT(c, 0xd148au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d148d  jmp 0xd15d2
    X86_AT(c, 0xd148du);
    goto L_d15d2;
L_d1492:
    X86_TICK(c, 19);
    // 0d1492  lea eax, [ebp - 0xa]
    X86_AT(c, 0xd1492u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF6u);
    // 0d1495  push eax
    X86_AT(c, 0xd1495u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d1496  push ebx
    X86_AT(c, 0xd1496u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d1497  lea eax, [esi + 1]
    X86_AT(c, 0xd1497u);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 0d149a  push eax
    X86_AT(c, 0xd149au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d149b  push 0xa74f4
    X86_AT(c, 0xd149bu);
    { uint32_t v = 0xA74F4u; push32(c, v); }
    // 0d14a0  call 0xba1b4
    X86_AT(c, 0xd14a0u);
    push32(c, 0xd14a5u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xd14a5u);
    X86_TICK(c, 11);
    // 0d14a5  push eax
    X86_AT(c, 0xd14a5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d14a6  push 7
    X86_AT(c, 0xd14a6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d14a8  call 0xbbba4
    X86_AT(c, 0xd14a8u);
    push32(c, 0xd14adu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xd14adu);
    X86_TICK(c, 9);
    // 0d14ad  push 7
    X86_AT(c, 0xd14adu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d14af  call 0xbbb5c
    X86_AT(c, 0xd14afu);
    push32(c, 0xd14b4u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd14b4u);
    X86_TICK(c, 32);
    // 0d14b4  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xd14b4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d14b7  lea edx, [eax + eax*2]
    X86_AT(c, 0xd14b7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d14ba  shl edx, 5
    X86_AT(c, 0xd14bau);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0d14bd  add edx, eax
    X86_AT(c, 0xd14bdu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d14bf  lea edx, [eax + edx*2]
    X86_AT(c, 0xd14bfu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0d14c2  movzx ebx, bl
    X86_AT(c, 0xd14c2u);
    c.r[3] = g8(c, 3);
    // 0d14c5  lea eax, [ebx - 0x41]
    X86_AT(c, 0xd14c5u);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0d14c8  add esp, 0x1c
    X86_AT(c, 0xd14c8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d14cb  cmp dword ptr [edx + eax*4 + 0xa4afa], 0x63
    X86_AT(c, 0xd14cbu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[0] * 4 + 0xA4AFAu))), 0x63u, 0, 4);
    // 0d14d3  jl 0xd14f7
    X86_AT(c, 0xd14d3u);
    if (x86_cc(c, 12)) { goto L_d14f7; }
    X86_TICK(c, 9);
    // 0d14d5  push 0
    X86_AT(c, 0xd14d5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d14d7  call 0xb607c
    X86_AT(c, 0xd14d7u);
    push32(c, 0xd14dcu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd14dcu);
    X86_TICK(c, 11);
    // 0d14dc  push 0xbbb4
    X86_AT(c, 0xd14dcu);
    { uint32_t v = 0xBBB4u; push32(c, v); }
    // 0d14e1  push 7
    X86_AT(c, 0xd14e1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d14e3  call 0xba428
    X86_AT(c, 0xd14e3u);
    push32(c, 0xd14e8u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd14e8u);
    X86_TICK(c, 9);
    // 0d14e8  push 7
    X86_AT(c, 0xd14e8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d14ea  call 0xbbb5c
    X86_AT(c, 0xd14eau);
    push32(c, 0xd14efu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd14efu);
    X86_TICK(c, 9);
    // 0d14ef  add esp, 0x10
    X86_AT(c, 0xd14efu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d14f2  jmp 0xd13ec
    X86_AT(c, 0xd14f2u);
    X86_POLL(c, 0xd13ecu); goto L_d13ec;
L_d14f7:
    X86_TICK(c, 21);
    // 0d14f7  push 4
    X86_AT(c, 0xd14f7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d14f9  movzx ebx, bl
    X86_AT(c, 0xd14f9u);
    c.r[3] = g8(c, 3);
    // 0d14fc  lea eax, [ebx - 0x41]
    X86_AT(c, 0xd14fcu);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0d14ff  push dword ptr [eax*4 + 0xb0474]
    X86_AT(c, 0xd14ffu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB0474u))); push32(c, v); }
    // 0d1506  push 7
    X86_AT(c, 0xd1506u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1508  call 0xba404
    X86_AT(c, 0xd1508u);
    push32(c, 0xd150du); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xd150du);
    X86_TICK(c, 11);
    // 0d150d  push 0xbbe0
    X86_AT(c, 0xd150du);
    { uint32_t v = 0xBBE0u; push32(c, v); }
    // 0d1512  push 7
    X86_AT(c, 0xd1512u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1514  call 0xba428
    X86_AT(c, 0xd1514u);
    push32(c, 0xd1519u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1519u);
    X86_TICK(c, 9);
    // 0d1519  push 7
    X86_AT(c, 0xd1519u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d151b  call 0xb6e88
    X86_AT(c, 0xd151bu);
    push32(c, 0xd1520u); x86_call_known(c, 0xb6e88u, f_000b6e88); X86_RET(c, 0xd1520u);
    X86_TICK(c, 11);
    // 0d1520  mov byte ptr [ebp - 9], al
    X86_AT(c, 0xd1520u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), g8(c, 0));
    // 0d1523  add esp, 0x18
    X86_AT(c, 0xd1523u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d1526  cmp al, 0x59
    X86_AT(c, 0xd1526u);
    (void)x86_sub(c, g8(c, 0), 0x59u, 0, 1);
    // 0d1528  jne 0xd15b8
    X86_AT(c, 0xd1528u);
    if (x86_cc(c, 5)) { goto L_d15b8; }
    X86_TICK(c, 22);
    // 0d152e  movzx ebx, bl
    X86_AT(c, 0xd152eu);
    c.r[3] = g8(c, 3);
    // 0d1531  lea eax, [ebx - 0x41]
    X86_AT(c, 0xd1531u);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0d1534  push dword ptr [eax*4 + 0xb0474]
    X86_AT(c, 0xd1534u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB0474u))); push32(c, v); }
    // 0d153b  push dword ptr [ebp + 8]
    X86_AT(c, 0xd153bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0d153e  call 0xcfe88
    X86_AT(c, 0xd153eu);
    push32(c, 0xd1543u); x86_call_known(c, 0xcfe88u, f_000cfe88); X86_RET(c, 0xd1543u);
    X86_TICK(c, 9);
    // 0d1543  add esp, 8
    X86_AT(c, 0xd1543u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d1546  inc eax
    X86_AT(c, 0xd1546u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d1547  jne 0xd1582
    X86_AT(c, 0xd1547u);
    if (x86_cc(c, 5)) { goto L_d1582; }
    X86_TICK(c, 9);
    // 0d1549  push 3
    X86_AT(c, 0xd1549u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d154b  call 0xb607c
    X86_AT(c, 0xd154bu);
    push32(c, 0xd1550u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd1550u);
    X86_TICK(c, 11);
    // 0d1550  push 0xbc24
    X86_AT(c, 0xd1550u);
    { uint32_t v = 0xBC24u; push32(c, v); }
    // 0d1555  push 7
    X86_AT(c, 0xd1555u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1557  call 0xba428
    X86_AT(c, 0xd1557u);
    push32(c, 0xd155cu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd155cu);
    X86_TICK(c, 9);
    // 0d155c  push 7
    X86_AT(c, 0xd155cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d155e  call 0xbbb5c
    X86_AT(c, 0xd155eu);
    push32(c, 0xd1563u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1563u);
    X86_TICK(c, 11);
    // 0d1563  push 0
    X86_AT(c, 0xd1563u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1565  push 6
    X86_AT(c, 0xd1565u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d1567  call 0xbba64
    X86_AT(c, 0xd1567u);
    push32(c, 0xd156cu); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xd156cu);
    X86_TICK(c, 9);
    // 0d156c  push 1
    X86_AT(c, 0xd156cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d156e  call 0xb61d4
    X86_AT(c, 0xd156eu);
    push32(c, 0xd1573u); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xd1573u);
    X86_TICK(c, 7);
    // 0d1573  call 0xb8d78
    X86_AT(c, 0xd1573u);
    push32(c, 0xd1578u); x86_call_known(c, 0xb8d78u, f_000b8d78); X86_RET(c, 0xd1578u);
    X86_TICK(c, 11);
    // 0d1578  mov eax, 0xffffffff
    X86_AT(c, 0xd1578u);
    c.r[0] = 0xFFFFFFFFu;
    // 0d157d  add esp, 0x1c
    X86_AT(c, 0xd157du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d1580  jmp 0xd15d2
    X86_AT(c, 0xd1580u);
    goto L_d15d2;
L_d1582:
    X86_TICK(c, 35);
    // 0d1582  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xd1582u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d1585  lea edx, [eax + eax*2]
    X86_AT(c, 0xd1585u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d1588  shl edx, 5
    X86_AT(c, 0xd1588u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0d158b  add edx, eax
    X86_AT(c, 0xd158bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d158d  lea edx, [eax + edx*2]
    X86_AT(c, 0xd158du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0d1590  movzx ebx, bl
    X86_AT(c, 0xd1590u);
    c.r[3] = g8(c, 3);
    // 0d1593  lea eax, [ebx - 0x41]
    X86_AT(c, 0xd1593u);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0d1596  inc dword ptr [edx + eax*4 + 0xa4afa]
    X86_AT(c, 0xd1596u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + c.r[0] * 4 + 0xA4AFAu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d159d  push 0xbca0
    X86_AT(c, 0xd159du);
    { uint32_t v = 0xBCA0u; push32(c, v); }
    // 0d15a2  push 7
    X86_AT(c, 0xd15a2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d15a4  call 0xba428
    X86_AT(c, 0xd15a4u);
    push32(c, 0xd15a9u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd15a9u);
    X86_TICK(c, 9);
    // 0d15a9  push 7
    X86_AT(c, 0xd15a9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d15ab  call 0xbbb5c
    X86_AT(c, 0xd15abu);
    push32(c, 0xd15b0u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd15b0u);
    X86_TICK(c, 9);
    // 0d15b0  add esp, 0xc
    X86_AT(c, 0xd15b0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d15b3  jmp 0xd13ec
    X86_AT(c, 0xd15b3u);
    X86_POLL(c, 0xd13ecu); goto L_d13ec;
L_d15b8:
    X86_TICK(c, 11);
    // 0d15b8  push 0
    X86_AT(c, 0xd15b8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d15ba  push 6
    X86_AT(c, 0xd15bau);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d15bc  call 0xbba64
    X86_AT(c, 0xd15bcu);
    push32(c, 0xd15c1u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xd15c1u);
    X86_TICK(c, 9);
    // 0d15c1  push 1
    X86_AT(c, 0xd15c1u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d15c3  call 0xb61d4
    X86_AT(c, 0xd15c3u);
    push32(c, 0xd15c8u); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xd15c8u);
    X86_TICK(c, 7);
    // 0d15c8  call 0xb8d78
    X86_AT(c, 0xd15c8u);
    push32(c, 0xd15cdu); x86_call_known(c, 0xb8d78u, f_000b8d78); X86_RET(c, 0xd15cdu);
    X86_TICK(c, 4);
    // 0d15cd  sub eax, eax
    X86_AT(c, 0xd15cdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d15cf  add esp, 0xc
    X86_AT(c, 0xd15cfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_d15d2:
    X86_TICK(c, 28);
    // 0d15d2  pop edi
    X86_AT(c, 0xd15d2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d15d3  pop esi
    X86_AT(c, 0xd15d3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d15d4  pop ebx
    X86_AT(c, 0xd15d4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d15d5  leave 
    X86_AT(c, 0xd15d5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d15d6  ret 
    X86_AT(c, 0xd15d6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd12c4u, "ran off the end of a function");
}
void f_000d13ec(X86Cpu& c) {
L_d13ec:
    X86_TICK(c, 11);
    // 0d13ec  push 0xbb94
    X86_AT(c, 0xd13ecu);
    { uint32_t v = 0xBB94u; push32(c, v); }
    // 0d13f1  push 7
    X86_AT(c, 0xd13f1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d13f3  call 0xbbba4
    X86_AT(c, 0xd13f3u);
    push32(c, 0xd13f8u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xd13f8u);
    X86_TICK(c, 17);
    // 0d13f8  lea eax, [ebp - 8]
    X86_AT(c, 0xd13f8u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0d13fb  push eax
    X86_AT(c, 0xd13fbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d13fc  lea eax, [ebp - 4]
    X86_AT(c, 0xd13fcu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0d13ff  push eax
    X86_AT(c, 0xd13ffu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d1400  push 7
    X86_AT(c, 0xd1400u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1402  call 0xbc428
    X86_AT(c, 0xd1402u);
    push32(c, 0xd1407u); x86_call_known(c, 0xbc428u, f_000bc428); X86_RET(c, 0xd1407u);
    X86_TICK(c, 2);
    // 0d1407  add esp, 0x14
    X86_AT(c, 0xd1407u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_d140a:
    X86_TICK(c, 9);
    // 0d140a  push 7
    X86_AT(c, 0xd140au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d140c  call 0xb9514
    X86_AT(c, 0xd140cu);
    push32(c, 0xd1411u); x86_call_known(c, 0xb9514u, f_000b9514); X86_RET(c, 0xd1411u);
    X86_TICK(c, 12);
    // 0d1411  xchg ebx, eax
    X86_AT(c, 0xd1411u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d1412  add esp, 4
    X86_AT(c, 0xd1412u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d1415  cmp bl, 1
    X86_AT(c, 0xd1415u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d1418  je 0xd143c
    X86_AT(c, 0xd1418u);
    if (x86_cc(c, 4)) { goto L_d143c; }
    X86_TICK(c, 7);
    // 0d141a  cmp bl, 0x51
    X86_AT(c, 0xd141au);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0d141d  je 0xd143c
    X86_AT(c, 0xd141du);
    if (x86_cc(c, 4)) { goto L_d143c; }
    X86_TICK(c, 7);
    // 0d141f  cmp bl, 0x41
    X86_AT(c, 0xd141fu);
    (void)x86_sub(c, g8(c, 3), 0x41u, 0, 1);
    // 0d1422  jbe 0xd142c
    X86_AT(c, 0xd1422u);
    if (x86_cc(c, 6)) { goto L_d142c; }
    X86_TICK(c, 11);
    // 0d1424  mov eax, esi
    X86_AT(c, 0xd1424u);
    c.r[0] = c.r[6];
    // 0d1426  add al, 0x41
    X86_AT(c, 0xd1426u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x41u, 0, 1)); }
    // 0d1428  cmp al, bl
    X86_AT(c, 0xd1428u);
    (void)x86_sub(c, g8(c, 0), g8(c, 3), 0, 1);
    // 0d142a  jae 0xd143c
    X86_AT(c, 0xd142au);
    if (x86_cc(c, 3)) { goto L_d143c; }
L_d142c:
    X86_TICK(c, 7);
    // 0d142c  and bl, bl
    X86_AT(c, 0xd142cu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d142e  je 0xd140a
    X86_AT(c, 0xd142eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd140au); goto L_d140a; }
    X86_TICK(c, 9);
    // 0d1430  push 1
    X86_AT(c, 0xd1430u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d1432  call 0xb607c
    X86_AT(c, 0xd1432u);
    push32(c, 0xd1437u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd1437u);
    X86_TICK(c, 9);
    // 0d1437  add esp, 4
    X86_AT(c, 0xd1437u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d143a  jmp 0xd140a
    X86_AT(c, 0xd143au);
    X86_POLL(c, 0xd140au); goto L_d140a;
L_d143c:
    X86_TICK(c, 9);
    // 0d143c  push 7
    X86_AT(c, 0xd143cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d143e  call 0xbb6b0
    X86_AT(c, 0xd143eu);
    push32(c, 0xd1443u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd1443u);
    X86_TICK(c, 19);
    // 0d1443  push dword ptr [ebp - 8]
    X86_AT(c, 0xd1443u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0d1446  push dword ptr [ebp - 4]
    X86_AT(c, 0xd1446u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0d1449  push 7
    X86_AT(c, 0xd1449u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d144b  call 0xbc174
    X86_AT(c, 0xd144bu);
    push32(c, 0xd1450u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xd1450u);
    X86_TICK(c, 9);
    // 0d1450  add esp, 0x10
    X86_AT(c, 0xd1450u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d1453  cmp bl, 1
    X86_AT(c, 0xd1453u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d1456  je 0xd145d
    X86_AT(c, 0xd1456u);
    if (x86_cc(c, 4)) { goto L_d145d; }
    X86_TICK(c, 7);
    // 0d1458  cmp bl, 0x51
    X86_AT(c, 0xd1458u);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0d145b  jne 0xd1492
    X86_AT(c, 0xd145bu);
    if (x86_cc(c, 5)) { goto L_d1492; }
L_d145d:
    X86_TICK(c, 11);
    // 0d145d  push 0xbb98
    X86_AT(c, 0xd145du);
    { uint32_t v = 0xBB98u; push32(c, v); }
    // 0d1462  push 7
    X86_AT(c, 0xd1462u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1464  call 0xba428
    X86_AT(c, 0xd1464u);
    push32(c, 0xd1469u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1469u);
    X86_TICK(c, 9);
    // 0d1469  push 7
    X86_AT(c, 0xd1469u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d146b  call 0xbbb5c
    X86_AT(c, 0xd146bu);
    push32(c, 0xd1470u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1470u);
    X86_TICK(c, 11);
    // 0d1470  push 0
    X86_AT(c, 0xd1470u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1472  push 6
    X86_AT(c, 0xd1472u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d1474  call 0xbba64
    X86_AT(c, 0xd1474u);
    push32(c, 0xd1479u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xd1479u);
    X86_TICK(c, 9);
    // 0d1479  push 1
    X86_AT(c, 0xd1479u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d147b  call 0xb61d4
    X86_AT(c, 0xd147bu);
    push32(c, 0xd1480u); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xd1480u);
    X86_TICK(c, 7);
    // 0d1480  call 0xb8d78
    X86_AT(c, 0xd1480u);
    push32(c, 0xd1485u); x86_call_known(c, 0xb8d78u, f_000b8d78); X86_RET(c, 0xd1485u);
    X86_TICK(c, 11);
    // 0d1485  mov eax, 0xffffffff
    X86_AT(c, 0xd1485u);
    c.r[0] = 0xFFFFFFFFu;
    // 0d148a  add esp, 0x18
    X86_AT(c, 0xd148au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d148d  jmp 0xd15d2
    X86_AT(c, 0xd148du);
    goto L_d15d2;
L_d1492:
    X86_TICK(c, 19);
    // 0d1492  lea eax, [ebp - 0xa]
    X86_AT(c, 0xd1492u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF6u);
    // 0d1495  push eax
    X86_AT(c, 0xd1495u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d1496  push ebx
    X86_AT(c, 0xd1496u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d1497  lea eax, [esi + 1]
    X86_AT(c, 0xd1497u);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 0d149a  push eax
    X86_AT(c, 0xd149au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d149b  push 0xa74f4
    X86_AT(c, 0xd149bu);
    { uint32_t v = 0xA74F4u; push32(c, v); }
    // 0d14a0  call 0xba1b4
    X86_AT(c, 0xd14a0u);
    push32(c, 0xd14a5u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xd14a5u);
    X86_TICK(c, 11);
    // 0d14a5  push eax
    X86_AT(c, 0xd14a5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d14a6  push 7
    X86_AT(c, 0xd14a6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d14a8  call 0xbbba4
    X86_AT(c, 0xd14a8u);
    push32(c, 0xd14adu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xd14adu);
    X86_TICK(c, 9);
    // 0d14ad  push 7
    X86_AT(c, 0xd14adu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d14af  call 0xbbb5c
    X86_AT(c, 0xd14afu);
    push32(c, 0xd14b4u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd14b4u);
    X86_TICK(c, 32);
    // 0d14b4  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xd14b4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d14b7  lea edx, [eax + eax*2]
    X86_AT(c, 0xd14b7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d14ba  shl edx, 5
    X86_AT(c, 0xd14bau);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0d14bd  add edx, eax
    X86_AT(c, 0xd14bdu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d14bf  lea edx, [eax + edx*2]
    X86_AT(c, 0xd14bfu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0d14c2  movzx ebx, bl
    X86_AT(c, 0xd14c2u);
    c.r[3] = g8(c, 3);
    // 0d14c5  lea eax, [ebx - 0x41]
    X86_AT(c, 0xd14c5u);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0d14c8  add esp, 0x1c
    X86_AT(c, 0xd14c8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d14cb  cmp dword ptr [edx + eax*4 + 0xa4afa], 0x63
    X86_AT(c, 0xd14cbu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[0] * 4 + 0xA4AFAu))), 0x63u, 0, 4);
    // 0d14d3  jl 0xd14f7
    X86_AT(c, 0xd14d3u);
    if (x86_cc(c, 12)) { goto L_d14f7; }
    X86_TICK(c, 9);
    // 0d14d5  push 0
    X86_AT(c, 0xd14d5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d14d7  call 0xb607c
    X86_AT(c, 0xd14d7u);
    push32(c, 0xd14dcu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd14dcu);
    X86_TICK(c, 11);
    // 0d14dc  push 0xbbb4
    X86_AT(c, 0xd14dcu);
    { uint32_t v = 0xBBB4u; push32(c, v); }
    // 0d14e1  push 7
    X86_AT(c, 0xd14e1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d14e3  call 0xba428
    X86_AT(c, 0xd14e3u);
    push32(c, 0xd14e8u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd14e8u);
    X86_TICK(c, 9);
    // 0d14e8  push 7
    X86_AT(c, 0xd14e8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d14ea  call 0xbbb5c
    X86_AT(c, 0xd14eau);
    push32(c, 0xd14efu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd14efu);
    X86_TICK(c, 9);
    // 0d14ef  add esp, 0x10
    X86_AT(c, 0xd14efu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d14f2  jmp 0xd13ec
    X86_AT(c, 0xd14f2u);
    X86_POLL(c, 0xd13ecu); goto L_d13ec;
L_d14f7:
    X86_TICK(c, 21);
    // 0d14f7  push 4
    X86_AT(c, 0xd14f7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d14f9  movzx ebx, bl
    X86_AT(c, 0xd14f9u);
    c.r[3] = g8(c, 3);
    // 0d14fc  lea eax, [ebx - 0x41]
    X86_AT(c, 0xd14fcu);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0d14ff  push dword ptr [eax*4 + 0xb0474]
    X86_AT(c, 0xd14ffu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB0474u))); push32(c, v); }
    // 0d1506  push 7
    X86_AT(c, 0xd1506u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1508  call 0xba404
    X86_AT(c, 0xd1508u);
    push32(c, 0xd150du); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xd150du);
    X86_TICK(c, 11);
    // 0d150d  push 0xbbe0
    X86_AT(c, 0xd150du);
    { uint32_t v = 0xBBE0u; push32(c, v); }
    // 0d1512  push 7
    X86_AT(c, 0xd1512u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1514  call 0xba428
    X86_AT(c, 0xd1514u);
    push32(c, 0xd1519u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1519u);
    X86_TICK(c, 9);
    // 0d1519  push 7
    X86_AT(c, 0xd1519u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d151b  call 0xb6e88
    X86_AT(c, 0xd151bu);
    push32(c, 0xd1520u); x86_call_known(c, 0xb6e88u, f_000b6e88); X86_RET(c, 0xd1520u);
    X86_TICK(c, 11);
    // 0d1520  mov byte ptr [ebp - 9], al
    X86_AT(c, 0xd1520u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), g8(c, 0));
    // 0d1523  add esp, 0x18
    X86_AT(c, 0xd1523u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d1526  cmp al, 0x59
    X86_AT(c, 0xd1526u);
    (void)x86_sub(c, g8(c, 0), 0x59u, 0, 1);
    // 0d1528  jne 0xd15b8
    X86_AT(c, 0xd1528u);
    if (x86_cc(c, 5)) { goto L_d15b8; }
    X86_TICK(c, 22);
    // 0d152e  movzx ebx, bl
    X86_AT(c, 0xd152eu);
    c.r[3] = g8(c, 3);
    // 0d1531  lea eax, [ebx - 0x41]
    X86_AT(c, 0xd1531u);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0d1534  push dword ptr [eax*4 + 0xb0474]
    X86_AT(c, 0xd1534u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB0474u))); push32(c, v); }
    // 0d153b  push dword ptr [ebp + 8]
    X86_AT(c, 0xd153bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0d153e  call 0xcfe88
    X86_AT(c, 0xd153eu);
    push32(c, 0xd1543u); x86_call_known(c, 0xcfe88u, f_000cfe88); X86_RET(c, 0xd1543u);
    X86_TICK(c, 9);
    // 0d1543  add esp, 8
    X86_AT(c, 0xd1543u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d1546  inc eax
    X86_AT(c, 0xd1546u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d1547  jne 0xd1582
    X86_AT(c, 0xd1547u);
    if (x86_cc(c, 5)) { goto L_d1582; }
    X86_TICK(c, 9);
    // 0d1549  push 3
    X86_AT(c, 0xd1549u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d154b  call 0xb607c
    X86_AT(c, 0xd154bu);
    push32(c, 0xd1550u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd1550u);
    X86_TICK(c, 11);
    // 0d1550  push 0xbc24
    X86_AT(c, 0xd1550u);
    { uint32_t v = 0xBC24u; push32(c, v); }
    // 0d1555  push 7
    X86_AT(c, 0xd1555u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1557  call 0xba428
    X86_AT(c, 0xd1557u);
    push32(c, 0xd155cu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd155cu);
    X86_TICK(c, 9);
    // 0d155c  push 7
    X86_AT(c, 0xd155cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d155e  call 0xbbb5c
    X86_AT(c, 0xd155eu);
    push32(c, 0xd1563u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1563u);
    X86_TICK(c, 11);
    // 0d1563  push 0
    X86_AT(c, 0xd1563u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1565  push 6
    X86_AT(c, 0xd1565u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d1567  call 0xbba64
    X86_AT(c, 0xd1567u);
    push32(c, 0xd156cu); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xd156cu);
    X86_TICK(c, 9);
    // 0d156c  push 1
    X86_AT(c, 0xd156cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d156e  call 0xb61d4
    X86_AT(c, 0xd156eu);
    push32(c, 0xd1573u); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xd1573u);
    X86_TICK(c, 7);
    // 0d1573  call 0xb8d78
    X86_AT(c, 0xd1573u);
    push32(c, 0xd1578u); x86_call_known(c, 0xb8d78u, f_000b8d78); X86_RET(c, 0xd1578u);
    X86_TICK(c, 11);
    // 0d1578  mov eax, 0xffffffff
    X86_AT(c, 0xd1578u);
    c.r[0] = 0xFFFFFFFFu;
    // 0d157d  add esp, 0x1c
    X86_AT(c, 0xd157du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d1580  jmp 0xd15d2
    X86_AT(c, 0xd1580u);
    goto L_d15d2;
L_d1582:
    X86_TICK(c, 35);
    // 0d1582  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xd1582u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d1585  lea edx, [eax + eax*2]
    X86_AT(c, 0xd1585u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d1588  shl edx, 5
    X86_AT(c, 0xd1588u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0d158b  add edx, eax
    X86_AT(c, 0xd158bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d158d  lea edx, [eax + edx*2]
    X86_AT(c, 0xd158du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0d1590  movzx ebx, bl
    X86_AT(c, 0xd1590u);
    c.r[3] = g8(c, 3);
    // 0d1593  lea eax, [ebx - 0x41]
    X86_AT(c, 0xd1593u);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0d1596  inc dword ptr [edx + eax*4 + 0xa4afa]
    X86_AT(c, 0xd1596u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + c.r[0] * 4 + 0xA4AFAu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d159d  push 0xbca0
    X86_AT(c, 0xd159du);
    { uint32_t v = 0xBCA0u; push32(c, v); }
    // 0d15a2  push 7
    X86_AT(c, 0xd15a2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d15a4  call 0xba428
    X86_AT(c, 0xd15a4u);
    push32(c, 0xd15a9u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd15a9u);
    X86_TICK(c, 9);
    // 0d15a9  push 7
    X86_AT(c, 0xd15a9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d15ab  call 0xbbb5c
    X86_AT(c, 0xd15abu);
    push32(c, 0xd15b0u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd15b0u);
    X86_TICK(c, 9);
    // 0d15b0  add esp, 0xc
    X86_AT(c, 0xd15b0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d15b3  jmp 0xd13ec
    X86_AT(c, 0xd15b3u);
    X86_POLL(c, 0xd13ecu); goto L_d13ec;
L_d15b8:
    X86_TICK(c, 11);
    // 0d15b8  push 0
    X86_AT(c, 0xd15b8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d15ba  push 6
    X86_AT(c, 0xd15bau);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d15bc  call 0xbba64
    X86_AT(c, 0xd15bcu);
    push32(c, 0xd15c1u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xd15c1u);
    X86_TICK(c, 9);
    // 0d15c1  push 1
    X86_AT(c, 0xd15c1u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d15c3  call 0xb61d4
    X86_AT(c, 0xd15c3u);
    push32(c, 0xd15c8u); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xd15c8u);
    X86_TICK(c, 7);
    // 0d15c8  call 0xb8d78
    X86_AT(c, 0xd15c8u);
    push32(c, 0xd15cdu); x86_call_known(c, 0xb8d78u, f_000b8d78); X86_RET(c, 0xd15cdu);
    X86_TICK(c, 4);
    // 0d15cd  sub eax, eax
    X86_AT(c, 0xd15cdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d15cf  add esp, 0xc
    X86_AT(c, 0xd15cfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_d15d2:
    X86_TICK(c, 28);
    // 0d15d2  pop edi
    X86_AT(c, 0xd15d2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d15d3  pop esi
    X86_AT(c, 0xd15d3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d15d4  pop ebx
    X86_AT(c, 0xd15d4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d15d5  leave 
    X86_AT(c, 0xd15d5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d15d6  ret 
    X86_AT(c, 0xd15d6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd13ecu, "ran off the end of a function");
}
void f_000d15d8(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0d15d8  push ebp
    X86_AT(c, 0xd15d8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d15d9  mov ebp, esp
    X86_AT(c, 0xd15d9u);
    c.r[5] = c.r[4];
    // 0d15db  sub esp, 0x14
    X86_AT(c, 0xd15dbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x14u, 0, 4); }
    // 0d15de  push ebx
    X86_AT(c, 0xd15deu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d15df  push esi
    X86_AT(c, 0xd15dfu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d15e0  push edi
    X86_AT(c, 0xd15e0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d15e1  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd15e1u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d15e4  mov byte ptr [ebp - 0xe], 0
    X86_AT(c, 0xd15e4u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)), 0x0u);
    // 0d15e8  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xd15e8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
    // 0d15ef  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xd15efu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0d15f6  push 7
    X86_AT(c, 0xd15f6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d15f8  call 0xbb6b0
    X86_AT(c, 0xd15f8u);
    push32(c, 0xd15fdu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd15fdu);
    X86_TICK(c, 11);
    // 0d15fd  push 0xbd10
    X86_AT(c, 0xd15fdu);
    { uint32_t v = 0xBD10u; push32(c, v); }
    // 0d1602  push 7
    X86_AT(c, 0xd1602u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1604  call 0xba428
    X86_AT(c, 0xd1604u);
    push32(c, 0xd1609u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1609u);
    X86_TICK(c, 9);
    // 0d1609  push 7
    X86_AT(c, 0xd1609u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d160b  call 0xbbb5c
    X86_AT(c, 0xd160bu);
    push32(c, 0xd1610u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1610u);
    X86_TICK(c, 7);
    // 0d1610  call 0xb8d84
    X86_AT(c, 0xd1610u);
    push32(c, 0xd1615u); x86_call_known(c, 0xb8d84u, f_000b8d84); X86_RET(c, 0xd1615u);
    X86_TICK(c, 7);
    // 0d1615  call 0xb6680
    X86_AT(c, 0xd1615u);
    push32(c, 0xd161au); x86_call_known(c, 0xb6680u, f_000b6680); X86_RET(c, 0xd161au);
    X86_TICK(c, 7);
    // 0d161a  call 0xbd5d0
    X86_AT(c, 0xd161au);
    push32(c, 0xd161fu); x86_call_known(c, 0xbd5d0u, f_000bd5d0); X86_RET(c, 0xd161fu);
    X86_TICK(c, 27);
    // 0d161f  push 0xa
    X86_AT(c, 0xd161fu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d1621  push 0xf
    X86_AT(c, 0xd1621u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d1623  push 0xb
    X86_AT(c, 0xd1623u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d1625  push 0x12
    X86_AT(c, 0xd1625u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0d1627  push 0x26
    X86_AT(c, 0xd1627u);
    { uint32_t v = 0x26u; push32(c, v); }
    // 0d1629  push 0x140
    X86_AT(c, 0xd1629u);
    { uint32_t v = 0x140u; push32(c, v); }
    // 0d162e  push 0x140
    X86_AT(c, 0xd162eu);
    { uint32_t v = 0x140u; push32(c, v); }
    // 0d1633  push 0x3f
    X86_AT(c, 0xd1633u);
    { uint32_t v = 0x3Fu; push32(c, v); }
    // 0d1635  push 0x1a
    X86_AT(c, 0xd1635u);
    { uint32_t v = 0x1Au; push32(c, v); }
    // 0d1637  push 6
    X86_AT(c, 0xd1637u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d1639  call 0xbb5cc
    X86_AT(c, 0xd1639u);
    push32(c, 0xd163eu); x86_call_known(c, 0xbb5ccu, f_000bb5cc); X86_RET(c, 0xd163eu);
    X86_TICK(c, 9);
    // 0d163e  push 6
    X86_AT(c, 0xd163eu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d1640  call 0xbb710
    X86_AT(c, 0xd1640u);
    push32(c, 0xd1645u); x86_call_known(c, 0xbb710u, f_000bb710); X86_RET(c, 0xd1645u);
    X86_TICK(c, 11);
    // 0d1645  add esp, 0x3c
    X86_AT(c, 0xd1645u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d1648  push 6
    X86_AT(c, 0xd1648u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d164a  call 0xbb6b0
    X86_AT(c, 0xd164au);
    push32(c, 0xd164fu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd164fu);
    X86_TICK(c, 13);
    // 0d164f  push 0
    X86_AT(c, 0xd164fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1651  push 2
    X86_AT(c, 0xd1651u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d1653  push 6
    X86_AT(c, 0xd1653u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d1655  call 0xbc174
    X86_AT(c, 0xd1655u);
    push32(c, 0xd165au); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xd165au);
    X86_TICK(c, 11);
    // 0d165a  push 0xbd24
    X86_AT(c, 0xd165au);
    { uint32_t v = 0xBD24u; push32(c, v); }
    // 0d165f  push 6
    X86_AT(c, 0xd165fu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d1661  call 0xba428
    X86_AT(c, 0xd1661u);
    push32(c, 0xd1666u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1666u);
    X86_TICK(c, 13);
    // 0d1666  push 2
    X86_AT(c, 0xd1666u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d1668  push 2
    X86_AT(c, 0xd1668u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d166a  push 6
    X86_AT(c, 0xd166au);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d166c  call 0xbc174
    X86_AT(c, 0xd166cu);
    push32(c, 0xd1671u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xd1671u);
    X86_TICK(c, 11);
    // 0d1671  push 0xbd64
    X86_AT(c, 0xd1671u);
    { uint32_t v = 0xBD64u; push32(c, v); }
    // 0d1676  push 6
    X86_AT(c, 0xd1676u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d1678  call 0xba428
    X86_AT(c, 0xd1678u);
    push32(c, 0xd167du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd167du);
    X86_TICK(c, 14);
    // 0d167d  add esp, 0x2c
    X86_AT(c, 0xd167du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0d1680  cmp dword ptr [0xa4a66], 0x25
    X86_AT(c, 0xd1680u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A66u))), 0x25u, 0, 4);
    // 0d1687  jne 0xd169c
    X86_AT(c, 0xd1687u);
    if (x86_cc(c, 5)) { goto L_d169c; }
    X86_TICK(c, 11);
    // 0d1689  mov dword ptr [0xa4a96], 0
    X86_AT(c, 0xd1689u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A96u)), 0x0u);
    // 0d1693  mov dword ptr [ebp - 0xc], 4
    X86_AT(c, 0xd1693u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x4u);
    // 0d169a  jmp 0xd16a3
    X86_AT(c, 0xd169au);
    goto L_d16a3;
L_d169c:
    X86_TICK(c, 2);
    // 0d169c  mov dword ptr [ebp - 0xc], 6
    X86_AT(c, 0xd169cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x6u);
L_d16a3:
    X86_TICK(c, 2);
    // 0d16a3  sub esi, esi
    X86_AT(c, 0xd16a3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_d16a5:
    X86_TICK(c, 11);
    // 0d16a5  cmp esi, dword ptr [ebp - 0xc]
    X86_AT(c, 0xd16a5u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4);
    // 0d16a8  jge 0xd16cb
    X86_AT(c, 0xd16a8u);
    if (x86_cc(c, 13)) { goto L_d16cb; }
    X86_TICK(c, 15);
    // 0d16aa  lea eax, [esi + 4]
    X86_AT(c, 0xd16aau);
    c.r[0] = (uint32_t)(c.r[6] + 0x4u);
    // 0d16ad  push eax
    X86_AT(c, 0xd16adu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d16ae  push 4
    X86_AT(c, 0xd16aeu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d16b0  push 6
    X86_AT(c, 0xd16b0u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d16b2  call 0xbc174
    X86_AT(c, 0xd16b2u);
    push32(c, 0xd16b7u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xd16b7u);
    X86_TICK(c, 14);
    // 0d16b7  push dword ptr [esi*4 + 0xb314c]
    X86_AT(c, 0xd16b7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xB314Cu))); push32(c, v); }
    // 0d16be  push 6
    X86_AT(c, 0xd16beu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d16c0  call 0xba428
    X86_AT(c, 0xd16c0u);
    push32(c, 0xd16c5u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd16c5u);
    X86_TICK(c, 11);
    // 0d16c5  inc esi
    X86_AT(c, 0xd16c5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d16c6  add esp, 0x14
    X86_AT(c, 0xd16c6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d16c9  jmp 0xd16a5
    X86_AT(c, 0xd16c9u);
    X86_POLL(c, 0xd16a5u); goto L_d16a5;
L_d16cb:
    X86_TICK(c, 15);
    // 0d16cb  lea eax, [esi + 4]
    X86_AT(c, 0xd16cbu);
    c.r[0] = (uint32_t)(c.r[6] + 0x4u);
    // 0d16ce  push eax
    X86_AT(c, 0xd16ceu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d16cf  push 4
    X86_AT(c, 0xd16cfu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d16d1  push 6
    X86_AT(c, 0xd16d1u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d16d3  call 0xbc174
    X86_AT(c, 0xd16d3u);
    push32(c, 0xd16d8u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xd16d8u);
    X86_TICK(c, 11);
    // 0d16d8  push 0xbda8
    X86_AT(c, 0xd16d8u);
    { uint32_t v = 0xBDA8u; push32(c, v); }
    // 0d16dd  push 6
    X86_AT(c, 0xd16ddu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d16df  call 0xba428
    X86_AT(c, 0xd16dfu);
    push32(c, 0xd16e4u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd16e4u);
    X86_TICK(c, 9);
    // 0d16e4  push 7
    X86_AT(c, 0xd16e4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d16e6  call 0xbb6b0
    X86_AT(c, 0xd16e6u);
    push32(c, 0xd16ebu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd16ebu);
    X86_TICK(c, 9);
    // 0d16eb  push 7
    X86_AT(c, 0xd16ebu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d16ed  call 0xbbb5c
    X86_AT(c, 0xd16edu);
    push32(c, 0xd16f2u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd16f2u);
    X86_TICK(c, 11);
    // 0d16f2  push 0xbdc0
    X86_AT(c, 0xd16f2u);
    { uint32_t v = 0xBDC0u; push32(c, v); }
    // 0d16f7  push 7
    X86_AT(c, 0xd16f7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d16f9  call 0xba428
    X86_AT(c, 0xd16f9u);
    push32(c, 0xd16feu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd16feu);
    X86_TICK(c, 9);
    // 0d16fe  push 7
    X86_AT(c, 0xd16feu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1700  call 0xbbb5c
    X86_AT(c, 0xd1700u);
    push32(c, 0xd1705u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1705u);
    X86_TICK(c, 2);
    // 0d1705  add esp, 0x28
    X86_AT(c, 0xd1705u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
L_d1708:
    X86_TICK(c, 11);
    // 0d1708  push 0xbdec
    X86_AT(c, 0xd1708u);
    { uint32_t v = 0xBDECu; push32(c, v); }
    // 0d170d  push 7
    X86_AT(c, 0xd170du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d170f  call 0xbbba4
    X86_AT(c, 0xd170fu);
    push32(c, 0xd1714u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xd1714u);
    X86_TICK(c, 17);
    // 0d1714  lea eax, [ebp - 8]
    X86_AT(c, 0xd1714u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0d1717  push eax
    X86_AT(c, 0xd1717u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d1718  lea eax, [ebp - 4]
    X86_AT(c, 0xd1718u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0d171b  push eax
    X86_AT(c, 0xd171bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d171c  push 7
    X86_AT(c, 0xd171cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d171e  call 0xbc428
    X86_AT(c, 0xd171eu);
    push32(c, 0xd1723u); x86_call_known(c, 0xbc428u, f_000bc428); X86_RET(c, 0xd1723u);
    X86_TICK(c, 2);
    // 0d1723  add esp, 0x14
    X86_AT(c, 0xd1723u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_d1726:
    X86_TICK(c, 9);
    // 0d1726  push 7
    X86_AT(c, 0xd1726u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1728  call 0xb9514
    X86_AT(c, 0xd1728u);
    push32(c, 0xd172du); x86_call_known(c, 0xb9514u, f_000b9514); X86_RET(c, 0xd172du);
    X86_TICK(c, 12);
    // 0d172d  xchg ebx, eax
    X86_AT(c, 0xd172du);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d172e  add esp, 4
    X86_AT(c, 0xd172eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d1731  cmp bl, 1
    X86_AT(c, 0xd1731u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d1734  je 0xd1759
    X86_AT(c, 0xd1734u);
    if (x86_cc(c, 4)) { goto L_d1759; }
    X86_TICK(c, 7);
    // 0d1736  cmp bl, 0x51
    X86_AT(c, 0xd1736u);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0d1739  je 0xd1759
    X86_AT(c, 0xd1739u);
    if (x86_cc(c, 4)) { goto L_d1759; }
    X86_TICK(c, 7);
    // 0d173b  cmp bl, 0x41
    X86_AT(c, 0xd173bu);
    (void)x86_sub(c, g8(c, 3), 0x41u, 0, 1);
    // 0d173e  jbe 0xd1749
    X86_AT(c, 0xd173eu);
    if (x86_cc(c, 6)) { goto L_d1749; }
    X86_TICK(c, 13);
    // 0d1740  mov al, byte ptr [ebp - 0xc]
    X86_AT(c, 0xd1740u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))));
    // 0d1743  add al, 0x41
    X86_AT(c, 0xd1743u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x41u, 0, 1)); }
    // 0d1745  cmp al, bl
    X86_AT(c, 0xd1745u);
    (void)x86_sub(c, g8(c, 0), g8(c, 3), 0, 1);
    // 0d1747  jae 0xd1759
    X86_AT(c, 0xd1747u);
    if (x86_cc(c, 3)) { goto L_d1759; }
L_d1749:
    X86_TICK(c, 7);
    // 0d1749  and bl, bl
    X86_AT(c, 0xd1749u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d174b  je 0xd1726
    X86_AT(c, 0xd174bu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd1726u); goto L_d1726; }
    X86_TICK(c, 9);
    // 0d174d  push 1
    X86_AT(c, 0xd174du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d174f  call 0xb607c
    X86_AT(c, 0xd174fu);
    push32(c, 0xd1754u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd1754u);
    X86_TICK(c, 9);
    // 0d1754  add esp, 4
    X86_AT(c, 0xd1754u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d1757  jmp 0xd1726
    X86_AT(c, 0xd1757u);
    X86_POLL(c, 0xd1726u); goto L_d1726;
L_d1759:
    X86_TICK(c, 9);
    // 0d1759  push 7
    X86_AT(c, 0xd1759u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d175b  call 0xbb6b0
    X86_AT(c, 0xd175bu);
    push32(c, 0xd1760u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd1760u);
    X86_TICK(c, 19);
    // 0d1760  push dword ptr [ebp - 8]
    X86_AT(c, 0xd1760u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0d1763  push dword ptr [ebp - 4]
    X86_AT(c, 0xd1763u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0d1766  push 7
    X86_AT(c, 0xd1766u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1768  call 0xbc174
    X86_AT(c, 0xd1768u);
    push32(c, 0xd176du); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xd176du);
    X86_TICK(c, 9);
    // 0d176d  add esp, 0x10
    X86_AT(c, 0xd176du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d1770  cmp bl, 1
    X86_AT(c, 0xd1770u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d1773  je 0xd177a
    X86_AT(c, 0xd1773u);
    if (x86_cc(c, 4)) { goto L_d177a; }
    X86_TICK(c, 7);
    // 0d1775  cmp bl, 0x51
    X86_AT(c, 0xd1775u);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0d1778  jne 0xd17af
    X86_AT(c, 0xd1778u);
    if (x86_cc(c, 5)) { goto L_d17af; }
L_d177a:
    X86_TICK(c, 11);
    // 0d177a  push 0xbdf0
    X86_AT(c, 0xd177au);
    { uint32_t v = 0xBDF0u; push32(c, v); }
    // 0d177f  push 7
    X86_AT(c, 0xd177fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1781  call 0xba428
    X86_AT(c, 0xd1781u);
    push32(c, 0xd1786u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1786u);
    X86_TICK(c, 9);
    // 0d1786  push 7
    X86_AT(c, 0xd1786u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1788  call 0xbbb5c
    X86_AT(c, 0xd1788u);
    push32(c, 0xd178du); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd178du);
    X86_TICK(c, 11);
    // 0d178d  push 0
    X86_AT(c, 0xd178du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d178f  push 6
    X86_AT(c, 0xd178fu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d1791  call 0xbba64
    X86_AT(c, 0xd1791u);
    push32(c, 0xd1796u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xd1796u);
    X86_TICK(c, 7);
    // 0d1796  call 0xb8d78
    X86_AT(c, 0xd1796u);
    push32(c, 0xd179bu); x86_call_known(c, 0xb8d78u, f_000b8d78); X86_RET(c, 0xd179bu);
    X86_TICK(c, 9);
    // 0d179b  push 1
    X86_AT(c, 0xd179bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d179d  call 0xb61d4
    X86_AT(c, 0xd179du);
    push32(c, 0xd17a2u); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xd17a2u);
    X86_TICK(c, 11);
    // 0d17a2  mov eax, 0xffffffff
    X86_AT(c, 0xd17a2u);
    c.r[0] = 0xFFFFFFFFu;
    // 0d17a7  add esp, 0x18
    X86_AT(c, 0xd17a7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d17aa  jmp 0xd193a
    X86_AT(c, 0xd17aau);
    goto L_d193a;
L_d17af:
    X86_TICK(c, 23);
    // 0d17af  lea eax, [ebp - 0xe]
    X86_AT(c, 0xd17afu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF2u);
    // 0d17b2  push eax
    X86_AT(c, 0xd17b2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d17b3  push ebx
    X86_AT(c, 0xd17b3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d17b4  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xd17b4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0d17b7  inc eax
    X86_AT(c, 0xd17b7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d17b8  push eax
    X86_AT(c, 0xd17b8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d17b9  push 0xa74f4
    X86_AT(c, 0xd17b9u);
    { uint32_t v = 0xA74F4u; push32(c, v); }
    // 0d17be  call 0xba1b4
    X86_AT(c, 0xd17beu);
    push32(c, 0xd17c3u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xd17c3u);
    X86_TICK(c, 11);
    // 0d17c3  push eax
    X86_AT(c, 0xd17c3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d17c4  push 7
    X86_AT(c, 0xd17c4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d17c6  call 0xbbba4
    X86_AT(c, 0xd17c6u);
    push32(c, 0xd17cbu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xd17cbu);
    X86_TICK(c, 9);
    // 0d17cb  push 7
    X86_AT(c, 0xd17cbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d17cd  call 0xbbb5c
    X86_AT(c, 0xd17cdu);
    push32(c, 0xd17d2u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd17d2u);
    X86_TICK(c, 30);
    // 0d17d2  mov eax, edi
    X86_AT(c, 0xd17d2u);
    c.r[0] = c.r[7];
    // 0d17d4  lea edx, [eax + eax*2]
    X86_AT(c, 0xd17d4u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d17d7  shl edx, 5
    X86_AT(c, 0xd17d7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0d17da  add edx, eax
    X86_AT(c, 0xd17dau);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d17dc  lea edx, [eax + edx*2]
    X86_AT(c, 0xd17dcu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0d17df  movzx ebx, bl
    X86_AT(c, 0xd17dfu);
    c.r[3] = g8(c, 3);
    // 0d17e2  lea eax, [ebx - 0x41]
    X86_AT(c, 0xd17e2u);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0d17e5  add esp, 0x1c
    X86_AT(c, 0xd17e5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d17e8  cmp dword ptr [edx + eax*4 + 0xa4afa], 1
    X86_AT(c, 0xd17e8u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[0] * 4 + 0xA4AFAu))), 0x1u, 0, 4);
    // 0d17f0  jge 0xd1800
    X86_AT(c, 0xd17f0u);
    if (x86_cc(c, 13)) { goto L_d1800; }
    X86_TICK(c, 9);
    // 0d17f2  push 0
    X86_AT(c, 0xd17f2u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d17f4  call 0xb607c
    X86_AT(c, 0xd17f4u);
    push32(c, 0xd17f9u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd17f9u);
    X86_TICK(c, 9);
    // 0d17f9  push 0xbe0c
    X86_AT(c, 0xd17f9u);
    { uint32_t v = 0xBE0Cu; push32(c, v); }
    // 0d17fe  jmp 0xd1831
    X86_AT(c, 0xd17feu);
    goto L_d1831;
L_d1800:
    X86_TICK(c, 28);
    // 0d1800  mov eax, edi
    X86_AT(c, 0xd1800u);
    c.r[0] = c.r[7];
    // 0d1802  lea edx, [eax + eax*2]
    X86_AT(c, 0xd1802u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d1805  shl edx, 5
    X86_AT(c, 0xd1805u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0d1808  add edx, eax
    X86_AT(c, 0xd1808u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d180a  lea edx, [eax + edx*2]
    X86_AT(c, 0xd180au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0d180d  movzx ebx, bl
    X86_AT(c, 0xd180du);
    c.r[3] = g8(c, 3);
    // 0d1810  lea eax, [ebx - 0x41]
    X86_AT(c, 0xd1810u);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0d1813  cmp dword ptr [edx + eax*4 + 0xa4afa], 1
    X86_AT(c, 0xd1813u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[0] * 4 + 0xA4AFAu))), 0x1u, 0, 4);
    // 0d181b  jne 0xd1847
    X86_AT(c, 0xd181bu);
    if (x86_cc(c, 5)) { goto L_d1847; }
    X86_TICK(c, 11);
    // 0d181d  cmp bl, byte ptr [edx + 0xa4af9]
    X86_AT(c, 0xd181du);
    (void)x86_sub(c, g8(c, 3), rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AF9u))), 0, 1);
    // 0d1823  jne 0xd1847
    X86_AT(c, 0xd1823u);
    if (x86_cc(c, 5)) { goto L_d1847; }
    X86_TICK(c, 9);
    // 0d1825  push 1
    X86_AT(c, 0xd1825u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d1827  call 0xb607c
    X86_AT(c, 0xd1827u);
    push32(c, 0xd182cu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd182cu);
    X86_TICK(c, 2);
    // 0d182c  push 0xbe5c
    X86_AT(c, 0xd182cu);
    { uint32_t v = 0xBE5Cu; push32(c, v); }
L_d1831:
    X86_TICK(c, 9);
    // 0d1831  push 7
    X86_AT(c, 0xd1831u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1833  call 0xba428
    X86_AT(c, 0xd1833u);
    push32(c, 0xd1838u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1838u);
    X86_TICK(c, 9);
    // 0d1838  push 7
    X86_AT(c, 0xd1838u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d183a  call 0xbbb5c
    X86_AT(c, 0xd183au);
    push32(c, 0xd183fu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd183fu);
    X86_TICK(c, 9);
    // 0d183f  add esp, 0x10
    X86_AT(c, 0xd183fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d1842  jmp 0xd1708
    X86_AT(c, 0xd1842u);
    X86_POLL(c, 0xd1708u); goto L_d1708;
L_d1847:
    X86_TICK(c, 23);
    // 0d1847  push 4
    X86_AT(c, 0xd1847u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1849  movzx ebx, bl
    X86_AT(c, 0xd1849u);
    c.r[3] = g8(c, 3);
    // 0d184c  lea eax, [ebx - 0x41]
    X86_AT(c, 0xd184cu);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0d184f  push dword ptr [eax*4 + 0xb0490]
    X86_AT(c, 0xd184fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB0490u))); push32(c, v); }
    // 0d1856  push 7
    X86_AT(c, 0xd1856u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1858  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xd1858u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0d185b  call 0xba404
    X86_AT(c, 0xd185bu);
    push32(c, 0xd1860u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xd1860u);
    X86_TICK(c, 11);
    // 0d1860  push 0xbe98
    X86_AT(c, 0xd1860u);
    { uint32_t v = 0xBE98u; push32(c, v); }
    // 0d1865  push 7
    X86_AT(c, 0xd1865u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1867  call 0xba428
    X86_AT(c, 0xd1867u);
    push32(c, 0xd186cu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd186cu);
    X86_TICK(c, 9);
    // 0d186c  push 7
    X86_AT(c, 0xd186cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d186e  call 0xb6e88
    X86_AT(c, 0xd186eu);
    push32(c, 0xd1873u); x86_call_known(c, 0xb6e88u, f_000b6e88); X86_RET(c, 0xd1873u);
    X86_TICK(c, 11);
    // 0d1873  mov byte ptr [ebp - 0xd], al
    X86_AT(c, 0xd1873u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), g8(c, 0));
    // 0d1876  add esp, 0x18
    X86_AT(c, 0xd1876u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d1879  cmp al, 0x59
    X86_AT(c, 0xd1879u);
    (void)x86_sub(c, g8(c, 0), 0x59u, 0, 1);
    // 0d187b  jne 0xd1920
    X86_AT(c, 0xd187bu);
    if (x86_cc(c, 5)) { goto L_d1920; }
    X86_TICK(c, 32);
    // 0d1881  mov eax, edi
    X86_AT(c, 0xd1881u);
    c.r[0] = c.r[7];
    // 0d1883  lea edx, [eax + eax*2]
    X86_AT(c, 0xd1883u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d1886  shl edx, 5
    X86_AT(c, 0xd1886u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0d1889  add edx, eax
    X86_AT(c, 0xd1889u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d188b  lea edx, [eax + edx*2]
    X86_AT(c, 0xd188bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0d188e  mov eax, dword ptr [edx + 0xa4ae9]
    X86_AT(c, 0xd188eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE9u)));
    // 0d1894  mov edx, dword ptr [ebp - 0x14]
    X86_AT(c, 0xd1894u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0d1897  add eax, dword ptr [edx*4 + 0xb0490]
    X86_AT(c, 0xd1897u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2] * 4 + 0xB0490u))), 0, 4); }
    // 0d189e  cmp eax, 0x270f
    X86_AT(c, 0xd189eu);
    (void)x86_sub(c, c.r[0], 0x270Fu, 0, 4);
    // 0d18a3  jle 0xd18de
    X86_AT(c, 0xd18a3u);
    if (x86_cc(c, 14)) { goto L_d18de; }
    X86_TICK(c, 9);
    // 0d18a5  push 3
    X86_AT(c, 0xd18a5u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d18a7  call 0xb607c
    X86_AT(c, 0xd18a7u);
    push32(c, 0xd18acu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd18acu);
    X86_TICK(c, 11);
    // 0d18ac  push 0xbee4
    X86_AT(c, 0xd18acu);
    { uint32_t v = 0xBEE4u; push32(c, v); }
    // 0d18b1  push 7
    X86_AT(c, 0xd18b1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d18b3  call 0xba428
    X86_AT(c, 0xd18b3u);
    push32(c, 0xd18b8u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd18b8u);
    X86_TICK(c, 9);
    // 0d18b8  push 7
    X86_AT(c, 0xd18b8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d18ba  call 0xbbb5c
    X86_AT(c, 0xd18bau);
    push32(c, 0xd18bfu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd18bfu);
    X86_TICK(c, 11);
    // 0d18bf  push 0
    X86_AT(c, 0xd18bfu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d18c1  push 6
    X86_AT(c, 0xd18c1u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d18c3  call 0xbba64
    X86_AT(c, 0xd18c3u);
    push32(c, 0xd18c8u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xd18c8u);
    X86_TICK(c, 7);
    // 0d18c8  call 0xb8d78
    X86_AT(c, 0xd18c8u);
    push32(c, 0xd18cdu); x86_call_known(c, 0xb8d78u, f_000b8d78); X86_RET(c, 0xd18cdu);
    X86_TICK(c, 9);
    // 0d18cd  push 1
    X86_AT(c, 0xd18cdu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d18cf  call 0xb61d4
    X86_AT(c, 0xd18cfu);
    push32(c, 0xd18d4u); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xd18d4u);
    X86_TICK(c, 11);
    // 0d18d4  mov eax, 0xffffffff
    X86_AT(c, 0xd18d4u);
    c.r[0] = 0xFFFFFFFFu;
    // 0d18d9  add esp, 0x1c
    X86_AT(c, 0xd18d9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d18dc  jmp 0xd193a
    X86_AT(c, 0xd18dcu);
    goto L_d193a;
L_d18de:
    X86_TICK(c, 44);
    // 0d18de  mov eax, edi
    X86_AT(c, 0xd18deu);
    c.r[0] = c.r[7];
    // 0d18e0  lea edx, [eax + eax*2]
    X86_AT(c, 0xd18e0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d18e3  shl edx, 5
    X86_AT(c, 0xd18e3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0d18e6  add edx, eax
    X86_AT(c, 0xd18e6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d18e8  lea edx, [eax + edx*2]
    X86_AT(c, 0xd18e8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0d18eb  movzx ebx, bl
    X86_AT(c, 0xd18ebu);
    c.r[3] = g8(c, 3);
    // 0d18ee  lea eax, [ebx - 0x41]
    X86_AT(c, 0xd18eeu);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0d18f1  mov ecx, dword ptr [eax*4 + 0xb0490]
    X86_AT(c, 0xd18f1u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB0490u)));
    // 0d18f8  add dword ptr [edx + 0xa4ae9], ecx
    X86_AT(c, 0xd18f8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE9u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[1], 0, 4)); }
    // 0d18fe  dec dword ptr [edx + eax*4 + 0xa4afa]
    X86_AT(c, 0xd18feu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + c.r[0] * 4 + 0xA4AFAu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d1905  push 0xbf44
    X86_AT(c, 0xd1905u);
    { uint32_t v = 0xBF44u; push32(c, v); }
    // 0d190a  push 7
    X86_AT(c, 0xd190au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d190c  call 0xba428
    X86_AT(c, 0xd190cu);
    push32(c, 0xd1911u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1911u);
    X86_TICK(c, 9);
    // 0d1911  push 7
    X86_AT(c, 0xd1911u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1913  call 0xbbb5c
    X86_AT(c, 0xd1913u);
    push32(c, 0xd1918u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1918u);
    X86_TICK(c, 9);
    // 0d1918  add esp, 0xc
    X86_AT(c, 0xd1918u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d191b  jmp 0xd1708
    X86_AT(c, 0xd191bu);
    X86_POLL(c, 0xd1708u); goto L_d1708;
L_d1920:
    X86_TICK(c, 11);
    // 0d1920  push 0
    X86_AT(c, 0xd1920u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1922  push 6
    X86_AT(c, 0xd1922u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d1924  call 0xbba64
    X86_AT(c, 0xd1924u);
    push32(c, 0xd1929u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xd1929u);
    X86_TICK(c, 9);
    // 0d1929  push 1
    X86_AT(c, 0xd1929u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d192b  call 0xb61d4
    X86_AT(c, 0xd192bu);
    push32(c, 0xd1930u); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xd1930u);
    X86_TICK(c, 7);
    // 0d1930  call 0xb8d78
    X86_AT(c, 0xd1930u);
    push32(c, 0xd1935u); x86_call_known(c, 0xb8d78u, f_000b8d78); X86_RET(c, 0xd1935u);
    X86_TICK(c, 4);
    // 0d1935  sub eax, eax
    X86_AT(c, 0xd1935u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d1937  add esp, 0xc
    X86_AT(c, 0xd1937u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_d193a:
    X86_TICK(c, 28);
    // 0d193a  pop edi
    X86_AT(c, 0xd193au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d193b  pop esi
    X86_AT(c, 0xd193bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d193c  pop ebx
    X86_AT(c, 0xd193cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d193d  leave 
    X86_AT(c, 0xd193du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d193e  ret 
    X86_AT(c, 0xd193eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd15d8u, "ran off the end of a function");
}
void f_000d1708(X86Cpu& c) {
L_d1708:
    X86_TICK(c, 11);
    // 0d1708  push 0xbdec
    X86_AT(c, 0xd1708u);
    { uint32_t v = 0xBDECu; push32(c, v); }
    // 0d170d  push 7
    X86_AT(c, 0xd170du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d170f  call 0xbbba4
    X86_AT(c, 0xd170fu);
    push32(c, 0xd1714u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xd1714u);
    X86_TICK(c, 17);
    // 0d1714  lea eax, [ebp - 8]
    X86_AT(c, 0xd1714u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0d1717  push eax
    X86_AT(c, 0xd1717u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d1718  lea eax, [ebp - 4]
    X86_AT(c, 0xd1718u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0d171b  push eax
    X86_AT(c, 0xd171bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d171c  push 7
    X86_AT(c, 0xd171cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d171e  call 0xbc428
    X86_AT(c, 0xd171eu);
    push32(c, 0xd1723u); x86_call_known(c, 0xbc428u, f_000bc428); X86_RET(c, 0xd1723u);
    X86_TICK(c, 2);
    // 0d1723  add esp, 0x14
    X86_AT(c, 0xd1723u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_d1726:
    X86_TICK(c, 9);
    // 0d1726  push 7
    X86_AT(c, 0xd1726u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1728  call 0xb9514
    X86_AT(c, 0xd1728u);
    push32(c, 0xd172du); x86_call_known(c, 0xb9514u, f_000b9514); X86_RET(c, 0xd172du);
    X86_TICK(c, 12);
    // 0d172d  xchg ebx, eax
    X86_AT(c, 0xd172du);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d172e  add esp, 4
    X86_AT(c, 0xd172eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d1731  cmp bl, 1
    X86_AT(c, 0xd1731u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d1734  je 0xd1759
    X86_AT(c, 0xd1734u);
    if (x86_cc(c, 4)) { goto L_d1759; }
    X86_TICK(c, 7);
    // 0d1736  cmp bl, 0x51
    X86_AT(c, 0xd1736u);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0d1739  je 0xd1759
    X86_AT(c, 0xd1739u);
    if (x86_cc(c, 4)) { goto L_d1759; }
    X86_TICK(c, 7);
    // 0d173b  cmp bl, 0x41
    X86_AT(c, 0xd173bu);
    (void)x86_sub(c, g8(c, 3), 0x41u, 0, 1);
    // 0d173e  jbe 0xd1749
    X86_AT(c, 0xd173eu);
    if (x86_cc(c, 6)) { goto L_d1749; }
    X86_TICK(c, 13);
    // 0d1740  mov al, byte ptr [ebp - 0xc]
    X86_AT(c, 0xd1740u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))));
    // 0d1743  add al, 0x41
    X86_AT(c, 0xd1743u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x41u, 0, 1)); }
    // 0d1745  cmp al, bl
    X86_AT(c, 0xd1745u);
    (void)x86_sub(c, g8(c, 0), g8(c, 3), 0, 1);
    // 0d1747  jae 0xd1759
    X86_AT(c, 0xd1747u);
    if (x86_cc(c, 3)) { goto L_d1759; }
L_d1749:
    X86_TICK(c, 7);
    // 0d1749  and bl, bl
    X86_AT(c, 0xd1749u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d174b  je 0xd1726
    X86_AT(c, 0xd174bu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd1726u); goto L_d1726; }
    X86_TICK(c, 9);
    // 0d174d  push 1
    X86_AT(c, 0xd174du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d174f  call 0xb607c
    X86_AT(c, 0xd174fu);
    push32(c, 0xd1754u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd1754u);
    X86_TICK(c, 9);
    // 0d1754  add esp, 4
    X86_AT(c, 0xd1754u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d1757  jmp 0xd1726
    X86_AT(c, 0xd1757u);
    X86_POLL(c, 0xd1726u); goto L_d1726;
L_d1759:
    X86_TICK(c, 9);
    // 0d1759  push 7
    X86_AT(c, 0xd1759u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d175b  call 0xbb6b0
    X86_AT(c, 0xd175bu);
    push32(c, 0xd1760u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd1760u);
    X86_TICK(c, 19);
    // 0d1760  push dword ptr [ebp - 8]
    X86_AT(c, 0xd1760u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0d1763  push dword ptr [ebp - 4]
    X86_AT(c, 0xd1763u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0d1766  push 7
    X86_AT(c, 0xd1766u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1768  call 0xbc174
    X86_AT(c, 0xd1768u);
    push32(c, 0xd176du); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xd176du);
    X86_TICK(c, 9);
    // 0d176d  add esp, 0x10
    X86_AT(c, 0xd176du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d1770  cmp bl, 1
    X86_AT(c, 0xd1770u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d1773  je 0xd177a
    X86_AT(c, 0xd1773u);
    if (x86_cc(c, 4)) { goto L_d177a; }
    X86_TICK(c, 7);
    // 0d1775  cmp bl, 0x51
    X86_AT(c, 0xd1775u);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0d1778  jne 0xd17af
    X86_AT(c, 0xd1778u);
    if (x86_cc(c, 5)) { goto L_d17af; }
L_d177a:
    X86_TICK(c, 11);
    // 0d177a  push 0xbdf0
    X86_AT(c, 0xd177au);
    { uint32_t v = 0xBDF0u; push32(c, v); }
    // 0d177f  push 7
    X86_AT(c, 0xd177fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1781  call 0xba428
    X86_AT(c, 0xd1781u);
    push32(c, 0xd1786u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1786u);
    X86_TICK(c, 9);
    // 0d1786  push 7
    X86_AT(c, 0xd1786u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1788  call 0xbbb5c
    X86_AT(c, 0xd1788u);
    push32(c, 0xd178du); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd178du);
    X86_TICK(c, 11);
    // 0d178d  push 0
    X86_AT(c, 0xd178du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d178f  push 6
    X86_AT(c, 0xd178fu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d1791  call 0xbba64
    X86_AT(c, 0xd1791u);
    push32(c, 0xd1796u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xd1796u);
    X86_TICK(c, 7);
    // 0d1796  call 0xb8d78
    X86_AT(c, 0xd1796u);
    push32(c, 0xd179bu); x86_call_known(c, 0xb8d78u, f_000b8d78); X86_RET(c, 0xd179bu);
    X86_TICK(c, 9);
    // 0d179b  push 1
    X86_AT(c, 0xd179bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d179d  call 0xb61d4
    X86_AT(c, 0xd179du);
    push32(c, 0xd17a2u); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xd17a2u);
    X86_TICK(c, 11);
    // 0d17a2  mov eax, 0xffffffff
    X86_AT(c, 0xd17a2u);
    c.r[0] = 0xFFFFFFFFu;
    // 0d17a7  add esp, 0x18
    X86_AT(c, 0xd17a7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d17aa  jmp 0xd193a
    X86_AT(c, 0xd17aau);
    goto L_d193a;
L_d17af:
    X86_TICK(c, 23);
    // 0d17af  lea eax, [ebp - 0xe]
    X86_AT(c, 0xd17afu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF2u);
    // 0d17b2  push eax
    X86_AT(c, 0xd17b2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d17b3  push ebx
    X86_AT(c, 0xd17b3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d17b4  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xd17b4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0d17b7  inc eax
    X86_AT(c, 0xd17b7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d17b8  push eax
    X86_AT(c, 0xd17b8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d17b9  push 0xa74f4
    X86_AT(c, 0xd17b9u);
    { uint32_t v = 0xA74F4u; push32(c, v); }
    // 0d17be  call 0xba1b4
    X86_AT(c, 0xd17beu);
    push32(c, 0xd17c3u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xd17c3u);
    X86_TICK(c, 11);
    // 0d17c3  push eax
    X86_AT(c, 0xd17c3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d17c4  push 7
    X86_AT(c, 0xd17c4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d17c6  call 0xbbba4
    X86_AT(c, 0xd17c6u);
    push32(c, 0xd17cbu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xd17cbu);
    X86_TICK(c, 9);
    // 0d17cb  push 7
    X86_AT(c, 0xd17cbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d17cd  call 0xbbb5c
    X86_AT(c, 0xd17cdu);
    push32(c, 0xd17d2u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd17d2u);
    X86_TICK(c, 30);
    // 0d17d2  mov eax, edi
    X86_AT(c, 0xd17d2u);
    c.r[0] = c.r[7];
    // 0d17d4  lea edx, [eax + eax*2]
    X86_AT(c, 0xd17d4u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d17d7  shl edx, 5
    X86_AT(c, 0xd17d7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0d17da  add edx, eax
    X86_AT(c, 0xd17dau);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d17dc  lea edx, [eax + edx*2]
    X86_AT(c, 0xd17dcu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0d17df  movzx ebx, bl
    X86_AT(c, 0xd17dfu);
    c.r[3] = g8(c, 3);
    // 0d17e2  lea eax, [ebx - 0x41]
    X86_AT(c, 0xd17e2u);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0d17e5  add esp, 0x1c
    X86_AT(c, 0xd17e5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d17e8  cmp dword ptr [edx + eax*4 + 0xa4afa], 1
    X86_AT(c, 0xd17e8u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[0] * 4 + 0xA4AFAu))), 0x1u, 0, 4);
    // 0d17f0  jge 0xd1800
    X86_AT(c, 0xd17f0u);
    if (x86_cc(c, 13)) { goto L_d1800; }
    X86_TICK(c, 9);
    // 0d17f2  push 0
    X86_AT(c, 0xd17f2u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d17f4  call 0xb607c
    X86_AT(c, 0xd17f4u);
    push32(c, 0xd17f9u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd17f9u);
    X86_TICK(c, 9);
    // 0d17f9  push 0xbe0c
    X86_AT(c, 0xd17f9u);
    { uint32_t v = 0xBE0Cu; push32(c, v); }
    // 0d17fe  jmp 0xd1831
    X86_AT(c, 0xd17feu);
    goto L_d1831;
L_d1800:
    X86_TICK(c, 28);
    // 0d1800  mov eax, edi
    X86_AT(c, 0xd1800u);
    c.r[0] = c.r[7];
    // 0d1802  lea edx, [eax + eax*2]
    X86_AT(c, 0xd1802u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d1805  shl edx, 5
    X86_AT(c, 0xd1805u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0d1808  add edx, eax
    X86_AT(c, 0xd1808u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d180a  lea edx, [eax + edx*2]
    X86_AT(c, 0xd180au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0d180d  movzx ebx, bl
    X86_AT(c, 0xd180du);
    c.r[3] = g8(c, 3);
    // 0d1810  lea eax, [ebx - 0x41]
    X86_AT(c, 0xd1810u);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0d1813  cmp dword ptr [edx + eax*4 + 0xa4afa], 1
    X86_AT(c, 0xd1813u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[0] * 4 + 0xA4AFAu))), 0x1u, 0, 4);
    // 0d181b  jne 0xd1847
    X86_AT(c, 0xd181bu);
    if (x86_cc(c, 5)) { goto L_d1847; }
    X86_TICK(c, 11);
    // 0d181d  cmp bl, byte ptr [edx + 0xa4af9]
    X86_AT(c, 0xd181du);
    (void)x86_sub(c, g8(c, 3), rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AF9u))), 0, 1);
    // 0d1823  jne 0xd1847
    X86_AT(c, 0xd1823u);
    if (x86_cc(c, 5)) { goto L_d1847; }
    X86_TICK(c, 9);
    // 0d1825  push 1
    X86_AT(c, 0xd1825u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d1827  call 0xb607c
    X86_AT(c, 0xd1827u);
    push32(c, 0xd182cu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd182cu);
    X86_TICK(c, 2);
    // 0d182c  push 0xbe5c
    X86_AT(c, 0xd182cu);
    { uint32_t v = 0xBE5Cu; push32(c, v); }
L_d1831:
    X86_TICK(c, 9);
    // 0d1831  push 7
    X86_AT(c, 0xd1831u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1833  call 0xba428
    X86_AT(c, 0xd1833u);
    push32(c, 0xd1838u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1838u);
    X86_TICK(c, 9);
    // 0d1838  push 7
    X86_AT(c, 0xd1838u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d183a  call 0xbbb5c
    X86_AT(c, 0xd183au);
    push32(c, 0xd183fu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd183fu);
    X86_TICK(c, 9);
    // 0d183f  add esp, 0x10
    X86_AT(c, 0xd183fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d1842  jmp 0xd1708
    X86_AT(c, 0xd1842u);
    X86_POLL(c, 0xd1708u); goto L_d1708;
L_d1847:
    X86_TICK(c, 23);
    // 0d1847  push 4
    X86_AT(c, 0xd1847u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1849  movzx ebx, bl
    X86_AT(c, 0xd1849u);
    c.r[3] = g8(c, 3);
    // 0d184c  lea eax, [ebx - 0x41]
    X86_AT(c, 0xd184cu);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0d184f  push dword ptr [eax*4 + 0xb0490]
    X86_AT(c, 0xd184fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB0490u))); push32(c, v); }
    // 0d1856  push 7
    X86_AT(c, 0xd1856u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1858  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xd1858u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0d185b  call 0xba404
    X86_AT(c, 0xd185bu);
    push32(c, 0xd1860u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xd1860u);
    X86_TICK(c, 11);
    // 0d1860  push 0xbe98
    X86_AT(c, 0xd1860u);
    { uint32_t v = 0xBE98u; push32(c, v); }
    // 0d1865  push 7
    X86_AT(c, 0xd1865u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1867  call 0xba428
    X86_AT(c, 0xd1867u);
    push32(c, 0xd186cu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd186cu);
    X86_TICK(c, 9);
    // 0d186c  push 7
    X86_AT(c, 0xd186cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d186e  call 0xb6e88
    X86_AT(c, 0xd186eu);
    push32(c, 0xd1873u); x86_call_known(c, 0xb6e88u, f_000b6e88); X86_RET(c, 0xd1873u);
    X86_TICK(c, 11);
    // 0d1873  mov byte ptr [ebp - 0xd], al
    X86_AT(c, 0xd1873u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), g8(c, 0));
    // 0d1876  add esp, 0x18
    X86_AT(c, 0xd1876u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d1879  cmp al, 0x59
    X86_AT(c, 0xd1879u);
    (void)x86_sub(c, g8(c, 0), 0x59u, 0, 1);
    // 0d187b  jne 0xd1920
    X86_AT(c, 0xd187bu);
    if (x86_cc(c, 5)) { goto L_d1920; }
    X86_TICK(c, 32);
    // 0d1881  mov eax, edi
    X86_AT(c, 0xd1881u);
    c.r[0] = c.r[7];
    // 0d1883  lea edx, [eax + eax*2]
    X86_AT(c, 0xd1883u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d1886  shl edx, 5
    X86_AT(c, 0xd1886u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0d1889  add edx, eax
    X86_AT(c, 0xd1889u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d188b  lea edx, [eax + edx*2]
    X86_AT(c, 0xd188bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0d188e  mov eax, dword ptr [edx + 0xa4ae9]
    X86_AT(c, 0xd188eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE9u)));
    // 0d1894  mov edx, dword ptr [ebp - 0x14]
    X86_AT(c, 0xd1894u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0d1897  add eax, dword ptr [edx*4 + 0xb0490]
    X86_AT(c, 0xd1897u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2] * 4 + 0xB0490u))), 0, 4); }
    // 0d189e  cmp eax, 0x270f
    X86_AT(c, 0xd189eu);
    (void)x86_sub(c, c.r[0], 0x270Fu, 0, 4);
    // 0d18a3  jle 0xd18de
    X86_AT(c, 0xd18a3u);
    if (x86_cc(c, 14)) { goto L_d18de; }
    X86_TICK(c, 9);
    // 0d18a5  push 3
    X86_AT(c, 0xd18a5u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d18a7  call 0xb607c
    X86_AT(c, 0xd18a7u);
    push32(c, 0xd18acu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd18acu);
    X86_TICK(c, 11);
    // 0d18ac  push 0xbee4
    X86_AT(c, 0xd18acu);
    { uint32_t v = 0xBEE4u; push32(c, v); }
    // 0d18b1  push 7
    X86_AT(c, 0xd18b1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d18b3  call 0xba428
    X86_AT(c, 0xd18b3u);
    push32(c, 0xd18b8u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd18b8u);
    X86_TICK(c, 9);
    // 0d18b8  push 7
    X86_AT(c, 0xd18b8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d18ba  call 0xbbb5c
    X86_AT(c, 0xd18bau);
    push32(c, 0xd18bfu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd18bfu);
    X86_TICK(c, 11);
    // 0d18bf  push 0
    X86_AT(c, 0xd18bfu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d18c1  push 6
    X86_AT(c, 0xd18c1u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d18c3  call 0xbba64
    X86_AT(c, 0xd18c3u);
    push32(c, 0xd18c8u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xd18c8u);
    X86_TICK(c, 7);
    // 0d18c8  call 0xb8d78
    X86_AT(c, 0xd18c8u);
    push32(c, 0xd18cdu); x86_call_known(c, 0xb8d78u, f_000b8d78); X86_RET(c, 0xd18cdu);
    X86_TICK(c, 9);
    // 0d18cd  push 1
    X86_AT(c, 0xd18cdu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d18cf  call 0xb61d4
    X86_AT(c, 0xd18cfu);
    push32(c, 0xd18d4u); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xd18d4u);
    X86_TICK(c, 11);
    // 0d18d4  mov eax, 0xffffffff
    X86_AT(c, 0xd18d4u);
    c.r[0] = 0xFFFFFFFFu;
    // 0d18d9  add esp, 0x1c
    X86_AT(c, 0xd18d9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d18dc  jmp 0xd193a
    X86_AT(c, 0xd18dcu);
    goto L_d193a;
L_d18de:
    X86_TICK(c, 44);
    // 0d18de  mov eax, edi
    X86_AT(c, 0xd18deu);
    c.r[0] = c.r[7];
    // 0d18e0  lea edx, [eax + eax*2]
    X86_AT(c, 0xd18e0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d18e3  shl edx, 5
    X86_AT(c, 0xd18e3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0d18e6  add edx, eax
    X86_AT(c, 0xd18e6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d18e8  lea edx, [eax + edx*2]
    X86_AT(c, 0xd18e8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0d18eb  movzx ebx, bl
    X86_AT(c, 0xd18ebu);
    c.r[3] = g8(c, 3);
    // 0d18ee  lea eax, [ebx - 0x41]
    X86_AT(c, 0xd18eeu);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFBFu);
    // 0d18f1  mov ecx, dword ptr [eax*4 + 0xb0490]
    X86_AT(c, 0xd18f1u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB0490u)));
    // 0d18f8  add dword ptr [edx + 0xa4ae9], ecx
    X86_AT(c, 0xd18f8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE9u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[1], 0, 4)); }
    // 0d18fe  dec dword ptr [edx + eax*4 + 0xa4afa]
    X86_AT(c, 0xd18feu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + c.r[0] * 4 + 0xA4AFAu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d1905  push 0xbf44
    X86_AT(c, 0xd1905u);
    { uint32_t v = 0xBF44u; push32(c, v); }
    // 0d190a  push 7
    X86_AT(c, 0xd190au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d190c  call 0xba428
    X86_AT(c, 0xd190cu);
    push32(c, 0xd1911u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1911u);
    X86_TICK(c, 9);
    // 0d1911  push 7
    X86_AT(c, 0xd1911u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1913  call 0xbbb5c
    X86_AT(c, 0xd1913u);
    push32(c, 0xd1918u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1918u);
    X86_TICK(c, 9);
    // 0d1918  add esp, 0xc
    X86_AT(c, 0xd1918u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d191b  jmp 0xd1708
    X86_AT(c, 0xd191bu);
    X86_POLL(c, 0xd1708u); goto L_d1708;
L_d1920:
    X86_TICK(c, 11);
    // 0d1920  push 0
    X86_AT(c, 0xd1920u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1922  push 6
    X86_AT(c, 0xd1922u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d1924  call 0xbba64
    X86_AT(c, 0xd1924u);
    push32(c, 0xd1929u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xd1929u);
    X86_TICK(c, 9);
    // 0d1929  push 1
    X86_AT(c, 0xd1929u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d192b  call 0xb61d4
    X86_AT(c, 0xd192bu);
    push32(c, 0xd1930u); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xd1930u);
    X86_TICK(c, 7);
    // 0d1930  call 0xb8d78
    X86_AT(c, 0xd1930u);
    push32(c, 0xd1935u); x86_call_known(c, 0xb8d78u, f_000b8d78); X86_RET(c, 0xd1935u);
    X86_TICK(c, 4);
    // 0d1935  sub eax, eax
    X86_AT(c, 0xd1935u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d1937  add esp, 0xc
    X86_AT(c, 0xd1937u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_d193a:
    X86_TICK(c, 28);
    // 0d193a  pop edi
    X86_AT(c, 0xd193au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d193b  pop esi
    X86_AT(c, 0xd193bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d193c  pop ebx
    X86_AT(c, 0xd193cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d193d  leave 
    X86_AT(c, 0xd193du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d193e  ret 
    X86_AT(c, 0xd193eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd1708u, "ran off the end of a function");
}
void f_000d1940(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0d1940  push ebp
    X86_AT(c, 0xd1940u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d1941  mov ebp, esp
    X86_AT(c, 0xd1941u);
    c.r[5] = c.r[4];
    // 0d1943  push ebx
    X86_AT(c, 0xd1943u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d1944  push esi
    X86_AT(c, 0xd1944u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d1945  push edi
    X86_AT(c, 0xd1945u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d1946  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd1946u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d1949  push 7
    X86_AT(c, 0xd1949u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d194b  call 0xbb6b0
    X86_AT(c, 0xd194bu);
    push32(c, 0xd1950u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd1950u);
    X86_TICK(c, 11);
    // 0d1950  push 0xbf9c
    X86_AT(c, 0xd1950u);
    { uint32_t v = 0xBF9Cu; push32(c, v); }
    // 0d1955  push 7
    X86_AT(c, 0xd1955u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1957  call 0xba428
    X86_AT(c, 0xd1957u);
    push32(c, 0xd195cu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd195cu);
    X86_TICK(c, 9);
    // 0d195c  push 7
    X86_AT(c, 0xd195cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d195e  call 0xbbb5c
    X86_AT(c, 0xd195eu);
    push32(c, 0xd1963u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1963u);
    X86_TICK(c, 11);
    // 0d1963  push 0xbfd4
    X86_AT(c, 0xd1963u);
    { uint32_t v = 0xBFD4u; push32(c, v); }
    // 0d1968  push 7
    X86_AT(c, 0xd1968u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d196a  call 0xba428
    X86_AT(c, 0xd196au);
    push32(c, 0xd196fu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd196fu);
    X86_TICK(c, 9);
    // 0d196f  push 7
    X86_AT(c, 0xd196fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1971  call 0xbbb5c
    X86_AT(c, 0xd1971u);
    push32(c, 0xd1976u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1976u);
    X86_TICK(c, 9);
    // 0d1976  push 7
    X86_AT(c, 0xd1976u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1978  call 0xc9890
    X86_AT(c, 0xd1978u);
    push32(c, 0xd197du); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xd197du);
    X86_TICK(c, 2);
    // 0d197d  add esp, 0x20
    X86_AT(c, 0xd197du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_d1980:
    X86_TICK(c, 11);
    // 0d1980  push 0xc004
    X86_AT(c, 0xd1980u);
    { uint32_t v = 0xC004u; push32(c, v); }
    // 0d1985  push 7
    X86_AT(c, 0xd1985u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1987  call 0xba428
    X86_AT(c, 0xd1987u);
    push32(c, 0xd198cu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd198cu);
    X86_TICK(c, 9);
    // 0d198c  push 7
    X86_AT(c, 0xd198cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d198e  call 0xbbb5c
    X86_AT(c, 0xd198eu);
    push32(c, 0xd1993u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1993u);
    X86_TICK(c, 11);
    // 0d1993  push 0xc040
    X86_AT(c, 0xd1993u);
    { uint32_t v = 0xC040u; push32(c, v); }
    // 0d1998  push 7
    X86_AT(c, 0xd1998u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d199a  call 0xba428
    X86_AT(c, 0xd199au);
    push32(c, 0xd199fu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd199fu);
    X86_TICK(c, 9);
    // 0d199f  push 7
    X86_AT(c, 0xd199fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d19a1  call 0xbbb5c
    X86_AT(c, 0xd19a1u);
    push32(c, 0xd19a6u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd19a6u);
    X86_TICK(c, 11);
    // 0d19a6  push 0xc07c
    X86_AT(c, 0xd19a6u);
    { uint32_t v = 0xC07Cu; push32(c, v); }
    // 0d19ab  push 7
    X86_AT(c, 0xd19abu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d19ad  call 0xba428
    X86_AT(c, 0xd19adu);
    push32(c, 0xd19b2u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd19b2u);
    X86_TICK(c, 9);
    // 0d19b2  push 7
    X86_AT(c, 0xd19b2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d19b4  call 0xbbb5c
    X86_AT(c, 0xd19b4u);
    push32(c, 0xd19b9u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd19b9u);
    X86_TICK(c, 11);
    // 0d19b9  push 0xc0b8
    X86_AT(c, 0xd19b9u);
    { uint32_t v = 0xC0B8u; push32(c, v); }
    // 0d19be  push 7
    X86_AT(c, 0xd19beu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d19c0  call 0xba428
    X86_AT(c, 0xd19c0u);
    push32(c, 0xd19c5u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd19c5u);
    X86_TICK(c, 9);
    // 0d19c5  push 7
    X86_AT(c, 0xd19c5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d19c7  call 0xbbb5c
    X86_AT(c, 0xd19c7u);
    push32(c, 0xd19ccu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd19ccu);
    X86_TICK(c, 11);
    // 0d19cc  push 0xc0f0
    X86_AT(c, 0xd19ccu);
    { uint32_t v = 0xC0F0u; push32(c, v); }
    // 0d19d1  push 7
    X86_AT(c, 0xd19d1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d19d3  call 0xba428
    X86_AT(c, 0xd19d3u);
    push32(c, 0xd19d8u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd19d8u);
    X86_TICK(c, 9);
    // 0d19d8  push 7
    X86_AT(c, 0xd19d8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d19da  call 0xbbb5c
    X86_AT(c, 0xd19dau);
    push32(c, 0xd19dfu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd19dfu);
    X86_TICK(c, 13);
    // 0d19df  add esp, 0x3c
    X86_AT(c, 0xd19dfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d19e2  push 0xc10c
    X86_AT(c, 0xd19e2u);
    { uint32_t v = 0xC10Cu; push32(c, v); }
    // 0d19e7  push 7
    X86_AT(c, 0xd19e7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d19e9  call 0xba428
    X86_AT(c, 0xd19e9u);
    push32(c, 0xd19eeu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd19eeu);
    X86_TICK(c, 2);
    // 0d19ee  add esp, 8
    X86_AT(c, 0xd19eeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d19f1:
    X86_TICK(c, 9);
    // 0d19f1  push 7
    X86_AT(c, 0xd19f1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d19f3  call 0xb9514
    X86_AT(c, 0xd19f3u);
    push32(c, 0xd19f8u); x86_call_known(c, 0xb9514u, f_000b9514); X86_RET(c, 0xd19f8u);
    X86_TICK(c, 12);
    // 0d19f8  xchg ebx, eax
    X86_AT(c, 0xd19f8u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d19f9  add esp, 4
    X86_AT(c, 0xd19f9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d19fc  cmp bl, 1
    X86_AT(c, 0xd19fcu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d19ff  je 0xd1a2a
    X86_AT(c, 0xd19ffu);
    if (x86_cc(c, 4)) { goto L_d1a2a; }
    X86_TICK(c, 7);
    // 0d1a01  cmp bl, 0x51
    X86_AT(c, 0xd1a01u);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0d1a04  je 0xd1a2a
    X86_AT(c, 0xd1a04u);
    if (x86_cc(c, 4)) { goto L_d1a2a; }
    X86_TICK(c, 7);
    // 0d1a06  cmp bl, 0x41
    X86_AT(c, 0xd1a06u);
    (void)x86_sub(c, g8(c, 3), 0x41u, 0, 1);
    // 0d1a09  je 0xd1a2a
    X86_AT(c, 0xd1a09u);
    if (x86_cc(c, 4)) { goto L_d1a2a; }
    X86_TICK(c, 7);
    // 0d1a0b  cmp bl, 0x42
    X86_AT(c, 0xd1a0bu);
    (void)x86_sub(c, g8(c, 3), 0x42u, 0, 1);
    // 0d1a0e  je 0xd1a2a
    X86_AT(c, 0xd1a0eu);
    if (x86_cc(c, 4)) { goto L_d1a2a; }
    X86_TICK(c, 7);
    // 0d1a10  cmp bl, 0x43
    X86_AT(c, 0xd1a10u);
    (void)x86_sub(c, g8(c, 3), 0x43u, 0, 1);
    // 0d1a13  je 0xd1a2a
    X86_AT(c, 0xd1a13u);
    if (x86_cc(c, 4)) { goto L_d1a2a; }
    X86_TICK(c, 7);
    // 0d1a15  cmp bl, 0x44
    X86_AT(c, 0xd1a15u);
    (void)x86_sub(c, g8(c, 3), 0x44u, 0, 1);
    // 0d1a18  je 0xd1a2a
    X86_AT(c, 0xd1a18u);
    if (x86_cc(c, 4)) { goto L_d1a2a; }
    X86_TICK(c, 7);
    // 0d1a1a  and bl, bl
    X86_AT(c, 0xd1a1au);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d1a1c  je 0xd19f1
    X86_AT(c, 0xd1a1cu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd19f1u); goto L_d19f1; }
    X86_TICK(c, 9);
    // 0d1a1e  push 1
    X86_AT(c, 0xd1a1eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d1a20  call 0xb607c
    X86_AT(c, 0xd1a20u);
    push32(c, 0xd1a25u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd1a25u);
    X86_TICK(c, 9);
    // 0d1a25  add esp, 4
    X86_AT(c, 0xd1a25u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d1a28  jmp 0xd19f1
    X86_AT(c, 0xd1a28u);
    X86_POLL(c, 0xd19f1u); goto L_d19f1;
L_d1a2a:
    X86_TICK(c, 9);
    // 0d1a2a  push 7
    X86_AT(c, 0xd1a2au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1a2c  call 0xbbb5c
    X86_AT(c, 0xd1a2cu);
    push32(c, 0xd1a31u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1a31u);
    X86_TICK(c, 9);
    // 0d1a31  add esp, 4
    X86_AT(c, 0xd1a31u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d1a34  cmp bl, 1
    X86_AT(c, 0xd1a34u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d1a37  je 0xd1a3e
    X86_AT(c, 0xd1a37u);
    if (x86_cc(c, 4)) { goto L_d1a3e; }
    X86_TICK(c, 7);
    // 0d1a39  cmp bl, 0x51
    X86_AT(c, 0xd1a39u);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0d1a3c  jne 0xd1a59
    X86_AT(c, 0xd1a3cu);
    if (x86_cc(c, 5)) { goto L_d1a59; }
L_d1a3e:
    X86_TICK(c, 11);
    // 0d1a3e  push 0xc130
    X86_AT(c, 0xd1a3eu);
    { uint32_t v = 0xC130u; push32(c, v); }
    // 0d1a43  push 7
    X86_AT(c, 0xd1a43u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1a45  call 0xba428
    X86_AT(c, 0xd1a45u);
    push32(c, 0xd1a4au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1a4au);
    X86_TICK(c, 9);
    // 0d1a4a  push 7
    X86_AT(c, 0xd1a4au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1a4c  call 0xbbb5c
    X86_AT(c, 0xd1a4cu);
    push32(c, 0xd1a51u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1a51u);
    X86_TICK(c, 9);
    // 0d1a51  add esp, 0xc
    X86_AT(c, 0xd1a51u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d1a54  jmp 0xd1d23
    X86_AT(c, 0xd1a54u);
    goto L_d1d23;
L_d1a59:
    X86_TICK(c, 9);
    // 0d1a59  push 7
    X86_AT(c, 0xd1a59u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1a5b  call 0xbb6b0
    X86_AT(c, 0xd1a5bu);
    push32(c, 0xd1a60u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd1a60u);
    X86_TICK(c, 11);
    // 0d1a60  push 0xc14c
    X86_AT(c, 0xd1a60u);
    { uint32_t v = 0xC14Cu; push32(c, v); }
    // 0d1a65  push 7
    X86_AT(c, 0xd1a65u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1a67  call 0xba428
    X86_AT(c, 0xd1a67u);
    push32(c, 0xd1a6cu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1a6cu);
    X86_TICK(c, 9);
    // 0d1a6c  push 7
    X86_AT(c, 0xd1a6cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1a6e  call 0xb6308
    X86_AT(c, 0xd1a6eu);
    push32(c, 0xd1a73u); x86_call_known(c, 0xb6308u, f_000b6308); X86_RET(c, 0xd1a73u);
    X86_TICK(c, 12);
    // 0d1a73  xchg esi, eax
    X86_AT(c, 0xd1a73u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d1a74  push 7
    X86_AT(c, 0xd1a74u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1a76  call 0xbbb5c
    X86_AT(c, 0xd1a76u);
    push32(c, 0xd1a7bu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1a7bu);
    X86_TICK(c, 9);
    // 0d1a7b  add esp, 0x14
    X86_AT(c, 0xd1a7bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d1a7e  cmp esi, 0xffffffff
    X86_AT(c, 0xd1a7eu);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0d1a81  je 0xd1d23
    X86_AT(c, 0xd1a81u);
    if (x86_cc(c, 4)) { goto L_d1d23; }
    X86_TICK(c, 7);
    // 0d1a87  and esi, esi
    X86_AT(c, 0xd1a87u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d1a89  je 0xd1d23
    X86_AT(c, 0xd1a89u);
    if (x86_cc(c, 4)) { goto L_d1d23; }
    X86_TICK(c, 9);
    // 0d1a8f  push 7
    X86_AT(c, 0xd1a8fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1a91  call 0xbb6b0
    X86_AT(c, 0xd1a91u);
    push32(c, 0xd1a96u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd1a96u);
    X86_TICK(c, 14);
    // 0d1a96  add esp, 4
    X86_AT(c, 0xd1a96u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d1a99  movzx edx, bl
    X86_AT(c, 0xd1a99u);
    c.r[2] = g8(c, 3);
    // 0d1a9c  sub edx, 0x41
    X86_AT(c, 0xd1a9cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x41u, 0, 4); }
    // 0d1a9f  cmp edx, 3
    X86_AT(c, 0xd1a9fu);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0d1aa2  ja 0xd1d01
    X86_AT(c, 0xd1aa2u);
    if (x86_cc(c, 7)) { goto L_d1d01; }
    X86_TICK(c, 7);
    // 0d1aa8  jmp dword ptr cs:[edx*4 + 0xd1ab0]
    X86_AT(c, 0xd1aa8u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD1AB0u)));
      switch (t) {
      case 0xd1ac0u: goto L_d1ac0;
      case 0xd1b44u: goto L_d1b44;
      case 0xd1bd7u: goto L_d1bd7;
      case 0xd1c69u: goto L_d1c69;
      default: x86_jump(c, t); return; } }
L_d1ac0:
    X86_TICK(c, 11);
    // 0d1ac0  push 0xc180
    X86_AT(c, 0xd1ac0u);
    { uint32_t v = 0xC180u; push32(c, v); }
    // 0d1ac5  push 7
    X86_AT(c, 0xd1ac5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1ac7  call 0xba428
    X86_AT(c, 0xd1ac7u);
    push32(c, 0xd1accu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1accu);
    X86_TICK(c, 9);
    // 0d1acc  push 7
    X86_AT(c, 0xd1accu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1ace  call 0xbbb5c
    X86_AT(c, 0xd1aceu);
    push32(c, 0xd1ad3u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1ad3u);
    X86_TICK(c, 28);
    // 0d1ad3  mov eax, edi
    X86_AT(c, 0xd1ad3u);
    c.r[0] = c.r[7];
    // 0d1ad5  lea edx, [eax + eax*2]
    X86_AT(c, 0xd1ad5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d1ad8  shl edx, 5
    X86_AT(c, 0xd1ad8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0d1adb  add edx, eax
    X86_AT(c, 0xd1adbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d1add  lea edx, [eax + edx*2]
    X86_AT(c, 0xd1addu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0d1ae0  add esp, 0xc
    X86_AT(c, 0xd1ae0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d1ae3  mov eax, esi
    X86_AT(c, 0xd1ae3u);
    c.r[0] = c.r[6];
    // 0d1ae5  add eax, dword ptr [edx + 0xa4af1]
    X86_AT(c, 0xd1ae5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AF1u))), 0, 4); }
    // 0d1aeb  cmp eax, 0x63
    X86_AT(c, 0xd1aebu);
    (void)x86_sub(c, c.r[0], 0x63u, 0, 4);
    // 0d1aee  jle 0xd1b01
    X86_AT(c, 0xd1aeeu);
    if (x86_cc(c, 14)) { goto L_d1b01; }
    X86_TICK(c, 9);
    // 0d1af0  push 3
    X86_AT(c, 0xd1af0u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d1af2  call 0xb607c
    X86_AT(c, 0xd1af2u);
    push32(c, 0xd1af7u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd1af7u);
    X86_TICK(c, 9);
    // 0d1af7  push 0xc19c
    X86_AT(c, 0xd1af7u);
    { uint32_t v = 0xC19Cu; push32(c, v); }
    // 0d1afc  jmp 0xd1cc5
    X86_AT(c, 0xd1afcu);
    goto L_d1cc5;
L_d1b01:
    X86_TICK(c, 17);
    // 0d1b01  lea eax, [esi + esi*4]
    X86_AT(c, 0xd1b01u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 4);
    // 0d1b04  lea eax, [eax + eax*4]
    X86_AT(c, 0xd1b04u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0d1b07  add eax, eax
    X86_AT(c, 0xd1b07u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d1b09  push eax
    X86_AT(c, 0xd1b09u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d1b0a  push edi
    X86_AT(c, 0xd1b0au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d1b0b  call 0xcfe88
    X86_AT(c, 0xd1b0bu);
    push32(c, 0xd1b10u); x86_call_known(c, 0xcfe88u, f_000cfe88); X86_RET(c, 0xd1b10u);
    X86_TICK(c, 9);
    // 0d1b10  add esp, 8
    X86_AT(c, 0xd1b10u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d1b13  inc eax
    X86_AT(c, 0xd1b13u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d1b14  jne 0xd1b27
    X86_AT(c, 0xd1b14u);
    if (x86_cc(c, 5)) { goto L_d1b27; }
    X86_TICK(c, 9);
    // 0d1b16  push 3
    X86_AT(c, 0xd1b16u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d1b18  call 0xb607c
    X86_AT(c, 0xd1b18u);
    push32(c, 0xd1b1du); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd1b1du);
    X86_TICK(c, 9);
    // 0d1b1d  push 0xc1d4
    X86_AT(c, 0xd1b1du);
    { uint32_t v = 0xC1D4u; push32(c, v); }
    // 0d1b22  jmp 0xd1cc5
    X86_AT(c, 0xd1b22u);
    goto L_d1cc5;
L_d1b27:
    X86_TICK(c, 27);
    // 0d1b27  mov eax, edi
    X86_AT(c, 0xd1b27u);
    c.r[0] = c.r[7];
    // 0d1b29  lea edx, [eax + eax*2]
    X86_AT(c, 0xd1b29u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d1b2c  shl edx, 5
    X86_AT(c, 0xd1b2cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0d1b2f  add edx, eax
    X86_AT(c, 0xd1b2fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d1b31  lea edx, [eax + edx*2]
    X86_AT(c, 0xd1b31u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0d1b34  add dword ptr [edx + 0xa4af1], esi
    X86_AT(c, 0xd1b34u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AF1u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 0d1b3a  push 0xc24c
    X86_AT(c, 0xd1b3au);
    { uint32_t v = 0xC24Cu; push32(c, v); }
    // 0d1b3f  jmp 0xd1bc4
    X86_AT(c, 0xd1b3fu);
    goto L_d1bc4;
L_d1b44:
    X86_TICK(c, 11);
    // 0d1b44  push 0xc270
    X86_AT(c, 0xd1b44u);
    { uint32_t v = 0xC270u; push32(c, v); }
    // 0d1b49  push 7
    X86_AT(c, 0xd1b49u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1b4b  call 0xba428
    X86_AT(c, 0xd1b4bu);
    push32(c, 0xd1b50u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1b50u);
    X86_TICK(c, 9);
    // 0d1b50  push 7
    X86_AT(c, 0xd1b50u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1b52  call 0xbbb5c
    X86_AT(c, 0xd1b52u);
    push32(c, 0xd1b57u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1b57u);
    X86_TICK(c, 28);
    // 0d1b57  mov eax, edi
    X86_AT(c, 0xd1b57u);
    c.r[0] = c.r[7];
    // 0d1b59  lea edx, [eax + eax*2]
    X86_AT(c, 0xd1b59u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d1b5c  shl edx, 5
    X86_AT(c, 0xd1b5cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0d1b5f  add edx, eax
    X86_AT(c, 0xd1b5fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d1b61  lea edx, [eax + edx*2]
    X86_AT(c, 0xd1b61u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0d1b64  add esp, 0xc
    X86_AT(c, 0xd1b64u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d1b67  mov eax, esi
    X86_AT(c, 0xd1b67u);
    c.r[0] = c.r[6];
    // 0d1b69  add eax, dword ptr [edx + 0xa4aed]
    X86_AT(c, 0xd1b69u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AEDu))), 0, 4); }
    // 0d1b6f  cmp eax, 0x63
    X86_AT(c, 0xd1b6fu);
    (void)x86_sub(c, c.r[0], 0x63u, 0, 4);
    // 0d1b72  jle 0xd1b85
    X86_AT(c, 0xd1b72u);
    if (x86_cc(c, 14)) { goto L_d1b85; }
    X86_TICK(c, 9);
    // 0d1b74  push 3
    X86_AT(c, 0xd1b74u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d1b76  call 0xb607c
    X86_AT(c, 0xd1b76u);
    push32(c, 0xd1b7bu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd1b7bu);
    X86_TICK(c, 9);
    // 0d1b7b  push 0xc28c
    X86_AT(c, 0xd1b7bu);
    { uint32_t v = 0xC28Cu; push32(c, v); }
    // 0d1b80  jmp 0xd1cc5
    X86_AT(c, 0xd1b80u);
    goto L_d1cc5;
L_d1b85:
    X86_TICK(c, 17);
    // 0d1b85  lea eax, [esi + esi*4]
    X86_AT(c, 0xd1b85u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 4);
    // 0d1b88  lea eax, [eax + eax*4]
    X86_AT(c, 0xd1b88u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0d1b8b  lea eax, [eax + eax*2]
    X86_AT(c, 0xd1b8bu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d1b8e  push eax
    X86_AT(c, 0xd1b8eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d1b8f  push edi
    X86_AT(c, 0xd1b8fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d1b90  call 0xcfe88
    X86_AT(c, 0xd1b90u);
    push32(c, 0xd1b95u); x86_call_known(c, 0xcfe88u, f_000cfe88); X86_RET(c, 0xd1b95u);
    X86_TICK(c, 9);
    // 0d1b95  add esp, 8
    X86_AT(c, 0xd1b95u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d1b98  inc eax
    X86_AT(c, 0xd1b98u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d1b99  jne 0xd1bac
    X86_AT(c, 0xd1b99u);
    if (x86_cc(c, 5)) { goto L_d1bac; }
    X86_TICK(c, 9);
    // 0d1b9b  push 3
    X86_AT(c, 0xd1b9bu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d1b9d  call 0xb607c
    X86_AT(c, 0xd1b9du);
    push32(c, 0xd1ba2u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd1ba2u);
    X86_TICK(c, 9);
    // 0d1ba2  push 0xc2c4
    X86_AT(c, 0xd1ba2u);
    { uint32_t v = 0xC2C4u; push32(c, v); }
    // 0d1ba7  jmp 0xd1cc5
    X86_AT(c, 0xd1ba7u);
    goto L_d1cc5;
L_d1bac:
    X86_TICK(c, 20);
    // 0d1bac  mov eax, edi
    X86_AT(c, 0xd1bacu);
    c.r[0] = c.r[7];
    // 0d1bae  lea edx, [eax + eax*2]
    X86_AT(c, 0xd1baeu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d1bb1  shl edx, 5
    X86_AT(c, 0xd1bb1u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0d1bb4  add edx, eax
    X86_AT(c, 0xd1bb4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d1bb6  lea edx, [eax + edx*2]
    X86_AT(c, 0xd1bb6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0d1bb9  add dword ptr [edx + 0xa4aed], esi
    X86_AT(c, 0xd1bb9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AEDu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 0d1bbf  push 0xc33c
    X86_AT(c, 0xd1bbfu);
    { uint32_t v = 0xC33Cu; push32(c, v); }
L_d1bc4:
    X86_TICK(c, 9);
    // 0d1bc4  push 7
    X86_AT(c, 0xd1bc4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1bc6  call 0xba428
    X86_AT(c, 0xd1bc6u);
    push32(c, 0xd1bcbu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1bcbu);
    X86_TICK(c, 9);
    // 0d1bcb  push 7
    X86_AT(c, 0xd1bcbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1bcd  call 0xbbb5c
    X86_AT(c, 0xd1bcdu);
    push32(c, 0xd1bd2u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1bd2u);
    X86_TICK(c, 7);
    // 0d1bd2  jmp 0xd1cfe
    X86_AT(c, 0xd1bd2u);
    goto L_d1cfe;
L_d1bd7:
    X86_TICK(c, 11);
    // 0d1bd7  push 0xc360
    X86_AT(c, 0xd1bd7u);
    { uint32_t v = 0xC360u; push32(c, v); }
    // 0d1bdc  push 7
    X86_AT(c, 0xd1bdcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1bde  call 0xba428
    X86_AT(c, 0xd1bdeu);
    push32(c, 0xd1be3u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1be3u);
    X86_TICK(c, 9);
    // 0d1be3  push 7
    X86_AT(c, 0xd1be3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1be5  call 0xbbb5c
    X86_AT(c, 0xd1be5u);
    push32(c, 0xd1beau); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1beau);
    X86_TICK(c, 28);
    // 0d1bea  mov eax, edi
    X86_AT(c, 0xd1beau);
    c.r[0] = c.r[7];
    // 0d1bec  lea edx, [eax + eax*2]
    X86_AT(c, 0xd1becu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d1bef  shl edx, 5
    X86_AT(c, 0xd1befu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0d1bf2  add edx, eax
    X86_AT(c, 0xd1bf2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d1bf4  lea edx, [eax + edx*2]
    X86_AT(c, 0xd1bf4u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0d1bf7  add esp, 0xc
    X86_AT(c, 0xd1bf7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d1bfa  mov eax, esi
    X86_AT(c, 0xd1bfau);
    c.r[0] = c.r[6];
    // 0d1bfc  add eax, dword ptr [edx + 0xa4af5]
    X86_AT(c, 0xd1bfcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AF5u))), 0, 4); }
    // 0d1c02  cmp eax, 0x63
    X86_AT(c, 0xd1c02u);
    (void)x86_sub(c, c.r[0], 0x63u, 0, 4);
    // 0d1c05  jle 0xd1c18
    X86_AT(c, 0xd1c05u);
    if (x86_cc(c, 14)) { goto L_d1c18; }
    X86_TICK(c, 9);
    // 0d1c07  push 3
    X86_AT(c, 0xd1c07u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d1c09  call 0xb607c
    X86_AT(c, 0xd1c09u);
    push32(c, 0xd1c0eu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd1c0eu);
    X86_TICK(c, 9);
    // 0d1c0e  push 0xc388
    X86_AT(c, 0xd1c0eu);
    { uint32_t v = 0xC388u; push32(c, v); }
    // 0d1c13  jmp 0xd1cc5
    X86_AT(c, 0xd1c13u);
    goto L_d1cc5;
L_d1c18:
    X86_TICK(c, 17);
    // 0d1c18  lea eax, [esi + esi*8]
    X86_AT(c, 0xd1c18u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 8);
    // 0d1c1b  lea eax, [eax + eax*4]
    X86_AT(c, 0xd1c1bu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0d1c1e  add eax, eax
    X86_AT(c, 0xd1c1eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d1c20  push eax
    X86_AT(c, 0xd1c20u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d1c21  push edi
    X86_AT(c, 0xd1c21u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d1c22  call 0xcfe88
    X86_AT(c, 0xd1c22u);
    push32(c, 0xd1c27u); x86_call_known(c, 0xcfe88u, f_000cfe88); X86_RET(c, 0xd1c27u);
    X86_TICK(c, 9);
    // 0d1c27  add esp, 8
    X86_AT(c, 0xd1c27u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d1c2a  inc eax
    X86_AT(c, 0xd1c2au);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d1c2b  jne 0xd1c3e
    X86_AT(c, 0xd1c2bu);
    if (x86_cc(c, 5)) { goto L_d1c3e; }
    X86_TICK(c, 9);
    // 0d1c2d  push 3
    X86_AT(c, 0xd1c2du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d1c2f  call 0xb607c
    X86_AT(c, 0xd1c2fu);
    push32(c, 0xd1c34u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd1c34u);
    X86_TICK(c, 9);
    // 0d1c34  push 0xc3c0
    X86_AT(c, 0xd1c34u);
    { uint32_t v = 0xC3C0u; push32(c, v); }
    // 0d1c39  jmp 0xd1cc5
    X86_AT(c, 0xd1c39u);
    goto L_d1cc5;
L_d1c3e:
    X86_TICK(c, 11);
    // 0d1c3e  push 0xc438
    X86_AT(c, 0xd1c3eu);
    { uint32_t v = 0xC438u; push32(c, v); }
    // 0d1c43  push 7
    X86_AT(c, 0xd1c43u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1c45  call 0xba428
    X86_AT(c, 0xd1c45u);
    push32(c, 0xd1c4au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1c4au);
    X86_TICK(c, 9);
    // 0d1c4a  push 7
    X86_AT(c, 0xd1c4au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1c4c  call 0xbbb5c
    X86_AT(c, 0xd1c4cu);
    push32(c, 0xd1c51u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1c51u);
    X86_TICK(c, 25);
    // 0d1c51  mov eax, edi
    X86_AT(c, 0xd1c51u);
    c.r[0] = c.r[7];
    // 0d1c53  lea edx, [eax + eax*2]
    X86_AT(c, 0xd1c53u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d1c56  shl edx, 5
    X86_AT(c, 0xd1c56u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0d1c59  add edx, eax
    X86_AT(c, 0xd1c59u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d1c5b  lea edx, [eax + edx*2]
    X86_AT(c, 0xd1c5bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0d1c5e  add dword ptr [edx + 0xa4af5], esi
    X86_AT(c, 0xd1c5eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AF5u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 0d1c64  jmp 0xd1cfe
    X86_AT(c, 0xd1c64u);
    goto L_d1cfe;
L_d1c69:
    X86_TICK(c, 11);
    // 0d1c69  push 0xc45c
    X86_AT(c, 0xd1c69u);
    { uint32_t v = 0xC45Cu; push32(c, v); }
    // 0d1c6e  push 7
    X86_AT(c, 0xd1c6eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1c70  call 0xba428
    X86_AT(c, 0xd1c70u);
    push32(c, 0xd1c75u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1c75u);
    X86_TICK(c, 9);
    // 0d1c75  push 7
    X86_AT(c, 0xd1c75u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1c77  call 0xbbb5c
    X86_AT(c, 0xd1c77u);
    push32(c, 0xd1c7cu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1c7cu);
    X86_TICK(c, 28);
    // 0d1c7c  mov eax, edi
    X86_AT(c, 0xd1c7cu);
    c.r[0] = c.r[7];
    // 0d1c7e  lea edx, [eax + eax*2]
    X86_AT(c, 0xd1c7eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d1c81  shl edx, 5
    X86_AT(c, 0xd1c81u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0d1c84  add edx, eax
    X86_AT(c, 0xd1c84u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d1c86  lea edx, [eax + edx*2]
    X86_AT(c, 0xd1c86u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0d1c89  add esp, 0xc
    X86_AT(c, 0xd1c89u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d1c8c  mov eax, esi
    X86_AT(c, 0xd1c8cu);
    c.r[0] = c.r[6];
    // 0d1c8e  add eax, dword ptr [edx + 0xa4ab5]
    X86_AT(c, 0xd1c8eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AB5u))), 0, 4); }
    // 0d1c94  cmp eax, 0x63
    X86_AT(c, 0xd1c94u);
    (void)x86_sub(c, c.r[0], 0x63u, 0, 4);
    // 0d1c97  jle 0xd1ca7
    X86_AT(c, 0xd1c97u);
    if (x86_cc(c, 14)) { goto L_d1ca7; }
    X86_TICK(c, 9);
    // 0d1c99  push 3
    X86_AT(c, 0xd1c99u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d1c9b  call 0xb607c
    X86_AT(c, 0xd1c9bu);
    push32(c, 0xd1ca0u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd1ca0u);
    X86_TICK(c, 9);
    // 0d1ca0  push 0xc47c
    X86_AT(c, 0xd1ca0u);
    { uint32_t v = 0xC47Cu; push32(c, v); }
    // 0d1ca5  jmp 0xd1cc5
    X86_AT(c, 0xd1ca5u);
    goto L_d1cc5;
L_d1ca7:
    X86_TICK(c, 15);
    // 0d1ca7  lea eax, [esi + esi*2]
    X86_AT(c, 0xd1ca7u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 2);
    // 0d1caa  add eax, eax
    X86_AT(c, 0xd1caau);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d1cac  push eax
    X86_AT(c, 0xd1cacu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d1cad  push edi
    X86_AT(c, 0xd1cadu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d1cae  call 0xcfe88
    X86_AT(c, 0xd1caeu);
    push32(c, 0xd1cb3u); x86_call_known(c, 0xcfe88u, f_000cfe88); X86_RET(c, 0xd1cb3u);
    X86_TICK(c, 9);
    // 0d1cb3  add esp, 8
    X86_AT(c, 0xd1cb3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d1cb6  inc eax
    X86_AT(c, 0xd1cb6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d1cb7  jne 0xd1cd8
    X86_AT(c, 0xd1cb7u);
    if (x86_cc(c, 5)) { goto L_d1cd8; }
    X86_TICK(c, 9);
    // 0d1cb9  push 3
    X86_AT(c, 0xd1cb9u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d1cbb  call 0xb607c
    X86_AT(c, 0xd1cbbu);
    push32(c, 0xd1cc0u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd1cc0u);
    X86_TICK(c, 2);
    // 0d1cc0  push 0xc4b4
    X86_AT(c, 0xd1cc0u);
    { uint32_t v = 0xC4B4u; push32(c, v); }
L_d1cc5:
    X86_TICK(c, 9);
    // 0d1cc5  push 7
    X86_AT(c, 0xd1cc5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1cc7  call 0xba428
    X86_AT(c, 0xd1cc7u);
    push32(c, 0xd1cccu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1cccu);
    X86_TICK(c, 9);
    // 0d1ccc  push 7
    X86_AT(c, 0xd1cccu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1cce  call 0xbbb5c
    X86_AT(c, 0xd1cceu);
    push32(c, 0xd1cd3u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1cd3u);
    X86_TICK(c, 9);
    // 0d1cd3  add esp, 0x10
    X86_AT(c, 0xd1cd3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d1cd6  jmp 0xd1d01
    X86_AT(c, 0xd1cd6u);
    goto L_d1d01;
L_d1cd8:
    X86_TICK(c, 11);
    // 0d1cd8  push 0xc52c
    X86_AT(c, 0xd1cd8u);
    { uint32_t v = 0xC52Cu; push32(c, v); }
    // 0d1cdd  push 7
    X86_AT(c, 0xd1cddu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1cdf  call 0xba428
    X86_AT(c, 0xd1cdfu);
    push32(c, 0xd1ce4u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1ce4u);
    X86_TICK(c, 9);
    // 0d1ce4  push 7
    X86_AT(c, 0xd1ce4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1ce6  call 0xbbb5c
    X86_AT(c, 0xd1ce6u);
    push32(c, 0xd1cebu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1cebu);
    X86_TICK(c, 18);
    // 0d1ceb  mov eax, edi
    X86_AT(c, 0xd1cebu);
    c.r[0] = c.r[7];
    // 0d1ced  lea edx, [eax + eax*2]
    X86_AT(c, 0xd1cedu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d1cf0  shl edx, 5
    X86_AT(c, 0xd1cf0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0d1cf3  add edx, eax
    X86_AT(c, 0xd1cf3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d1cf5  lea edx, [eax + edx*2]
    X86_AT(c, 0xd1cf5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0d1cf8  add dword ptr [edx + 0xa4ab5], esi
    X86_AT(c, 0xd1cf8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AB5u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
L_d1cfe:
    X86_TICK(c, 2);
    // 0d1cfe  add esp, 0xc
    X86_AT(c, 0xd1cfeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_d1d01:
    X86_TICK(c, 9);
    // 0d1d01  push 7
    X86_AT(c, 0xd1d01u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1d03  call 0xc9890
    X86_AT(c, 0xd1d03u);
    push32(c, 0xd1d08u); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xd1d08u);
    X86_TICK(c, 11);
    // 0d1d08  push 0xc550
    X86_AT(c, 0xd1d08u);
    { uint32_t v = 0xC550u; push32(c, v); }
    // 0d1d0d  push 7
    X86_AT(c, 0xd1d0du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1d0f  call 0xba428
    X86_AT(c, 0xd1d0fu);
    push32(c, 0xd1d14u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1d14u);
    X86_TICK(c, 9);
    // 0d1d14  push 7
    X86_AT(c, 0xd1d14u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1d16  call 0xbbb5c
    X86_AT(c, 0xd1d16u);
    push32(c, 0xd1d1bu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1d1bu);
    X86_TICK(c, 9);
    // 0d1d1b  add esp, 0x10
    X86_AT(c, 0xd1d1bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d1d1e  jmp 0xd1980
    X86_AT(c, 0xd1d1eu);
    X86_POLL(c, 0xd1980u); goto L_d1980;
L_d1d23:
    X86_TICK(c, 11);
    // 0d1d23  push 0xc588
    X86_AT(c, 0xd1d23u);
    { uint32_t v = 0xC588u; push32(c, v); }
    // 0d1d28  push 7
    X86_AT(c, 0xd1d28u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1d2a  call 0xba428
    X86_AT(c, 0xd1d2au);
    push32(c, 0xd1d2fu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1d2fu);
    X86_TICK(c, 9);
    // 0d1d2f  push 7
    X86_AT(c, 0xd1d2fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1d31  call 0xbbb5c
    X86_AT(c, 0xd1d31u);
    push32(c, 0xd1d36u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1d36u);
    X86_TICK(c, 30);
    // 0d1d36  add esp, 0xc
    X86_AT(c, 0xd1d36u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d1d39  pop edi
    X86_AT(c, 0xd1d39u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d1d3a  pop esi
    X86_AT(c, 0xd1d3au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d1d3b  pop ebx
    X86_AT(c, 0xd1d3bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d1d3c  leave 
    X86_AT(c, 0xd1d3cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d1d3d  ret 
    X86_AT(c, 0xd1d3du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd1940u, "ran off the end of a function");
}
void f_000d1cc5(X86Cpu& c) {
    goto L_d1cc5;
L_d1980:
    X86_TICK(c, 11);
    // 0d1980  push 0xc004
    X86_AT(c, 0xd1980u);
    { uint32_t v = 0xC004u; push32(c, v); }
    // 0d1985  push 7
    X86_AT(c, 0xd1985u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1987  call 0xba428
    X86_AT(c, 0xd1987u);
    push32(c, 0xd198cu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd198cu);
    X86_TICK(c, 9);
    // 0d198c  push 7
    X86_AT(c, 0xd198cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d198e  call 0xbbb5c
    X86_AT(c, 0xd198eu);
    push32(c, 0xd1993u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1993u);
    X86_TICK(c, 11);
    // 0d1993  push 0xc040
    X86_AT(c, 0xd1993u);
    { uint32_t v = 0xC040u; push32(c, v); }
    // 0d1998  push 7
    X86_AT(c, 0xd1998u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d199a  call 0xba428
    X86_AT(c, 0xd199au);
    push32(c, 0xd199fu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd199fu);
    X86_TICK(c, 9);
    // 0d199f  push 7
    X86_AT(c, 0xd199fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d19a1  call 0xbbb5c
    X86_AT(c, 0xd19a1u);
    push32(c, 0xd19a6u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd19a6u);
    X86_TICK(c, 11);
    // 0d19a6  push 0xc07c
    X86_AT(c, 0xd19a6u);
    { uint32_t v = 0xC07Cu; push32(c, v); }
    // 0d19ab  push 7
    X86_AT(c, 0xd19abu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d19ad  call 0xba428
    X86_AT(c, 0xd19adu);
    push32(c, 0xd19b2u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd19b2u);
    X86_TICK(c, 9);
    // 0d19b2  push 7
    X86_AT(c, 0xd19b2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d19b4  call 0xbbb5c
    X86_AT(c, 0xd19b4u);
    push32(c, 0xd19b9u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd19b9u);
    X86_TICK(c, 11);
    // 0d19b9  push 0xc0b8
    X86_AT(c, 0xd19b9u);
    { uint32_t v = 0xC0B8u; push32(c, v); }
    // 0d19be  push 7
    X86_AT(c, 0xd19beu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d19c0  call 0xba428
    X86_AT(c, 0xd19c0u);
    push32(c, 0xd19c5u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd19c5u);
    X86_TICK(c, 9);
    // 0d19c5  push 7
    X86_AT(c, 0xd19c5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d19c7  call 0xbbb5c
    X86_AT(c, 0xd19c7u);
    push32(c, 0xd19ccu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd19ccu);
    X86_TICK(c, 11);
    // 0d19cc  push 0xc0f0
    X86_AT(c, 0xd19ccu);
    { uint32_t v = 0xC0F0u; push32(c, v); }
    // 0d19d1  push 7
    X86_AT(c, 0xd19d1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d19d3  call 0xba428
    X86_AT(c, 0xd19d3u);
    push32(c, 0xd19d8u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd19d8u);
    X86_TICK(c, 9);
    // 0d19d8  push 7
    X86_AT(c, 0xd19d8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d19da  call 0xbbb5c
    X86_AT(c, 0xd19dau);
    push32(c, 0xd19dfu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd19dfu);
    X86_TICK(c, 13);
    // 0d19df  add esp, 0x3c
    X86_AT(c, 0xd19dfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d19e2  push 0xc10c
    X86_AT(c, 0xd19e2u);
    { uint32_t v = 0xC10Cu; push32(c, v); }
    // 0d19e7  push 7
    X86_AT(c, 0xd19e7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d19e9  call 0xba428
    X86_AT(c, 0xd19e9u);
    push32(c, 0xd19eeu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd19eeu);
    X86_TICK(c, 2);
    // 0d19ee  add esp, 8
    X86_AT(c, 0xd19eeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d19f1:
    X86_TICK(c, 9);
    // 0d19f1  push 7
    X86_AT(c, 0xd19f1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d19f3  call 0xb9514
    X86_AT(c, 0xd19f3u);
    push32(c, 0xd19f8u); x86_call_known(c, 0xb9514u, f_000b9514); X86_RET(c, 0xd19f8u);
    X86_TICK(c, 12);
    // 0d19f8  xchg ebx, eax
    X86_AT(c, 0xd19f8u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d19f9  add esp, 4
    X86_AT(c, 0xd19f9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d19fc  cmp bl, 1
    X86_AT(c, 0xd19fcu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d19ff  je 0xd1a2a
    X86_AT(c, 0xd19ffu);
    if (x86_cc(c, 4)) { goto L_d1a2a; }
    X86_TICK(c, 7);
    // 0d1a01  cmp bl, 0x51
    X86_AT(c, 0xd1a01u);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0d1a04  je 0xd1a2a
    X86_AT(c, 0xd1a04u);
    if (x86_cc(c, 4)) { goto L_d1a2a; }
    X86_TICK(c, 7);
    // 0d1a06  cmp bl, 0x41
    X86_AT(c, 0xd1a06u);
    (void)x86_sub(c, g8(c, 3), 0x41u, 0, 1);
    // 0d1a09  je 0xd1a2a
    X86_AT(c, 0xd1a09u);
    if (x86_cc(c, 4)) { goto L_d1a2a; }
    X86_TICK(c, 7);
    // 0d1a0b  cmp bl, 0x42
    X86_AT(c, 0xd1a0bu);
    (void)x86_sub(c, g8(c, 3), 0x42u, 0, 1);
    // 0d1a0e  je 0xd1a2a
    X86_AT(c, 0xd1a0eu);
    if (x86_cc(c, 4)) { goto L_d1a2a; }
    X86_TICK(c, 7);
    // 0d1a10  cmp bl, 0x43
    X86_AT(c, 0xd1a10u);
    (void)x86_sub(c, g8(c, 3), 0x43u, 0, 1);
    // 0d1a13  je 0xd1a2a
    X86_AT(c, 0xd1a13u);
    if (x86_cc(c, 4)) { goto L_d1a2a; }
    X86_TICK(c, 7);
    // 0d1a15  cmp bl, 0x44
    X86_AT(c, 0xd1a15u);
    (void)x86_sub(c, g8(c, 3), 0x44u, 0, 1);
    // 0d1a18  je 0xd1a2a
    X86_AT(c, 0xd1a18u);
    if (x86_cc(c, 4)) { goto L_d1a2a; }
    X86_TICK(c, 7);
    // 0d1a1a  and bl, bl
    X86_AT(c, 0xd1a1au);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d1a1c  je 0xd19f1
    X86_AT(c, 0xd1a1cu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd19f1u); goto L_d19f1; }
    X86_TICK(c, 9);
    // 0d1a1e  push 1
    X86_AT(c, 0xd1a1eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d1a20  call 0xb607c
    X86_AT(c, 0xd1a20u);
    push32(c, 0xd1a25u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd1a25u);
    X86_TICK(c, 9);
    // 0d1a25  add esp, 4
    X86_AT(c, 0xd1a25u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d1a28  jmp 0xd19f1
    X86_AT(c, 0xd1a28u);
    X86_POLL(c, 0xd19f1u); goto L_d19f1;
L_d1a2a:
    X86_TICK(c, 9);
    // 0d1a2a  push 7
    X86_AT(c, 0xd1a2au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1a2c  call 0xbbb5c
    X86_AT(c, 0xd1a2cu);
    push32(c, 0xd1a31u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1a31u);
    X86_TICK(c, 9);
    // 0d1a31  add esp, 4
    X86_AT(c, 0xd1a31u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d1a34  cmp bl, 1
    X86_AT(c, 0xd1a34u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d1a37  je 0xd1a3e
    X86_AT(c, 0xd1a37u);
    if (x86_cc(c, 4)) { goto L_d1a3e; }
    X86_TICK(c, 7);
    // 0d1a39  cmp bl, 0x51
    X86_AT(c, 0xd1a39u);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0d1a3c  jne 0xd1a59
    X86_AT(c, 0xd1a3cu);
    if (x86_cc(c, 5)) { goto L_d1a59; }
L_d1a3e:
    X86_TICK(c, 11);
    // 0d1a3e  push 0xc130
    X86_AT(c, 0xd1a3eu);
    { uint32_t v = 0xC130u; push32(c, v); }
    // 0d1a43  push 7
    X86_AT(c, 0xd1a43u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1a45  call 0xba428
    X86_AT(c, 0xd1a45u);
    push32(c, 0xd1a4au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1a4au);
    X86_TICK(c, 9);
    // 0d1a4a  push 7
    X86_AT(c, 0xd1a4au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1a4c  call 0xbbb5c
    X86_AT(c, 0xd1a4cu);
    push32(c, 0xd1a51u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1a51u);
    X86_TICK(c, 9);
    // 0d1a51  add esp, 0xc
    X86_AT(c, 0xd1a51u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d1a54  jmp 0xd1d23
    X86_AT(c, 0xd1a54u);
    goto L_d1d23;
L_d1a59:
    X86_TICK(c, 9);
    // 0d1a59  push 7
    X86_AT(c, 0xd1a59u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1a5b  call 0xbb6b0
    X86_AT(c, 0xd1a5bu);
    push32(c, 0xd1a60u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd1a60u);
    X86_TICK(c, 11);
    // 0d1a60  push 0xc14c
    X86_AT(c, 0xd1a60u);
    { uint32_t v = 0xC14Cu; push32(c, v); }
    // 0d1a65  push 7
    X86_AT(c, 0xd1a65u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1a67  call 0xba428
    X86_AT(c, 0xd1a67u);
    push32(c, 0xd1a6cu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1a6cu);
    X86_TICK(c, 9);
    // 0d1a6c  push 7
    X86_AT(c, 0xd1a6cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1a6e  call 0xb6308
    X86_AT(c, 0xd1a6eu);
    push32(c, 0xd1a73u); x86_call_known(c, 0xb6308u, f_000b6308); X86_RET(c, 0xd1a73u);
    X86_TICK(c, 12);
    // 0d1a73  xchg esi, eax
    X86_AT(c, 0xd1a73u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d1a74  push 7
    X86_AT(c, 0xd1a74u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1a76  call 0xbbb5c
    X86_AT(c, 0xd1a76u);
    push32(c, 0xd1a7bu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1a7bu);
    X86_TICK(c, 9);
    // 0d1a7b  add esp, 0x14
    X86_AT(c, 0xd1a7bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d1a7e  cmp esi, 0xffffffff
    X86_AT(c, 0xd1a7eu);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0d1a81  je 0xd1d23
    X86_AT(c, 0xd1a81u);
    if (x86_cc(c, 4)) { goto L_d1d23; }
    X86_TICK(c, 7);
    // 0d1a87  and esi, esi
    X86_AT(c, 0xd1a87u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d1a89  je 0xd1d23
    X86_AT(c, 0xd1a89u);
    if (x86_cc(c, 4)) { goto L_d1d23; }
    X86_TICK(c, 9);
    // 0d1a8f  push 7
    X86_AT(c, 0xd1a8fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1a91  call 0xbb6b0
    X86_AT(c, 0xd1a91u);
    push32(c, 0xd1a96u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd1a96u);
    X86_TICK(c, 14);
    // 0d1a96  add esp, 4
    X86_AT(c, 0xd1a96u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d1a99  movzx edx, bl
    X86_AT(c, 0xd1a99u);
    c.r[2] = g8(c, 3);
    // 0d1a9c  sub edx, 0x41
    X86_AT(c, 0xd1a9cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x41u, 0, 4); }
    // 0d1a9f  cmp edx, 3
    X86_AT(c, 0xd1a9fu);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0d1aa2  ja 0xd1d01
    X86_AT(c, 0xd1aa2u);
    if (x86_cc(c, 7)) { goto L_d1d01; }
    X86_TICK(c, 7);
    // 0d1aa8  jmp dword ptr cs:[edx*4 + 0xd1ab0]
    X86_AT(c, 0xd1aa8u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD1AB0u)));
      switch (t) {
      case 0xd1ac0u: goto L_d1ac0;
      case 0xd1b44u: goto L_d1b44;
      case 0xd1bd7u: goto L_d1bd7;
      case 0xd1c69u: goto L_d1c69;
      default: x86_jump(c, t); return; } }
L_d1ac0:
    X86_TICK(c, 11);
    // 0d1ac0  push 0xc180
    X86_AT(c, 0xd1ac0u);
    { uint32_t v = 0xC180u; push32(c, v); }
    // 0d1ac5  push 7
    X86_AT(c, 0xd1ac5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1ac7  call 0xba428
    X86_AT(c, 0xd1ac7u);
    push32(c, 0xd1accu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1accu);
    X86_TICK(c, 9);
    // 0d1acc  push 7
    X86_AT(c, 0xd1accu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1ace  call 0xbbb5c
    X86_AT(c, 0xd1aceu);
    push32(c, 0xd1ad3u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1ad3u);
    X86_TICK(c, 28);
    // 0d1ad3  mov eax, edi
    X86_AT(c, 0xd1ad3u);
    c.r[0] = c.r[7];
    // 0d1ad5  lea edx, [eax + eax*2]
    X86_AT(c, 0xd1ad5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d1ad8  shl edx, 5
    X86_AT(c, 0xd1ad8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0d1adb  add edx, eax
    X86_AT(c, 0xd1adbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d1add  lea edx, [eax + edx*2]
    X86_AT(c, 0xd1addu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0d1ae0  add esp, 0xc
    X86_AT(c, 0xd1ae0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d1ae3  mov eax, esi
    X86_AT(c, 0xd1ae3u);
    c.r[0] = c.r[6];
    // 0d1ae5  add eax, dword ptr [edx + 0xa4af1]
    X86_AT(c, 0xd1ae5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AF1u))), 0, 4); }
    // 0d1aeb  cmp eax, 0x63
    X86_AT(c, 0xd1aebu);
    (void)x86_sub(c, c.r[0], 0x63u, 0, 4);
    // 0d1aee  jle 0xd1b01
    X86_AT(c, 0xd1aeeu);
    if (x86_cc(c, 14)) { goto L_d1b01; }
    X86_TICK(c, 9);
    // 0d1af0  push 3
    X86_AT(c, 0xd1af0u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d1af2  call 0xb607c
    X86_AT(c, 0xd1af2u);
    push32(c, 0xd1af7u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd1af7u);
    X86_TICK(c, 9);
    // 0d1af7  push 0xc19c
    X86_AT(c, 0xd1af7u);
    { uint32_t v = 0xC19Cu; push32(c, v); }
    // 0d1afc  jmp 0xd1cc5
    X86_AT(c, 0xd1afcu);
    goto L_d1cc5;
L_d1b01:
    X86_TICK(c, 17);
    // 0d1b01  lea eax, [esi + esi*4]
    X86_AT(c, 0xd1b01u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 4);
    // 0d1b04  lea eax, [eax + eax*4]
    X86_AT(c, 0xd1b04u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0d1b07  add eax, eax
    X86_AT(c, 0xd1b07u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d1b09  push eax
    X86_AT(c, 0xd1b09u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d1b0a  push edi
    X86_AT(c, 0xd1b0au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d1b0b  call 0xcfe88
    X86_AT(c, 0xd1b0bu);
    push32(c, 0xd1b10u); x86_call_known(c, 0xcfe88u, f_000cfe88); X86_RET(c, 0xd1b10u);
    X86_TICK(c, 9);
    // 0d1b10  add esp, 8
    X86_AT(c, 0xd1b10u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d1b13  inc eax
    X86_AT(c, 0xd1b13u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d1b14  jne 0xd1b27
    X86_AT(c, 0xd1b14u);
    if (x86_cc(c, 5)) { goto L_d1b27; }
    X86_TICK(c, 9);
    // 0d1b16  push 3
    X86_AT(c, 0xd1b16u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d1b18  call 0xb607c
    X86_AT(c, 0xd1b18u);
    push32(c, 0xd1b1du); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd1b1du);
    X86_TICK(c, 9);
    // 0d1b1d  push 0xc1d4
    X86_AT(c, 0xd1b1du);
    { uint32_t v = 0xC1D4u; push32(c, v); }
    // 0d1b22  jmp 0xd1cc5
    X86_AT(c, 0xd1b22u);
    goto L_d1cc5;
L_d1b27:
    X86_TICK(c, 27);
    // 0d1b27  mov eax, edi
    X86_AT(c, 0xd1b27u);
    c.r[0] = c.r[7];
    // 0d1b29  lea edx, [eax + eax*2]
    X86_AT(c, 0xd1b29u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d1b2c  shl edx, 5
    X86_AT(c, 0xd1b2cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0d1b2f  add edx, eax
    X86_AT(c, 0xd1b2fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d1b31  lea edx, [eax + edx*2]
    X86_AT(c, 0xd1b31u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0d1b34  add dword ptr [edx + 0xa4af1], esi
    X86_AT(c, 0xd1b34u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AF1u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 0d1b3a  push 0xc24c
    X86_AT(c, 0xd1b3au);
    { uint32_t v = 0xC24Cu; push32(c, v); }
    // 0d1b3f  jmp 0xd1bc4
    X86_AT(c, 0xd1b3fu);
    goto L_d1bc4;
L_d1b44:
    X86_TICK(c, 11);
    // 0d1b44  push 0xc270
    X86_AT(c, 0xd1b44u);
    { uint32_t v = 0xC270u; push32(c, v); }
    // 0d1b49  push 7
    X86_AT(c, 0xd1b49u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1b4b  call 0xba428
    X86_AT(c, 0xd1b4bu);
    push32(c, 0xd1b50u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1b50u);
    X86_TICK(c, 9);
    // 0d1b50  push 7
    X86_AT(c, 0xd1b50u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1b52  call 0xbbb5c
    X86_AT(c, 0xd1b52u);
    push32(c, 0xd1b57u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1b57u);
    X86_TICK(c, 28);
    // 0d1b57  mov eax, edi
    X86_AT(c, 0xd1b57u);
    c.r[0] = c.r[7];
    // 0d1b59  lea edx, [eax + eax*2]
    X86_AT(c, 0xd1b59u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d1b5c  shl edx, 5
    X86_AT(c, 0xd1b5cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0d1b5f  add edx, eax
    X86_AT(c, 0xd1b5fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d1b61  lea edx, [eax + edx*2]
    X86_AT(c, 0xd1b61u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0d1b64  add esp, 0xc
    X86_AT(c, 0xd1b64u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d1b67  mov eax, esi
    X86_AT(c, 0xd1b67u);
    c.r[0] = c.r[6];
    // 0d1b69  add eax, dword ptr [edx + 0xa4aed]
    X86_AT(c, 0xd1b69u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AEDu))), 0, 4); }
    // 0d1b6f  cmp eax, 0x63
    X86_AT(c, 0xd1b6fu);
    (void)x86_sub(c, c.r[0], 0x63u, 0, 4);
    // 0d1b72  jle 0xd1b85
    X86_AT(c, 0xd1b72u);
    if (x86_cc(c, 14)) { goto L_d1b85; }
    X86_TICK(c, 9);
    // 0d1b74  push 3
    X86_AT(c, 0xd1b74u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d1b76  call 0xb607c
    X86_AT(c, 0xd1b76u);
    push32(c, 0xd1b7bu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd1b7bu);
    X86_TICK(c, 9);
    // 0d1b7b  push 0xc28c
    X86_AT(c, 0xd1b7bu);
    { uint32_t v = 0xC28Cu; push32(c, v); }
    // 0d1b80  jmp 0xd1cc5
    X86_AT(c, 0xd1b80u);
    goto L_d1cc5;
L_d1b85:
    X86_TICK(c, 17);
    // 0d1b85  lea eax, [esi + esi*4]
    X86_AT(c, 0xd1b85u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 4);
    // 0d1b88  lea eax, [eax + eax*4]
    X86_AT(c, 0xd1b88u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0d1b8b  lea eax, [eax + eax*2]
    X86_AT(c, 0xd1b8bu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d1b8e  push eax
    X86_AT(c, 0xd1b8eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d1b8f  push edi
    X86_AT(c, 0xd1b8fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d1b90  call 0xcfe88
    X86_AT(c, 0xd1b90u);
    push32(c, 0xd1b95u); x86_call_known(c, 0xcfe88u, f_000cfe88); X86_RET(c, 0xd1b95u);
    X86_TICK(c, 9);
    // 0d1b95  add esp, 8
    X86_AT(c, 0xd1b95u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d1b98  inc eax
    X86_AT(c, 0xd1b98u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d1b99  jne 0xd1bac
    X86_AT(c, 0xd1b99u);
    if (x86_cc(c, 5)) { goto L_d1bac; }
    X86_TICK(c, 9);
    // 0d1b9b  push 3
    X86_AT(c, 0xd1b9bu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d1b9d  call 0xb607c
    X86_AT(c, 0xd1b9du);
    push32(c, 0xd1ba2u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd1ba2u);
    X86_TICK(c, 9);
    // 0d1ba2  push 0xc2c4
    X86_AT(c, 0xd1ba2u);
    { uint32_t v = 0xC2C4u; push32(c, v); }
    // 0d1ba7  jmp 0xd1cc5
    X86_AT(c, 0xd1ba7u);
    goto L_d1cc5;
L_d1bac:
    X86_TICK(c, 20);
    // 0d1bac  mov eax, edi
    X86_AT(c, 0xd1bacu);
    c.r[0] = c.r[7];
    // 0d1bae  lea edx, [eax + eax*2]
    X86_AT(c, 0xd1baeu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d1bb1  shl edx, 5
    X86_AT(c, 0xd1bb1u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0d1bb4  add edx, eax
    X86_AT(c, 0xd1bb4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d1bb6  lea edx, [eax + edx*2]
    X86_AT(c, 0xd1bb6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0d1bb9  add dword ptr [edx + 0xa4aed], esi
    X86_AT(c, 0xd1bb9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AEDu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 0d1bbf  push 0xc33c
    X86_AT(c, 0xd1bbfu);
    { uint32_t v = 0xC33Cu; push32(c, v); }
L_d1bc4:
    X86_TICK(c, 9);
    // 0d1bc4  push 7
    X86_AT(c, 0xd1bc4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1bc6  call 0xba428
    X86_AT(c, 0xd1bc6u);
    push32(c, 0xd1bcbu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1bcbu);
    X86_TICK(c, 9);
    // 0d1bcb  push 7
    X86_AT(c, 0xd1bcbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1bcd  call 0xbbb5c
    X86_AT(c, 0xd1bcdu);
    push32(c, 0xd1bd2u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1bd2u);
    X86_TICK(c, 7);
    // 0d1bd2  jmp 0xd1cfe
    X86_AT(c, 0xd1bd2u);
    goto L_d1cfe;
L_d1bd7:
    X86_TICK(c, 11);
    // 0d1bd7  push 0xc360
    X86_AT(c, 0xd1bd7u);
    { uint32_t v = 0xC360u; push32(c, v); }
    // 0d1bdc  push 7
    X86_AT(c, 0xd1bdcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1bde  call 0xba428
    X86_AT(c, 0xd1bdeu);
    push32(c, 0xd1be3u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1be3u);
    X86_TICK(c, 9);
    // 0d1be3  push 7
    X86_AT(c, 0xd1be3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1be5  call 0xbbb5c
    X86_AT(c, 0xd1be5u);
    push32(c, 0xd1beau); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1beau);
    X86_TICK(c, 28);
    // 0d1bea  mov eax, edi
    X86_AT(c, 0xd1beau);
    c.r[0] = c.r[7];
    // 0d1bec  lea edx, [eax + eax*2]
    X86_AT(c, 0xd1becu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d1bef  shl edx, 5
    X86_AT(c, 0xd1befu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0d1bf2  add edx, eax
    X86_AT(c, 0xd1bf2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d1bf4  lea edx, [eax + edx*2]
    X86_AT(c, 0xd1bf4u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0d1bf7  add esp, 0xc
    X86_AT(c, 0xd1bf7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d1bfa  mov eax, esi
    X86_AT(c, 0xd1bfau);
    c.r[0] = c.r[6];
    // 0d1bfc  add eax, dword ptr [edx + 0xa4af5]
    X86_AT(c, 0xd1bfcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AF5u))), 0, 4); }
    // 0d1c02  cmp eax, 0x63
    X86_AT(c, 0xd1c02u);
    (void)x86_sub(c, c.r[0], 0x63u, 0, 4);
    // 0d1c05  jle 0xd1c18
    X86_AT(c, 0xd1c05u);
    if (x86_cc(c, 14)) { goto L_d1c18; }
    X86_TICK(c, 9);
    // 0d1c07  push 3
    X86_AT(c, 0xd1c07u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d1c09  call 0xb607c
    X86_AT(c, 0xd1c09u);
    push32(c, 0xd1c0eu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd1c0eu);
    X86_TICK(c, 9);
    // 0d1c0e  push 0xc388
    X86_AT(c, 0xd1c0eu);
    { uint32_t v = 0xC388u; push32(c, v); }
    // 0d1c13  jmp 0xd1cc5
    X86_AT(c, 0xd1c13u);
    goto L_d1cc5;
L_d1c18:
    X86_TICK(c, 17);
    // 0d1c18  lea eax, [esi + esi*8]
    X86_AT(c, 0xd1c18u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 8);
    // 0d1c1b  lea eax, [eax + eax*4]
    X86_AT(c, 0xd1c1bu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0d1c1e  add eax, eax
    X86_AT(c, 0xd1c1eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d1c20  push eax
    X86_AT(c, 0xd1c20u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d1c21  push edi
    X86_AT(c, 0xd1c21u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d1c22  call 0xcfe88
    X86_AT(c, 0xd1c22u);
    push32(c, 0xd1c27u); x86_call_known(c, 0xcfe88u, f_000cfe88); X86_RET(c, 0xd1c27u);
    X86_TICK(c, 9);
    // 0d1c27  add esp, 8
    X86_AT(c, 0xd1c27u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d1c2a  inc eax
    X86_AT(c, 0xd1c2au);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d1c2b  jne 0xd1c3e
    X86_AT(c, 0xd1c2bu);
    if (x86_cc(c, 5)) { goto L_d1c3e; }
    X86_TICK(c, 9);
    // 0d1c2d  push 3
    X86_AT(c, 0xd1c2du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d1c2f  call 0xb607c
    X86_AT(c, 0xd1c2fu);
    push32(c, 0xd1c34u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd1c34u);
    X86_TICK(c, 9);
    // 0d1c34  push 0xc3c0
    X86_AT(c, 0xd1c34u);
    { uint32_t v = 0xC3C0u; push32(c, v); }
    // 0d1c39  jmp 0xd1cc5
    X86_AT(c, 0xd1c39u);
    goto L_d1cc5;
L_d1c3e:
    X86_TICK(c, 11);
    // 0d1c3e  push 0xc438
    X86_AT(c, 0xd1c3eu);
    { uint32_t v = 0xC438u; push32(c, v); }
    // 0d1c43  push 7
    X86_AT(c, 0xd1c43u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1c45  call 0xba428
    X86_AT(c, 0xd1c45u);
    push32(c, 0xd1c4au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1c4au);
    X86_TICK(c, 9);
    // 0d1c4a  push 7
    X86_AT(c, 0xd1c4au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1c4c  call 0xbbb5c
    X86_AT(c, 0xd1c4cu);
    push32(c, 0xd1c51u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1c51u);
    X86_TICK(c, 25);
    // 0d1c51  mov eax, edi
    X86_AT(c, 0xd1c51u);
    c.r[0] = c.r[7];
    // 0d1c53  lea edx, [eax + eax*2]
    X86_AT(c, 0xd1c53u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d1c56  shl edx, 5
    X86_AT(c, 0xd1c56u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0d1c59  add edx, eax
    X86_AT(c, 0xd1c59u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d1c5b  lea edx, [eax + edx*2]
    X86_AT(c, 0xd1c5bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0d1c5e  add dword ptr [edx + 0xa4af5], esi
    X86_AT(c, 0xd1c5eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AF5u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 0d1c64  jmp 0xd1cfe
    X86_AT(c, 0xd1c64u);
    goto L_d1cfe;
L_d1c69:
    X86_TICK(c, 11);
    // 0d1c69  push 0xc45c
    X86_AT(c, 0xd1c69u);
    { uint32_t v = 0xC45Cu; push32(c, v); }
    // 0d1c6e  push 7
    X86_AT(c, 0xd1c6eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1c70  call 0xba428
    X86_AT(c, 0xd1c70u);
    push32(c, 0xd1c75u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1c75u);
    X86_TICK(c, 9);
    // 0d1c75  push 7
    X86_AT(c, 0xd1c75u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1c77  call 0xbbb5c
    X86_AT(c, 0xd1c77u);
    push32(c, 0xd1c7cu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1c7cu);
    X86_TICK(c, 28);
    // 0d1c7c  mov eax, edi
    X86_AT(c, 0xd1c7cu);
    c.r[0] = c.r[7];
    // 0d1c7e  lea edx, [eax + eax*2]
    X86_AT(c, 0xd1c7eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d1c81  shl edx, 5
    X86_AT(c, 0xd1c81u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0d1c84  add edx, eax
    X86_AT(c, 0xd1c84u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d1c86  lea edx, [eax + edx*2]
    X86_AT(c, 0xd1c86u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0d1c89  add esp, 0xc
    X86_AT(c, 0xd1c89u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d1c8c  mov eax, esi
    X86_AT(c, 0xd1c8cu);
    c.r[0] = c.r[6];
    // 0d1c8e  add eax, dword ptr [edx + 0xa4ab5]
    X86_AT(c, 0xd1c8eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AB5u))), 0, 4); }
    // 0d1c94  cmp eax, 0x63
    X86_AT(c, 0xd1c94u);
    (void)x86_sub(c, c.r[0], 0x63u, 0, 4);
    // 0d1c97  jle 0xd1ca7
    X86_AT(c, 0xd1c97u);
    if (x86_cc(c, 14)) { goto L_d1ca7; }
    X86_TICK(c, 9);
    // 0d1c99  push 3
    X86_AT(c, 0xd1c99u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d1c9b  call 0xb607c
    X86_AT(c, 0xd1c9bu);
    push32(c, 0xd1ca0u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd1ca0u);
    X86_TICK(c, 9);
    // 0d1ca0  push 0xc47c
    X86_AT(c, 0xd1ca0u);
    { uint32_t v = 0xC47Cu; push32(c, v); }
    // 0d1ca5  jmp 0xd1cc5
    X86_AT(c, 0xd1ca5u);
    goto L_d1cc5;
L_d1ca7:
    X86_TICK(c, 15);
    // 0d1ca7  lea eax, [esi + esi*2]
    X86_AT(c, 0xd1ca7u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 2);
    // 0d1caa  add eax, eax
    X86_AT(c, 0xd1caau);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d1cac  push eax
    X86_AT(c, 0xd1cacu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d1cad  push edi
    X86_AT(c, 0xd1cadu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d1cae  call 0xcfe88
    X86_AT(c, 0xd1caeu);
    push32(c, 0xd1cb3u); x86_call_known(c, 0xcfe88u, f_000cfe88); X86_RET(c, 0xd1cb3u);
    X86_TICK(c, 9);
    // 0d1cb3  add esp, 8
    X86_AT(c, 0xd1cb3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d1cb6  inc eax
    X86_AT(c, 0xd1cb6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d1cb7  jne 0xd1cd8
    X86_AT(c, 0xd1cb7u);
    if (x86_cc(c, 5)) { goto L_d1cd8; }
    X86_TICK(c, 9);
    // 0d1cb9  push 3
    X86_AT(c, 0xd1cb9u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d1cbb  call 0xb607c
    X86_AT(c, 0xd1cbbu);
    push32(c, 0xd1cc0u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd1cc0u);
    X86_TICK(c, 2);
    // 0d1cc0  push 0xc4b4
    X86_AT(c, 0xd1cc0u);
    { uint32_t v = 0xC4B4u; push32(c, v); }
L_d1cc5:
    X86_TICK(c, 9);
    // 0d1cc5  push 7
    X86_AT(c, 0xd1cc5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1cc7  call 0xba428
    X86_AT(c, 0xd1cc7u);
    push32(c, 0xd1cccu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1cccu);
    X86_TICK(c, 9);
    // 0d1ccc  push 7
    X86_AT(c, 0xd1cccu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1cce  call 0xbbb5c
    X86_AT(c, 0xd1cceu);
    push32(c, 0xd1cd3u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1cd3u);
    X86_TICK(c, 9);
    // 0d1cd3  add esp, 0x10
    X86_AT(c, 0xd1cd3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d1cd6  jmp 0xd1d01
    X86_AT(c, 0xd1cd6u);
    goto L_d1d01;
L_d1cd8:
    X86_TICK(c, 11);
    // 0d1cd8  push 0xc52c
    X86_AT(c, 0xd1cd8u);
    { uint32_t v = 0xC52Cu; push32(c, v); }
    // 0d1cdd  push 7
    X86_AT(c, 0xd1cddu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1cdf  call 0xba428
    X86_AT(c, 0xd1cdfu);
    push32(c, 0xd1ce4u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1ce4u);
    X86_TICK(c, 9);
    // 0d1ce4  push 7
    X86_AT(c, 0xd1ce4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1ce6  call 0xbbb5c
    X86_AT(c, 0xd1ce6u);
    push32(c, 0xd1cebu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1cebu);
    X86_TICK(c, 18);
    // 0d1ceb  mov eax, edi
    X86_AT(c, 0xd1cebu);
    c.r[0] = c.r[7];
    // 0d1ced  lea edx, [eax + eax*2]
    X86_AT(c, 0xd1cedu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d1cf0  shl edx, 5
    X86_AT(c, 0xd1cf0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0d1cf3  add edx, eax
    X86_AT(c, 0xd1cf3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d1cf5  lea edx, [eax + edx*2]
    X86_AT(c, 0xd1cf5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0d1cf8  add dword ptr [edx + 0xa4ab5], esi
    X86_AT(c, 0xd1cf8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AB5u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
L_d1cfe:
    X86_TICK(c, 2);
    // 0d1cfe  add esp, 0xc
    X86_AT(c, 0xd1cfeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_d1d01:
    X86_TICK(c, 9);
    // 0d1d01  push 7
    X86_AT(c, 0xd1d01u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1d03  call 0xc9890
    X86_AT(c, 0xd1d03u);
    push32(c, 0xd1d08u); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xd1d08u);
    X86_TICK(c, 11);
    // 0d1d08  push 0xc550
    X86_AT(c, 0xd1d08u);
    { uint32_t v = 0xC550u; push32(c, v); }
    // 0d1d0d  push 7
    X86_AT(c, 0xd1d0du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1d0f  call 0xba428
    X86_AT(c, 0xd1d0fu);
    push32(c, 0xd1d14u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1d14u);
    X86_TICK(c, 9);
    // 0d1d14  push 7
    X86_AT(c, 0xd1d14u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1d16  call 0xbbb5c
    X86_AT(c, 0xd1d16u);
    push32(c, 0xd1d1bu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1d1bu);
    X86_TICK(c, 9);
    // 0d1d1b  add esp, 0x10
    X86_AT(c, 0xd1d1bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d1d1e  jmp 0xd1980
    X86_AT(c, 0xd1d1eu);
    X86_POLL(c, 0xd1980u); goto L_d1980;
L_d1d23:
    X86_TICK(c, 11);
    // 0d1d23  push 0xc588
    X86_AT(c, 0xd1d23u);
    { uint32_t v = 0xC588u; push32(c, v); }
    // 0d1d28  push 7
    X86_AT(c, 0xd1d28u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1d2a  call 0xba428
    X86_AT(c, 0xd1d2au);
    push32(c, 0xd1d2fu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1d2fu);
    X86_TICK(c, 9);
    // 0d1d2f  push 7
    X86_AT(c, 0xd1d2fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1d31  call 0xbbb5c
    X86_AT(c, 0xd1d31u);
    push32(c, 0xd1d36u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1d36u);
    X86_TICK(c, 30);
    // 0d1d36  add esp, 0xc
    X86_AT(c, 0xd1d36u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d1d39  pop edi
    X86_AT(c, 0xd1d39u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d1d3a  pop esi
    X86_AT(c, 0xd1d3au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d1d3b  pop ebx
    X86_AT(c, 0xd1d3bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d1d3c  leave 
    X86_AT(c, 0xd1d3cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d1d3d  ret 
    X86_AT(c, 0xd1d3du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd1cc5u, "ran off the end of a function");
}
void f_000d1cfe(X86Cpu& c) {
    goto L_d1cfe;
L_d1980:
    X86_TICK(c, 11);
    // 0d1980  push 0xc004
    X86_AT(c, 0xd1980u);
    { uint32_t v = 0xC004u; push32(c, v); }
    // 0d1985  push 7
    X86_AT(c, 0xd1985u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1987  call 0xba428
    X86_AT(c, 0xd1987u);
    push32(c, 0xd198cu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd198cu);
    X86_TICK(c, 9);
    // 0d198c  push 7
    X86_AT(c, 0xd198cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d198e  call 0xbbb5c
    X86_AT(c, 0xd198eu);
    push32(c, 0xd1993u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1993u);
    X86_TICK(c, 11);
    // 0d1993  push 0xc040
    X86_AT(c, 0xd1993u);
    { uint32_t v = 0xC040u; push32(c, v); }
    // 0d1998  push 7
    X86_AT(c, 0xd1998u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d199a  call 0xba428
    X86_AT(c, 0xd199au);
    push32(c, 0xd199fu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd199fu);
    X86_TICK(c, 9);
    // 0d199f  push 7
    X86_AT(c, 0xd199fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d19a1  call 0xbbb5c
    X86_AT(c, 0xd19a1u);
    push32(c, 0xd19a6u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd19a6u);
    X86_TICK(c, 11);
    // 0d19a6  push 0xc07c
    X86_AT(c, 0xd19a6u);
    { uint32_t v = 0xC07Cu; push32(c, v); }
    // 0d19ab  push 7
    X86_AT(c, 0xd19abu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d19ad  call 0xba428
    X86_AT(c, 0xd19adu);
    push32(c, 0xd19b2u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd19b2u);
    X86_TICK(c, 9);
    // 0d19b2  push 7
    X86_AT(c, 0xd19b2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d19b4  call 0xbbb5c
    X86_AT(c, 0xd19b4u);
    push32(c, 0xd19b9u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd19b9u);
    X86_TICK(c, 11);
    // 0d19b9  push 0xc0b8
    X86_AT(c, 0xd19b9u);
    { uint32_t v = 0xC0B8u; push32(c, v); }
    // 0d19be  push 7
    X86_AT(c, 0xd19beu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d19c0  call 0xba428
    X86_AT(c, 0xd19c0u);
    push32(c, 0xd19c5u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd19c5u);
    X86_TICK(c, 9);
    // 0d19c5  push 7
    X86_AT(c, 0xd19c5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d19c7  call 0xbbb5c
    X86_AT(c, 0xd19c7u);
    push32(c, 0xd19ccu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd19ccu);
    X86_TICK(c, 11);
    // 0d19cc  push 0xc0f0
    X86_AT(c, 0xd19ccu);
    { uint32_t v = 0xC0F0u; push32(c, v); }
    // 0d19d1  push 7
    X86_AT(c, 0xd19d1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d19d3  call 0xba428
    X86_AT(c, 0xd19d3u);
    push32(c, 0xd19d8u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd19d8u);
    X86_TICK(c, 9);
    // 0d19d8  push 7
    X86_AT(c, 0xd19d8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d19da  call 0xbbb5c
    X86_AT(c, 0xd19dau);
    push32(c, 0xd19dfu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd19dfu);
    X86_TICK(c, 13);
    // 0d19df  add esp, 0x3c
    X86_AT(c, 0xd19dfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d19e2  push 0xc10c
    X86_AT(c, 0xd19e2u);
    { uint32_t v = 0xC10Cu; push32(c, v); }
    // 0d19e7  push 7
    X86_AT(c, 0xd19e7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d19e9  call 0xba428
    X86_AT(c, 0xd19e9u);
    push32(c, 0xd19eeu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd19eeu);
    X86_TICK(c, 2);
    // 0d19ee  add esp, 8
    X86_AT(c, 0xd19eeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d19f1:
    X86_TICK(c, 9);
    // 0d19f1  push 7
    X86_AT(c, 0xd19f1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d19f3  call 0xb9514
    X86_AT(c, 0xd19f3u);
    push32(c, 0xd19f8u); x86_call_known(c, 0xb9514u, f_000b9514); X86_RET(c, 0xd19f8u);
    X86_TICK(c, 12);
    // 0d19f8  xchg ebx, eax
    X86_AT(c, 0xd19f8u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d19f9  add esp, 4
    X86_AT(c, 0xd19f9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d19fc  cmp bl, 1
    X86_AT(c, 0xd19fcu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d19ff  je 0xd1a2a
    X86_AT(c, 0xd19ffu);
    if (x86_cc(c, 4)) { goto L_d1a2a; }
    X86_TICK(c, 7);
    // 0d1a01  cmp bl, 0x51
    X86_AT(c, 0xd1a01u);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0d1a04  je 0xd1a2a
    X86_AT(c, 0xd1a04u);
    if (x86_cc(c, 4)) { goto L_d1a2a; }
    X86_TICK(c, 7);
    // 0d1a06  cmp bl, 0x41
    X86_AT(c, 0xd1a06u);
    (void)x86_sub(c, g8(c, 3), 0x41u, 0, 1);
    // 0d1a09  je 0xd1a2a
    X86_AT(c, 0xd1a09u);
    if (x86_cc(c, 4)) { goto L_d1a2a; }
    X86_TICK(c, 7);
    // 0d1a0b  cmp bl, 0x42
    X86_AT(c, 0xd1a0bu);
    (void)x86_sub(c, g8(c, 3), 0x42u, 0, 1);
    // 0d1a0e  je 0xd1a2a
    X86_AT(c, 0xd1a0eu);
    if (x86_cc(c, 4)) { goto L_d1a2a; }
    X86_TICK(c, 7);
    // 0d1a10  cmp bl, 0x43
    X86_AT(c, 0xd1a10u);
    (void)x86_sub(c, g8(c, 3), 0x43u, 0, 1);
    // 0d1a13  je 0xd1a2a
    X86_AT(c, 0xd1a13u);
    if (x86_cc(c, 4)) { goto L_d1a2a; }
    X86_TICK(c, 7);
    // 0d1a15  cmp bl, 0x44
    X86_AT(c, 0xd1a15u);
    (void)x86_sub(c, g8(c, 3), 0x44u, 0, 1);
    // 0d1a18  je 0xd1a2a
    X86_AT(c, 0xd1a18u);
    if (x86_cc(c, 4)) { goto L_d1a2a; }
    X86_TICK(c, 7);
    // 0d1a1a  and bl, bl
    X86_AT(c, 0xd1a1au);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d1a1c  je 0xd19f1
    X86_AT(c, 0xd1a1cu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd19f1u); goto L_d19f1; }
    X86_TICK(c, 9);
    // 0d1a1e  push 1
    X86_AT(c, 0xd1a1eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d1a20  call 0xb607c
    X86_AT(c, 0xd1a20u);
    push32(c, 0xd1a25u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd1a25u);
    X86_TICK(c, 9);
    // 0d1a25  add esp, 4
    X86_AT(c, 0xd1a25u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d1a28  jmp 0xd19f1
    X86_AT(c, 0xd1a28u);
    X86_POLL(c, 0xd19f1u); goto L_d19f1;
L_d1a2a:
    X86_TICK(c, 9);
    // 0d1a2a  push 7
    X86_AT(c, 0xd1a2au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1a2c  call 0xbbb5c
    X86_AT(c, 0xd1a2cu);
    push32(c, 0xd1a31u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1a31u);
    X86_TICK(c, 9);
    // 0d1a31  add esp, 4
    X86_AT(c, 0xd1a31u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d1a34  cmp bl, 1
    X86_AT(c, 0xd1a34u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d1a37  je 0xd1a3e
    X86_AT(c, 0xd1a37u);
    if (x86_cc(c, 4)) { goto L_d1a3e; }
    X86_TICK(c, 7);
    // 0d1a39  cmp bl, 0x51
    X86_AT(c, 0xd1a39u);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0d1a3c  jne 0xd1a59
    X86_AT(c, 0xd1a3cu);
    if (x86_cc(c, 5)) { goto L_d1a59; }
L_d1a3e:
    X86_TICK(c, 11);
    // 0d1a3e  push 0xc130
    X86_AT(c, 0xd1a3eu);
    { uint32_t v = 0xC130u; push32(c, v); }
    // 0d1a43  push 7
    X86_AT(c, 0xd1a43u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1a45  call 0xba428
    X86_AT(c, 0xd1a45u);
    push32(c, 0xd1a4au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1a4au);
    X86_TICK(c, 9);
    // 0d1a4a  push 7
    X86_AT(c, 0xd1a4au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1a4c  call 0xbbb5c
    X86_AT(c, 0xd1a4cu);
    push32(c, 0xd1a51u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1a51u);
    X86_TICK(c, 9);
    // 0d1a51  add esp, 0xc
    X86_AT(c, 0xd1a51u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d1a54  jmp 0xd1d23
    X86_AT(c, 0xd1a54u);
    goto L_d1d23;
L_d1a59:
    X86_TICK(c, 9);
    // 0d1a59  push 7
    X86_AT(c, 0xd1a59u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1a5b  call 0xbb6b0
    X86_AT(c, 0xd1a5bu);
    push32(c, 0xd1a60u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd1a60u);
    X86_TICK(c, 11);
    // 0d1a60  push 0xc14c
    X86_AT(c, 0xd1a60u);
    { uint32_t v = 0xC14Cu; push32(c, v); }
    // 0d1a65  push 7
    X86_AT(c, 0xd1a65u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1a67  call 0xba428
    X86_AT(c, 0xd1a67u);
    push32(c, 0xd1a6cu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1a6cu);
    X86_TICK(c, 9);
    // 0d1a6c  push 7
    X86_AT(c, 0xd1a6cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1a6e  call 0xb6308
    X86_AT(c, 0xd1a6eu);
    push32(c, 0xd1a73u); x86_call_known(c, 0xb6308u, f_000b6308); X86_RET(c, 0xd1a73u);
    X86_TICK(c, 12);
    // 0d1a73  xchg esi, eax
    X86_AT(c, 0xd1a73u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d1a74  push 7
    X86_AT(c, 0xd1a74u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1a76  call 0xbbb5c
    X86_AT(c, 0xd1a76u);
    push32(c, 0xd1a7bu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1a7bu);
    X86_TICK(c, 9);
    // 0d1a7b  add esp, 0x14
    X86_AT(c, 0xd1a7bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d1a7e  cmp esi, 0xffffffff
    X86_AT(c, 0xd1a7eu);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0d1a81  je 0xd1d23
    X86_AT(c, 0xd1a81u);
    if (x86_cc(c, 4)) { goto L_d1d23; }
    X86_TICK(c, 7);
    // 0d1a87  and esi, esi
    X86_AT(c, 0xd1a87u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d1a89  je 0xd1d23
    X86_AT(c, 0xd1a89u);
    if (x86_cc(c, 4)) { goto L_d1d23; }
    X86_TICK(c, 9);
    // 0d1a8f  push 7
    X86_AT(c, 0xd1a8fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1a91  call 0xbb6b0
    X86_AT(c, 0xd1a91u);
    push32(c, 0xd1a96u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd1a96u);
    X86_TICK(c, 14);
    // 0d1a96  add esp, 4
    X86_AT(c, 0xd1a96u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d1a99  movzx edx, bl
    X86_AT(c, 0xd1a99u);
    c.r[2] = g8(c, 3);
    // 0d1a9c  sub edx, 0x41
    X86_AT(c, 0xd1a9cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x41u, 0, 4); }
    // 0d1a9f  cmp edx, 3
    X86_AT(c, 0xd1a9fu);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0d1aa2  ja 0xd1d01
    X86_AT(c, 0xd1aa2u);
    if (x86_cc(c, 7)) { goto L_d1d01; }
    X86_TICK(c, 7);
    // 0d1aa8  jmp dword ptr cs:[edx*4 + 0xd1ab0]
    X86_AT(c, 0xd1aa8u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD1AB0u)));
      switch (t) {
      case 0xd1ac0u: goto L_d1ac0;
      case 0xd1b44u: goto L_d1b44;
      case 0xd1bd7u: goto L_d1bd7;
      case 0xd1c69u: goto L_d1c69;
      default: x86_jump(c, t); return; } }
L_d1ac0:
    X86_TICK(c, 11);
    // 0d1ac0  push 0xc180
    X86_AT(c, 0xd1ac0u);
    { uint32_t v = 0xC180u; push32(c, v); }
    // 0d1ac5  push 7
    X86_AT(c, 0xd1ac5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1ac7  call 0xba428
    X86_AT(c, 0xd1ac7u);
    push32(c, 0xd1accu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1accu);
    X86_TICK(c, 9);
    // 0d1acc  push 7
    X86_AT(c, 0xd1accu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1ace  call 0xbbb5c
    X86_AT(c, 0xd1aceu);
    push32(c, 0xd1ad3u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1ad3u);
    X86_TICK(c, 28);
    // 0d1ad3  mov eax, edi
    X86_AT(c, 0xd1ad3u);
    c.r[0] = c.r[7];
    // 0d1ad5  lea edx, [eax + eax*2]
    X86_AT(c, 0xd1ad5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d1ad8  shl edx, 5
    X86_AT(c, 0xd1ad8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0d1adb  add edx, eax
    X86_AT(c, 0xd1adbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d1add  lea edx, [eax + edx*2]
    X86_AT(c, 0xd1addu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0d1ae0  add esp, 0xc
    X86_AT(c, 0xd1ae0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d1ae3  mov eax, esi
    X86_AT(c, 0xd1ae3u);
    c.r[0] = c.r[6];
    // 0d1ae5  add eax, dword ptr [edx + 0xa4af1]
    X86_AT(c, 0xd1ae5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AF1u))), 0, 4); }
    // 0d1aeb  cmp eax, 0x63
    X86_AT(c, 0xd1aebu);
    (void)x86_sub(c, c.r[0], 0x63u, 0, 4);
    // 0d1aee  jle 0xd1b01
    X86_AT(c, 0xd1aeeu);
    if (x86_cc(c, 14)) { goto L_d1b01; }
    X86_TICK(c, 9);
    // 0d1af0  push 3
    X86_AT(c, 0xd1af0u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d1af2  call 0xb607c
    X86_AT(c, 0xd1af2u);
    push32(c, 0xd1af7u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd1af7u);
    X86_TICK(c, 9);
    // 0d1af7  push 0xc19c
    X86_AT(c, 0xd1af7u);
    { uint32_t v = 0xC19Cu; push32(c, v); }
    // 0d1afc  jmp 0xd1cc5
    X86_AT(c, 0xd1afcu);
    goto L_d1cc5;
L_d1b01:
    X86_TICK(c, 17);
    // 0d1b01  lea eax, [esi + esi*4]
    X86_AT(c, 0xd1b01u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 4);
    // 0d1b04  lea eax, [eax + eax*4]
    X86_AT(c, 0xd1b04u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0d1b07  add eax, eax
    X86_AT(c, 0xd1b07u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d1b09  push eax
    X86_AT(c, 0xd1b09u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d1b0a  push edi
    X86_AT(c, 0xd1b0au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d1b0b  call 0xcfe88
    X86_AT(c, 0xd1b0bu);
    push32(c, 0xd1b10u); x86_call_known(c, 0xcfe88u, f_000cfe88); X86_RET(c, 0xd1b10u);
    X86_TICK(c, 9);
    // 0d1b10  add esp, 8
    X86_AT(c, 0xd1b10u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d1b13  inc eax
    X86_AT(c, 0xd1b13u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d1b14  jne 0xd1b27
    X86_AT(c, 0xd1b14u);
    if (x86_cc(c, 5)) { goto L_d1b27; }
    X86_TICK(c, 9);
    // 0d1b16  push 3
    X86_AT(c, 0xd1b16u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d1b18  call 0xb607c
    X86_AT(c, 0xd1b18u);
    push32(c, 0xd1b1du); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd1b1du);
    X86_TICK(c, 9);
    // 0d1b1d  push 0xc1d4
    X86_AT(c, 0xd1b1du);
    { uint32_t v = 0xC1D4u; push32(c, v); }
    // 0d1b22  jmp 0xd1cc5
    X86_AT(c, 0xd1b22u);
    goto L_d1cc5;
L_d1b27:
    X86_TICK(c, 27);
    // 0d1b27  mov eax, edi
    X86_AT(c, 0xd1b27u);
    c.r[0] = c.r[7];
    // 0d1b29  lea edx, [eax + eax*2]
    X86_AT(c, 0xd1b29u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d1b2c  shl edx, 5
    X86_AT(c, 0xd1b2cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0d1b2f  add edx, eax
    X86_AT(c, 0xd1b2fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d1b31  lea edx, [eax + edx*2]
    X86_AT(c, 0xd1b31u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0d1b34  add dword ptr [edx + 0xa4af1], esi
    X86_AT(c, 0xd1b34u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AF1u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 0d1b3a  push 0xc24c
    X86_AT(c, 0xd1b3au);
    { uint32_t v = 0xC24Cu; push32(c, v); }
    // 0d1b3f  jmp 0xd1bc4
    X86_AT(c, 0xd1b3fu);
    goto L_d1bc4;
L_d1b44:
    X86_TICK(c, 11);
    // 0d1b44  push 0xc270
    X86_AT(c, 0xd1b44u);
    { uint32_t v = 0xC270u; push32(c, v); }
    // 0d1b49  push 7
    X86_AT(c, 0xd1b49u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1b4b  call 0xba428
    X86_AT(c, 0xd1b4bu);
    push32(c, 0xd1b50u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1b50u);
    X86_TICK(c, 9);
    // 0d1b50  push 7
    X86_AT(c, 0xd1b50u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1b52  call 0xbbb5c
    X86_AT(c, 0xd1b52u);
    push32(c, 0xd1b57u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1b57u);
    X86_TICK(c, 28);
    // 0d1b57  mov eax, edi
    X86_AT(c, 0xd1b57u);
    c.r[0] = c.r[7];
    // 0d1b59  lea edx, [eax + eax*2]
    X86_AT(c, 0xd1b59u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d1b5c  shl edx, 5
    X86_AT(c, 0xd1b5cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0d1b5f  add edx, eax
    X86_AT(c, 0xd1b5fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d1b61  lea edx, [eax + edx*2]
    X86_AT(c, 0xd1b61u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0d1b64  add esp, 0xc
    X86_AT(c, 0xd1b64u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d1b67  mov eax, esi
    X86_AT(c, 0xd1b67u);
    c.r[0] = c.r[6];
    // 0d1b69  add eax, dword ptr [edx + 0xa4aed]
    X86_AT(c, 0xd1b69u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AEDu))), 0, 4); }
    // 0d1b6f  cmp eax, 0x63
    X86_AT(c, 0xd1b6fu);
    (void)x86_sub(c, c.r[0], 0x63u, 0, 4);
    // 0d1b72  jle 0xd1b85
    X86_AT(c, 0xd1b72u);
    if (x86_cc(c, 14)) { goto L_d1b85; }
    X86_TICK(c, 9);
    // 0d1b74  push 3
    X86_AT(c, 0xd1b74u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d1b76  call 0xb607c
    X86_AT(c, 0xd1b76u);
    push32(c, 0xd1b7bu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd1b7bu);
    X86_TICK(c, 9);
    // 0d1b7b  push 0xc28c
    X86_AT(c, 0xd1b7bu);
    { uint32_t v = 0xC28Cu; push32(c, v); }
    // 0d1b80  jmp 0xd1cc5
    X86_AT(c, 0xd1b80u);
    goto L_d1cc5;
L_d1b85:
    X86_TICK(c, 17);
    // 0d1b85  lea eax, [esi + esi*4]
    X86_AT(c, 0xd1b85u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 4);
    // 0d1b88  lea eax, [eax + eax*4]
    X86_AT(c, 0xd1b88u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0d1b8b  lea eax, [eax + eax*2]
    X86_AT(c, 0xd1b8bu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d1b8e  push eax
    X86_AT(c, 0xd1b8eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d1b8f  push edi
    X86_AT(c, 0xd1b8fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d1b90  call 0xcfe88
    X86_AT(c, 0xd1b90u);
    push32(c, 0xd1b95u); x86_call_known(c, 0xcfe88u, f_000cfe88); X86_RET(c, 0xd1b95u);
    X86_TICK(c, 9);
    // 0d1b95  add esp, 8
    X86_AT(c, 0xd1b95u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d1b98  inc eax
    X86_AT(c, 0xd1b98u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d1b99  jne 0xd1bac
    X86_AT(c, 0xd1b99u);
    if (x86_cc(c, 5)) { goto L_d1bac; }
    X86_TICK(c, 9);
    // 0d1b9b  push 3
    X86_AT(c, 0xd1b9bu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d1b9d  call 0xb607c
    X86_AT(c, 0xd1b9du);
    push32(c, 0xd1ba2u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd1ba2u);
    X86_TICK(c, 9);
    // 0d1ba2  push 0xc2c4
    X86_AT(c, 0xd1ba2u);
    { uint32_t v = 0xC2C4u; push32(c, v); }
    // 0d1ba7  jmp 0xd1cc5
    X86_AT(c, 0xd1ba7u);
    goto L_d1cc5;
L_d1bac:
    X86_TICK(c, 20);
    // 0d1bac  mov eax, edi
    X86_AT(c, 0xd1bacu);
    c.r[0] = c.r[7];
    // 0d1bae  lea edx, [eax + eax*2]
    X86_AT(c, 0xd1baeu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d1bb1  shl edx, 5
    X86_AT(c, 0xd1bb1u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0d1bb4  add edx, eax
    X86_AT(c, 0xd1bb4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d1bb6  lea edx, [eax + edx*2]
    X86_AT(c, 0xd1bb6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0d1bb9  add dword ptr [edx + 0xa4aed], esi
    X86_AT(c, 0xd1bb9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AEDu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 0d1bbf  push 0xc33c
    X86_AT(c, 0xd1bbfu);
    { uint32_t v = 0xC33Cu; push32(c, v); }
L_d1bc4:
    X86_TICK(c, 9);
    // 0d1bc4  push 7
    X86_AT(c, 0xd1bc4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1bc6  call 0xba428
    X86_AT(c, 0xd1bc6u);
    push32(c, 0xd1bcbu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1bcbu);
    X86_TICK(c, 9);
    // 0d1bcb  push 7
    X86_AT(c, 0xd1bcbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1bcd  call 0xbbb5c
    X86_AT(c, 0xd1bcdu);
    push32(c, 0xd1bd2u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1bd2u);
    X86_TICK(c, 7);
    // 0d1bd2  jmp 0xd1cfe
    X86_AT(c, 0xd1bd2u);
    goto L_d1cfe;
L_d1bd7:
    X86_TICK(c, 11);
    // 0d1bd7  push 0xc360
    X86_AT(c, 0xd1bd7u);
    { uint32_t v = 0xC360u; push32(c, v); }
    // 0d1bdc  push 7
    X86_AT(c, 0xd1bdcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1bde  call 0xba428
    X86_AT(c, 0xd1bdeu);
    push32(c, 0xd1be3u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1be3u);
    X86_TICK(c, 9);
    // 0d1be3  push 7
    X86_AT(c, 0xd1be3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1be5  call 0xbbb5c
    X86_AT(c, 0xd1be5u);
    push32(c, 0xd1beau); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1beau);
    X86_TICK(c, 28);
    // 0d1bea  mov eax, edi
    X86_AT(c, 0xd1beau);
    c.r[0] = c.r[7];
    // 0d1bec  lea edx, [eax + eax*2]
    X86_AT(c, 0xd1becu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d1bef  shl edx, 5
    X86_AT(c, 0xd1befu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0d1bf2  add edx, eax
    X86_AT(c, 0xd1bf2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d1bf4  lea edx, [eax + edx*2]
    X86_AT(c, 0xd1bf4u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0d1bf7  add esp, 0xc
    X86_AT(c, 0xd1bf7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d1bfa  mov eax, esi
    X86_AT(c, 0xd1bfau);
    c.r[0] = c.r[6];
    // 0d1bfc  add eax, dword ptr [edx + 0xa4af5]
    X86_AT(c, 0xd1bfcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AF5u))), 0, 4); }
    // 0d1c02  cmp eax, 0x63
    X86_AT(c, 0xd1c02u);
    (void)x86_sub(c, c.r[0], 0x63u, 0, 4);
    // 0d1c05  jle 0xd1c18
    X86_AT(c, 0xd1c05u);
    if (x86_cc(c, 14)) { goto L_d1c18; }
    X86_TICK(c, 9);
    // 0d1c07  push 3
    X86_AT(c, 0xd1c07u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d1c09  call 0xb607c
    X86_AT(c, 0xd1c09u);
    push32(c, 0xd1c0eu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd1c0eu);
    X86_TICK(c, 9);
    // 0d1c0e  push 0xc388
    X86_AT(c, 0xd1c0eu);
    { uint32_t v = 0xC388u; push32(c, v); }
    // 0d1c13  jmp 0xd1cc5
    X86_AT(c, 0xd1c13u);
    goto L_d1cc5;
L_d1c18:
    X86_TICK(c, 17);
    // 0d1c18  lea eax, [esi + esi*8]
    X86_AT(c, 0xd1c18u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 8);
    // 0d1c1b  lea eax, [eax + eax*4]
    X86_AT(c, 0xd1c1bu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0d1c1e  add eax, eax
    X86_AT(c, 0xd1c1eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d1c20  push eax
    X86_AT(c, 0xd1c20u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d1c21  push edi
    X86_AT(c, 0xd1c21u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d1c22  call 0xcfe88
    X86_AT(c, 0xd1c22u);
    push32(c, 0xd1c27u); x86_call_known(c, 0xcfe88u, f_000cfe88); X86_RET(c, 0xd1c27u);
    X86_TICK(c, 9);
    // 0d1c27  add esp, 8
    X86_AT(c, 0xd1c27u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d1c2a  inc eax
    X86_AT(c, 0xd1c2au);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d1c2b  jne 0xd1c3e
    X86_AT(c, 0xd1c2bu);
    if (x86_cc(c, 5)) { goto L_d1c3e; }
    X86_TICK(c, 9);
    // 0d1c2d  push 3
    X86_AT(c, 0xd1c2du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d1c2f  call 0xb607c
    X86_AT(c, 0xd1c2fu);
    push32(c, 0xd1c34u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd1c34u);
    X86_TICK(c, 9);
    // 0d1c34  push 0xc3c0
    X86_AT(c, 0xd1c34u);
    { uint32_t v = 0xC3C0u; push32(c, v); }
    // 0d1c39  jmp 0xd1cc5
    X86_AT(c, 0xd1c39u);
    goto L_d1cc5;
L_d1c3e:
    X86_TICK(c, 11);
    // 0d1c3e  push 0xc438
    X86_AT(c, 0xd1c3eu);
    { uint32_t v = 0xC438u; push32(c, v); }
    // 0d1c43  push 7
    X86_AT(c, 0xd1c43u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1c45  call 0xba428
    X86_AT(c, 0xd1c45u);
    push32(c, 0xd1c4au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1c4au);
    X86_TICK(c, 9);
    // 0d1c4a  push 7
    X86_AT(c, 0xd1c4au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1c4c  call 0xbbb5c
    X86_AT(c, 0xd1c4cu);
    push32(c, 0xd1c51u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1c51u);
    X86_TICK(c, 25);
    // 0d1c51  mov eax, edi
    X86_AT(c, 0xd1c51u);
    c.r[0] = c.r[7];
    // 0d1c53  lea edx, [eax + eax*2]
    X86_AT(c, 0xd1c53u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d1c56  shl edx, 5
    X86_AT(c, 0xd1c56u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0d1c59  add edx, eax
    X86_AT(c, 0xd1c59u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d1c5b  lea edx, [eax + edx*2]
    X86_AT(c, 0xd1c5bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0d1c5e  add dword ptr [edx + 0xa4af5], esi
    X86_AT(c, 0xd1c5eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AF5u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 0d1c64  jmp 0xd1cfe
    X86_AT(c, 0xd1c64u);
    goto L_d1cfe;
L_d1c69:
    X86_TICK(c, 11);
    // 0d1c69  push 0xc45c
    X86_AT(c, 0xd1c69u);
    { uint32_t v = 0xC45Cu; push32(c, v); }
    // 0d1c6e  push 7
    X86_AT(c, 0xd1c6eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1c70  call 0xba428
    X86_AT(c, 0xd1c70u);
    push32(c, 0xd1c75u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1c75u);
    X86_TICK(c, 9);
    // 0d1c75  push 7
    X86_AT(c, 0xd1c75u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1c77  call 0xbbb5c
    X86_AT(c, 0xd1c77u);
    push32(c, 0xd1c7cu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1c7cu);
    X86_TICK(c, 28);
    // 0d1c7c  mov eax, edi
    X86_AT(c, 0xd1c7cu);
    c.r[0] = c.r[7];
    // 0d1c7e  lea edx, [eax + eax*2]
    X86_AT(c, 0xd1c7eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d1c81  shl edx, 5
    X86_AT(c, 0xd1c81u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0d1c84  add edx, eax
    X86_AT(c, 0xd1c84u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d1c86  lea edx, [eax + edx*2]
    X86_AT(c, 0xd1c86u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0d1c89  add esp, 0xc
    X86_AT(c, 0xd1c89u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d1c8c  mov eax, esi
    X86_AT(c, 0xd1c8cu);
    c.r[0] = c.r[6];
    // 0d1c8e  add eax, dword ptr [edx + 0xa4ab5]
    X86_AT(c, 0xd1c8eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AB5u))), 0, 4); }
    // 0d1c94  cmp eax, 0x63
    X86_AT(c, 0xd1c94u);
    (void)x86_sub(c, c.r[0], 0x63u, 0, 4);
    // 0d1c97  jle 0xd1ca7
    X86_AT(c, 0xd1c97u);
    if (x86_cc(c, 14)) { goto L_d1ca7; }
    X86_TICK(c, 9);
    // 0d1c99  push 3
    X86_AT(c, 0xd1c99u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d1c9b  call 0xb607c
    X86_AT(c, 0xd1c9bu);
    push32(c, 0xd1ca0u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd1ca0u);
    X86_TICK(c, 9);
    // 0d1ca0  push 0xc47c
    X86_AT(c, 0xd1ca0u);
    { uint32_t v = 0xC47Cu; push32(c, v); }
    // 0d1ca5  jmp 0xd1cc5
    X86_AT(c, 0xd1ca5u);
    goto L_d1cc5;
L_d1ca7:
    X86_TICK(c, 15);
    // 0d1ca7  lea eax, [esi + esi*2]
    X86_AT(c, 0xd1ca7u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 2);
    // 0d1caa  add eax, eax
    X86_AT(c, 0xd1caau);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d1cac  push eax
    X86_AT(c, 0xd1cacu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d1cad  push edi
    X86_AT(c, 0xd1cadu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d1cae  call 0xcfe88
    X86_AT(c, 0xd1caeu);
    push32(c, 0xd1cb3u); x86_call_known(c, 0xcfe88u, f_000cfe88); X86_RET(c, 0xd1cb3u);
    X86_TICK(c, 9);
    // 0d1cb3  add esp, 8
    X86_AT(c, 0xd1cb3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d1cb6  inc eax
    X86_AT(c, 0xd1cb6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d1cb7  jne 0xd1cd8
    X86_AT(c, 0xd1cb7u);
    if (x86_cc(c, 5)) { goto L_d1cd8; }
    X86_TICK(c, 9);
    // 0d1cb9  push 3
    X86_AT(c, 0xd1cb9u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d1cbb  call 0xb607c
    X86_AT(c, 0xd1cbbu);
    push32(c, 0xd1cc0u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd1cc0u);
    X86_TICK(c, 2);
    // 0d1cc0  push 0xc4b4
    X86_AT(c, 0xd1cc0u);
    { uint32_t v = 0xC4B4u; push32(c, v); }
L_d1cc5:
    X86_TICK(c, 9);
    // 0d1cc5  push 7
    X86_AT(c, 0xd1cc5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1cc7  call 0xba428
    X86_AT(c, 0xd1cc7u);
    push32(c, 0xd1cccu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1cccu);
    X86_TICK(c, 9);
    // 0d1ccc  push 7
    X86_AT(c, 0xd1cccu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1cce  call 0xbbb5c
    X86_AT(c, 0xd1cceu);
    push32(c, 0xd1cd3u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1cd3u);
    X86_TICK(c, 9);
    // 0d1cd3  add esp, 0x10
    X86_AT(c, 0xd1cd3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d1cd6  jmp 0xd1d01
    X86_AT(c, 0xd1cd6u);
    goto L_d1d01;
L_d1cd8:
    X86_TICK(c, 11);
    // 0d1cd8  push 0xc52c
    X86_AT(c, 0xd1cd8u);
    { uint32_t v = 0xC52Cu; push32(c, v); }
    // 0d1cdd  push 7
    X86_AT(c, 0xd1cddu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1cdf  call 0xba428
    X86_AT(c, 0xd1cdfu);
    push32(c, 0xd1ce4u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1ce4u);
    X86_TICK(c, 9);
    // 0d1ce4  push 7
    X86_AT(c, 0xd1ce4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1ce6  call 0xbbb5c
    X86_AT(c, 0xd1ce6u);
    push32(c, 0xd1cebu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1cebu);
    X86_TICK(c, 18);
    // 0d1ceb  mov eax, edi
    X86_AT(c, 0xd1cebu);
    c.r[0] = c.r[7];
    // 0d1ced  lea edx, [eax + eax*2]
    X86_AT(c, 0xd1cedu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d1cf0  shl edx, 5
    X86_AT(c, 0xd1cf0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0d1cf3  add edx, eax
    X86_AT(c, 0xd1cf3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d1cf5  lea edx, [eax + edx*2]
    X86_AT(c, 0xd1cf5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0d1cf8  add dword ptr [edx + 0xa4ab5], esi
    X86_AT(c, 0xd1cf8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AB5u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
L_d1cfe:
    X86_TICK(c, 2);
    // 0d1cfe  add esp, 0xc
    X86_AT(c, 0xd1cfeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_d1d01:
    X86_TICK(c, 9);
    // 0d1d01  push 7
    X86_AT(c, 0xd1d01u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1d03  call 0xc9890
    X86_AT(c, 0xd1d03u);
    push32(c, 0xd1d08u); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xd1d08u);
    X86_TICK(c, 11);
    // 0d1d08  push 0xc550
    X86_AT(c, 0xd1d08u);
    { uint32_t v = 0xC550u; push32(c, v); }
    // 0d1d0d  push 7
    X86_AT(c, 0xd1d0du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1d0f  call 0xba428
    X86_AT(c, 0xd1d0fu);
    push32(c, 0xd1d14u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1d14u);
    X86_TICK(c, 9);
    // 0d1d14  push 7
    X86_AT(c, 0xd1d14u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1d16  call 0xbbb5c
    X86_AT(c, 0xd1d16u);
    push32(c, 0xd1d1bu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1d1bu);
    X86_TICK(c, 9);
    // 0d1d1b  add esp, 0x10
    X86_AT(c, 0xd1d1bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d1d1e  jmp 0xd1980
    X86_AT(c, 0xd1d1eu);
    X86_POLL(c, 0xd1980u); goto L_d1980;
L_d1d23:
    X86_TICK(c, 11);
    // 0d1d23  push 0xc588
    X86_AT(c, 0xd1d23u);
    { uint32_t v = 0xC588u; push32(c, v); }
    // 0d1d28  push 7
    X86_AT(c, 0xd1d28u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1d2a  call 0xba428
    X86_AT(c, 0xd1d2au);
    push32(c, 0xd1d2fu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd1d2fu);
    X86_TICK(c, 9);
    // 0d1d2f  push 7
    X86_AT(c, 0xd1d2fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1d31  call 0xbbb5c
    X86_AT(c, 0xd1d31u);
    push32(c, 0xd1d36u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd1d36u);
    X86_TICK(c, 30);
    // 0d1d36  add esp, 0xc
    X86_AT(c, 0xd1d36u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d1d39  pop edi
    X86_AT(c, 0xd1d39u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d1d3a  pop esi
    X86_AT(c, 0xd1d3au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d1d3b  pop ebx
    X86_AT(c, 0xd1d3bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d1d3c  leave 
    X86_AT(c, 0xd1d3cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d1d3d  ret 
    X86_AT(c, 0xd1d3du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd1cfeu, "ran off the end of a function");
}
}
