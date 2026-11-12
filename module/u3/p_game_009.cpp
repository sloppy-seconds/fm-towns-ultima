#include "p_game_funcs.h"
namespace p_game {
void f_000c237b(X86Cpu& c) {
    goto L_c237b;
L_c21ba:
    X86_TICK(c, 9);
    // 0c21ba  push 2
    X86_AT(c, 0xc21bau);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c21bc  call 0xbbb5c
    X86_AT(c, 0xc21bcu);
    push32(c, 0xc21c1u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc21c1u);
    X86_TICK(c, 9);
    // 0c21c1  push 0
    X86_AT(c, 0xc21c1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c21c3  call 0xd8840
    X86_AT(c, 0xc21c3u);
    push32(c, 0xc21c8u); x86_call_known(c, 0xd8840u, f_000d8840); X86_RET(c, 0xc21c8u);
    X86_TICK(c, 15);
    // 0c21c8  push edx
    X86_AT(c, 0xc21c8u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c21c9  push eax
    X86_AT(c, 0xc21c9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c21ca  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xc21cau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0c21cd  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xc21cdu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0c21d0  call 0xd9124
    X86_AT(c, 0xc21d0u);
    push32(c, 0xc21d5u); x86_call_known(c, 0xd9124u, f_000d9124); X86_RET(c, 0xc21d5u);
    X86_TICK(c, 7);
    // 0c21d5  call 0xd9000
    X86_AT(c, 0xc21d5u);
    push32(c, 0xc21dau); x86_call_known(c, 0xd9000u, f_000d9000); X86_RET(c, 0xc21dau);
    X86_TICK(c, 9);
    // 0c21da  push eax
    X86_AT(c, 0xc21dau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c21db  call 0xd8918
    X86_AT(c, 0xc21dbu);
    push32(c, 0xc21e0u); x86_call_known(c, 0xd8918u, f_000d8918); X86_RET(c, 0xc21e0u);
    X86_TICK(c, 7);
    // 0c21e0  call 0xc20a0
    X86_AT(c, 0xc21e0u);
    push32(c, 0xc21e5u); x86_call_known(c, 0xc20a0u, f_000c20a0); X86_RET(c, 0xc21e5u);
    X86_TICK(c, 12);
    // 0c21e5  add esp, 0xc
    X86_AT(c, 0xc21e5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c21e8  movzx edx, al
    X86_AT(c, 0xc21e8u);
    c.r[2] = g8(c, 0);
    // 0c21eb  and edx, edx
    X86_AT(c, 0xc21ebu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0c21ed  je 0xc21fb
    X86_AT(c, 0xc21edu);
    if (x86_cc(c, 4)) { goto L_c21fb; }
    X86_TICK(c, 7);
    // 0c21ef  cmp edx, 1
    X86_AT(c, 0xc21efu);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0c21f2  je 0xc220c
    X86_AT(c, 0xc21f2u);
    if (x86_cc(c, 4)) { goto L_c220c; }
    X86_TICK(c, 7);
    // 0c21f4  cmp edx, 2
    X86_AT(c, 0xc21f4u);
    (void)x86_sub(c, c.r[2], 0x2u, 0, 4);
    // 0c21f7  jne 0xc21ba
    X86_AT(c, 0xc21f7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc21bau); goto L_c21ba; }
    X86_TICK(c, 7);
    // 0c21f9  jmp 0xc221d
    X86_AT(c, 0xc21f9u);
    goto L_c221d;
L_c21fb:
    X86_TICK(c, 7);
    // 0c21fb  call 0xbecf0
    X86_AT(c, 0xc21fbu);
    push32(c, 0xc2200u); x86_call_known(c, 0xbecf0u, f_000becf0); X86_RET(c, 0xc2200u);
    X86_TICK(c, 9);
    // 0c2200  push 0
    X86_AT(c, 0xc2200u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c2202  call 0xd8a74
    X86_AT(c, 0xc2202u);
    push32(c, 0xc2207u); x86_call_known(c, 0xd8a74u, f_000d8a74); X86_RET(c, 0xc2207u);
    X86_TICK(c, 7);
    // 0c2207  jmp 0xc237b
    X86_AT(c, 0xc2207u);
    goto L_c237b;
L_c220c:
    X86_TICK(c, 7);
    // 0c220c  call 0xc4cf8
    X86_AT(c, 0xc220cu);
    push32(c, 0xc2211u); x86_call_known(c, 0xc4cf8u, f_000c4cf8); X86_RET(c, 0xc2211u);
    X86_TICK(c, 9);
    // 0c2211  push 5
    X86_AT(c, 0xc2211u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2213  call 0xb8888
    X86_AT(c, 0xc2213u);
    push32(c, 0xc2218u); x86_call_known(c, 0xb8888u, f_000b8888); X86_RET(c, 0xc2218u);
    X86_TICK(c, 7);
    // 0c2218  jmp 0xc237b
    X86_AT(c, 0xc2218u);
    goto L_c237b;
L_c221d:
    X86_TICK(c, 2);
    // 0c221d  sub esi, esi
    X86_AT(c, 0xc221du);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c221f:
    X86_TICK(c, 11);
    // 0c221f  push 0x3150
    X86_AT(c, 0xc221fu);
    { uint32_t v = 0x3150u; push32(c, v); }
    // 0c2224  push 0
    X86_AT(c, 0xc2224u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c2226  call 0xb6db4
    X86_AT(c, 0xc2226u);
    push32(c, 0xc222bu); x86_call_known(c, 0xb6db4u, f_000b6db4); X86_RET(c, 0xc222bu);
    X86_TICK(c, 12);
    // 0c222b  xchg edi, eax
    X86_AT(c, 0xc222bu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c222c  add esp, 8
    X86_AT(c, 0xc222cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c222f  cmp edi, 0xffffffff
    X86_AT(c, 0xc222fu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0c2232  je 0xc223d
    X86_AT(c, 0xc2232u);
    if (x86_cc(c, 4)) { goto L_c223d; }
    X86_TICK(c, 7);
    // 0c2234  and edi, edi
    X86_AT(c, 0xc2234u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c2236  je 0xc223d
    X86_AT(c, 0xc2236u);
    if (x86_cc(c, 4)) { goto L_c223d; }
    X86_TICK(c, 7);
    // 0c2238  cmp edi, 1
    X86_AT(c, 0xc2238u);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0c223b  jne 0xc221f
    X86_AT(c, 0xc223bu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc221fu); goto L_c221f; }
L_c223d:
    X86_TICK(c, 7);
    // 0c223d  cmp edi, 1
    X86_AT(c, 0xc223du);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0c2240  je 0xc21ba
    X86_AT(c, 0xc2240u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc21bau); goto L_c21ba; }
    X86_TICK(c, 7);
    // 0c2246  and edi, edi
    X86_AT(c, 0xc2246u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c2248  je 0xc2271
    X86_AT(c, 0xc2248u);
    if (x86_cc(c, 4)) { goto L_c2271; }
    X86_TICK(c, 9);
    // 0c224a  push 3
    X86_AT(c, 0xc224au);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c224c  call 0xb607c
    X86_AT(c, 0xc224cu);
    push32(c, 0xc2251u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc2251u);
    X86_TICK(c, 9);
    // 0c2251  push 0x3160
    X86_AT(c, 0xc2251u);
    { uint32_t v = 0x3160u; push32(c, v); }
    // 0c2256  call 0xbc50c
    X86_AT(c, 0xc2256u);
    push32(c, 0xc225bu); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc225bu);
    X86_TICK(c, 2);
    // 0c225b  add esp, 8
    X86_AT(c, 0xc225bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c225e:
    X86_TICK(c, 9);
    // 0c225e  push 4
    X86_AT(c, 0xc225eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2260  call 0xb9930
    X86_AT(c, 0xc2260u);
    push32(c, 0xc2265u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc2265u);
    X86_TICK(c, 9);
    // 0c2265  add esp, 4
    X86_AT(c, 0xc2265u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c2268  and al, al
    X86_AT(c, 0xc2268u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c226a  je 0xc225e
    X86_AT(c, 0xc226au);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc225eu); goto L_c225e; }
    X86_TICK(c, 7);
    // 0c226c  jmp 0xc2361
    X86_AT(c, 0xc226cu);
    goto L_c2361;
L_c2271:
    X86_TICK(c, 11);
    // 0c2271  push 0x31cc
    X86_AT(c, 0xc2271u);
    { uint32_t v = 0x31CCu; push32(c, v); }
    // 0c2276  push 0
    X86_AT(c, 0xc2276u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c2278  call 0xb6db4
    X86_AT(c, 0xc2278u);
    push32(c, 0xc227du); x86_call_known(c, 0xb6db4u, f_000b6db4); X86_RET(c, 0xc227du);
    X86_TICK(c, 12);
    // 0c227d  xchg edi, eax
    X86_AT(c, 0xc227du);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c227e  add esp, 8
    X86_AT(c, 0xc227eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c2281  cmp edi, 0xffffffff
    X86_AT(c, 0xc2281u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0c2284  je 0xc228f
    X86_AT(c, 0xc2284u);
    if (x86_cc(c, 4)) { goto L_c228f; }
    X86_TICK(c, 7);
    // 0c2286  and edi, edi
    X86_AT(c, 0xc2286u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c2288  je 0xc228f
    X86_AT(c, 0xc2288u);
    if (x86_cc(c, 4)) { goto L_c228f; }
    X86_TICK(c, 7);
    // 0c228a  cmp edi, 1
    X86_AT(c, 0xc228au);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0c228d  jne 0xc2271
    X86_AT(c, 0xc228du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc2271u); goto L_c2271; }
L_c228f:
    X86_TICK(c, 7);
    // 0c228f  cmp edi, 1
    X86_AT(c, 0xc228fu);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0c2292  je 0xc21ba
    X86_AT(c, 0xc2292u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc21bau); goto L_c21ba; }
    X86_TICK(c, 7);
    // 0c2298  and edi, edi
    X86_AT(c, 0xc2298u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c229a  je 0xc22c3
    X86_AT(c, 0xc229au);
    if (x86_cc(c, 4)) { goto L_c22c3; }
    X86_TICK(c, 9);
    // 0c229c  push 3
    X86_AT(c, 0xc229cu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c229e  call 0xb607c
    X86_AT(c, 0xc229eu);
    push32(c, 0xc22a3u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc22a3u);
    X86_TICK(c, 9);
    // 0c22a3  push 0x31dc
    X86_AT(c, 0xc22a3u);
    { uint32_t v = 0x31DCu; push32(c, v); }
    // 0c22a8  call 0xbc50c
    X86_AT(c, 0xc22a8u);
    push32(c, 0xc22adu); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc22adu);
    X86_TICK(c, 2);
    // 0c22ad  add esp, 8
    X86_AT(c, 0xc22adu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c22b0:
    X86_TICK(c, 9);
    // 0c22b0  push 4
    X86_AT(c, 0xc22b0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c22b2  call 0xb9930
    X86_AT(c, 0xc22b2u);
    push32(c, 0xc22b7u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc22b7u);
    X86_TICK(c, 9);
    // 0c22b7  add esp, 4
    X86_AT(c, 0xc22b7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c22ba  and al, al
    X86_AT(c, 0xc22bau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c22bc  je 0xc22b0
    X86_AT(c, 0xc22bcu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc22b0u); goto L_c22b0; }
    X86_TICK(c, 7);
    // 0c22be  jmp 0xc2361
    X86_AT(c, 0xc22beu);
    goto L_c2361;
L_c22c3:
    X86_TICK(c, 11);
    // 0c22c3  push 0x3248
    X86_AT(c, 0xc22c3u);
    { uint32_t v = 0x3248u; push32(c, v); }
    // 0c22c8  push 0
    X86_AT(c, 0xc22c8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c22ca  call 0xb6db4
    X86_AT(c, 0xc22cau);
    push32(c, 0xc22cfu); x86_call_known(c, 0xb6db4u, f_000b6db4); X86_RET(c, 0xc22cfu);
    X86_TICK(c, 12);
    // 0c22cf  xchg edi, eax
    X86_AT(c, 0xc22cfu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c22d0  add esp, 8
    X86_AT(c, 0xc22d0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c22d3  cmp edi, 0xffffffff
    X86_AT(c, 0xc22d3u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0c22d6  je 0xc22e1
    X86_AT(c, 0xc22d6u);
    if (x86_cc(c, 4)) { goto L_c22e1; }
    X86_TICK(c, 7);
    // 0c22d8  and edi, edi
    X86_AT(c, 0xc22d8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c22da  je 0xc22e1
    X86_AT(c, 0xc22dau);
    if (x86_cc(c, 4)) { goto L_c22e1; }
    X86_TICK(c, 7);
    // 0c22dc  cmp edi, 1
    X86_AT(c, 0xc22dcu);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0c22df  jne 0xc22c3
    X86_AT(c, 0xc22dfu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc22c3u); goto L_c22c3; }
L_c22e1:
    X86_TICK(c, 7);
    // 0c22e1  cmp edi, 1
    X86_AT(c, 0xc22e1u);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0c22e4  je 0xc21ba
    X86_AT(c, 0xc22e4u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc21bau); goto L_c21ba; }
    X86_TICK(c, 7);
    // 0c22ea  and edi, edi
    X86_AT(c, 0xc22eau);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c22ec  je 0xc2312
    X86_AT(c, 0xc22ecu);
    if (x86_cc(c, 4)) { goto L_c2312; }
    X86_TICK(c, 9);
    // 0c22ee  push 3
    X86_AT(c, 0xc22eeu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c22f0  call 0xb607c
    X86_AT(c, 0xc22f0u);
    push32(c, 0xc22f5u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc22f5u);
    X86_TICK(c, 9);
    // 0c22f5  push 0x3258
    X86_AT(c, 0xc22f5u);
    { uint32_t v = 0x3258u; push32(c, v); }
    // 0c22fa  call 0xbc50c
    X86_AT(c, 0xc22fau);
    push32(c, 0xc22ffu); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc22ffu);
    X86_TICK(c, 2);
    // 0c22ff  add esp, 8
    X86_AT(c, 0xc22ffu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c2302:
    X86_TICK(c, 9);
    // 0c2302  push 4
    X86_AT(c, 0xc2302u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2304  call 0xb9930
    X86_AT(c, 0xc2304u);
    push32(c, 0xc2309u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc2309u);
    X86_TICK(c, 9);
    // 0c2309  add esp, 4
    X86_AT(c, 0xc2309u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c230c  and al, al
    X86_AT(c, 0xc230cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c230e  je 0xc2302
    X86_AT(c, 0xc230eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc2302u); goto L_c2302; }
    X86_TICK(c, 7);
    // 0c2310  jmp 0xc2361
    X86_AT(c, 0xc2310u);
    goto L_c2361;
L_c2312:
    X86_TICK(c, 7);
    // 0c2312  call 0xbf3b4
    X86_AT(c, 0xc2312u);
    push32(c, 0xc2317u); x86_call_known(c, 0xbf3b4u, f_000bf3b4); X86_RET(c, 0xc2317u);
    X86_TICK(c, 7);
    // 0c2317  inc eax
    X86_AT(c, 0xc2317u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0c2318  je 0xc21ba
    X86_AT(c, 0xc2318u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc21bau); goto L_c21ba; }
    X86_TICK(c, 7);
    // 0c231e  call 0xc01e8
    X86_AT(c, 0xc231eu);
    push32(c, 0xc2323u); x86_call_known(c, 0xc01e8u, f_000c01e8); X86_RET(c, 0xc2323u);
    X86_TICK(c, 7);
    // 0c2323  inc eax
    X86_AT(c, 0xc2323u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0c2324  je 0xc21ba
    X86_AT(c, 0xc2324u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc21bau); goto L_c21ba; }
    X86_TICK(c, 7);
    // 0c232a  call 0xbfeb4
    X86_AT(c, 0xc232au);
    push32(c, 0xc232fu); x86_call_known(c, 0xbfeb4u, f_000bfeb4); X86_RET(c, 0xc232fu);
    X86_TICK(c, 7);
    // 0c232f  inc eax
    X86_AT(c, 0xc232fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0c2330  je 0xc21ba
    X86_AT(c, 0xc2330u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc21bau); goto L_c21ba; }
    X86_TICK(c, 12);
    // 0c2336  cmp dword ptr [0xa4a62], 4
    X86_AT(c, 0xc2336u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A62u))), 0x4u, 0, 4);
    // 0c233d  je 0xc236a
    X86_AT(c, 0xc233du);
    if (x86_cc(c, 4)) { goto L_c236a; }
    X86_TICK(c, 9);
    // 0c233f  push 3
    X86_AT(c, 0xc233fu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c2341  call 0xb607c
    X86_AT(c, 0xc2341u);
    push32(c, 0xc2346u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc2346u);
    X86_TICK(c, 9);
    // 0c2346  push 0x32c4
    X86_AT(c, 0xc2346u);
    { uint32_t v = 0x32C4u; push32(c, v); }
    // 0c234b  call 0xbc50c
    X86_AT(c, 0xc234bu);
    push32(c, 0xc2350u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc2350u);
    X86_TICK(c, 2);
    // 0c2350  add esp, 8
    X86_AT(c, 0xc2350u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c2353:
    X86_TICK(c, 9);
    // 0c2353  push 4
    X86_AT(c, 0xc2353u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2355  call 0xb9930
    X86_AT(c, 0xc2355u);
    push32(c, 0xc235au); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc235au);
    X86_TICK(c, 9);
    // 0c235a  add esp, 4
    X86_AT(c, 0xc235au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c235d  and al, al
    X86_AT(c, 0xc235du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c235f  je 0xc2353
    X86_AT(c, 0xc235fu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc2353u); goto L_c2353; }
L_c2361:
    X86_TICK(c, 9);
    // 0c2361  push 4
    X86_AT(c, 0xc2361u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2363  call 0xbb6b0
    X86_AT(c, 0xc2363u);
    push32(c, 0xc2368u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2368u);
    X86_TICK(c, 7);
    // 0c2368  jmp 0xc237b
    X86_AT(c, 0xc2368u);
    goto L_c237b;
L_c236a:
    X86_TICK(c, 9);
    // 0c236a  push 2
    X86_AT(c, 0xc236au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c236c  call 0xbbb5c
    X86_AT(c, 0xc236cu);
    push32(c, 0xc2371u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc2371u);
    X86_TICK(c, 7);
    // 0c2371  call 0xbea0c
    X86_AT(c, 0xc2371u);
    push32(c, 0xc2376u); x86_call_known(c, 0xbea0cu, f_000bea0c); X86_RET(c, 0xc2376u);
    X86_TICK(c, 7);
    // 0c2376  call 0xbed54
    X86_AT(c, 0xc2376u);
    push32(c, 0xc237bu); x86_call_known(c, 0xbed54u, f_000bed54); X86_RET(c, 0xc237bu);
L_c237b:
    X86_TICK(c, 9);
    // 0c237b  add esp, 4
    X86_AT(c, 0xc237bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c237e  jmp 0xc21ba
    X86_AT(c, 0xc237eu);
    X86_POLL(c, 0xc21bau); goto L_c21ba;
    x86_fault(c, 0xc237bu, "ran off the end of a function");
}
void f_000c2383(X86Cpu& c) {
    X86_TICK(c, 37);
    // 0c2383  sub eax, eax
    X86_AT(c, 0xc2383u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c2385  mov dword ptr [0xa6134], eax
    X86_AT(c, 0xc2385u);
    wr32((c.sbase[3] + (uint32_t)(0xA6134u)), c.r[0]);
    // 0c238a  mov dword ptr [0xa4a5e], eax
    X86_AT(c, 0xc238au);
    wr32((c.sbase[3] + (uint32_t)(0xA4A5Eu)), c.r[0]);
    // 0c238f  mov dword ptr [0xa4a62], eax
    X86_AT(c, 0xc238fu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A62u)), c.r[0]);
    // 0c2394  mov dword ptr [0xa4a66], 1
    X86_AT(c, 0xc2394u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A66u)), 0x1u);
    // 0c239e  mov dword ptr [0xa4a6a], 1
    X86_AT(c, 0xc239eu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A6Au)), 0x1u);
    // 0c23a8  mov dword ptr [0xa4a6e], 1
    X86_AT(c, 0xc23a8u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A6Eu)), 0x1u);
    // 0c23b2  mov dword ptr [0xa4a72], 1
    X86_AT(c, 0xc23b2u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A72u)), 0x1u);
    // 0c23bc  mov dword ptr [0xa4a7e], eax
    X86_AT(c, 0xc23bcu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A7Eu)), c.r[0]);
    // 0c23c1  mov dword ptr [0xa4a82], eax
    X86_AT(c, 0xc23c1u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A82u)), c.r[0]);
    // 0c23c6  mov dword ptr [0xa4a86], eax
    X86_AT(c, 0xc23c6u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A86u)), c.r[0]);
    // 0c23cb  mov dword ptr [0xa4a8a], eax
    X86_AT(c, 0xc23cbu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A8Au)), c.r[0]);
    // 0c23d0  mov edx, 0xffffffff
    X86_AT(c, 0xc23d0u);
    c.r[2] = 0xFFFFFFFFu;
    // 0c23d5  mov dword ptr [0xa4a8e], edx
    X86_AT(c, 0xc23d5u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A8Eu)), c.r[2]);
    // 0c23db  mov dword ptr [0xa4a92], edx
    X86_AT(c, 0xc23dbu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A92u)), c.r[2]);
    // 0c23e1  mov dword ptr [0xa4a96], edx
    X86_AT(c, 0xc23e1u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A96u)), c.r[2]);
    // 0c23e7  mov dword ptr [0xa4a9a], eax
    X86_AT(c, 0xc23e7u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A9Au)), c.r[0]);
    // 0c23ec  xchg ecx, eax
    X86_AT(c, 0xc23ecu);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_c23ed:
    X86_TICK(c, 7);
    // 0c23ed  cmp ecx, 0x14
    X86_AT(c, 0xc23edu);
    (void)x86_sub(c, c.r[1], 0x14u, 0, 4);
    // 0c23f0  jge 0xc2413
    X86_AT(c, 0xc23f0u);
    if (x86_cc(c, 13)) { goto L_c2413; }
    X86_TICK(c, 24);
    // 0c23f2  mov eax, ecx
    X86_AT(c, 0xc23f2u);
    c.r[0] = c.r[1];
    // 0c23f4  lea edx, [eax + eax*2]
    X86_AT(c, 0xc23f4u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c23f7  shl edx, 5
    X86_AT(c, 0xc23f7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c23fa  add edx, eax
    X86_AT(c, 0xc23fau);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c23fc  lea edx, [eax + edx*2]
    X86_AT(c, 0xc23fcu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c23ff  mov byte ptr [edx + 0xa4dac], 0
    X86_AT(c, 0xc23ffu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DACu)), 0x0u);
    // 0c2406  mov dword ptr [edx + 0xa4dc5], 0xffffffff
    X86_AT(c, 0xc2406u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DC5u)), 0xFFFFFFFFu);
    // 0c2410  inc ecx
    X86_AT(c, 0xc2410u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0c2411  jmp 0xc23ed
    X86_AT(c, 0xc2411u);
    X86_POLL(c, 0xc23edu); goto L_c23ed;
L_c2413:
    X86_TICK(c, 10);
    // 0c2413  ret 
    X86_AT(c, 0xc2413u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc2383u, "ran off the end of a function");
}
void f_000c2414(X86Cpu& c) {
    X86_TICK(c, 63);
    // 0c2414  push ebp
    X86_AT(c, 0xc2414u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c2415  mov ebp, esp
    X86_AT(c, 0xc2415u);
    c.r[5] = c.r[4];
    // 0c2417  push esi
    X86_AT(c, 0xc2417u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c2418  push edi
    X86_AT(c, 0xc2418u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c2419  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0xc2419u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c241c  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc241cu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c241f  mov ecx, 0x30
    X86_AT(c, 0xc241fu);
    c.r[1] = 0x30u;
    // 0c2424  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xc2424u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0c2426  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0xc2426u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 0c2428  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xc2428u);
    x86_string(c, 0, 1, 0, 4, 3);
    // 0c2429  pop edi
    X86_AT(c, 0xc2429u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c242a  pop esi
    X86_AT(c, 0xc242au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c242b  leave 
    X86_AT(c, 0xc242bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c242c  ret 
    X86_AT(c, 0xc242cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc2414u, "ran off the end of a function");
}
void f_000c2430(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0c2430  push ebp
    X86_AT(c, 0xc2430u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c2431  mov ebp, esp
    X86_AT(c, 0xc2431u);
    c.r[5] = c.r[4];
    // 0c2433  sub esp, 0xc
    X86_AT(c, 0xc2433u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0c2436  push ebx
    X86_AT(c, 0xc2436u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c2437  push esi
    X86_AT(c, 0xc2437u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c2438  push edi
    X86_AT(c, 0xc2438u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c2439  push 9
    X86_AT(c, 0xc2439u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0c243b  push 0x2b
    X86_AT(c, 0xc243bu);
    { uint32_t v = 0x2Bu; push32(c, v); }
    // 0c243d  push 3
    X86_AT(c, 0xc243du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c243f  push 2
    X86_AT(c, 0xc243fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c2441  push 4
    X86_AT(c, 0xc2441u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2443  call 0xbc2b0
    X86_AT(c, 0xc2443u);
    push32(c, 0xc2448u); x86_call_known(c, 0xbc2b0u, f_000bc2b0); X86_RET(c, 0xc2448u);
    X86_TICK(c, 13);
    // 0c2448  push 3
    X86_AT(c, 0xc2448u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c244a  push 0
    X86_AT(c, 0xc244au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c244c  push 4
    X86_AT(c, 0xc244cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c244e  call 0xbc174
    X86_AT(c, 0xc244eu);
    push32(c, 0xc2453u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2453u);
    X86_TICK(c, 11);
    // 0c2453  push 0xe
    X86_AT(c, 0xc2453u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c2455  push 4
    X86_AT(c, 0xc2455u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2457  call 0xbc3ec
    X86_AT(c, 0xc2457u);
    push32(c, 0xc245cu); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc245cu);
    X86_TICK(c, 9);
    // 0c245c  push 4
    X86_AT(c, 0xc245cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c245e  call 0xbb6b0
    X86_AT(c, 0xc245eu);
    push32(c, 0xc2463u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2463u);
    X86_TICK(c, 11);
    // 0c2463  push 0x3328
    X86_AT(c, 0xc2463u);
    { uint32_t v = 0x3328u; push32(c, v); }
    // 0c2468  push 4
    X86_AT(c, 0xc2468u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c246a  call 0xba428
    X86_AT(c, 0xc246au);
    push32(c, 0xc246fu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc246fu);
    X86_TICK(c, 11);
    // 0c246f  push 0xb
    X86_AT(c, 0xc246fu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c2471  push 4
    X86_AT(c, 0xc2471u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2473  call 0xbc3ec
    X86_AT(c, 0xc2473u);
    push32(c, 0xc2478u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc2478u);
    X86_TICK(c, 11);
    // 0c2478  add esp, 0x3c
    X86_AT(c, 0xc2478u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c247b  push 4
    X86_AT(c, 0xc247bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c247d  call 0xbb6b0
    X86_AT(c, 0xc247du);
    push32(c, 0xc2482u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2482u);
    X86_TICK(c, 4);
    // 0c2482  sub edi, edi
    X86_AT(c, 0xc2482u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0c2484  add esp, 4
    X86_AT(c, 0xc2484u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c2487:
    X86_TICK(c, 7);
    // 0c2487  cmp edi, 0x14
    X86_AT(c, 0xc2487u);
    (void)x86_sub(c, c.r[7], 0x14u, 0, 4);
    // 0c248a  jge 0xc26f3
    X86_AT(c, 0xc248au);
    if (x86_cc(c, 13)) { goto L_c26f3; }
    X86_TICK(c, 17);
    // 0c2490  mov ebx, 0xffffffff
    X86_AT(c, 0xc2490u);
    c.r[3] = 0xFFFFFFFFu;
    // 0c2495  lea eax, [edi + 4]
    X86_AT(c, 0xc2495u);
    c.r[0] = (uint32_t)(c.r[7] + 0x4u);
    // 0c2498  push eax
    X86_AT(c, 0xc2498u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2499  push 0
    X86_AT(c, 0xc2499u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c249b  push 4
    X86_AT(c, 0xc249bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c249d  call 0xbc174
    X86_AT(c, 0xc249du);
    push32(c, 0xc24a2u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc24a2u);
    X86_TICK(c, 20);
    // 0c24a2  lea eax, [edi + edi*2]
    X86_AT(c, 0xc24a2u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c24a5  lea edx, [eax*8]
    X86_AT(c, 0xc24a5u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c24ac  lea edx, [eax + edx*8]
    X86_AT(c, 0xc24acu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c24af  add esp, 0xc
    X86_AT(c, 0xc24afu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c24b2  cmp dword ptr [edx + 0xa4dc5], 0
    X86_AT(c, 0xc24b2u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DC5u))), 0x0u, 0, 4);
    // 0c24b9  jne 0xc24d0
    X86_AT(c, 0xc24b9u);
    if (x86_cc(c, 5)) { goto L_c24d0; }
    X86_TICK(c, 13);
    // 0c24bb  sub ebx, ebx
    X86_AT(c, 0xc24bbu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0c24bd  push 0xc
    X86_AT(c, 0xc24bdu);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0c24bf  push 4
    X86_AT(c, 0xc24bfu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c24c1  call 0xbc3ec
    X86_AT(c, 0xc24c1u);
    push32(c, 0xc24c6u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc24c6u);
    X86_TICK(c, 9);
    // 0c24c6  push 4
    X86_AT(c, 0xc24c6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c24c8  call 0xbb6b0
    X86_AT(c, 0xc24c8u);
    push32(c, 0xc24cdu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc24cdu);
    X86_TICK(c, 2);
    // 0c24cd  add esp, 0xc
    X86_AT(c, 0xc24cdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_c24d0:
    X86_TICK(c, 15);
    // 0c24d0  push 2
    X86_AT(c, 0xc24d0u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c24d2  lea eax, [edi + 1]
    X86_AT(c, 0xc24d2u);
    c.r[0] = (uint32_t)(c.r[7] + 0x1u);
    // 0c24d5  push eax
    X86_AT(c, 0xc24d5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c24d6  push 4
    X86_AT(c, 0xc24d6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c24d8  call 0xba404
    X86_AT(c, 0xc24d8u);
    push32(c, 0xc24ddu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc24ddu);
    X86_TICK(c, 11);
    // 0c24dd  push 0x334a
    X86_AT(c, 0xc24ddu);
    { uint32_t v = 0x334Au; push32(c, v); }
    // 0c24e2  push 4
    X86_AT(c, 0xc24e2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c24e4  call 0xbbba4
    X86_AT(c, 0xc24e4u);
    push32(c, 0xc24e9u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc24e9u);
    X86_TICK(c, 15);
    // 0c24e9  lea eax, [edi + 4]
    X86_AT(c, 0xc24e9u);
    c.r[0] = (uint32_t)(c.r[7] + 0x4u);
    // 0c24ec  push eax
    X86_AT(c, 0xc24ecu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c24ed  push 6
    X86_AT(c, 0xc24edu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c24ef  push 4
    X86_AT(c, 0xc24efu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c24f1  call 0xbc174
    X86_AT(c, 0xc24f1u);
    push32(c, 0xc24f6u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc24f6u);
    X86_TICK(c, 20);
    // 0c24f6  lea eax, [edi + edi*2]
    X86_AT(c, 0xc24f6u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c24f9  lea edx, [eax*8]
    X86_AT(c, 0xc24f9u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2500  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2500u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2503  add esp, 0x20
    X86_AT(c, 0xc2503u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0c2506  cmp byte ptr [edx + 0xa4dac], 0
    X86_AT(c, 0xc2506u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DACu))), 0x0u, 0, 1);
    // 0c250d  je 0xc2523
    X86_AT(c, 0xc250du);
    if (x86_cc(c, 4)) { goto L_c2523; }
    X86_TICK(c, 13);
    // 0c250f  lea eax, [edx*1 + 0xa4dac]
    X86_AT(c, 0xc250fu);
    c.r[0] = (uint32_t)(c.r[2] + 0xA4DACu);
    // 0c2516  push eax
    X86_AT(c, 0xc2516u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2517  push 4
    X86_AT(c, 0xc2517u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2519  call 0xbbfe0
    X86_AT(c, 0xc2519u);
    push32(c, 0xc251eu); x86_call_known(c, 0xbbfe0u, f_000bbfe0); X86_RET(c, 0xc251eu);
    X86_TICK(c, 9);
    // 0c251e  add esp, 8
    X86_AT(c, 0xc251eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c2521  jmp 0xc2534
    X86_AT(c, 0xc2521u);
    goto L_c2534;
L_c2523:
    X86_TICK(c, 11);
    // 0c2523  push 0x3350
    X86_AT(c, 0xc2523u);
    { uint32_t v = 0x3350u; push32(c, v); }
    // 0c2528  push 4
    X86_AT(c, 0xc2528u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c252a  call 0xba428
    X86_AT(c, 0xc252au);
    push32(c, 0xc252fu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc252fu);
    X86_TICK(c, 7);
    // 0c252f  jmp 0xc26da
    X86_AT(c, 0xc252fu);
    goto L_c26da;
L_c2534:
    X86_TICK(c, 7);
    // 0c2534  and ebx, ebx
    X86_AT(c, 0xc2534u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0c2536  jne 0xc260b
    X86_AT(c, 0xc2536u);
    if (x86_cc(c, 5)) { goto L_c260b; }
    X86_TICK(c, 2);
    // 0c253c  sub esi, esi
    X86_AT(c, 0xc253cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c253e:
    X86_TICK(c, 7);
    // 0c253e  cmp esi, 4
    X86_AT(c, 0xc253eu);
    (void)x86_sub(c, c.r[6], 0x4u, 0, 4);
    // 0c2541  jge 0xc254f
    X86_AT(c, 0xc2541u);
    if (x86_cc(c, 13)) { goto L_c254f; }
    X86_TICK(c, 11);
    // 0c2543  cmp edi, dword ptr [esi*4 + 0xa4a7e]
    X86_AT(c, 0xc2543u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA4A7Eu))), 0, 4);
    // 0c254a  je 0xc254f
    X86_AT(c, 0xc254au);
    if (x86_cc(c, 4)) { goto L_c254f; }
    X86_TICK(c, 9);
    // 0c254c  inc esi
    X86_AT(c, 0xc254cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c254d  jmp 0xc253e
    X86_AT(c, 0xc254du);
    X86_POLL(c, 0xc253eu); goto L_c253e;
L_c254f:
    X86_TICK(c, 17);
    // 0c254f  lea eax, [edi + 4]
    X86_AT(c, 0xc254fu);
    c.r[0] = (uint32_t)(c.r[7] + 0x4u);
    // 0c2552  push eax
    X86_AT(c, 0xc2552u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2553  push 0x17
    X86_AT(c, 0xc2553u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0c2555  push 4
    X86_AT(c, 0xc2555u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2557  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xc2557u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0c255a  call 0xbc174
    X86_AT(c, 0xc255au);
    push32(c, 0xc255fu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc255fu);
    X86_TICK(c, 29);
    // 0c255f  lea eax, [ebp - 1]
    X86_AT(c, 0xc255fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0c2562  push eax
    X86_AT(c, 0xc2562u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2563  lea edx, [esi + esi*2]
    X86_AT(c, 0xc2563u);
    c.r[2] = (uint32_t)(c.r[6] + c.r[6] * 2);
    // 0c2566  lea ecx, [edx*8]
    X86_AT(c, 0xc2566u);
    c.r[1] = (uint32_t)(c.r[2] * 8);
    // 0c256d  lea ecx, [edx + ecx*8]
    X86_AT(c, 0xc256du);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 8);
    // 0c2570  mov dl, byte ptr [ecx + 0xa4ad0]
    X86_AT(c, 0xc2570u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4AD0u))));
    // 0c2576  push edx
    X86_AT(c, 0xc2576u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c2577  push 3
    X86_AT(c, 0xc2577u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c2579  push 0xa804c
    X86_AT(c, 0xc2579u);
    { uint32_t v = 0xA804Cu; push32(c, v); }
    // 0c257e  mov dword ptr [ebp - 0xc], ecx
    X86_AT(c, 0xc257eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[1]);
    // 0c2581  call 0xba1b4
    X86_AT(c, 0xc2581u);
    push32(c, 0xc2586u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc2586u);
    X86_TICK(c, 11);
    // 0c2586  push eax
    X86_AT(c, 0xc2586u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2587  push 4
    X86_AT(c, 0xc2587u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2589  call 0xbbba4
    X86_AT(c, 0xc2589u);
    push32(c, 0xc258eu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc258eu);
    X86_TICK(c, 16);
    // 0c258e  push dword ptr [ebp - 8]
    X86_AT(c, 0xc258eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0c2591  push 0x23
    X86_AT(c, 0xc2591u);
    { uint32_t v = 0x23u; push32(c, v); }
    // 0c2593  push 4
    X86_AT(c, 0xc2593u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2595  call 0xbc174
    X86_AT(c, 0xc2595u);
    push32(c, 0xc259au); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc259au);
    X86_TICK(c, 25);
    // 0c259a  lea eax, [ebp - 1]
    X86_AT(c, 0xc259au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0c259d  push eax
    X86_AT(c, 0xc259du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c259e  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xc259eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0c25a1  mov cl, byte ptr [edx + 0xa4ace]
    X86_AT(c, 0xc25a1u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ACEu))));
    // 0c25a7  push ecx
    X86_AT(c, 0xc25a7u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0c25a8  push 5
    X86_AT(c, 0xc25a8u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c25aa  push 0xa81d8
    X86_AT(c, 0xc25aau);
    { uint32_t v = 0xA81D8u; push32(c, v); }
    // 0c25af  call 0xba1b4
    X86_AT(c, 0xc25afu);
    push32(c, 0xc25b4u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc25b4u);
    X86_TICK(c, 13);
    // 0c25b4  add esp, 0x40
    X86_AT(c, 0xc25b4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c25b7  push eax
    X86_AT(c, 0xc25b7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c25b8  push 4
    X86_AT(c, 0xc25b8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c25ba  call 0xbbba4
    X86_AT(c, 0xc25bau);
    push32(c, 0xc25bfu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc25bfu);
    X86_TICK(c, 16);
    // 0c25bf  push dword ptr [ebp - 8]
    X86_AT(c, 0xc25bfu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0c25c2  push 0x2f
    X86_AT(c, 0xc25c2u);
    { uint32_t v = 0x2Fu; push32(c, v); }
    // 0c25c4  push 4
    X86_AT(c, 0xc25c4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c25c6  call 0xbc174
    X86_AT(c, 0xc25c6u);
    push32(c, 0xc25cbu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc25cbu);
    X86_TICK(c, 25);
    // 0c25cb  lea eax, [ebp - 1]
    X86_AT(c, 0xc25cbu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0c25ce  push eax
    X86_AT(c, 0xc25ceu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c25cf  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xc25cfu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0c25d2  mov cl, byte ptr [edx + 0xa4acf]
    X86_AT(c, 0xc25d2u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ACFu))));
    // 0c25d8  push ecx
    X86_AT(c, 0xc25d8u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0c25d9  push 0xb
    X86_AT(c, 0xc25d9u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c25db  push 0xa846c
    X86_AT(c, 0xc25dbu);
    { uint32_t v = 0xA846Cu; push32(c, v); }
    // 0c25e0  call 0xba1b4
    X86_AT(c, 0xc25e0u);
    push32(c, 0xc25e5u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc25e5u);
    X86_TICK(c, 11);
    // 0c25e5  push eax
    X86_AT(c, 0xc25e5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c25e6  push 4
    X86_AT(c, 0xc25e6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c25e8  call 0xbbba4
    X86_AT(c, 0xc25e8u);
    push32(c, 0xc25edu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc25edu);
    X86_TICK(c, 16);
    // 0c25ed  push dword ptr [ebp - 8]
    X86_AT(c, 0xc25edu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0c25f0  push 0x45
    X86_AT(c, 0xc25f0u);
    { uint32_t v = 0x45u; push32(c, v); }
    // 0c25f2  push 4
    X86_AT(c, 0xc25f2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c25f4  call 0xbc174
    X86_AT(c, 0xc25f4u);
    push32(c, 0xc25f9u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc25f9u);
    X86_TICK(c, 19);
    // 0c25f9  lea eax, [ebp - 1]
    X86_AT(c, 0xc25f9u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0c25fc  push eax
    X86_AT(c, 0xc25fcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c25fd  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xc25fdu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0c2600  mov al, byte ptr [eax + 0xa4abd]
    X86_AT(c, 0xc2600u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4ABDu))));
    // 0c2606  jmp 0xc26c2
    X86_AT(c, 0xc2606u);
    goto L_c26c2;
L_c260b:
    X86_TICK(c, 17);
    // 0c260b  lea eax, [edi + 4]
    X86_AT(c, 0xc260bu);
    c.r[0] = (uint32_t)(c.r[7] + 0x4u);
    // 0c260e  push eax
    X86_AT(c, 0xc260eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c260f  push 0x17
    X86_AT(c, 0xc260fu);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0c2611  push 4
    X86_AT(c, 0xc2611u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2613  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xc2613u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0c2616  call 0xbc174
    X86_AT(c, 0xc2616u);
    push32(c, 0xc261bu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc261bu);
    X86_TICK(c, 29);
    // 0c261b  lea eax, [ebp - 1]
    X86_AT(c, 0xc261bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0c261e  push eax
    X86_AT(c, 0xc261eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c261f  lea edx, [edi + edi*2]
    X86_AT(c, 0xc261fu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2622  lea ecx, [edx*8]
    X86_AT(c, 0xc2622u);
    c.r[1] = (uint32_t)(c.r[2] * 8);
    // 0c2629  lea ecx, [edx + ecx*8]
    X86_AT(c, 0xc2629u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 8);
    // 0c262c  mov dl, byte ptr [ecx + 0xa4ddc]
    X86_AT(c, 0xc262cu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4DDCu))));
    // 0c2632  push edx
    X86_AT(c, 0xc2632u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c2633  push 3
    X86_AT(c, 0xc2633u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c2635  push 0xa804c
    X86_AT(c, 0xc2635u);
    { uint32_t v = 0xA804Cu; push32(c, v); }
    // 0c263a  mov dword ptr [ebp - 0xc], ecx
    X86_AT(c, 0xc263au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[1]);
    // 0c263d  call 0xba1b4
    X86_AT(c, 0xc263du);
    push32(c, 0xc2642u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc2642u);
    X86_TICK(c, 11);
    // 0c2642  push eax
    X86_AT(c, 0xc2642u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2643  push 4
    X86_AT(c, 0xc2643u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2645  call 0xbbba4
    X86_AT(c, 0xc2645u);
    push32(c, 0xc264au); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc264au);
    X86_TICK(c, 16);
    // 0c264a  push dword ptr [ebp - 8]
    X86_AT(c, 0xc264au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0c264d  push 0x23
    X86_AT(c, 0xc264du);
    { uint32_t v = 0x23u; push32(c, v); }
    // 0c264f  push 4
    X86_AT(c, 0xc264fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2651  call 0xbc174
    X86_AT(c, 0xc2651u);
    push32(c, 0xc2656u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2656u);
    X86_TICK(c, 25);
    // 0c2656  lea eax, [ebp - 1]
    X86_AT(c, 0xc2656u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0c2659  push eax
    X86_AT(c, 0xc2659u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c265a  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xc265au);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0c265d  mov cl, byte ptr [edx + 0xa4dda]
    X86_AT(c, 0xc265du);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDAu))));
    // 0c2663  push ecx
    X86_AT(c, 0xc2663u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0c2664  push 5
    X86_AT(c, 0xc2664u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2666  push 0xa81d8
    X86_AT(c, 0xc2666u);
    { uint32_t v = 0xA81D8u; push32(c, v); }
    // 0c266b  call 0xba1b4
    X86_AT(c, 0xc266bu);
    push32(c, 0xc2670u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc2670u);
    X86_TICK(c, 13);
    // 0c2670  add esp, 0x40
    X86_AT(c, 0xc2670u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c2673  push eax
    X86_AT(c, 0xc2673u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2674  push 4
    X86_AT(c, 0xc2674u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2676  call 0xbbba4
    X86_AT(c, 0xc2676u);
    push32(c, 0xc267bu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc267bu);
    X86_TICK(c, 16);
    // 0c267b  push dword ptr [ebp - 8]
    X86_AT(c, 0xc267bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0c267e  push 0x2f
    X86_AT(c, 0xc267eu);
    { uint32_t v = 0x2Fu; push32(c, v); }
    // 0c2680  push 4
    X86_AT(c, 0xc2680u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2682  call 0xbc174
    X86_AT(c, 0xc2682u);
    push32(c, 0xc2687u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2687u);
    X86_TICK(c, 25);
    // 0c2687  lea eax, [ebp - 1]
    X86_AT(c, 0xc2687u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0c268a  push eax
    X86_AT(c, 0xc268au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c268b  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xc268bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0c268e  mov cl, byte ptr [edx + 0xa4ddb]
    X86_AT(c, 0xc268eu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDBu))));
    // 0c2694  push ecx
    X86_AT(c, 0xc2694u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0c2695  push 0xb
    X86_AT(c, 0xc2695u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c2697  push 0xa846c
    X86_AT(c, 0xc2697u);
    { uint32_t v = 0xA846Cu; push32(c, v); }
    // 0c269c  call 0xba1b4
    X86_AT(c, 0xc269cu);
    push32(c, 0xc26a1u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc26a1u);
    X86_TICK(c, 11);
    // 0c26a1  push eax
    X86_AT(c, 0xc26a1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c26a2  push 4
    X86_AT(c, 0xc26a2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c26a4  call 0xbbba4
    X86_AT(c, 0xc26a4u);
    push32(c, 0xc26a9u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc26a9u);
    X86_TICK(c, 16);
    // 0c26a9  push dword ptr [ebp - 8]
    X86_AT(c, 0xc26a9u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0c26ac  push 0x45
    X86_AT(c, 0xc26acu);
    { uint32_t v = 0x45u; push32(c, v); }
    // 0c26ae  push 4
    X86_AT(c, 0xc26aeu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c26b0  call 0xbc174
    X86_AT(c, 0xc26b0u);
    push32(c, 0xc26b5u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc26b5u);
    X86_TICK(c, 12);
    // 0c26b5  lea eax, [ebp - 1]
    X86_AT(c, 0xc26b5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0c26b8  push eax
    X86_AT(c, 0xc26b8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c26b9  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xc26b9u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0c26bc  mov al, byte ptr [eax + 0xa4dc9]
    X86_AT(c, 0xc26bcu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4DC9u))));
L_c26c2:
    X86_TICK(c, 13);
    // 0c26c2  push eax
    X86_AT(c, 0xc26c2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c26c3  push 4
    X86_AT(c, 0xc26c3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c26c5  push 0xa699c
    X86_AT(c, 0xc26c5u);
    { uint32_t v = 0xA699Cu; push32(c, v); }
    // 0c26ca  call 0xba1b4
    X86_AT(c, 0xc26cau);
    push32(c, 0xc26cfu); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc26cfu);
    X86_TICK(c, 13);
    // 0c26cf  add esp, 0x48
    X86_AT(c, 0xc26cfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x48u, 0, 4); }
    // 0c26d2  push eax
    X86_AT(c, 0xc26d2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c26d3  push 4
    X86_AT(c, 0xc26d3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c26d5  call 0xbbba4
    X86_AT(c, 0xc26d5u);
    push32(c, 0xc26dau); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc26dau);
L_c26da:
    X86_TICK(c, 11);
    // 0c26da  push 0xb
    X86_AT(c, 0xc26dau);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c26dc  push 4
    X86_AT(c, 0xc26dcu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c26de  call 0xbc3ec
    X86_AT(c, 0xc26deu);
    push32(c, 0xc26e3u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc26e3u);
    X86_TICK(c, 9);
    // 0c26e3  push 4
    X86_AT(c, 0xc26e3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c26e5  call 0xbb6b0
    X86_AT(c, 0xc26e5u);
    push32(c, 0xc26eau); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc26eau);
    X86_TICK(c, 11);
    // 0c26ea  add esp, 0x14
    X86_AT(c, 0xc26eau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0c26ed  inc edi
    X86_AT(c, 0xc26edu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c26ee  jmp 0xc2487
    X86_AT(c, 0xc26eeu);
    X86_POLL(c, 0xc2487u); goto L_c2487;
L_c26f3:
    X86_TICK(c, 9);
    // 0c26f3  push 0x3368
    X86_AT(c, 0xc26f3u);
    { uint32_t v = 0x3368u; push32(c, v); }
    // 0c26f8  call 0xbc50c
    X86_AT(c, 0xc26f8u);
    push32(c, 0xc26fdu); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc26fdu);
    X86_TICK(c, 2);
    // 0c26fd  add esp, 4
    X86_AT(c, 0xc26fdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c2700:
    X86_TICK(c, 9);
    // 0c2700  push 4
    X86_AT(c, 0xc2700u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2702  call 0xb9930
    X86_AT(c, 0xc2702u);
    push32(c, 0xc2707u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc2707u);
    X86_TICK(c, 9);
    // 0c2707  add esp, 4
    X86_AT(c, 0xc2707u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c270a  and al, al
    X86_AT(c, 0xc270au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c270c  je 0xc2700
    X86_AT(c, 0xc270cu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc2700u); goto L_c2700; }
    X86_TICK(c, 9);
    // 0c270e  push 2
    X86_AT(c, 0xc270eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c2710  call 0xbbb5c
    X86_AT(c, 0xc2710u);
    push32(c, 0xc2715u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc2715u);
    X86_TICK(c, 9);
    // 0c2715  push 4
    X86_AT(c, 0xc2715u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2717  call 0xbb6b0
    X86_AT(c, 0xc2717u);
    push32(c, 0xc271cu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc271cu);
    X86_TICK(c, 17);
    // 0c271c  push 0x17
    X86_AT(c, 0xc271cu);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0c271e  push 0x4d
    X86_AT(c, 0xc271eu);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0c2720  push 3
    X86_AT(c, 0xc2720u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c2722  push 0
    X86_AT(c, 0xc2722u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c2724  push 4
    X86_AT(c, 0xc2724u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2726  call 0xbc2b0
    X86_AT(c, 0xc2726u);
    push32(c, 0xc272bu); x86_call_known(c, 0xbc2b0u, f_000bc2b0); X86_RET(c, 0xc272bu);
    X86_TICK(c, 30);
    // 0c272b  add esp, 0x1c
    X86_AT(c, 0xc272bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0c272e  pop edi
    X86_AT(c, 0xc272eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c272f  pop esi
    X86_AT(c, 0xc272fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c2730  pop ebx
    X86_AT(c, 0xc2730u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c2731  leave 
    X86_AT(c, 0xc2731u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c2732  ret 
    X86_AT(c, 0xc2732u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc2430u, "ran off the end of a function");
}
void f_000c2734(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0c2734  push ebp
    X86_AT(c, 0xc2734u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c2735  mov ebp, esp
    X86_AT(c, 0xc2735u);
    c.r[5] = c.r[4];
    // 0c2737  sub esp, 0x20
    X86_AT(c, 0xc2737u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x20u, 0, 4); }
    // 0c273a  push ebx
    X86_AT(c, 0xc273au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c273b  push esi
    X86_AT(c, 0xc273bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c273c  push edi
    X86_AT(c, 0xc273cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c273d  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc273du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c2740  sub eax, eax
    X86_AT(c, 0xc2740u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c2742  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xc2742u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0c2745  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xc2745u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
L_c2748:
    X86_TICK(c, 11);
    // 0c2748  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xc2748u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0c274b  cmp eax, 9
    X86_AT(c, 0xc274bu);
    (void)x86_sub(c, c.r[0], 0x9u, 0, 4);
    // 0c274e  jge 0xc275a
    X86_AT(c, 0xc274eu);
    if (x86_cc(c, 13)) { goto L_c275a; }
    X86_TICK(c, 15);
    // 0c2750  mov byte ptr [ebp + eax*1 - 0x18], 0x20
    X86_AT(c, 0xc2750u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFFE8u)), 0x20u);
    // 0c2755  inc dword ptr [ebp - 8]
    X86_AT(c, 0xc2755u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c2758  jmp 0xc2748
    X86_AT(c, 0xc2758u);
    X86_POLL(c, 0xc2748u); goto L_c2748;
L_c275a:
    X86_TICK(c, 30);
    // 0c275a  sub eax, eax
    X86_AT(c, 0xc275au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c275c  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0xc275cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0c275f  mov byte ptr [ebp + edx*1 - 0x18], al
    X86_AT(c, 0xc275fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[2] + 0xFFFFFFE8u)), g8(c, 0));
    // 0c2763  lea edx, [edi + edi*2]
    X86_AT(c, 0xc2763u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2766  lea ecx, [edx*8]
    X86_AT(c, 0xc2766u);
    c.r[1] = (uint32_t)(c.r[2] * 8);
    // 0c276d  lea ecx, [edx + ecx*8]
    X86_AT(c, 0xc276du);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 8);
    // 0c2770  mov dword ptr [ecx + 0xa4dca], eax
    X86_AT(c, 0xc2770u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4DCAu)), c.r[0]);
    // 0c2776  mov dword ptr [ecx + 0xa4dce], eax
    X86_AT(c, 0xc2776u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4DCEu)), c.r[0]);
    // 0c277c  mov dword ptr [ecx + 0xa4dd2], eax
    X86_AT(c, 0xc277cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4DD2u)), c.r[0]);
    // 0c2782  mov dword ptr [ecx + 0xa4dd6], eax
    X86_AT(c, 0xc2782u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4DD6u)), c.r[0]);
    // 0c2788  mov byte ptr [ecx + 0xa4dda], al
    X86_AT(c, 0xc2788u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4DDAu)), g8(c, 0));
    // 0c278e  mov byte ptr [ecx + 0xa4ddb], al
    X86_AT(c, 0xc278eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4DDBu)), g8(c, 0));
    // 0c2794  mov byte ptr [ecx + 0xa4ddc], al
    X86_AT(c, 0xc2794u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4DDCu)), g8(c, 0));
    // 0c279a  mov dword ptr [ecx + 0xa4ddd], eax
    X86_AT(c, 0xc279au);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4DDDu)), c.r[0]);
L_c27a0:
    X86_TICK(c, 11);
    // 0c27a0  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xc27a0u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c27a3  cmp edx, 8
    X86_AT(c, 0xc27a3u);
    (void)x86_sub(c, c.r[2], 0x8u, 0, 4);
    // 0c27a6  ja 0xc27a0
    X86_AT(c, 0xc27a6u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xc27a0u); goto L_c27a0; }
    X86_TICK(c, 7);
    // 0c27a8  jmp dword ptr cs:[edx*4 + 0xc27b0]
    X86_AT(c, 0xc27a8u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC27B0u)));
      switch (t) {
      case 0xc27d4u: goto L_c27d4;
      case 0xc2891u: goto L_c2891;
      case 0xc2a5bu: goto L_c2a5b;
      case 0xc2c9bu: goto L_c2c9b;
      case 0xc2f97u: goto L_c2f97;
      case 0xc3134u: goto L_c3134;
      case 0xc328fu: goto L_c328f;
      case 0xc33eau: goto L_c33ea;
      case 0xc354bu: goto L_c354b;
      default: x86_jump(c, t); return; } }
L_c27d4:
    X86_TICK(c, 13);
    // 0c27d4  push 6
    X86_AT(c, 0xc27d4u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c27d6  push 0x28
    X86_AT(c, 0xc27d6u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c27d8  push 4
    X86_AT(c, 0xc27d8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c27da  call 0xbc174
    X86_AT(c, 0xc27dau);
    push32(c, 0xc27dfu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc27dfu);
    X86_TICK(c, 11);
    // 0c27df  push 0x339c
    X86_AT(c, 0xc27dfu);
    { uint32_t v = 0x339Cu; push32(c, v); }
    // 0c27e4  push 4
    X86_AT(c, 0xc27e4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c27e6  call 0xbbba4
    X86_AT(c, 0xc27e6u);
    push32(c, 0xc27ebu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc27ebu);
    X86_TICK(c, 13);
    // 0c27eb  push 6
    X86_AT(c, 0xc27ebu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c27ed  push 0x28
    X86_AT(c, 0xc27edu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c27ef  push 4
    X86_AT(c, 0xc27efu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c27f1  call 0xbc174
    X86_AT(c, 0xc27f1u);
    push32(c, 0xc27f6u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc27f6u);
    X86_TICK(c, 15);
    // 0c27f6  push 9
    X86_AT(c, 0xc27f6u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0c27f8  lea eax, [ebp - 0x18]
    X86_AT(c, 0xc27f8u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFE8u);
    // 0c27fb  push eax
    X86_AT(c, 0xc27fbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c27fc  push 4
    X86_AT(c, 0xc27fcu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c27fe  call 0xb9d30
    X86_AT(c, 0xc27feu);
    push32(c, 0xc2803u); x86_call_known(c, 0xb9d30u, f_000b9d30); X86_RET(c, 0xc2803u);
    X86_TICK(c, 9);
    // 0c2803  add esp, 0x2c
    X86_AT(c, 0xc2803u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0c2806  and eax, eax
    X86_AT(c, 0xc2806u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c2808  je 0xc350e
    X86_AT(c, 0xc2808u);
    if (x86_cc(c, 4)) { goto L_c350e; }
    X86_TICK(c, 2);
    // 0c280e  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xc280eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_c2815:
    X86_TICK(c, 16);
    // 0c2815  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xc2815u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0c2818  cmp byte ptr [ebp + eax*1 - 0x18], 0x20
    X86_AT(c, 0xc2818u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFFE8u))), 0x20u, 0, 1);
    // 0c281d  jne 0xc2824
    X86_AT(c, 0xc281du);
    if (x86_cc(c, 5)) { goto L_c2824; }
    X86_TICK(c, 13);
    // 0c281f  inc dword ptr [ebp - 8]
    X86_AT(c, 0xc281fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c2822  jmp 0xc2815
    X86_AT(c, 0xc2822u);
    X86_POLL(c, 0xc2815u); goto L_c2815;
L_c2824:
    X86_TICK(c, 2);
    // 0c2824  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xc2824u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_c282b:
    X86_TICK(c, 29);
    // 0c282b  lea eax, [edi + edi*2]
    X86_AT(c, 0xc282bu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c282e  lea edx, [eax*8]
    X86_AT(c, 0xc282eu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2835  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2835u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2838  add edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xc2838u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4); }
    // 0c283b  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xc283bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0c283e  mov cl, byte ptr [ebp + eax*1 - 0x18]
    X86_AT(c, 0xc283eu);
    s8(c, 1, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFFE8u))));
    // 0c2842  mov byte ptr [edx + 0xa4dac], cl
    X86_AT(c, 0xc2842u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DACu)), g8(c, 1));
    // 0c2848  and cl, cl
    X86_AT(c, 0xc2848u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & g8(c, 1), 1)); }
    // 0c284a  je 0xc2854
    X86_AT(c, 0xc284au);
    if (x86_cc(c, 4)) { goto L_c2854; }
    X86_TICK(c, 19);
    // 0c284c  inc dword ptr [ebp - 8]
    X86_AT(c, 0xc284cu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c284f  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xc284fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c2852  jmp 0xc282b
    X86_AT(c, 0xc2852u);
    X86_POLL(c, 0xc282bu); goto L_c282b;
L_c2854:
    X86_TICK(c, 9);
    // 0c2854  push 4
    X86_AT(c, 0xc2854u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2856  call 0xbb6b0
    X86_AT(c, 0xc2856u);
    push32(c, 0xc285bu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc285bu);
    X86_TICK(c, 13);
    // 0c285b  push 6
    X86_AT(c, 0xc285bu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c285d  push 0x28
    X86_AT(c, 0xc285du);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c285f  push 4
    X86_AT(c, 0xc285fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2861  call 0xbc174
    X86_AT(c, 0xc2861u);
    push32(c, 0xc2866u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2866u);
    X86_TICK(c, 19);
    // 0c2866  lea eax, [edi + edi*2]
    X86_AT(c, 0xc2866u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2869  lea edx, [eax*8]
    X86_AT(c, 0xc2869u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2870  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2870u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2873  lea eax, [edx*1 + 0xa4dac]
    X86_AT(c, 0xc2873u);
    c.r[0] = (uint32_t)(c.r[2] + 0xA4DACu);
    // 0c287a  push eax
    X86_AT(c, 0xc287au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c287b  push 4
    X86_AT(c, 0xc287bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c287d  call 0xbbfe0
    X86_AT(c, 0xc287du);
    push32(c, 0xc2882u); x86_call_known(c, 0xbbfe0u, f_000bbfe0); X86_RET(c, 0xc2882u);
    X86_TICK(c, 11);
    // 0c2882  mov dword ptr [ebp - 4], 1
    X86_AT(c, 0xc2882u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x1u);
    // 0c2889  add esp, 0x18
    X86_AT(c, 0xc2889u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0c288c  jmp 0xc27a0
    X86_AT(c, 0xc288cu);
    X86_POLL(c, 0xc27a0u); goto L_c27a0;
L_c2891:
    X86_TICK(c, 27);
    // 0c2891  push 0xa
    X86_AT(c, 0xc2891u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c2893  push 0xf
    X86_AT(c, 0xc2893u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c2895  push 0xb
    X86_AT(c, 0xc2895u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c2897  push 2
    X86_AT(c, 0xc2897u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c2899  push 0x19
    X86_AT(c, 0xc2899u);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0c289b  push 0x34
    X86_AT(c, 0xc289bu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0c289d  push 0xd6
    X86_AT(c, 0xc289du);
    { uint32_t v = 0xD6u; push32(c, v); }
    // 0c28a2  push 0x12c
    X86_AT(c, 0xc28a2u);
    { uint32_t v = 0x12Cu; push32(c, v); }
    // 0c28a7  push 0xd2
    X86_AT(c, 0xc28a7u);
    { uint32_t v = 0xD2u; push32(c, v); }
    // 0c28ac  push 5
    X86_AT(c, 0xc28acu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c28ae  call 0xbb5cc
    X86_AT(c, 0xc28aeu);
    push32(c, 0xc28b3u); x86_call_known(c, 0xbb5ccu, f_000bb5cc); X86_RET(c, 0xc28b3u);
    X86_TICK(c, 9);
    // 0c28b3  push 5
    X86_AT(c, 0xc28b3u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c28b5  call 0xbb6b0
    X86_AT(c, 0xc28b5u);
    push32(c, 0xc28bau); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc28bau);
    X86_TICK(c, 9);
    // 0c28ba  push 5
    X86_AT(c, 0xc28bau);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c28bc  call 0xbb710
    X86_AT(c, 0xc28bcu);
    push32(c, 0xc28c1u); x86_call_known(c, 0xbb710u, f_000bb710); X86_RET(c, 0xc28c1u);
    X86_TICK(c, 9);
    // 0c28c1  push 5
    X86_AT(c, 0xc28c1u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c28c3  call 0xbb6b0
    X86_AT(c, 0xc28c3u);
    push32(c, 0xc28c8u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc28c8u);
    X86_TICK(c, 13);
    // 0c28c8  push 0
    X86_AT(c, 0xc28c8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c28ca  push 4
    X86_AT(c, 0xc28cau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c28cc  push 5
    X86_AT(c, 0xc28ccu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c28ce  call 0xbc174
    X86_AT(c, 0xc28ceu);
    push32(c, 0xc28d3u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc28d3u);
    X86_TICK(c, 13);
    // 0c28d3  add esp, 0x40
    X86_AT(c, 0xc28d3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c28d6  push 0x33b4
    X86_AT(c, 0xc28d6u);
    { uint32_t v = 0x33B4u; push32(c, v); }
    // 0c28db  push 5
    X86_AT(c, 0xc28dbu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c28dd  call 0xba428
    X86_AT(c, 0xc28ddu);
    push32(c, 0xc28e2u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc28e2u);
    X86_TICK(c, 13);
    // 0c28e2  push 1
    X86_AT(c, 0xc28e2u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c28e4  push 6
    X86_AT(c, 0xc28e4u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c28e6  push 5
    X86_AT(c, 0xc28e6u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c28e8  call 0xbc174
    X86_AT(c, 0xc28e8u);
    push32(c, 0xc28edu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc28edu);
    X86_TICK(c, 11);
    // 0c28ed  push 0x33c8
    X86_AT(c, 0xc28edu);
    { uint32_t v = 0x33C8u; push32(c, v); }
    // 0c28f2  push 5
    X86_AT(c, 0xc28f2u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c28f4  call 0xba428
    X86_AT(c, 0xc28f4u);
    push32(c, 0xc28f9u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc28f9u);
    X86_TICK(c, 13);
    // 0c28f9  push 2
    X86_AT(c, 0xc28f9u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c28fb  push 6
    X86_AT(c, 0xc28fbu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c28fd  push 5
    X86_AT(c, 0xc28fdu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c28ff  call 0xbc174
    X86_AT(c, 0xc28ffu);
    push32(c, 0xc2904u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2904u);
    X86_TICK(c, 11);
    // 0c2904  push 0x33dc
    X86_AT(c, 0xc2904u);
    { uint32_t v = 0x33DCu; push32(c, v); }
    // 0c2909  push 5
    X86_AT(c, 0xc2909u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c290b  call 0xba428
    X86_AT(c, 0xc290bu);
    push32(c, 0xc2910u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2910u);
    X86_TICK(c, 9);
    // 0c2910  push 4
    X86_AT(c, 0xc2910u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2912  call 0xbb6b0
    X86_AT(c, 0xc2912u);
    push32(c, 0xc2917u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2917u);
    X86_TICK(c, 13);
    // 0c2917  push 7
    X86_AT(c, 0xc2917u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c2919  push 0x28
    X86_AT(c, 0xc2919u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c291b  push 4
    X86_AT(c, 0xc291bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c291d  call 0xbc174
    X86_AT(c, 0xc291du);
    push32(c, 0xc2922u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2922u);
    X86_TICK(c, 13);
    // 0c2922  add esp, 0x40
    X86_AT(c, 0xc2922u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c2925  push 0x33f4
    X86_AT(c, 0xc2925u);
    { uint32_t v = 0x33F4u; push32(c, v); }
    // 0c292a  push 4
    X86_AT(c, 0xc292au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c292c  call 0xbbba4
    X86_AT(c, 0xc292cu);
    push32(c, 0xc2931u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc2931u);
    X86_TICK(c, 2);
    // 0c2931  add esp, 8
    X86_AT(c, 0xc2931u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c2934:
    X86_TICK(c, 13);
    // 0c2934  push 7
    X86_AT(c, 0xc2934u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c2936  push 0x28
    X86_AT(c, 0xc2936u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c2938  push 4
    X86_AT(c, 0xc2938u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c293a  call 0xbc174
    X86_AT(c, 0xc293au);
    push32(c, 0xc293fu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc293fu);
    X86_TICK(c, 9);
    // 0c293f  push 4
    X86_AT(c, 0xc293fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2941  call 0xb90f0
    X86_AT(c, 0xc2941u);
    push32(c, 0xc2946u); x86_call_known(c, 0xb90f0u, f_000b90f0); X86_RET(c, 0xc2946u);
    X86_TICK(c, 12);
    // 0c2946  xchg ebx, eax
    X86_AT(c, 0xc2946u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c2947  add esp, 0x10
    X86_AT(c, 0xc2947u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c294a  cmp bl, 5
    X86_AT(c, 0xc294au);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c294d  je 0xc29a9
    X86_AT(c, 0xc294du);
    if (x86_cc(c, 4)) { goto L_c29a9; }
    X86_TICK(c, 7);
    // 0c294f  cmp bl, 6
    X86_AT(c, 0xc294fu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c2952  je 0xc29a9
    X86_AT(c, 0xc2952u);
    if (x86_cc(c, 4)) { goto L_c29a9; }
    X86_TICK(c, 7);
    // 0c2954  cmp bl, 1
    X86_AT(c, 0xc2954u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c2957  je 0xc29a9
    X86_AT(c, 0xc2957u);
    if (x86_cc(c, 4)) { goto L_c29a9; }
    X86_TICK(c, 17);
    // 0c2959  lea eax, [ebp - 0xd]
    X86_AT(c, 0xc2959u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF3u);
    // 0c295c  push eax
    X86_AT(c, 0xc295cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c295d  push ebx
    X86_AT(c, 0xc295du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c295e  push 3
    X86_AT(c, 0xc295eu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c2960  push 0xa804c
    X86_AT(c, 0xc2960u);
    { uint32_t v = 0xA804Cu; push32(c, v); }
    // 0c2965  call 0xba1b4
    X86_AT(c, 0xc2965u);
    push32(c, 0xc296au); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc296au);
    X86_TICK(c, 11);
    // 0c296a  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xc296au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0c296d  add esp, 0x10
    X86_AT(c, 0xc296du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c2970  and eax, eax
    X86_AT(c, 0xc2970u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c2972  je 0xc2934
    X86_AT(c, 0xc2972u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc2934u); goto L_c2934; }
    X86_TICK(c, 9);
    // 0c2974  push 4
    X86_AT(c, 0xc2974u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2976  call 0xbb6b0
    X86_AT(c, 0xc2976u);
    push32(c, 0xc297bu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc297bu);
    X86_TICK(c, 13);
    // 0c297b  push 7
    X86_AT(c, 0xc297bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c297d  push 0x28
    X86_AT(c, 0xc297du);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c297f  push 4
    X86_AT(c, 0xc297fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2981  call 0xbc174
    X86_AT(c, 0xc2981u);
    push32(c, 0xc2986u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2986u);
    X86_TICK(c, 14);
    // 0c2986  push dword ptr [ebp - 0x1c]
    X86_AT(c, 0xc2986u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))); push32(c, v); }
    // 0c2989  push 4
    X86_AT(c, 0xc2989u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c298b  call 0xbbba4
    X86_AT(c, 0xc298bu);
    push32(c, 0xc2990u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc2990u);
    X86_TICK(c, 14);
    // 0c2990  lea eax, [edi + edi*2]
    X86_AT(c, 0xc2990u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2993  lea edx, [eax*8]
    X86_AT(c, 0xc2993u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c299a  lea edx, [eax + edx*8]
    X86_AT(c, 0xc299au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c299d  mov al, byte ptr [ebp - 0xd]
    X86_AT(c, 0xc299du);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))));
    // 0c29a0  mov byte ptr [edx + 0xa4ddc], al
    X86_AT(c, 0xc29a0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDCu)), g8(c, 0));
    // 0c29a6  add esp, 0x18
    X86_AT(c, 0xc29a6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_c29a9:
    X86_TICK(c, 7);
    // 0c29a9  cmp bl, 5
    X86_AT(c, 0xc29a9u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c29ac  jne 0xc29f3
    X86_AT(c, 0xc29acu);
    if (x86_cc(c, 5)) { goto L_c29f3; }
    X86_TICK(c, 13);
    // 0c29ae  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xc29aeu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0c29b5  push 0xd
    X86_AT(c, 0xc29b5u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c29b7  push 5
    X86_AT(c, 0xc29b7u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c29b9  call 0xbba64
    X86_AT(c, 0xc29b9u);
    push32(c, 0xc29beu); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xc29beu);
    X86_TICK(c, 27);
    // 0c29be  lea eax, [ebp - 0xd]
    X86_AT(c, 0xc29beu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF3u);
    // 0c29c1  push eax
    X86_AT(c, 0xc29c1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c29c2  lea eax, [edi + edi*2]
    X86_AT(c, 0xc29c2u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c29c5  lea edx, [eax*8]
    X86_AT(c, 0xc29c5u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c29cc  lea edx, [eax + edx*8]
    X86_AT(c, 0xc29ccu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c29cf  mov al, byte ptr [edx + 0xa4ddc]
    X86_AT(c, 0xc29cfu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDCu))));
    // 0c29d5  push eax
    X86_AT(c, 0xc29d5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c29d6  push 3
    X86_AT(c, 0xc29d6u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c29d8  push 0xa804c
    X86_AT(c, 0xc29d8u);
    { uint32_t v = 0xA804Cu; push32(c, v); }
    // 0c29dd  call 0xba1b4
    X86_AT(c, 0xc29ddu);
    push32(c, 0xc29e2u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc29e2u);
    X86_TICK(c, 11);
    // 0c29e2  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xc29e2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0c29e5  push 4
    X86_AT(c, 0xc29e5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c29e7  call 0xbb6b0
    X86_AT(c, 0xc29e7u);
    push32(c, 0xc29ecu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc29ecu);
    X86_TICK(c, 9);
    // 0c29ec  push 7
    X86_AT(c, 0xc29ecu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c29ee  jmp 0xc2c02
    X86_AT(c, 0xc29eeu);
    goto L_c2c02;
L_c29f3:
    X86_TICK(c, 7);
    // 0c29f3  cmp bl, 6
    X86_AT(c, 0xc29f3u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c29f6  jne 0xc2a3d
    X86_AT(c, 0xc29f6u);
    if (x86_cc(c, 5)) { goto L_c2a3d; }
    X86_TICK(c, 13);
    // 0c29f8  mov dword ptr [ebp - 4], 2
    X86_AT(c, 0xc29f8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x2u);
    // 0c29ff  push 0xd
    X86_AT(c, 0xc29ffu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c2a01  push 5
    X86_AT(c, 0xc2a01u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2a03  call 0xbba64
    X86_AT(c, 0xc2a03u);
    push32(c, 0xc2a08u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xc2a08u);
    X86_TICK(c, 27);
    // 0c2a08  lea eax, [ebp - 0xd]
    X86_AT(c, 0xc2a08u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF3u);
    // 0c2a0b  push eax
    X86_AT(c, 0xc2a0bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2a0c  lea eax, [edi + edi*2]
    X86_AT(c, 0xc2a0cu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2a0f  lea edx, [eax*8]
    X86_AT(c, 0xc2a0fu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2a16  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2a16u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2a19  mov al, byte ptr [edx + 0xa4ddc]
    X86_AT(c, 0xc2a19u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDCu))));
    // 0c2a1f  push eax
    X86_AT(c, 0xc2a1fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2a20  push 3
    X86_AT(c, 0xc2a20u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c2a22  push 0xa804c
    X86_AT(c, 0xc2a22u);
    { uint32_t v = 0xA804Cu; push32(c, v); }
    // 0c2a27  call 0xba1b4
    X86_AT(c, 0xc2a27u);
    push32(c, 0xc2a2cu); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc2a2cu);
    X86_TICK(c, 11);
    // 0c2a2c  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xc2a2cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0c2a2f  push 4
    X86_AT(c, 0xc2a2fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2a31  call 0xbb6b0
    X86_AT(c, 0xc2a31u);
    push32(c, 0xc2a36u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2a36u);
    X86_TICK(c, 9);
    // 0c2a36  push 7
    X86_AT(c, 0xc2a36u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c2a38  jmp 0xc2c55
    X86_AT(c, 0xc2a38u);
    goto L_c2c55;
L_c2a3d:
    X86_TICK(c, 7);
    // 0c2a3d  cmp bl, 1
    X86_AT(c, 0xc2a3du);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c2a40  je 0xc2f2f
    X86_AT(c, 0xc2a40u);
    if (x86_cc(c, 4)) { goto L_c2f2f; }
    X86_TICK(c, 11);
    // 0c2a46  push 0xd
    X86_AT(c, 0xc2a46u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c2a48  push 5
    X86_AT(c, 0xc2a48u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2a4a  call 0xbba64
    X86_AT(c, 0xc2a4au);
    push32(c, 0xc2a4fu); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xc2a4fu);
    X86_TICK(c, 9);
    // 0c2a4f  mov dword ptr [ebp - 4], 2
    X86_AT(c, 0xc2a4fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x2u);
    // 0c2a56  jmp 0xc2f8f
    X86_AT(c, 0xc2a56u);
    goto L_c2f8f;
L_c2a5b:
    X86_TICK(c, 27);
    // 0c2a5b  push 0xa
    X86_AT(c, 0xc2a5bu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c2a5d  push 0xf
    X86_AT(c, 0xc2a5du);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c2a5f  push 0xb
    X86_AT(c, 0xc2a5fu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c2a61  push 5
    X86_AT(c, 0xc2a61u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2a63  push 0x19
    X86_AT(c, 0xc2a63u);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0c2a65  push 0x66
    X86_AT(c, 0xc2a65u);
    { uint32_t v = 0x66u; push32(c, v); }
    // 0c2a67  push 0xd6
    X86_AT(c, 0xc2a67u);
    { uint32_t v = 0xD6u; push32(c, v); }
    // 0c2a6c  push 0x12c
    X86_AT(c, 0xc2a6cu);
    { uint32_t v = 0x12Cu; push32(c, v); }
    // 0c2a71  push 0xc8
    X86_AT(c, 0xc2a71u);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0c2a76  push 5
    X86_AT(c, 0xc2a76u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2a78  call 0xbb5cc
    X86_AT(c, 0xc2a78u);
    push32(c, 0xc2a7du); x86_call_known(c, 0xbb5ccu, f_000bb5cc); X86_RET(c, 0xc2a7du);
    X86_TICK(c, 9);
    // 0c2a7d  push 5
    X86_AT(c, 0xc2a7du);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2a7f  call 0xbb6b0
    X86_AT(c, 0xc2a7fu);
    push32(c, 0xc2a84u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2a84u);
    X86_TICK(c, 9);
    // 0c2a84  push 5
    X86_AT(c, 0xc2a84u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2a86  call 0xbb710
    X86_AT(c, 0xc2a86u);
    push32(c, 0xc2a8bu); x86_call_known(c, 0xbb710u, f_000bb710); X86_RET(c, 0xc2a8bu);
    X86_TICK(c, 9);
    // 0c2a8b  push 5
    X86_AT(c, 0xc2a8bu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2a8d  call 0xbb6b0
    X86_AT(c, 0xc2a8du);
    push32(c, 0xc2a92u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2a92u);
    X86_TICK(c, 13);
    // 0c2a92  push 0
    X86_AT(c, 0xc2a92u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c2a94  push 4
    X86_AT(c, 0xc2a94u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2a96  push 5
    X86_AT(c, 0xc2a96u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2a98  call 0xbc174
    X86_AT(c, 0xc2a98u);
    push32(c, 0xc2a9du); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2a9du);
    X86_TICK(c, 13);
    // 0c2a9d  add esp, 0x40
    X86_AT(c, 0xc2a9du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c2aa0  push 0x3404
    X86_AT(c, 0xc2aa0u);
    { uint32_t v = 0x3404u; push32(c, v); }
    // 0c2aa5  push 5
    X86_AT(c, 0xc2aa5u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2aa7  call 0xba428
    X86_AT(c, 0xc2aa7u);
    push32(c, 0xc2aacu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2aacu);
    X86_TICK(c, 13);
    // 0c2aac  push 1
    X86_AT(c, 0xc2aacu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c2aae  push 6
    X86_AT(c, 0xc2aaeu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c2ab0  push 5
    X86_AT(c, 0xc2ab0u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2ab2  call 0xbc174
    X86_AT(c, 0xc2ab2u);
    push32(c, 0xc2ab7u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2ab7u);
    X86_TICK(c, 11);
    // 0c2ab7  push 0x341c
    X86_AT(c, 0xc2ab7u);
    { uint32_t v = 0x341Cu; push32(c, v); }
    // 0c2abc  push 5
    X86_AT(c, 0xc2abcu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2abe  call 0xba428
    X86_AT(c, 0xc2abeu);
    push32(c, 0xc2ac3u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2ac3u);
    X86_TICK(c, 13);
    // 0c2ac3  push 2
    X86_AT(c, 0xc2ac3u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c2ac5  push 6
    X86_AT(c, 0xc2ac5u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c2ac7  push 5
    X86_AT(c, 0xc2ac7u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2ac9  call 0xbc174
    X86_AT(c, 0xc2ac9u);
    push32(c, 0xc2aceu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2aceu);
    X86_TICK(c, 11);
    // 0c2ace  push 0x3434
    X86_AT(c, 0xc2aceu);
    { uint32_t v = 0x3434u; push32(c, v); }
    // 0c2ad3  push 5
    X86_AT(c, 0xc2ad3u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2ad5  call 0xba428
    X86_AT(c, 0xc2ad5u);
    push32(c, 0xc2adau); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2adau);
    X86_TICK(c, 13);
    // 0c2ada  push 3
    X86_AT(c, 0xc2adau);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c2adc  push 6
    X86_AT(c, 0xc2adcu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c2ade  push 5
    X86_AT(c, 0xc2adeu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2ae0  call 0xbc174
    X86_AT(c, 0xc2ae0u);
    push32(c, 0xc2ae5u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2ae5u);
    X86_TICK(c, 13);
    // 0c2ae5  add esp, 0x3c
    X86_AT(c, 0xc2ae5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c2ae8  push 0x3448
    X86_AT(c, 0xc2ae8u);
    { uint32_t v = 0x3448u; push32(c, v); }
    // 0c2aed  push 5
    X86_AT(c, 0xc2aedu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2aef  call 0xba428
    X86_AT(c, 0xc2aefu);
    push32(c, 0xc2af4u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2af4u);
    X86_TICK(c, 13);
    // 0c2af4  push 4
    X86_AT(c, 0xc2af4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2af6  push 6
    X86_AT(c, 0xc2af6u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c2af8  push 5
    X86_AT(c, 0xc2af8u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2afa  call 0xbc174
    X86_AT(c, 0xc2afau);
    push32(c, 0xc2affu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2affu);
    X86_TICK(c, 11);
    // 0c2aff  push 0x3464
    X86_AT(c, 0xc2affu);
    { uint32_t v = 0x3464u; push32(c, v); }
    // 0c2b04  push 5
    X86_AT(c, 0xc2b04u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2b06  call 0xba428
    X86_AT(c, 0xc2b06u);
    push32(c, 0xc2b0bu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2b0bu);
    X86_TICK(c, 13);
    // 0c2b0b  push 5
    X86_AT(c, 0xc2b0bu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2b0d  push 6
    X86_AT(c, 0xc2b0du);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c2b0f  push 5
    X86_AT(c, 0xc2b0fu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2b11  call 0xbc174
    X86_AT(c, 0xc2b11u);
    push32(c, 0xc2b16u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2b16u);
    X86_TICK(c, 13);
    // 0c2b16  add esp, 0x28
    X86_AT(c, 0xc2b16u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0c2b19  push 0x3480
    X86_AT(c, 0xc2b19u);
    { uint32_t v = 0x3480u; push32(c, v); }
    // 0c2b1e  push 5
    X86_AT(c, 0xc2b1eu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2b20  call 0xba428
    X86_AT(c, 0xc2b20u);
    push32(c, 0xc2b25u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2b25u);
    X86_TICK(c, 9);
    // 0c2b25  push 4
    X86_AT(c, 0xc2b25u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2b27  call 0xbb6b0
    X86_AT(c, 0xc2b27u);
    push32(c, 0xc2b2cu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2b2cu);
    X86_TICK(c, 13);
    // 0c2b2c  push 8
    X86_AT(c, 0xc2b2cu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0c2b2e  push 0x28
    X86_AT(c, 0xc2b2eu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c2b30  push 4
    X86_AT(c, 0xc2b30u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2b32  call 0xbc174
    X86_AT(c, 0xc2b32u);
    push32(c, 0xc2b37u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2b37u);
    X86_TICK(c, 11);
    // 0c2b37  push 0x349c
    X86_AT(c, 0xc2b37u);
    { uint32_t v = 0x349Cu; push32(c, v); }
    // 0c2b3c  push 4
    X86_AT(c, 0xc2b3cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2b3e  call 0xbbba4
    X86_AT(c, 0xc2b3eu);
    push32(c, 0xc2b43u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc2b43u);
    X86_TICK(c, 2);
    // 0c2b43  add esp, 0x20
    X86_AT(c, 0xc2b43u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_c2b46:
    X86_TICK(c, 13);
    // 0c2b46  push 8
    X86_AT(c, 0xc2b46u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0c2b48  push 0x28
    X86_AT(c, 0xc2b48u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c2b4a  push 4
    X86_AT(c, 0xc2b4au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2b4c  call 0xbc174
    X86_AT(c, 0xc2b4cu);
    push32(c, 0xc2b51u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2b51u);
    X86_TICK(c, 9);
    // 0c2b51  push 4
    X86_AT(c, 0xc2b51u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2b53  call 0xb90f0
    X86_AT(c, 0xc2b53u);
    push32(c, 0xc2b58u); x86_call_known(c, 0xb90f0u, f_000b90f0); X86_RET(c, 0xc2b58u);
    X86_TICK(c, 12);
    // 0c2b58  xchg ebx, eax
    X86_AT(c, 0xc2b58u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c2b59  add esp, 0x10
    X86_AT(c, 0xc2b59u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c2b5c  cmp bl, 5
    X86_AT(c, 0xc2b5cu);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c2b5f  je 0xc2bbd
    X86_AT(c, 0xc2b5fu);
    if (x86_cc(c, 4)) { goto L_c2bbd; }
    X86_TICK(c, 7);
    // 0c2b61  cmp bl, 6
    X86_AT(c, 0xc2b61u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c2b64  je 0xc2bbd
    X86_AT(c, 0xc2b64u);
    if (x86_cc(c, 4)) { goto L_c2bbd; }
    X86_TICK(c, 7);
    // 0c2b66  cmp bl, 1
    X86_AT(c, 0xc2b66u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c2b69  je 0xc2bbd
    X86_AT(c, 0xc2b69u);
    if (x86_cc(c, 4)) { goto L_c2bbd; }
    X86_TICK(c, 17);
    // 0c2b6b  lea eax, [ebp - 0xd]
    X86_AT(c, 0xc2b6bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF3u);
    // 0c2b6e  push eax
    X86_AT(c, 0xc2b6eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2b6f  push ebx
    X86_AT(c, 0xc2b6fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c2b70  push 5
    X86_AT(c, 0xc2b70u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2b72  push 0xa81d8
    X86_AT(c, 0xc2b72u);
    { uint32_t v = 0xA81D8u; push32(c, v); }
    // 0c2b77  call 0xba1b4
    X86_AT(c, 0xc2b77u);
    push32(c, 0xc2b7cu); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc2b7cu);
    X86_TICK(c, 11);
    // 0c2b7c  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xc2b7cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0c2b7f  push 4
    X86_AT(c, 0xc2b7fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2b81  call 0xbb6b0
    X86_AT(c, 0xc2b81u);
    push32(c, 0xc2b86u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2b86u);
    X86_TICK(c, 14);
    // 0c2b86  add esp, 0x14
    X86_AT(c, 0xc2b86u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0c2b89  cmp dword ptr [ebp - 0x1c], 0
    X86_AT(c, 0xc2b89u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))), 0x0u, 0, 4);
    // 0c2b8d  je 0xc2b46
    X86_AT(c, 0xc2b8du);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc2b46u); goto L_c2b46; }
    X86_TICK(c, 13);
    // 0c2b8f  push 8
    X86_AT(c, 0xc2b8fu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0c2b91  push 0x28
    X86_AT(c, 0xc2b91u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c2b93  push 4
    X86_AT(c, 0xc2b93u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2b95  call 0xbc174
    X86_AT(c, 0xc2b95u);
    push32(c, 0xc2b9au); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2b9au);
    X86_TICK(c, 14);
    // 0c2b9a  push dword ptr [ebp - 0x1c]
    X86_AT(c, 0xc2b9au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))); push32(c, v); }
    // 0c2b9d  push 4
    X86_AT(c, 0xc2b9du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2b9f  call 0xbbba4
    X86_AT(c, 0xc2b9fu);
    push32(c, 0xc2ba4u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc2ba4u);
    X86_TICK(c, 14);
    // 0c2ba4  lea eax, [edi + edi*2]
    X86_AT(c, 0xc2ba4u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2ba7  lea edx, [eax*8]
    X86_AT(c, 0xc2ba7u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2bae  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2baeu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2bb1  mov al, byte ptr [ebp - 0xd]
    X86_AT(c, 0xc2bb1u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))));
    // 0c2bb4  mov byte ptr [edx + 0xa4dda], al
    X86_AT(c, 0xc2bb4u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDAu)), g8(c, 0));
    // 0c2bba  add esp, 0x14
    X86_AT(c, 0xc2bbau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_c2bbd:
    X86_TICK(c, 7);
    // 0c2bbd  cmp bl, 5
    X86_AT(c, 0xc2bbdu);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c2bc0  jne 0xc2c10
    X86_AT(c, 0xc2bc0u);
    if (x86_cc(c, 5)) { goto L_c2c10; }
    X86_TICK(c, 13);
    // 0c2bc2  mov dword ptr [ebp - 4], 1
    X86_AT(c, 0xc2bc2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x1u);
    // 0c2bc9  push 0xd
    X86_AT(c, 0xc2bc9u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c2bcb  push 5
    X86_AT(c, 0xc2bcbu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2bcd  call 0xbba64
    X86_AT(c, 0xc2bcdu);
    push32(c, 0xc2bd2u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xc2bd2u);
    X86_TICK(c, 27);
    // 0c2bd2  lea eax, [ebp - 0xd]
    X86_AT(c, 0xc2bd2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF3u);
    // 0c2bd5  push eax
    X86_AT(c, 0xc2bd5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2bd6  lea eax, [edi + edi*2]
    X86_AT(c, 0xc2bd6u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2bd9  lea edx, [eax*8]
    X86_AT(c, 0xc2bd9u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2be0  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2be0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2be3  mov al, byte ptr [edx + 0xa4dda]
    X86_AT(c, 0xc2be3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDAu))));
    // 0c2be9  push eax
    X86_AT(c, 0xc2be9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2bea  push 5
    X86_AT(c, 0xc2beau);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2bec  push 0xa81d8
    X86_AT(c, 0xc2becu);
    { uint32_t v = 0xA81D8u; push32(c, v); }
    // 0c2bf1  call 0xba1b4
    X86_AT(c, 0xc2bf1u);
    push32(c, 0xc2bf6u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc2bf6u);
    X86_TICK(c, 11);
    // 0c2bf6  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xc2bf6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0c2bf9  push 4
    X86_AT(c, 0xc2bf9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2bfb  call 0xbb6b0
    X86_AT(c, 0xc2bfbu);
    push32(c, 0xc2c00u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2c00u);
    X86_TICK(c, 2);
    // 0c2c00  push 8
    X86_AT(c, 0xc2c00u);
    { uint32_t v = 0x8u; push32(c, v); }
L_c2c02:
    X86_TICK(c, 11);
    // 0c2c02  push 0x28
    X86_AT(c, 0xc2c02u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c2c04  push 4
    X86_AT(c, 0xc2c04u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2c06  call 0xbc174
    X86_AT(c, 0xc2c06u);
    push32(c, 0xc2c0bu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2c0bu);
    X86_TICK(c, 7);
    // 0c2c0b  jmp 0xc2e62
    X86_AT(c, 0xc2c0bu);
    goto L_c2e62;
L_c2c10:
    X86_TICK(c, 7);
    // 0c2c10  cmp bl, 6
    X86_AT(c, 0xc2c10u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c2c13  jne 0xc2c7d
    X86_AT(c, 0xc2c13u);
    if (x86_cc(c, 5)) { goto L_c2c7d; }
    X86_TICK(c, 13);
    // 0c2c15  mov dword ptr [ebp - 4], 3
    X86_AT(c, 0xc2c15u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x3u);
    // 0c2c1c  push 0xd
    X86_AT(c, 0xc2c1cu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c2c1e  push 5
    X86_AT(c, 0xc2c1eu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2c20  call 0xbba64
    X86_AT(c, 0xc2c20u);
    push32(c, 0xc2c25u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xc2c25u);
    X86_TICK(c, 27);
    // 0c2c25  lea eax, [ebp - 0xd]
    X86_AT(c, 0xc2c25u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF3u);
    // 0c2c28  push eax
    X86_AT(c, 0xc2c28u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2c29  lea eax, [edi + edi*2]
    X86_AT(c, 0xc2c29u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2c2c  lea edx, [eax*8]
    X86_AT(c, 0xc2c2cu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2c33  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2c33u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2c36  mov al, byte ptr [edx + 0xa4dda]
    X86_AT(c, 0xc2c36u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDAu))));
    // 0c2c3c  push eax
    X86_AT(c, 0xc2c3cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2c3d  push 5
    X86_AT(c, 0xc2c3du);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2c3f  push 0xa81d8
    X86_AT(c, 0xc2c3fu);
    { uint32_t v = 0xA81D8u; push32(c, v); }
    // 0c2c44  call 0xba1b4
    X86_AT(c, 0xc2c44u);
    push32(c, 0xc2c49u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc2c49u);
    X86_TICK(c, 11);
    // 0c2c49  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xc2c49u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0c2c4c  push 4
    X86_AT(c, 0xc2c4cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2c4e  call 0xbb6b0
    X86_AT(c, 0xc2c4eu);
    push32(c, 0xc2c53u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2c53u);
    X86_TICK(c, 2);
    // 0c2c53  push 8
    X86_AT(c, 0xc2c53u);
    { uint32_t v = 0x8u; push32(c, v); }
L_c2c55:
    X86_TICK(c, 11);
    // 0c2c55  push 0x28
    X86_AT(c, 0xc2c55u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c2c57  push 4
    X86_AT(c, 0xc2c57u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2c59  call 0xbc174
    X86_AT(c, 0xc2c59u);
    push32(c, 0xc2c5eu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2c5eu);
    X86_TICK(c, 14);
    // 0c2c5e  add esp, 0x28
    X86_AT(c, 0xc2c5eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0c2c61  cmp dword ptr [ebp - 0x1c], 0
    X86_AT(c, 0xc2c61u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))), 0x0u, 0, 4);
    // 0c2c65  je 0xc2e7a
    X86_AT(c, 0xc2c65u);
    if (x86_cc(c, 4)) { goto L_c2e7a; }
    X86_TICK(c, 14);
    // 0c2c6b  push dword ptr [ebp - 0x1c]
    X86_AT(c, 0xc2c6bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))); push32(c, v); }
    // 0c2c6e  push 4
    X86_AT(c, 0xc2c6eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2c70  call 0xbbba4
    X86_AT(c, 0xc2c70u);
    push32(c, 0xc2c75u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc2c75u);
    X86_TICK(c, 9);
    // 0c2c75  add esp, 8
    X86_AT(c, 0xc2c75u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c2c78  jmp 0xc2e7a
    X86_AT(c, 0xc2c78u);
    goto L_c2e7a;
L_c2c7d:
    X86_TICK(c, 7);
    // 0c2c7d  cmp bl, 1
    X86_AT(c, 0xc2c7du);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c2c80  je 0xc2f2f
    X86_AT(c, 0xc2c80u);
    if (x86_cc(c, 4)) { goto L_c2f2f; }
    X86_TICK(c, 11);
    // 0c2c86  push 0xd
    X86_AT(c, 0xc2c86u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c2c88  push 5
    X86_AT(c, 0xc2c88u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2c8a  call 0xbba64
    X86_AT(c, 0xc2c8au);
    push32(c, 0xc2c8fu); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xc2c8fu);
    X86_TICK(c, 9);
    // 0c2c8f  mov dword ptr [ebp - 4], 3
    X86_AT(c, 0xc2c8fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x3u);
    // 0c2c96  jmp 0xc2f8f
    X86_AT(c, 0xc2c96u);
    goto L_c2f8f;
L_c2c9b:
    X86_TICK(c, 27);
    // 0c2c9b  push 0xa
    X86_AT(c, 0xc2c9bu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c2c9d  push 0xf
    X86_AT(c, 0xc2c9du);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c2c9f  push 0xb
    X86_AT(c, 0xc2c9fu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c2ca1  push 6
    X86_AT(c, 0xc2ca1u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c2ca3  push 0x2f
    X86_AT(c, 0xc2ca3u);
    { uint32_t v = 0x2Fu; push32(c, v); }
    // 0c2ca5  push 0x76
    X86_AT(c, 0xc2ca5u);
    { uint32_t v = 0x76u; push32(c, v); }
    // 0c2ca7  push 0x178
    X86_AT(c, 0xc2ca7u);
    { uint32_t v = 0x178u; push32(c, v); }
    // 0c2cac  push 0x10c
    X86_AT(c, 0xc2cacu);
    { uint32_t v = 0x10Cu; push32(c, v); }
    // 0c2cb1  push 0x83
    X86_AT(c, 0xc2cb1u);
    { uint32_t v = 0x83u; push32(c, v); }
    // 0c2cb6  push 5
    X86_AT(c, 0xc2cb6u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2cb8  call 0xbb5cc
    X86_AT(c, 0xc2cb8u);
    push32(c, 0xc2cbdu); x86_call_known(c, 0xbb5ccu, f_000bb5cc); X86_RET(c, 0xc2cbdu);
    X86_TICK(c, 9);
    // 0c2cbd  push 5
    X86_AT(c, 0xc2cbdu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2cbf  call 0xbb6b0
    X86_AT(c, 0xc2cbfu);
    push32(c, 0xc2cc4u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2cc4u);
    X86_TICK(c, 9);
    // 0c2cc4  push 5
    X86_AT(c, 0xc2cc4u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2cc6  call 0xbb710
    X86_AT(c, 0xc2cc6u);
    push32(c, 0xc2ccbu); x86_call_known(c, 0xbb710u, f_000bb710); X86_RET(c, 0xc2ccbu);
    X86_TICK(c, 9);
    // 0c2ccb  push 5
    X86_AT(c, 0xc2ccbu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2ccd  call 0xbb6b0
    X86_AT(c, 0xc2ccdu);
    push32(c, 0xc2cd2u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2cd2u);
    X86_TICK(c, 13);
    // 0c2cd2  push 0
    X86_AT(c, 0xc2cd2u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c2cd4  push 2
    X86_AT(c, 0xc2cd4u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c2cd6  push 5
    X86_AT(c, 0xc2cd6u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2cd8  call 0xbc174
    X86_AT(c, 0xc2cd8u);
    push32(c, 0xc2cddu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2cddu);
    X86_TICK(c, 13);
    // 0c2cdd  add esp, 0x40
    X86_AT(c, 0xc2cddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c2ce0  push 0x34b0
    X86_AT(c, 0xc2ce0u);
    { uint32_t v = 0x34B0u; push32(c, v); }
    // 0c2ce5  push 5
    X86_AT(c, 0xc2ce5u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2ce7  call 0xba428
    X86_AT(c, 0xc2ce7u);
    push32(c, 0xc2cecu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2cecu);
    X86_TICK(c, 13);
    // 0c2cec  push 1
    X86_AT(c, 0xc2cecu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c2cee  push 1
    X86_AT(c, 0xc2ceeu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c2cf0  push 5
    X86_AT(c, 0xc2cf0u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2cf2  call 0xbc174
    X86_AT(c, 0xc2cf2u);
    push32(c, 0xc2cf7u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2cf7u);
    X86_TICK(c, 11);
    // 0c2cf7  push 0x34c8
    X86_AT(c, 0xc2cf7u);
    { uint32_t v = 0x34C8u; push32(c, v); }
    // 0c2cfc  push 5
    X86_AT(c, 0xc2cfcu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2cfe  call 0xba428
    X86_AT(c, 0xc2cfeu);
    push32(c, 0xc2d03u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2d03u);
    X86_TICK(c, 13);
    // 0c2d03  push 2
    X86_AT(c, 0xc2d03u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c2d05  push 1
    X86_AT(c, 0xc2d05u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c2d07  push 5
    X86_AT(c, 0xc2d07u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2d09  call 0xbc174
    X86_AT(c, 0xc2d09u);
    push32(c, 0xc2d0eu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2d0eu);
    X86_TICK(c, 11);
    // 0c2d0e  push 0x3524
    X86_AT(c, 0xc2d0eu);
    { uint32_t v = 0x3524u; push32(c, v); }
    // 0c2d13  push 5
    X86_AT(c, 0xc2d13u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2d15  call 0xba428
    X86_AT(c, 0xc2d15u);
    push32(c, 0xc2d1au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2d1au);
    X86_TICK(c, 13);
    // 0c2d1a  push 3
    X86_AT(c, 0xc2d1au);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c2d1c  push 1
    X86_AT(c, 0xc2d1cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c2d1e  push 5
    X86_AT(c, 0xc2d1eu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2d20  call 0xbc174
    X86_AT(c, 0xc2d20u);
    push32(c, 0xc2d25u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2d25u);
    X86_TICK(c, 13);
    // 0c2d25  add esp, 0x3c
    X86_AT(c, 0xc2d25u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c2d28  push 0x3580
    X86_AT(c, 0xc2d28u);
    { uint32_t v = 0x3580u; push32(c, v); }
    // 0c2d2d  push 5
    X86_AT(c, 0xc2d2du);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2d2f  call 0xba428
    X86_AT(c, 0xc2d2fu);
    push32(c, 0xc2d34u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2d34u);
    X86_TICK(c, 13);
    // 0c2d34  push 4
    X86_AT(c, 0xc2d34u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2d36  push 1
    X86_AT(c, 0xc2d36u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c2d38  push 5
    X86_AT(c, 0xc2d38u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2d3a  call 0xbc174
    X86_AT(c, 0xc2d3au);
    push32(c, 0xc2d3fu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2d3fu);
    X86_TICK(c, 11);
    // 0c2d3f  push 0x35cc
    X86_AT(c, 0xc2d3fu);
    { uint32_t v = 0x35CCu; push32(c, v); }
    // 0c2d44  push 5
    X86_AT(c, 0xc2d44u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2d46  call 0xba428
    X86_AT(c, 0xc2d46u);
    push32(c, 0xc2d4bu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2d4bu);
    X86_TICK(c, 13);
    // 0c2d4b  push 5
    X86_AT(c, 0xc2d4bu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2d4d  push 1
    X86_AT(c, 0xc2d4du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c2d4f  push 5
    X86_AT(c, 0xc2d4fu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2d51  call 0xbc174
    X86_AT(c, 0xc2d51u);
    push32(c, 0xc2d56u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2d56u);
    X86_TICK(c, 13);
    // 0c2d56  add esp, 0x28
    X86_AT(c, 0xc2d56u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0c2d59  push 0x3628
    X86_AT(c, 0xc2d59u);
    { uint32_t v = 0x3628u; push32(c, v); }
    // 0c2d5e  push 5
    X86_AT(c, 0xc2d5eu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2d60  call 0xba428
    X86_AT(c, 0xc2d60u);
    push32(c, 0xc2d65u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2d65u);
    X86_TICK(c, 13);
    // 0c2d65  push 6
    X86_AT(c, 0xc2d65u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c2d67  push 1
    X86_AT(c, 0xc2d67u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c2d69  push 5
    X86_AT(c, 0xc2d69u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2d6b  call 0xbc174
    X86_AT(c, 0xc2d6bu);
    push32(c, 0xc2d70u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2d70u);
    X86_TICK(c, 11);
    // 0c2d70  push 0x3684
    X86_AT(c, 0xc2d70u);
    { uint32_t v = 0x3684u; push32(c, v); }
    // 0c2d75  push 5
    X86_AT(c, 0xc2d75u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2d77  call 0xba428
    X86_AT(c, 0xc2d77u);
    push32(c, 0xc2d7cu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2d7cu);
    X86_TICK(c, 9);
    // 0c2d7c  push 4
    X86_AT(c, 0xc2d7cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2d7e  call 0xbb6b0
    X86_AT(c, 0xc2d7eu);
    push32(c, 0xc2d83u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2d83u);
    X86_TICK(c, 13);
    // 0c2d83  push 9
    X86_AT(c, 0xc2d83u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0c2d85  push 0x28
    X86_AT(c, 0xc2d85u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c2d87  push 4
    X86_AT(c, 0xc2d87u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2d89  call 0xbc174
    X86_AT(c, 0xc2d89u);
    push32(c, 0xc2d8eu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2d8eu);
    X86_TICK(c, 11);
    // 0c2d8e  push 0x369c
    X86_AT(c, 0xc2d8eu);
    { uint32_t v = 0x369Cu; push32(c, v); }
    // 0c2d93  push 4
    X86_AT(c, 0xc2d93u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2d95  call 0xbbba4
    X86_AT(c, 0xc2d95u);
    push32(c, 0xc2d9au); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc2d9au);
    X86_TICK(c, 2);
    // 0c2d9a  add esp, 0x34
    X86_AT(c, 0xc2d9au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
L_c2d9d:
    X86_TICK(c, 13);
    // 0c2d9d  push 9
    X86_AT(c, 0xc2d9du);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0c2d9f  push 0x28
    X86_AT(c, 0xc2d9fu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c2da1  push 4
    X86_AT(c, 0xc2da1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2da3  call 0xbc174
    X86_AT(c, 0xc2da3u);
    push32(c, 0xc2da8u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2da8u);
    X86_TICK(c, 9);
    // 0c2da8  push 4
    X86_AT(c, 0xc2da8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2daa  call 0xb90f0
    X86_AT(c, 0xc2daau);
    push32(c, 0xc2dafu); x86_call_known(c, 0xb90f0u, f_000b90f0); X86_RET(c, 0xc2dafu);
    X86_TICK(c, 12);
    // 0c2daf  xchg ebx, eax
    X86_AT(c, 0xc2dafu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c2db0  add esp, 0x10
    X86_AT(c, 0xc2db0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c2db3  cmp bl, 5
    X86_AT(c, 0xc2db3u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c2db6  je 0xc2e14
    X86_AT(c, 0xc2db6u);
    if (x86_cc(c, 4)) { goto L_c2e14; }
    X86_TICK(c, 7);
    // 0c2db8  cmp bl, 6
    X86_AT(c, 0xc2db8u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c2dbb  je 0xc2e14
    X86_AT(c, 0xc2dbbu);
    if (x86_cc(c, 4)) { goto L_c2e14; }
    X86_TICK(c, 7);
    // 0c2dbd  cmp bl, 1
    X86_AT(c, 0xc2dbdu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c2dc0  je 0xc2e14
    X86_AT(c, 0xc2dc0u);
    if (x86_cc(c, 4)) { goto L_c2e14; }
    X86_TICK(c, 17);
    // 0c2dc2  lea eax, [ebp - 0xd]
    X86_AT(c, 0xc2dc2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF3u);
    // 0c2dc5  push eax
    X86_AT(c, 0xc2dc5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2dc6  push ebx
    X86_AT(c, 0xc2dc6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c2dc7  push 0xb
    X86_AT(c, 0xc2dc7u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c2dc9  push 0xa846c
    X86_AT(c, 0xc2dc9u);
    { uint32_t v = 0xA846Cu; push32(c, v); }
    // 0c2dce  call 0xba1b4
    X86_AT(c, 0xc2dceu);
    push32(c, 0xc2dd3u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc2dd3u);
    X86_TICK(c, 11);
    // 0c2dd3  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xc2dd3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0c2dd6  push 4
    X86_AT(c, 0xc2dd6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2dd8  call 0xbb6b0
    X86_AT(c, 0xc2dd8u);
    push32(c, 0xc2dddu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2dddu);
    X86_TICK(c, 14);
    // 0c2ddd  add esp, 0x14
    X86_AT(c, 0xc2dddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0c2de0  cmp dword ptr [ebp - 0x1c], 0
    X86_AT(c, 0xc2de0u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))), 0x0u, 0, 4);
    // 0c2de4  je 0xc2d9d
    X86_AT(c, 0xc2de4u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc2d9du); goto L_c2d9d; }
    X86_TICK(c, 13);
    // 0c2de6  push 9
    X86_AT(c, 0xc2de6u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0c2de8  push 0x28
    X86_AT(c, 0xc2de8u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c2dea  push 4
    X86_AT(c, 0xc2deau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2dec  call 0xbc174
    X86_AT(c, 0xc2decu);
    push32(c, 0xc2df1u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2df1u);
    X86_TICK(c, 14);
    // 0c2df1  push dword ptr [ebp - 0x1c]
    X86_AT(c, 0xc2df1u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))); push32(c, v); }
    // 0c2df4  push 4
    X86_AT(c, 0xc2df4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2df6  call 0xbbba4
    X86_AT(c, 0xc2df6u);
    push32(c, 0xc2dfbu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc2dfbu);
    X86_TICK(c, 14);
    // 0c2dfb  lea eax, [edi + edi*2]
    X86_AT(c, 0xc2dfbu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2dfe  lea edx, [eax*8]
    X86_AT(c, 0xc2dfeu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2e05  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2e05u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2e08  mov al, byte ptr [ebp - 0xd]
    X86_AT(c, 0xc2e08u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))));
    // 0c2e0b  mov byte ptr [edx + 0xa4ddb], al
    X86_AT(c, 0xc2e0bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDBu)), g8(c, 0));
    // 0c2e11  add esp, 0x14
    X86_AT(c, 0xc2e11u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_c2e14:
    X86_TICK(c, 7);
    // 0c2e14  cmp bl, 5
    X86_AT(c, 0xc2e14u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c2e17  jne 0xc2e88
    X86_AT(c, 0xc2e17u);
    if (x86_cc(c, 5)) { goto L_c2e88; }
    X86_TICK(c, 13);
    // 0c2e19  mov dword ptr [ebp - 4], 2
    X86_AT(c, 0xc2e19u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x2u);
    // 0c2e20  push 0xd
    X86_AT(c, 0xc2e20u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c2e22  push 5
    X86_AT(c, 0xc2e22u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2e24  call 0xbba64
    X86_AT(c, 0xc2e24u);
    push32(c, 0xc2e29u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xc2e29u);
    X86_TICK(c, 27);
    // 0c2e29  lea eax, [ebp - 0xd]
    X86_AT(c, 0xc2e29u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF3u);
    // 0c2e2c  push eax
    X86_AT(c, 0xc2e2cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2e2d  lea eax, [edi + edi*2]
    X86_AT(c, 0xc2e2du);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2e30  lea edx, [eax*8]
    X86_AT(c, 0xc2e30u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2e37  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2e37u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2e3a  mov al, byte ptr [edx + 0xa4ddb]
    X86_AT(c, 0xc2e3au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDBu))));
    // 0c2e40  push eax
    X86_AT(c, 0xc2e40u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2e41  push 0xb
    X86_AT(c, 0xc2e41u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c2e43  push 0xa846c
    X86_AT(c, 0xc2e43u);
    { uint32_t v = 0xA846Cu; push32(c, v); }
    // 0c2e48  call 0xba1b4
    X86_AT(c, 0xc2e48u);
    push32(c, 0xc2e4du); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc2e4du);
    X86_TICK(c, 15);
    // 0c2e4d  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xc2e4du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0c2e50  push 9
    X86_AT(c, 0xc2e50u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0c2e52  push 0x28
    X86_AT(c, 0xc2e52u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c2e54  push 4
    X86_AT(c, 0xc2e54u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2e56  call 0xbc174
    X86_AT(c, 0xc2e56u);
    push32(c, 0xc2e5bu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2e5bu);
    X86_TICK(c, 9);
    // 0c2e5b  push 4
    X86_AT(c, 0xc2e5bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2e5d  call 0xbb6b0
    X86_AT(c, 0xc2e5du);
    push32(c, 0xc2e62u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2e62u);
L_c2e62:
    X86_TICK(c, 14);
    // 0c2e62  add esp, 0x28
    X86_AT(c, 0xc2e62u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0c2e65  cmp dword ptr [ebp - 0x1c], 0
    X86_AT(c, 0xc2e65u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))), 0x0u, 0, 4);
    // 0c2e69  je 0xc2e7a
    X86_AT(c, 0xc2e69u);
    if (x86_cc(c, 4)) { goto L_c2e7a; }
    X86_TICK(c, 14);
    // 0c2e6b  push dword ptr [ebp - 0x1c]
    X86_AT(c, 0xc2e6bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))); push32(c, v); }
    // 0c2e6e  push 4
    X86_AT(c, 0xc2e6eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2e70  call 0xbbba4
    X86_AT(c, 0xc2e70u);
    push32(c, 0xc2e75u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc2e75u);
    X86_TICK(c, 7);
    // 0c2e75  jmp 0xc2f8f
    X86_AT(c, 0xc2e75u);
    goto L_c2f8f;
L_c2e7a:
    X86_TICK(c, 11);
    // 0c2e7a  push 0x20
    X86_AT(c, 0xc2e7au);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0c2e7c  push 4
    X86_AT(c, 0xc2e7cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2e7e  call 0xbbd1c
    X86_AT(c, 0xc2e7eu);
    push32(c, 0xc2e83u); x86_call_known(c, 0xbbd1cu, f_000bbd1c); X86_RET(c, 0xc2e83u);
    X86_TICK(c, 7);
    // 0c2e83  jmp 0xc2f8f
    X86_AT(c, 0xc2e83u);
    goto L_c2f8f;
L_c2e88:
    X86_TICK(c, 7);
    // 0c2e88  cmp bl, 6
    X86_AT(c, 0xc2e88u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c2e8b  jne 0xc2f2a
    X86_AT(c, 0xc2e8bu);
    if (x86_cc(c, 5)) { goto L_c2f2a; }
    X86_TICK(c, 13);
    // 0c2e91  mov dword ptr [ebp - 4], 4
    X86_AT(c, 0xc2e91u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x4u);
    // 0c2e98  push 0xd
    X86_AT(c, 0xc2e98u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c2e9a  push 5
    X86_AT(c, 0xc2e9au);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2e9c  call 0xbba64
    X86_AT(c, 0xc2e9cu);
    push32(c, 0xc2ea1u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xc2ea1u);
    X86_TICK(c, 27);
    // 0c2ea1  lea eax, [ebp - 0xd]
    X86_AT(c, 0xc2ea1u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF3u);
    // 0c2ea4  push eax
    X86_AT(c, 0xc2ea4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2ea5  lea eax, [edi + edi*2]
    X86_AT(c, 0xc2ea5u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2ea8  lea edx, [eax*8]
    X86_AT(c, 0xc2ea8u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2eaf  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2eafu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2eb2  mov al, byte ptr [edx + 0xa4ddb]
    X86_AT(c, 0xc2eb2u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDBu))));
    // 0c2eb8  push eax
    X86_AT(c, 0xc2eb8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2eb9  push 0xb
    X86_AT(c, 0xc2eb9u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c2ebb  push 0xa846c
    X86_AT(c, 0xc2ebbu);
    { uint32_t v = 0xA846Cu; push32(c, v); }
    // 0c2ec0  call 0xba1b4
    X86_AT(c, 0xc2ec0u);
    push32(c, 0xc2ec5u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc2ec5u);
    X86_TICK(c, 15);
    // 0c2ec5  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xc2ec5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0c2ec8  push 9
    X86_AT(c, 0xc2ec8u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0c2eca  push 0x28
    X86_AT(c, 0xc2ecau);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c2ecc  push 4
    X86_AT(c, 0xc2eccu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2ece  call 0xbc174
    X86_AT(c, 0xc2eceu);
    push32(c, 0xc2ed3u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2ed3u);
    X86_TICK(c, 9);
    // 0c2ed3  push 4
    X86_AT(c, 0xc2ed3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2ed5  call 0xbb6b0
    X86_AT(c, 0xc2ed5u);
    push32(c, 0xc2edau); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2edau);
    X86_TICK(c, 14);
    // 0c2eda  add esp, 0x28
    X86_AT(c, 0xc2edau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0c2edd  cmp dword ptr [ebp - 0x1c], 0
    X86_AT(c, 0xc2eddu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))), 0x0u, 0, 4);
    // 0c2ee1  je 0xc2ef0
    X86_AT(c, 0xc2ee1u);
    if (x86_cc(c, 4)) { goto L_c2ef0; }
    X86_TICK(c, 14);
    // 0c2ee3  push dword ptr [ebp - 0x1c]
    X86_AT(c, 0xc2ee3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))); push32(c, v); }
    // 0c2ee6  push 4
    X86_AT(c, 0xc2ee6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2ee8  call 0xbbba4
    X86_AT(c, 0xc2ee8u);
    push32(c, 0xc2eedu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc2eedu);
    X86_TICK(c, 2);
    // 0c2eed  add esp, 8
    X86_AT(c, 0xc2eedu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c2ef0:
    X86_TICK(c, 11);
    // 0c2ef0  push 0x20
    X86_AT(c, 0xc2ef0u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0c2ef2  push 4
    X86_AT(c, 0xc2ef2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2ef4  call 0xbbd1c
    X86_AT(c, 0xc2ef4u);
    push32(c, 0xc2ef9u); x86_call_known(c, 0xbbd1cu, f_000bbd1c); X86_RET(c, 0xc2ef9u);
    X86_TICK(c, 25);
    // 0c2ef9  mov esi, 0x1e
    X86_AT(c, 0xc2ef9u);
    c.r[6] = 0x1Eu;
    // 0c2efe  lea eax, [edi + edi*2]
    X86_AT(c, 0xc2efeu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2f01  lea edx, [eax*8]
    X86_AT(c, 0xc2f01u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2f08  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2f08u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2f0b  mov eax, 5
    X86_AT(c, 0xc2f0bu);
    c.r[0] = 0x5u;
    // 0c2f10  mov dword ptr [edx + 0xa4dd6], eax
    X86_AT(c, 0xc2f10u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD6u)), c.r[0]);
    // 0c2f16  mov dword ptr [edx + 0xa4dd2], eax
    X86_AT(c, 0xc2f16u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD2u)), c.r[0]);
    // 0c2f1c  mov dword ptr [edx + 0xa4dce], eax
    X86_AT(c, 0xc2f1cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCEu)), c.r[0]);
    // 0c2f22  mov dword ptr [edx + 0xa4dca], eax
    X86_AT(c, 0xc2f22u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCAu)), c.r[0]);
    // 0c2f28  jmp 0xc2f8f
    X86_AT(c, 0xc2f28u);
    goto L_c2f8f;
L_c2f2a:
    X86_TICK(c, 7);
    // 0c2f2a  cmp bl, 1
    X86_AT(c, 0xc2f2au);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c2f2d  jne 0xc2f45
    X86_AT(c, 0xc2f2du);
    if (x86_cc(c, 5)) { goto L_c2f45; }
L_c2f2f:
    X86_TICK(c, 11);
    // 0c2f2f  push 0xd
    X86_AT(c, 0xc2f2fu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c2f31  push 5
    X86_AT(c, 0xc2f31u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2f33  call 0xbba64
    X86_AT(c, 0xc2f33u);
    push32(c, 0xc2f38u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xc2f38u);
    X86_TICK(c, 11);
    // 0c2f38  mov eax, 0xffffffff
    X86_AT(c, 0xc2f38u);
    c.r[0] = 0xFFFFFFFFu;
    // 0c2f3d  add esp, 8
    X86_AT(c, 0xc2f3du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c2f40  jmp 0xc35c9
    X86_AT(c, 0xc2f40u);
    goto L_c35c9;
L_c2f45:
    X86_TICK(c, 11);
    // 0c2f45  push 0xd
    X86_AT(c, 0xc2f45u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c2f47  push 5
    X86_AT(c, 0xc2f47u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2f49  call 0xbba64
    X86_AT(c, 0xc2f49u);
    push32(c, 0xc2f4eu); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xc2f4eu);
    X86_TICK(c, 18);
    // 0c2f4e  mov dword ptr [ebp - 4], 4
    X86_AT(c, 0xc2f4eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x4u);
    // 0c2f55  mov esi, 0x1e
    X86_AT(c, 0xc2f55u);
    c.r[6] = 0x1Eu;
    // 0c2f5a  lea eax, [edi + edi*2]
    X86_AT(c, 0xc2f5au);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2f5d  lea edx, [eax*8]
    X86_AT(c, 0xc2f5du);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2f64  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2f64u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2f67  mov dword ptr [edx + 0xa4dd6], 5
    X86_AT(c, 0xc2f67u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD6u)), 0x5u);
    // 0c2f71  mov dword ptr [edx + 0xa4dd2], 5
    X86_AT(c, 0xc2f71u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD2u)), 0x5u);
    // 0c2f7b  mov dword ptr [edx + 0xa4dce], 5
    X86_AT(c, 0xc2f7bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCEu)), 0x5u);
    // 0c2f85  mov dword ptr [edx + 0xa4dca], 5
    X86_AT(c, 0xc2f85u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCAu)), 0x5u);
L_c2f8f:
    X86_TICK(c, 9);
    // 0c2f8f  add esp, 8
    X86_AT(c, 0xc2f8fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c2f92  jmp 0xc27a0
    X86_AT(c, 0xc2f92u);
    X86_POLL(c, 0xc27a0u); goto L_c27a0;
L_c2f97:
    X86_TICK(c, 18);
    // 0c2f97  lea eax, [edi + edi*2]
    X86_AT(c, 0xc2f97u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2f9a  lea edx, [eax*8]
    X86_AT(c, 0xc2f9au);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2fa1  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2fa1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2fa4  cmp byte ptr [edx + 0xa4ddc], 0
    X86_AT(c, 0xc2fa4u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDCu))), 0x0u, 0, 1);
    // 0c2fab  jne 0xc2fb9
    X86_AT(c, 0xc2fabu);
    if (x86_cc(c, 5)) { goto L_c2fb9; }
    X86_TICK(c, 9);
    // 0c2fad  mov dword ptr [ebp - 4], 1
    X86_AT(c, 0xc2fadu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x1u);
    // 0c2fb4  jmp 0xc27a0
    X86_AT(c, 0xc2fb4u);
    X86_POLL(c, 0xc27a0u); goto L_c27a0;
L_c2fb9:
    X86_TICK(c, 18);
    // 0c2fb9  lea eax, [edi + edi*2]
    X86_AT(c, 0xc2fb9u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2fbc  lea edx, [eax*8]
    X86_AT(c, 0xc2fbcu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2fc3  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2fc3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2fc6  cmp byte ptr [edx + 0xa4dda], 0
    X86_AT(c, 0xc2fc6u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDAu))), 0x0u, 0, 1);
    // 0c2fcd  jne 0xc2fdb
    X86_AT(c, 0xc2fcdu);
    if (x86_cc(c, 5)) { goto L_c2fdb; }
    X86_TICK(c, 9);
    // 0c2fcf  mov dword ptr [ebp - 4], 2
    X86_AT(c, 0xc2fcfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x2u);
    // 0c2fd6  jmp 0xc27a0
    X86_AT(c, 0xc2fd6u);
    X86_POLL(c, 0xc27a0u); goto L_c27a0;
L_c2fdb:
    X86_TICK(c, 23);
    // 0c2fdb  mov eax, edi
    X86_AT(c, 0xc2fdbu);
    c.r[0] = c.r[7];
    // 0c2fdd  lea edx, [eax + eax*2]
    X86_AT(c, 0xc2fddu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c2fe0  shl edx, 5
    X86_AT(c, 0xc2fe0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c2fe3  add edx, eax
    X86_AT(c, 0xc2fe3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c2fe5  lea edx, [eax + edx*2]
    X86_AT(c, 0xc2fe5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c2fe8  cmp byte ptr [edx + 0xa4ddb], 0
    X86_AT(c, 0xc2fe8u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDBu))), 0x0u, 0, 1);
    // 0c2fef  je 0xc3108
    X86_AT(c, 0xc2fefu);
    if (x86_cc(c, 4)) { goto L_c3108; }
    X86_TICK(c, 11);
    // 0c2ff5  push 0xe
    X86_AT(c, 0xc2ff5u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c2ff7  push 4
    X86_AT(c, 0xc2ff7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2ff9  call 0xbc3ec
    X86_AT(c, 0xc2ff9u);
    push32(c, 0xc2ffeu); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc2ffeu);
    X86_TICK(c, 2);
    // 0c2ffe  add esp, 8
    X86_AT(c, 0xc2ffeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c3001:
    X86_TICK(c, 13);
    // 0c3001  push 5
    X86_AT(c, 0xc3001u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c3003  push 0x28
    X86_AT(c, 0xc3003u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c3005  push 4
    X86_AT(c, 0xc3005u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3007  call 0xbc174
    X86_AT(c, 0xc3007u);
    push32(c, 0xc300cu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc300cu);
    X86_TICK(c, 13);
    // 0c300c  push 2
    X86_AT(c, 0xc300cu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c300e  push esi
    X86_AT(c, 0xc300eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c300f  push 4
    X86_AT(c, 0xc300fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3011  call 0xba404
    X86_AT(c, 0xc3011u);
    push32(c, 0xc3016u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc3016u);
    X86_TICK(c, 13);
    // 0c3016  push 0xa
    X86_AT(c, 0xc3016u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c3018  push 0x34
    X86_AT(c, 0xc3018u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0c301a  push 4
    X86_AT(c, 0xc301au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c301c  call 0xbc174
    X86_AT(c, 0xc301cu);
    push32(c, 0xc3021u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3021u);
    X86_TICK(c, 29);
    // 0c3021  push 2
    X86_AT(c, 0xc3021u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c3023  mov eax, edi
    X86_AT(c, 0xc3023u);
    c.r[0] = c.r[7];
    // 0c3025  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3025u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3028  shl edx, 5
    X86_AT(c, 0xc3028u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c302b  add edx, eax
    X86_AT(c, 0xc302bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c302d  lea edx, [eax + edx*2]
    X86_AT(c, 0xc302du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3030  push dword ptr [edx + 0xa4dca]
    X86_AT(c, 0xc3030u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCAu))); push32(c, v); }
    // 0c3036  push 4
    X86_AT(c, 0xc3036u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3038  mov dword ptr [ebp - 0x20], edx
    X86_AT(c, 0xc3038u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[2]);
    // 0c303b  call 0xba404
    X86_AT(c, 0xc303bu);
    push32(c, 0xc3040u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc3040u);
    X86_TICK(c, 9);
    // 0c3040  push 4
    X86_AT(c, 0xc3040u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3042  call 0xb9930
    X86_AT(c, 0xc3042u);
    push32(c, 0xc3047u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc3047u);
    X86_TICK(c, 12);
    // 0c3047  xchg ebx, eax
    X86_AT(c, 0xc3047u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c3048  add esp, 0x34
    X86_AT(c, 0xc3048u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0c304b  cmp bl, 5
    X86_AT(c, 0xc304bu);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c304e  je 0xc30bb
    X86_AT(c, 0xc304eu);
    if (x86_cc(c, 4)) { goto L_c30bb; }
    X86_TICK(c, 7);
    // 0c3054  cmp bl, 6
    X86_AT(c, 0xc3054u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c3057  je 0xc30bb
    X86_AT(c, 0xc3057u);
    if (x86_cc(c, 4)) { goto L_c30bb; }
    X86_TICK(c, 7);
    // 0c3059  cmp bl, 4
    X86_AT(c, 0xc3059u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0c305c  je 0xc30bb
    X86_AT(c, 0xc305cu);
    if (x86_cc(c, 4)) { goto L_c30bb; }
    X86_TICK(c, 7);
    // 0c305e  cmp bl, 1
    X86_AT(c, 0xc305eu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c3061  je 0xc30bb
    X86_AT(c, 0xc3061u);
    if (x86_cc(c, 4)) { goto L_c30bb; }
    X86_TICK(c, 7);
    // 0c3063  cmp bl, 7
    X86_AT(c, 0xc3063u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0c3066  jne 0xc3081
    X86_AT(c, 0xc3066u);
    if (x86_cc(c, 5)) { goto L_c3081; }
    X86_TICK(c, 15);
    // 0c3068  mov eax, dword ptr [ebp - 0x20]
    X86_AT(c, 0xc3068u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)));
    // 0c306b  mov edx, dword ptr [eax + 0xa4dca]
    X86_AT(c, 0xc306bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4DCAu)));
    // 0c3071  cmp edx, 0x19
    X86_AT(c, 0xc3071u);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0c3074  je 0xc3001
    X86_AT(c, 0xc3074u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc3001u); goto L_c3001; }
    X86_TICK(c, 7);
    // 0c3076  and esi, esi
    X86_AT(c, 0xc3076u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0c3078  je 0xc3001
    X86_AT(c, 0xc3078u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc3001u); goto L_c3001; }
    X86_TICK(c, 8);
    // 0c307a  inc dword ptr [eax + 0xa4dca]
    X86_AT(c, 0xc307au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xA4DCAu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c3080  dec esi
    X86_AT(c, 0xc3080u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_c3081:
    X86_TICK(c, 7);
    // 0c3081  cmp bl, 3
    X86_AT(c, 0xc3081u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0c3084  jne 0xc3001
    X86_AT(c, 0xc3084u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc3001u); goto L_c3001; }
    X86_TICK(c, 22);
    // 0c308a  mov eax, edi
    X86_AT(c, 0xc308au);
    c.r[0] = c.r[7];
    // 0c308c  lea edx, [eax + eax*2]
    X86_AT(c, 0xc308cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c308f  shl edx, 5
    X86_AT(c, 0xc308fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c3092  add edx, eax
    X86_AT(c, 0xc3092u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c3094  lea edx, [eax + edx*2]
    X86_AT(c, 0xc3094u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3097  mov eax, dword ptr [edx + 0xa4dca]
    X86_AT(c, 0xc3097u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCAu)));
    // 0c309d  cmp eax, 5
    X86_AT(c, 0xc309du);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0c30a0  je 0xc3001
    X86_AT(c, 0xc30a0u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc3001u); goto L_c3001; }
    X86_TICK(c, 7);
    // 0c30a6  cmp esi, 0x1e
    X86_AT(c, 0xc30a6u);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0c30a9  je 0xc3001
    X86_AT(c, 0xc30a9u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc3001u); goto L_c3001; }
    X86_TICK(c, 15);
    // 0c30af  dec dword ptr [edx + 0xa4dca]
    X86_AT(c, 0xc30afu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCAu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0c30b5  inc esi
    X86_AT(c, 0xc30b5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c30b6  jmp 0xc3001
    X86_AT(c, 0xc30b6u);
    X86_POLL(c, 0xc3001u); goto L_c3001;
L_c30bb:
    X86_TICK(c, 11);
    // 0c30bb  push 0xb
    X86_AT(c, 0xc30bbu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c30bd  push 4
    X86_AT(c, 0xc30bdu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c30bf  call 0xbc3ec
    X86_AT(c, 0xc30bfu);
    push32(c, 0xc30c4u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc30c4u);
    X86_TICK(c, 13);
    // 0c30c4  push 5
    X86_AT(c, 0xc30c4u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c30c6  push 0x28
    X86_AT(c, 0xc30c6u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c30c8  push 4
    X86_AT(c, 0xc30c8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c30ca  call 0xbc174
    X86_AT(c, 0xc30cau);
    push32(c, 0xc30cfu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc30cfu);
    X86_TICK(c, 13);
    // 0c30cf  push 2
    X86_AT(c, 0xc30cfu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c30d1  push esi
    X86_AT(c, 0xc30d1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c30d2  push 4
    X86_AT(c, 0xc30d2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c30d4  call 0xba404
    X86_AT(c, 0xc30d4u);
    push32(c, 0xc30d9u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc30d9u);
    X86_TICK(c, 13);
    // 0c30d9  push 0xa
    X86_AT(c, 0xc30d9u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c30db  push 0x34
    X86_AT(c, 0xc30dbu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0c30dd  push 4
    X86_AT(c, 0xc30ddu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c30df  call 0xbc174
    X86_AT(c, 0xc30dfu);
    push32(c, 0xc30e4u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc30e4u);
    X86_TICK(c, 27);
    // 0c30e4  push 2
    X86_AT(c, 0xc30e4u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c30e6  mov eax, edi
    X86_AT(c, 0xc30e6u);
    c.r[0] = c.r[7];
    // 0c30e8  lea edx, [eax + eax*2]
    X86_AT(c, 0xc30e8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c30eb  shl edx, 5
    X86_AT(c, 0xc30ebu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c30ee  add edx, eax
    X86_AT(c, 0xc30eeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c30f0  lea edx, [eax + edx*2]
    X86_AT(c, 0xc30f0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c30f3  push dword ptr [edx + 0xa4dca]
    X86_AT(c, 0xc30f3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCAu))); push32(c, v); }
    // 0c30f9  push 4
    X86_AT(c, 0xc30f9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c30fb  call 0xba404
    X86_AT(c, 0xc30fbu);
    push32(c, 0xc3100u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc3100u);
    X86_TICK(c, 9);
    // 0c3100  add esp, 0x38
    X86_AT(c, 0xc3100u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0c3103  cmp bl, 5
    X86_AT(c, 0xc3103u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c3106  jne 0xc3114
    X86_AT(c, 0xc3106u);
    if (x86_cc(c, 5)) { goto L_c3114; }
L_c3108:
    X86_TICK(c, 9);
    // 0c3108  mov dword ptr [ebp - 4], 3
    X86_AT(c, 0xc3108u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x3u);
    // 0c310f  jmp 0xc27a0
    X86_AT(c, 0xc310fu);
    X86_POLL(c, 0xc27a0u); goto L_c27a0;
L_c3114:
    X86_TICK(c, 7);
    // 0c3114  cmp bl, 1
    X86_AT(c, 0xc3114u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c3117  je 0xc350e
    X86_AT(c, 0xc3117u);
    if (x86_cc(c, 4)) { goto L_c350e; }
    X86_TICK(c, 7);
    // 0c311d  cmp bl, 6
    X86_AT(c, 0xc311du);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c3120  je 0xc33a2
    X86_AT(c, 0xc3120u);
    if (x86_cc(c, 4)) { goto L_c33a2; }
    X86_TICK(c, 7);
    // 0c3126  cmp bl, 4
    X86_AT(c, 0xc3126u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0c3129  jne 0xc27a0
    X86_AT(c, 0xc3129u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc27a0u); goto L_c27a0; }
    X86_TICK(c, 7);
    // 0c312f  jmp 0xc33a2
    X86_AT(c, 0xc312fu);
    goto L_c33a2;
L_c3134:
    X86_TICK(c, 11);
    // 0c3134  push 0xe
    X86_AT(c, 0xc3134u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c3136  push 4
    X86_AT(c, 0xc3136u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3138  call 0xbc3ec
    X86_AT(c, 0xc3138u);
    push32(c, 0xc313du); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc313du);
    X86_TICK(c, 2);
    // 0c313d  add esp, 8
    X86_AT(c, 0xc313du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c3140:
    X86_TICK(c, 13);
    // 0c3140  push 5
    X86_AT(c, 0xc3140u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c3142  push 0x28
    X86_AT(c, 0xc3142u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c3144  push 4
    X86_AT(c, 0xc3144u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3146  call 0xbc174
    X86_AT(c, 0xc3146u);
    push32(c, 0xc314bu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc314bu);
    X86_TICK(c, 13);
    // 0c314b  push 2
    X86_AT(c, 0xc314bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c314d  push esi
    X86_AT(c, 0xc314du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c314e  push 4
    X86_AT(c, 0xc314eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3150  call 0xba404
    X86_AT(c, 0xc3150u);
    push32(c, 0xc3155u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc3155u);
    X86_TICK(c, 13);
    // 0c3155  push 0xb
    X86_AT(c, 0xc3155u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c3157  push 0x34
    X86_AT(c, 0xc3157u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0c3159  push 4
    X86_AT(c, 0xc3159u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c315b  call 0xbc174
    X86_AT(c, 0xc315bu);
    push32(c, 0xc3160u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3160u);
    X86_TICK(c, 29);
    // 0c3160  push 2
    X86_AT(c, 0xc3160u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c3162  mov eax, edi
    X86_AT(c, 0xc3162u);
    c.r[0] = c.r[7];
    // 0c3164  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3164u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3167  shl edx, 5
    X86_AT(c, 0xc3167u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c316a  add edx, eax
    X86_AT(c, 0xc316au);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c316c  lea edx, [eax + edx*2]
    X86_AT(c, 0xc316cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c316f  push dword ptr [edx + 0xa4dce]
    X86_AT(c, 0xc316fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCEu))); push32(c, v); }
    // 0c3175  push 4
    X86_AT(c, 0xc3175u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3177  mov dword ptr [ebp - 0x20], edx
    X86_AT(c, 0xc3177u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[2]);
    // 0c317a  call 0xba404
    X86_AT(c, 0xc317au);
    push32(c, 0xc317fu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc317fu);
    X86_TICK(c, 9);
    // 0c317f  push 4
    X86_AT(c, 0xc317fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3181  call 0xb9930
    X86_AT(c, 0xc3181u);
    push32(c, 0xc3186u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc3186u);
    X86_TICK(c, 12);
    // 0c3186  xchg ebx, eax
    X86_AT(c, 0xc3186u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c3187  add esp, 0x34
    X86_AT(c, 0xc3187u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0c318a  cmp bl, 5
    X86_AT(c, 0xc318au);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c318d  je 0xc31fa
    X86_AT(c, 0xc318du);
    if (x86_cc(c, 4)) { goto L_c31fa; }
    X86_TICK(c, 7);
    // 0c3193  cmp bl, 6
    X86_AT(c, 0xc3193u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c3196  je 0xc31fa
    X86_AT(c, 0xc3196u);
    if (x86_cc(c, 4)) { goto L_c31fa; }
    X86_TICK(c, 7);
    // 0c3198  cmp bl, 4
    X86_AT(c, 0xc3198u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0c319b  je 0xc31fa
    X86_AT(c, 0xc319bu);
    if (x86_cc(c, 4)) { goto L_c31fa; }
    X86_TICK(c, 7);
    // 0c319d  cmp bl, 1
    X86_AT(c, 0xc319du);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c31a0  je 0xc31fa
    X86_AT(c, 0xc31a0u);
    if (x86_cc(c, 4)) { goto L_c31fa; }
    X86_TICK(c, 7);
    // 0c31a2  cmp bl, 7
    X86_AT(c, 0xc31a2u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0c31a5  jne 0xc31c0
    X86_AT(c, 0xc31a5u);
    if (x86_cc(c, 5)) { goto L_c31c0; }
    X86_TICK(c, 15);
    // 0c31a7  mov eax, dword ptr [ebp - 0x20]
    X86_AT(c, 0xc31a7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)));
    // 0c31aa  mov edx, dword ptr [eax + 0xa4dce]
    X86_AT(c, 0xc31aau);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4DCEu)));
    // 0c31b0  cmp edx, 0x19
    X86_AT(c, 0xc31b0u);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0c31b3  je 0xc3140
    X86_AT(c, 0xc31b3u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc3140u); goto L_c3140; }
    X86_TICK(c, 7);
    // 0c31b5  and esi, esi
    X86_AT(c, 0xc31b5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0c31b7  je 0xc3140
    X86_AT(c, 0xc31b7u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc3140u); goto L_c3140; }
    X86_TICK(c, 8);
    // 0c31b9  inc dword ptr [eax + 0xa4dce]
    X86_AT(c, 0xc31b9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xA4DCEu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c31bf  dec esi
    X86_AT(c, 0xc31bfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_c31c0:
    X86_TICK(c, 7);
    // 0c31c0  cmp bl, 3
    X86_AT(c, 0xc31c0u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0c31c3  jne 0xc3140
    X86_AT(c, 0xc31c3u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc3140u); goto L_c3140; }
    X86_TICK(c, 22);
    // 0c31c9  mov eax, edi
    X86_AT(c, 0xc31c9u);
    c.r[0] = c.r[7];
    // 0c31cb  lea edx, [eax + eax*2]
    X86_AT(c, 0xc31cbu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c31ce  shl edx, 5
    X86_AT(c, 0xc31ceu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c31d1  add edx, eax
    X86_AT(c, 0xc31d1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c31d3  lea edx, [eax + edx*2]
    X86_AT(c, 0xc31d3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c31d6  mov eax, dword ptr [edx + 0xa4dce]
    X86_AT(c, 0xc31d6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCEu)));
    // 0c31dc  cmp eax, 5
    X86_AT(c, 0xc31dcu);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0c31df  je 0xc3140
    X86_AT(c, 0xc31dfu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc3140u); goto L_c3140; }
    X86_TICK(c, 7);
    // 0c31e5  cmp esi, 0x1e
    X86_AT(c, 0xc31e5u);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0c31e8  je 0xc3140
    X86_AT(c, 0xc31e8u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc3140u); goto L_c3140; }
    X86_TICK(c, 15);
    // 0c31ee  dec dword ptr [edx + 0xa4dce]
    X86_AT(c, 0xc31eeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCEu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0c31f4  inc esi
    X86_AT(c, 0xc31f4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c31f5  jmp 0xc3140
    X86_AT(c, 0xc31f5u);
    X86_POLL(c, 0xc3140u); goto L_c3140;
L_c31fa:
    X86_TICK(c, 11);
    // 0c31fa  push 0xb
    X86_AT(c, 0xc31fau);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c31fc  push 4
    X86_AT(c, 0xc31fcu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c31fe  call 0xbc3ec
    X86_AT(c, 0xc31feu);
    push32(c, 0xc3203u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc3203u);
    X86_TICK(c, 13);
    // 0c3203  push 5
    X86_AT(c, 0xc3203u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c3205  push 0x28
    X86_AT(c, 0xc3205u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c3207  push 4
    X86_AT(c, 0xc3207u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3209  call 0xbc174
    X86_AT(c, 0xc3209u);
    push32(c, 0xc320eu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc320eu);
    X86_TICK(c, 13);
    // 0c320e  push 2
    X86_AT(c, 0xc320eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c3210  push esi
    X86_AT(c, 0xc3210u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c3211  push 4
    X86_AT(c, 0xc3211u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3213  call 0xba404
    X86_AT(c, 0xc3213u);
    push32(c, 0xc3218u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc3218u);
    X86_TICK(c, 13);
    // 0c3218  push 0xb
    X86_AT(c, 0xc3218u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c321a  push 0x34
    X86_AT(c, 0xc321au);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0c321c  push 4
    X86_AT(c, 0xc321cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c321e  call 0xbc174
    X86_AT(c, 0xc321eu);
    push32(c, 0xc3223u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3223u);
    X86_TICK(c, 27);
    // 0c3223  push 2
    X86_AT(c, 0xc3223u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c3225  mov eax, edi
    X86_AT(c, 0xc3225u);
    c.r[0] = c.r[7];
    // 0c3227  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3227u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c322a  shl edx, 5
    X86_AT(c, 0xc322au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c322d  add edx, eax
    X86_AT(c, 0xc322du);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c322f  lea edx, [eax + edx*2]
    X86_AT(c, 0xc322fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3232  push dword ptr [edx + 0xa4dce]
    X86_AT(c, 0xc3232u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCEu))); push32(c, v); }
    // 0c3238  push 4
    X86_AT(c, 0xc3238u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c323a  call 0xba404
    X86_AT(c, 0xc323au);
    push32(c, 0xc323fu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc323fu);
    X86_TICK(c, 9);
    // 0c323f  add esp, 0x38
    X86_AT(c, 0xc323fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0c3242  cmp bl, 5
    X86_AT(c, 0xc3242u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c3245  jne 0xc3253
    X86_AT(c, 0xc3245u);
    if (x86_cc(c, 5)) { goto L_c3253; }
    X86_TICK(c, 9);
    // 0c3247  mov dword ptr [ebp - 4], 4
    X86_AT(c, 0xc3247u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x4u);
    // 0c324e  jmp 0xc27a0
    X86_AT(c, 0xc324eu);
    X86_POLL(c, 0xc27a0u); goto L_c27a0;
L_c3253:
    X86_TICK(c, 7);
    // 0c3253  cmp bl, 1
    X86_AT(c, 0xc3253u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c3256  je 0xc350e
    X86_AT(c, 0xc3256u);
    if (x86_cc(c, 4)) { goto L_c350e; }
    X86_TICK(c, 7);
    // 0c325c  cmp bl, 6
    X86_AT(c, 0xc325cu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c325f  je 0xc326a
    X86_AT(c, 0xc325fu);
    if (x86_cc(c, 4)) { goto L_c326a; }
    X86_TICK(c, 7);
    // 0c3261  cmp bl, 4
    X86_AT(c, 0xc3261u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0c3264  jne 0xc27a0
    X86_AT(c, 0xc3264u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc27a0u); goto L_c27a0; }
L_c326a:
    X86_TICK(c, 26);
    // 0c326a  mov dword ptr [ebp - 4], 6
    X86_AT(c, 0xc326au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x6u);
    // 0c3271  mov eax, edi
    X86_AT(c, 0xc3271u);
    c.r[0] = c.r[7];
    // 0c3273  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3273u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3276  shl edx, 5
    X86_AT(c, 0xc3276u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c3279  add edx, eax
    X86_AT(c, 0xc3279u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c327b  lea edx, [eax + edx*2]
    X86_AT(c, 0xc327bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c327e  mov eax, dword ptr [edx + 0xa4dce]
    X86_AT(c, 0xc327eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCEu)));
    // 0c3284  mov dword ptr [edx + 0xa4dce], eax
    X86_AT(c, 0xc3284u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCEu)), c.r[0]);
    // 0c328a  jmp 0xc27a0
    X86_AT(c, 0xc328au);
    X86_POLL(c, 0xc27a0u); goto L_c27a0;
L_c328f:
    X86_TICK(c, 11);
    // 0c328f  push 0xe
    X86_AT(c, 0xc328fu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c3291  push 4
    X86_AT(c, 0xc3291u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3293  call 0xbc3ec
    X86_AT(c, 0xc3293u);
    push32(c, 0xc3298u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc3298u);
    X86_TICK(c, 2);
    // 0c3298  add esp, 8
    X86_AT(c, 0xc3298u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c329b:
    X86_TICK(c, 13);
    // 0c329b  push 5
    X86_AT(c, 0xc329bu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c329d  push 0x28
    X86_AT(c, 0xc329du);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c329f  push 4
    X86_AT(c, 0xc329fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c32a1  call 0xbc174
    X86_AT(c, 0xc32a1u);
    push32(c, 0xc32a6u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc32a6u);
    X86_TICK(c, 13);
    // 0c32a6  push 2
    X86_AT(c, 0xc32a6u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c32a8  push esi
    X86_AT(c, 0xc32a8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c32a9  push 4
    X86_AT(c, 0xc32a9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c32ab  call 0xba404
    X86_AT(c, 0xc32abu);
    push32(c, 0xc32b0u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc32b0u);
    X86_TICK(c, 13);
    // 0c32b0  push 0xc
    X86_AT(c, 0xc32b0u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0c32b2  push 0x34
    X86_AT(c, 0xc32b2u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0c32b4  push 4
    X86_AT(c, 0xc32b4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c32b6  call 0xbc174
    X86_AT(c, 0xc32b6u);
    push32(c, 0xc32bbu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc32bbu);
    X86_TICK(c, 29);
    // 0c32bb  push 2
    X86_AT(c, 0xc32bbu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c32bd  mov eax, edi
    X86_AT(c, 0xc32bdu);
    c.r[0] = c.r[7];
    // 0c32bf  lea edx, [eax + eax*2]
    X86_AT(c, 0xc32bfu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c32c2  shl edx, 5
    X86_AT(c, 0xc32c2u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c32c5  add edx, eax
    X86_AT(c, 0xc32c5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c32c7  lea edx, [eax + edx*2]
    X86_AT(c, 0xc32c7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c32ca  push dword ptr [edx + 0xa4dd2]
    X86_AT(c, 0xc32cau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD2u))); push32(c, v); }
    // 0c32d0  push 4
    X86_AT(c, 0xc32d0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c32d2  mov dword ptr [ebp - 0x20], edx
    X86_AT(c, 0xc32d2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[2]);
    // 0c32d5  call 0xba404
    X86_AT(c, 0xc32d5u);
    push32(c, 0xc32dau); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc32dau);
    X86_TICK(c, 9);
    // 0c32da  push 4
    X86_AT(c, 0xc32dau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c32dc  call 0xb9930
    X86_AT(c, 0xc32dcu);
    push32(c, 0xc32e1u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc32e1u);
    X86_TICK(c, 12);
    // 0c32e1  xchg ebx, eax
    X86_AT(c, 0xc32e1u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c32e2  add esp, 0x34
    X86_AT(c, 0xc32e2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0c32e5  cmp bl, 5
    X86_AT(c, 0xc32e5u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c32e8  je 0xc3355
    X86_AT(c, 0xc32e8u);
    if (x86_cc(c, 4)) { goto L_c3355; }
    X86_TICK(c, 7);
    // 0c32ee  cmp bl, 6
    X86_AT(c, 0xc32eeu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c32f1  je 0xc3355
    X86_AT(c, 0xc32f1u);
    if (x86_cc(c, 4)) { goto L_c3355; }
    X86_TICK(c, 7);
    // 0c32f3  cmp bl, 4
    X86_AT(c, 0xc32f3u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0c32f6  je 0xc3355
    X86_AT(c, 0xc32f6u);
    if (x86_cc(c, 4)) { goto L_c3355; }
    X86_TICK(c, 7);
    // 0c32f8  cmp bl, 1
    X86_AT(c, 0xc32f8u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c32fb  je 0xc3355
    X86_AT(c, 0xc32fbu);
    if (x86_cc(c, 4)) { goto L_c3355; }
    X86_TICK(c, 7);
    // 0c32fd  cmp bl, 7
    X86_AT(c, 0xc32fdu);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0c3300  jne 0xc331b
    X86_AT(c, 0xc3300u);
    if (x86_cc(c, 5)) { goto L_c331b; }
    X86_TICK(c, 15);
    // 0c3302  mov eax, dword ptr [ebp - 0x20]
    X86_AT(c, 0xc3302u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)));
    // 0c3305  mov edx, dword ptr [eax + 0xa4dd2]
    X86_AT(c, 0xc3305u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4DD2u)));
    // 0c330b  cmp edx, 0x19
    X86_AT(c, 0xc330bu);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0c330e  je 0xc329b
    X86_AT(c, 0xc330eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc329bu); goto L_c329b; }
    X86_TICK(c, 7);
    // 0c3310  and esi, esi
    X86_AT(c, 0xc3310u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0c3312  je 0xc329b
    X86_AT(c, 0xc3312u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc329bu); goto L_c329b; }
    X86_TICK(c, 8);
    // 0c3314  inc dword ptr [eax + 0xa4dd2]
    X86_AT(c, 0xc3314u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xA4DD2u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c331a  dec esi
    X86_AT(c, 0xc331au);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_c331b:
    X86_TICK(c, 7);
    // 0c331b  cmp bl, 3
    X86_AT(c, 0xc331bu);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0c331e  jne 0xc329b
    X86_AT(c, 0xc331eu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc329bu); goto L_c329b; }
    X86_TICK(c, 22);
    // 0c3324  mov eax, edi
    X86_AT(c, 0xc3324u);
    c.r[0] = c.r[7];
    // 0c3326  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3326u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3329  shl edx, 5
    X86_AT(c, 0xc3329u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c332c  add edx, eax
    X86_AT(c, 0xc332cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c332e  lea edx, [eax + edx*2]
    X86_AT(c, 0xc332eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3331  mov eax, dword ptr [edx + 0xa4dd2]
    X86_AT(c, 0xc3331u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD2u)));
    // 0c3337  cmp eax, 5
    X86_AT(c, 0xc3337u);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0c333a  je 0xc329b
    X86_AT(c, 0xc333au);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc329bu); goto L_c329b; }
    X86_TICK(c, 7);
    // 0c3340  cmp esi, 0x1e
    X86_AT(c, 0xc3340u);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0c3343  je 0xc329b
    X86_AT(c, 0xc3343u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc329bu); goto L_c329b; }
    X86_TICK(c, 15);
    // 0c3349  dec dword ptr [edx + 0xa4dd2]
    X86_AT(c, 0xc3349u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD2u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0c334f  inc esi
    X86_AT(c, 0xc334fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c3350  jmp 0xc329b
    X86_AT(c, 0xc3350u);
    X86_POLL(c, 0xc329bu); goto L_c329b;
L_c3355:
    X86_TICK(c, 11);
    // 0c3355  push 0xb
    X86_AT(c, 0xc3355u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c3357  push 4
    X86_AT(c, 0xc3357u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3359  call 0xbc3ec
    X86_AT(c, 0xc3359u);
    push32(c, 0xc335eu); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc335eu);
    X86_TICK(c, 13);
    // 0c335e  push 5
    X86_AT(c, 0xc335eu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c3360  push 0x28
    X86_AT(c, 0xc3360u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c3362  push 4
    X86_AT(c, 0xc3362u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3364  call 0xbc174
    X86_AT(c, 0xc3364u);
    push32(c, 0xc3369u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3369u);
    X86_TICK(c, 13);
    // 0c3369  push 2
    X86_AT(c, 0xc3369u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c336b  push esi
    X86_AT(c, 0xc336bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c336c  push 4
    X86_AT(c, 0xc336cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c336e  call 0xba404
    X86_AT(c, 0xc336eu);
    push32(c, 0xc3373u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc3373u);
    X86_TICK(c, 13);
    // 0c3373  push 0xc
    X86_AT(c, 0xc3373u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0c3375  push 0x34
    X86_AT(c, 0xc3375u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0c3377  push 4
    X86_AT(c, 0xc3377u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3379  call 0xbc174
    X86_AT(c, 0xc3379u);
    push32(c, 0xc337eu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc337eu);
    X86_TICK(c, 27);
    // 0c337e  push 2
    X86_AT(c, 0xc337eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c3380  mov eax, edi
    X86_AT(c, 0xc3380u);
    c.r[0] = c.r[7];
    // 0c3382  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3382u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3385  shl edx, 5
    X86_AT(c, 0xc3385u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c3388  add edx, eax
    X86_AT(c, 0xc3388u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c338a  lea edx, [eax + edx*2]
    X86_AT(c, 0xc338au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c338d  push dword ptr [edx + 0xa4dd2]
    X86_AT(c, 0xc338du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD2u))); push32(c, v); }
    // 0c3393  push 4
    X86_AT(c, 0xc3393u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3395  call 0xba404
    X86_AT(c, 0xc3395u);
    push32(c, 0xc339au); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc339au);
    X86_TICK(c, 9);
    // 0c339a  add esp, 0x38
    X86_AT(c, 0xc339au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0c339d  cmp bl, 5
    X86_AT(c, 0xc339du);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c33a0  jne 0xc33ae
    X86_AT(c, 0xc33a0u);
    if (x86_cc(c, 5)) { goto L_c33ae; }
L_c33a2:
    X86_TICK(c, 9);
    // 0c33a2  mov dword ptr [ebp - 4], 5
    X86_AT(c, 0xc33a2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x5u);
    // 0c33a9  jmp 0xc27a0
    X86_AT(c, 0xc33a9u);
    X86_POLL(c, 0xc27a0u); goto L_c27a0;
L_c33ae:
    X86_TICK(c, 7);
    // 0c33ae  cmp bl, 1
    X86_AT(c, 0xc33aeu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c33b1  je 0xc350e
    X86_AT(c, 0xc33b1u);
    if (x86_cc(c, 4)) { goto L_c350e; }
    X86_TICK(c, 7);
    // 0c33b7  cmp bl, 6
    X86_AT(c, 0xc33b7u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c33ba  je 0xc33c5
    X86_AT(c, 0xc33bau);
    if (x86_cc(c, 4)) { goto L_c33c5; }
    X86_TICK(c, 7);
    // 0c33bc  cmp bl, 4
    X86_AT(c, 0xc33bcu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0c33bf  jne 0xc27a0
    X86_AT(c, 0xc33bfu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc27a0u); goto L_c27a0; }
L_c33c5:
    X86_TICK(c, 26);
    // 0c33c5  mov dword ptr [ebp - 4], 7
    X86_AT(c, 0xc33c5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x7u);
    // 0c33cc  mov eax, edi
    X86_AT(c, 0xc33ccu);
    c.r[0] = c.r[7];
    // 0c33ce  lea edx, [eax + eax*2]
    X86_AT(c, 0xc33ceu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c33d1  shl edx, 5
    X86_AT(c, 0xc33d1u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c33d4  add edx, eax
    X86_AT(c, 0xc33d4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c33d6  lea edx, [eax + edx*2]
    X86_AT(c, 0xc33d6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c33d9  mov eax, dword ptr [edx + 0xa4dd2]
    X86_AT(c, 0xc33d9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD2u)));
    // 0c33df  mov dword ptr [edx + 0xa4dd2], eax
    X86_AT(c, 0xc33dfu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD2u)), c.r[0]);
    // 0c33e5  jmp 0xc27a0
    X86_AT(c, 0xc33e5u);
    X86_POLL(c, 0xc27a0u); goto L_c27a0;
L_c33ea:
    X86_TICK(c, 11);
    // 0c33ea  push 0xe
    X86_AT(c, 0xc33eau);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c33ec  push 4
    X86_AT(c, 0xc33ecu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c33ee  call 0xbc3ec
    X86_AT(c, 0xc33eeu);
    push32(c, 0xc33f3u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc33f3u);
    X86_TICK(c, 2);
    // 0c33f3  add esp, 8
    X86_AT(c, 0xc33f3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c33f6:
    X86_TICK(c, 13);
    // 0c33f6  push 5
    X86_AT(c, 0xc33f6u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c33f8  push 0x28
    X86_AT(c, 0xc33f8u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c33fa  push 4
    X86_AT(c, 0xc33fau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c33fc  call 0xbc174
    X86_AT(c, 0xc33fcu);
    push32(c, 0xc3401u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3401u);
    X86_TICK(c, 13);
    // 0c3401  push 2
    X86_AT(c, 0xc3401u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c3403  push esi
    X86_AT(c, 0xc3403u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c3404  push 4
    X86_AT(c, 0xc3404u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3406  call 0xba404
    X86_AT(c, 0xc3406u);
    push32(c, 0xc340bu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc340bu);
    X86_TICK(c, 13);
    // 0c340b  push 0xd
    X86_AT(c, 0xc340bu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c340d  push 0x34
    X86_AT(c, 0xc340du);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0c340f  push 4
    X86_AT(c, 0xc340fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3411  call 0xbc174
    X86_AT(c, 0xc3411u);
    push32(c, 0xc3416u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3416u);
    X86_TICK(c, 29);
    // 0c3416  push 2
    X86_AT(c, 0xc3416u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c3418  mov eax, edi
    X86_AT(c, 0xc3418u);
    c.r[0] = c.r[7];
    // 0c341a  lea edx, [eax + eax*2]
    X86_AT(c, 0xc341au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c341d  shl edx, 5
    X86_AT(c, 0xc341du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c3420  add edx, eax
    X86_AT(c, 0xc3420u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c3422  lea edx, [eax + edx*2]
    X86_AT(c, 0xc3422u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3425  push dword ptr [edx + 0xa4dd6]
    X86_AT(c, 0xc3425u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD6u))); push32(c, v); }
    // 0c342b  push 4
    X86_AT(c, 0xc342bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c342d  mov dword ptr [ebp - 0x20], edx
    X86_AT(c, 0xc342du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[2]);
    // 0c3430  call 0xba404
    X86_AT(c, 0xc3430u);
    push32(c, 0xc3435u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc3435u);
    X86_TICK(c, 9);
    // 0c3435  push 4
    X86_AT(c, 0xc3435u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3437  call 0xb9930
    X86_AT(c, 0xc3437u);
    push32(c, 0xc343cu); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc343cu);
    X86_TICK(c, 12);
    // 0c343c  xchg ebx, eax
    X86_AT(c, 0xc343cu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c343d  add esp, 0x34
    X86_AT(c, 0xc343du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0c3440  cmp bl, 5
    X86_AT(c, 0xc3440u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c3443  je 0xc34b0
    X86_AT(c, 0xc3443u);
    if (x86_cc(c, 4)) { goto L_c34b0; }
    X86_TICK(c, 7);
    // 0c3449  cmp bl, 6
    X86_AT(c, 0xc3449u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c344c  je 0xc34b0
    X86_AT(c, 0xc344cu);
    if (x86_cc(c, 4)) { goto L_c34b0; }
    X86_TICK(c, 7);
    // 0c344e  cmp bl, 4
    X86_AT(c, 0xc344eu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0c3451  je 0xc34b0
    X86_AT(c, 0xc3451u);
    if (x86_cc(c, 4)) { goto L_c34b0; }
    X86_TICK(c, 7);
    // 0c3453  cmp bl, 1
    X86_AT(c, 0xc3453u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c3456  je 0xc34b0
    X86_AT(c, 0xc3456u);
    if (x86_cc(c, 4)) { goto L_c34b0; }
    X86_TICK(c, 7);
    // 0c3458  cmp bl, 7
    X86_AT(c, 0xc3458u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0c345b  jne 0xc3476
    X86_AT(c, 0xc345bu);
    if (x86_cc(c, 5)) { goto L_c3476; }
    X86_TICK(c, 15);
    // 0c345d  mov eax, dword ptr [ebp - 0x20]
    X86_AT(c, 0xc345du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)));
    // 0c3460  mov edx, dword ptr [eax + 0xa4dd6]
    X86_AT(c, 0xc3460u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4DD6u)));
    // 0c3466  cmp edx, 0x19
    X86_AT(c, 0xc3466u);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0c3469  je 0xc33f6
    X86_AT(c, 0xc3469u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc33f6u); goto L_c33f6; }
    X86_TICK(c, 7);
    // 0c346b  and esi, esi
    X86_AT(c, 0xc346bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0c346d  je 0xc33f6
    X86_AT(c, 0xc346du);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc33f6u); goto L_c33f6; }
    X86_TICK(c, 8);
    // 0c346f  inc dword ptr [eax + 0xa4dd6]
    X86_AT(c, 0xc346fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xA4DD6u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c3475  dec esi
    X86_AT(c, 0xc3475u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_c3476:
    X86_TICK(c, 7);
    // 0c3476  cmp bl, 3
    X86_AT(c, 0xc3476u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0c3479  jne 0xc33f6
    X86_AT(c, 0xc3479u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc33f6u); goto L_c33f6; }
    X86_TICK(c, 22);
    // 0c347f  mov eax, edi
    X86_AT(c, 0xc347fu);
    c.r[0] = c.r[7];
    // 0c3481  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3481u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3484  shl edx, 5
    X86_AT(c, 0xc3484u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c3487  add edx, eax
    X86_AT(c, 0xc3487u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c3489  lea edx, [eax + edx*2]
    X86_AT(c, 0xc3489u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c348c  mov eax, dword ptr [edx + 0xa4dd6]
    X86_AT(c, 0xc348cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD6u)));
    // 0c3492  cmp eax, 5
    X86_AT(c, 0xc3492u);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0c3495  je 0xc33f6
    X86_AT(c, 0xc3495u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc33f6u); goto L_c33f6; }
    X86_TICK(c, 7);
    // 0c349b  cmp esi, 0x1e
    X86_AT(c, 0xc349bu);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0c349e  je 0xc33f6
    X86_AT(c, 0xc349eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc33f6u); goto L_c33f6; }
    X86_TICK(c, 15);
    // 0c34a4  dec dword ptr [edx + 0xa4dd6]
    X86_AT(c, 0xc34a4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD6u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0c34aa  inc esi
    X86_AT(c, 0xc34aau);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c34ab  jmp 0xc33f6
    X86_AT(c, 0xc34abu);
    X86_POLL(c, 0xc33f6u); goto L_c33f6;
L_c34b0:
    X86_TICK(c, 11);
    // 0c34b0  push 0xb
    X86_AT(c, 0xc34b0u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c34b2  push 4
    X86_AT(c, 0xc34b2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c34b4  call 0xbc3ec
    X86_AT(c, 0xc34b4u);
    push32(c, 0xc34b9u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc34b9u);
    X86_TICK(c, 13);
    // 0c34b9  push 5
    X86_AT(c, 0xc34b9u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c34bb  push 0x28
    X86_AT(c, 0xc34bbu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c34bd  push 4
    X86_AT(c, 0xc34bdu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c34bf  call 0xbc174
    X86_AT(c, 0xc34bfu);
    push32(c, 0xc34c4u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc34c4u);
    X86_TICK(c, 13);
    // 0c34c4  push 2
    X86_AT(c, 0xc34c4u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c34c6  push esi
    X86_AT(c, 0xc34c6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c34c7  push 4
    X86_AT(c, 0xc34c7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c34c9  call 0xba404
    X86_AT(c, 0xc34c9u);
    push32(c, 0xc34ceu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc34ceu);
    X86_TICK(c, 13);
    // 0c34ce  push 0xd
    X86_AT(c, 0xc34ceu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c34d0  push 0x34
    X86_AT(c, 0xc34d0u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0c34d2  push 4
    X86_AT(c, 0xc34d2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c34d4  call 0xbc174
    X86_AT(c, 0xc34d4u);
    push32(c, 0xc34d9u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc34d9u);
    X86_TICK(c, 27);
    // 0c34d9  push 2
    X86_AT(c, 0xc34d9u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c34db  mov eax, edi
    X86_AT(c, 0xc34dbu);
    c.r[0] = c.r[7];
    // 0c34dd  lea edx, [eax + eax*2]
    X86_AT(c, 0xc34ddu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c34e0  shl edx, 5
    X86_AT(c, 0xc34e0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c34e3  add edx, eax
    X86_AT(c, 0xc34e3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c34e5  lea edx, [eax + edx*2]
    X86_AT(c, 0xc34e5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c34e8  push dword ptr [edx + 0xa4dd6]
    X86_AT(c, 0xc34e8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD6u))); push32(c, v); }
    // 0c34ee  push 4
    X86_AT(c, 0xc34eeu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c34f0  call 0xba404
    X86_AT(c, 0xc34f0u);
    push32(c, 0xc34f5u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc34f5u);
    X86_TICK(c, 9);
    // 0c34f5  add esp, 0x38
    X86_AT(c, 0xc34f5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0c34f8  cmp bl, 5
    X86_AT(c, 0xc34f8u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c34fb  jne 0xc3509
    X86_AT(c, 0xc34fbu);
    if (x86_cc(c, 5)) { goto L_c3509; }
    X86_TICK(c, 9);
    // 0c34fd  mov dword ptr [ebp - 4], 6
    X86_AT(c, 0xc34fdu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x6u);
    // 0c3504  jmp 0xc27a0
    X86_AT(c, 0xc3504u);
    X86_POLL(c, 0xc27a0u); goto L_c27a0;
L_c3509:
    X86_TICK(c, 7);
    // 0c3509  cmp bl, 1
    X86_AT(c, 0xc3509u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c350c  jne 0xc3518
    X86_AT(c, 0xc350cu);
    if (x86_cc(c, 5)) { goto L_c3518; }
L_c350e:
    X86_TICK(c, 9);
    // 0c350e  mov eax, 0xffffffff
    X86_AT(c, 0xc350eu);
    c.r[0] = 0xFFFFFFFFu;
    // 0c3513  jmp 0xc35c9
    X86_AT(c, 0xc3513u);
    goto L_c35c9;
L_c3518:
    X86_TICK(c, 7);
    // 0c3518  cmp bl, 6
    X86_AT(c, 0xc3518u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c351b  je 0xc3526
    X86_AT(c, 0xc351bu);
    if (x86_cc(c, 4)) { goto L_c3526; }
    X86_TICK(c, 7);
    // 0c351d  cmp bl, 4
    X86_AT(c, 0xc351du);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0c3520  jne 0xc27a0
    X86_AT(c, 0xc3520u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc27a0u); goto L_c27a0; }
L_c3526:
    X86_TICK(c, 26);
    // 0c3526  mov dword ptr [ebp - 4], 8
    X86_AT(c, 0xc3526u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x8u);
    // 0c352d  mov eax, edi
    X86_AT(c, 0xc352du);
    c.r[0] = c.r[7];
    // 0c352f  lea edx, [eax + eax*2]
    X86_AT(c, 0xc352fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3532  shl edx, 5
    X86_AT(c, 0xc3532u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c3535  add edx, eax
    X86_AT(c, 0xc3535u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c3537  lea edx, [eax + edx*2]
    X86_AT(c, 0xc3537u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c353a  mov eax, dword ptr [edx + 0xa4dd6]
    X86_AT(c, 0xc353au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD6u)));
    // 0c3540  mov dword ptr [edx + 0xa4dd6], eax
    X86_AT(c, 0xc3540u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD6u)), c.r[0]);
    // 0c3546  jmp 0xc27a0
    X86_AT(c, 0xc3546u);
    X86_POLL(c, 0xc27a0u); goto L_c27a0;
L_c354b:
    X86_TICK(c, 13);
    // 0c354b  push 3
    X86_AT(c, 0xc354bu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c354d  push 0xf
    X86_AT(c, 0xc354du);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c354f  push 4
    X86_AT(c, 0xc354fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3551  call 0xbc174
    X86_AT(c, 0xc3551u);
    push32(c, 0xc3556u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3556u);
    X86_TICK(c, 24);
    // 0c3556  mov eax, edi
    X86_AT(c, 0xc3556u);
    c.r[0] = c.r[7];
    // 0c3558  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3558u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c355b  shl edx, 5
    X86_AT(c, 0xc355bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c355e  add edx, eax
    X86_AT(c, 0xc355eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c3560  lea edx, [eax + edx*2]
    X86_AT(c, 0xc3560u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3563  lea eax, [edx*1 + 0xa4dac]
    X86_AT(c, 0xc3563u);
    c.r[0] = (uint32_t)(c.r[2] + 0xA4DACu);
    // 0c356a  push eax
    X86_AT(c, 0xc356au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c356b  push 4
    X86_AT(c, 0xc356bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c356d  call 0xbbfe0
    X86_AT(c, 0xc356du);
    push32(c, 0xc3572u); x86_call_known(c, 0xbbfe0u, f_000bbfe0); X86_RET(c, 0xc3572u);
    X86_TICK(c, 11);
    // 0c3572  push 0x36b4
    X86_AT(c, 0xc3572u);
    { uint32_t v = 0x36B4u; push32(c, v); }
    // 0c3577  push 4
    X86_AT(c, 0xc3577u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3579  call 0xba428
    X86_AT(c, 0xc3579u);
    push32(c, 0xc357eu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc357eu);
    X86_TICK(c, 9);
    // 0c357e  push 0x36f4
    X86_AT(c, 0xc357eu);
    { uint32_t v = 0x36F4u; push32(c, v); }
    // 0c3583  call 0xbc50c
    X86_AT(c, 0xc3583u);
    push32(c, 0xc3588u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc3588u);
    X86_TICK(c, 2);
    // 0c3588  add esp, 0x20
    X86_AT(c, 0xc3588u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_c358b:
    X86_TICK(c, 9);
    // 0c358b  push 4
    X86_AT(c, 0xc358bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c358d  call 0xb9930
    X86_AT(c, 0xc358du);
    push32(c, 0xc3592u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc3592u);
    X86_TICK(c, 11);
    // 0c3592  mov byte ptr [ebp - 0xd], al
    X86_AT(c, 0xc3592u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), g8(c, 0));
    // 0c3595  add esp, 4
    X86_AT(c, 0xc3595u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c3598  cmp al, 0x59
    X86_AT(c, 0xc3598u);
    (void)x86_sub(c, g8(c, 0), 0x59u, 0, 1);
    // 0c359a  je 0xc35a4
    X86_AT(c, 0xc359au);
    if (x86_cc(c, 4)) { goto L_c35a4; }
    X86_TICK(c, 7);
    // 0c359c  cmp al, 0x4e
    X86_AT(c, 0xc359cu);
    (void)x86_sub(c, g8(c, 0), 0x4Eu, 0, 1);
    // 0c359e  je 0xc35a4
    X86_AT(c, 0xc359eu);
    if (x86_cc(c, 4)) { goto L_c35a4; }
    X86_TICK(c, 7);
    // 0c35a0  dec al
    X86_AT(c, 0xc35a0u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0c35a2  jne 0xc358b
    X86_AT(c, 0xc35a2u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc358bu); goto L_c358b; }
L_c35a4:
    X86_TICK(c, 9);
    // 0c35a4  push 2
    X86_AT(c, 0xc35a4u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c35a6  call 0xbbb5c
    X86_AT(c, 0xc35a6u);
    push32(c, 0xc35abu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc35abu);
    X86_TICK(c, 9);
    // 0c35ab  push 4
    X86_AT(c, 0xc35abu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c35ad  call 0xbb6b0
    X86_AT(c, 0xc35adu);
    push32(c, 0xc35b2u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc35b2u);
    X86_TICK(c, 14);
    // 0c35b2  add esp, 8
    X86_AT(c, 0xc35b2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c35b5  cmp byte ptr [ebp - 0xd], 0x59
    X86_AT(c, 0xc35b5u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x59u, 0, 1);
    // 0c35b9  je 0xc35c7
    X86_AT(c, 0xc35b9u);
    if (x86_cc(c, 4)) { goto L_c35c7; }
    X86_TICK(c, 9);
    // 0c35bb  mov dword ptr [ebp - 4], 7
    X86_AT(c, 0xc35bbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x7u);
    // 0c35c2  jmp 0xc27a0
    X86_AT(c, 0xc35c2u);
    X86_POLL(c, 0xc27a0u); goto L_c27a0;
L_c35c7:
    X86_TICK(c, 2);
    // 0c35c7  sub eax, eax
    X86_AT(c, 0xc35c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_c35c9:
    X86_TICK(c, 28);
    // 0c35c9  pop edi
    X86_AT(c, 0xc35c9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c35ca  pop esi
    X86_AT(c, 0xc35cau);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c35cb  pop ebx
    X86_AT(c, 0xc35cbu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c35cc  leave 
    X86_AT(c, 0xc35ccu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c35cd  ret 
    X86_AT(c, 0xc35cdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc2734u, "ran off the end of a function");
}
void f_000c27a0(X86Cpu& c) {
L_c27a0:
    X86_TICK(c, 11);
    // 0c27a0  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xc27a0u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c27a3  cmp edx, 8
    X86_AT(c, 0xc27a3u);
    (void)x86_sub(c, c.r[2], 0x8u, 0, 4);
    // 0c27a6  ja 0xc27a0
    X86_AT(c, 0xc27a6u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xc27a0u); goto L_c27a0; }
    X86_TICK(c, 7);
    // 0c27a8  jmp dword ptr cs:[edx*4 + 0xc27b0]
    X86_AT(c, 0xc27a8u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC27B0u)));
      switch (t) {
      case 0xc27d4u: goto L_c27d4;
      case 0xc2891u: goto L_c2891;
      case 0xc2a5bu: goto L_c2a5b;
      case 0xc2c9bu: goto L_c2c9b;
      case 0xc2f97u: goto L_c2f97;
      case 0xc3134u: goto L_c3134;
      case 0xc328fu: goto L_c328f;
      case 0xc33eau: goto L_c33ea;
      case 0xc354bu: goto L_c354b;
      default: x86_jump(c, t); return; } }
L_c27d4:
    X86_TICK(c, 13);
    // 0c27d4  push 6
    X86_AT(c, 0xc27d4u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c27d6  push 0x28
    X86_AT(c, 0xc27d6u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c27d8  push 4
    X86_AT(c, 0xc27d8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c27da  call 0xbc174
    X86_AT(c, 0xc27dau);
    push32(c, 0xc27dfu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc27dfu);
    X86_TICK(c, 11);
    // 0c27df  push 0x339c
    X86_AT(c, 0xc27dfu);
    { uint32_t v = 0x339Cu; push32(c, v); }
    // 0c27e4  push 4
    X86_AT(c, 0xc27e4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c27e6  call 0xbbba4
    X86_AT(c, 0xc27e6u);
    push32(c, 0xc27ebu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc27ebu);
    X86_TICK(c, 13);
    // 0c27eb  push 6
    X86_AT(c, 0xc27ebu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c27ed  push 0x28
    X86_AT(c, 0xc27edu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c27ef  push 4
    X86_AT(c, 0xc27efu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c27f1  call 0xbc174
    X86_AT(c, 0xc27f1u);
    push32(c, 0xc27f6u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc27f6u);
    X86_TICK(c, 15);
    // 0c27f6  push 9
    X86_AT(c, 0xc27f6u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0c27f8  lea eax, [ebp - 0x18]
    X86_AT(c, 0xc27f8u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFE8u);
    // 0c27fb  push eax
    X86_AT(c, 0xc27fbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c27fc  push 4
    X86_AT(c, 0xc27fcu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c27fe  call 0xb9d30
    X86_AT(c, 0xc27feu);
    push32(c, 0xc2803u); x86_call_known(c, 0xb9d30u, f_000b9d30); X86_RET(c, 0xc2803u);
    X86_TICK(c, 9);
    // 0c2803  add esp, 0x2c
    X86_AT(c, 0xc2803u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0c2806  and eax, eax
    X86_AT(c, 0xc2806u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c2808  je 0xc350e
    X86_AT(c, 0xc2808u);
    if (x86_cc(c, 4)) { goto L_c350e; }
    X86_TICK(c, 2);
    // 0c280e  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xc280eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_c2815:
    X86_TICK(c, 16);
    // 0c2815  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xc2815u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0c2818  cmp byte ptr [ebp + eax*1 - 0x18], 0x20
    X86_AT(c, 0xc2818u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFFE8u))), 0x20u, 0, 1);
    // 0c281d  jne 0xc2824
    X86_AT(c, 0xc281du);
    if (x86_cc(c, 5)) { goto L_c2824; }
    X86_TICK(c, 13);
    // 0c281f  inc dword ptr [ebp - 8]
    X86_AT(c, 0xc281fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c2822  jmp 0xc2815
    X86_AT(c, 0xc2822u);
    X86_POLL(c, 0xc2815u); goto L_c2815;
L_c2824:
    X86_TICK(c, 2);
    // 0c2824  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xc2824u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_c282b:
    X86_TICK(c, 29);
    // 0c282b  lea eax, [edi + edi*2]
    X86_AT(c, 0xc282bu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c282e  lea edx, [eax*8]
    X86_AT(c, 0xc282eu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2835  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2835u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2838  add edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xc2838u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4); }
    // 0c283b  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xc283bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0c283e  mov cl, byte ptr [ebp + eax*1 - 0x18]
    X86_AT(c, 0xc283eu);
    s8(c, 1, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFFE8u))));
    // 0c2842  mov byte ptr [edx + 0xa4dac], cl
    X86_AT(c, 0xc2842u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DACu)), g8(c, 1));
    // 0c2848  and cl, cl
    X86_AT(c, 0xc2848u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & g8(c, 1), 1)); }
    // 0c284a  je 0xc2854
    X86_AT(c, 0xc284au);
    if (x86_cc(c, 4)) { goto L_c2854; }
    X86_TICK(c, 19);
    // 0c284c  inc dword ptr [ebp - 8]
    X86_AT(c, 0xc284cu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c284f  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xc284fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c2852  jmp 0xc282b
    X86_AT(c, 0xc2852u);
    X86_POLL(c, 0xc282bu); goto L_c282b;
L_c2854:
    X86_TICK(c, 9);
    // 0c2854  push 4
    X86_AT(c, 0xc2854u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2856  call 0xbb6b0
    X86_AT(c, 0xc2856u);
    push32(c, 0xc285bu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc285bu);
    X86_TICK(c, 13);
    // 0c285b  push 6
    X86_AT(c, 0xc285bu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c285d  push 0x28
    X86_AT(c, 0xc285du);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c285f  push 4
    X86_AT(c, 0xc285fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2861  call 0xbc174
    X86_AT(c, 0xc2861u);
    push32(c, 0xc2866u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2866u);
    X86_TICK(c, 19);
    // 0c2866  lea eax, [edi + edi*2]
    X86_AT(c, 0xc2866u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2869  lea edx, [eax*8]
    X86_AT(c, 0xc2869u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2870  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2870u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2873  lea eax, [edx*1 + 0xa4dac]
    X86_AT(c, 0xc2873u);
    c.r[0] = (uint32_t)(c.r[2] + 0xA4DACu);
    // 0c287a  push eax
    X86_AT(c, 0xc287au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c287b  push 4
    X86_AT(c, 0xc287bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c287d  call 0xbbfe0
    X86_AT(c, 0xc287du);
    push32(c, 0xc2882u); x86_call_known(c, 0xbbfe0u, f_000bbfe0); X86_RET(c, 0xc2882u);
    X86_TICK(c, 11);
    // 0c2882  mov dword ptr [ebp - 4], 1
    X86_AT(c, 0xc2882u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x1u);
    // 0c2889  add esp, 0x18
    X86_AT(c, 0xc2889u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0c288c  jmp 0xc27a0
    X86_AT(c, 0xc288cu);
    X86_POLL(c, 0xc27a0u); goto L_c27a0;
L_c2891:
    X86_TICK(c, 27);
    // 0c2891  push 0xa
    X86_AT(c, 0xc2891u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c2893  push 0xf
    X86_AT(c, 0xc2893u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c2895  push 0xb
    X86_AT(c, 0xc2895u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c2897  push 2
    X86_AT(c, 0xc2897u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c2899  push 0x19
    X86_AT(c, 0xc2899u);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0c289b  push 0x34
    X86_AT(c, 0xc289bu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0c289d  push 0xd6
    X86_AT(c, 0xc289du);
    { uint32_t v = 0xD6u; push32(c, v); }
    // 0c28a2  push 0x12c
    X86_AT(c, 0xc28a2u);
    { uint32_t v = 0x12Cu; push32(c, v); }
    // 0c28a7  push 0xd2
    X86_AT(c, 0xc28a7u);
    { uint32_t v = 0xD2u; push32(c, v); }
    // 0c28ac  push 5
    X86_AT(c, 0xc28acu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c28ae  call 0xbb5cc
    X86_AT(c, 0xc28aeu);
    push32(c, 0xc28b3u); x86_call_known(c, 0xbb5ccu, f_000bb5cc); X86_RET(c, 0xc28b3u);
    X86_TICK(c, 9);
    // 0c28b3  push 5
    X86_AT(c, 0xc28b3u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c28b5  call 0xbb6b0
    X86_AT(c, 0xc28b5u);
    push32(c, 0xc28bau); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc28bau);
    X86_TICK(c, 9);
    // 0c28ba  push 5
    X86_AT(c, 0xc28bau);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c28bc  call 0xbb710
    X86_AT(c, 0xc28bcu);
    push32(c, 0xc28c1u); x86_call_known(c, 0xbb710u, f_000bb710); X86_RET(c, 0xc28c1u);
    X86_TICK(c, 9);
    // 0c28c1  push 5
    X86_AT(c, 0xc28c1u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c28c3  call 0xbb6b0
    X86_AT(c, 0xc28c3u);
    push32(c, 0xc28c8u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc28c8u);
    X86_TICK(c, 13);
    // 0c28c8  push 0
    X86_AT(c, 0xc28c8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c28ca  push 4
    X86_AT(c, 0xc28cau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c28cc  push 5
    X86_AT(c, 0xc28ccu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c28ce  call 0xbc174
    X86_AT(c, 0xc28ceu);
    push32(c, 0xc28d3u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc28d3u);
    X86_TICK(c, 13);
    // 0c28d3  add esp, 0x40
    X86_AT(c, 0xc28d3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c28d6  push 0x33b4
    X86_AT(c, 0xc28d6u);
    { uint32_t v = 0x33B4u; push32(c, v); }
    // 0c28db  push 5
    X86_AT(c, 0xc28dbu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c28dd  call 0xba428
    X86_AT(c, 0xc28ddu);
    push32(c, 0xc28e2u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc28e2u);
    X86_TICK(c, 13);
    // 0c28e2  push 1
    X86_AT(c, 0xc28e2u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c28e4  push 6
    X86_AT(c, 0xc28e4u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c28e6  push 5
    X86_AT(c, 0xc28e6u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c28e8  call 0xbc174
    X86_AT(c, 0xc28e8u);
    push32(c, 0xc28edu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc28edu);
    X86_TICK(c, 11);
    // 0c28ed  push 0x33c8
    X86_AT(c, 0xc28edu);
    { uint32_t v = 0x33C8u; push32(c, v); }
    // 0c28f2  push 5
    X86_AT(c, 0xc28f2u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c28f4  call 0xba428
    X86_AT(c, 0xc28f4u);
    push32(c, 0xc28f9u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc28f9u);
    X86_TICK(c, 13);
    // 0c28f9  push 2
    X86_AT(c, 0xc28f9u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c28fb  push 6
    X86_AT(c, 0xc28fbu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c28fd  push 5
    X86_AT(c, 0xc28fdu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c28ff  call 0xbc174
    X86_AT(c, 0xc28ffu);
    push32(c, 0xc2904u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2904u);
    X86_TICK(c, 11);
    // 0c2904  push 0x33dc
    X86_AT(c, 0xc2904u);
    { uint32_t v = 0x33DCu; push32(c, v); }
    // 0c2909  push 5
    X86_AT(c, 0xc2909u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c290b  call 0xba428
    X86_AT(c, 0xc290bu);
    push32(c, 0xc2910u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2910u);
    X86_TICK(c, 9);
    // 0c2910  push 4
    X86_AT(c, 0xc2910u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2912  call 0xbb6b0
    X86_AT(c, 0xc2912u);
    push32(c, 0xc2917u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2917u);
    X86_TICK(c, 13);
    // 0c2917  push 7
    X86_AT(c, 0xc2917u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c2919  push 0x28
    X86_AT(c, 0xc2919u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c291b  push 4
    X86_AT(c, 0xc291bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c291d  call 0xbc174
    X86_AT(c, 0xc291du);
    push32(c, 0xc2922u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2922u);
    X86_TICK(c, 13);
    // 0c2922  add esp, 0x40
    X86_AT(c, 0xc2922u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c2925  push 0x33f4
    X86_AT(c, 0xc2925u);
    { uint32_t v = 0x33F4u; push32(c, v); }
    // 0c292a  push 4
    X86_AT(c, 0xc292au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c292c  call 0xbbba4
    X86_AT(c, 0xc292cu);
    push32(c, 0xc2931u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc2931u);
    X86_TICK(c, 2);
    // 0c2931  add esp, 8
    X86_AT(c, 0xc2931u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c2934:
    X86_TICK(c, 13);
    // 0c2934  push 7
    X86_AT(c, 0xc2934u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c2936  push 0x28
    X86_AT(c, 0xc2936u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c2938  push 4
    X86_AT(c, 0xc2938u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c293a  call 0xbc174
    X86_AT(c, 0xc293au);
    push32(c, 0xc293fu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc293fu);
    X86_TICK(c, 9);
    // 0c293f  push 4
    X86_AT(c, 0xc293fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2941  call 0xb90f0
    X86_AT(c, 0xc2941u);
    push32(c, 0xc2946u); x86_call_known(c, 0xb90f0u, f_000b90f0); X86_RET(c, 0xc2946u);
    X86_TICK(c, 12);
    // 0c2946  xchg ebx, eax
    X86_AT(c, 0xc2946u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c2947  add esp, 0x10
    X86_AT(c, 0xc2947u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c294a  cmp bl, 5
    X86_AT(c, 0xc294au);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c294d  je 0xc29a9
    X86_AT(c, 0xc294du);
    if (x86_cc(c, 4)) { goto L_c29a9; }
    X86_TICK(c, 7);
    // 0c294f  cmp bl, 6
    X86_AT(c, 0xc294fu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c2952  je 0xc29a9
    X86_AT(c, 0xc2952u);
    if (x86_cc(c, 4)) { goto L_c29a9; }
    X86_TICK(c, 7);
    // 0c2954  cmp bl, 1
    X86_AT(c, 0xc2954u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c2957  je 0xc29a9
    X86_AT(c, 0xc2957u);
    if (x86_cc(c, 4)) { goto L_c29a9; }
    X86_TICK(c, 17);
    // 0c2959  lea eax, [ebp - 0xd]
    X86_AT(c, 0xc2959u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF3u);
    // 0c295c  push eax
    X86_AT(c, 0xc295cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c295d  push ebx
    X86_AT(c, 0xc295du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c295e  push 3
    X86_AT(c, 0xc295eu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c2960  push 0xa804c
    X86_AT(c, 0xc2960u);
    { uint32_t v = 0xA804Cu; push32(c, v); }
    // 0c2965  call 0xba1b4
    X86_AT(c, 0xc2965u);
    push32(c, 0xc296au); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc296au);
    X86_TICK(c, 11);
    // 0c296a  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xc296au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0c296d  add esp, 0x10
    X86_AT(c, 0xc296du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c2970  and eax, eax
    X86_AT(c, 0xc2970u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c2972  je 0xc2934
    X86_AT(c, 0xc2972u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc2934u); goto L_c2934; }
    X86_TICK(c, 9);
    // 0c2974  push 4
    X86_AT(c, 0xc2974u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2976  call 0xbb6b0
    X86_AT(c, 0xc2976u);
    push32(c, 0xc297bu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc297bu);
    X86_TICK(c, 13);
    // 0c297b  push 7
    X86_AT(c, 0xc297bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c297d  push 0x28
    X86_AT(c, 0xc297du);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c297f  push 4
    X86_AT(c, 0xc297fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2981  call 0xbc174
    X86_AT(c, 0xc2981u);
    push32(c, 0xc2986u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2986u);
    X86_TICK(c, 14);
    // 0c2986  push dword ptr [ebp - 0x1c]
    X86_AT(c, 0xc2986u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))); push32(c, v); }
    // 0c2989  push 4
    X86_AT(c, 0xc2989u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c298b  call 0xbbba4
    X86_AT(c, 0xc298bu);
    push32(c, 0xc2990u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc2990u);
    X86_TICK(c, 14);
    // 0c2990  lea eax, [edi + edi*2]
    X86_AT(c, 0xc2990u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2993  lea edx, [eax*8]
    X86_AT(c, 0xc2993u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c299a  lea edx, [eax + edx*8]
    X86_AT(c, 0xc299au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c299d  mov al, byte ptr [ebp - 0xd]
    X86_AT(c, 0xc299du);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))));
    // 0c29a0  mov byte ptr [edx + 0xa4ddc], al
    X86_AT(c, 0xc29a0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDCu)), g8(c, 0));
    // 0c29a6  add esp, 0x18
    X86_AT(c, 0xc29a6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_c29a9:
    X86_TICK(c, 7);
    // 0c29a9  cmp bl, 5
    X86_AT(c, 0xc29a9u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c29ac  jne 0xc29f3
    X86_AT(c, 0xc29acu);
    if (x86_cc(c, 5)) { goto L_c29f3; }
    X86_TICK(c, 13);
    // 0c29ae  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xc29aeu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0c29b5  push 0xd
    X86_AT(c, 0xc29b5u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c29b7  push 5
    X86_AT(c, 0xc29b7u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c29b9  call 0xbba64
    X86_AT(c, 0xc29b9u);
    push32(c, 0xc29beu); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xc29beu);
    X86_TICK(c, 27);
    // 0c29be  lea eax, [ebp - 0xd]
    X86_AT(c, 0xc29beu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF3u);
    // 0c29c1  push eax
    X86_AT(c, 0xc29c1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c29c2  lea eax, [edi + edi*2]
    X86_AT(c, 0xc29c2u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c29c5  lea edx, [eax*8]
    X86_AT(c, 0xc29c5u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c29cc  lea edx, [eax + edx*8]
    X86_AT(c, 0xc29ccu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c29cf  mov al, byte ptr [edx + 0xa4ddc]
    X86_AT(c, 0xc29cfu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDCu))));
    // 0c29d5  push eax
    X86_AT(c, 0xc29d5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c29d6  push 3
    X86_AT(c, 0xc29d6u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c29d8  push 0xa804c
    X86_AT(c, 0xc29d8u);
    { uint32_t v = 0xA804Cu; push32(c, v); }
    // 0c29dd  call 0xba1b4
    X86_AT(c, 0xc29ddu);
    push32(c, 0xc29e2u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc29e2u);
    X86_TICK(c, 11);
    // 0c29e2  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xc29e2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0c29e5  push 4
    X86_AT(c, 0xc29e5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c29e7  call 0xbb6b0
    X86_AT(c, 0xc29e7u);
    push32(c, 0xc29ecu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc29ecu);
    X86_TICK(c, 9);
    // 0c29ec  push 7
    X86_AT(c, 0xc29ecu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c29ee  jmp 0xc2c02
    X86_AT(c, 0xc29eeu);
    goto L_c2c02;
L_c29f3:
    X86_TICK(c, 7);
    // 0c29f3  cmp bl, 6
    X86_AT(c, 0xc29f3u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c29f6  jne 0xc2a3d
    X86_AT(c, 0xc29f6u);
    if (x86_cc(c, 5)) { goto L_c2a3d; }
    X86_TICK(c, 13);
    // 0c29f8  mov dword ptr [ebp - 4], 2
    X86_AT(c, 0xc29f8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x2u);
    // 0c29ff  push 0xd
    X86_AT(c, 0xc29ffu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c2a01  push 5
    X86_AT(c, 0xc2a01u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2a03  call 0xbba64
    X86_AT(c, 0xc2a03u);
    push32(c, 0xc2a08u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xc2a08u);
    X86_TICK(c, 27);
    // 0c2a08  lea eax, [ebp - 0xd]
    X86_AT(c, 0xc2a08u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF3u);
    // 0c2a0b  push eax
    X86_AT(c, 0xc2a0bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2a0c  lea eax, [edi + edi*2]
    X86_AT(c, 0xc2a0cu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2a0f  lea edx, [eax*8]
    X86_AT(c, 0xc2a0fu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2a16  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2a16u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2a19  mov al, byte ptr [edx + 0xa4ddc]
    X86_AT(c, 0xc2a19u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDCu))));
    // 0c2a1f  push eax
    X86_AT(c, 0xc2a1fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2a20  push 3
    X86_AT(c, 0xc2a20u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c2a22  push 0xa804c
    X86_AT(c, 0xc2a22u);
    { uint32_t v = 0xA804Cu; push32(c, v); }
    // 0c2a27  call 0xba1b4
    X86_AT(c, 0xc2a27u);
    push32(c, 0xc2a2cu); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc2a2cu);
    X86_TICK(c, 11);
    // 0c2a2c  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xc2a2cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0c2a2f  push 4
    X86_AT(c, 0xc2a2fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2a31  call 0xbb6b0
    X86_AT(c, 0xc2a31u);
    push32(c, 0xc2a36u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2a36u);
    X86_TICK(c, 9);
    // 0c2a36  push 7
    X86_AT(c, 0xc2a36u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c2a38  jmp 0xc2c55
    X86_AT(c, 0xc2a38u);
    goto L_c2c55;
L_c2a3d:
    X86_TICK(c, 7);
    // 0c2a3d  cmp bl, 1
    X86_AT(c, 0xc2a3du);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c2a40  je 0xc2f2f
    X86_AT(c, 0xc2a40u);
    if (x86_cc(c, 4)) { goto L_c2f2f; }
    X86_TICK(c, 11);
    // 0c2a46  push 0xd
    X86_AT(c, 0xc2a46u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c2a48  push 5
    X86_AT(c, 0xc2a48u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2a4a  call 0xbba64
    X86_AT(c, 0xc2a4au);
    push32(c, 0xc2a4fu); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xc2a4fu);
    X86_TICK(c, 9);
    // 0c2a4f  mov dword ptr [ebp - 4], 2
    X86_AT(c, 0xc2a4fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x2u);
    // 0c2a56  jmp 0xc2f8f
    X86_AT(c, 0xc2a56u);
    goto L_c2f8f;
L_c2a5b:
    X86_TICK(c, 27);
    // 0c2a5b  push 0xa
    X86_AT(c, 0xc2a5bu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c2a5d  push 0xf
    X86_AT(c, 0xc2a5du);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c2a5f  push 0xb
    X86_AT(c, 0xc2a5fu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c2a61  push 5
    X86_AT(c, 0xc2a61u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2a63  push 0x19
    X86_AT(c, 0xc2a63u);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0c2a65  push 0x66
    X86_AT(c, 0xc2a65u);
    { uint32_t v = 0x66u; push32(c, v); }
    // 0c2a67  push 0xd6
    X86_AT(c, 0xc2a67u);
    { uint32_t v = 0xD6u; push32(c, v); }
    // 0c2a6c  push 0x12c
    X86_AT(c, 0xc2a6cu);
    { uint32_t v = 0x12Cu; push32(c, v); }
    // 0c2a71  push 0xc8
    X86_AT(c, 0xc2a71u);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0c2a76  push 5
    X86_AT(c, 0xc2a76u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2a78  call 0xbb5cc
    X86_AT(c, 0xc2a78u);
    push32(c, 0xc2a7du); x86_call_known(c, 0xbb5ccu, f_000bb5cc); X86_RET(c, 0xc2a7du);
    X86_TICK(c, 9);
    // 0c2a7d  push 5
    X86_AT(c, 0xc2a7du);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2a7f  call 0xbb6b0
    X86_AT(c, 0xc2a7fu);
    push32(c, 0xc2a84u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2a84u);
    X86_TICK(c, 9);
    // 0c2a84  push 5
    X86_AT(c, 0xc2a84u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2a86  call 0xbb710
    X86_AT(c, 0xc2a86u);
    push32(c, 0xc2a8bu); x86_call_known(c, 0xbb710u, f_000bb710); X86_RET(c, 0xc2a8bu);
    X86_TICK(c, 9);
    // 0c2a8b  push 5
    X86_AT(c, 0xc2a8bu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2a8d  call 0xbb6b0
    X86_AT(c, 0xc2a8du);
    push32(c, 0xc2a92u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2a92u);
    X86_TICK(c, 13);
    // 0c2a92  push 0
    X86_AT(c, 0xc2a92u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c2a94  push 4
    X86_AT(c, 0xc2a94u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2a96  push 5
    X86_AT(c, 0xc2a96u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2a98  call 0xbc174
    X86_AT(c, 0xc2a98u);
    push32(c, 0xc2a9du); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2a9du);
    X86_TICK(c, 13);
    // 0c2a9d  add esp, 0x40
    X86_AT(c, 0xc2a9du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c2aa0  push 0x3404
    X86_AT(c, 0xc2aa0u);
    { uint32_t v = 0x3404u; push32(c, v); }
    // 0c2aa5  push 5
    X86_AT(c, 0xc2aa5u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2aa7  call 0xba428
    X86_AT(c, 0xc2aa7u);
    push32(c, 0xc2aacu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2aacu);
    X86_TICK(c, 13);
    // 0c2aac  push 1
    X86_AT(c, 0xc2aacu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c2aae  push 6
    X86_AT(c, 0xc2aaeu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c2ab0  push 5
    X86_AT(c, 0xc2ab0u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2ab2  call 0xbc174
    X86_AT(c, 0xc2ab2u);
    push32(c, 0xc2ab7u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2ab7u);
    X86_TICK(c, 11);
    // 0c2ab7  push 0x341c
    X86_AT(c, 0xc2ab7u);
    { uint32_t v = 0x341Cu; push32(c, v); }
    // 0c2abc  push 5
    X86_AT(c, 0xc2abcu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2abe  call 0xba428
    X86_AT(c, 0xc2abeu);
    push32(c, 0xc2ac3u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2ac3u);
    X86_TICK(c, 13);
    // 0c2ac3  push 2
    X86_AT(c, 0xc2ac3u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c2ac5  push 6
    X86_AT(c, 0xc2ac5u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c2ac7  push 5
    X86_AT(c, 0xc2ac7u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2ac9  call 0xbc174
    X86_AT(c, 0xc2ac9u);
    push32(c, 0xc2aceu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2aceu);
    X86_TICK(c, 11);
    // 0c2ace  push 0x3434
    X86_AT(c, 0xc2aceu);
    { uint32_t v = 0x3434u; push32(c, v); }
    // 0c2ad3  push 5
    X86_AT(c, 0xc2ad3u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2ad5  call 0xba428
    X86_AT(c, 0xc2ad5u);
    push32(c, 0xc2adau); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2adau);
    X86_TICK(c, 13);
    // 0c2ada  push 3
    X86_AT(c, 0xc2adau);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c2adc  push 6
    X86_AT(c, 0xc2adcu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c2ade  push 5
    X86_AT(c, 0xc2adeu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2ae0  call 0xbc174
    X86_AT(c, 0xc2ae0u);
    push32(c, 0xc2ae5u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2ae5u);
    X86_TICK(c, 13);
    // 0c2ae5  add esp, 0x3c
    X86_AT(c, 0xc2ae5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c2ae8  push 0x3448
    X86_AT(c, 0xc2ae8u);
    { uint32_t v = 0x3448u; push32(c, v); }
    // 0c2aed  push 5
    X86_AT(c, 0xc2aedu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2aef  call 0xba428
    X86_AT(c, 0xc2aefu);
    push32(c, 0xc2af4u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2af4u);
    X86_TICK(c, 13);
    // 0c2af4  push 4
    X86_AT(c, 0xc2af4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2af6  push 6
    X86_AT(c, 0xc2af6u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c2af8  push 5
    X86_AT(c, 0xc2af8u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2afa  call 0xbc174
    X86_AT(c, 0xc2afau);
    push32(c, 0xc2affu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2affu);
    X86_TICK(c, 11);
    // 0c2aff  push 0x3464
    X86_AT(c, 0xc2affu);
    { uint32_t v = 0x3464u; push32(c, v); }
    // 0c2b04  push 5
    X86_AT(c, 0xc2b04u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2b06  call 0xba428
    X86_AT(c, 0xc2b06u);
    push32(c, 0xc2b0bu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2b0bu);
    X86_TICK(c, 13);
    // 0c2b0b  push 5
    X86_AT(c, 0xc2b0bu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2b0d  push 6
    X86_AT(c, 0xc2b0du);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c2b0f  push 5
    X86_AT(c, 0xc2b0fu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2b11  call 0xbc174
    X86_AT(c, 0xc2b11u);
    push32(c, 0xc2b16u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2b16u);
    X86_TICK(c, 13);
    // 0c2b16  add esp, 0x28
    X86_AT(c, 0xc2b16u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0c2b19  push 0x3480
    X86_AT(c, 0xc2b19u);
    { uint32_t v = 0x3480u; push32(c, v); }
    // 0c2b1e  push 5
    X86_AT(c, 0xc2b1eu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2b20  call 0xba428
    X86_AT(c, 0xc2b20u);
    push32(c, 0xc2b25u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2b25u);
    X86_TICK(c, 9);
    // 0c2b25  push 4
    X86_AT(c, 0xc2b25u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2b27  call 0xbb6b0
    X86_AT(c, 0xc2b27u);
    push32(c, 0xc2b2cu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2b2cu);
    X86_TICK(c, 13);
    // 0c2b2c  push 8
    X86_AT(c, 0xc2b2cu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0c2b2e  push 0x28
    X86_AT(c, 0xc2b2eu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c2b30  push 4
    X86_AT(c, 0xc2b30u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2b32  call 0xbc174
    X86_AT(c, 0xc2b32u);
    push32(c, 0xc2b37u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2b37u);
    X86_TICK(c, 11);
    // 0c2b37  push 0x349c
    X86_AT(c, 0xc2b37u);
    { uint32_t v = 0x349Cu; push32(c, v); }
    // 0c2b3c  push 4
    X86_AT(c, 0xc2b3cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2b3e  call 0xbbba4
    X86_AT(c, 0xc2b3eu);
    push32(c, 0xc2b43u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc2b43u);
    X86_TICK(c, 2);
    // 0c2b43  add esp, 0x20
    X86_AT(c, 0xc2b43u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_c2b46:
    X86_TICK(c, 13);
    // 0c2b46  push 8
    X86_AT(c, 0xc2b46u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0c2b48  push 0x28
    X86_AT(c, 0xc2b48u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c2b4a  push 4
    X86_AT(c, 0xc2b4au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2b4c  call 0xbc174
    X86_AT(c, 0xc2b4cu);
    push32(c, 0xc2b51u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2b51u);
    X86_TICK(c, 9);
    // 0c2b51  push 4
    X86_AT(c, 0xc2b51u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2b53  call 0xb90f0
    X86_AT(c, 0xc2b53u);
    push32(c, 0xc2b58u); x86_call_known(c, 0xb90f0u, f_000b90f0); X86_RET(c, 0xc2b58u);
    X86_TICK(c, 12);
    // 0c2b58  xchg ebx, eax
    X86_AT(c, 0xc2b58u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c2b59  add esp, 0x10
    X86_AT(c, 0xc2b59u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c2b5c  cmp bl, 5
    X86_AT(c, 0xc2b5cu);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c2b5f  je 0xc2bbd
    X86_AT(c, 0xc2b5fu);
    if (x86_cc(c, 4)) { goto L_c2bbd; }
    X86_TICK(c, 7);
    // 0c2b61  cmp bl, 6
    X86_AT(c, 0xc2b61u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c2b64  je 0xc2bbd
    X86_AT(c, 0xc2b64u);
    if (x86_cc(c, 4)) { goto L_c2bbd; }
    X86_TICK(c, 7);
    // 0c2b66  cmp bl, 1
    X86_AT(c, 0xc2b66u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c2b69  je 0xc2bbd
    X86_AT(c, 0xc2b69u);
    if (x86_cc(c, 4)) { goto L_c2bbd; }
    X86_TICK(c, 17);
    // 0c2b6b  lea eax, [ebp - 0xd]
    X86_AT(c, 0xc2b6bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF3u);
    // 0c2b6e  push eax
    X86_AT(c, 0xc2b6eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2b6f  push ebx
    X86_AT(c, 0xc2b6fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c2b70  push 5
    X86_AT(c, 0xc2b70u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2b72  push 0xa81d8
    X86_AT(c, 0xc2b72u);
    { uint32_t v = 0xA81D8u; push32(c, v); }
    // 0c2b77  call 0xba1b4
    X86_AT(c, 0xc2b77u);
    push32(c, 0xc2b7cu); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc2b7cu);
    X86_TICK(c, 11);
    // 0c2b7c  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xc2b7cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0c2b7f  push 4
    X86_AT(c, 0xc2b7fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2b81  call 0xbb6b0
    X86_AT(c, 0xc2b81u);
    push32(c, 0xc2b86u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2b86u);
    X86_TICK(c, 14);
    // 0c2b86  add esp, 0x14
    X86_AT(c, 0xc2b86u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0c2b89  cmp dword ptr [ebp - 0x1c], 0
    X86_AT(c, 0xc2b89u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))), 0x0u, 0, 4);
    // 0c2b8d  je 0xc2b46
    X86_AT(c, 0xc2b8du);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc2b46u); goto L_c2b46; }
    X86_TICK(c, 13);
    // 0c2b8f  push 8
    X86_AT(c, 0xc2b8fu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0c2b91  push 0x28
    X86_AT(c, 0xc2b91u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c2b93  push 4
    X86_AT(c, 0xc2b93u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2b95  call 0xbc174
    X86_AT(c, 0xc2b95u);
    push32(c, 0xc2b9au); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2b9au);
    X86_TICK(c, 14);
    // 0c2b9a  push dword ptr [ebp - 0x1c]
    X86_AT(c, 0xc2b9au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))); push32(c, v); }
    // 0c2b9d  push 4
    X86_AT(c, 0xc2b9du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2b9f  call 0xbbba4
    X86_AT(c, 0xc2b9fu);
    push32(c, 0xc2ba4u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc2ba4u);
    X86_TICK(c, 14);
    // 0c2ba4  lea eax, [edi + edi*2]
    X86_AT(c, 0xc2ba4u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2ba7  lea edx, [eax*8]
    X86_AT(c, 0xc2ba7u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2bae  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2baeu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2bb1  mov al, byte ptr [ebp - 0xd]
    X86_AT(c, 0xc2bb1u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))));
    // 0c2bb4  mov byte ptr [edx + 0xa4dda], al
    X86_AT(c, 0xc2bb4u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDAu)), g8(c, 0));
    // 0c2bba  add esp, 0x14
    X86_AT(c, 0xc2bbau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_c2bbd:
    X86_TICK(c, 7);
    // 0c2bbd  cmp bl, 5
    X86_AT(c, 0xc2bbdu);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c2bc0  jne 0xc2c10
    X86_AT(c, 0xc2bc0u);
    if (x86_cc(c, 5)) { goto L_c2c10; }
    X86_TICK(c, 13);
    // 0c2bc2  mov dword ptr [ebp - 4], 1
    X86_AT(c, 0xc2bc2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x1u);
    // 0c2bc9  push 0xd
    X86_AT(c, 0xc2bc9u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c2bcb  push 5
    X86_AT(c, 0xc2bcbu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2bcd  call 0xbba64
    X86_AT(c, 0xc2bcdu);
    push32(c, 0xc2bd2u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xc2bd2u);
    X86_TICK(c, 27);
    // 0c2bd2  lea eax, [ebp - 0xd]
    X86_AT(c, 0xc2bd2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF3u);
    // 0c2bd5  push eax
    X86_AT(c, 0xc2bd5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2bd6  lea eax, [edi + edi*2]
    X86_AT(c, 0xc2bd6u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2bd9  lea edx, [eax*8]
    X86_AT(c, 0xc2bd9u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2be0  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2be0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2be3  mov al, byte ptr [edx + 0xa4dda]
    X86_AT(c, 0xc2be3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDAu))));
    // 0c2be9  push eax
    X86_AT(c, 0xc2be9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2bea  push 5
    X86_AT(c, 0xc2beau);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2bec  push 0xa81d8
    X86_AT(c, 0xc2becu);
    { uint32_t v = 0xA81D8u; push32(c, v); }
    // 0c2bf1  call 0xba1b4
    X86_AT(c, 0xc2bf1u);
    push32(c, 0xc2bf6u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc2bf6u);
    X86_TICK(c, 11);
    // 0c2bf6  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xc2bf6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0c2bf9  push 4
    X86_AT(c, 0xc2bf9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2bfb  call 0xbb6b0
    X86_AT(c, 0xc2bfbu);
    push32(c, 0xc2c00u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2c00u);
    X86_TICK(c, 2);
    // 0c2c00  push 8
    X86_AT(c, 0xc2c00u);
    { uint32_t v = 0x8u; push32(c, v); }
L_c2c02:
    X86_TICK(c, 11);
    // 0c2c02  push 0x28
    X86_AT(c, 0xc2c02u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c2c04  push 4
    X86_AT(c, 0xc2c04u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2c06  call 0xbc174
    X86_AT(c, 0xc2c06u);
    push32(c, 0xc2c0bu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2c0bu);
    X86_TICK(c, 7);
    // 0c2c0b  jmp 0xc2e62
    X86_AT(c, 0xc2c0bu);
    goto L_c2e62;
L_c2c10:
    X86_TICK(c, 7);
    // 0c2c10  cmp bl, 6
    X86_AT(c, 0xc2c10u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c2c13  jne 0xc2c7d
    X86_AT(c, 0xc2c13u);
    if (x86_cc(c, 5)) { goto L_c2c7d; }
    X86_TICK(c, 13);
    // 0c2c15  mov dword ptr [ebp - 4], 3
    X86_AT(c, 0xc2c15u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x3u);
    // 0c2c1c  push 0xd
    X86_AT(c, 0xc2c1cu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c2c1e  push 5
    X86_AT(c, 0xc2c1eu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2c20  call 0xbba64
    X86_AT(c, 0xc2c20u);
    push32(c, 0xc2c25u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xc2c25u);
    X86_TICK(c, 27);
    // 0c2c25  lea eax, [ebp - 0xd]
    X86_AT(c, 0xc2c25u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF3u);
    // 0c2c28  push eax
    X86_AT(c, 0xc2c28u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2c29  lea eax, [edi + edi*2]
    X86_AT(c, 0xc2c29u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2c2c  lea edx, [eax*8]
    X86_AT(c, 0xc2c2cu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2c33  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2c33u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2c36  mov al, byte ptr [edx + 0xa4dda]
    X86_AT(c, 0xc2c36u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDAu))));
    // 0c2c3c  push eax
    X86_AT(c, 0xc2c3cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2c3d  push 5
    X86_AT(c, 0xc2c3du);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2c3f  push 0xa81d8
    X86_AT(c, 0xc2c3fu);
    { uint32_t v = 0xA81D8u; push32(c, v); }
    // 0c2c44  call 0xba1b4
    X86_AT(c, 0xc2c44u);
    push32(c, 0xc2c49u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc2c49u);
    X86_TICK(c, 11);
    // 0c2c49  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xc2c49u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0c2c4c  push 4
    X86_AT(c, 0xc2c4cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2c4e  call 0xbb6b0
    X86_AT(c, 0xc2c4eu);
    push32(c, 0xc2c53u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2c53u);
    X86_TICK(c, 2);
    // 0c2c53  push 8
    X86_AT(c, 0xc2c53u);
    { uint32_t v = 0x8u; push32(c, v); }
L_c2c55:
    X86_TICK(c, 11);
    // 0c2c55  push 0x28
    X86_AT(c, 0xc2c55u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c2c57  push 4
    X86_AT(c, 0xc2c57u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2c59  call 0xbc174
    X86_AT(c, 0xc2c59u);
    push32(c, 0xc2c5eu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2c5eu);
    X86_TICK(c, 14);
    // 0c2c5e  add esp, 0x28
    X86_AT(c, 0xc2c5eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0c2c61  cmp dword ptr [ebp - 0x1c], 0
    X86_AT(c, 0xc2c61u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))), 0x0u, 0, 4);
    // 0c2c65  je 0xc2e7a
    X86_AT(c, 0xc2c65u);
    if (x86_cc(c, 4)) { goto L_c2e7a; }
    X86_TICK(c, 14);
    // 0c2c6b  push dword ptr [ebp - 0x1c]
    X86_AT(c, 0xc2c6bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))); push32(c, v); }
    // 0c2c6e  push 4
    X86_AT(c, 0xc2c6eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2c70  call 0xbbba4
    X86_AT(c, 0xc2c70u);
    push32(c, 0xc2c75u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc2c75u);
    X86_TICK(c, 9);
    // 0c2c75  add esp, 8
    X86_AT(c, 0xc2c75u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c2c78  jmp 0xc2e7a
    X86_AT(c, 0xc2c78u);
    goto L_c2e7a;
L_c2c7d:
    X86_TICK(c, 7);
    // 0c2c7d  cmp bl, 1
    X86_AT(c, 0xc2c7du);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c2c80  je 0xc2f2f
    X86_AT(c, 0xc2c80u);
    if (x86_cc(c, 4)) { goto L_c2f2f; }
    X86_TICK(c, 11);
    // 0c2c86  push 0xd
    X86_AT(c, 0xc2c86u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c2c88  push 5
    X86_AT(c, 0xc2c88u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2c8a  call 0xbba64
    X86_AT(c, 0xc2c8au);
    push32(c, 0xc2c8fu); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xc2c8fu);
    X86_TICK(c, 9);
    // 0c2c8f  mov dword ptr [ebp - 4], 3
    X86_AT(c, 0xc2c8fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x3u);
    // 0c2c96  jmp 0xc2f8f
    X86_AT(c, 0xc2c96u);
    goto L_c2f8f;
L_c2c9b:
    X86_TICK(c, 27);
    // 0c2c9b  push 0xa
    X86_AT(c, 0xc2c9bu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c2c9d  push 0xf
    X86_AT(c, 0xc2c9du);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c2c9f  push 0xb
    X86_AT(c, 0xc2c9fu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c2ca1  push 6
    X86_AT(c, 0xc2ca1u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c2ca3  push 0x2f
    X86_AT(c, 0xc2ca3u);
    { uint32_t v = 0x2Fu; push32(c, v); }
    // 0c2ca5  push 0x76
    X86_AT(c, 0xc2ca5u);
    { uint32_t v = 0x76u; push32(c, v); }
    // 0c2ca7  push 0x178
    X86_AT(c, 0xc2ca7u);
    { uint32_t v = 0x178u; push32(c, v); }
    // 0c2cac  push 0x10c
    X86_AT(c, 0xc2cacu);
    { uint32_t v = 0x10Cu; push32(c, v); }
    // 0c2cb1  push 0x83
    X86_AT(c, 0xc2cb1u);
    { uint32_t v = 0x83u; push32(c, v); }
    // 0c2cb6  push 5
    X86_AT(c, 0xc2cb6u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2cb8  call 0xbb5cc
    X86_AT(c, 0xc2cb8u);
    push32(c, 0xc2cbdu); x86_call_known(c, 0xbb5ccu, f_000bb5cc); X86_RET(c, 0xc2cbdu);
    X86_TICK(c, 9);
    // 0c2cbd  push 5
    X86_AT(c, 0xc2cbdu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2cbf  call 0xbb6b0
    X86_AT(c, 0xc2cbfu);
    push32(c, 0xc2cc4u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2cc4u);
    X86_TICK(c, 9);
    // 0c2cc4  push 5
    X86_AT(c, 0xc2cc4u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2cc6  call 0xbb710
    X86_AT(c, 0xc2cc6u);
    push32(c, 0xc2ccbu); x86_call_known(c, 0xbb710u, f_000bb710); X86_RET(c, 0xc2ccbu);
    X86_TICK(c, 9);
    // 0c2ccb  push 5
    X86_AT(c, 0xc2ccbu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2ccd  call 0xbb6b0
    X86_AT(c, 0xc2ccdu);
    push32(c, 0xc2cd2u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2cd2u);
    X86_TICK(c, 13);
    // 0c2cd2  push 0
    X86_AT(c, 0xc2cd2u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c2cd4  push 2
    X86_AT(c, 0xc2cd4u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c2cd6  push 5
    X86_AT(c, 0xc2cd6u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2cd8  call 0xbc174
    X86_AT(c, 0xc2cd8u);
    push32(c, 0xc2cddu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2cddu);
    X86_TICK(c, 13);
    // 0c2cdd  add esp, 0x40
    X86_AT(c, 0xc2cddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c2ce0  push 0x34b0
    X86_AT(c, 0xc2ce0u);
    { uint32_t v = 0x34B0u; push32(c, v); }
    // 0c2ce5  push 5
    X86_AT(c, 0xc2ce5u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2ce7  call 0xba428
    X86_AT(c, 0xc2ce7u);
    push32(c, 0xc2cecu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2cecu);
    X86_TICK(c, 13);
    // 0c2cec  push 1
    X86_AT(c, 0xc2cecu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c2cee  push 1
    X86_AT(c, 0xc2ceeu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c2cf0  push 5
    X86_AT(c, 0xc2cf0u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2cf2  call 0xbc174
    X86_AT(c, 0xc2cf2u);
    push32(c, 0xc2cf7u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2cf7u);
    X86_TICK(c, 11);
    // 0c2cf7  push 0x34c8
    X86_AT(c, 0xc2cf7u);
    { uint32_t v = 0x34C8u; push32(c, v); }
    // 0c2cfc  push 5
    X86_AT(c, 0xc2cfcu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2cfe  call 0xba428
    X86_AT(c, 0xc2cfeu);
    push32(c, 0xc2d03u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2d03u);
    X86_TICK(c, 13);
    // 0c2d03  push 2
    X86_AT(c, 0xc2d03u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c2d05  push 1
    X86_AT(c, 0xc2d05u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c2d07  push 5
    X86_AT(c, 0xc2d07u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2d09  call 0xbc174
    X86_AT(c, 0xc2d09u);
    push32(c, 0xc2d0eu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2d0eu);
    X86_TICK(c, 11);
    // 0c2d0e  push 0x3524
    X86_AT(c, 0xc2d0eu);
    { uint32_t v = 0x3524u; push32(c, v); }
    // 0c2d13  push 5
    X86_AT(c, 0xc2d13u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2d15  call 0xba428
    X86_AT(c, 0xc2d15u);
    push32(c, 0xc2d1au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2d1au);
    X86_TICK(c, 13);
    // 0c2d1a  push 3
    X86_AT(c, 0xc2d1au);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c2d1c  push 1
    X86_AT(c, 0xc2d1cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c2d1e  push 5
    X86_AT(c, 0xc2d1eu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2d20  call 0xbc174
    X86_AT(c, 0xc2d20u);
    push32(c, 0xc2d25u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2d25u);
    X86_TICK(c, 13);
    // 0c2d25  add esp, 0x3c
    X86_AT(c, 0xc2d25u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c2d28  push 0x3580
    X86_AT(c, 0xc2d28u);
    { uint32_t v = 0x3580u; push32(c, v); }
    // 0c2d2d  push 5
    X86_AT(c, 0xc2d2du);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2d2f  call 0xba428
    X86_AT(c, 0xc2d2fu);
    push32(c, 0xc2d34u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2d34u);
    X86_TICK(c, 13);
    // 0c2d34  push 4
    X86_AT(c, 0xc2d34u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2d36  push 1
    X86_AT(c, 0xc2d36u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c2d38  push 5
    X86_AT(c, 0xc2d38u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2d3a  call 0xbc174
    X86_AT(c, 0xc2d3au);
    push32(c, 0xc2d3fu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2d3fu);
    X86_TICK(c, 11);
    // 0c2d3f  push 0x35cc
    X86_AT(c, 0xc2d3fu);
    { uint32_t v = 0x35CCu; push32(c, v); }
    // 0c2d44  push 5
    X86_AT(c, 0xc2d44u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2d46  call 0xba428
    X86_AT(c, 0xc2d46u);
    push32(c, 0xc2d4bu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2d4bu);
    X86_TICK(c, 13);
    // 0c2d4b  push 5
    X86_AT(c, 0xc2d4bu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2d4d  push 1
    X86_AT(c, 0xc2d4du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c2d4f  push 5
    X86_AT(c, 0xc2d4fu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2d51  call 0xbc174
    X86_AT(c, 0xc2d51u);
    push32(c, 0xc2d56u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2d56u);
    X86_TICK(c, 13);
    // 0c2d56  add esp, 0x28
    X86_AT(c, 0xc2d56u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0c2d59  push 0x3628
    X86_AT(c, 0xc2d59u);
    { uint32_t v = 0x3628u; push32(c, v); }
    // 0c2d5e  push 5
    X86_AT(c, 0xc2d5eu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2d60  call 0xba428
    X86_AT(c, 0xc2d60u);
    push32(c, 0xc2d65u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2d65u);
    X86_TICK(c, 13);
    // 0c2d65  push 6
    X86_AT(c, 0xc2d65u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c2d67  push 1
    X86_AT(c, 0xc2d67u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c2d69  push 5
    X86_AT(c, 0xc2d69u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2d6b  call 0xbc174
    X86_AT(c, 0xc2d6bu);
    push32(c, 0xc2d70u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2d70u);
    X86_TICK(c, 11);
    // 0c2d70  push 0x3684
    X86_AT(c, 0xc2d70u);
    { uint32_t v = 0x3684u; push32(c, v); }
    // 0c2d75  push 5
    X86_AT(c, 0xc2d75u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2d77  call 0xba428
    X86_AT(c, 0xc2d77u);
    push32(c, 0xc2d7cu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2d7cu);
    X86_TICK(c, 9);
    // 0c2d7c  push 4
    X86_AT(c, 0xc2d7cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2d7e  call 0xbb6b0
    X86_AT(c, 0xc2d7eu);
    push32(c, 0xc2d83u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2d83u);
    X86_TICK(c, 13);
    // 0c2d83  push 9
    X86_AT(c, 0xc2d83u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0c2d85  push 0x28
    X86_AT(c, 0xc2d85u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c2d87  push 4
    X86_AT(c, 0xc2d87u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2d89  call 0xbc174
    X86_AT(c, 0xc2d89u);
    push32(c, 0xc2d8eu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2d8eu);
    X86_TICK(c, 11);
    // 0c2d8e  push 0x369c
    X86_AT(c, 0xc2d8eu);
    { uint32_t v = 0x369Cu; push32(c, v); }
    // 0c2d93  push 4
    X86_AT(c, 0xc2d93u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2d95  call 0xbbba4
    X86_AT(c, 0xc2d95u);
    push32(c, 0xc2d9au); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc2d9au);
    X86_TICK(c, 2);
    // 0c2d9a  add esp, 0x34
    X86_AT(c, 0xc2d9au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
L_c2d9d:
    X86_TICK(c, 13);
    // 0c2d9d  push 9
    X86_AT(c, 0xc2d9du);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0c2d9f  push 0x28
    X86_AT(c, 0xc2d9fu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c2da1  push 4
    X86_AT(c, 0xc2da1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2da3  call 0xbc174
    X86_AT(c, 0xc2da3u);
    push32(c, 0xc2da8u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2da8u);
    X86_TICK(c, 9);
    // 0c2da8  push 4
    X86_AT(c, 0xc2da8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2daa  call 0xb90f0
    X86_AT(c, 0xc2daau);
    push32(c, 0xc2dafu); x86_call_known(c, 0xb90f0u, f_000b90f0); X86_RET(c, 0xc2dafu);
    X86_TICK(c, 12);
    // 0c2daf  xchg ebx, eax
    X86_AT(c, 0xc2dafu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c2db0  add esp, 0x10
    X86_AT(c, 0xc2db0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c2db3  cmp bl, 5
    X86_AT(c, 0xc2db3u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c2db6  je 0xc2e14
    X86_AT(c, 0xc2db6u);
    if (x86_cc(c, 4)) { goto L_c2e14; }
    X86_TICK(c, 7);
    // 0c2db8  cmp bl, 6
    X86_AT(c, 0xc2db8u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c2dbb  je 0xc2e14
    X86_AT(c, 0xc2dbbu);
    if (x86_cc(c, 4)) { goto L_c2e14; }
    X86_TICK(c, 7);
    // 0c2dbd  cmp bl, 1
    X86_AT(c, 0xc2dbdu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c2dc0  je 0xc2e14
    X86_AT(c, 0xc2dc0u);
    if (x86_cc(c, 4)) { goto L_c2e14; }
    X86_TICK(c, 17);
    // 0c2dc2  lea eax, [ebp - 0xd]
    X86_AT(c, 0xc2dc2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF3u);
    // 0c2dc5  push eax
    X86_AT(c, 0xc2dc5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2dc6  push ebx
    X86_AT(c, 0xc2dc6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c2dc7  push 0xb
    X86_AT(c, 0xc2dc7u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c2dc9  push 0xa846c
    X86_AT(c, 0xc2dc9u);
    { uint32_t v = 0xA846Cu; push32(c, v); }
    // 0c2dce  call 0xba1b4
    X86_AT(c, 0xc2dceu);
    push32(c, 0xc2dd3u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc2dd3u);
    X86_TICK(c, 11);
    // 0c2dd3  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xc2dd3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0c2dd6  push 4
    X86_AT(c, 0xc2dd6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2dd8  call 0xbb6b0
    X86_AT(c, 0xc2dd8u);
    push32(c, 0xc2dddu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2dddu);
    X86_TICK(c, 14);
    // 0c2ddd  add esp, 0x14
    X86_AT(c, 0xc2dddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0c2de0  cmp dword ptr [ebp - 0x1c], 0
    X86_AT(c, 0xc2de0u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))), 0x0u, 0, 4);
    // 0c2de4  je 0xc2d9d
    X86_AT(c, 0xc2de4u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc2d9du); goto L_c2d9d; }
    X86_TICK(c, 13);
    // 0c2de6  push 9
    X86_AT(c, 0xc2de6u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0c2de8  push 0x28
    X86_AT(c, 0xc2de8u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c2dea  push 4
    X86_AT(c, 0xc2deau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2dec  call 0xbc174
    X86_AT(c, 0xc2decu);
    push32(c, 0xc2df1u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2df1u);
    X86_TICK(c, 14);
    // 0c2df1  push dword ptr [ebp - 0x1c]
    X86_AT(c, 0xc2df1u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))); push32(c, v); }
    // 0c2df4  push 4
    X86_AT(c, 0xc2df4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2df6  call 0xbbba4
    X86_AT(c, 0xc2df6u);
    push32(c, 0xc2dfbu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc2dfbu);
    X86_TICK(c, 14);
    // 0c2dfb  lea eax, [edi + edi*2]
    X86_AT(c, 0xc2dfbu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2dfe  lea edx, [eax*8]
    X86_AT(c, 0xc2dfeu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2e05  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2e05u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2e08  mov al, byte ptr [ebp - 0xd]
    X86_AT(c, 0xc2e08u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))));
    // 0c2e0b  mov byte ptr [edx + 0xa4ddb], al
    X86_AT(c, 0xc2e0bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDBu)), g8(c, 0));
    // 0c2e11  add esp, 0x14
    X86_AT(c, 0xc2e11u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_c2e14:
    X86_TICK(c, 7);
    // 0c2e14  cmp bl, 5
    X86_AT(c, 0xc2e14u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c2e17  jne 0xc2e88
    X86_AT(c, 0xc2e17u);
    if (x86_cc(c, 5)) { goto L_c2e88; }
    X86_TICK(c, 13);
    // 0c2e19  mov dword ptr [ebp - 4], 2
    X86_AT(c, 0xc2e19u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x2u);
    // 0c2e20  push 0xd
    X86_AT(c, 0xc2e20u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c2e22  push 5
    X86_AT(c, 0xc2e22u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2e24  call 0xbba64
    X86_AT(c, 0xc2e24u);
    push32(c, 0xc2e29u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xc2e29u);
    X86_TICK(c, 27);
    // 0c2e29  lea eax, [ebp - 0xd]
    X86_AT(c, 0xc2e29u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF3u);
    // 0c2e2c  push eax
    X86_AT(c, 0xc2e2cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2e2d  lea eax, [edi + edi*2]
    X86_AT(c, 0xc2e2du);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2e30  lea edx, [eax*8]
    X86_AT(c, 0xc2e30u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2e37  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2e37u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2e3a  mov al, byte ptr [edx + 0xa4ddb]
    X86_AT(c, 0xc2e3au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDBu))));
    // 0c2e40  push eax
    X86_AT(c, 0xc2e40u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2e41  push 0xb
    X86_AT(c, 0xc2e41u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c2e43  push 0xa846c
    X86_AT(c, 0xc2e43u);
    { uint32_t v = 0xA846Cu; push32(c, v); }
    // 0c2e48  call 0xba1b4
    X86_AT(c, 0xc2e48u);
    push32(c, 0xc2e4du); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc2e4du);
    X86_TICK(c, 15);
    // 0c2e4d  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xc2e4du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0c2e50  push 9
    X86_AT(c, 0xc2e50u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0c2e52  push 0x28
    X86_AT(c, 0xc2e52u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c2e54  push 4
    X86_AT(c, 0xc2e54u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2e56  call 0xbc174
    X86_AT(c, 0xc2e56u);
    push32(c, 0xc2e5bu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2e5bu);
    X86_TICK(c, 9);
    // 0c2e5b  push 4
    X86_AT(c, 0xc2e5bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2e5d  call 0xbb6b0
    X86_AT(c, 0xc2e5du);
    push32(c, 0xc2e62u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2e62u);
L_c2e62:
    X86_TICK(c, 14);
    // 0c2e62  add esp, 0x28
    X86_AT(c, 0xc2e62u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0c2e65  cmp dword ptr [ebp - 0x1c], 0
    X86_AT(c, 0xc2e65u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))), 0x0u, 0, 4);
    // 0c2e69  je 0xc2e7a
    X86_AT(c, 0xc2e69u);
    if (x86_cc(c, 4)) { goto L_c2e7a; }
    X86_TICK(c, 14);
    // 0c2e6b  push dword ptr [ebp - 0x1c]
    X86_AT(c, 0xc2e6bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))); push32(c, v); }
    // 0c2e6e  push 4
    X86_AT(c, 0xc2e6eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2e70  call 0xbbba4
    X86_AT(c, 0xc2e70u);
    push32(c, 0xc2e75u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc2e75u);
    X86_TICK(c, 7);
    // 0c2e75  jmp 0xc2f8f
    X86_AT(c, 0xc2e75u);
    goto L_c2f8f;
L_c2e7a:
    X86_TICK(c, 11);
    // 0c2e7a  push 0x20
    X86_AT(c, 0xc2e7au);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0c2e7c  push 4
    X86_AT(c, 0xc2e7cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2e7e  call 0xbbd1c
    X86_AT(c, 0xc2e7eu);
    push32(c, 0xc2e83u); x86_call_known(c, 0xbbd1cu, f_000bbd1c); X86_RET(c, 0xc2e83u);
    X86_TICK(c, 7);
    // 0c2e83  jmp 0xc2f8f
    X86_AT(c, 0xc2e83u);
    goto L_c2f8f;
L_c2e88:
    X86_TICK(c, 7);
    // 0c2e88  cmp bl, 6
    X86_AT(c, 0xc2e88u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c2e8b  jne 0xc2f2a
    X86_AT(c, 0xc2e8bu);
    if (x86_cc(c, 5)) { goto L_c2f2a; }
    X86_TICK(c, 13);
    // 0c2e91  mov dword ptr [ebp - 4], 4
    X86_AT(c, 0xc2e91u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x4u);
    // 0c2e98  push 0xd
    X86_AT(c, 0xc2e98u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c2e9a  push 5
    X86_AT(c, 0xc2e9au);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2e9c  call 0xbba64
    X86_AT(c, 0xc2e9cu);
    push32(c, 0xc2ea1u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xc2ea1u);
    X86_TICK(c, 27);
    // 0c2ea1  lea eax, [ebp - 0xd]
    X86_AT(c, 0xc2ea1u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF3u);
    // 0c2ea4  push eax
    X86_AT(c, 0xc2ea4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2ea5  lea eax, [edi + edi*2]
    X86_AT(c, 0xc2ea5u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2ea8  lea edx, [eax*8]
    X86_AT(c, 0xc2ea8u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2eaf  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2eafu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2eb2  mov al, byte ptr [edx + 0xa4ddb]
    X86_AT(c, 0xc2eb2u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDBu))));
    // 0c2eb8  push eax
    X86_AT(c, 0xc2eb8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2eb9  push 0xb
    X86_AT(c, 0xc2eb9u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c2ebb  push 0xa846c
    X86_AT(c, 0xc2ebbu);
    { uint32_t v = 0xA846Cu; push32(c, v); }
    // 0c2ec0  call 0xba1b4
    X86_AT(c, 0xc2ec0u);
    push32(c, 0xc2ec5u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc2ec5u);
    X86_TICK(c, 15);
    // 0c2ec5  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xc2ec5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0c2ec8  push 9
    X86_AT(c, 0xc2ec8u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0c2eca  push 0x28
    X86_AT(c, 0xc2ecau);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c2ecc  push 4
    X86_AT(c, 0xc2eccu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2ece  call 0xbc174
    X86_AT(c, 0xc2eceu);
    push32(c, 0xc2ed3u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2ed3u);
    X86_TICK(c, 9);
    // 0c2ed3  push 4
    X86_AT(c, 0xc2ed3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2ed5  call 0xbb6b0
    X86_AT(c, 0xc2ed5u);
    push32(c, 0xc2edau); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2edau);
    X86_TICK(c, 14);
    // 0c2eda  add esp, 0x28
    X86_AT(c, 0xc2edau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0c2edd  cmp dword ptr [ebp - 0x1c], 0
    X86_AT(c, 0xc2eddu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))), 0x0u, 0, 4);
    // 0c2ee1  je 0xc2ef0
    X86_AT(c, 0xc2ee1u);
    if (x86_cc(c, 4)) { goto L_c2ef0; }
    X86_TICK(c, 14);
    // 0c2ee3  push dword ptr [ebp - 0x1c]
    X86_AT(c, 0xc2ee3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))); push32(c, v); }
    // 0c2ee6  push 4
    X86_AT(c, 0xc2ee6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2ee8  call 0xbbba4
    X86_AT(c, 0xc2ee8u);
    push32(c, 0xc2eedu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc2eedu);
    X86_TICK(c, 2);
    // 0c2eed  add esp, 8
    X86_AT(c, 0xc2eedu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c2ef0:
    X86_TICK(c, 11);
    // 0c2ef0  push 0x20
    X86_AT(c, 0xc2ef0u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0c2ef2  push 4
    X86_AT(c, 0xc2ef2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2ef4  call 0xbbd1c
    X86_AT(c, 0xc2ef4u);
    push32(c, 0xc2ef9u); x86_call_known(c, 0xbbd1cu, f_000bbd1c); X86_RET(c, 0xc2ef9u);
    X86_TICK(c, 25);
    // 0c2ef9  mov esi, 0x1e
    X86_AT(c, 0xc2ef9u);
    c.r[6] = 0x1Eu;
    // 0c2efe  lea eax, [edi + edi*2]
    X86_AT(c, 0xc2efeu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2f01  lea edx, [eax*8]
    X86_AT(c, 0xc2f01u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2f08  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2f08u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2f0b  mov eax, 5
    X86_AT(c, 0xc2f0bu);
    c.r[0] = 0x5u;
    // 0c2f10  mov dword ptr [edx + 0xa4dd6], eax
    X86_AT(c, 0xc2f10u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD6u)), c.r[0]);
    // 0c2f16  mov dword ptr [edx + 0xa4dd2], eax
    X86_AT(c, 0xc2f16u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD2u)), c.r[0]);
    // 0c2f1c  mov dword ptr [edx + 0xa4dce], eax
    X86_AT(c, 0xc2f1cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCEu)), c.r[0]);
    // 0c2f22  mov dword ptr [edx + 0xa4dca], eax
    X86_AT(c, 0xc2f22u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCAu)), c.r[0]);
    // 0c2f28  jmp 0xc2f8f
    X86_AT(c, 0xc2f28u);
    goto L_c2f8f;
L_c2f2a:
    X86_TICK(c, 7);
    // 0c2f2a  cmp bl, 1
    X86_AT(c, 0xc2f2au);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c2f2d  jne 0xc2f45
    X86_AT(c, 0xc2f2du);
    if (x86_cc(c, 5)) { goto L_c2f45; }
L_c2f2f:
    X86_TICK(c, 11);
    // 0c2f2f  push 0xd
    X86_AT(c, 0xc2f2fu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c2f31  push 5
    X86_AT(c, 0xc2f31u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2f33  call 0xbba64
    X86_AT(c, 0xc2f33u);
    push32(c, 0xc2f38u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xc2f38u);
    X86_TICK(c, 11);
    // 0c2f38  mov eax, 0xffffffff
    X86_AT(c, 0xc2f38u);
    c.r[0] = 0xFFFFFFFFu;
    // 0c2f3d  add esp, 8
    X86_AT(c, 0xc2f3du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c2f40  jmp 0xc35c9
    X86_AT(c, 0xc2f40u);
    goto L_c35c9;
L_c2f45:
    X86_TICK(c, 11);
    // 0c2f45  push 0xd
    X86_AT(c, 0xc2f45u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c2f47  push 5
    X86_AT(c, 0xc2f47u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2f49  call 0xbba64
    X86_AT(c, 0xc2f49u);
    push32(c, 0xc2f4eu); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xc2f4eu);
    X86_TICK(c, 18);
    // 0c2f4e  mov dword ptr [ebp - 4], 4
    X86_AT(c, 0xc2f4eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x4u);
    // 0c2f55  mov esi, 0x1e
    X86_AT(c, 0xc2f55u);
    c.r[6] = 0x1Eu;
    // 0c2f5a  lea eax, [edi + edi*2]
    X86_AT(c, 0xc2f5au);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2f5d  lea edx, [eax*8]
    X86_AT(c, 0xc2f5du);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2f64  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2f64u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2f67  mov dword ptr [edx + 0xa4dd6], 5
    X86_AT(c, 0xc2f67u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD6u)), 0x5u);
    // 0c2f71  mov dword ptr [edx + 0xa4dd2], 5
    X86_AT(c, 0xc2f71u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD2u)), 0x5u);
    // 0c2f7b  mov dword ptr [edx + 0xa4dce], 5
    X86_AT(c, 0xc2f7bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCEu)), 0x5u);
    // 0c2f85  mov dword ptr [edx + 0xa4dca], 5
    X86_AT(c, 0xc2f85u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCAu)), 0x5u);
L_c2f8f:
    X86_TICK(c, 9);
    // 0c2f8f  add esp, 8
    X86_AT(c, 0xc2f8fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c2f92  jmp 0xc27a0
    X86_AT(c, 0xc2f92u);
    X86_POLL(c, 0xc27a0u); goto L_c27a0;
L_c2f97:
    X86_TICK(c, 18);
    // 0c2f97  lea eax, [edi + edi*2]
    X86_AT(c, 0xc2f97u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2f9a  lea edx, [eax*8]
    X86_AT(c, 0xc2f9au);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2fa1  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2fa1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2fa4  cmp byte ptr [edx + 0xa4ddc], 0
    X86_AT(c, 0xc2fa4u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDCu))), 0x0u, 0, 1);
    // 0c2fab  jne 0xc2fb9
    X86_AT(c, 0xc2fabu);
    if (x86_cc(c, 5)) { goto L_c2fb9; }
    X86_TICK(c, 9);
    // 0c2fad  mov dword ptr [ebp - 4], 1
    X86_AT(c, 0xc2fadu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x1u);
    // 0c2fb4  jmp 0xc27a0
    X86_AT(c, 0xc2fb4u);
    X86_POLL(c, 0xc27a0u); goto L_c27a0;
L_c2fb9:
    X86_TICK(c, 18);
    // 0c2fb9  lea eax, [edi + edi*2]
    X86_AT(c, 0xc2fb9u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2fbc  lea edx, [eax*8]
    X86_AT(c, 0xc2fbcu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2fc3  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2fc3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2fc6  cmp byte ptr [edx + 0xa4dda], 0
    X86_AT(c, 0xc2fc6u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDAu))), 0x0u, 0, 1);
    // 0c2fcd  jne 0xc2fdb
    X86_AT(c, 0xc2fcdu);
    if (x86_cc(c, 5)) { goto L_c2fdb; }
    X86_TICK(c, 9);
    // 0c2fcf  mov dword ptr [ebp - 4], 2
    X86_AT(c, 0xc2fcfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x2u);
    // 0c2fd6  jmp 0xc27a0
    X86_AT(c, 0xc2fd6u);
    X86_POLL(c, 0xc27a0u); goto L_c27a0;
L_c2fdb:
    X86_TICK(c, 23);
    // 0c2fdb  mov eax, edi
    X86_AT(c, 0xc2fdbu);
    c.r[0] = c.r[7];
    // 0c2fdd  lea edx, [eax + eax*2]
    X86_AT(c, 0xc2fddu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c2fe0  shl edx, 5
    X86_AT(c, 0xc2fe0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c2fe3  add edx, eax
    X86_AT(c, 0xc2fe3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c2fe5  lea edx, [eax + edx*2]
    X86_AT(c, 0xc2fe5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c2fe8  cmp byte ptr [edx + 0xa4ddb], 0
    X86_AT(c, 0xc2fe8u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDBu))), 0x0u, 0, 1);
    // 0c2fef  je 0xc3108
    X86_AT(c, 0xc2fefu);
    if (x86_cc(c, 4)) { goto L_c3108; }
    X86_TICK(c, 11);
    // 0c2ff5  push 0xe
    X86_AT(c, 0xc2ff5u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c2ff7  push 4
    X86_AT(c, 0xc2ff7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2ff9  call 0xbc3ec
    X86_AT(c, 0xc2ff9u);
    push32(c, 0xc2ffeu); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc2ffeu);
    X86_TICK(c, 2);
    // 0c2ffe  add esp, 8
    X86_AT(c, 0xc2ffeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c3001:
    X86_TICK(c, 13);
    // 0c3001  push 5
    X86_AT(c, 0xc3001u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c3003  push 0x28
    X86_AT(c, 0xc3003u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c3005  push 4
    X86_AT(c, 0xc3005u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3007  call 0xbc174
    X86_AT(c, 0xc3007u);
    push32(c, 0xc300cu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc300cu);
    X86_TICK(c, 13);
    // 0c300c  push 2
    X86_AT(c, 0xc300cu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c300e  push esi
    X86_AT(c, 0xc300eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c300f  push 4
    X86_AT(c, 0xc300fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3011  call 0xba404
    X86_AT(c, 0xc3011u);
    push32(c, 0xc3016u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc3016u);
    X86_TICK(c, 13);
    // 0c3016  push 0xa
    X86_AT(c, 0xc3016u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c3018  push 0x34
    X86_AT(c, 0xc3018u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0c301a  push 4
    X86_AT(c, 0xc301au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c301c  call 0xbc174
    X86_AT(c, 0xc301cu);
    push32(c, 0xc3021u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3021u);
    X86_TICK(c, 29);
    // 0c3021  push 2
    X86_AT(c, 0xc3021u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c3023  mov eax, edi
    X86_AT(c, 0xc3023u);
    c.r[0] = c.r[7];
    // 0c3025  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3025u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3028  shl edx, 5
    X86_AT(c, 0xc3028u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c302b  add edx, eax
    X86_AT(c, 0xc302bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c302d  lea edx, [eax + edx*2]
    X86_AT(c, 0xc302du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3030  push dword ptr [edx + 0xa4dca]
    X86_AT(c, 0xc3030u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCAu))); push32(c, v); }
    // 0c3036  push 4
    X86_AT(c, 0xc3036u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3038  mov dword ptr [ebp - 0x20], edx
    X86_AT(c, 0xc3038u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[2]);
    // 0c303b  call 0xba404
    X86_AT(c, 0xc303bu);
    push32(c, 0xc3040u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc3040u);
    X86_TICK(c, 9);
    // 0c3040  push 4
    X86_AT(c, 0xc3040u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3042  call 0xb9930
    X86_AT(c, 0xc3042u);
    push32(c, 0xc3047u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc3047u);
    X86_TICK(c, 12);
    // 0c3047  xchg ebx, eax
    X86_AT(c, 0xc3047u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c3048  add esp, 0x34
    X86_AT(c, 0xc3048u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0c304b  cmp bl, 5
    X86_AT(c, 0xc304bu);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c304e  je 0xc30bb
    X86_AT(c, 0xc304eu);
    if (x86_cc(c, 4)) { goto L_c30bb; }
    X86_TICK(c, 7);
    // 0c3054  cmp bl, 6
    X86_AT(c, 0xc3054u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c3057  je 0xc30bb
    X86_AT(c, 0xc3057u);
    if (x86_cc(c, 4)) { goto L_c30bb; }
    X86_TICK(c, 7);
    // 0c3059  cmp bl, 4
    X86_AT(c, 0xc3059u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0c305c  je 0xc30bb
    X86_AT(c, 0xc305cu);
    if (x86_cc(c, 4)) { goto L_c30bb; }
    X86_TICK(c, 7);
    // 0c305e  cmp bl, 1
    X86_AT(c, 0xc305eu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c3061  je 0xc30bb
    X86_AT(c, 0xc3061u);
    if (x86_cc(c, 4)) { goto L_c30bb; }
    X86_TICK(c, 7);
    // 0c3063  cmp bl, 7
    X86_AT(c, 0xc3063u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0c3066  jne 0xc3081
    X86_AT(c, 0xc3066u);
    if (x86_cc(c, 5)) { goto L_c3081; }
    X86_TICK(c, 15);
    // 0c3068  mov eax, dword ptr [ebp - 0x20]
    X86_AT(c, 0xc3068u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)));
    // 0c306b  mov edx, dword ptr [eax + 0xa4dca]
    X86_AT(c, 0xc306bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4DCAu)));
    // 0c3071  cmp edx, 0x19
    X86_AT(c, 0xc3071u);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0c3074  je 0xc3001
    X86_AT(c, 0xc3074u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc3001u); goto L_c3001; }
    X86_TICK(c, 7);
    // 0c3076  and esi, esi
    X86_AT(c, 0xc3076u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0c3078  je 0xc3001
    X86_AT(c, 0xc3078u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc3001u); goto L_c3001; }
    X86_TICK(c, 8);
    // 0c307a  inc dword ptr [eax + 0xa4dca]
    X86_AT(c, 0xc307au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xA4DCAu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c3080  dec esi
    X86_AT(c, 0xc3080u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_c3081:
    X86_TICK(c, 7);
    // 0c3081  cmp bl, 3
    X86_AT(c, 0xc3081u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0c3084  jne 0xc3001
    X86_AT(c, 0xc3084u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc3001u); goto L_c3001; }
    X86_TICK(c, 22);
    // 0c308a  mov eax, edi
    X86_AT(c, 0xc308au);
    c.r[0] = c.r[7];
    // 0c308c  lea edx, [eax + eax*2]
    X86_AT(c, 0xc308cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c308f  shl edx, 5
    X86_AT(c, 0xc308fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c3092  add edx, eax
    X86_AT(c, 0xc3092u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c3094  lea edx, [eax + edx*2]
    X86_AT(c, 0xc3094u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3097  mov eax, dword ptr [edx + 0xa4dca]
    X86_AT(c, 0xc3097u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCAu)));
    // 0c309d  cmp eax, 5
    X86_AT(c, 0xc309du);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0c30a0  je 0xc3001
    X86_AT(c, 0xc30a0u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc3001u); goto L_c3001; }
    X86_TICK(c, 7);
    // 0c30a6  cmp esi, 0x1e
    X86_AT(c, 0xc30a6u);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0c30a9  je 0xc3001
    X86_AT(c, 0xc30a9u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc3001u); goto L_c3001; }
    X86_TICK(c, 15);
    // 0c30af  dec dword ptr [edx + 0xa4dca]
    X86_AT(c, 0xc30afu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCAu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0c30b5  inc esi
    X86_AT(c, 0xc30b5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c30b6  jmp 0xc3001
    X86_AT(c, 0xc30b6u);
    X86_POLL(c, 0xc3001u); goto L_c3001;
L_c30bb:
    X86_TICK(c, 11);
    // 0c30bb  push 0xb
    X86_AT(c, 0xc30bbu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c30bd  push 4
    X86_AT(c, 0xc30bdu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c30bf  call 0xbc3ec
    X86_AT(c, 0xc30bfu);
    push32(c, 0xc30c4u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc30c4u);
    X86_TICK(c, 13);
    // 0c30c4  push 5
    X86_AT(c, 0xc30c4u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c30c6  push 0x28
    X86_AT(c, 0xc30c6u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c30c8  push 4
    X86_AT(c, 0xc30c8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c30ca  call 0xbc174
    X86_AT(c, 0xc30cau);
    push32(c, 0xc30cfu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc30cfu);
    X86_TICK(c, 13);
    // 0c30cf  push 2
    X86_AT(c, 0xc30cfu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c30d1  push esi
    X86_AT(c, 0xc30d1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c30d2  push 4
    X86_AT(c, 0xc30d2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c30d4  call 0xba404
    X86_AT(c, 0xc30d4u);
    push32(c, 0xc30d9u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc30d9u);
    X86_TICK(c, 13);
    // 0c30d9  push 0xa
    X86_AT(c, 0xc30d9u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c30db  push 0x34
    X86_AT(c, 0xc30dbu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0c30dd  push 4
    X86_AT(c, 0xc30ddu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c30df  call 0xbc174
    X86_AT(c, 0xc30dfu);
    push32(c, 0xc30e4u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc30e4u);
    X86_TICK(c, 27);
    // 0c30e4  push 2
    X86_AT(c, 0xc30e4u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c30e6  mov eax, edi
    X86_AT(c, 0xc30e6u);
    c.r[0] = c.r[7];
    // 0c30e8  lea edx, [eax + eax*2]
    X86_AT(c, 0xc30e8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c30eb  shl edx, 5
    X86_AT(c, 0xc30ebu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c30ee  add edx, eax
    X86_AT(c, 0xc30eeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c30f0  lea edx, [eax + edx*2]
    X86_AT(c, 0xc30f0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c30f3  push dword ptr [edx + 0xa4dca]
    X86_AT(c, 0xc30f3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCAu))); push32(c, v); }
    // 0c30f9  push 4
    X86_AT(c, 0xc30f9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c30fb  call 0xba404
    X86_AT(c, 0xc30fbu);
    push32(c, 0xc3100u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc3100u);
    X86_TICK(c, 9);
    // 0c3100  add esp, 0x38
    X86_AT(c, 0xc3100u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0c3103  cmp bl, 5
    X86_AT(c, 0xc3103u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c3106  jne 0xc3114
    X86_AT(c, 0xc3106u);
    if (x86_cc(c, 5)) { goto L_c3114; }
L_c3108:
    X86_TICK(c, 9);
    // 0c3108  mov dword ptr [ebp - 4], 3
    X86_AT(c, 0xc3108u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x3u);
    // 0c310f  jmp 0xc27a0
    X86_AT(c, 0xc310fu);
    X86_POLL(c, 0xc27a0u); goto L_c27a0;
L_c3114:
    X86_TICK(c, 7);
    // 0c3114  cmp bl, 1
    X86_AT(c, 0xc3114u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c3117  je 0xc350e
    X86_AT(c, 0xc3117u);
    if (x86_cc(c, 4)) { goto L_c350e; }
    X86_TICK(c, 7);
    // 0c311d  cmp bl, 6
    X86_AT(c, 0xc311du);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c3120  je 0xc33a2
    X86_AT(c, 0xc3120u);
    if (x86_cc(c, 4)) { goto L_c33a2; }
    X86_TICK(c, 7);
    // 0c3126  cmp bl, 4
    X86_AT(c, 0xc3126u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0c3129  jne 0xc27a0
    X86_AT(c, 0xc3129u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc27a0u); goto L_c27a0; }
    X86_TICK(c, 7);
    // 0c312f  jmp 0xc33a2
    X86_AT(c, 0xc312fu);
    goto L_c33a2;
L_c3134:
    X86_TICK(c, 11);
    // 0c3134  push 0xe
    X86_AT(c, 0xc3134u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c3136  push 4
    X86_AT(c, 0xc3136u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3138  call 0xbc3ec
    X86_AT(c, 0xc3138u);
    push32(c, 0xc313du); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc313du);
    X86_TICK(c, 2);
    // 0c313d  add esp, 8
    X86_AT(c, 0xc313du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c3140:
    X86_TICK(c, 13);
    // 0c3140  push 5
    X86_AT(c, 0xc3140u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c3142  push 0x28
    X86_AT(c, 0xc3142u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c3144  push 4
    X86_AT(c, 0xc3144u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3146  call 0xbc174
    X86_AT(c, 0xc3146u);
    push32(c, 0xc314bu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc314bu);
    X86_TICK(c, 13);
    // 0c314b  push 2
    X86_AT(c, 0xc314bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c314d  push esi
    X86_AT(c, 0xc314du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c314e  push 4
    X86_AT(c, 0xc314eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3150  call 0xba404
    X86_AT(c, 0xc3150u);
    push32(c, 0xc3155u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc3155u);
    X86_TICK(c, 13);
    // 0c3155  push 0xb
    X86_AT(c, 0xc3155u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c3157  push 0x34
    X86_AT(c, 0xc3157u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0c3159  push 4
    X86_AT(c, 0xc3159u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c315b  call 0xbc174
    X86_AT(c, 0xc315bu);
    push32(c, 0xc3160u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3160u);
    X86_TICK(c, 29);
    // 0c3160  push 2
    X86_AT(c, 0xc3160u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c3162  mov eax, edi
    X86_AT(c, 0xc3162u);
    c.r[0] = c.r[7];
    // 0c3164  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3164u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3167  shl edx, 5
    X86_AT(c, 0xc3167u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c316a  add edx, eax
    X86_AT(c, 0xc316au);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c316c  lea edx, [eax + edx*2]
    X86_AT(c, 0xc316cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c316f  push dword ptr [edx + 0xa4dce]
    X86_AT(c, 0xc316fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCEu))); push32(c, v); }
    // 0c3175  push 4
    X86_AT(c, 0xc3175u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3177  mov dword ptr [ebp - 0x20], edx
    X86_AT(c, 0xc3177u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[2]);
    // 0c317a  call 0xba404
    X86_AT(c, 0xc317au);
    push32(c, 0xc317fu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc317fu);
    X86_TICK(c, 9);
    // 0c317f  push 4
    X86_AT(c, 0xc317fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3181  call 0xb9930
    X86_AT(c, 0xc3181u);
    push32(c, 0xc3186u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc3186u);
    X86_TICK(c, 12);
    // 0c3186  xchg ebx, eax
    X86_AT(c, 0xc3186u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c3187  add esp, 0x34
    X86_AT(c, 0xc3187u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0c318a  cmp bl, 5
    X86_AT(c, 0xc318au);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c318d  je 0xc31fa
    X86_AT(c, 0xc318du);
    if (x86_cc(c, 4)) { goto L_c31fa; }
    X86_TICK(c, 7);
    // 0c3193  cmp bl, 6
    X86_AT(c, 0xc3193u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c3196  je 0xc31fa
    X86_AT(c, 0xc3196u);
    if (x86_cc(c, 4)) { goto L_c31fa; }
    X86_TICK(c, 7);
    // 0c3198  cmp bl, 4
    X86_AT(c, 0xc3198u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0c319b  je 0xc31fa
    X86_AT(c, 0xc319bu);
    if (x86_cc(c, 4)) { goto L_c31fa; }
    X86_TICK(c, 7);
    // 0c319d  cmp bl, 1
    X86_AT(c, 0xc319du);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c31a0  je 0xc31fa
    X86_AT(c, 0xc31a0u);
    if (x86_cc(c, 4)) { goto L_c31fa; }
    X86_TICK(c, 7);
    // 0c31a2  cmp bl, 7
    X86_AT(c, 0xc31a2u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0c31a5  jne 0xc31c0
    X86_AT(c, 0xc31a5u);
    if (x86_cc(c, 5)) { goto L_c31c0; }
    X86_TICK(c, 15);
    // 0c31a7  mov eax, dword ptr [ebp - 0x20]
    X86_AT(c, 0xc31a7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)));
    // 0c31aa  mov edx, dword ptr [eax + 0xa4dce]
    X86_AT(c, 0xc31aau);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4DCEu)));
    // 0c31b0  cmp edx, 0x19
    X86_AT(c, 0xc31b0u);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0c31b3  je 0xc3140
    X86_AT(c, 0xc31b3u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc3140u); goto L_c3140; }
    X86_TICK(c, 7);
    // 0c31b5  and esi, esi
    X86_AT(c, 0xc31b5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0c31b7  je 0xc3140
    X86_AT(c, 0xc31b7u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc3140u); goto L_c3140; }
    X86_TICK(c, 8);
    // 0c31b9  inc dword ptr [eax + 0xa4dce]
    X86_AT(c, 0xc31b9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xA4DCEu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c31bf  dec esi
    X86_AT(c, 0xc31bfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_c31c0:
    X86_TICK(c, 7);
    // 0c31c0  cmp bl, 3
    X86_AT(c, 0xc31c0u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0c31c3  jne 0xc3140
    X86_AT(c, 0xc31c3u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc3140u); goto L_c3140; }
    X86_TICK(c, 22);
    // 0c31c9  mov eax, edi
    X86_AT(c, 0xc31c9u);
    c.r[0] = c.r[7];
    // 0c31cb  lea edx, [eax + eax*2]
    X86_AT(c, 0xc31cbu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c31ce  shl edx, 5
    X86_AT(c, 0xc31ceu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c31d1  add edx, eax
    X86_AT(c, 0xc31d1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c31d3  lea edx, [eax + edx*2]
    X86_AT(c, 0xc31d3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c31d6  mov eax, dword ptr [edx + 0xa4dce]
    X86_AT(c, 0xc31d6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCEu)));
    // 0c31dc  cmp eax, 5
    X86_AT(c, 0xc31dcu);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0c31df  je 0xc3140
    X86_AT(c, 0xc31dfu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc3140u); goto L_c3140; }
    X86_TICK(c, 7);
    // 0c31e5  cmp esi, 0x1e
    X86_AT(c, 0xc31e5u);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0c31e8  je 0xc3140
    X86_AT(c, 0xc31e8u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc3140u); goto L_c3140; }
    X86_TICK(c, 15);
    // 0c31ee  dec dword ptr [edx + 0xa4dce]
    X86_AT(c, 0xc31eeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCEu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0c31f4  inc esi
    X86_AT(c, 0xc31f4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c31f5  jmp 0xc3140
    X86_AT(c, 0xc31f5u);
    X86_POLL(c, 0xc3140u); goto L_c3140;
L_c31fa:
    X86_TICK(c, 11);
    // 0c31fa  push 0xb
    X86_AT(c, 0xc31fau);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c31fc  push 4
    X86_AT(c, 0xc31fcu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c31fe  call 0xbc3ec
    X86_AT(c, 0xc31feu);
    push32(c, 0xc3203u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc3203u);
    X86_TICK(c, 13);
    // 0c3203  push 5
    X86_AT(c, 0xc3203u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c3205  push 0x28
    X86_AT(c, 0xc3205u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c3207  push 4
    X86_AT(c, 0xc3207u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3209  call 0xbc174
    X86_AT(c, 0xc3209u);
    push32(c, 0xc320eu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc320eu);
    X86_TICK(c, 13);
    // 0c320e  push 2
    X86_AT(c, 0xc320eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c3210  push esi
    X86_AT(c, 0xc3210u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c3211  push 4
    X86_AT(c, 0xc3211u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3213  call 0xba404
    X86_AT(c, 0xc3213u);
    push32(c, 0xc3218u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc3218u);
    X86_TICK(c, 13);
    // 0c3218  push 0xb
    X86_AT(c, 0xc3218u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c321a  push 0x34
    X86_AT(c, 0xc321au);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0c321c  push 4
    X86_AT(c, 0xc321cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c321e  call 0xbc174
    X86_AT(c, 0xc321eu);
    push32(c, 0xc3223u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3223u);
    X86_TICK(c, 27);
    // 0c3223  push 2
    X86_AT(c, 0xc3223u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c3225  mov eax, edi
    X86_AT(c, 0xc3225u);
    c.r[0] = c.r[7];
    // 0c3227  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3227u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c322a  shl edx, 5
    X86_AT(c, 0xc322au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c322d  add edx, eax
    X86_AT(c, 0xc322du);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c322f  lea edx, [eax + edx*2]
    X86_AT(c, 0xc322fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3232  push dword ptr [edx + 0xa4dce]
    X86_AT(c, 0xc3232u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCEu))); push32(c, v); }
    // 0c3238  push 4
    X86_AT(c, 0xc3238u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c323a  call 0xba404
    X86_AT(c, 0xc323au);
    push32(c, 0xc323fu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc323fu);
    X86_TICK(c, 9);
    // 0c323f  add esp, 0x38
    X86_AT(c, 0xc323fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0c3242  cmp bl, 5
    X86_AT(c, 0xc3242u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c3245  jne 0xc3253
    X86_AT(c, 0xc3245u);
    if (x86_cc(c, 5)) { goto L_c3253; }
    X86_TICK(c, 9);
    // 0c3247  mov dword ptr [ebp - 4], 4
    X86_AT(c, 0xc3247u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x4u);
    // 0c324e  jmp 0xc27a0
    X86_AT(c, 0xc324eu);
    X86_POLL(c, 0xc27a0u); goto L_c27a0;
L_c3253:
    X86_TICK(c, 7);
    // 0c3253  cmp bl, 1
    X86_AT(c, 0xc3253u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c3256  je 0xc350e
    X86_AT(c, 0xc3256u);
    if (x86_cc(c, 4)) { goto L_c350e; }
    X86_TICK(c, 7);
    // 0c325c  cmp bl, 6
    X86_AT(c, 0xc325cu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c325f  je 0xc326a
    X86_AT(c, 0xc325fu);
    if (x86_cc(c, 4)) { goto L_c326a; }
    X86_TICK(c, 7);
    // 0c3261  cmp bl, 4
    X86_AT(c, 0xc3261u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0c3264  jne 0xc27a0
    X86_AT(c, 0xc3264u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc27a0u); goto L_c27a0; }
L_c326a:
    X86_TICK(c, 26);
    // 0c326a  mov dword ptr [ebp - 4], 6
    X86_AT(c, 0xc326au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x6u);
    // 0c3271  mov eax, edi
    X86_AT(c, 0xc3271u);
    c.r[0] = c.r[7];
    // 0c3273  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3273u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3276  shl edx, 5
    X86_AT(c, 0xc3276u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c3279  add edx, eax
    X86_AT(c, 0xc3279u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c327b  lea edx, [eax + edx*2]
    X86_AT(c, 0xc327bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c327e  mov eax, dword ptr [edx + 0xa4dce]
    X86_AT(c, 0xc327eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCEu)));
    // 0c3284  mov dword ptr [edx + 0xa4dce], eax
    X86_AT(c, 0xc3284u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCEu)), c.r[0]);
    // 0c328a  jmp 0xc27a0
    X86_AT(c, 0xc328au);
    X86_POLL(c, 0xc27a0u); goto L_c27a0;
L_c328f:
    X86_TICK(c, 11);
    // 0c328f  push 0xe
    X86_AT(c, 0xc328fu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c3291  push 4
    X86_AT(c, 0xc3291u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3293  call 0xbc3ec
    X86_AT(c, 0xc3293u);
    push32(c, 0xc3298u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc3298u);
    X86_TICK(c, 2);
    // 0c3298  add esp, 8
    X86_AT(c, 0xc3298u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c329b:
    X86_TICK(c, 13);
    // 0c329b  push 5
    X86_AT(c, 0xc329bu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c329d  push 0x28
    X86_AT(c, 0xc329du);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c329f  push 4
    X86_AT(c, 0xc329fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c32a1  call 0xbc174
    X86_AT(c, 0xc32a1u);
    push32(c, 0xc32a6u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc32a6u);
    X86_TICK(c, 13);
    // 0c32a6  push 2
    X86_AT(c, 0xc32a6u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c32a8  push esi
    X86_AT(c, 0xc32a8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c32a9  push 4
    X86_AT(c, 0xc32a9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c32ab  call 0xba404
    X86_AT(c, 0xc32abu);
    push32(c, 0xc32b0u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc32b0u);
    X86_TICK(c, 13);
    // 0c32b0  push 0xc
    X86_AT(c, 0xc32b0u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0c32b2  push 0x34
    X86_AT(c, 0xc32b2u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0c32b4  push 4
    X86_AT(c, 0xc32b4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c32b6  call 0xbc174
    X86_AT(c, 0xc32b6u);
    push32(c, 0xc32bbu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc32bbu);
    X86_TICK(c, 29);
    // 0c32bb  push 2
    X86_AT(c, 0xc32bbu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c32bd  mov eax, edi
    X86_AT(c, 0xc32bdu);
    c.r[0] = c.r[7];
    // 0c32bf  lea edx, [eax + eax*2]
    X86_AT(c, 0xc32bfu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c32c2  shl edx, 5
    X86_AT(c, 0xc32c2u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c32c5  add edx, eax
    X86_AT(c, 0xc32c5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c32c7  lea edx, [eax + edx*2]
    X86_AT(c, 0xc32c7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c32ca  push dword ptr [edx + 0xa4dd2]
    X86_AT(c, 0xc32cau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD2u))); push32(c, v); }
    // 0c32d0  push 4
    X86_AT(c, 0xc32d0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c32d2  mov dword ptr [ebp - 0x20], edx
    X86_AT(c, 0xc32d2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[2]);
    // 0c32d5  call 0xba404
    X86_AT(c, 0xc32d5u);
    push32(c, 0xc32dau); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc32dau);
    X86_TICK(c, 9);
    // 0c32da  push 4
    X86_AT(c, 0xc32dau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c32dc  call 0xb9930
    X86_AT(c, 0xc32dcu);
    push32(c, 0xc32e1u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc32e1u);
    X86_TICK(c, 12);
    // 0c32e1  xchg ebx, eax
    X86_AT(c, 0xc32e1u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c32e2  add esp, 0x34
    X86_AT(c, 0xc32e2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0c32e5  cmp bl, 5
    X86_AT(c, 0xc32e5u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c32e8  je 0xc3355
    X86_AT(c, 0xc32e8u);
    if (x86_cc(c, 4)) { goto L_c3355; }
    X86_TICK(c, 7);
    // 0c32ee  cmp bl, 6
    X86_AT(c, 0xc32eeu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c32f1  je 0xc3355
    X86_AT(c, 0xc32f1u);
    if (x86_cc(c, 4)) { goto L_c3355; }
    X86_TICK(c, 7);
    // 0c32f3  cmp bl, 4
    X86_AT(c, 0xc32f3u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0c32f6  je 0xc3355
    X86_AT(c, 0xc32f6u);
    if (x86_cc(c, 4)) { goto L_c3355; }
    X86_TICK(c, 7);
    // 0c32f8  cmp bl, 1
    X86_AT(c, 0xc32f8u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c32fb  je 0xc3355
    X86_AT(c, 0xc32fbu);
    if (x86_cc(c, 4)) { goto L_c3355; }
    X86_TICK(c, 7);
    // 0c32fd  cmp bl, 7
    X86_AT(c, 0xc32fdu);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0c3300  jne 0xc331b
    X86_AT(c, 0xc3300u);
    if (x86_cc(c, 5)) { goto L_c331b; }
    X86_TICK(c, 15);
    // 0c3302  mov eax, dword ptr [ebp - 0x20]
    X86_AT(c, 0xc3302u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)));
    // 0c3305  mov edx, dword ptr [eax + 0xa4dd2]
    X86_AT(c, 0xc3305u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4DD2u)));
    // 0c330b  cmp edx, 0x19
    X86_AT(c, 0xc330bu);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0c330e  je 0xc329b
    X86_AT(c, 0xc330eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc329bu); goto L_c329b; }
    X86_TICK(c, 7);
    // 0c3310  and esi, esi
    X86_AT(c, 0xc3310u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0c3312  je 0xc329b
    X86_AT(c, 0xc3312u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc329bu); goto L_c329b; }
    X86_TICK(c, 8);
    // 0c3314  inc dword ptr [eax + 0xa4dd2]
    X86_AT(c, 0xc3314u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xA4DD2u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c331a  dec esi
    X86_AT(c, 0xc331au);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_c331b:
    X86_TICK(c, 7);
    // 0c331b  cmp bl, 3
    X86_AT(c, 0xc331bu);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0c331e  jne 0xc329b
    X86_AT(c, 0xc331eu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc329bu); goto L_c329b; }
    X86_TICK(c, 22);
    // 0c3324  mov eax, edi
    X86_AT(c, 0xc3324u);
    c.r[0] = c.r[7];
    // 0c3326  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3326u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3329  shl edx, 5
    X86_AT(c, 0xc3329u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c332c  add edx, eax
    X86_AT(c, 0xc332cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c332e  lea edx, [eax + edx*2]
    X86_AT(c, 0xc332eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3331  mov eax, dword ptr [edx + 0xa4dd2]
    X86_AT(c, 0xc3331u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD2u)));
    // 0c3337  cmp eax, 5
    X86_AT(c, 0xc3337u);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0c333a  je 0xc329b
    X86_AT(c, 0xc333au);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc329bu); goto L_c329b; }
    X86_TICK(c, 7);
    // 0c3340  cmp esi, 0x1e
    X86_AT(c, 0xc3340u);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0c3343  je 0xc329b
    X86_AT(c, 0xc3343u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc329bu); goto L_c329b; }
    X86_TICK(c, 15);
    // 0c3349  dec dword ptr [edx + 0xa4dd2]
    X86_AT(c, 0xc3349u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD2u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0c334f  inc esi
    X86_AT(c, 0xc334fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c3350  jmp 0xc329b
    X86_AT(c, 0xc3350u);
    X86_POLL(c, 0xc329bu); goto L_c329b;
L_c3355:
    X86_TICK(c, 11);
    // 0c3355  push 0xb
    X86_AT(c, 0xc3355u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c3357  push 4
    X86_AT(c, 0xc3357u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3359  call 0xbc3ec
    X86_AT(c, 0xc3359u);
    push32(c, 0xc335eu); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc335eu);
    X86_TICK(c, 13);
    // 0c335e  push 5
    X86_AT(c, 0xc335eu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c3360  push 0x28
    X86_AT(c, 0xc3360u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c3362  push 4
    X86_AT(c, 0xc3362u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3364  call 0xbc174
    X86_AT(c, 0xc3364u);
    push32(c, 0xc3369u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3369u);
    X86_TICK(c, 13);
    // 0c3369  push 2
    X86_AT(c, 0xc3369u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c336b  push esi
    X86_AT(c, 0xc336bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c336c  push 4
    X86_AT(c, 0xc336cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c336e  call 0xba404
    X86_AT(c, 0xc336eu);
    push32(c, 0xc3373u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc3373u);
    X86_TICK(c, 13);
    // 0c3373  push 0xc
    X86_AT(c, 0xc3373u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0c3375  push 0x34
    X86_AT(c, 0xc3375u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0c3377  push 4
    X86_AT(c, 0xc3377u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3379  call 0xbc174
    X86_AT(c, 0xc3379u);
    push32(c, 0xc337eu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc337eu);
    X86_TICK(c, 27);
    // 0c337e  push 2
    X86_AT(c, 0xc337eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c3380  mov eax, edi
    X86_AT(c, 0xc3380u);
    c.r[0] = c.r[7];
    // 0c3382  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3382u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3385  shl edx, 5
    X86_AT(c, 0xc3385u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c3388  add edx, eax
    X86_AT(c, 0xc3388u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c338a  lea edx, [eax + edx*2]
    X86_AT(c, 0xc338au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c338d  push dword ptr [edx + 0xa4dd2]
    X86_AT(c, 0xc338du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD2u))); push32(c, v); }
    // 0c3393  push 4
    X86_AT(c, 0xc3393u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3395  call 0xba404
    X86_AT(c, 0xc3395u);
    push32(c, 0xc339au); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc339au);
    X86_TICK(c, 9);
    // 0c339a  add esp, 0x38
    X86_AT(c, 0xc339au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0c339d  cmp bl, 5
    X86_AT(c, 0xc339du);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c33a0  jne 0xc33ae
    X86_AT(c, 0xc33a0u);
    if (x86_cc(c, 5)) { goto L_c33ae; }
L_c33a2:
    X86_TICK(c, 9);
    // 0c33a2  mov dword ptr [ebp - 4], 5
    X86_AT(c, 0xc33a2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x5u);
    // 0c33a9  jmp 0xc27a0
    X86_AT(c, 0xc33a9u);
    X86_POLL(c, 0xc27a0u); goto L_c27a0;
L_c33ae:
    X86_TICK(c, 7);
    // 0c33ae  cmp bl, 1
    X86_AT(c, 0xc33aeu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c33b1  je 0xc350e
    X86_AT(c, 0xc33b1u);
    if (x86_cc(c, 4)) { goto L_c350e; }
    X86_TICK(c, 7);
    // 0c33b7  cmp bl, 6
    X86_AT(c, 0xc33b7u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c33ba  je 0xc33c5
    X86_AT(c, 0xc33bau);
    if (x86_cc(c, 4)) { goto L_c33c5; }
    X86_TICK(c, 7);
    // 0c33bc  cmp bl, 4
    X86_AT(c, 0xc33bcu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0c33bf  jne 0xc27a0
    X86_AT(c, 0xc33bfu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc27a0u); goto L_c27a0; }
L_c33c5:
    X86_TICK(c, 26);
    // 0c33c5  mov dword ptr [ebp - 4], 7
    X86_AT(c, 0xc33c5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x7u);
    // 0c33cc  mov eax, edi
    X86_AT(c, 0xc33ccu);
    c.r[0] = c.r[7];
    // 0c33ce  lea edx, [eax + eax*2]
    X86_AT(c, 0xc33ceu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c33d1  shl edx, 5
    X86_AT(c, 0xc33d1u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c33d4  add edx, eax
    X86_AT(c, 0xc33d4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c33d6  lea edx, [eax + edx*2]
    X86_AT(c, 0xc33d6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c33d9  mov eax, dword ptr [edx + 0xa4dd2]
    X86_AT(c, 0xc33d9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD2u)));
    // 0c33df  mov dword ptr [edx + 0xa4dd2], eax
    X86_AT(c, 0xc33dfu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD2u)), c.r[0]);
    // 0c33e5  jmp 0xc27a0
    X86_AT(c, 0xc33e5u);
    X86_POLL(c, 0xc27a0u); goto L_c27a0;
L_c33ea:
    X86_TICK(c, 11);
    // 0c33ea  push 0xe
    X86_AT(c, 0xc33eau);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c33ec  push 4
    X86_AT(c, 0xc33ecu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c33ee  call 0xbc3ec
    X86_AT(c, 0xc33eeu);
    push32(c, 0xc33f3u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc33f3u);
    X86_TICK(c, 2);
    // 0c33f3  add esp, 8
    X86_AT(c, 0xc33f3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c33f6:
    X86_TICK(c, 13);
    // 0c33f6  push 5
    X86_AT(c, 0xc33f6u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c33f8  push 0x28
    X86_AT(c, 0xc33f8u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c33fa  push 4
    X86_AT(c, 0xc33fau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c33fc  call 0xbc174
    X86_AT(c, 0xc33fcu);
    push32(c, 0xc3401u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3401u);
    X86_TICK(c, 13);
    // 0c3401  push 2
    X86_AT(c, 0xc3401u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c3403  push esi
    X86_AT(c, 0xc3403u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c3404  push 4
    X86_AT(c, 0xc3404u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3406  call 0xba404
    X86_AT(c, 0xc3406u);
    push32(c, 0xc340bu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc340bu);
    X86_TICK(c, 13);
    // 0c340b  push 0xd
    X86_AT(c, 0xc340bu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c340d  push 0x34
    X86_AT(c, 0xc340du);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0c340f  push 4
    X86_AT(c, 0xc340fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3411  call 0xbc174
    X86_AT(c, 0xc3411u);
    push32(c, 0xc3416u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3416u);
    X86_TICK(c, 29);
    // 0c3416  push 2
    X86_AT(c, 0xc3416u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c3418  mov eax, edi
    X86_AT(c, 0xc3418u);
    c.r[0] = c.r[7];
    // 0c341a  lea edx, [eax + eax*2]
    X86_AT(c, 0xc341au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c341d  shl edx, 5
    X86_AT(c, 0xc341du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c3420  add edx, eax
    X86_AT(c, 0xc3420u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c3422  lea edx, [eax + edx*2]
    X86_AT(c, 0xc3422u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3425  push dword ptr [edx + 0xa4dd6]
    X86_AT(c, 0xc3425u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD6u))); push32(c, v); }
    // 0c342b  push 4
    X86_AT(c, 0xc342bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c342d  mov dword ptr [ebp - 0x20], edx
    X86_AT(c, 0xc342du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[2]);
    // 0c3430  call 0xba404
    X86_AT(c, 0xc3430u);
    push32(c, 0xc3435u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc3435u);
    X86_TICK(c, 9);
    // 0c3435  push 4
    X86_AT(c, 0xc3435u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3437  call 0xb9930
    X86_AT(c, 0xc3437u);
    push32(c, 0xc343cu); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc343cu);
    X86_TICK(c, 12);
    // 0c343c  xchg ebx, eax
    X86_AT(c, 0xc343cu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c343d  add esp, 0x34
    X86_AT(c, 0xc343du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0c3440  cmp bl, 5
    X86_AT(c, 0xc3440u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c3443  je 0xc34b0
    X86_AT(c, 0xc3443u);
    if (x86_cc(c, 4)) { goto L_c34b0; }
    X86_TICK(c, 7);
    // 0c3449  cmp bl, 6
    X86_AT(c, 0xc3449u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c344c  je 0xc34b0
    X86_AT(c, 0xc344cu);
    if (x86_cc(c, 4)) { goto L_c34b0; }
    X86_TICK(c, 7);
    // 0c344e  cmp bl, 4
    X86_AT(c, 0xc344eu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0c3451  je 0xc34b0
    X86_AT(c, 0xc3451u);
    if (x86_cc(c, 4)) { goto L_c34b0; }
    X86_TICK(c, 7);
    // 0c3453  cmp bl, 1
    X86_AT(c, 0xc3453u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c3456  je 0xc34b0
    X86_AT(c, 0xc3456u);
    if (x86_cc(c, 4)) { goto L_c34b0; }
    X86_TICK(c, 7);
    // 0c3458  cmp bl, 7
    X86_AT(c, 0xc3458u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0c345b  jne 0xc3476
    X86_AT(c, 0xc345bu);
    if (x86_cc(c, 5)) { goto L_c3476; }
    X86_TICK(c, 15);
    // 0c345d  mov eax, dword ptr [ebp - 0x20]
    X86_AT(c, 0xc345du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)));
    // 0c3460  mov edx, dword ptr [eax + 0xa4dd6]
    X86_AT(c, 0xc3460u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4DD6u)));
    // 0c3466  cmp edx, 0x19
    X86_AT(c, 0xc3466u);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0c3469  je 0xc33f6
    X86_AT(c, 0xc3469u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc33f6u); goto L_c33f6; }
    X86_TICK(c, 7);
    // 0c346b  and esi, esi
    X86_AT(c, 0xc346bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0c346d  je 0xc33f6
    X86_AT(c, 0xc346du);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc33f6u); goto L_c33f6; }
    X86_TICK(c, 8);
    // 0c346f  inc dword ptr [eax + 0xa4dd6]
    X86_AT(c, 0xc346fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xA4DD6u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c3475  dec esi
    X86_AT(c, 0xc3475u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_c3476:
    X86_TICK(c, 7);
    // 0c3476  cmp bl, 3
    X86_AT(c, 0xc3476u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0c3479  jne 0xc33f6
    X86_AT(c, 0xc3479u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc33f6u); goto L_c33f6; }
    X86_TICK(c, 22);
    // 0c347f  mov eax, edi
    X86_AT(c, 0xc347fu);
    c.r[0] = c.r[7];
    // 0c3481  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3481u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3484  shl edx, 5
    X86_AT(c, 0xc3484u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c3487  add edx, eax
    X86_AT(c, 0xc3487u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c3489  lea edx, [eax + edx*2]
    X86_AT(c, 0xc3489u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c348c  mov eax, dword ptr [edx + 0xa4dd6]
    X86_AT(c, 0xc348cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD6u)));
    // 0c3492  cmp eax, 5
    X86_AT(c, 0xc3492u);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0c3495  je 0xc33f6
    X86_AT(c, 0xc3495u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc33f6u); goto L_c33f6; }
    X86_TICK(c, 7);
    // 0c349b  cmp esi, 0x1e
    X86_AT(c, 0xc349bu);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0c349e  je 0xc33f6
    X86_AT(c, 0xc349eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc33f6u); goto L_c33f6; }
    X86_TICK(c, 15);
    // 0c34a4  dec dword ptr [edx + 0xa4dd6]
    X86_AT(c, 0xc34a4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD6u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0c34aa  inc esi
    X86_AT(c, 0xc34aau);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c34ab  jmp 0xc33f6
    X86_AT(c, 0xc34abu);
    X86_POLL(c, 0xc33f6u); goto L_c33f6;
L_c34b0:
    X86_TICK(c, 11);
    // 0c34b0  push 0xb
    X86_AT(c, 0xc34b0u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c34b2  push 4
    X86_AT(c, 0xc34b2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c34b4  call 0xbc3ec
    X86_AT(c, 0xc34b4u);
    push32(c, 0xc34b9u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc34b9u);
    X86_TICK(c, 13);
    // 0c34b9  push 5
    X86_AT(c, 0xc34b9u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c34bb  push 0x28
    X86_AT(c, 0xc34bbu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c34bd  push 4
    X86_AT(c, 0xc34bdu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c34bf  call 0xbc174
    X86_AT(c, 0xc34bfu);
    push32(c, 0xc34c4u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc34c4u);
    X86_TICK(c, 13);
    // 0c34c4  push 2
    X86_AT(c, 0xc34c4u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c34c6  push esi
    X86_AT(c, 0xc34c6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c34c7  push 4
    X86_AT(c, 0xc34c7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c34c9  call 0xba404
    X86_AT(c, 0xc34c9u);
    push32(c, 0xc34ceu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc34ceu);
    X86_TICK(c, 13);
    // 0c34ce  push 0xd
    X86_AT(c, 0xc34ceu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c34d0  push 0x34
    X86_AT(c, 0xc34d0u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0c34d2  push 4
    X86_AT(c, 0xc34d2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c34d4  call 0xbc174
    X86_AT(c, 0xc34d4u);
    push32(c, 0xc34d9u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc34d9u);
    X86_TICK(c, 27);
    // 0c34d9  push 2
    X86_AT(c, 0xc34d9u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c34db  mov eax, edi
    X86_AT(c, 0xc34dbu);
    c.r[0] = c.r[7];
    // 0c34dd  lea edx, [eax + eax*2]
    X86_AT(c, 0xc34ddu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c34e0  shl edx, 5
    X86_AT(c, 0xc34e0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c34e3  add edx, eax
    X86_AT(c, 0xc34e3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c34e5  lea edx, [eax + edx*2]
    X86_AT(c, 0xc34e5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c34e8  push dword ptr [edx + 0xa4dd6]
    X86_AT(c, 0xc34e8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD6u))); push32(c, v); }
    // 0c34ee  push 4
    X86_AT(c, 0xc34eeu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c34f0  call 0xba404
    X86_AT(c, 0xc34f0u);
    push32(c, 0xc34f5u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc34f5u);
    X86_TICK(c, 9);
    // 0c34f5  add esp, 0x38
    X86_AT(c, 0xc34f5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0c34f8  cmp bl, 5
    X86_AT(c, 0xc34f8u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c34fb  jne 0xc3509
    X86_AT(c, 0xc34fbu);
    if (x86_cc(c, 5)) { goto L_c3509; }
    X86_TICK(c, 9);
    // 0c34fd  mov dword ptr [ebp - 4], 6
    X86_AT(c, 0xc34fdu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x6u);
    // 0c3504  jmp 0xc27a0
    X86_AT(c, 0xc3504u);
    X86_POLL(c, 0xc27a0u); goto L_c27a0;
L_c3509:
    X86_TICK(c, 7);
    // 0c3509  cmp bl, 1
    X86_AT(c, 0xc3509u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c350c  jne 0xc3518
    X86_AT(c, 0xc350cu);
    if (x86_cc(c, 5)) { goto L_c3518; }
L_c350e:
    X86_TICK(c, 9);
    // 0c350e  mov eax, 0xffffffff
    X86_AT(c, 0xc350eu);
    c.r[0] = 0xFFFFFFFFu;
    // 0c3513  jmp 0xc35c9
    X86_AT(c, 0xc3513u);
    goto L_c35c9;
L_c3518:
    X86_TICK(c, 7);
    // 0c3518  cmp bl, 6
    X86_AT(c, 0xc3518u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c351b  je 0xc3526
    X86_AT(c, 0xc351bu);
    if (x86_cc(c, 4)) { goto L_c3526; }
    X86_TICK(c, 7);
    // 0c351d  cmp bl, 4
    X86_AT(c, 0xc351du);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0c3520  jne 0xc27a0
    X86_AT(c, 0xc3520u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc27a0u); goto L_c27a0; }
L_c3526:
    X86_TICK(c, 26);
    // 0c3526  mov dword ptr [ebp - 4], 8
    X86_AT(c, 0xc3526u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x8u);
    // 0c352d  mov eax, edi
    X86_AT(c, 0xc352du);
    c.r[0] = c.r[7];
    // 0c352f  lea edx, [eax + eax*2]
    X86_AT(c, 0xc352fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3532  shl edx, 5
    X86_AT(c, 0xc3532u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c3535  add edx, eax
    X86_AT(c, 0xc3535u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c3537  lea edx, [eax + edx*2]
    X86_AT(c, 0xc3537u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c353a  mov eax, dword ptr [edx + 0xa4dd6]
    X86_AT(c, 0xc353au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD6u)));
    // 0c3540  mov dword ptr [edx + 0xa4dd6], eax
    X86_AT(c, 0xc3540u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD6u)), c.r[0]);
    // 0c3546  jmp 0xc27a0
    X86_AT(c, 0xc3546u);
    X86_POLL(c, 0xc27a0u); goto L_c27a0;
L_c354b:
    X86_TICK(c, 13);
    // 0c354b  push 3
    X86_AT(c, 0xc354bu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c354d  push 0xf
    X86_AT(c, 0xc354du);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c354f  push 4
    X86_AT(c, 0xc354fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3551  call 0xbc174
    X86_AT(c, 0xc3551u);
    push32(c, 0xc3556u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3556u);
    X86_TICK(c, 24);
    // 0c3556  mov eax, edi
    X86_AT(c, 0xc3556u);
    c.r[0] = c.r[7];
    // 0c3558  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3558u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c355b  shl edx, 5
    X86_AT(c, 0xc355bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c355e  add edx, eax
    X86_AT(c, 0xc355eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c3560  lea edx, [eax + edx*2]
    X86_AT(c, 0xc3560u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3563  lea eax, [edx*1 + 0xa4dac]
    X86_AT(c, 0xc3563u);
    c.r[0] = (uint32_t)(c.r[2] + 0xA4DACu);
    // 0c356a  push eax
    X86_AT(c, 0xc356au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c356b  push 4
    X86_AT(c, 0xc356bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c356d  call 0xbbfe0
    X86_AT(c, 0xc356du);
    push32(c, 0xc3572u); x86_call_known(c, 0xbbfe0u, f_000bbfe0); X86_RET(c, 0xc3572u);
    X86_TICK(c, 11);
    // 0c3572  push 0x36b4
    X86_AT(c, 0xc3572u);
    { uint32_t v = 0x36B4u; push32(c, v); }
    // 0c3577  push 4
    X86_AT(c, 0xc3577u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3579  call 0xba428
    X86_AT(c, 0xc3579u);
    push32(c, 0xc357eu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc357eu);
    X86_TICK(c, 9);
    // 0c357e  push 0x36f4
    X86_AT(c, 0xc357eu);
    { uint32_t v = 0x36F4u; push32(c, v); }
    // 0c3583  call 0xbc50c
    X86_AT(c, 0xc3583u);
    push32(c, 0xc3588u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc3588u);
    X86_TICK(c, 2);
    // 0c3588  add esp, 0x20
    X86_AT(c, 0xc3588u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_c358b:
    X86_TICK(c, 9);
    // 0c358b  push 4
    X86_AT(c, 0xc358bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c358d  call 0xb9930
    X86_AT(c, 0xc358du);
    push32(c, 0xc3592u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc3592u);
    X86_TICK(c, 11);
    // 0c3592  mov byte ptr [ebp - 0xd], al
    X86_AT(c, 0xc3592u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), g8(c, 0));
    // 0c3595  add esp, 4
    X86_AT(c, 0xc3595u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c3598  cmp al, 0x59
    X86_AT(c, 0xc3598u);
    (void)x86_sub(c, g8(c, 0), 0x59u, 0, 1);
    // 0c359a  je 0xc35a4
    X86_AT(c, 0xc359au);
    if (x86_cc(c, 4)) { goto L_c35a4; }
    X86_TICK(c, 7);
    // 0c359c  cmp al, 0x4e
    X86_AT(c, 0xc359cu);
    (void)x86_sub(c, g8(c, 0), 0x4Eu, 0, 1);
    // 0c359e  je 0xc35a4
    X86_AT(c, 0xc359eu);
    if (x86_cc(c, 4)) { goto L_c35a4; }
    X86_TICK(c, 7);
    // 0c35a0  dec al
    X86_AT(c, 0xc35a0u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0c35a2  jne 0xc358b
    X86_AT(c, 0xc35a2u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc358bu); goto L_c358b; }
L_c35a4:
    X86_TICK(c, 9);
    // 0c35a4  push 2
    X86_AT(c, 0xc35a4u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c35a6  call 0xbbb5c
    X86_AT(c, 0xc35a6u);
    push32(c, 0xc35abu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc35abu);
    X86_TICK(c, 9);
    // 0c35ab  push 4
    X86_AT(c, 0xc35abu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c35ad  call 0xbb6b0
    X86_AT(c, 0xc35adu);
    push32(c, 0xc35b2u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc35b2u);
    X86_TICK(c, 14);
    // 0c35b2  add esp, 8
    X86_AT(c, 0xc35b2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c35b5  cmp byte ptr [ebp - 0xd], 0x59
    X86_AT(c, 0xc35b5u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x59u, 0, 1);
    // 0c35b9  je 0xc35c7
    X86_AT(c, 0xc35b9u);
    if (x86_cc(c, 4)) { goto L_c35c7; }
    X86_TICK(c, 9);
    // 0c35bb  mov dword ptr [ebp - 4], 7
    X86_AT(c, 0xc35bbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x7u);
    // 0c35c2  jmp 0xc27a0
    X86_AT(c, 0xc35c2u);
    X86_POLL(c, 0xc27a0u); goto L_c27a0;
L_c35c7:
    X86_TICK(c, 2);
    // 0c35c7  sub eax, eax
    X86_AT(c, 0xc35c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_c35c9:
    X86_TICK(c, 28);
    // 0c35c9  pop edi
    X86_AT(c, 0xc35c9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c35ca  pop esi
    X86_AT(c, 0xc35cau);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c35cb  pop ebx
    X86_AT(c, 0xc35cbu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c35cc  leave 
    X86_AT(c, 0xc35ccu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c35cd  ret 
    X86_AT(c, 0xc35cdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc27a0u, "ran off the end of a function");
}
}
