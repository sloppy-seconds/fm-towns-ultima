#include "p_game_funcs.h"
namespace p_game {
void f_000ed621(X86Cpu& c) {
L_ed621:
    X86_TICK(c, 9);
    // 0ed621  push 4
    X86_AT(c, 0xed621u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed623  call 0xe756c
    X86_AT(c, 0xed623u);
    push32(c, 0xed628u); f_000e756c(c); X86_RET(c, 0xed628u);
    X86_TICK(c, 17);
    // 0ed628  push 0x17
    X86_AT(c, 0xed628u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0ed62a  push 0x4d
    X86_AT(c, 0xed62au);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0ed62c  push 3
    X86_AT(c, 0xed62cu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ed62e  push 0
    X86_AT(c, 0xed62eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ed630  push 4
    X86_AT(c, 0xed630u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed632  call 0xe739c
    X86_AT(c, 0xed632u);
    push32(c, 0xed637u); f_000e739c(c); X86_RET(c, 0xed637u);
    X86_TICK(c, 2);
    // 0ed637  add esp, 0x18
    X86_AT(c, 0xed637u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_ed63a:
    X86_TICK(c, 13);
    // 0ed63a  push 3
    X86_AT(c, 0xed63au);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ed63c  push 1
    X86_AT(c, 0xed63cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ed63e  push 4
    X86_AT(c, 0xed63eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed640  call 0xe7260
    X86_AT(c, 0xed640u);
    push32(c, 0xed645u); f_000e7260(c); X86_RET(c, 0xed645u);
    X86_TICK(c, 11);
    // 0ed645  push 0x33c0
    X86_AT(c, 0xed645u);
    { uint32_t v = 0x33C0u; push32(c, v); }
    // 0ed64a  push 4
    X86_AT(c, 0xed64au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed64c  call 0xe5654
    X86_AT(c, 0xed64cu);
    push32(c, 0xed651u); f_000e5654(c); X86_RET(c, 0xed651u);
    X86_TICK(c, 13);
    // 0ed651  push 3
    X86_AT(c, 0xed651u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ed653  push 0x10
    X86_AT(c, 0xed653u);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0ed655  push 4
    X86_AT(c, 0xed655u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed657  call 0xe7260
    X86_AT(c, 0xed657u);
    push32(c, 0xed65cu); f_000e7260(c); X86_RET(c, 0xed65cu);
    X86_TICK(c, 11);
    // 0ed65c  push 0xcf1f4
    X86_AT(c, 0xed65cu);
    { uint32_t v = 0xCF1F4u; push32(c, v); }
    // 0ed661  push 4
    X86_AT(c, 0xed661u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed663  call 0xe5654
    X86_AT(c, 0xed663u);
    push32(c, 0xed668u); f_000e5654(c); X86_RET(c, 0xed668u);
    X86_TICK(c, 11);
    // 0ed668  push 0xe
    X86_AT(c, 0xed668u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ed66a  push 4
    X86_AT(c, 0xed66au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed66c  call 0xe74d8
    X86_AT(c, 0xed66cu);
    push32(c, 0xed671u); f_000e74d8(c); X86_RET(c, 0xed671u);
    X86_TICK(c, 9);
    // 0ed671  push 4
    X86_AT(c, 0xed671u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed673  call 0xe693c
    X86_AT(c, 0xed673u);
    push32(c, 0xed678u); f_000e693c(c); X86_RET(c, 0xed678u);
    X86_TICK(c, 13);
    // 0ed678  push 3
    X86_AT(c, 0xed678u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ed67a  push 0x27
    X86_AT(c, 0xed67au);
    { uint32_t v = 0x27u; push32(c, v); }
    // 0ed67c  push 4
    X86_AT(c, 0xed67cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed67e  call 0xe7260
    X86_AT(c, 0xed67eu);
    push32(c, 0xed683u); f_000e7260(c); X86_RET(c, 0xed683u);
    X86_TICK(c, 11);
    // 0ed683  add esp, 0x40
    X86_AT(c, 0xed683u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ed686  push 4
    X86_AT(c, 0xed686u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed688  call 0xe1b10
    X86_AT(c, 0xed688u);
    push32(c, 0xed68du); f_000e1b10(c); X86_RET(c, 0xed68du);
    X86_TICK(c, 14);
    // 0ed68d  xchg edi, eax
    X86_AT(c, 0xed68du);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0ed68e  push 0xb
    X86_AT(c, 0xed68eu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ed690  push 4
    X86_AT(c, 0xed690u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed692  call 0xe74d8
    X86_AT(c, 0xed692u);
    push32(c, 0xed697u); f_000e74d8(c); X86_RET(c, 0xed697u);
    X86_TICK(c, 9);
    // 0ed697  push 4
    X86_AT(c, 0xed697u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed699  call 0xe693c
    X86_AT(c, 0xed699u);
    push32(c, 0xed69eu); f_000e693c(c); X86_RET(c, 0xed69eu);
    X86_TICK(c, 9);
    // 0ed69e  add esp, 0x10
    X86_AT(c, 0xed69eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0ed6a1  cmp edi, 0xffffffff
    X86_AT(c, 0xed6a1u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0ed6a4  je 0xed6aa
    X86_AT(c, 0xed6a4u);
    if (x86_cc(c, 4)) { goto L_ed6aa; }
    X86_TICK(c, 7);
    // 0ed6a6  and edi, edi
    X86_AT(c, 0xed6a6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0ed6a8  jne 0xed6df
    X86_AT(c, 0xed6a8u);
    if (x86_cc(c, 5)) { goto L_ed6df; }
L_ed6aa:
    X86_TICK(c, 13);
    // 0ed6aa  push 3
    X86_AT(c, 0xed6aau);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ed6ac  push 0x1b
    X86_AT(c, 0xed6acu);
    { uint32_t v = 0x1Bu; push32(c, v); }
    // 0ed6ae  push 4
    X86_AT(c, 0xed6aeu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed6b0  call 0xe7260
    X86_AT(c, 0xed6b0u);
    push32(c, 0xed6b5u); f_000e7260(c); X86_RET(c, 0xed6b5u);
    X86_TICK(c, 11);
    // 0ed6b5  push 0xcf280
    X86_AT(c, 0xed6b5u);
    { uint32_t v = 0xCF280u; push32(c, v); }
    // 0ed6ba  push 4
    X86_AT(c, 0xed6bau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed6bc  call 0xe5654
    X86_AT(c, 0xed6bcu);
    push32(c, 0xed6c1u); f_000e5654(c); X86_RET(c, 0xed6c1u);
    X86_TICK(c, 17);
    // 0ed6c1  push 0x17
    X86_AT(c, 0xed6c1u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0ed6c3  push 0x4d
    X86_AT(c, 0xed6c3u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0ed6c5  push 3
    X86_AT(c, 0xed6c5u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ed6c7  push 0
    X86_AT(c, 0xed6c7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ed6c9  push 4
    X86_AT(c, 0xed6c9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed6cb  call 0xe739c
    X86_AT(c, 0xed6cbu);
    push32(c, 0xed6d0u); f_000e739c(c); X86_RET(c, 0xed6d0u);
    X86_TICK(c, 9);
    // 0ed6d0  push 4
    X86_AT(c, 0xed6d0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed6d2  call 0xe7584
    X86_AT(c, 0xed6d2u);
    push32(c, 0xed6d7u); f_000e7584(c); X86_RET(c, 0xed6d7u);
    X86_TICK(c, 9);
    // 0ed6d7  add esp, 0x2c
    X86_AT(c, 0xed6d7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0ed6da  jmp 0xedd31
    X86_AT(c, 0xed6dau);
    goto L_edd31;
L_ed6df:
    X86_TICK(c, 7);
    // 0ed6df  cmp edi, 4
    X86_AT(c, 0xed6dfu);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0ed6e2  jg 0xed6e8
    X86_AT(c, 0xed6e2u);
    if (x86_cc(c, 15)) { goto L_ed6e8; }
    X86_TICK(c, 7);
    // 0ed6e4  and edi, edi
    X86_AT(c, 0xed6e4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0ed6e6  jg 0xed730
    X86_AT(c, 0xed6e6u);
    if (x86_cc(c, 15)) { goto L_ed730; }
L_ed6e8:
    X86_TICK(c, 13);
    // 0ed6e8  push 3
    X86_AT(c, 0xed6e8u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ed6ea  push 0xf
    X86_AT(c, 0xed6eau);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ed6ec  push 4
    X86_AT(c, 0xed6ecu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed6ee  call 0xe7260
    X86_AT(c, 0xed6eeu);
    push32(c, 0xed6f3u); f_000e7260(c); X86_RET(c, 0xed6f3u);
    X86_TICK(c, 11);
    // 0ed6f3  push 0xcf230
    X86_AT(c, 0xed6f3u);
    { uint32_t v = 0xCF230u; push32(c, v); }
    // 0ed6f8  push 4
    X86_AT(c, 0xed6f8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed6fa  call 0xe5654
    X86_AT(c, 0xed6fau);
    push32(c, 0xed6ffu); f_000e5654(c); X86_RET(c, 0xed6ffu);
    X86_TICK(c, 9);
    // 0ed6ff  push 0x33dc
    X86_AT(c, 0xed6ffu);
    { uint32_t v = 0x33DCu; push32(c, v); }
    // 0ed704  call 0xe75f8
    X86_AT(c, 0xed704u);
    push32(c, 0xed709u); f_000e75f8(c); X86_RET(c, 0xed709u);
    X86_TICK(c, 2);
    // 0ed709  add esp, 0x18
    X86_AT(c, 0xed709u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_ed70c:
    X86_TICK(c, 9);
    // 0ed70c  push 4
    X86_AT(c, 0xed70cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed70e  call 0xe4b60
    X86_AT(c, 0xed70eu);
    push32(c, 0xed713u); f_000e4b60(c); X86_RET(c, 0xed713u);
    X86_TICK(c, 9);
    // 0ed713  add esp, 4
    X86_AT(c, 0xed713u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ed716  and al, al
    X86_AT(c, 0xed716u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0ed718  je 0xed70c
    X86_AT(c, 0xed718u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xed70cu); goto L_ed70c; }
    X86_TICK(c, 9);
    // 0ed71a  push 2
    X86_AT(c, 0xed71au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ed71c  call 0xe6c68
    X86_AT(c, 0xed71cu);
    push32(c, 0xed721u); f_000e6c68(c); X86_RET(c, 0xed721u);
    X86_TICK(c, 9);
    // 0ed721  push 4
    X86_AT(c, 0xed721u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed723  call 0xe693c
    X86_AT(c, 0xed723u);
    push32(c, 0xed728u); f_000e693c(c); X86_RET(c, 0xed728u);
    X86_TICK(c, 9);
    // 0ed728  add esp, 8
    X86_AT(c, 0xed728u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ed72b  jmp 0xed63a
    X86_AT(c, 0xed72bu);
    X86_POLL(c, 0xed63au); goto L_ed63a;
L_ed730:
    X86_TICK(c, 13);
    // 0ed730  push 3
    X86_AT(c, 0xed730u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ed732  push 0x10
    X86_AT(c, 0xed732u);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0ed734  push 4
    X86_AT(c, 0xed734u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed736  call 0xe7260
    X86_AT(c, 0xed736u);
    push32(c, 0xed73bu); f_000e7260(c); X86_RET(c, 0xed73bu);
    X86_TICK(c, 11);
    // 0ed73b  push 0xcf1f4
    X86_AT(c, 0xed73bu);
    { uint32_t v = 0xCF1F4u; push32(c, v); }
    // 0ed740  push 4
    X86_AT(c, 0xed740u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed742  call 0xe5654
    X86_AT(c, 0xed742u);
    push32(c, 0xed747u); f_000e5654(c); X86_RET(c, 0xed747u);
    X86_TICK(c, 13);
    // 0ed747  push 3
    X86_AT(c, 0xed747u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ed749  push 0x27
    X86_AT(c, 0xed749u);
    { uint32_t v = 0x27u; push32(c, v); }
    // 0ed74b  push 4
    X86_AT(c, 0xed74bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed74d  call 0xe7260
    X86_AT(c, 0xed74du);
    push32(c, 0xed752u); f_000e7260(c); X86_RET(c, 0xed752u);
    X86_TICK(c, 13);
    // 0ed752  push 2
    X86_AT(c, 0xed752u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ed754  push edi
    X86_AT(c, 0xed754u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ed755  push 4
    X86_AT(c, 0xed755u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed757  call 0xe5630
    X86_AT(c, 0xed757u);
    push32(c, 0xed75cu); f_000e5630(c); X86_RET(c, 0xed75cu);
    X86_TICK(c, 27);
    // 0ed75c  dec edi
    X86_AT(c, 0xed75cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0ed75d  mov eax, edi
    X86_AT(c, 0xed75du);
    c.r[0] = c.r[7];
    // 0ed75f  lea edx, [eax + eax*4]
    X86_AT(c, 0xed75fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ed762  lea edx, [eax + edx*2]
    X86_AT(c, 0xed762u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ed765  shl edx, 5
    X86_AT(c, 0xed765u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ed768  sub edx, eax
    X86_AT(c, 0xed768u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed76a  add esp, 0x2c
    X86_AT(c, 0xed76au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0ed76d  cmp byte ptr [edx + 0xcde4d], 0
    X86_AT(c, 0xed76du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE4Du))), 0x0u, 0, 1);
    // 0ed774  je 0xed7ad
    X86_AT(c, 0xed774u);
    if (x86_cc(c, 4)) { goto L_ed7ad; }
    X86_TICK(c, 13);
    // 0ed776  push 3
    X86_AT(c, 0xed776u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ed778  push 0xf
    X86_AT(c, 0xed778u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ed77a  push 4
    X86_AT(c, 0xed77au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed77c  call 0xe7260
    X86_AT(c, 0xed77cu);
    push32(c, 0xed781u); f_000e7260(c); X86_RET(c, 0xed781u);
    X86_TICK(c, 11);
    // 0ed781  push 0x3410
    X86_AT(c, 0xed781u);
    { uint32_t v = 0x3410u; push32(c, v); }
    // 0ed786  push 4
    X86_AT(c, 0xed786u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed788  call 0xe5654
    X86_AT(c, 0xed788u);
    push32(c, 0xed78du); f_000e5654(c); X86_RET(c, 0xed78du);
    X86_TICK(c, 9);
    // 0ed78d  push 0x3458
    X86_AT(c, 0xed78du);
    { uint32_t v = 0x3458u; push32(c, v); }
    // 0ed792  call 0xe75f8
    X86_AT(c, 0xed792u);
    push32(c, 0xed797u); f_000e75f8(c); X86_RET(c, 0xed797u);
    X86_TICK(c, 2);
    // 0ed797  add esp, 0x18
    X86_AT(c, 0xed797u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_ed79a:
    X86_TICK(c, 9);
    // 0ed79a  push 4
    X86_AT(c, 0xed79au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed79c  call 0xe4b60
    X86_AT(c, 0xed79cu);
    push32(c, 0xed7a1u); f_000e4b60(c); X86_RET(c, 0xed7a1u);
    X86_TICK(c, 9);
    // 0ed7a1  add esp, 4
    X86_AT(c, 0xed7a1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ed7a4  and al, al
    X86_AT(c, 0xed7a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0ed7a6  je 0xed79a
    X86_AT(c, 0xed7a6u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xed79au); goto L_ed79a; }
    X86_TICK(c, 7);
    // 0ed7a8  jmp 0xedd1b
    X86_AT(c, 0xed7a8u);
    goto L_edd1b;
L_ed7ad:
    X86_TICK(c, 13);
    // 0ed7ad  push 5
    X86_AT(c, 0xed7adu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed7af  push 0xe
    X86_AT(c, 0xed7afu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ed7b1  push 4
    X86_AT(c, 0xed7b1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed7b3  call 0xe7260
    X86_AT(c, 0xed7b3u);
    push32(c, 0xed7b8u); f_000e7260(c); X86_RET(c, 0xed7b8u);
    X86_TICK(c, 11);
    // 0ed7b8  push 0x348c
    X86_AT(c, 0xed7b8u);
    { uint32_t v = 0x348Cu; push32(c, v); }
    // 0ed7bd  push 4
    X86_AT(c, 0xed7bdu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed7bf  call 0xe5654
    X86_AT(c, 0xed7bfu);
    push32(c, 0xed7c4u); f_000e5654(c); X86_RET(c, 0xed7c4u);
    X86_TICK(c, 13);
    // 0ed7c4  push 6
    X86_AT(c, 0xed7c4u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ed7c6  push 0x14
    X86_AT(c, 0xed7c6u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0ed7c8  push 4
    X86_AT(c, 0xed7c8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed7ca  call 0xe7260
    X86_AT(c, 0xed7cau);
    push32(c, 0xed7cfu); f_000e7260(c); X86_RET(c, 0xed7cfu);
    X86_TICK(c, 11);
    // 0ed7cf  push 0x34cc
    X86_AT(c, 0xed7cfu);
    { uint32_t v = 0x34CCu; push32(c, v); }
    // 0ed7d4  push 4
    X86_AT(c, 0xed7d4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed7d6  call 0xe5654
    X86_AT(c, 0xed7d6u);
    push32(c, 0xed7dbu); f_000e5654(c); X86_RET(c, 0xed7dbu);
    X86_TICK(c, 13);
    // 0ed7db  push 7
    X86_AT(c, 0xed7dbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ed7dd  push 0x14
    X86_AT(c, 0xed7ddu);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0ed7df  push 4
    X86_AT(c, 0xed7dfu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed7e1  call 0xe7260
    X86_AT(c, 0xed7e1u);
    push32(c, 0xed7e6u); f_000e7260(c); X86_RET(c, 0xed7e6u);
    X86_TICK(c, 11);
    // 0ed7e6  push 0x3514
    X86_AT(c, 0xed7e6u);
    { uint32_t v = 0x3514u; push32(c, v); }
    // 0ed7eb  push 4
    X86_AT(c, 0xed7ebu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed7ed  call 0xe5654
    X86_AT(c, 0xed7edu);
    push32(c, 0xed7f2u); f_000e5654(c); X86_RET(c, 0xed7f2u);
    X86_TICK(c, 15);
    // 0ed7f2  add esp, 0x3c
    X86_AT(c, 0xed7f2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ed7f5  push 8
    X86_AT(c, 0xed7f5u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0ed7f7  push 0x14
    X86_AT(c, 0xed7f7u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0ed7f9  push 4
    X86_AT(c, 0xed7f9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed7fb  call 0xe7260
    X86_AT(c, 0xed7fbu);
    push32(c, 0xed800u); f_000e7260(c); X86_RET(c, 0xed800u);
    X86_TICK(c, 11);
    // 0ed800  push 0x355c
    X86_AT(c, 0xed800u);
    { uint32_t v = 0x355Cu; push32(c, v); }
    // 0ed805  push 4
    X86_AT(c, 0xed805u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed807  call 0xe5654
    X86_AT(c, 0xed807u);
    push32(c, 0xed80cu); f_000e5654(c); X86_RET(c, 0xed80cu);
    X86_TICK(c, 13);
    // 0ed80c  push 9
    X86_AT(c, 0xed80cu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0ed80e  push 0x14
    X86_AT(c, 0xed80eu);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0ed810  push 4
    X86_AT(c, 0xed810u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed812  call 0xe7260
    X86_AT(c, 0xed812u);
    push32(c, 0xed817u); f_000e7260(c); X86_RET(c, 0xed817u);
    X86_TICK(c, 11);
    // 0ed817  push 0x35a4
    X86_AT(c, 0xed817u);
    { uint32_t v = 0x35A4u; push32(c, v); }
    // 0ed81c  push 4
    X86_AT(c, 0xed81cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed81e  call 0xe5654
    X86_AT(c, 0xed81eu);
    push32(c, 0xed823u); f_000e5654(c); X86_RET(c, 0xed823u);
    X86_TICK(c, 13);
    // 0ed823  push 0xa
    X86_AT(c, 0xed823u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0ed825  push 0x14
    X86_AT(c, 0xed825u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0ed827  push 4
    X86_AT(c, 0xed827u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed829  call 0xe7260
    X86_AT(c, 0xed829u);
    push32(c, 0xed82eu); f_000e7260(c); X86_RET(c, 0xed82eu);
    X86_TICK(c, 11);
    // 0ed82e  push 0x35ec
    X86_AT(c, 0xed82eu);
    { uint32_t v = 0x35ECu; push32(c, v); }
    // 0ed833  push 4
    X86_AT(c, 0xed833u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed835  call 0xe5654
    X86_AT(c, 0xed835u);
    push32(c, 0xed83au); f_000e5654(c); X86_RET(c, 0xed83au);
    X86_TICK(c, 15);
    // 0ed83a  add esp, 0x3c
    X86_AT(c, 0xed83au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ed83d  push 0xb
    X86_AT(c, 0xed83du);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ed83f  push 0x14
    X86_AT(c, 0xed83fu);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0ed841  push 4
    X86_AT(c, 0xed841u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed843  call 0xe7260
    X86_AT(c, 0xed843u);
    push32(c, 0xed848u); f_000e7260(c); X86_RET(c, 0xed848u);
    X86_TICK(c, 11);
    // 0ed848  push 0x3634
    X86_AT(c, 0xed848u);
    { uint32_t v = 0x3634u; push32(c, v); }
    // 0ed84d  push 4
    X86_AT(c, 0xed84du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed84f  call 0xe5654
    X86_AT(c, 0xed84fu);
    push32(c, 0xed854u); f_000e5654(c); X86_RET(c, 0xed854u);
    X86_TICK(c, 13);
    // 0ed854  push 0xc
    X86_AT(c, 0xed854u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0ed856  push 0xe
    X86_AT(c, 0xed856u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ed858  push 4
    X86_AT(c, 0xed858u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed85a  call 0xe7260
    X86_AT(c, 0xed85au);
    push32(c, 0xed85fu); f_000e7260(c); X86_RET(c, 0xed85fu);
    X86_TICK(c, 13);
    // 0ed85f  add esp, 0x20
    X86_AT(c, 0xed85fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0ed862  push 0x367c
    X86_AT(c, 0xed862u);
    { uint32_t v = 0x367Cu; push32(c, v); }
    // 0ed867  push 4
    X86_AT(c, 0xed867u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed869  call 0xe5654
    X86_AT(c, 0xed869u);
    push32(c, 0xed86eu); f_000e5654(c); X86_RET(c, 0xed86eu);
    X86_TICK(c, 13);
    // 0ed86e  push 0xd
    X86_AT(c, 0xed86eu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0ed870  push 0xe
    X86_AT(c, 0xed870u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ed872  push 4
    X86_AT(c, 0xed872u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed874  call 0xe7260
    X86_AT(c, 0xed874u);
    push32(c, 0xed879u); f_000e7260(c); X86_RET(c, 0xed879u);
    X86_TICK(c, 11);
    // 0ed879  push 0x36b4
    X86_AT(c, 0xed879u);
    { uint32_t v = 0x36B4u; push32(c, v); }
    // 0ed87e  push 4
    X86_AT(c, 0xed87eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed880  call 0xe5654
    X86_AT(c, 0xed880u);
    push32(c, 0xed885u); f_000e5654(c); X86_RET(c, 0xed885u);
    X86_TICK(c, 13);
    // 0ed885  push 0xe
    X86_AT(c, 0xed885u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ed887  push 0xe
    X86_AT(c, 0xed887u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ed889  push 4
    X86_AT(c, 0xed889u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed88b  call 0xe7260
    X86_AT(c, 0xed88bu);
    push32(c, 0xed890u); f_000e7260(c); X86_RET(c, 0xed890u);
    X86_TICK(c, 11);
    // 0ed890  push 0x36ec
    X86_AT(c, 0xed890u);
    { uint32_t v = 0x36ECu; push32(c, v); }
    // 0ed895  push 4
    X86_AT(c, 0xed895u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed897  call 0xe5654
    X86_AT(c, 0xed897u);
    push32(c, 0xed89cu); f_000e5654(c); X86_RET(c, 0xed89cu);
    X86_TICK(c, 13);
    // 0ed89c  push 0xf
    X86_AT(c, 0xed89cu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ed89e  push 0xe
    X86_AT(c, 0xed89eu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ed8a0  push 4
    X86_AT(c, 0xed8a0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed8a2  call 0xe7260
    X86_AT(c, 0xed8a2u);
    push32(c, 0xed8a7u); f_000e7260(c); X86_RET(c, 0xed8a7u);
    X86_TICK(c, 13);
    // 0ed8a7  add esp, 0x3c
    X86_AT(c, 0xed8a7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ed8aa  push 0x3724
    X86_AT(c, 0xed8aau);
    { uint32_t v = 0x3724u; push32(c, v); }
    // 0ed8af  push 4
    X86_AT(c, 0xed8afu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed8b1  call 0xe5654
    X86_AT(c, 0xed8b1u);
    push32(c, 0xed8b6u); f_000e5654(c); X86_RET(c, 0xed8b6u);
    X86_TICK(c, 9);
    // 0ed8b6  push edi
    X86_AT(c, 0xed8b6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ed8b7  call 0xec140
    X86_AT(c, 0xed8b7u);
    push32(c, 0xed8bcu); f_000ec140(c); X86_RET(c, 0xed8bcu);
    X86_TICK(c, 9);
    // 0ed8bc  add esp, 0xc
    X86_AT(c, 0xed8bcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ed8bf  inc eax
    X86_AT(c, 0xed8bfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0ed8c0  jne 0xedb40
    X86_AT(c, 0xed8c0u);
    if (x86_cc(c, 5)) { goto L_edb40; }
    X86_TICK(c, 2);
    // 0ed8c6  sub esi, esi
    X86_AT(c, 0xed8c6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_ed8c8:
    X86_TICK(c, 7);
    // 0ed8c8  cmp esi, 9
    X86_AT(c, 0xed8c8u);
    (void)x86_sub(c, c.r[6], 0x9u, 0, 4);
    // 0ed8cb  jge 0xed8e6
    X86_AT(c, 0xed8cbu);
    if (x86_cc(c, 13)) { goto L_ed8e6; }
    X86_TICK(c, 24);
    // 0ed8cd  mov eax, edi
    X86_AT(c, 0xed8cdu);
    c.r[0] = c.r[7];
    // 0ed8cf  lea edx, [eax + eax*4]
    X86_AT(c, 0xed8cfu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ed8d2  lea edx, [eax + edx*2]
    X86_AT(c, 0xed8d2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ed8d5  shl edx, 5
    X86_AT(c, 0xed8d5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ed8d8  sub edx, eax
    X86_AT(c, 0xed8d8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed8da  add edx, esi
    X86_AT(c, 0xed8dau);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[6], 0, 4); }
    // 0ed8dc  mov byte ptr [edx + 0xcde4d], 0
    X86_AT(c, 0xed8dcu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE4Du)), 0x0u);
    // 0ed8e3  inc esi
    X86_AT(c, 0xed8e3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0ed8e4  jmp 0xed8c8
    X86_AT(c, 0xed8e4u);
    X86_POLL(c, 0xed8c8u); goto L_ed8c8;
L_ed8e6:
    X86_TICK(c, 226);
    // 0ed8e6  mov eax, edi
    X86_AT(c, 0xed8e6u);
    c.r[0] = c.r[7];
    // 0ed8e8  lea edx, [eax + eax*4]
    X86_AT(c, 0xed8e8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ed8eb  lea edx, [eax + edx*2]
    X86_AT(c, 0xed8ebu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ed8ee  shl edx, 5
    X86_AT(c, 0xed8eeu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ed8f1  sub edx, eax
    X86_AT(c, 0xed8f1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed8f3  sub eax, eax
    X86_AT(c, 0xed8f3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed8f5  mov byte ptr [edx + 0xcde4c], al
    X86_AT(c, 0xed8f5u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE4Cu)), g8(c, 0));
    // 0ed8fb  mov ecx, dword ptr [0x7a6b4]
    X86_AT(c, 0xed8fbu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x7A6B4u)));
    // 0ed901  mov dword ptr [edx + 0xcdf83], ecx
    X86_AT(c, 0xed901u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF83u)), c.r[1]);
    // 0ed907  mov dword ptr [edx + 0xcde56], eax
    X86_AT(c, 0xed907u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE56u)), c.r[0]);
    // 0ed90d  mov dword ptr [edx + 0xcde5a], eax
    X86_AT(c, 0xed90du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE5Au)), c.r[0]);
    // 0ed913  mov dword ptr [edx + 0xcde5e], eax
    X86_AT(c, 0xed913u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE5Eu)), c.r[0]);
    // 0ed919  mov dword ptr [edx + 0xcde62], eax
    X86_AT(c, 0xed919u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE62u)), c.r[0]);
    // 0ed91f  mov dword ptr [edx + 0xcde66], eax
    X86_AT(c, 0xed91fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE66u)), c.r[0]);
    // 0ed925  mov dword ptr [edx + 0xcde6a], eax
    X86_AT(c, 0xed925u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Au)), c.r[0]);
    // 0ed92b  mov dword ptr [edx + 0xcde6e], eax
    X86_AT(c, 0xed92bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Eu)), c.r[0]);
    // 0ed931  mov dword ptr [edx + 0xcde72], eax
    X86_AT(c, 0xed931u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE72u)), c.r[0]);
    // 0ed937  mov dword ptr [edx + 0xcde76], eax
    X86_AT(c, 0xed937u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE76u)), c.r[0]);
    // 0ed93d  mov byte ptr [edx + 0xcde7a], al
    X86_AT(c, 0xed93du);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Au)), g8(c, 0));
    // 0ed943  mov byte ptr [edx + 0xcde7b], al
    X86_AT(c, 0xed943u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Bu)), g8(c, 0));
    // 0ed949  mov byte ptr [edx + 0xcde7c], al
    X86_AT(c, 0xed949u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Cu)), g8(c, 0));
    // 0ed94f  mov ecx, 0x41
    X86_AT(c, 0xed94fu);
    c.r[1] = 0x41u;
    // 0ed954  mov dword ptr [edx + 0xcde7d], ecx
    X86_AT(c, 0xed954u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Du)), c.r[1]);
    // 0ed95a  mov dword ptr [edx + 0xcde81], eax
    X86_AT(c, 0xed95au);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE81u)), c.r[0]);
    // 0ed960  mov dword ptr [edx + 0xcde85], eax
    X86_AT(c, 0xed960u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE85u)), c.r[0]);
    // 0ed966  mov dword ptr [edx + 0xcde89], eax
    X86_AT(c, 0xed966u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE89u)), c.r[0]);
    // 0ed96c  mov dword ptr [edx + 0xcde8d], eax
    X86_AT(c, 0xed96cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE8Du)), c.r[0]);
    // 0ed972  mov dword ptr [edx + 0xcde91], eax
    X86_AT(c, 0xed972u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE91u)), c.r[0]);
    // 0ed978  mov dword ptr [edx + 0xcde95], eax
    X86_AT(c, 0xed978u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE95u)), c.r[0]);
    // 0ed97e  mov dword ptr [edx + 0xcde99], 2
    X86_AT(c, 0xed97eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u)), 0x2u);
    // 0ed988  mov dword ptr [edx + 0xcde9d], eax
    X86_AT(c, 0xed988u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE9Du)), c.r[0]);
    // 0ed98e  mov byte ptr [edx + 0xcdea1], cl
    X86_AT(c, 0xed98eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEA1u)), g8(c, 1));
    // 0ed994  mov byte ptr [edx + 0xcdebe], cl
    X86_AT(c, 0xed994u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEBEu)), g8(c, 1));
    // 0ed99a  mov dword ptr [edx + 0xcdea2], 1
    X86_AT(c, 0xed99au);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEA2u)), 0x1u);
    // 0ed9a4  mov dword ptr [edx + 0xcdea6], 1
    X86_AT(c, 0xed9a4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEA6u)), 0x1u);
    // 0ed9ae  mov dword ptr [edx + 0xcdeaa], eax
    X86_AT(c, 0xed9aeu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEAAu)), c.r[0]);
    // 0ed9b4  mov dword ptr [edx + 0xcdeae], eax
    X86_AT(c, 0xed9b4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEAEu)), c.r[0]);
    // 0ed9ba  mov dword ptr [edx + 0xcdeb2], eax
    X86_AT(c, 0xed9bau);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEB2u)), c.r[0]);
    // 0ed9c0  mov eax, edi
    X86_AT(c, 0xed9c0u);
    c.r[0] = c.r[7];
    // 0ed9c2  lea edx, [eax + eax*4]
    X86_AT(c, 0xed9c2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ed9c5  lea edx, [eax + edx*2]
    X86_AT(c, 0xed9c5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ed9c8  shl edx, 5
    X86_AT(c, 0xed9c8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ed9cb  sub edx, eax
    X86_AT(c, 0xed9cbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed9cd  sub eax, eax
    X86_AT(c, 0xed9cdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed9cf  mov dword ptr [edx + 0xcdeb6], eax
    X86_AT(c, 0xed9cfu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEB6u)), c.r[0]);
    // 0ed9d5  mov dword ptr [edx + 0xcdeba], eax
    X86_AT(c, 0xed9d5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEBAu)), c.r[0]);
    // 0ed9db  mov dword ptr [edx + 0xcdebf], 1
    X86_AT(c, 0xed9dbu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEBFu)), 0x1u);
    // 0ed9e5  mov dword ptr [edx + 0xcdec3], 1
    X86_AT(c, 0xed9e5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEC3u)), 0x1u);
    // 0ed9ef  mov dword ptr [edx + 0xcdec7], eax
    X86_AT(c, 0xed9efu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEC7u)), c.r[0]);
    // 0ed9f5  mov dword ptr [edx + 0xcdecb], eax
    X86_AT(c, 0xed9f5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDECBu)), c.r[0]);
    // 0ed9fb  mov dword ptr [edx + 0xcdecf], eax
    X86_AT(c, 0xed9fbu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDECFu)), c.r[0]);
    // 0eda01  mov dword ptr [edx + 0xcded3], eax
    X86_AT(c, 0xeda01u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDED3u)), c.r[0]);
    // 0eda07  mov dword ptr [edx + 0xcded7], eax
    X86_AT(c, 0xeda07u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDED7u)), c.r[0]);
    // 0eda0d  mov dword ptr [edx + 0xcdedb], eax
    X86_AT(c, 0xeda0du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEDBu)), c.r[0]);
    // 0eda13  mov dword ptr [edx + 0xcdedf], eax
    X86_AT(c, 0xeda13u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEDFu)), c.r[0]);
    // 0eda19  mov dword ptr [edx + 0xcdee3], eax
    X86_AT(c, 0xeda19u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEE3u)), c.r[0]);
    // 0eda1f  mov dword ptr [edx + 0xcdee7], eax
    X86_AT(c, 0xeda1fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEE7u)), c.r[0]);
    // 0eda25  mov dword ptr [edx + 0xcdeeb], eax
    X86_AT(c, 0xeda25u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEEBu)), c.r[0]);
    // 0eda2b  mov dword ptr [edx + 0xcdeef], eax
    X86_AT(c, 0xeda2bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEEFu)), c.r[0]);
    // 0eda31  mov dword ptr [edx + 0xcdef3], eax
    X86_AT(c, 0xeda31u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEF3u)), c.r[0]);
    // 0eda37  mov dword ptr [edx + 0xcdef7], eax
    X86_AT(c, 0xeda37u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEF7u)), c.r[0]);
    // 0eda3d  mov dword ptr [edx + 0xcdefb], eax
    X86_AT(c, 0xeda3du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEFBu)), c.r[0]);
    // 0eda43  mov dword ptr [edx + 0xcdeff], eax
    X86_AT(c, 0xeda43u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEFFu)), c.r[0]);
    // 0eda49  mov dword ptr [edx + 0xcdf03], eax
    X86_AT(c, 0xeda49u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF03u)), c.r[0]);
    // 0eda4f  mov dword ptr [edx + 0xcdf07], eax
    X86_AT(c, 0xeda4fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF07u)), c.r[0]);
    // 0eda55  mov dword ptr [edx + 0xcdf0b], eax
    X86_AT(c, 0xeda55u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF0Bu)), c.r[0]);
    // 0eda5b  mov dword ptr [edx + 0xcdf0f], eax
    X86_AT(c, 0xeda5bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF0Fu)), c.r[0]);
    // 0eda61  mov dword ptr [edx + 0xcdf13], eax
    X86_AT(c, 0xeda61u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF13u)), c.r[0]);
    // 0eda67  mov dword ptr [edx + 0xcdf17], eax
    X86_AT(c, 0xeda67u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF17u)), c.r[0]);
    // 0eda6d  mov dword ptr [edx + 0xcdf1b], eax
    X86_AT(c, 0xeda6du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF1Bu)), c.r[0]);
    // 0eda73  mov dword ptr [edx + 0xcdf1f], eax
    X86_AT(c, 0xeda73u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF1Fu)), c.r[0]);
    // 0eda79  mov dword ptr [edx + 0xcdf23], eax
    X86_AT(c, 0xeda79u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF23u)), c.r[0]);
    // 0eda7f  mov dword ptr [edx + 0xcdf27], eax
    X86_AT(c, 0xeda7fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF27u)), c.r[0]);
    // 0eda85  mov dword ptr [edx + 0xcdf2b], eax
    X86_AT(c, 0xeda85u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF2Bu)), c.r[0]);
    // 0eda8b  mov dword ptr [edx + 0xcdf2f], eax
    X86_AT(c, 0xeda8bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF2Fu)), c.r[0]);
    // 0eda91  mov dword ptr [edx + 0xcdf33], eax
    X86_AT(c, 0xeda91u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF33u)), c.r[0]);
    // 0eda97  mov eax, edi
    X86_AT(c, 0xeda97u);
    c.r[0] = c.r[7];
    // 0eda99  lea edx, [eax + eax*4]
    X86_AT(c, 0xeda99u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0eda9c  lea edx, [eax + edx*2]
    X86_AT(c, 0xeda9cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0eda9f  shl edx, 5
    X86_AT(c, 0xeda9fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0edaa2  sub edx, eax
    X86_AT(c, 0xedaa2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0edaa4  sub eax, eax
    X86_AT(c, 0xedaa4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0edaa6  mov dword ptr [edx + 0xcdf37], eax
    X86_AT(c, 0xedaa6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF37u)), c.r[0]);
    // 0edaac  mov dword ptr [edx + 0xcdf3b], eax
    X86_AT(c, 0xedaacu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF3Bu)), c.r[0]);
    // 0edab2  mov dword ptr [edx + 0xcdf3f], eax
    X86_AT(c, 0xedab2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF3Fu)), c.r[0]);
    // 0edab8  mov dword ptr [edx + 0xcdf43], eax
    X86_AT(c, 0xedab8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF43u)), c.r[0]);
    // 0edabe  mov dword ptr [edx + 0xcdf47], eax
    X86_AT(c, 0xedabeu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF47u)), c.r[0]);
    // 0edac4  mov dword ptr [edx + 0xcdf4b], eax
    X86_AT(c, 0xedac4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF4Bu)), c.r[0]);
    // 0edaca  mov dword ptr [edx + 0xcdf53], eax
    X86_AT(c, 0xedacau);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF53u)), c.r[0]);
    // 0edad0  mov dword ptr [edx + 0xcdf57], eax
    X86_AT(c, 0xedad0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u)), c.r[0]);
    // 0edad6  mov dword ptr [edx + 0xcdf5b], eax
    X86_AT(c, 0xedad6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF5Bu)), c.r[0]);
    // 0edadc  mov dword ptr [edx + 0xcdf5f], eax
    X86_AT(c, 0xedadcu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF5Fu)), c.r[0]);
    // 0edae2  mov dword ptr [edx + 0xcdf63], eax
    X86_AT(c, 0xedae2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF63u)), c.r[0]);
    // 0edae8  mov dword ptr [edx + 0xcdf67], eax
    X86_AT(c, 0xedae8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF67u)), c.r[0]);
    // 0edaee  mov ecx, 0x14
    X86_AT(c, 0xedaeeu);
    c.r[1] = 0x14u;
    // 0edaf3  mov dword ptr [edx + 0xcdf6b], ecx
    X86_AT(c, 0xedaf3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)), c.r[1]);
    // 0edaf9  mov dword ptr [edx + 0xcdf6f], ecx
    X86_AT(c, 0xedaf9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)), c.r[1]);
    // 0edaff  mov dword ptr [edx + 0xcdf73], eax
    X86_AT(c, 0xedaffu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF73u)), c.r[0]);
    // 0edb05  mov dword ptr [edx + 0xcdf77], eax
    X86_AT(c, 0xedb05u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF77u)), c.r[0]);
    // 0edb0b  mov dword ptr [edx + 0xcdf7b], eax
    X86_AT(c, 0xedb0bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF7Bu)), c.r[0]);
    // 0edb11  mov dword ptr [edx + 0xcdf7f], eax
    X86_AT(c, 0xedb11u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF7Fu)), c.r[0]);
    // 0edb17  mov dword ptr [edx + 0xcdf87], eax
    X86_AT(c, 0xedb17u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF87u)), c.r[0]);
    // 0edb1d  mov dword ptr [edx + 0xcdf8b], eax
    X86_AT(c, 0xedb1du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF8Bu)), c.r[0]);
    // 0edb23  mov dword ptr [edx + 0xcdf8f], eax
    X86_AT(c, 0xedb23u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF8Fu)), c.r[0]);
    // 0edb29  mov dword ptr [edx + 0xcdf93], eax
    X86_AT(c, 0xedb29u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF93u)), c.r[0]);
    // 0edb2f  mov dword ptr [edx + 0xcdf97], eax
    X86_AT(c, 0xedb2fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF97u)), c.r[0]);
    // 0edb35  mov dword ptr [edx + 0xcdf9b], eax
    X86_AT(c, 0xedb35u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF9Bu)), c.r[0]);
    // 0edb3b  jmp 0xed621
    X86_AT(c, 0xedb3bu);
    X86_POLL(c, 0xed621u); goto L_ed621;
L_edb40:
    X86_TICK(c, 9);
    // 0edb40  push 4
    X86_AT(c, 0xedb40u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edb42  call 0xe7584
    X86_AT(c, 0xedb42u);
    push32(c, 0xedb47u); f_000e7584(c); X86_RET(c, 0xedb47u);
    X86_TICK(c, 9);
    // 0edb47  push 4
    X86_AT(c, 0xedb47u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edb49  call 0xe693c
    X86_AT(c, 0xedb49u);
    push32(c, 0xedb4eu); f_000e693c(c); X86_RET(c, 0xedb4eu);
    X86_TICK(c, 2);
    // 0edb4e  add esp, 8
    X86_AT(c, 0xedb4eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_edb51:
    X86_TICK(c, 9);
    // 0edb51  push 0
    X86_AT(c, 0xedb51u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0edb53  call 0xe24d8
    X86_AT(c, 0xedb53u);
    push32(c, 0xedb58u); f_000e24d8(c); X86_RET(c, 0xedb58u);
    X86_TICK(c, 12);
    // 0edb58  xchg ebx, eax
    X86_AT(c, 0xedb58u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0edb59  add esp, 4
    X86_AT(c, 0xedb59u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0edb5c  cmp ebx, 0xffffffff
    X86_AT(c, 0xedb5cu);
    (void)x86_sub(c, c.r[3], 0xFFFFFFFFu, 0, 4);
    // 0edb5f  je 0xedb6a
    X86_AT(c, 0xedb5fu);
    if (x86_cc(c, 4)) { goto L_edb6a; }
    X86_TICK(c, 7);
    // 0edb61  and ebx, ebx
    X86_AT(c, 0xedb61u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0edb63  je 0xedb6a
    X86_AT(c, 0xedb63u);
    if (x86_cc(c, 4)) { goto L_edb6a; }
    X86_TICK(c, 7);
    // 0edb65  cmp ebx, 1
    X86_AT(c, 0xedb65u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 0edb68  jne 0xedb51
    X86_AT(c, 0xedb68u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xedb51u); goto L_edb51; }
L_edb6a:
    X86_TICK(c, 9);
    // 0edb6a  push 4
    X86_AT(c, 0xedb6au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edb6c  call 0xe693c
    X86_AT(c, 0xedb6cu);
    push32(c, 0xedb71u); f_000e693c(c); X86_RET(c, 0xedb71u);
    X86_TICK(c, 9);
    // 0edb71  add esp, 4
    X86_AT(c, 0xedb71u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0edb74  and ebx, ebx
    X86_AT(c, 0xedb74u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0edb76  je 0xedbea
    X86_AT(c, 0xedb76u);
    if (x86_cc(c, 4)) { goto L_edbea; }
    X86_TICK(c, 2);
    // 0edb78  sub esi, esi
    X86_AT(c, 0xedb78u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_edb7a:
    X86_TICK(c, 7);
    // 0edb7a  cmp esi, 9
    X86_AT(c, 0xedb7au);
    (void)x86_sub(c, c.r[6], 0x9u, 0, 4);
    // 0edb7d  jge 0xedb98
    X86_AT(c, 0xedb7du);
    if (x86_cc(c, 13)) { goto L_edb98; }
    X86_TICK(c, 24);
    // 0edb7f  mov eax, edi
    X86_AT(c, 0xedb7fu);
    c.r[0] = c.r[7];
    // 0edb81  lea edx, [eax + eax*4]
    X86_AT(c, 0xedb81u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0edb84  lea edx, [eax + edx*2]
    X86_AT(c, 0xedb84u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0edb87  shl edx, 5
    X86_AT(c, 0xedb87u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0edb8a  sub edx, eax
    X86_AT(c, 0xedb8au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0edb8c  add edx, esi
    X86_AT(c, 0xedb8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[6], 0, 4); }
    // 0edb8e  mov byte ptr [edx + 0xcde4d], 0
    X86_AT(c, 0xedb8eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE4Du)), 0x0u);
    // 0edb95  inc esi
    X86_AT(c, 0xedb95u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0edb96  jmp 0xedb7a
    X86_AT(c, 0xedb96u);
    X86_POLL(c, 0xedb7au); goto L_edb7a;
L_edb98:
    X86_TICK(c, 42);
    // 0edb98  mov eax, edi
    X86_AT(c, 0xedb98u);
    c.r[0] = c.r[7];
    // 0edb9a  lea edx, [eax + eax*4]
    X86_AT(c, 0xedb9au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0edb9d  lea edx, [eax + edx*2]
    X86_AT(c, 0xedb9du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0edba0  shl edx, 5
    X86_AT(c, 0xedba0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0edba3  sub edx, eax
    X86_AT(c, 0xedba3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0edba5  sub eax, eax
    X86_AT(c, 0xedba5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0edba7  mov dword ptr [edx + 0xcde62], eax
    X86_AT(c, 0xedba7u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE62u)), c.r[0]);
    // 0edbad  mov dword ptr [edx + 0xcde66], eax
    X86_AT(c, 0xedbadu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE66u)), c.r[0]);
    // 0edbb3  mov dword ptr [edx + 0xcde6a], eax
    X86_AT(c, 0xedbb3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Au)), c.r[0]);
    // 0edbb9  mov dword ptr [edx + 0xcde6e], eax
    X86_AT(c, 0xedbb9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Eu)), c.r[0]);
    // 0edbbf  mov dword ptr [edx + 0xcde72], eax
    X86_AT(c, 0xedbbfu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE72u)), c.r[0]);
    // 0edbc5  mov dword ptr [edx + 0xcde76], eax
    X86_AT(c, 0xedbc5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE76u)), c.r[0]);
    // 0edbcb  mov cl, 4
    X86_AT(c, 0xedbcbu);
    s8(c, 1, 0x4u);
    // 0edbcd  mov byte ptr [edx + 0xcde7a], cl
    X86_AT(c, 0xedbcdu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Au)), g8(c, 1));
    // 0edbd3  mov byte ptr [edx + 0xcde7b], cl
    X86_AT(c, 0xedbd3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Bu)), g8(c, 1));
    // 0edbd9  mov byte ptr [edx + 0xcde7c], cl
    X86_AT(c, 0xedbd9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Cu)), g8(c, 1));
    // 0edbdf  mov dword ptr [edx + 0xcde7d], eax
    X86_AT(c, 0xedbdfu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Du)), c.r[0]);
    // 0edbe5  jmp 0xed621
    X86_AT(c, 0xedbe5u);
    X86_POLL(c, 0xed621u); goto L_ed621;
L_edbea:
    X86_TICK(c, 9);
    // 0edbea  push 0
    X86_AT(c, 0xedbeau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0edbec  call 0x1017b0
    X86_AT(c, 0xedbecu);
    push32(c, 0xedbf1u); f_001017b0(c); X86_RET(c, 0xedbf1u);
    X86_TICK(c, 29);
    // 0edbf1  mov ecx, edi
    X86_AT(c, 0xedbf1u);
    c.r[1] = c.r[7];
    // 0edbf3  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xedbf3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0edbf6  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0xedbf6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
    // 0edbf9  lea eax, [ecx + ecx*4]
    X86_AT(c, 0xedbf9u);
    c.r[0] = (uint32_t)(c.r[1] + c.r[1] * 4);
    // 0edbfc  lea eax, [ecx + eax*2]
    X86_AT(c, 0xedbfcu);
    c.r[0] = (uint32_t)(c.r[1] + c.r[0] * 2);
    // 0edbff  shl eax, 5
    X86_AT(c, 0xedbffu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[0] = r; }
    // 0edc02  sub eax, ecx
    X86_AT(c, 0xedc02u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0edc04  push dword ptr [eax + 0xcde72]
    X86_AT(c, 0xedc04u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xCDE72u))); push32(c, v); }
    // 0edc0a  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xedc0au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0edc0d  call 0x102208
    X86_AT(c, 0xedc0du);
    push32(c, 0xedc12u); f_00102208(c); X86_RET(c, 0xedc12u);
    X86_TICK(c, 17);
    // 0edc12  push dword ptr [ebp - 8]
    X86_AT(c, 0xedc12u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0edc15  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xedc15u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0edc18  call 0x10228c
    X86_AT(c, 0xedc18u);
    push32(c, 0xedc1du); f_0010228c(c); X86_RET(c, 0xedc1du);
    X86_TICK(c, 7);
    // 0edc1d  call 0x101f70
    X86_AT(c, 0xedc1du);
    push32(c, 0xedc22u); f_00101f70(c); X86_RET(c, 0xedc22u);
    X86_TICK(c, 19);
    // 0edc22  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xedc22u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0edc25  movzx edx, byte ptr [eax + 0xcde7b]
    X86_AT(c, 0xedc25u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xCDE7Bu)));
    // 0edc2c  push edx
    X86_AT(c, 0xedc2cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0edc2d  call 0x102208
    X86_AT(c, 0xedc2du);
    push32(c, 0xedc32u); f_00102208(c); X86_RET(c, 0xedc32u);
    X86_TICK(c, 7);
    // 0edc32  call 0x101f70
    X86_AT(c, 0xedc32u);
    push32(c, 0xedc37u); f_00101f70(c); X86_RET(c, 0xedc37u);
    X86_TICK(c, 7);
    // 0edc37  call 0x102088
    X86_AT(c, 0xedc37u);
    push32(c, 0xedc3cu); f_00102088(c); X86_RET(c, 0xedc3cu);
    X86_TICK(c, 43);
    // 0edc3c  mov edx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xedc3cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0edc3f  mov dword ptr [edx + 0xcdf7f], eax
    X86_AT(c, 0xedc3fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF7Fu)), c.r[0]);
    // 0edc45  mov eax, 0x190
    X86_AT(c, 0xedc45u);
    c.r[0] = 0x190u;
    // 0edc4a  mov dword ptr [edx + 0xcde81], eax
    X86_AT(c, 0xedc4au);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE81u)), c.r[0]);
    // 0edc50  mov dword ptr [edx + 0xcde85], eax
    X86_AT(c, 0xedc50u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE85u)), c.r[0]);
    // 0edc56  mov dword ptr [edx + 0xcde91], eax
    X86_AT(c, 0xedc56u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE91u)), c.r[0]);
    // 0edc5c  mov dword ptr [edx + 0xcde89], 0
    X86_AT(c, 0xedc5cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE89u)), 0x0u);
    // 0edc66  mov dword ptr [edx + 0xcde8d], 0x9c40
    X86_AT(c, 0xedc66u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE8Du)), 0x9C40u);
    // 0edc70  mov al, 0x41
    X86_AT(c, 0xedc70u);
    s8(c, 0, 0x41u);
    // 0edc72  mov byte ptr [edx + 0xcdebe], al
    X86_AT(c, 0xedc72u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEBEu)), g8(c, 0));
    // 0edc78  mov dword ptr [edx + 0xcdf77], 0
    X86_AT(c, 0xedc78u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF77u)), 0x0u);
    // 0edc82  mov byte ptr [edx + 0xcdea1], al
    X86_AT(c, 0xedc82u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEA1u)), g8(c, 0));
    // 0edc88  mov dword ptr [edx + 0xcdf7b], 0
    X86_AT(c, 0xedc88u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF7Bu)), 0x0u);
    // 0edc92  mov eax, 0x14
    X86_AT(c, 0xedc92u);
    c.r[0] = 0x14u;
    // 0edc97  mov dword ptr [edx + 0xcdf6b], eax
    X86_AT(c, 0xedc97u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)), c.r[0]);
    // 0edc9d  mov dword ptr [edx + 0xcdf6f], eax
    X86_AT(c, 0xedc9du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)), c.r[0]);
    // 0edca3  mov dword ptr [0xceca0], edi
    X86_AT(c, 0xedca3u);
    wr32((c.sbase[3] + (uint32_t)(0xCECA0u)), c.r[7]);
    // 0edca9  call 0xeb174
    X86_AT(c, 0xedca9u);
    push32(c, 0xedcaeu); f_000eb174(c); X86_RET(c, 0xedcaeu);
    X86_TICK(c, 7);
    // 0edcae  call 0xe3a20
    X86_AT(c, 0xedcaeu);
    push32(c, 0xedcb3u); f_000e3a20(c); X86_RET(c, 0xedcb3u);
    X86_TICK(c, 7);
    // 0edcb3  call 0xeb990
    X86_AT(c, 0xedcb3u);
    push32(c, 0xedcb8u); f_000eb990(c); X86_RET(c, 0xedcb8u);
    X86_TICK(c, 9);
    // 0edcb8  push 4
    X86_AT(c, 0xedcb8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edcba  call 0xe693c
    X86_AT(c, 0xedcbau);
    push32(c, 0xedcbfu); f_000e693c(c); X86_RET(c, 0xedcbfu);
    X86_TICK(c, 13);
    // 0edcbf  push 3
    X86_AT(c, 0xedcbfu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0edcc1  push 0xf
    X86_AT(c, 0xedcc1u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0edcc3  push 4
    X86_AT(c, 0xedcc3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edcc5  call 0xe7260
    X86_AT(c, 0xedcc5u);
    push32(c, 0xedccau); f_000e7260(c); X86_RET(c, 0xedccau);
    X86_TICK(c, 11);
    // 0edcca  push 0x375c
    X86_AT(c, 0xedccau);
    { uint32_t v = 0x375Cu; push32(c, v); }
    // 0edccf  push 4
    X86_AT(c, 0xedccfu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edcd1  call 0xe6cb0
    X86_AT(c, 0xedcd1u);
    push32(c, 0xedcd6u); f_000e6cb0(c); X86_RET(c, 0xedcd6u);
    X86_TICK(c, 13);
    // 0edcd6  push 3
    X86_AT(c, 0xedcd6u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0edcd8  push 0xf
    X86_AT(c, 0xedcd8u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0edcda  push 4
    X86_AT(c, 0xedcdau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edcdc  call 0xe7260
    X86_AT(c, 0xedcdcu);
    push32(c, 0xedce1u); f_000e7260(c); X86_RET(c, 0xedce1u);
    X86_TICK(c, 17);
    // 0edce1  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xedce1u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0edce4  add eax, 0xcde4d
    X86_AT(c, 0xedce4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xCDE4Du, 0, 4); }
    // 0edce9  push eax
    X86_AT(c, 0xedce9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0edcea  push 4
    X86_AT(c, 0xedceau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edcec  call 0xe70ec
    X86_AT(c, 0xedcecu);
    push32(c, 0xedcf1u); f_000e70ec(c); X86_RET(c, 0xedcf1u);
    X86_TICK(c, 13);
    // 0edcf1  add esp, 0x30
    X86_AT(c, 0xedcf1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0edcf4  push 0x3794
    X86_AT(c, 0xedcf4u);
    { uint32_t v = 0x3794u; push32(c, v); }
    // 0edcf9  push 4
    X86_AT(c, 0xedcf9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edcfb  call 0xe5654
    X86_AT(c, 0xedcfbu);
    push32(c, 0xedd00u); f_000e5654(c); X86_RET(c, 0xedd00u);
    X86_TICK(c, 9);
    // 0edd00  push 0x37c0
    X86_AT(c, 0xedd00u);
    { uint32_t v = 0x37C0u; push32(c, v); }
    // 0edd05  call 0xe75f8
    X86_AT(c, 0xedd05u);
    push32(c, 0xedd0au); f_000e75f8(c); X86_RET(c, 0xedd0au);
    X86_TICK(c, 2);
    // 0edd0a  add esp, 0xc
    X86_AT(c, 0xedd0au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_edd0d:
    X86_TICK(c, 9);
    // 0edd0d  push 4
    X86_AT(c, 0xedd0du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edd0f  call 0xe4b60
    X86_AT(c, 0xedd0fu);
    push32(c, 0xedd14u); f_000e4b60(c); X86_RET(c, 0xedd14u);
    X86_TICK(c, 9);
    // 0edd14  add esp, 4
    X86_AT(c, 0xedd14u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0edd17  and al, al
    X86_AT(c, 0xedd17u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0edd19  je 0xedd0d
    X86_AT(c, 0xedd19u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xedd0du); goto L_edd0d; }
L_edd1b:
    X86_TICK(c, 9);
    // 0edd1b  push 2
    X86_AT(c, 0xedd1bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0edd1d  call 0xe6c68
    X86_AT(c, 0xedd1du);
    push32(c, 0xedd22u); f_000e6c68(c); X86_RET(c, 0xedd22u);
    X86_TICK(c, 9);
    // 0edd22  push 4
    X86_AT(c, 0xedd22u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edd24  call 0xe693c
    X86_AT(c, 0xedd24u);
    push32(c, 0xedd29u); f_000e693c(c); X86_RET(c, 0xedd29u);
    X86_TICK(c, 9);
    // 0edd29  add esp, 8
    X86_AT(c, 0xedd29u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0edd2c  jmp 0xed621
    X86_AT(c, 0xedd2cu);
    X86_POLL(c, 0xed621u); goto L_ed621;
L_edd31:
    X86_TICK(c, 28);
    // 0edd31  pop edi
    X86_AT(c, 0xedd31u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0edd32  pop esi
    X86_AT(c, 0xedd32u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0edd33  pop ebx
    X86_AT(c, 0xedd33u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0edd34  leave 
    X86_AT(c, 0xedd34u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0edd35  ret 
    X86_AT(c, 0xedd35u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xed621u, "ran off the end of a function");
}
void f_000edd38(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0edd38  push ebp
    X86_AT(c, 0xedd38u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0edd39  mov ebp, esp
    X86_AT(c, 0xedd39u);
    c.r[5] = c.r[4];
    // 0edd3b  sub esp, 0x238
    X86_AT(c, 0xedd3bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x238u, 0, 4); }
    // 0edd41  push ebx
    X86_AT(c, 0xedd41u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0edd42  push esi
    X86_AT(c, 0xedd42u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0edd43  push edi
    X86_AT(c, 0xedd43u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0edd44  push 0x17
    X86_AT(c, 0xedd44u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0edd46  push 0x4d
    X86_AT(c, 0xedd46u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0edd48  push 3
    X86_AT(c, 0xedd48u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0edd4a  push 0
    X86_AT(c, 0xedd4au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0edd4c  push 4
    X86_AT(c, 0xedd4cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edd4e  call 0xe739c
    X86_AT(c, 0xedd4eu);
    push32(c, 0xedd53u); f_000e739c(c); X86_RET(c, 0xedd53u);
    X86_TICK(c, 13);
    // 0edd53  push 3
    X86_AT(c, 0xedd53u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0edd55  push 2
    X86_AT(c, 0xedd55u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0edd57  push 4
    X86_AT(c, 0xedd57u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edd59  call 0xe7260
    X86_AT(c, 0xedd59u);
    push32(c, 0xedd5eu); f_000e7260(c); X86_RET(c, 0xedd5eu);
    X86_TICK(c, 11);
    // 0edd5e  push 0xe
    X86_AT(c, 0xedd5eu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0edd60  push 4
    X86_AT(c, 0xedd60u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edd62  call 0xe74d8
    X86_AT(c, 0xedd62u);
    push32(c, 0xedd67u); f_000e74d8(c); X86_RET(c, 0xedd67u);
    X86_TICK(c, 9);
    // 0edd67  push 4
    X86_AT(c, 0xedd67u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edd69  call 0xe693c
    X86_AT(c, 0xedd69u);
    push32(c, 0xedd6eu); f_000e693c(c); X86_RET(c, 0xedd6eu);
    X86_TICK(c, 11);
    // 0edd6e  push 0x37f4
    X86_AT(c, 0xedd6eu);
    { uint32_t v = 0x37F4u; push32(c, v); }
    // 0edd73  push 4
    X86_AT(c, 0xedd73u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edd75  call 0xe5654
    X86_AT(c, 0xedd75u);
    push32(c, 0xedd7au); f_000e5654(c); X86_RET(c, 0xedd7au);
    X86_TICK(c, 11);
    // 0edd7a  push 0xb
    X86_AT(c, 0xedd7au);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0edd7c  push 4
    X86_AT(c, 0xedd7cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edd7e  call 0xe74d8
    X86_AT(c, 0xedd7eu);
    push32(c, 0xedd83u); f_000e74d8(c); X86_RET(c, 0xedd83u);
    X86_TICK(c, 11);
    // 0edd83  add esp, 0x3c
    X86_AT(c, 0xedd83u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0edd86  push 4
    X86_AT(c, 0xedd86u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edd88  call 0xe693c
    X86_AT(c, 0xedd88u);
    push32(c, 0xedd8du); f_000e693c(c); X86_RET(c, 0xedd8du);
    X86_TICK(c, 13);
    // 0edd8d  push 3
    X86_AT(c, 0xedd8du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0edd8f  push 0x1f
    X86_AT(c, 0xedd8fu);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0edd91  push 4
    X86_AT(c, 0xedd91u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edd93  call 0xe7260
    X86_AT(c, 0xedd93u);
    push32(c, 0xedd98u); f_000e7260(c); X86_RET(c, 0xedd98u);
    X86_TICK(c, 11);
    // 0edd98  push 0x381c
    X86_AT(c, 0xedd98u);
    { uint32_t v = 0x381Cu; push32(c, v); }
    // 0edd9d  push 4
    X86_AT(c, 0xedd9du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edd9f  call 0xe5654
    X86_AT(c, 0xedd9fu);
    push32(c, 0xedda4u); f_000e5654(c); X86_RET(c, 0xedda4u);
    X86_TICK(c, 27);
    // 0edda4  lea eax, [ebp - 0x230]
    X86_AT(c, 0xedda4u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFDD0u);
    // 0eddaa  push eax
    X86_AT(c, 0xeddaau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eddab  push 4
    X86_AT(c, 0xeddabu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0eddad  push 7
    X86_AT(c, 0xeddadu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0eddaf  push 1
    X86_AT(c, 0xeddafu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eddb1  push 0xe
    X86_AT(c, 0xeddb1u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0eddb3  push 4
    X86_AT(c, 0xeddb3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0eddb5  push 4
    X86_AT(c, 0xeddb5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0eddb7  lea eax, [ebp - 0x20]
    X86_AT(c, 0xeddb7u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFE0u);
    // 0eddba  push eax
    X86_AT(c, 0xeddbau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eddbb  call 0xe50c8
    X86_AT(c, 0xeddbbu);
    push32(c, 0xeddc0u); f_000e50c8(c); X86_RET(c, 0xeddc0u);
    X86_TICK(c, 2);
    // 0eddc0  sub edi, edi
    X86_AT(c, 0xeddc0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_eddc2:
    X86_TICK(c, 9);
    // 0eddc2  add esp, 0x38
    X86_AT(c, 0xeddc2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0eddc5  cmp edi, 4
    X86_AT(c, 0xeddc5u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0eddc8  jge 0xede29
    X86_AT(c, 0xeddc8u);
    if (x86_cc(c, 13)) { goto L_ede29; }
    X86_TICK(c, 15);
    // 0eddca  lea eax, [edi + 4]
    X86_AT(c, 0xeddcau);
    c.r[0] = (uint32_t)(c.r[7] + 0x4u);
    // 0eddcd  push eax
    X86_AT(c, 0xeddcdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eddce  push 1
    X86_AT(c, 0xeddceu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eddd0  push 4
    X86_AT(c, 0xeddd0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0eddd2  call 0xe7260
    X86_AT(c, 0xeddd2u);
    push32(c, 0xeddd7u); f_000e7260(c); X86_RET(c, 0xeddd7u);
    X86_TICK(c, 17);
    // 0eddd7  push 2
    X86_AT(c, 0xeddd7u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0eddd9  lea eax, [edi + 1]
    X86_AT(c, 0xeddd9u);
    c.r[0] = (uint32_t)(c.r[7] + 0x1u);
    // 0edddc  push eax
    X86_AT(c, 0xedddcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0edddd  push 4
    X86_AT(c, 0xeddddu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edddf  mov dword ptr [ebp - 0x238], eax
    X86_AT(c, 0xedddfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFDC8u)), c.r[0]);
    // 0edde5  call 0xe5630
    X86_AT(c, 0xedde5u);
    push32(c, 0xeddeau); f_000e5630(c); X86_RET(c, 0xeddeau);
    X86_TICK(c, 11);
    // 0eddea  push 0x3866
    X86_AT(c, 0xeddeau);
    { uint32_t v = 0x3866u; push32(c, v); }
    // 0eddef  push 4
    X86_AT(c, 0xeddefu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0eddf1  call 0xe6cb0
    X86_AT(c, 0xeddf1u);
    push32(c, 0xeddf6u); f_000e6cb0(c); X86_RET(c, 0xeddf6u);
    X86_TICK(c, 40);
    // 0eddf6  lea eax, [edi + 0x41]
    X86_AT(c, 0xeddf6u);
    c.r[0] = (uint32_t)(c.r[7] + 0x41u);
    // 0eddf9  push eax
    X86_AT(c, 0xeddf9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eddfa  mov eax, edi
    X86_AT(c, 0xeddfau);
    c.r[0] = c.r[7];
    // 0eddfc  lea edx, [eax + eax*4]
    X86_AT(c, 0xeddfcu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0eddff  lea edx, [eax + edx*2]
    X86_AT(c, 0xeddffu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ede02  shl edx, 5
    X86_AT(c, 0xede02u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ede05  sub edx, eax
    X86_AT(c, 0xede05u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ede07  add edx, 0xcde4d
    X86_AT(c, 0xede07u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xCDE4Du, 0, 4); }
    // 0ede0d  push edx
    X86_AT(c, 0xede0du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0ede0e  push edx
    X86_AT(c, 0xede0eu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0ede0f  mov eax, edi
    X86_AT(c, 0xede0fu);
    c.r[0] = c.r[7];
    // 0ede11  add al, 0x41
    X86_AT(c, 0xede11u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x41u, 0, 1)); }
    // 0ede13  push eax
    X86_AT(c, 0xede13u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ede14  push edi
    X86_AT(c, 0xede14u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ede15  lea eax, [ebp - 0x230]
    X86_AT(c, 0xede15u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFDD0u);
    // 0ede1b  push eax
    X86_AT(c, 0xede1bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ede1c  call 0xe5104
    X86_AT(c, 0xede1cu);
    push32(c, 0xede21u); f_000e5104(c); X86_RET(c, 0xede21u);
    X86_TICK(c, 11);
    // 0ede21  mov edi, dword ptr [ebp - 0x238]
    X86_AT(c, 0xede21u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFDC8u)));
    // 0ede27  jmp 0xeddc2
    X86_AT(c, 0xede27u);
    X86_POLL(c, 0xeddc2u); goto L_eddc2;
L_ede29:
    X86_TICK(c, 9);
    // 0ede29  push 4
    X86_AT(c, 0xede29u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ede2b  call 0xe693c
    X86_AT(c, 0xede2bu);
    push32(c, 0xede30u); f_000e693c(c); X86_RET(c, 0xede30u);
    X86_TICK(c, 13);
    // 0ede30  push 3
    X86_AT(c, 0xede30u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ede32  push 0x1f
    X86_AT(c, 0xede32u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0ede34  push 4
    X86_AT(c, 0xede34u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ede36  call 0xe7260
    X86_AT(c, 0xede36u);
    push32(c, 0xede3bu); f_000e7260(c); X86_RET(c, 0xede3bu);
    X86_TICK(c, 11);
    // 0ede3b  push 0x386c
    X86_AT(c, 0xede3bu);
    { uint32_t v = 0x386Cu; push32(c, v); }
    // 0ede40  push 4
    X86_AT(c, 0xede40u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ede42  call 0xe5654
    X86_AT(c, 0xede42u);
    push32(c, 0xede47u); f_000e5654(c); X86_RET(c, 0xede47u);
    X86_TICK(c, 15);
    // 0ede47  push 1
    X86_AT(c, 0xede47u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ede49  lea eax, [ebp - 0x20]
    X86_AT(c, 0xede49u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFE0u);
    // 0ede4c  push eax
    X86_AT(c, 0xede4cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ede4d  push 4
    X86_AT(c, 0xede4du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ede4f  call 0xe553c
    X86_AT(c, 0xede4fu);
    push32(c, 0xede54u); f_000e553c(c); X86_RET(c, 0xede54u);
    X86_TICK(c, 11);
    // 0ede54  mov byte ptr [ebp - 0x231], al
    X86_AT(c, 0xede54u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFDCFu)), g8(c, 0));
    // 0ede5a  add esp, 0x24
    X86_AT(c, 0xede5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0ede5d  dec al
    X86_AT(c, 0xede5du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0ede5f  jne 0xedeb8
    X86_AT(c, 0xede5fu);
    if (x86_cc(c, 5)) { goto L_edeb8; }
    X86_TICK(c, 13);
    // 0ede61  push 3
    X86_AT(c, 0xede61u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ede63  push 0x1f
    X86_AT(c, 0xede63u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0ede65  push 4
    X86_AT(c, 0xede65u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ede67  call 0xe7260
    X86_AT(c, 0xede67u);
    push32(c, 0xede6cu); f_000e7260(c); X86_RET(c, 0xede6cu);
    X86_TICK(c, 11);
    // 0ede6c  push 0x38bc
    X86_AT(c, 0xede6cu);
    { uint32_t v = 0x38BCu; push32(c, v); }
    // 0ede71  push 4
    X86_AT(c, 0xede71u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ede73  call 0xe5654
    X86_AT(c, 0xede73u);
    push32(c, 0xede78u); f_000e5654(c); X86_RET(c, 0xede78u);
    X86_TICK(c, 9);
    // 0ede78  push 0x390c
    X86_AT(c, 0xede78u);
    { uint32_t v = 0x390Cu; push32(c, v); }
    // 0ede7d  call 0xe75f8
    X86_AT(c, 0xede7du);
    push32(c, 0xede82u); f_000e75f8(c); X86_RET(c, 0xede82u);
    X86_TICK(c, 2);
    // 0ede82  add esp, 0x18
    X86_AT(c, 0xede82u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_ede85:
    X86_TICK(c, 9);
    // 0ede85  push 4
    X86_AT(c, 0xede85u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ede87  call 0xe4b60
    X86_AT(c, 0xede87u);
    push32(c, 0xede8cu); f_000e4b60(c); X86_RET(c, 0xede8cu);
    X86_TICK(c, 9);
    // 0ede8c  add esp, 4
    X86_AT(c, 0xede8cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ede8f  and al, al
    X86_AT(c, 0xede8fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0ede91  je 0xede85
    X86_AT(c, 0xede91u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xede85u); goto L_ede85; }
    X86_TICK(c, 9);
    // 0ede93  push 2
    X86_AT(c, 0xede93u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ede95  call 0xe6c68
    X86_AT(c, 0xede95u);
    push32(c, 0xede9au); f_000e6c68(c); X86_RET(c, 0xede9au);
    X86_TICK(c, 9);
    // 0ede9a  push 4
    X86_AT(c, 0xede9au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ede9c  call 0xe693c
    X86_AT(c, 0xede9cu);
    push32(c, 0xedea1u); f_000e693c(c); X86_RET(c, 0xedea1u);
    X86_TICK(c, 17);
    // 0edea1  push 0x17
    X86_AT(c, 0xedea1u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0edea3  push 0x4d
    X86_AT(c, 0xedea3u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0edea5  push 3
    X86_AT(c, 0xedea5u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0edea7  push 0
    X86_AT(c, 0xedea7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0edea9  push 4
    X86_AT(c, 0xedea9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edeab  call 0xe739c
    X86_AT(c, 0xedeabu);
    push32(c, 0xedeb0u); f_000e739c(c); X86_RET(c, 0xedeb0u);
    X86_TICK(c, 9);
    // 0edeb0  add esp, 0x1c
    X86_AT(c, 0xedeb0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0edeb3  jmp 0xee06c
    X86_AT(c, 0xedeb3u);
    goto L_ee06c;
L_edeb8:
    X86_TICK(c, 11);
    // 0edeb8  mov al, byte ptr [ebp - 0x231]
    X86_AT(c, 0xedeb8u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFDCFu))));
    // 0edebe  cmp al, 0x41
    X86_AT(c, 0xedebeu);
    (void)x86_sub(c, g8(c, 0), 0x41u, 0, 1);
    // 0edec0  jb 0xede29
    X86_AT(c, 0xedec0u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xede29u); goto L_ede29; }
    X86_TICK(c, 34);
    // 0edec6  sub byte ptr [ebp - 0x231], 0x41
    X86_AT(c, 0xedec6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFDCFu)); uint32_t v = rd8(ea); wr8(ea, x86_sub(c, v, 0x41u, 0, 1)); }
    // 0edecd  movzx eax, byte ptr [ebp - 0x231]
    X86_AT(c, 0xedecdu);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFDCFu)));
    // 0eded4  lea edx, [eax + eax*4]
    X86_AT(c, 0xeded4u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0eded7  lea edx, [eax + edx*2]
    X86_AT(c, 0xeded7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ededa  shl edx, 5
    X86_AT(c, 0xededau);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ededd  sub edx, eax
    X86_AT(c, 0xededdu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ededf  cmp byte ptr [edx + 0xcde4d], 0
    X86_AT(c, 0xededfu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE4Du))), 0x0u, 0, 1);
    // 0edee6  jne 0xedf1f
    X86_AT(c, 0xedee6u);
    if (x86_cc(c, 5)) { goto L_edf1f; }
    X86_TICK(c, 13);
    // 0edee8  push 3
    X86_AT(c, 0xedee8u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0edeea  push 0x1f
    X86_AT(c, 0xedeeau);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0edeec  push 4
    X86_AT(c, 0xedeecu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edeee  call 0xe7260
    X86_AT(c, 0xedeeeu);
    push32(c, 0xedef3u); f_000e7260(c); X86_RET(c, 0xedef3u);
    X86_TICK(c, 11);
    // 0edef3  push 0x3940
    X86_AT(c, 0xedef3u);
    { uint32_t v = 0x3940u; push32(c, v); }
    // 0edef8  push 4
    X86_AT(c, 0xedef8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edefa  call 0xe5654
    X86_AT(c, 0xedefau);
    push32(c, 0xedeffu); f_000e5654(c); X86_RET(c, 0xedeffu);
    X86_TICK(c, 9);
    // 0edeff  push 0x398c
    X86_AT(c, 0xedeffu);
    { uint32_t v = 0x398Cu; push32(c, v); }
    // 0edf04  call 0xe75f8
    X86_AT(c, 0xedf04u);
    push32(c, 0xedf09u); f_000e75f8(c); X86_RET(c, 0xedf09u);
    X86_TICK(c, 2);
    // 0edf09  add esp, 0x18
    X86_AT(c, 0xedf09u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_edf0c:
    X86_TICK(c, 9);
    // 0edf0c  push 4
    X86_AT(c, 0xedf0cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edf0e  call 0xe4b60
    X86_AT(c, 0xedf0eu);
    push32(c, 0xedf13u); f_000e4b60(c); X86_RET(c, 0xedf13u);
    X86_TICK(c, 9);
    // 0edf13  add esp, 4
    X86_AT(c, 0xedf13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0edf16  and al, al
    X86_AT(c, 0xedf16u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0edf18  je 0xedf0c
    X86_AT(c, 0xedf18u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xedf0cu); goto L_edf0c; }
    X86_TICK(c, 7);
    // 0edf1a  jmp 0xee056
    X86_AT(c, 0xedf1au);
    goto L_ee056;
L_edf1f:
    X86_TICK(c, 13);
    // 0edf1f  push 3
    X86_AT(c, 0xedf1fu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0edf21  push 0x1f
    X86_AT(c, 0xedf21u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0edf23  push 4
    X86_AT(c, 0xedf23u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edf25  call 0xe7260
    X86_AT(c, 0xedf25u);
    push32(c, 0xedf2au); f_000e7260(c); X86_RET(c, 0xedf2au);
    X86_TICK(c, 28);
    // 0edf2a  movzx eax, byte ptr [ebp - 0x231]
    X86_AT(c, 0xedf2au);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFDCFu)));
    // 0edf31  lea edx, [eax + eax*4]
    X86_AT(c, 0xedf31u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0edf34  lea edx, [eax + edx*2]
    X86_AT(c, 0xedf34u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0edf37  shl edx, 5
    X86_AT(c, 0xedf37u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0edf3a  sub edx, eax
    X86_AT(c, 0xedf3au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0edf3c  add edx, 0xcde4d
    X86_AT(c, 0xedf3cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xCDE4Du, 0, 4); }
    // 0edf42  push edx
    X86_AT(c, 0xedf42u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0edf43  push 4
    X86_AT(c, 0xedf43u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edf45  call 0xe70ec
    X86_AT(c, 0xedf45u);
    push32(c, 0xedf4au); f_000e70ec(c); X86_RET(c, 0xedf4au);
    X86_TICK(c, 11);
    // 0edf4a  push 0x39c0
    X86_AT(c, 0xedf4au);
    { uint32_t v = 0x39C0u; push32(c, v); }
    // 0edf4f  push 4
    X86_AT(c, 0xedf4fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edf51  call 0xe5654
    X86_AT(c, 0xedf51u);
    push32(c, 0xedf56u); f_000e5654(c); X86_RET(c, 0xedf56u);
    X86_TICK(c, 9);
    // 0edf56  push 0x3a04
    X86_AT(c, 0xedf56u);
    { uint32_t v = 0x3A04u; push32(c, v); }
    // 0edf5b  call 0xe75f8
    X86_AT(c, 0xedf5bu);
    push32(c, 0xedf60u); f_000e75f8(c); X86_RET(c, 0xedf60u);
    X86_TICK(c, 2);
    // 0edf60  add esp, 0x20
    X86_AT(c, 0xedf60u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_edf63:
    X86_TICK(c, 9);
    // 0edf63  push 4
    X86_AT(c, 0xedf63u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edf65  call 0xe4b60
    X86_AT(c, 0xedf65u);
    push32(c, 0xedf6au); f_000e4b60(c); X86_RET(c, 0xedf6au);
    X86_TICK(c, 12);
    // 0edf6a  xchg ebx, eax
    X86_AT(c, 0xedf6au);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0edf6b  add esp, 4
    X86_AT(c, 0xedf6bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0edf6e  cmp bl, 0x59
    X86_AT(c, 0xedf6eu);
    (void)x86_sub(c, g8(c, 3), 0x59u, 0, 1);
    // 0edf71  je 0xedf7d
    X86_AT(c, 0xedf71u);
    if (x86_cc(c, 4)) { goto L_edf7d; }
    X86_TICK(c, 7);
    // 0edf73  cmp bl, 0x4e
    X86_AT(c, 0xedf73u);
    (void)x86_sub(c, g8(c, 3), 0x4Eu, 0, 1);
    // 0edf76  je 0xedf7d
    X86_AT(c, 0xedf76u);
    if (x86_cc(c, 4)) { goto L_edf7d; }
    X86_TICK(c, 7);
    // 0edf78  cmp bl, 1
    X86_AT(c, 0xedf78u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0edf7b  jne 0xedf63
    X86_AT(c, 0xedf7bu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xedf63u); goto L_edf63; }
L_edf7d:
    X86_TICK(c, 9);
    // 0edf7d  push 2
    X86_AT(c, 0xedf7du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0edf7f  call 0xe6c68
    X86_AT(c, 0xedf7fu);
    push32(c, 0xedf84u); f_000e6c68(c); X86_RET(c, 0xedf84u);
    X86_TICK(c, 9);
    // 0edf84  push 4
    X86_AT(c, 0xedf84u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edf86  call 0xe693c
    X86_AT(c, 0xedf86u);
    push32(c, 0xedf8bu); f_000e693c(c); X86_RET(c, 0xedf8bu);
    X86_TICK(c, 9);
    // 0edf8b  add esp, 8
    X86_AT(c, 0xedf8bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0edf8e  cmp bl, 0x59
    X86_AT(c, 0xedf8eu);
    (void)x86_sub(c, g8(c, 3), 0x59u, 0, 1);
    // 0edf91  jne 0xede29
    X86_AT(c, 0xedf91u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xede29u); goto L_ede29; }
L_edf97:
    X86_TICK(c, 9);
    // 0edf97  push 0
    X86_AT(c, 0xedf97u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0edf99  call 0xe24d8
    X86_AT(c, 0xedf99u);
    push32(c, 0xedf9eu); f_000e24d8(c); X86_RET(c, 0xedf9eu);
    X86_TICK(c, 12);
    // 0edf9e  xchg esi, eax
    X86_AT(c, 0xedf9eu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0edf9f  push 4
    X86_AT(c, 0xedf9fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edfa1  call 0xe693c
    X86_AT(c, 0xedfa1u);
    push32(c, 0xedfa6u); f_000e693c(c); X86_RET(c, 0xedfa6u);
    X86_TICK(c, 9);
    // 0edfa6  add esp, 8
    X86_AT(c, 0xedfa6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0edfa9  cmp esi, 0xffffffff
    X86_AT(c, 0xedfa9u);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0edfac  je 0xedfb7
    X86_AT(c, 0xedfacu);
    if (x86_cc(c, 4)) { goto L_edfb7; }
    X86_TICK(c, 7);
    // 0edfae  and esi, esi
    X86_AT(c, 0xedfaeu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0edfb0  je 0xedfb7
    X86_AT(c, 0xedfb0u);
    if (x86_cc(c, 4)) { goto L_edfb7; }
    X86_TICK(c, 7);
    // 0edfb2  cmp esi, 1
    X86_AT(c, 0xedfb2u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0edfb5  jne 0xedf97
    X86_AT(c, 0xedfb5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xedf97u); goto L_edf97; }
L_edfb7:
    X86_TICK(c, 7);
    // 0edfb7  and esi, esi
    X86_AT(c, 0xedfb7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0edfb9  jne 0xede29
    X86_AT(c, 0xedfb9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xede29u); goto L_ede29; }
    X86_TICK(c, 28);
    // 0edfbf  movzx edi, byte ptr [ebp - 0x231]
    X86_AT(c, 0xedfbfu);
    c.r[7] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFDCFu)));
    // 0edfc6  mov eax, edi
    X86_AT(c, 0xedfc6u);
    c.r[0] = c.r[7];
    // 0edfc8  lea edx, [eax + eax*4]
    X86_AT(c, 0xedfc8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0edfcb  lea edx, [eax + edx*2]
    X86_AT(c, 0xedfcbu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0edfce  shl edx, 5
    X86_AT(c, 0xedfceu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0edfd1  sub edx, eax
    X86_AT(c, 0xedfd1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0edfd3  mov byte ptr [edx + 0xcde4d], 0
    X86_AT(c, 0xedfd3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE4Du)), 0x0u);
    // 0edfda  mov dword ptr [ebp - 0x238], edx
    X86_AT(c, 0xedfdau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFDC8u)), c.r[2]);
    // 0edfe0  call 0xeb174
    X86_AT(c, 0xedfe0u);
    push32(c, 0xedfe5u); f_000eb174(c); X86_RET(c, 0xedfe5u);
    X86_TICK(c, 33);
    // 0edfe5  lea eax, [edi + 0x41]
    X86_AT(c, 0xedfe5u);
    c.r[0] = (uint32_t)(c.r[7] + 0x41u);
    // 0edfe8  push eax
    X86_AT(c, 0xedfe8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0edfe9  mov eax, dword ptr [ebp - 0x238]
    X86_AT(c, 0xedfe9u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFDC8u)));
    // 0edfef  add eax, 0xcde4d
    X86_AT(c, 0xedfefu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xCDE4Du, 0, 4); }
    // 0edff4  push eax
    X86_AT(c, 0xedff4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0edff5  push eax
    X86_AT(c, 0xedff5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0edff6  mov eax, edi
    X86_AT(c, 0xedff6u);
    c.r[0] = c.r[7];
    // 0edff8  add al, 0x41
    X86_AT(c, 0xedff8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x41u, 0, 1)); }
    // 0edffa  push eax
    X86_AT(c, 0xedffau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0edffb  push edi
    X86_AT(c, 0xedffbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0edffc  lea eax, [ebp - 0x230]
    X86_AT(c, 0xedffcu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFDD0u);
    // 0ee002  push eax
    X86_AT(c, 0xee002u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee003  call 0xe5104
    X86_AT(c, 0xee003u);
    push32(c, 0xee008u); f_000e5104(c); X86_RET(c, 0xee008u);
    X86_TICK(c, 19);
    // 0ee008  lea eax, [edi + 4]
    X86_AT(c, 0xee008u);
    c.r[0] = (uint32_t)(c.r[7] + 0x4u);
    // 0ee00b  push eax
    X86_AT(c, 0xee00bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee00c  push 0x4d
    X86_AT(c, 0xee00cu);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0ee00e  push eax
    X86_AT(c, 0xee00eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee00f  push 7
    X86_AT(c, 0xee00fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ee011  push 4
    X86_AT(c, 0xee011u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee013  call 0xe739c
    X86_AT(c, 0xee013u);
    push32(c, 0xee018u); f_000e739c(c); X86_RET(c, 0xee018u);
    X86_TICK(c, 11);
    // 0ee018  lea eax, [ebp - 0x20]
    X86_AT(c, 0xee018u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFE0u);
    // 0ee01b  push eax
    X86_AT(c, 0xee01bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee01c  call 0xe52a8
    X86_AT(c, 0xee01cu);
    push32(c, 0xee021u); f_000e52a8(c); X86_RET(c, 0xee021u);
    X86_TICK(c, 13);
    // 0ee021  push 3
    X86_AT(c, 0xee021u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ee023  push 0x1f
    X86_AT(c, 0xee023u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0ee025  push 4
    X86_AT(c, 0xee025u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee027  call 0xe7260
    X86_AT(c, 0xee027u);
    push32(c, 0xee02cu); f_000e7260(c); X86_RET(c, 0xee02cu);
    X86_TICK(c, 13);
    // 0ee02c  add esp, 0x3c
    X86_AT(c, 0xee02cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ee02f  push 0x3a30
    X86_AT(c, 0xee02fu);
    { uint32_t v = 0x3A30u; push32(c, v); }
    // 0ee034  push 4
    X86_AT(c, 0xee034u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee036  call 0xe5654
    X86_AT(c, 0xee036u);
    push32(c, 0xee03bu); f_000e5654(c); X86_RET(c, 0xee03bu);
    X86_TICK(c, 9);
    // 0ee03b  push 0x3a88
    X86_AT(c, 0xee03bu);
    { uint32_t v = 0x3A88u; push32(c, v); }
    // 0ee040  call 0xe75f8
    X86_AT(c, 0xee040u);
    push32(c, 0xee045u); f_000e75f8(c); X86_RET(c, 0xee045u);
    X86_TICK(c, 2);
    // 0ee045  add esp, 0xc
    X86_AT(c, 0xee045u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_ee048:
    X86_TICK(c, 9);
    // 0ee048  push 4
    X86_AT(c, 0xee048u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee04a  call 0xe4b60
    X86_AT(c, 0xee04au);
    push32(c, 0xee04fu); f_000e4b60(c); X86_RET(c, 0xee04fu);
    X86_TICK(c, 9);
    // 0ee04f  add esp, 4
    X86_AT(c, 0xee04fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ee052  and al, al
    X86_AT(c, 0xee052u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0ee054  je 0xee048
    X86_AT(c, 0xee054u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xee048u); goto L_ee048; }
L_ee056:
    X86_TICK(c, 9);
    // 0ee056  push 2
    X86_AT(c, 0xee056u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ee058  call 0xe6c68
    X86_AT(c, 0xee058u);
    push32(c, 0xee05du); f_000e6c68(c); X86_RET(c, 0xee05du);
    X86_TICK(c, 9);
    // 0ee05d  push 4
    X86_AT(c, 0xee05du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee05f  call 0xe693c
    X86_AT(c, 0xee05fu);
    push32(c, 0xee064u); f_000e693c(c); X86_RET(c, 0xee064u);
    X86_TICK(c, 9);
    // 0ee064  add esp, 8
    X86_AT(c, 0xee064u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ee067  jmp 0xede29
    X86_AT(c, 0xee067u);
    X86_POLL(c, 0xede29u); goto L_ede29;
L_ee06c:
    X86_TICK(c, 28);
    // 0ee06c  pop edi
    X86_AT(c, 0xee06cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ee06d  pop esi
    X86_AT(c, 0xee06du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ee06e  pop ebx
    X86_AT(c, 0xee06eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ee06f  leave 
    X86_AT(c, 0xee06fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ee070  ret 
    X86_AT(c, 0xee070u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xedd38u, "ran off the end of a function");
}
void f_000ee074(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0ee074  push ebp
    X86_AT(c, 0xee074u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ee075  mov ebp, esp
    X86_AT(c, 0xee075u);
    c.r[5] = c.r[4];
    // 0ee077  push eax
    X86_AT(c, 0xee077u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee078  push ebx
    X86_AT(c, 0xee078u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ee079  push esi
    X86_AT(c, 0xee079u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ee07a  push edi
    X86_AT(c, 0xee07au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ee07b  push 4
    X86_AT(c, 0xee07bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee07d  push 0x4d
    X86_AT(c, 0xee07du);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0ee07f  push 3
    X86_AT(c, 0xee07fu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ee081  push 0
    X86_AT(c, 0xee081u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ee083  push 4
    X86_AT(c, 0xee083u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee085  call 0xe739c
    X86_AT(c, 0xee085u);
    push32(c, 0xee08au); f_000e739c(c); X86_RET(c, 0xee08au);
    X86_TICK(c, 13);
    // 0ee08a  push 3
    X86_AT(c, 0xee08au);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ee08c  push 1
    X86_AT(c, 0xee08cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ee08e  push 4
    X86_AT(c, 0xee08eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee090  call 0xe7260
    X86_AT(c, 0xee090u);
    push32(c, 0xee095u); f_000e7260(c); X86_RET(c, 0xee095u);
    X86_TICK(c, 11);
    // 0ee095  push 0x3abc
    X86_AT(c, 0xee095u);
    { uint32_t v = 0x3ABCu; push32(c, v); }
    // 0ee09a  push 4
    X86_AT(c, 0xee09au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee09c  call 0xe5654
    X86_AT(c, 0xee09cu);
    push32(c, 0xee0a1u); f_000e5654(c); X86_RET(c, 0xee0a1u);
    X86_TICK(c, 2);
    // 0ee0a1  add esp, 0x28
    X86_AT(c, 0xee0a1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
L_ee0a4:
    X86_TICK(c, 17);
    // 0ee0a4  push 0x17
    X86_AT(c, 0xee0a4u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0ee0a6  push 0x4d
    X86_AT(c, 0xee0a6u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0ee0a8  push 4
    X86_AT(c, 0xee0a8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee0aa  push 0
    X86_AT(c, 0xee0aau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ee0ac  push 4
    X86_AT(c, 0xee0acu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee0ae  call 0xe739c
    X86_AT(c, 0xee0aeu);
    push32(c, 0xee0b3u); f_000e739c(c); X86_RET(c, 0xee0b3u);
    X86_TICK(c, 13);
    // 0ee0b3  push 4
    X86_AT(c, 0xee0b3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee0b5  push 1
    X86_AT(c, 0xee0b5u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ee0b7  push 4
    X86_AT(c, 0xee0b7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee0b9  call 0xe7260
    X86_AT(c, 0xee0b9u);
    push32(c, 0xee0beu); f_000e7260(c); X86_RET(c, 0xee0beu);
    X86_TICK(c, 11);
    // 0ee0be  push 0xcf1f4
    X86_AT(c, 0xee0beu);
    { uint32_t v = 0xCF1F4u; push32(c, v); }
    // 0ee0c3  push 4
    X86_AT(c, 0xee0c3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee0c5  call 0xe5654
    X86_AT(c, 0xee0c5u);
    push32(c, 0xee0cau); f_000e5654(c); X86_RET(c, 0xee0cau);
    X86_TICK(c, 2);
    // 0ee0ca  add esp, 0x28
    X86_AT(c, 0xee0cau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
L_ee0cd:
    X86_TICK(c, 13);
    // 0ee0cd  push 4
    X86_AT(c, 0xee0cdu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee0cf  push 0x18
    X86_AT(c, 0xee0cfu);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0ee0d1  push 4
    X86_AT(c, 0xee0d1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee0d3  call 0xe7260
    X86_AT(c, 0xee0d3u);
    push32(c, 0xee0d8u); f_000e7260(c); X86_RET(c, 0xee0d8u);
    X86_TICK(c, 9);
    // 0ee0d8  push 4
    X86_AT(c, 0xee0d8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee0da  call 0xe756c
    X86_AT(c, 0xee0dau);
    push32(c, 0xee0dfu); f_000e756c(c); X86_RET(c, 0xee0dfu);
    X86_TICK(c, 11);
    // 0ee0df  push 0xe
    X86_AT(c, 0xee0dfu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ee0e1  push 4
    X86_AT(c, 0xee0e1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee0e3  call 0xe74d8
    X86_AT(c, 0xee0e3u);
    push32(c, 0xee0e8u); f_000e74d8(c); X86_RET(c, 0xee0e8u);
    X86_TICK(c, 9);
    // 0ee0e8  push 4
    X86_AT(c, 0xee0e8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee0ea  call 0xe693c
    X86_AT(c, 0xee0eau);
    push32(c, 0xee0efu); f_000e693c(c); X86_RET(c, 0xee0efu);
    X86_TICK(c, 9);
    // 0ee0ef  push 4
    X86_AT(c, 0xee0efu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee0f1  call 0xe1b10
    X86_AT(c, 0xee0f1u);
    push32(c, 0xee0f6u); f_000e1b10(c); X86_RET(c, 0xee0f6u);
    X86_TICK(c, 14);
    // 0ee0f6  xchg edi, eax
    X86_AT(c, 0xee0f6u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0ee0f7  push 0xb
    X86_AT(c, 0xee0f7u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee0f9  push 4
    X86_AT(c, 0xee0f9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee0fb  call 0xe74d8
    X86_AT(c, 0xee0fbu);
    push32(c, 0xee100u); f_000e74d8(c); X86_RET(c, 0xee100u);
    X86_TICK(c, 9);
    // 0ee100  push 4
    X86_AT(c, 0xee100u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee102  call 0xe693c
    X86_AT(c, 0xee102u);
    push32(c, 0xee107u); f_000e693c(c); X86_RET(c, 0xee107u);
    X86_TICK(c, 9);
    // 0ee107  add esp, 0x2c
    X86_AT(c, 0xee107u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0ee10a  cmp edi, 0xffffffff
    X86_AT(c, 0xee10au);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0ee10d  je 0xee113
    X86_AT(c, 0xee10du);
    if (x86_cc(c, 4)) { goto L_ee113; }
    X86_TICK(c, 7);
    // 0ee10f  and edi, edi
    X86_AT(c, 0xee10fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0ee111  jne 0xee177
    X86_AT(c, 0xee111u);
    if (x86_cc(c, 5)) { goto L_ee177; }
L_ee113:
    X86_TICK(c, 13);
    // 0ee113  push 4
    X86_AT(c, 0xee113u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee115  push 1
    X86_AT(c, 0xee115u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ee117  push 4
    X86_AT(c, 0xee117u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee119  call 0xe7260
    X86_AT(c, 0xee119u);
    push32(c, 0xee11eu); f_000e7260(c); X86_RET(c, 0xee11eu);
    X86_TICK(c, 11);
    // 0ee11e  push 0xcf1f4
    X86_AT(c, 0xee11eu);
    { uint32_t v = 0xCF1F4u; push32(c, v); }
    // 0ee123  push 4
    X86_AT(c, 0xee123u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee125  call 0xe5654
    X86_AT(c, 0xee125u);
    push32(c, 0xee12au); f_000e5654(c); X86_RET(c, 0xee12au);
    X86_TICK(c, 13);
    // 0ee12a  push 4
    X86_AT(c, 0xee12au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee12c  push 0x19
    X86_AT(c, 0xee12cu);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0ee12e  push 4
    X86_AT(c, 0xee12eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee130  call 0xe7260
    X86_AT(c, 0xee130u);
    push32(c, 0xee135u); f_000e7260(c); X86_RET(c, 0xee135u);
    X86_TICK(c, 13);
    // 0ee135  push 2
    X86_AT(c, 0xee135u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ee137  push edi
    X86_AT(c, 0xee137u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ee138  push 4
    X86_AT(c, 0xee138u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee13a  call 0xe5630
    X86_AT(c, 0xee13au);
    push32(c, 0xee13fu); f_000e5630(c); X86_RET(c, 0xee13fu);
    X86_TICK(c, 13);
    // 0ee13f  push 4
    X86_AT(c, 0xee13fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee141  push 0x1d
    X86_AT(c, 0xee141u);
    { uint32_t v = 0x1Du; push32(c, v); }
    // 0ee143  push 4
    X86_AT(c, 0xee143u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee145  call 0xe7260
    X86_AT(c, 0xee145u);
    push32(c, 0xee14au); f_000e7260(c); X86_RET(c, 0xee14au);
    X86_TICK(c, 11);
    // 0ee14a  push 0xcf280
    X86_AT(c, 0xee14au);
    { uint32_t v = 0xCF280u; push32(c, v); }
    // 0ee14f  push 4
    X86_AT(c, 0xee14fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee151  call 0xe5654
    X86_AT(c, 0xee151u);
    push32(c, 0xee156u); f_000e5654(c); X86_RET(c, 0xee156u);
    X86_TICK(c, 19);
    // 0ee156  add esp, 0x40
    X86_AT(c, 0xee156u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ee159  push 0x17
    X86_AT(c, 0xee159u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0ee15b  push 0x4d
    X86_AT(c, 0xee15bu);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0ee15d  push 3
    X86_AT(c, 0xee15du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ee15f  push 0
    X86_AT(c, 0xee15fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ee161  push 4
    X86_AT(c, 0xee161u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee163  call 0xe739c
    X86_AT(c, 0xee163u);
    push32(c, 0xee168u); f_000e739c(c); X86_RET(c, 0xee168u);
    X86_TICK(c, 9);
    // 0ee168  push 4
    X86_AT(c, 0xee168u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee16a  call 0xe7584
    X86_AT(c, 0xee16au);
    push32(c, 0xee16fu); f_000e7584(c); X86_RET(c, 0xee16fu);
    X86_TICK(c, 9);
    // 0ee16f  add esp, 0x18
    X86_AT(c, 0xee16fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0ee172  jmp 0xee589
    X86_AT(c, 0xee172u);
    goto L_ee589;
L_ee177:
    X86_TICK(c, 7);
    // 0ee177  cmp edi, 4
    X86_AT(c, 0xee177u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0ee17a  jg 0xee180
    X86_AT(c, 0xee17au);
    if (x86_cc(c, 15)) { goto L_ee180; }
    X86_TICK(c, 7);
    // 0ee17c  and edi, edi
    X86_AT(c, 0xee17cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0ee17e  jg 0xee1d5
    X86_AT(c, 0xee17eu);
    if (x86_cc(c, 15)) { goto L_ee1d5; }
L_ee180:
    X86_TICK(c, 13);
    // 0ee180  push 4
    X86_AT(c, 0xee180u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee182  push 0x18
    X86_AT(c, 0xee182u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0ee184  push 4
    X86_AT(c, 0xee184u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee186  call 0xe7260
    X86_AT(c, 0xee186u);
    push32(c, 0xee18bu); f_000e7260(c); X86_RET(c, 0xee18bu);
    X86_TICK(c, 11);
    // 0ee18b  push 0xcf230
    X86_AT(c, 0xee18bu);
    { uint32_t v = 0xCF230u; push32(c, v); }
    // 0ee190  push 4
    X86_AT(c, 0xee190u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee192  call 0xe5654
    X86_AT(c, 0xee192u);
    push32(c, 0xee197u); f_000e5654(c); X86_RET(c, 0xee197u);
    X86_TICK(c, 9);
    // 0ee197  push 0x3afc
    X86_AT(c, 0xee197u);
    { uint32_t v = 0x3AFCu; push32(c, v); }
    // 0ee19c  call 0xe75f8
    X86_AT(c, 0xee19cu);
    push32(c, 0xee1a1u); f_000e75f8(c); X86_RET(c, 0xee1a1u);
    X86_TICK(c, 9);
    // 0ee1a1  push 4
    X86_AT(c, 0xee1a1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee1a3  call 0xefeb0
    X86_AT(c, 0xee1a3u);
    push32(c, 0xee1a8u); f_000efeb0(c); X86_RET(c, 0xee1a8u);
    X86_TICK(c, 9);
    // 0ee1a8  push 2
    X86_AT(c, 0xee1a8u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ee1aa  call 0xe6c68
    X86_AT(c, 0xee1aau);
    push32(c, 0xee1afu); f_000e6c68(c); X86_RET(c, 0xee1afu);
    X86_TICK(c, 9);
    // 0ee1af  push 4
    X86_AT(c, 0xee1afu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee1b1  call 0xe693c
    X86_AT(c, 0xee1b1u);
    push32(c, 0xee1b6u); f_000e693c(c); X86_RET(c, 0xee1b6u);
    X86_TICK(c, 13);
    // 0ee1b6  push 4
    X86_AT(c, 0xee1b6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee1b8  push 0x18
    X86_AT(c, 0xee1b8u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0ee1ba  push 4
    X86_AT(c, 0xee1bau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee1bc  call 0xe7260
    X86_AT(c, 0xee1bcu);
    push32(c, 0xee1c1u); f_000e7260(c); X86_RET(c, 0xee1c1u);
    X86_TICK(c, 11);
    // 0ee1c1  push 0x3b30
    X86_AT(c, 0xee1c1u);
    { uint32_t v = 0x3B30u; push32(c, v); }
    // 0ee1c6  push 4
    X86_AT(c, 0xee1c6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee1c8  call 0xe6cb0
    X86_AT(c, 0xee1c8u);
    push32(c, 0xee1cdu); f_000e6cb0(c); X86_RET(c, 0xee1cdu);
    X86_TICK(c, 9);
    // 0ee1cd  add esp, 0x38
    X86_AT(c, 0xee1cdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0ee1d0  jmp 0xee0cd
    X86_AT(c, 0xee1d0u);
    X86_POLL(c, 0xee0cdu); goto L_ee0cd;
L_ee1d5:
    X86_TICK(c, 11);
    // 0ee1d5  push 0xb
    X86_AT(c, 0xee1d5u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee1d7  push 4
    X86_AT(c, 0xee1d7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee1d9  call 0xe74d8
    X86_AT(c, 0xee1d9u);
    push32(c, 0xee1deu); f_000e74d8(c); X86_RET(c, 0xee1deu);
    X86_TICK(c, 9);
    // 0ee1de  push 4
    X86_AT(c, 0xee1deu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee1e0  call 0xe693c
    X86_AT(c, 0xee1e0u);
    push32(c, 0xee1e5u); f_000e693c(c); X86_RET(c, 0xee1e5u);
    X86_TICK(c, 9);
    // 0ee1e5  push 4
    X86_AT(c, 0xee1e5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee1e7  call 0xe7584
    X86_AT(c, 0xee1e7u);
    push32(c, 0xee1ecu); f_000e7584(c); X86_RET(c, 0xee1ecu);
    X86_TICK(c, 25);
    // 0ee1ec  mov eax, edi
    X86_AT(c, 0xee1ecu);
    c.r[0] = c.r[7];
    // 0ee1ee  lea edx, [eax + eax*4]
    X86_AT(c, 0xee1eeu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ee1f1  lea edx, [eax + edx*2]
    X86_AT(c, 0xee1f1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ee1f4  shl edx, 5
    X86_AT(c, 0xee1f4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ee1f7  sub edx, eax
    X86_AT(c, 0xee1f7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ee1f9  add esp, 0x10
    X86_AT(c, 0xee1f9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0ee1fc  cmp byte ptr [edx + 0xcdcee], 0
    X86_AT(c, 0xee1fcu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDCEEu))), 0x0u, 0, 1);
    // 0ee203  jne 0xee264
    X86_AT(c, 0xee203u);
    if (x86_cc(c, 5)) { goto L_ee264; }
    X86_TICK(c, 13);
    // 0ee205  push 4
    X86_AT(c, 0xee205u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee207  push 1
    X86_AT(c, 0xee207u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ee209  push 4
    X86_AT(c, 0xee209u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee20b  call 0xe7260
    X86_AT(c, 0xee20bu);
    push32(c, 0xee210u); f_000e7260(c); X86_RET(c, 0xee210u);
    X86_TICK(c, 11);
    // 0ee210  push 0xcf1f4
    X86_AT(c, 0xee210u);
    { uint32_t v = 0xCF1F4u; push32(c, v); }
    // 0ee215  push 4
    X86_AT(c, 0xee215u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee217  call 0xe5654
    X86_AT(c, 0xee217u);
    push32(c, 0xee21cu); f_000e5654(c); X86_RET(c, 0xee21cu);
    X86_TICK(c, 13);
    // 0ee21c  push 4
    X86_AT(c, 0xee21cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee21e  push 0x19
    X86_AT(c, 0xee21eu);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0ee220  push 4
    X86_AT(c, 0xee220u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee222  call 0xe7260
    X86_AT(c, 0xee222u);
    push32(c, 0xee227u); f_000e7260(c); X86_RET(c, 0xee227u);
    X86_TICK(c, 11);
    // 0ee227  push 0x3b50
    X86_AT(c, 0xee227u);
    { uint32_t v = 0x3B50u; push32(c, v); }
    // 0ee22c  push 4
    X86_AT(c, 0xee22cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee22e  call 0xe5654
    X86_AT(c, 0xee22eu);
    push32(c, 0xee233u); f_000e5654(c); X86_RET(c, 0xee233u);
    X86_TICK(c, 9);
    // 0ee233  push 0x3b9c
    X86_AT(c, 0xee233u);
    { uint32_t v = 0x3B9Cu; push32(c, v); }
    // 0ee238  call 0xe75f8
    X86_AT(c, 0xee238u);
    push32(c, 0xee23du); f_000e75f8(c); X86_RET(c, 0xee23du);
    X86_TICK(c, 2);
    // 0ee23d  add esp, 0x2c
    X86_AT(c, 0xee23du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
L_ee240:
    X86_TICK(c, 9);
    // 0ee240  push 4
    X86_AT(c, 0xee240u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee242  call 0xe4b60
    X86_AT(c, 0xee242u);
    push32(c, 0xee247u); f_000e4b60(c); X86_RET(c, 0xee247u);
    X86_TICK(c, 9);
    // 0ee247  add esp, 4
    X86_AT(c, 0xee247u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ee24a  and al, al
    X86_AT(c, 0xee24au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0ee24c  je 0xee240
    X86_AT(c, 0xee24cu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xee240u); goto L_ee240; }
    X86_TICK(c, 9);
    // 0ee24e  push 2
    X86_AT(c, 0xee24eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ee250  call 0xe6c68
    X86_AT(c, 0xee250u);
    push32(c, 0xee255u); f_000e6c68(c); X86_RET(c, 0xee255u);
    X86_TICK(c, 9);
    // 0ee255  push 4
    X86_AT(c, 0xee255u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee257  call 0xe693c
    X86_AT(c, 0xee257u);
    push32(c, 0xee25cu); f_000e693c(c); X86_RET(c, 0xee25cu);
    X86_TICK(c, 9);
    // 0ee25c  add esp, 8
    X86_AT(c, 0xee25cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ee25f  jmp 0xee0a4
    X86_AT(c, 0xee25fu);
    X86_POLL(c, 0xee0a4u); goto L_ee0a4;
L_ee264:
    X86_TICK(c, 13);
    // 0ee264  push 4
    X86_AT(c, 0xee264u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee266  push 1
    X86_AT(c, 0xee266u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ee268  push 4
    X86_AT(c, 0xee268u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee26a  call 0xe7260
    X86_AT(c, 0xee26au);
    push32(c, 0xee26fu); f_000e7260(c); X86_RET(c, 0xee26fu);
    X86_TICK(c, 11);
    // 0ee26f  push 0xcf1f4
    X86_AT(c, 0xee26fu);
    { uint32_t v = 0xCF1F4u; push32(c, v); }
    // 0ee274  push 4
    X86_AT(c, 0xee274u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee276  call 0xe5654
    X86_AT(c, 0xee276u);
    push32(c, 0xee27bu); f_000e5654(c); X86_RET(c, 0xee27bu);
    X86_TICK(c, 13);
    // 0ee27b  push 4
    X86_AT(c, 0xee27bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee27d  push 0x19
    X86_AT(c, 0xee27du);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0ee27f  push 4
    X86_AT(c, 0xee27fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee281  call 0xe7260
    X86_AT(c, 0xee281u);
    push32(c, 0xee286u); f_000e7260(c); X86_RET(c, 0xee286u);
    X86_TICK(c, 13);
    // 0ee286  push 2
    X86_AT(c, 0xee286u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ee288  push edi
    X86_AT(c, 0xee288u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ee289  push 4
    X86_AT(c, 0xee289u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee28b  call 0xe5630
    X86_AT(c, 0xee28bu);
    push32(c, 0xee290u); f_000e5630(c); X86_RET(c, 0xee290u);
    X86_TICK(c, 30);
    // 0ee290  dec edi
    X86_AT(c, 0xee290u);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0ee291  mov eax, edi
    X86_AT(c, 0xee291u);
    c.r[0] = c.r[7];
    // 0ee293  lea edx, [eax + eax*4]
    X86_AT(c, 0xee293u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ee296  lea edx, [eax + edx*2]
    X86_AT(c, 0xee296u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ee299  shl edx, 5
    X86_AT(c, 0xee299u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ee29c  sub edx, eax
    X86_AT(c, 0xee29cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ee29e  lea esi, [edx*1 + 0xcde4c]
    X86_AT(c, 0xee29eu);
    c.r[6] = (uint32_t)(c.r[2] + 0xCDE4Cu);
    // 0ee2a5  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0xee2a5u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
    // 0ee2a9  push 5
    X86_AT(c, 0xee2a9u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ee2ab  push 0xb
    X86_AT(c, 0xee2abu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee2ad  push 4
    X86_AT(c, 0xee2adu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee2af  call 0xe7260
    X86_AT(c, 0xee2afu);
    push32(c, 0xee2b4u); f_000e7260(c); X86_RET(c, 0xee2b4u);
    X86_TICK(c, 11);
    // 0ee2b4  push 0x3bd0
    X86_AT(c, 0xee2b4u);
    { uint32_t v = 0x3BD0u; push32(c, v); }
    // 0ee2b9  push 4
    X86_AT(c, 0xee2b9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee2bb  call 0xe5654
    X86_AT(c, 0xee2bbu);
    push32(c, 0xee2c0u); f_000e5654(c); X86_RET(c, 0xee2c0u);
    X86_TICK(c, 15);
    // 0ee2c0  add esp, 0x40
    X86_AT(c, 0xee2c0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ee2c3  lea eax, [esi + 1]
    X86_AT(c, 0xee2c3u);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 0ee2c6  push eax
    X86_AT(c, 0xee2c6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee2c7  push 4
    X86_AT(c, 0xee2c7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee2c9  call 0xe70ec
    X86_AT(c, 0xee2c9u);
    push32(c, 0xee2ceu); f_000e70ec(c); X86_RET(c, 0xee2ceu);
    X86_TICK(c, 13);
    // 0ee2ce  push 6
    X86_AT(c, 0xee2ceu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ee2d0  push 0xb
    X86_AT(c, 0xee2d0u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee2d2  push 4
    X86_AT(c, 0xee2d2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee2d4  call 0xe7260
    X86_AT(c, 0xee2d4u);
    push32(c, 0xee2d9u); f_000e7260(c); X86_RET(c, 0xee2d9u);
    X86_TICK(c, 11);
    // 0ee2d9  push 0x3c08
    X86_AT(c, 0xee2d9u);
    { uint32_t v = 0x3C08u; push32(c, v); }
    // 0ee2de  push 4
    X86_AT(c, 0xee2deu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee2e0  call 0xe5654
    X86_AT(c, 0xee2e0u);
    push32(c, 0xee2e5u); f_000e5654(c); X86_RET(c, 0xee2e5u);
    X86_TICK(c, 21);
    // 0ee2e5  lea ebx, [ebp - 1]
    X86_AT(c, 0xee2e5u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0ee2e8  push ebx
    X86_AT(c, 0xee2e8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ee2e9  mov al, byte ptr [esi + 0x2f]
    X86_AT(c, 0xee2e9u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x2Fu))));
    // 0ee2ec  push eax
    X86_AT(c, 0xee2ecu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee2ed  push 4
    X86_AT(c, 0xee2edu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee2ef  push 0xcf4b0
    X86_AT(c, 0xee2efu);
    { uint32_t v = 0xCF4B0u; push32(c, v); }
    // 0ee2f4  call 0xe53e0
    X86_AT(c, 0xee2f4u);
    push32(c, 0xee2f9u); f_000e53e0(c); X86_RET(c, 0xee2f9u);
    X86_TICK(c, 11);
    // 0ee2f9  push eax
    X86_AT(c, 0xee2f9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee2fa  push 4
    X86_AT(c, 0xee2fau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee2fc  call 0xe6cb0
    X86_AT(c, 0xee2fcu);
    push32(c, 0xee301u); f_000e6cb0(c); X86_RET(c, 0xee301u);
    X86_TICK(c, 13);
    // 0ee301  push 7
    X86_AT(c, 0xee301u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ee303  push 0xb
    X86_AT(c, 0xee303u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee305  push 4
    X86_AT(c, 0xee305u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee307  call 0xe7260
    X86_AT(c, 0xee307u);
    push32(c, 0xee30cu); f_000e7260(c); X86_RET(c, 0xee30cu);
    X86_TICK(c, 13);
    // 0ee30c  add esp, 0x40
    X86_AT(c, 0xee30cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ee30f  push 0x3c40
    X86_AT(c, 0xee30fu);
    { uint32_t v = 0x3C40u; push32(c, v); }
    // 0ee314  push 4
    X86_AT(c, 0xee314u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee316  call 0xe5654
    X86_AT(c, 0xee316u);
    push32(c, 0xee31bu); f_000e5654(c); X86_RET(c, 0xee31bu);
    X86_TICK(c, 21);
    // 0ee31b  lea ebx, [ebp - 1]
    X86_AT(c, 0xee31bu);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0ee31e  push ebx
    X86_AT(c, 0xee31eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ee31f  mov al, byte ptr [esi + 0x30]
    X86_AT(c, 0xee31fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x30u))));
    // 0ee322  push eax
    X86_AT(c, 0xee322u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee323  push 3
    X86_AT(c, 0xee323u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ee325  push 0xcf6c0
    X86_AT(c, 0xee325u);
    { uint32_t v = 0xCF6C0u; push32(c, v); }
    // 0ee32a  call 0xe53e0
    X86_AT(c, 0xee32au);
    push32(c, 0xee32fu); f_000e53e0(c); X86_RET(c, 0xee32fu);
    X86_TICK(c, 11);
    // 0ee32f  push eax
    X86_AT(c, 0xee32fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee330  push 4
    X86_AT(c, 0xee330u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee332  call 0xe6cb0
    X86_AT(c, 0xee332u);
    push32(c, 0xee337u); f_000e6cb0(c); X86_RET(c, 0xee337u);
    X86_TICK(c, 13);
    // 0ee337  push 8
    X86_AT(c, 0xee337u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0ee339  push 0xb
    X86_AT(c, 0xee339u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee33b  push 4
    X86_AT(c, 0xee33bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee33d  call 0xe7260
    X86_AT(c, 0xee33du);
    push32(c, 0xee342u); f_000e7260(c); X86_RET(c, 0xee342u);
    X86_TICK(c, 11);
    // 0ee342  push 0x3c78
    X86_AT(c, 0xee342u);
    { uint32_t v = 0x3C78u; push32(c, v); }
    // 0ee347  push 4
    X86_AT(c, 0xee347u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee349  call 0xe5654
    X86_AT(c, 0xee349u);
    push32(c, 0xee34eu); f_000e5654(c); X86_RET(c, 0xee34eu);
    X86_TICK(c, 19);
    // 0ee34e  push ebx
    X86_AT(c, 0xee34eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ee34f  mov al, byte ptr [esi + 0x2e]
    X86_AT(c, 0xee34fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x2Eu))));
    // 0ee352  push eax
    X86_AT(c, 0xee352u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee353  push 4
    X86_AT(c, 0xee353u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee355  push 0xcf2a0
    X86_AT(c, 0xee355u);
    { uint32_t v = 0xCF2A0u; push32(c, v); }
    // 0ee35a  call 0xe53e0
    X86_AT(c, 0xee35au);
    push32(c, 0xee35fu); f_000e53e0(c); X86_RET(c, 0xee35fu);
    X86_TICK(c, 13);
    // 0ee35f  add esp, 0x44
    X86_AT(c, 0xee35fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 0ee362  push eax
    X86_AT(c, 0xee362u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee363  push 4
    X86_AT(c, 0xee363u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee365  call 0xe6cb0
    X86_AT(c, 0xee365u);
    push32(c, 0xee36au); f_000e6cb0(c); X86_RET(c, 0xee36au);
    X86_TICK(c, 13);
    // 0ee36a  push 0xa
    X86_AT(c, 0xee36au);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0ee36c  push 0xb
    X86_AT(c, 0xee36cu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee36e  push 4
    X86_AT(c, 0xee36eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee370  call 0xe7260
    X86_AT(c, 0xee370u);
    push32(c, 0xee375u); f_000e7260(c); X86_RET(c, 0xee375u);
    X86_TICK(c, 11);
    // 0ee375  push 0x3cb0
    X86_AT(c, 0xee375u);
    { uint32_t v = 0x3CB0u; push32(c, v); }
    // 0ee37a  push 4
    X86_AT(c, 0xee37au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee37c  call 0xe5654
    X86_AT(c, 0xee37cu);
    push32(c, 0xee381u); f_000e5654(c); X86_RET(c, 0xee381u);
    X86_TICK(c, 19);
    // 0ee381  push ebx
    X86_AT(c, 0xee381u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ee382  mov al, byte ptr [esi + 0x72]
    X86_AT(c, 0xee382u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x72u))));
    // 0ee385  push eax
    X86_AT(c, 0xee385u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee386  push 0xa
    X86_AT(c, 0xee386u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0ee388  push 0xcfbe8
    X86_AT(c, 0xee388u);
    { uint32_t v = 0xCFBE8u; push32(c, v); }
    // 0ee38d  call 0xe53e0
    X86_AT(c, 0xee38du);
    push32(c, 0xee392u); f_000e53e0(c); X86_RET(c, 0xee392u);
    X86_TICK(c, 11);
    // 0ee392  push eax
    X86_AT(c, 0xee392u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee393  push 4
    X86_AT(c, 0xee393u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee395  call 0xe6cb0
    X86_AT(c, 0xee395u);
    push32(c, 0xee39au); f_000e6cb0(c); X86_RET(c, 0xee39au);
    X86_TICK(c, 13);
    // 0ee39a  push 0xb
    X86_AT(c, 0xee39au);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee39c  push 0xb
    X86_AT(c, 0xee39cu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee39e  push 4
    X86_AT(c, 0xee39eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee3a0  call 0xe7260
    X86_AT(c, 0xee3a0u);
    push32(c, 0xee3a5u); f_000e7260(c); X86_RET(c, 0xee3a5u);
    X86_TICK(c, 13);
    // 0ee3a5  add esp, 0x40
    X86_AT(c, 0xee3a5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ee3a8  push 0x3ce8
    X86_AT(c, 0xee3a8u);
    { uint32_t v = 0x3CE8u; push32(c, v); }
    // 0ee3ad  push 4
    X86_AT(c, 0xee3adu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee3af  call 0xe5654
    X86_AT(c, 0xee3afu);
    push32(c, 0xee3b4u); f_000e5654(c); X86_RET(c, 0xee3b4u);
    X86_TICK(c, 19);
    // 0ee3b4  push ebx
    X86_AT(c, 0xee3b4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ee3b5  mov al, byte ptr [esi + 0x55]
    X86_AT(c, 0xee3b5u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x55u))));
    // 0ee3b8  push eax
    X86_AT(c, 0xee3b8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee3b9  push 7
    X86_AT(c, 0xee3b9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ee3bb  push 0xcf84c
    X86_AT(c, 0xee3bbu);
    { uint32_t v = 0xCF84Cu; push32(c, v); }
    // 0ee3c0  call 0xe53e0
    X86_AT(c, 0xee3c0u);
    push32(c, 0xee3c5u); f_000e53e0(c); X86_RET(c, 0xee3c5u);
    X86_TICK(c, 11);
    // 0ee3c5  push eax
    X86_AT(c, 0xee3c5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee3c6  push 4
    X86_AT(c, 0xee3c6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee3c8  call 0xe6cb0
    X86_AT(c, 0xee3c8u);
    push32(c, 0xee3cdu); f_000e6cb0(c); X86_RET(c, 0xee3cdu);
    X86_TICK(c, 15);
    // 0ee3cd  add esp, 0x20
    X86_AT(c, 0xee3cdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0ee3d0  push 0xc
    X86_AT(c, 0xee3d0u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0ee3d2  push 0xb
    X86_AT(c, 0xee3d2u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee3d4  push 4
    X86_AT(c, 0xee3d4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee3d6  call 0xe7260
    X86_AT(c, 0xee3d6u);
    push32(c, 0xee3dbu); f_000e7260(c); X86_RET(c, 0xee3dbu);
    X86_TICK(c, 11);
    // 0ee3db  push 0x3d20
    X86_AT(c, 0xee3dbu);
    { uint32_t v = 0x3D20u; push32(c, v); }
    // 0ee3e0  push 4
    X86_AT(c, 0xee3e0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee3e2  call 0xe5654
    X86_AT(c, 0xee3e2u);
    push32(c, 0xee3e7u); f_000e5654(c); X86_RET(c, 0xee3e7u);
    X86_TICK(c, 16);
    // 0ee3e7  push 4
    X86_AT(c, 0xee3e7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee3e9  push dword ptr [esi + 0x16]
    X86_AT(c, 0xee3e9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x16u))); push32(c, v); }
    // 0ee3ec  push 4
    X86_AT(c, 0xee3ecu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee3ee  call 0xe5630
    X86_AT(c, 0xee3eeu);
    push32(c, 0xee3f3u); f_000e5630(c); X86_RET(c, 0xee3f3u);
    X86_TICK(c, 13);
    // 0ee3f3  push 0xd
    X86_AT(c, 0xee3f3u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0ee3f5  push 0xb
    X86_AT(c, 0xee3f5u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee3f7  push 4
    X86_AT(c, 0xee3f7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee3f9  call 0xe7260
    X86_AT(c, 0xee3f9u);
    push32(c, 0xee3feu); f_000e7260(c); X86_RET(c, 0xee3feu);
    X86_TICK(c, 11);
    // 0ee3fe  push 0x3d58
    X86_AT(c, 0xee3feu);
    { uint32_t v = 0x3D58u; push32(c, v); }
    // 0ee403  push 4
    X86_AT(c, 0xee403u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee405  call 0xe5654
    X86_AT(c, 0xee405u);
    push32(c, 0xee40au); f_000e5654(c); X86_RET(c, 0xee40au);
    X86_TICK(c, 16);
    // 0ee40a  push 4
    X86_AT(c, 0xee40au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee40c  push dword ptr [esi + 0x1a]
    X86_AT(c, 0xee40cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x1Au))); push32(c, v); }
    // 0ee40f  push 4
    X86_AT(c, 0xee40fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee411  call 0xe5630
    X86_AT(c, 0xee411u);
    push32(c, 0xee416u); f_000e5630(c); X86_RET(c, 0xee416u);
    X86_TICK(c, 15);
    // 0ee416  add esp, 0x40
    X86_AT(c, 0xee416u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ee419  push 0xe
    X86_AT(c, 0xee419u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ee41b  push 0xb
    X86_AT(c, 0xee41bu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee41d  push 4
    X86_AT(c, 0xee41du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee41f  call 0xe7260
    X86_AT(c, 0xee41fu);
    push32(c, 0xee424u); f_000e7260(c); X86_RET(c, 0xee424u);
    X86_TICK(c, 11);
    // 0ee424  push 0x3d90
    X86_AT(c, 0xee424u);
    { uint32_t v = 0x3D90u; push32(c, v); }
    // 0ee429  push 4
    X86_AT(c, 0xee429u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee42b  call 0xe5654
    X86_AT(c, 0xee42bu);
    push32(c, 0xee430u); f_000e5654(c); X86_RET(c, 0xee430u);
    X86_TICK(c, 16);
    // 0ee430  push 4
    X86_AT(c, 0xee430u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee432  push dword ptr [esi + 0x1e]
    X86_AT(c, 0xee432u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x1Eu))); push32(c, v); }
    // 0ee435  push 4
    X86_AT(c, 0xee435u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee437  call 0xe5630
    X86_AT(c, 0xee437u);
    push32(c, 0xee43cu); f_000e5630(c); X86_RET(c, 0xee43cu);
    X86_TICK(c, 13);
    // 0ee43c  push 0xf
    X86_AT(c, 0xee43cu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ee43e  push 0xb
    X86_AT(c, 0xee43eu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee440  push 4
    X86_AT(c, 0xee440u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee442  call 0xe7260
    X86_AT(c, 0xee442u);
    push32(c, 0xee447u); f_000e7260(c); X86_RET(c, 0xee447u);
    X86_TICK(c, 11);
    // 0ee447  push 0x3dc8
    X86_AT(c, 0xee447u);
    { uint32_t v = 0x3DC8u; push32(c, v); }
    // 0ee44c  push 4
    X86_AT(c, 0xee44cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee44e  call 0xe5654
    X86_AT(c, 0xee44eu);
    push32(c, 0xee453u); f_000e5654(c); X86_RET(c, 0xee453u);
    X86_TICK(c, 16);
    // 0ee453  push 4
    X86_AT(c, 0xee453u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee455  push dword ptr [esi + 0x22]
    X86_AT(c, 0xee455u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x22u))); push32(c, v); }
    // 0ee458  push 4
    X86_AT(c, 0xee458u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee45a  call 0xe5630
    X86_AT(c, 0xee45au);
    push32(c, 0xee45fu); f_000e5630(c); X86_RET(c, 0xee45fu);
    X86_TICK(c, 15);
    // 0ee45f  add esp, 0x40
    X86_AT(c, 0xee45fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ee462  push 0x10
    X86_AT(c, 0xee462u);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0ee464  push 0xb
    X86_AT(c, 0xee464u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee466  push 4
    X86_AT(c, 0xee466u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee468  call 0xe7260
    X86_AT(c, 0xee468u);
    push32(c, 0xee46du); f_000e7260(c); X86_RET(c, 0xee46du);
    X86_TICK(c, 11);
    // 0ee46d  push 0x3e00
    X86_AT(c, 0xee46du);
    { uint32_t v = 0x3E00u; push32(c, v); }
    // 0ee472  push 4
    X86_AT(c, 0xee472u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee474  call 0xe5654
    X86_AT(c, 0xee474u);
    push32(c, 0xee479u); f_000e5654(c); X86_RET(c, 0xee479u);
    X86_TICK(c, 16);
    // 0ee479  push 4
    X86_AT(c, 0xee479u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee47b  push dword ptr [esi + 0x26]
    X86_AT(c, 0xee47bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x26u))); push32(c, v); }
    // 0ee47e  push 4
    X86_AT(c, 0xee47eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee480  call 0xe5630
    X86_AT(c, 0xee480u);
    push32(c, 0xee485u); f_000e5630(c); X86_RET(c, 0xee485u);
    X86_TICK(c, 15);
    // 0ee485  add esp, 0x20
    X86_AT(c, 0xee485u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0ee488  push 0x11
    X86_AT(c, 0xee488u);
    { uint32_t v = 0x11u; push32(c, v); }
    // 0ee48a  push 0xb
    X86_AT(c, 0xee48au);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee48c  push 4
    X86_AT(c, 0xee48cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee48e  call 0xe7260
    X86_AT(c, 0xee48eu);
    push32(c, 0xee493u); f_000e7260(c); X86_RET(c, 0xee493u);
    X86_TICK(c, 11);
    // 0ee493  push 0x3e38
    X86_AT(c, 0xee493u);
    { uint32_t v = 0x3E38u; push32(c, v); }
    // 0ee498  push 4
    X86_AT(c, 0xee498u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee49a  call 0xe5654
    X86_AT(c, 0xee49au);
    push32(c, 0xee49fu); f_000e5654(c); X86_RET(c, 0xee49fu);
    X86_TICK(c, 16);
    // 0ee49f  push 4
    X86_AT(c, 0xee49fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee4a1  push dword ptr [esi + 0x2a]
    X86_AT(c, 0xee4a1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x2Au))); push32(c, v); }
    // 0ee4a4  push 4
    X86_AT(c, 0xee4a4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee4a6  call 0xe5630
    X86_AT(c, 0xee4a6u);
    push32(c, 0xee4abu); f_000e5630(c); X86_RET(c, 0xee4abu);
    X86_TICK(c, 13);
    // 0ee4ab  push 0x12
    X86_AT(c, 0xee4abu);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0ee4ad  push 0xb
    X86_AT(c, 0xee4adu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee4af  push 4
    X86_AT(c, 0xee4afu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee4b1  call 0xe7260
    X86_AT(c, 0xee4b1u);
    push32(c, 0xee4b6u); f_000e7260(c); X86_RET(c, 0xee4b6u);
    X86_TICK(c, 11);
    // 0ee4b6  push 0x3e70
    X86_AT(c, 0xee4b6u);
    { uint32_t v = 0x3E70u; push32(c, v); }
    // 0ee4bb  push 4
    X86_AT(c, 0xee4bbu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee4bd  call 0xe5654
    X86_AT(c, 0xee4bdu);
    push32(c, 0xee4c2u); f_000e5654(c); X86_RET(c, 0xee4c2u);
    X86_TICK(c, 16);
    // 0ee4c2  push 4
    X86_AT(c, 0xee4c2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee4c4  push dword ptr [esi + 0x35]
    X86_AT(c, 0xee4c4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x35u))); push32(c, v); }
    // 0ee4c7  push 4
    X86_AT(c, 0xee4c7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee4c9  call 0xe5630
    X86_AT(c, 0xee4c9u);
    push32(c, 0xee4ceu); f_000e5630(c); X86_RET(c, 0xee4ceu);
    X86_TICK(c, 15);
    // 0ee4ce  add esp, 0x40
    X86_AT(c, 0xee4ceu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ee4d1  push 0x13
    X86_AT(c, 0xee4d1u);
    { uint32_t v = 0x13u; push32(c, v); }
    // 0ee4d3  push 0xb
    X86_AT(c, 0xee4d3u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee4d5  push 4
    X86_AT(c, 0xee4d5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee4d7  call 0xe7260
    X86_AT(c, 0xee4d7u);
    push32(c, 0xee4dcu); f_000e7260(c); X86_RET(c, 0xee4dcu);
    X86_TICK(c, 11);
    // 0ee4dc  push 0x3ea8
    X86_AT(c, 0xee4dcu);
    { uint32_t v = 0x3EA8u; push32(c, v); }
    // 0ee4e1  push 4
    X86_AT(c, 0xee4e1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee4e3  call 0xe5654
    X86_AT(c, 0xee4e3u);
    push32(c, 0xee4e8u); f_000e5654(c); X86_RET(c, 0xee4e8u);
    X86_TICK(c, 16);
    // 0ee4e8  push 4
    X86_AT(c, 0xee4e8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee4ea  push dword ptr [esi + 0x3d]
    X86_AT(c, 0xee4eau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x3Du))); push32(c, v); }
    // 0ee4ed  push 4
    X86_AT(c, 0xee4edu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee4ef  call 0xe5630
    X86_AT(c, 0xee4efu);
    push32(c, 0xee4f4u); f_000e5630(c); X86_RET(c, 0xee4f4u);
    X86_TICK(c, 13);
    // 0ee4f4  push 0x14
    X86_AT(c, 0xee4f4u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0ee4f6  push 0xb
    X86_AT(c, 0xee4f6u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee4f8  push 4
    X86_AT(c, 0xee4f8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee4fa  call 0xe7260
    X86_AT(c, 0xee4fau);
    push32(c, 0xee4ffu); f_000e7260(c); X86_RET(c, 0xee4ffu);
    X86_TICK(c, 11);
    // 0ee4ff  push 0x3ee0
    X86_AT(c, 0xee4ffu);
    { uint32_t v = 0x3EE0u; push32(c, v); }
    // 0ee504  push 4
    X86_AT(c, 0xee504u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee506  call 0xe5654
    X86_AT(c, 0xee506u);
    push32(c, 0xee50bu); f_000e5654(c); X86_RET(c, 0xee50bu);
    X86_TICK(c, 61);
    // 0ee50b  push 4
    X86_AT(c, 0xee50bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee50d  mov eax, dword ptr [esi + 0x41]
    X86_AT(c, 0xee50du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x41u)));
    // 0ee510  cdq 
    X86_AT(c, 0xee510u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0ee511  mov ecx, 0x64
    X86_AT(c, 0xee511u);
    c.r[1] = 0x64u;
    // 0ee516  idiv ecx
    X86_AT(c, 0xee516u);
    x86_idiv(c, c.r[1], 4, 0xee516u);
    // 0ee518  push eax
    X86_AT(c, 0xee518u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee519  push 4
    X86_AT(c, 0xee519u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee51b  call 0xe5630
    X86_AT(c, 0xee51bu);
    push32(c, 0xee520u); f_000e5630(c); X86_RET(c, 0xee520u);
    X86_TICK(c, 15);
    // 0ee520  add esp, 0x40
    X86_AT(c, 0xee520u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ee523  push 0x15
    X86_AT(c, 0xee523u);
    { uint32_t v = 0x15u; push32(c, v); }
    // 0ee525  push 0xb
    X86_AT(c, 0xee525u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee527  push 4
    X86_AT(c, 0xee527u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee529  call 0xe7260
    X86_AT(c, 0xee529u);
    push32(c, 0xee52eu); f_000e7260(c); X86_RET(c, 0xee52eu);
    X86_TICK(c, 11);
    // 0ee52e  push 0x3f18
    X86_AT(c, 0xee52eu);
    { uint32_t v = 0x3F18u; push32(c, v); }
    // 0ee533  push 4
    X86_AT(c, 0xee533u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee535  call 0xe5654
    X86_AT(c, 0xee535u);
    push32(c, 0xee53au); f_000e5654(c); X86_RET(c, 0xee53au);
    X86_TICK(c, 18);
    // 0ee53a  add esp, 0x14
    X86_AT(c, 0xee53au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0ee53d  push 4
    X86_AT(c, 0xee53du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee53f  push dword ptr [esi + 0x45]
    X86_AT(c, 0xee53fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x45u))); push32(c, v); }
    // 0ee542  push 4
    X86_AT(c, 0xee542u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee544  call 0xe5630
    X86_AT(c, 0xee544u);
    push32(c, 0xee549u); f_000e5630(c); X86_RET(c, 0xee549u);
    X86_TICK(c, 9);
    // 0ee549  push 0x3f50
    X86_AT(c, 0xee549u);
    { uint32_t v = 0x3F50u; push32(c, v); }
    // 0ee54e  call 0xe75f8
    X86_AT(c, 0xee54eu);
    push32(c, 0xee553u); f_000e75f8(c); X86_RET(c, 0xee553u);
    X86_TICK(c, 2);
    // 0ee553  add esp, 0x10
    X86_AT(c, 0xee553u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_ee556:
    X86_TICK(c, 9);
    // 0ee556  push 4
    X86_AT(c, 0xee556u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee558  call 0xe4b60
    X86_AT(c, 0xee558u);
    push32(c, 0xee55du); f_000e4b60(c); X86_RET(c, 0xee55du);
    X86_TICK(c, 9);
    // 0ee55d  add esp, 4
    X86_AT(c, 0xee55du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ee560  and al, al
    X86_AT(c, 0xee560u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0ee562  je 0xee556
    X86_AT(c, 0xee562u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xee556u); goto L_ee556; }
    X86_TICK(c, 9);
    // 0ee564  push 2
    X86_AT(c, 0xee564u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ee566  call 0xe6c68
    X86_AT(c, 0xee566u);
    push32(c, 0xee56bu); f_000e6c68(c); X86_RET(c, 0xee56bu);
    X86_TICK(c, 9);
    // 0ee56b  push 4
    X86_AT(c, 0xee56bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee56d  call 0xe693c
    X86_AT(c, 0xee56du);
    push32(c, 0xee572u); f_000e693c(c); X86_RET(c, 0xee572u);
    X86_TICK(c, 17);
    // 0ee572  push 0x17
    X86_AT(c, 0xee572u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0ee574  push 0x4d
    X86_AT(c, 0xee574u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0ee576  push 4
    X86_AT(c, 0xee576u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee578  push 0
    X86_AT(c, 0xee578u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ee57a  push 4
    X86_AT(c, 0xee57au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee57c  call 0xe739c
    X86_AT(c, 0xee57cu);
    push32(c, 0xee581u); f_000e739c(c); X86_RET(c, 0xee581u);
    X86_TICK(c, 9);
    // 0ee581  add esp, 0x1c
    X86_AT(c, 0xee581u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0ee584  jmp 0xee0a4
    X86_AT(c, 0xee584u);
    X86_POLL(c, 0xee0a4u); goto L_ee0a4;
L_ee589:
    X86_TICK(c, 28);
    // 0ee589  pop edi
    X86_AT(c, 0xee589u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ee58a  pop esi
    X86_AT(c, 0xee58au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ee58b  pop ebx
    X86_AT(c, 0xee58bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ee58c  leave 
    X86_AT(c, 0xee58cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ee58d  ret 
    X86_AT(c, 0xee58du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xee074u, "ran off the end of a function");
}
void f_000ee0a4(X86Cpu& c) {
L_ee0a4:
    X86_TICK(c, 17);
    // 0ee0a4  push 0x17
    X86_AT(c, 0xee0a4u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0ee0a6  push 0x4d
    X86_AT(c, 0xee0a6u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0ee0a8  push 4
    X86_AT(c, 0xee0a8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee0aa  push 0
    X86_AT(c, 0xee0aau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ee0ac  push 4
    X86_AT(c, 0xee0acu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee0ae  call 0xe739c
    X86_AT(c, 0xee0aeu);
    push32(c, 0xee0b3u); f_000e739c(c); X86_RET(c, 0xee0b3u);
    X86_TICK(c, 13);
    // 0ee0b3  push 4
    X86_AT(c, 0xee0b3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee0b5  push 1
    X86_AT(c, 0xee0b5u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ee0b7  push 4
    X86_AT(c, 0xee0b7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee0b9  call 0xe7260
    X86_AT(c, 0xee0b9u);
    push32(c, 0xee0beu); f_000e7260(c); X86_RET(c, 0xee0beu);
    X86_TICK(c, 11);
    // 0ee0be  push 0xcf1f4
    X86_AT(c, 0xee0beu);
    { uint32_t v = 0xCF1F4u; push32(c, v); }
    // 0ee0c3  push 4
    X86_AT(c, 0xee0c3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee0c5  call 0xe5654
    X86_AT(c, 0xee0c5u);
    push32(c, 0xee0cau); f_000e5654(c); X86_RET(c, 0xee0cau);
    X86_TICK(c, 2);
    // 0ee0ca  add esp, 0x28
    X86_AT(c, 0xee0cau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
L_ee0cd:
    X86_TICK(c, 13);
    // 0ee0cd  push 4
    X86_AT(c, 0xee0cdu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee0cf  push 0x18
    X86_AT(c, 0xee0cfu);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0ee0d1  push 4
    X86_AT(c, 0xee0d1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee0d3  call 0xe7260
    X86_AT(c, 0xee0d3u);
    push32(c, 0xee0d8u); f_000e7260(c); X86_RET(c, 0xee0d8u);
    X86_TICK(c, 9);
    // 0ee0d8  push 4
    X86_AT(c, 0xee0d8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee0da  call 0xe756c
    X86_AT(c, 0xee0dau);
    push32(c, 0xee0dfu); f_000e756c(c); X86_RET(c, 0xee0dfu);
    X86_TICK(c, 11);
    // 0ee0df  push 0xe
    X86_AT(c, 0xee0dfu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ee0e1  push 4
    X86_AT(c, 0xee0e1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee0e3  call 0xe74d8
    X86_AT(c, 0xee0e3u);
    push32(c, 0xee0e8u); f_000e74d8(c); X86_RET(c, 0xee0e8u);
    X86_TICK(c, 9);
    // 0ee0e8  push 4
    X86_AT(c, 0xee0e8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee0ea  call 0xe693c
    X86_AT(c, 0xee0eau);
    push32(c, 0xee0efu); f_000e693c(c); X86_RET(c, 0xee0efu);
    X86_TICK(c, 9);
    // 0ee0ef  push 4
    X86_AT(c, 0xee0efu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee0f1  call 0xe1b10
    X86_AT(c, 0xee0f1u);
    push32(c, 0xee0f6u); f_000e1b10(c); X86_RET(c, 0xee0f6u);
    X86_TICK(c, 14);
    // 0ee0f6  xchg edi, eax
    X86_AT(c, 0xee0f6u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0ee0f7  push 0xb
    X86_AT(c, 0xee0f7u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee0f9  push 4
    X86_AT(c, 0xee0f9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee0fb  call 0xe74d8
    X86_AT(c, 0xee0fbu);
    push32(c, 0xee100u); f_000e74d8(c); X86_RET(c, 0xee100u);
    X86_TICK(c, 9);
    // 0ee100  push 4
    X86_AT(c, 0xee100u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee102  call 0xe693c
    X86_AT(c, 0xee102u);
    push32(c, 0xee107u); f_000e693c(c); X86_RET(c, 0xee107u);
    X86_TICK(c, 9);
    // 0ee107  add esp, 0x2c
    X86_AT(c, 0xee107u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0ee10a  cmp edi, 0xffffffff
    X86_AT(c, 0xee10au);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0ee10d  je 0xee113
    X86_AT(c, 0xee10du);
    if (x86_cc(c, 4)) { goto L_ee113; }
    X86_TICK(c, 7);
    // 0ee10f  and edi, edi
    X86_AT(c, 0xee10fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0ee111  jne 0xee177
    X86_AT(c, 0xee111u);
    if (x86_cc(c, 5)) { goto L_ee177; }
L_ee113:
    X86_TICK(c, 13);
    // 0ee113  push 4
    X86_AT(c, 0xee113u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee115  push 1
    X86_AT(c, 0xee115u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ee117  push 4
    X86_AT(c, 0xee117u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee119  call 0xe7260
    X86_AT(c, 0xee119u);
    push32(c, 0xee11eu); f_000e7260(c); X86_RET(c, 0xee11eu);
    X86_TICK(c, 11);
    // 0ee11e  push 0xcf1f4
    X86_AT(c, 0xee11eu);
    { uint32_t v = 0xCF1F4u; push32(c, v); }
    // 0ee123  push 4
    X86_AT(c, 0xee123u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee125  call 0xe5654
    X86_AT(c, 0xee125u);
    push32(c, 0xee12au); f_000e5654(c); X86_RET(c, 0xee12au);
    X86_TICK(c, 13);
    // 0ee12a  push 4
    X86_AT(c, 0xee12au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee12c  push 0x19
    X86_AT(c, 0xee12cu);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0ee12e  push 4
    X86_AT(c, 0xee12eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee130  call 0xe7260
    X86_AT(c, 0xee130u);
    push32(c, 0xee135u); f_000e7260(c); X86_RET(c, 0xee135u);
    X86_TICK(c, 13);
    // 0ee135  push 2
    X86_AT(c, 0xee135u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ee137  push edi
    X86_AT(c, 0xee137u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ee138  push 4
    X86_AT(c, 0xee138u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee13a  call 0xe5630
    X86_AT(c, 0xee13au);
    push32(c, 0xee13fu); f_000e5630(c); X86_RET(c, 0xee13fu);
    X86_TICK(c, 13);
    // 0ee13f  push 4
    X86_AT(c, 0xee13fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee141  push 0x1d
    X86_AT(c, 0xee141u);
    { uint32_t v = 0x1Du; push32(c, v); }
    // 0ee143  push 4
    X86_AT(c, 0xee143u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee145  call 0xe7260
    X86_AT(c, 0xee145u);
    push32(c, 0xee14au); f_000e7260(c); X86_RET(c, 0xee14au);
    X86_TICK(c, 11);
    // 0ee14a  push 0xcf280
    X86_AT(c, 0xee14au);
    { uint32_t v = 0xCF280u; push32(c, v); }
    // 0ee14f  push 4
    X86_AT(c, 0xee14fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee151  call 0xe5654
    X86_AT(c, 0xee151u);
    push32(c, 0xee156u); f_000e5654(c); X86_RET(c, 0xee156u);
    X86_TICK(c, 19);
    // 0ee156  add esp, 0x40
    X86_AT(c, 0xee156u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ee159  push 0x17
    X86_AT(c, 0xee159u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0ee15b  push 0x4d
    X86_AT(c, 0xee15bu);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0ee15d  push 3
    X86_AT(c, 0xee15du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ee15f  push 0
    X86_AT(c, 0xee15fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ee161  push 4
    X86_AT(c, 0xee161u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee163  call 0xe739c
    X86_AT(c, 0xee163u);
    push32(c, 0xee168u); f_000e739c(c); X86_RET(c, 0xee168u);
    X86_TICK(c, 9);
    // 0ee168  push 4
    X86_AT(c, 0xee168u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee16a  call 0xe7584
    X86_AT(c, 0xee16au);
    push32(c, 0xee16fu); f_000e7584(c); X86_RET(c, 0xee16fu);
    X86_TICK(c, 9);
    // 0ee16f  add esp, 0x18
    X86_AT(c, 0xee16fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0ee172  jmp 0xee589
    X86_AT(c, 0xee172u);
    goto L_ee589;
L_ee177:
    X86_TICK(c, 7);
    // 0ee177  cmp edi, 4
    X86_AT(c, 0xee177u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0ee17a  jg 0xee180
    X86_AT(c, 0xee17au);
    if (x86_cc(c, 15)) { goto L_ee180; }
    X86_TICK(c, 7);
    // 0ee17c  and edi, edi
    X86_AT(c, 0xee17cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0ee17e  jg 0xee1d5
    X86_AT(c, 0xee17eu);
    if (x86_cc(c, 15)) { goto L_ee1d5; }
L_ee180:
    X86_TICK(c, 13);
    // 0ee180  push 4
    X86_AT(c, 0xee180u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee182  push 0x18
    X86_AT(c, 0xee182u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0ee184  push 4
    X86_AT(c, 0xee184u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee186  call 0xe7260
    X86_AT(c, 0xee186u);
    push32(c, 0xee18bu); f_000e7260(c); X86_RET(c, 0xee18bu);
    X86_TICK(c, 11);
    // 0ee18b  push 0xcf230
    X86_AT(c, 0xee18bu);
    { uint32_t v = 0xCF230u; push32(c, v); }
    // 0ee190  push 4
    X86_AT(c, 0xee190u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee192  call 0xe5654
    X86_AT(c, 0xee192u);
    push32(c, 0xee197u); f_000e5654(c); X86_RET(c, 0xee197u);
    X86_TICK(c, 9);
    // 0ee197  push 0x3afc
    X86_AT(c, 0xee197u);
    { uint32_t v = 0x3AFCu; push32(c, v); }
    // 0ee19c  call 0xe75f8
    X86_AT(c, 0xee19cu);
    push32(c, 0xee1a1u); f_000e75f8(c); X86_RET(c, 0xee1a1u);
    X86_TICK(c, 9);
    // 0ee1a1  push 4
    X86_AT(c, 0xee1a1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee1a3  call 0xefeb0
    X86_AT(c, 0xee1a3u);
    push32(c, 0xee1a8u); f_000efeb0(c); X86_RET(c, 0xee1a8u);
    X86_TICK(c, 9);
    // 0ee1a8  push 2
    X86_AT(c, 0xee1a8u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ee1aa  call 0xe6c68
    X86_AT(c, 0xee1aau);
    push32(c, 0xee1afu); f_000e6c68(c); X86_RET(c, 0xee1afu);
    X86_TICK(c, 9);
    // 0ee1af  push 4
    X86_AT(c, 0xee1afu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee1b1  call 0xe693c
    X86_AT(c, 0xee1b1u);
    push32(c, 0xee1b6u); f_000e693c(c); X86_RET(c, 0xee1b6u);
    X86_TICK(c, 13);
    // 0ee1b6  push 4
    X86_AT(c, 0xee1b6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee1b8  push 0x18
    X86_AT(c, 0xee1b8u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0ee1ba  push 4
    X86_AT(c, 0xee1bau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee1bc  call 0xe7260
    X86_AT(c, 0xee1bcu);
    push32(c, 0xee1c1u); f_000e7260(c); X86_RET(c, 0xee1c1u);
    X86_TICK(c, 11);
    // 0ee1c1  push 0x3b30
    X86_AT(c, 0xee1c1u);
    { uint32_t v = 0x3B30u; push32(c, v); }
    // 0ee1c6  push 4
    X86_AT(c, 0xee1c6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee1c8  call 0xe6cb0
    X86_AT(c, 0xee1c8u);
    push32(c, 0xee1cdu); f_000e6cb0(c); X86_RET(c, 0xee1cdu);
    X86_TICK(c, 9);
    // 0ee1cd  add esp, 0x38
    X86_AT(c, 0xee1cdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0ee1d0  jmp 0xee0cd
    X86_AT(c, 0xee1d0u);
    X86_POLL(c, 0xee0cdu); goto L_ee0cd;
L_ee1d5:
    X86_TICK(c, 11);
    // 0ee1d5  push 0xb
    X86_AT(c, 0xee1d5u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee1d7  push 4
    X86_AT(c, 0xee1d7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee1d9  call 0xe74d8
    X86_AT(c, 0xee1d9u);
    push32(c, 0xee1deu); f_000e74d8(c); X86_RET(c, 0xee1deu);
    X86_TICK(c, 9);
    // 0ee1de  push 4
    X86_AT(c, 0xee1deu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee1e0  call 0xe693c
    X86_AT(c, 0xee1e0u);
    push32(c, 0xee1e5u); f_000e693c(c); X86_RET(c, 0xee1e5u);
    X86_TICK(c, 9);
    // 0ee1e5  push 4
    X86_AT(c, 0xee1e5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee1e7  call 0xe7584
    X86_AT(c, 0xee1e7u);
    push32(c, 0xee1ecu); f_000e7584(c); X86_RET(c, 0xee1ecu);
    X86_TICK(c, 25);
    // 0ee1ec  mov eax, edi
    X86_AT(c, 0xee1ecu);
    c.r[0] = c.r[7];
    // 0ee1ee  lea edx, [eax + eax*4]
    X86_AT(c, 0xee1eeu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ee1f1  lea edx, [eax + edx*2]
    X86_AT(c, 0xee1f1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ee1f4  shl edx, 5
    X86_AT(c, 0xee1f4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ee1f7  sub edx, eax
    X86_AT(c, 0xee1f7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ee1f9  add esp, 0x10
    X86_AT(c, 0xee1f9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0ee1fc  cmp byte ptr [edx + 0xcdcee], 0
    X86_AT(c, 0xee1fcu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDCEEu))), 0x0u, 0, 1);
    // 0ee203  jne 0xee264
    X86_AT(c, 0xee203u);
    if (x86_cc(c, 5)) { goto L_ee264; }
    X86_TICK(c, 13);
    // 0ee205  push 4
    X86_AT(c, 0xee205u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee207  push 1
    X86_AT(c, 0xee207u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ee209  push 4
    X86_AT(c, 0xee209u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee20b  call 0xe7260
    X86_AT(c, 0xee20bu);
    push32(c, 0xee210u); f_000e7260(c); X86_RET(c, 0xee210u);
    X86_TICK(c, 11);
    // 0ee210  push 0xcf1f4
    X86_AT(c, 0xee210u);
    { uint32_t v = 0xCF1F4u; push32(c, v); }
    // 0ee215  push 4
    X86_AT(c, 0xee215u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee217  call 0xe5654
    X86_AT(c, 0xee217u);
    push32(c, 0xee21cu); f_000e5654(c); X86_RET(c, 0xee21cu);
    X86_TICK(c, 13);
    // 0ee21c  push 4
    X86_AT(c, 0xee21cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee21e  push 0x19
    X86_AT(c, 0xee21eu);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0ee220  push 4
    X86_AT(c, 0xee220u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee222  call 0xe7260
    X86_AT(c, 0xee222u);
    push32(c, 0xee227u); f_000e7260(c); X86_RET(c, 0xee227u);
    X86_TICK(c, 11);
    // 0ee227  push 0x3b50
    X86_AT(c, 0xee227u);
    { uint32_t v = 0x3B50u; push32(c, v); }
    // 0ee22c  push 4
    X86_AT(c, 0xee22cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee22e  call 0xe5654
    X86_AT(c, 0xee22eu);
    push32(c, 0xee233u); f_000e5654(c); X86_RET(c, 0xee233u);
    X86_TICK(c, 9);
    // 0ee233  push 0x3b9c
    X86_AT(c, 0xee233u);
    { uint32_t v = 0x3B9Cu; push32(c, v); }
    // 0ee238  call 0xe75f8
    X86_AT(c, 0xee238u);
    push32(c, 0xee23du); f_000e75f8(c); X86_RET(c, 0xee23du);
    X86_TICK(c, 2);
    // 0ee23d  add esp, 0x2c
    X86_AT(c, 0xee23du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
L_ee240:
    X86_TICK(c, 9);
    // 0ee240  push 4
    X86_AT(c, 0xee240u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee242  call 0xe4b60
    X86_AT(c, 0xee242u);
    push32(c, 0xee247u); f_000e4b60(c); X86_RET(c, 0xee247u);
    X86_TICK(c, 9);
    // 0ee247  add esp, 4
    X86_AT(c, 0xee247u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ee24a  and al, al
    X86_AT(c, 0xee24au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0ee24c  je 0xee240
    X86_AT(c, 0xee24cu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xee240u); goto L_ee240; }
    X86_TICK(c, 9);
    // 0ee24e  push 2
    X86_AT(c, 0xee24eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ee250  call 0xe6c68
    X86_AT(c, 0xee250u);
    push32(c, 0xee255u); f_000e6c68(c); X86_RET(c, 0xee255u);
    X86_TICK(c, 9);
    // 0ee255  push 4
    X86_AT(c, 0xee255u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee257  call 0xe693c
    X86_AT(c, 0xee257u);
    push32(c, 0xee25cu); f_000e693c(c); X86_RET(c, 0xee25cu);
    X86_TICK(c, 9);
    // 0ee25c  add esp, 8
    X86_AT(c, 0xee25cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ee25f  jmp 0xee0a4
    X86_AT(c, 0xee25fu);
    X86_POLL(c, 0xee0a4u); goto L_ee0a4;
L_ee264:
    X86_TICK(c, 13);
    // 0ee264  push 4
    X86_AT(c, 0xee264u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee266  push 1
    X86_AT(c, 0xee266u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ee268  push 4
    X86_AT(c, 0xee268u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee26a  call 0xe7260
    X86_AT(c, 0xee26au);
    push32(c, 0xee26fu); f_000e7260(c); X86_RET(c, 0xee26fu);
    X86_TICK(c, 11);
    // 0ee26f  push 0xcf1f4
    X86_AT(c, 0xee26fu);
    { uint32_t v = 0xCF1F4u; push32(c, v); }
    // 0ee274  push 4
    X86_AT(c, 0xee274u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee276  call 0xe5654
    X86_AT(c, 0xee276u);
    push32(c, 0xee27bu); f_000e5654(c); X86_RET(c, 0xee27bu);
    X86_TICK(c, 13);
    // 0ee27b  push 4
    X86_AT(c, 0xee27bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee27d  push 0x19
    X86_AT(c, 0xee27du);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0ee27f  push 4
    X86_AT(c, 0xee27fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee281  call 0xe7260
    X86_AT(c, 0xee281u);
    push32(c, 0xee286u); f_000e7260(c); X86_RET(c, 0xee286u);
    X86_TICK(c, 13);
    // 0ee286  push 2
    X86_AT(c, 0xee286u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ee288  push edi
    X86_AT(c, 0xee288u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ee289  push 4
    X86_AT(c, 0xee289u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee28b  call 0xe5630
    X86_AT(c, 0xee28bu);
    push32(c, 0xee290u); f_000e5630(c); X86_RET(c, 0xee290u);
    X86_TICK(c, 30);
    // 0ee290  dec edi
    X86_AT(c, 0xee290u);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0ee291  mov eax, edi
    X86_AT(c, 0xee291u);
    c.r[0] = c.r[7];
    // 0ee293  lea edx, [eax + eax*4]
    X86_AT(c, 0xee293u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ee296  lea edx, [eax + edx*2]
    X86_AT(c, 0xee296u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ee299  shl edx, 5
    X86_AT(c, 0xee299u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ee29c  sub edx, eax
    X86_AT(c, 0xee29cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ee29e  lea esi, [edx*1 + 0xcde4c]
    X86_AT(c, 0xee29eu);
    c.r[6] = (uint32_t)(c.r[2] + 0xCDE4Cu);
    // 0ee2a5  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0xee2a5u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
    // 0ee2a9  push 5
    X86_AT(c, 0xee2a9u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ee2ab  push 0xb
    X86_AT(c, 0xee2abu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee2ad  push 4
    X86_AT(c, 0xee2adu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee2af  call 0xe7260
    X86_AT(c, 0xee2afu);
    push32(c, 0xee2b4u); f_000e7260(c); X86_RET(c, 0xee2b4u);
    X86_TICK(c, 11);
    // 0ee2b4  push 0x3bd0
    X86_AT(c, 0xee2b4u);
    { uint32_t v = 0x3BD0u; push32(c, v); }
    // 0ee2b9  push 4
    X86_AT(c, 0xee2b9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee2bb  call 0xe5654
    X86_AT(c, 0xee2bbu);
    push32(c, 0xee2c0u); f_000e5654(c); X86_RET(c, 0xee2c0u);
    X86_TICK(c, 15);
    // 0ee2c0  add esp, 0x40
    X86_AT(c, 0xee2c0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ee2c3  lea eax, [esi + 1]
    X86_AT(c, 0xee2c3u);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 0ee2c6  push eax
    X86_AT(c, 0xee2c6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee2c7  push 4
    X86_AT(c, 0xee2c7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee2c9  call 0xe70ec
    X86_AT(c, 0xee2c9u);
    push32(c, 0xee2ceu); f_000e70ec(c); X86_RET(c, 0xee2ceu);
    X86_TICK(c, 13);
    // 0ee2ce  push 6
    X86_AT(c, 0xee2ceu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ee2d0  push 0xb
    X86_AT(c, 0xee2d0u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee2d2  push 4
    X86_AT(c, 0xee2d2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee2d4  call 0xe7260
    X86_AT(c, 0xee2d4u);
    push32(c, 0xee2d9u); f_000e7260(c); X86_RET(c, 0xee2d9u);
    X86_TICK(c, 11);
    // 0ee2d9  push 0x3c08
    X86_AT(c, 0xee2d9u);
    { uint32_t v = 0x3C08u; push32(c, v); }
    // 0ee2de  push 4
    X86_AT(c, 0xee2deu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee2e0  call 0xe5654
    X86_AT(c, 0xee2e0u);
    push32(c, 0xee2e5u); f_000e5654(c); X86_RET(c, 0xee2e5u);
    X86_TICK(c, 21);
    // 0ee2e5  lea ebx, [ebp - 1]
    X86_AT(c, 0xee2e5u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0ee2e8  push ebx
    X86_AT(c, 0xee2e8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ee2e9  mov al, byte ptr [esi + 0x2f]
    X86_AT(c, 0xee2e9u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x2Fu))));
    // 0ee2ec  push eax
    X86_AT(c, 0xee2ecu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee2ed  push 4
    X86_AT(c, 0xee2edu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee2ef  push 0xcf4b0
    X86_AT(c, 0xee2efu);
    { uint32_t v = 0xCF4B0u; push32(c, v); }
    // 0ee2f4  call 0xe53e0
    X86_AT(c, 0xee2f4u);
    push32(c, 0xee2f9u); f_000e53e0(c); X86_RET(c, 0xee2f9u);
    X86_TICK(c, 11);
    // 0ee2f9  push eax
    X86_AT(c, 0xee2f9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee2fa  push 4
    X86_AT(c, 0xee2fau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee2fc  call 0xe6cb0
    X86_AT(c, 0xee2fcu);
    push32(c, 0xee301u); f_000e6cb0(c); X86_RET(c, 0xee301u);
    X86_TICK(c, 13);
    // 0ee301  push 7
    X86_AT(c, 0xee301u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ee303  push 0xb
    X86_AT(c, 0xee303u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee305  push 4
    X86_AT(c, 0xee305u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee307  call 0xe7260
    X86_AT(c, 0xee307u);
    push32(c, 0xee30cu); f_000e7260(c); X86_RET(c, 0xee30cu);
    X86_TICK(c, 13);
    // 0ee30c  add esp, 0x40
    X86_AT(c, 0xee30cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ee30f  push 0x3c40
    X86_AT(c, 0xee30fu);
    { uint32_t v = 0x3C40u; push32(c, v); }
    // 0ee314  push 4
    X86_AT(c, 0xee314u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee316  call 0xe5654
    X86_AT(c, 0xee316u);
    push32(c, 0xee31bu); f_000e5654(c); X86_RET(c, 0xee31bu);
    X86_TICK(c, 21);
    // 0ee31b  lea ebx, [ebp - 1]
    X86_AT(c, 0xee31bu);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0ee31e  push ebx
    X86_AT(c, 0xee31eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ee31f  mov al, byte ptr [esi + 0x30]
    X86_AT(c, 0xee31fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x30u))));
    // 0ee322  push eax
    X86_AT(c, 0xee322u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee323  push 3
    X86_AT(c, 0xee323u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ee325  push 0xcf6c0
    X86_AT(c, 0xee325u);
    { uint32_t v = 0xCF6C0u; push32(c, v); }
    // 0ee32a  call 0xe53e0
    X86_AT(c, 0xee32au);
    push32(c, 0xee32fu); f_000e53e0(c); X86_RET(c, 0xee32fu);
    X86_TICK(c, 11);
    // 0ee32f  push eax
    X86_AT(c, 0xee32fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee330  push 4
    X86_AT(c, 0xee330u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee332  call 0xe6cb0
    X86_AT(c, 0xee332u);
    push32(c, 0xee337u); f_000e6cb0(c); X86_RET(c, 0xee337u);
    X86_TICK(c, 13);
    // 0ee337  push 8
    X86_AT(c, 0xee337u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0ee339  push 0xb
    X86_AT(c, 0xee339u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee33b  push 4
    X86_AT(c, 0xee33bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee33d  call 0xe7260
    X86_AT(c, 0xee33du);
    push32(c, 0xee342u); f_000e7260(c); X86_RET(c, 0xee342u);
    X86_TICK(c, 11);
    // 0ee342  push 0x3c78
    X86_AT(c, 0xee342u);
    { uint32_t v = 0x3C78u; push32(c, v); }
    // 0ee347  push 4
    X86_AT(c, 0xee347u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee349  call 0xe5654
    X86_AT(c, 0xee349u);
    push32(c, 0xee34eu); f_000e5654(c); X86_RET(c, 0xee34eu);
    X86_TICK(c, 19);
    // 0ee34e  push ebx
    X86_AT(c, 0xee34eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ee34f  mov al, byte ptr [esi + 0x2e]
    X86_AT(c, 0xee34fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x2Eu))));
    // 0ee352  push eax
    X86_AT(c, 0xee352u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee353  push 4
    X86_AT(c, 0xee353u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee355  push 0xcf2a0
    X86_AT(c, 0xee355u);
    { uint32_t v = 0xCF2A0u; push32(c, v); }
    // 0ee35a  call 0xe53e0
    X86_AT(c, 0xee35au);
    push32(c, 0xee35fu); f_000e53e0(c); X86_RET(c, 0xee35fu);
    X86_TICK(c, 13);
    // 0ee35f  add esp, 0x44
    X86_AT(c, 0xee35fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 0ee362  push eax
    X86_AT(c, 0xee362u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee363  push 4
    X86_AT(c, 0xee363u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee365  call 0xe6cb0
    X86_AT(c, 0xee365u);
    push32(c, 0xee36au); f_000e6cb0(c); X86_RET(c, 0xee36au);
    X86_TICK(c, 13);
    // 0ee36a  push 0xa
    X86_AT(c, 0xee36au);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0ee36c  push 0xb
    X86_AT(c, 0xee36cu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee36e  push 4
    X86_AT(c, 0xee36eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee370  call 0xe7260
    X86_AT(c, 0xee370u);
    push32(c, 0xee375u); f_000e7260(c); X86_RET(c, 0xee375u);
    X86_TICK(c, 11);
    // 0ee375  push 0x3cb0
    X86_AT(c, 0xee375u);
    { uint32_t v = 0x3CB0u; push32(c, v); }
    // 0ee37a  push 4
    X86_AT(c, 0xee37au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee37c  call 0xe5654
    X86_AT(c, 0xee37cu);
    push32(c, 0xee381u); f_000e5654(c); X86_RET(c, 0xee381u);
    X86_TICK(c, 19);
    // 0ee381  push ebx
    X86_AT(c, 0xee381u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ee382  mov al, byte ptr [esi + 0x72]
    X86_AT(c, 0xee382u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x72u))));
    // 0ee385  push eax
    X86_AT(c, 0xee385u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee386  push 0xa
    X86_AT(c, 0xee386u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0ee388  push 0xcfbe8
    X86_AT(c, 0xee388u);
    { uint32_t v = 0xCFBE8u; push32(c, v); }
    // 0ee38d  call 0xe53e0
    X86_AT(c, 0xee38du);
    push32(c, 0xee392u); f_000e53e0(c); X86_RET(c, 0xee392u);
    X86_TICK(c, 11);
    // 0ee392  push eax
    X86_AT(c, 0xee392u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee393  push 4
    X86_AT(c, 0xee393u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee395  call 0xe6cb0
    X86_AT(c, 0xee395u);
    push32(c, 0xee39au); f_000e6cb0(c); X86_RET(c, 0xee39au);
    X86_TICK(c, 13);
    // 0ee39a  push 0xb
    X86_AT(c, 0xee39au);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee39c  push 0xb
    X86_AT(c, 0xee39cu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee39e  push 4
    X86_AT(c, 0xee39eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee3a0  call 0xe7260
    X86_AT(c, 0xee3a0u);
    push32(c, 0xee3a5u); f_000e7260(c); X86_RET(c, 0xee3a5u);
    X86_TICK(c, 13);
    // 0ee3a5  add esp, 0x40
    X86_AT(c, 0xee3a5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ee3a8  push 0x3ce8
    X86_AT(c, 0xee3a8u);
    { uint32_t v = 0x3CE8u; push32(c, v); }
    // 0ee3ad  push 4
    X86_AT(c, 0xee3adu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee3af  call 0xe5654
    X86_AT(c, 0xee3afu);
    push32(c, 0xee3b4u); f_000e5654(c); X86_RET(c, 0xee3b4u);
    X86_TICK(c, 19);
    // 0ee3b4  push ebx
    X86_AT(c, 0xee3b4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ee3b5  mov al, byte ptr [esi + 0x55]
    X86_AT(c, 0xee3b5u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x55u))));
    // 0ee3b8  push eax
    X86_AT(c, 0xee3b8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee3b9  push 7
    X86_AT(c, 0xee3b9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ee3bb  push 0xcf84c
    X86_AT(c, 0xee3bbu);
    { uint32_t v = 0xCF84Cu; push32(c, v); }
    // 0ee3c0  call 0xe53e0
    X86_AT(c, 0xee3c0u);
    push32(c, 0xee3c5u); f_000e53e0(c); X86_RET(c, 0xee3c5u);
    X86_TICK(c, 11);
    // 0ee3c5  push eax
    X86_AT(c, 0xee3c5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee3c6  push 4
    X86_AT(c, 0xee3c6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee3c8  call 0xe6cb0
    X86_AT(c, 0xee3c8u);
    push32(c, 0xee3cdu); f_000e6cb0(c); X86_RET(c, 0xee3cdu);
    X86_TICK(c, 15);
    // 0ee3cd  add esp, 0x20
    X86_AT(c, 0xee3cdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0ee3d0  push 0xc
    X86_AT(c, 0xee3d0u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0ee3d2  push 0xb
    X86_AT(c, 0xee3d2u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee3d4  push 4
    X86_AT(c, 0xee3d4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee3d6  call 0xe7260
    X86_AT(c, 0xee3d6u);
    push32(c, 0xee3dbu); f_000e7260(c); X86_RET(c, 0xee3dbu);
    X86_TICK(c, 11);
    // 0ee3db  push 0x3d20
    X86_AT(c, 0xee3dbu);
    { uint32_t v = 0x3D20u; push32(c, v); }
    // 0ee3e0  push 4
    X86_AT(c, 0xee3e0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee3e2  call 0xe5654
    X86_AT(c, 0xee3e2u);
    push32(c, 0xee3e7u); f_000e5654(c); X86_RET(c, 0xee3e7u);
    X86_TICK(c, 16);
    // 0ee3e7  push 4
    X86_AT(c, 0xee3e7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee3e9  push dword ptr [esi + 0x16]
    X86_AT(c, 0xee3e9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x16u))); push32(c, v); }
    // 0ee3ec  push 4
    X86_AT(c, 0xee3ecu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee3ee  call 0xe5630
    X86_AT(c, 0xee3eeu);
    push32(c, 0xee3f3u); f_000e5630(c); X86_RET(c, 0xee3f3u);
    X86_TICK(c, 13);
    // 0ee3f3  push 0xd
    X86_AT(c, 0xee3f3u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0ee3f5  push 0xb
    X86_AT(c, 0xee3f5u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee3f7  push 4
    X86_AT(c, 0xee3f7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee3f9  call 0xe7260
    X86_AT(c, 0xee3f9u);
    push32(c, 0xee3feu); f_000e7260(c); X86_RET(c, 0xee3feu);
    X86_TICK(c, 11);
    // 0ee3fe  push 0x3d58
    X86_AT(c, 0xee3feu);
    { uint32_t v = 0x3D58u; push32(c, v); }
    // 0ee403  push 4
    X86_AT(c, 0xee403u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee405  call 0xe5654
    X86_AT(c, 0xee405u);
    push32(c, 0xee40au); f_000e5654(c); X86_RET(c, 0xee40au);
    X86_TICK(c, 16);
    // 0ee40a  push 4
    X86_AT(c, 0xee40au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee40c  push dword ptr [esi + 0x1a]
    X86_AT(c, 0xee40cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x1Au))); push32(c, v); }
    // 0ee40f  push 4
    X86_AT(c, 0xee40fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee411  call 0xe5630
    X86_AT(c, 0xee411u);
    push32(c, 0xee416u); f_000e5630(c); X86_RET(c, 0xee416u);
    X86_TICK(c, 15);
    // 0ee416  add esp, 0x40
    X86_AT(c, 0xee416u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ee419  push 0xe
    X86_AT(c, 0xee419u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ee41b  push 0xb
    X86_AT(c, 0xee41bu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee41d  push 4
    X86_AT(c, 0xee41du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee41f  call 0xe7260
    X86_AT(c, 0xee41fu);
    push32(c, 0xee424u); f_000e7260(c); X86_RET(c, 0xee424u);
    X86_TICK(c, 11);
    // 0ee424  push 0x3d90
    X86_AT(c, 0xee424u);
    { uint32_t v = 0x3D90u; push32(c, v); }
    // 0ee429  push 4
    X86_AT(c, 0xee429u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee42b  call 0xe5654
    X86_AT(c, 0xee42bu);
    push32(c, 0xee430u); f_000e5654(c); X86_RET(c, 0xee430u);
    X86_TICK(c, 16);
    // 0ee430  push 4
    X86_AT(c, 0xee430u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee432  push dword ptr [esi + 0x1e]
    X86_AT(c, 0xee432u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x1Eu))); push32(c, v); }
    // 0ee435  push 4
    X86_AT(c, 0xee435u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee437  call 0xe5630
    X86_AT(c, 0xee437u);
    push32(c, 0xee43cu); f_000e5630(c); X86_RET(c, 0xee43cu);
    X86_TICK(c, 13);
    // 0ee43c  push 0xf
    X86_AT(c, 0xee43cu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ee43e  push 0xb
    X86_AT(c, 0xee43eu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee440  push 4
    X86_AT(c, 0xee440u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee442  call 0xe7260
    X86_AT(c, 0xee442u);
    push32(c, 0xee447u); f_000e7260(c); X86_RET(c, 0xee447u);
    X86_TICK(c, 11);
    // 0ee447  push 0x3dc8
    X86_AT(c, 0xee447u);
    { uint32_t v = 0x3DC8u; push32(c, v); }
    // 0ee44c  push 4
    X86_AT(c, 0xee44cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee44e  call 0xe5654
    X86_AT(c, 0xee44eu);
    push32(c, 0xee453u); f_000e5654(c); X86_RET(c, 0xee453u);
    X86_TICK(c, 16);
    // 0ee453  push 4
    X86_AT(c, 0xee453u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee455  push dword ptr [esi + 0x22]
    X86_AT(c, 0xee455u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x22u))); push32(c, v); }
    // 0ee458  push 4
    X86_AT(c, 0xee458u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee45a  call 0xe5630
    X86_AT(c, 0xee45au);
    push32(c, 0xee45fu); f_000e5630(c); X86_RET(c, 0xee45fu);
    X86_TICK(c, 15);
    // 0ee45f  add esp, 0x40
    X86_AT(c, 0xee45fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ee462  push 0x10
    X86_AT(c, 0xee462u);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0ee464  push 0xb
    X86_AT(c, 0xee464u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee466  push 4
    X86_AT(c, 0xee466u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee468  call 0xe7260
    X86_AT(c, 0xee468u);
    push32(c, 0xee46du); f_000e7260(c); X86_RET(c, 0xee46du);
    X86_TICK(c, 11);
    // 0ee46d  push 0x3e00
    X86_AT(c, 0xee46du);
    { uint32_t v = 0x3E00u; push32(c, v); }
    // 0ee472  push 4
    X86_AT(c, 0xee472u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee474  call 0xe5654
    X86_AT(c, 0xee474u);
    push32(c, 0xee479u); f_000e5654(c); X86_RET(c, 0xee479u);
    X86_TICK(c, 16);
    // 0ee479  push 4
    X86_AT(c, 0xee479u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee47b  push dword ptr [esi + 0x26]
    X86_AT(c, 0xee47bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x26u))); push32(c, v); }
    // 0ee47e  push 4
    X86_AT(c, 0xee47eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee480  call 0xe5630
    X86_AT(c, 0xee480u);
    push32(c, 0xee485u); f_000e5630(c); X86_RET(c, 0xee485u);
    X86_TICK(c, 15);
    // 0ee485  add esp, 0x20
    X86_AT(c, 0xee485u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0ee488  push 0x11
    X86_AT(c, 0xee488u);
    { uint32_t v = 0x11u; push32(c, v); }
    // 0ee48a  push 0xb
    X86_AT(c, 0xee48au);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee48c  push 4
    X86_AT(c, 0xee48cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee48e  call 0xe7260
    X86_AT(c, 0xee48eu);
    push32(c, 0xee493u); f_000e7260(c); X86_RET(c, 0xee493u);
    X86_TICK(c, 11);
    // 0ee493  push 0x3e38
    X86_AT(c, 0xee493u);
    { uint32_t v = 0x3E38u; push32(c, v); }
    // 0ee498  push 4
    X86_AT(c, 0xee498u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee49a  call 0xe5654
    X86_AT(c, 0xee49au);
    push32(c, 0xee49fu); f_000e5654(c); X86_RET(c, 0xee49fu);
    X86_TICK(c, 16);
    // 0ee49f  push 4
    X86_AT(c, 0xee49fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee4a1  push dword ptr [esi + 0x2a]
    X86_AT(c, 0xee4a1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x2Au))); push32(c, v); }
    // 0ee4a4  push 4
    X86_AT(c, 0xee4a4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee4a6  call 0xe5630
    X86_AT(c, 0xee4a6u);
    push32(c, 0xee4abu); f_000e5630(c); X86_RET(c, 0xee4abu);
    X86_TICK(c, 13);
    // 0ee4ab  push 0x12
    X86_AT(c, 0xee4abu);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0ee4ad  push 0xb
    X86_AT(c, 0xee4adu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee4af  push 4
    X86_AT(c, 0xee4afu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee4b1  call 0xe7260
    X86_AT(c, 0xee4b1u);
    push32(c, 0xee4b6u); f_000e7260(c); X86_RET(c, 0xee4b6u);
    X86_TICK(c, 11);
    // 0ee4b6  push 0x3e70
    X86_AT(c, 0xee4b6u);
    { uint32_t v = 0x3E70u; push32(c, v); }
    // 0ee4bb  push 4
    X86_AT(c, 0xee4bbu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee4bd  call 0xe5654
    X86_AT(c, 0xee4bdu);
    push32(c, 0xee4c2u); f_000e5654(c); X86_RET(c, 0xee4c2u);
    X86_TICK(c, 16);
    // 0ee4c2  push 4
    X86_AT(c, 0xee4c2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee4c4  push dword ptr [esi + 0x35]
    X86_AT(c, 0xee4c4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x35u))); push32(c, v); }
    // 0ee4c7  push 4
    X86_AT(c, 0xee4c7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee4c9  call 0xe5630
    X86_AT(c, 0xee4c9u);
    push32(c, 0xee4ceu); f_000e5630(c); X86_RET(c, 0xee4ceu);
    X86_TICK(c, 15);
    // 0ee4ce  add esp, 0x40
    X86_AT(c, 0xee4ceu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ee4d1  push 0x13
    X86_AT(c, 0xee4d1u);
    { uint32_t v = 0x13u; push32(c, v); }
    // 0ee4d3  push 0xb
    X86_AT(c, 0xee4d3u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee4d5  push 4
    X86_AT(c, 0xee4d5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee4d7  call 0xe7260
    X86_AT(c, 0xee4d7u);
    push32(c, 0xee4dcu); f_000e7260(c); X86_RET(c, 0xee4dcu);
    X86_TICK(c, 11);
    // 0ee4dc  push 0x3ea8
    X86_AT(c, 0xee4dcu);
    { uint32_t v = 0x3EA8u; push32(c, v); }
    // 0ee4e1  push 4
    X86_AT(c, 0xee4e1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee4e3  call 0xe5654
    X86_AT(c, 0xee4e3u);
    push32(c, 0xee4e8u); f_000e5654(c); X86_RET(c, 0xee4e8u);
    X86_TICK(c, 16);
    // 0ee4e8  push 4
    X86_AT(c, 0xee4e8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee4ea  push dword ptr [esi + 0x3d]
    X86_AT(c, 0xee4eau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x3Du))); push32(c, v); }
    // 0ee4ed  push 4
    X86_AT(c, 0xee4edu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee4ef  call 0xe5630
    X86_AT(c, 0xee4efu);
    push32(c, 0xee4f4u); f_000e5630(c); X86_RET(c, 0xee4f4u);
    X86_TICK(c, 13);
    // 0ee4f4  push 0x14
    X86_AT(c, 0xee4f4u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0ee4f6  push 0xb
    X86_AT(c, 0xee4f6u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee4f8  push 4
    X86_AT(c, 0xee4f8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee4fa  call 0xe7260
    X86_AT(c, 0xee4fau);
    push32(c, 0xee4ffu); f_000e7260(c); X86_RET(c, 0xee4ffu);
    X86_TICK(c, 11);
    // 0ee4ff  push 0x3ee0
    X86_AT(c, 0xee4ffu);
    { uint32_t v = 0x3EE0u; push32(c, v); }
    // 0ee504  push 4
    X86_AT(c, 0xee504u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee506  call 0xe5654
    X86_AT(c, 0xee506u);
    push32(c, 0xee50bu); f_000e5654(c); X86_RET(c, 0xee50bu);
    X86_TICK(c, 61);
    // 0ee50b  push 4
    X86_AT(c, 0xee50bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee50d  mov eax, dword ptr [esi + 0x41]
    X86_AT(c, 0xee50du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x41u)));
    // 0ee510  cdq 
    X86_AT(c, 0xee510u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0ee511  mov ecx, 0x64
    X86_AT(c, 0xee511u);
    c.r[1] = 0x64u;
    // 0ee516  idiv ecx
    X86_AT(c, 0xee516u);
    x86_idiv(c, c.r[1], 4, 0xee516u);
    // 0ee518  push eax
    X86_AT(c, 0xee518u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee519  push 4
    X86_AT(c, 0xee519u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee51b  call 0xe5630
    X86_AT(c, 0xee51bu);
    push32(c, 0xee520u); f_000e5630(c); X86_RET(c, 0xee520u);
    X86_TICK(c, 15);
    // 0ee520  add esp, 0x40
    X86_AT(c, 0xee520u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ee523  push 0x15
    X86_AT(c, 0xee523u);
    { uint32_t v = 0x15u; push32(c, v); }
    // 0ee525  push 0xb
    X86_AT(c, 0xee525u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee527  push 4
    X86_AT(c, 0xee527u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee529  call 0xe7260
    X86_AT(c, 0xee529u);
    push32(c, 0xee52eu); f_000e7260(c); X86_RET(c, 0xee52eu);
    X86_TICK(c, 11);
    // 0ee52e  push 0x3f18
    X86_AT(c, 0xee52eu);
    { uint32_t v = 0x3F18u; push32(c, v); }
    // 0ee533  push 4
    X86_AT(c, 0xee533u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee535  call 0xe5654
    X86_AT(c, 0xee535u);
    push32(c, 0xee53au); f_000e5654(c); X86_RET(c, 0xee53au);
    X86_TICK(c, 18);
    // 0ee53a  add esp, 0x14
    X86_AT(c, 0xee53au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0ee53d  push 4
    X86_AT(c, 0xee53du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee53f  push dword ptr [esi + 0x45]
    X86_AT(c, 0xee53fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x45u))); push32(c, v); }
    // 0ee542  push 4
    X86_AT(c, 0xee542u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee544  call 0xe5630
    X86_AT(c, 0xee544u);
    push32(c, 0xee549u); f_000e5630(c); X86_RET(c, 0xee549u);
    X86_TICK(c, 9);
    // 0ee549  push 0x3f50
    X86_AT(c, 0xee549u);
    { uint32_t v = 0x3F50u; push32(c, v); }
    // 0ee54e  call 0xe75f8
    X86_AT(c, 0xee54eu);
    push32(c, 0xee553u); f_000e75f8(c); X86_RET(c, 0xee553u);
    X86_TICK(c, 2);
    // 0ee553  add esp, 0x10
    X86_AT(c, 0xee553u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_ee556:
    X86_TICK(c, 9);
    // 0ee556  push 4
    X86_AT(c, 0xee556u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee558  call 0xe4b60
    X86_AT(c, 0xee558u);
    push32(c, 0xee55du); f_000e4b60(c); X86_RET(c, 0xee55du);
    X86_TICK(c, 9);
    // 0ee55d  add esp, 4
    X86_AT(c, 0xee55du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ee560  and al, al
    X86_AT(c, 0xee560u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0ee562  je 0xee556
    X86_AT(c, 0xee562u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xee556u); goto L_ee556; }
    X86_TICK(c, 9);
    // 0ee564  push 2
    X86_AT(c, 0xee564u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ee566  call 0xe6c68
    X86_AT(c, 0xee566u);
    push32(c, 0xee56bu); f_000e6c68(c); X86_RET(c, 0xee56bu);
    X86_TICK(c, 9);
    // 0ee56b  push 4
    X86_AT(c, 0xee56bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee56d  call 0xe693c
    X86_AT(c, 0xee56du);
    push32(c, 0xee572u); f_000e693c(c); X86_RET(c, 0xee572u);
    X86_TICK(c, 17);
    // 0ee572  push 0x17
    X86_AT(c, 0xee572u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0ee574  push 0x4d
    X86_AT(c, 0xee574u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0ee576  push 4
    X86_AT(c, 0xee576u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee578  push 0
    X86_AT(c, 0xee578u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ee57a  push 4
    X86_AT(c, 0xee57au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee57c  call 0xe739c
    X86_AT(c, 0xee57cu);
    push32(c, 0xee581u); f_000e739c(c); X86_RET(c, 0xee581u);
    X86_TICK(c, 9);
    // 0ee581  add esp, 0x1c
    X86_AT(c, 0xee581u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0ee584  jmp 0xee0a4
    X86_AT(c, 0xee584u);
    X86_POLL(c, 0xee0a4u); goto L_ee0a4;
L_ee589:
    X86_TICK(c, 28);
    // 0ee589  pop edi
    X86_AT(c, 0xee589u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ee58a  pop esi
    X86_AT(c, 0xee58au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ee58b  pop ebx
    X86_AT(c, 0xee58bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ee58c  leave 
    X86_AT(c, 0xee58cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ee58d  ret 
    X86_AT(c, 0xee58du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xee0a4u, "ran off the end of a function");
}
void f_000ee590(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0ee590  push ebp
    X86_AT(c, 0xee590u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ee591  mov ebp, esp
    X86_AT(c, 0xee591u);
    c.r[5] = c.r[4];
    // 0ee593  sub esp, 0x24
    X86_AT(c, 0xee593u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x24u, 0, 4); }
    // 0ee596  push ebx
    X86_AT(c, 0xee596u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ee597  push esi
    X86_AT(c, 0xee597u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ee598  push edi
    X86_AT(c, 0xee598u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ee599  push 6
    X86_AT(c, 0xee599u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ee59b  call 0xe3530
    X86_AT(c, 0xee59bu);
    push32(c, 0xee5a0u); f_000e3530(c); X86_RET(c, 0xee5a0u);
    X86_TICK(c, 27);
    // 0ee5a0  push 0xd
    X86_AT(c, 0xee5a0u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0ee5a2  push 0xf
    X86_AT(c, 0xee5a2u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ee5a4  push 0xb
    X86_AT(c, 0xee5a4u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee5a6  push 0x17
    X86_AT(c, 0xee5a6u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0ee5a8  push 0x4d
    X86_AT(c, 0xee5a8u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0ee5aa  push 0x186
    X86_AT(c, 0xee5aau);
    { uint32_t v = 0x186u; push32(c, v); }
    // 0ee5af  push 0x276
    X86_AT(c, 0xee5afu);
    { uint32_t v = 0x276u; push32(c, v); }
    // 0ee5b4  push 0x1c
    X86_AT(c, 0xee5b4u);
    { uint32_t v = 0x1Cu; push32(c, v); }
    // 0ee5b6  push 5
    X86_AT(c, 0xee5b6u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ee5b8  push 4
    X86_AT(c, 0xee5b8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee5ba  call 0xe6858
    X86_AT(c, 0xee5bau);
    push32(c, 0xee5bfu); f_000e6858(c); X86_RET(c, 0xee5bfu);
    X86_TICK(c, 9);
    // 0ee5bf  push 4
    X86_AT(c, 0xee5bfu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee5c1  call 0xe699c
    X86_AT(c, 0xee5c1u);
    push32(c, 0xee5c6u); f_000e699c(c); X86_RET(c, 0xee5c6u);
    X86_TICK(c, 11);
    // 0ee5c6  push 0xe
    X86_AT(c, 0xee5c6u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ee5c8  push 4
    X86_AT(c, 0xee5c8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee5ca  call 0xe74d8
    X86_AT(c, 0xee5cau);
    push32(c, 0xee5cfu); f_000e74d8(c); X86_RET(c, 0xee5cfu);
    X86_TICK(c, 9);
    // 0ee5cf  push 4
    X86_AT(c, 0xee5cfu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee5d1  call 0xe693c
    X86_AT(c, 0xee5d1u);
    push32(c, 0xee5d6u); f_000e693c(c); X86_RET(c, 0xee5d6u);
    X86_TICK(c, 15);
    // 0ee5d6  add esp, 0x3c
    X86_AT(c, 0xee5d6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ee5d9  push 0
    X86_AT(c, 0xee5d9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ee5db  push 0x12
    X86_AT(c, 0xee5dbu);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0ee5dd  push 4
    X86_AT(c, 0xee5ddu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee5df  call 0xe7260
    X86_AT(c, 0xee5dfu);
    push32(c, 0xee5e4u); f_000e7260(c); X86_RET(c, 0xee5e4u);
    X86_TICK(c, 11);
    // 0ee5e4  push 0x3f84
    X86_AT(c, 0xee5e4u);
    { uint32_t v = 0x3F84u; push32(c, v); }
    // 0ee5e9  push 4
    X86_AT(c, 0xee5e9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee5eb  call 0xe5654
    X86_AT(c, 0xee5ebu);
    push32(c, 0xee5f0u); f_000e5654(c); X86_RET(c, 0xee5f0u);
    X86_TICK(c, 11);
    // 0ee5f0  push 0xb
    X86_AT(c, 0xee5f0u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee5f2  push 4
    X86_AT(c, 0xee5f2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee5f4  call 0xe74d8
    X86_AT(c, 0xee5f4u);
    push32(c, 0xee5f9u); f_000e74d8(c); X86_RET(c, 0xee5f9u);
    X86_TICK(c, 9);
    // 0ee5f9  push 4
    X86_AT(c, 0xee5f9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee5fb  call 0xe693c
    X86_AT(c, 0xee5fbu);
    push32(c, 0xee600u); f_000e693c(c); X86_RET(c, 0xee600u);
    X86_TICK(c, 13);
    // 0ee600  push 2
    X86_AT(c, 0xee600u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ee602  push 5
    X86_AT(c, 0xee602u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ee604  push 4
    X86_AT(c, 0xee604u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee606  call 0xe7260
    X86_AT(c, 0xee606u);
    push32(c, 0xee60bu); f_000e7260(c); X86_RET(c, 0xee60bu);
    X86_TICK(c, 11);
    // 0ee60b  push 0x3fc8
    X86_AT(c, 0xee60bu);
    { uint32_t v = 0x3FC8u; push32(c, v); }
    // 0ee610  push 4
    X86_AT(c, 0xee610u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee612  call 0xe5654
    X86_AT(c, 0xee612u);
    push32(c, 0xee617u); f_000e5654(c); X86_RET(c, 0xee617u);
    X86_TICK(c, 2);
    // 0ee617  add esp, 0x34
    X86_AT(c, 0xee617u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
L_ee61a:
    X86_TICK(c, 9);
    // 0ee61a  push 0
    X86_AT(c, 0xee61au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ee61c  call 0xe24d8
    X86_AT(c, 0xee61cu);
    push32(c, 0xee621u); f_000e24d8(c); X86_RET(c, 0xee621u);
    X86_TICK(c, 12);
    // 0ee621  xchg edi, eax
    X86_AT(c, 0xee621u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0ee622  push 4
    X86_AT(c, 0xee622u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee624  call 0xe693c
    X86_AT(c, 0xee624u);
    push32(c, 0xee629u); f_000e693c(c); X86_RET(c, 0xee629u);
    X86_TICK(c, 9);
    // 0ee629  add esp, 8
    X86_AT(c, 0xee629u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ee62c  cmp edi, 0xffffffff
    X86_AT(c, 0xee62cu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0ee62f  je 0xee63a
    X86_AT(c, 0xee62fu);
    if (x86_cc(c, 4)) { goto L_ee63a; }
    X86_TICK(c, 7);
    // 0ee631  and edi, edi
    X86_AT(c, 0xee631u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0ee633  je 0xee63a
    X86_AT(c, 0xee633u);
    if (x86_cc(c, 4)) { goto L_ee63a; }
    X86_TICK(c, 7);
    // 0ee635  cmp edi, 1
    X86_AT(c, 0xee635u);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0ee638  jne 0xee61a
    X86_AT(c, 0xee638u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xee61au); goto L_ee61a; }
L_ee63a:
    X86_TICK(c, 9);
    // 0ee63a  push 2
    X86_AT(c, 0xee63au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ee63c  call 0xe6c68
    X86_AT(c, 0xee63cu);
    push32(c, 0xee641u); f_000e6c68(c); X86_RET(c, 0xee641u);
    X86_TICK(c, 9);
    // 0ee641  add esp, 4
    X86_AT(c, 0xee641u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ee644  and edi, edi
    X86_AT(c, 0xee644u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0ee646  je 0xee670
    X86_AT(c, 0xee646u);
    if (x86_cc(c, 4)) { goto L_ee670; }
    X86_TICK(c, 13);
    // 0ee648  push 4
    X86_AT(c, 0xee648u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee64a  push 0
    X86_AT(c, 0xee64au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ee64c  push 4
    X86_AT(c, 0xee64cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee64e  call 0xe7260
    X86_AT(c, 0xee64eu);
    push32(c, 0xee653u); f_000e7260(c); X86_RET(c, 0xee653u);
    X86_TICK(c, 11);
    // 0ee653  push 0x3fe8
    X86_AT(c, 0xee653u);
    { uint32_t v = 0x3FE8u; push32(c, v); }
    // 0ee658  push 4
    X86_AT(c, 0xee658u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee65a  call 0xe5654
    X86_AT(c, 0xee65au);
    push32(c, 0xee65fu); f_000e5654(c); X86_RET(c, 0xee65fu);
    X86_TICK(c, 11);
    // 0ee65f  push 0
    X86_AT(c, 0xee65fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ee661  push 4
    X86_AT(c, 0xee661u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee663  call 0xe6b70
    X86_AT(c, 0xee663u);
    push32(c, 0xee668u); f_000e6b70(c); X86_RET(c, 0xee668u);
    X86_TICK(c, 9);
    // 0ee668  add esp, 0x1c
    X86_AT(c, 0xee668u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0ee66b  jmp 0xee795
    X86_AT(c, 0xee66bu);
    goto L_ee795;
L_ee670:
    X86_TICK(c, 9);
    // 0ee670  push 0x4028
    X86_AT(c, 0xee670u);
    { uint32_t v = 0x4028u; push32(c, v); }
    // 0ee675  call 0xe23cc
    X86_AT(c, 0xee675u);
    push32(c, 0xee67au); f_000e23cc(c); X86_RET(c, 0xee67au);
    X86_TICK(c, 9);
    // 0ee67a  add esp, 4
    X86_AT(c, 0xee67au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ee67d  and eax, eax
    X86_AT(c, 0xee67du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ee67f  jne 0xee686
    X86_AT(c, 0xee67fu);
    if (x86_cc(c, 5)) { goto L_ee686; }
    X86_TICK(c, 7);
    // 0ee681  call 0xe9d2c
    X86_AT(c, 0xee681u);
    push32(c, 0xee686u); f_000e9d2c(c); X86_RET(c, 0xee686u);
L_ee686:
    X86_TICK(c, 25);
    // 0ee686  push 0xd0110
    X86_AT(c, 0xee686u);
    { uint32_t v = 0xD0110u; push32(c, v); }
    // 0ee68b  push 3
    X86_AT(c, 0xee68bu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ee68d  push 2
    X86_AT(c, 0xee68du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ee68f  push 1
    X86_AT(c, 0xee68fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ee691  push 0x2e
    X86_AT(c, 0xee691u);
    { uint32_t v = 0x2Eu; push32(c, v); }
    // 0ee693  push 5
    X86_AT(c, 0xee693u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ee695  push 4
    X86_AT(c, 0xee695u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee697  lea eax, [ebp - 0x24]
    X86_AT(c, 0xee697u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFDCu);
    // 0ee69a  push eax
    X86_AT(c, 0xee69au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee69b  call 0xe50c8
    X86_AT(c, 0xee69bu);
    push32(c, 0xee6a0u); f_000e50c8(c); X86_RET(c, 0xee6a0u);
    X86_TICK(c, 2);
    // 0ee6a0  add esp, 0x20
    X86_AT(c, 0xee6a0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_ee6a3:
    X86_TICK(c, 9);
    // 0ee6a3  push 4
    X86_AT(c, 0xee6a3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee6a5  call 0xe693c
    X86_AT(c, 0xee6a5u);
    push32(c, 0xee6aau); f_000e693c(c); X86_RET(c, 0xee6aau);
    X86_TICK(c, 13);
    // 0ee6aa  push 2
    X86_AT(c, 0xee6aau);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ee6ac  push 0x13
    X86_AT(c, 0xee6acu);
    { uint32_t v = 0x13u; push32(c, v); }
    // 0ee6ae  push 4
    X86_AT(c, 0xee6aeu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee6b0  call 0xe7260
    X86_AT(c, 0xee6b0u);
    push32(c, 0xee6b5u); f_000e7260(c); X86_RET(c, 0xee6b5u);
    X86_TICK(c, 11);
    // 0ee6b5  push 0x4038
    X86_AT(c, 0xee6b5u);
    { uint32_t v = 0x4038u; push32(c, v); }
    // 0ee6ba  push 4
    X86_AT(c, 0xee6bau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee6bc  call 0xe6cb0
    X86_AT(c, 0xee6bcu);
    push32(c, 0xee6c1u); f_000e6cb0(c); X86_RET(c, 0xee6c1u);
    X86_TICK(c, 15);
    // 0ee6c1  push 0x4d
    X86_AT(c, 0xee6c1u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0ee6c3  lea eax, [ebp - 0x24]
    X86_AT(c, 0xee6c3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFDCu);
    // 0ee6c6  push eax
    X86_AT(c, 0xee6c6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee6c7  push 4
    X86_AT(c, 0xee6c7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee6c9  call 0xe5448
    X86_AT(c, 0xee6c9u);
    push32(c, 0xee6ceu); f_000e5448(c); X86_RET(c, 0xee6ceu);
    X86_TICK(c, 16);
    // 0ee6ce  xchg ebx, eax
    X86_AT(c, 0xee6ceu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0ee6cf  push 2
    X86_AT(c, 0xee6cfu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ee6d1  push 0x13
    X86_AT(c, 0xee6d1u);
    { uint32_t v = 0x13u; push32(c, v); }
    // 0ee6d3  push 4
    X86_AT(c, 0xee6d3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee6d5  call 0xe7260
    X86_AT(c, 0xee6d5u);
    push32(c, 0xee6dau); f_000e7260(c); X86_RET(c, 0xee6dau);
    X86_TICK(c, 19);
    // 0ee6da  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0xee6dau);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
    // 0ee6de  lea esi, [ebp - 1]
    X86_AT(c, 0xee6deu);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0ee6e1  push esi
    X86_AT(c, 0xee6e1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ee6e2  push ebx
    X86_AT(c, 0xee6e2u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ee6e3  push 5
    X86_AT(c, 0xee6e3u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ee6e5  push 0xd03a4
    X86_AT(c, 0xee6e5u);
    { uint32_t v = 0xD03A4u; push32(c, v); }
    // 0ee6ea  call 0xe53e0
    X86_AT(c, 0xee6eau);
    push32(c, 0xee6efu); f_000e53e0(c); X86_RET(c, 0xee6efu);
    X86_TICK(c, 13);
    // 0ee6ef  add esp, 0x40
    X86_AT(c, 0xee6efu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ee6f2  push eax
    X86_AT(c, 0xee6f2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee6f3  push 4
    X86_AT(c, 0xee6f3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee6f5  call 0xe6cb0
    X86_AT(c, 0xee6f5u);
    push32(c, 0xee6fau); f_000e6cb0(c); X86_RET(c, 0xee6fau);
    X86_TICK(c, 9);
    // 0ee6fa  push 0x14
    X86_AT(c, 0xee6fau);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0ee6fc  call 0xe9740
    X86_AT(c, 0xee6fcu);
    push32(c, 0xee701u); f_000e9740(c); X86_RET(c, 0xee701u);
    X86_TICK(c, 17);
    // 0ee701  add esp, 0xc
    X86_AT(c, 0xee701u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ee704  movzx edx, byte ptr [esi]
    X86_AT(c, 0xee704u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0ee707  sub edx, 0x43
    X86_AT(c, 0xee707u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x43u, 0, 4); }
    // 0ee70a  cmp edx, 0x11
    X86_AT(c, 0xee70au);
    (void)x86_sub(c, c.r[2], 0x11u, 0, 4);
    // 0ee70d  ja 0xee6a3
    X86_AT(c, 0xee70du);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xee6a3u); goto L_ee6a3; }
    X86_TICK(c, 7);
    // 0ee70f  jmp dword ptr cs:[edx*4 + 0xee717]
    X86_AT(c, 0xee70fu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xEE717u)));
      switch (t) {
      case 0xee6a3u: X86_POLL(c, 0xee6a3u); goto L_ee6a3;
      case 0xee75fu: goto L_ee75f;
      case 0xee76du: goto L_ee76d;
      case 0xee777u: goto L_ee777;
      case 0xee781u: goto L_ee781;
      case 0xee78bu: goto L_ee78b;
      default: x86_jump(c, t); return; } }
L_ee75f:
    X86_TICK(c, 11);
    // 0ee75f  push 0
    X86_AT(c, 0xee75fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ee761  push 4
    X86_AT(c, 0xee761u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee763  call 0xe6b70
    X86_AT(c, 0xee763u);
    push32(c, 0xee768u); f_000e6b70(c); X86_RET(c, 0xee768u);
    X86_TICK(c, 9);
    // 0ee768  add esp, 8
    X86_AT(c, 0xee768u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ee76b  jmp 0xee795
    X86_AT(c, 0xee76bu);
    goto L_ee795;
L_ee76d:
    X86_TICK(c, 7);
    // 0ee76d  call 0xebf74
    X86_AT(c, 0xee76du);
    push32(c, 0xee772u); f_000ebf74(c); X86_RET(c, 0xee772u);
    X86_TICK(c, 7);
    // 0ee772  jmp 0xee6a3
    X86_AT(c, 0xee772u);
    X86_POLL(c, 0xee6a3u); goto L_ee6a3;
L_ee777:
    X86_TICK(c, 7);
    // 0ee777  call 0xed610
    X86_AT(c, 0xee777u);
    push32(c, 0xee77cu); f_000ed610(c); X86_RET(c, 0xee77cu);
    X86_TICK(c, 7);
    // 0ee77c  jmp 0xee6a3
    X86_AT(c, 0xee77cu);
    X86_POLL(c, 0xee6a3u); goto L_ee6a3;
L_ee781:
    X86_TICK(c, 7);
    // 0ee781  call 0xedd38
    X86_AT(c, 0xee781u);
    push32(c, 0xee786u); f_000edd38(c); X86_RET(c, 0xee786u);
    X86_TICK(c, 7);
    // 0ee786  jmp 0xee6a3
    X86_AT(c, 0xee786u);
    X86_POLL(c, 0xee6a3u); goto L_ee6a3;
L_ee78b:
    X86_TICK(c, 7);
    // 0ee78b  call 0xee074
    X86_AT(c, 0xee78bu);
    push32(c, 0xee790u); f_000ee074(c); X86_RET(c, 0xee790u);
    X86_TICK(c, 7);
    // 0ee790  jmp 0xee6a3
    X86_AT(c, 0xee790u);
    X86_POLL(c, 0xee6a3u); goto L_ee6a3;
L_ee795:
    X86_TICK(c, 28);
    // 0ee795  pop edi
    X86_AT(c, 0xee795u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ee796  pop esi
    X86_AT(c, 0xee796u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ee797  pop ebx
    X86_AT(c, 0xee797u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ee798  leave 
    X86_AT(c, 0xee798u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ee799  ret 
    X86_AT(c, 0xee799u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xee590u, "ran off the end of a function");
}
void f_000ee6a3(X86Cpu& c) {
L_ee6a3:
    X86_TICK(c, 9);
    // 0ee6a3  push 4
    X86_AT(c, 0xee6a3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee6a5  call 0xe693c
    X86_AT(c, 0xee6a5u);
    push32(c, 0xee6aau); f_000e693c(c); X86_RET(c, 0xee6aau);
    X86_TICK(c, 13);
    // 0ee6aa  push 2
    X86_AT(c, 0xee6aau);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ee6ac  push 0x13
    X86_AT(c, 0xee6acu);
    { uint32_t v = 0x13u; push32(c, v); }
    // 0ee6ae  push 4
    X86_AT(c, 0xee6aeu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee6b0  call 0xe7260
    X86_AT(c, 0xee6b0u);
    push32(c, 0xee6b5u); f_000e7260(c); X86_RET(c, 0xee6b5u);
    X86_TICK(c, 11);
    // 0ee6b5  push 0x4038
    X86_AT(c, 0xee6b5u);
    { uint32_t v = 0x4038u; push32(c, v); }
    // 0ee6ba  push 4
    X86_AT(c, 0xee6bau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee6bc  call 0xe6cb0
    X86_AT(c, 0xee6bcu);
    push32(c, 0xee6c1u); f_000e6cb0(c); X86_RET(c, 0xee6c1u);
    X86_TICK(c, 15);
    // 0ee6c1  push 0x4d
    X86_AT(c, 0xee6c1u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0ee6c3  lea eax, [ebp - 0x24]
    X86_AT(c, 0xee6c3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFDCu);
    // 0ee6c6  push eax
    X86_AT(c, 0xee6c6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee6c7  push 4
    X86_AT(c, 0xee6c7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee6c9  call 0xe5448
    X86_AT(c, 0xee6c9u);
    push32(c, 0xee6ceu); f_000e5448(c); X86_RET(c, 0xee6ceu);
    X86_TICK(c, 16);
    // 0ee6ce  xchg ebx, eax
    X86_AT(c, 0xee6ceu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0ee6cf  push 2
    X86_AT(c, 0xee6cfu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ee6d1  push 0x13
    X86_AT(c, 0xee6d1u);
    { uint32_t v = 0x13u; push32(c, v); }
    // 0ee6d3  push 4
    X86_AT(c, 0xee6d3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee6d5  call 0xe7260
    X86_AT(c, 0xee6d5u);
    push32(c, 0xee6dau); f_000e7260(c); X86_RET(c, 0xee6dau);
    X86_TICK(c, 19);
    // 0ee6da  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0xee6dau);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
    // 0ee6de  lea esi, [ebp - 1]
    X86_AT(c, 0xee6deu);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0ee6e1  push esi
    X86_AT(c, 0xee6e1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ee6e2  push ebx
    X86_AT(c, 0xee6e2u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ee6e3  push 5
    X86_AT(c, 0xee6e3u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ee6e5  push 0xd03a4
    X86_AT(c, 0xee6e5u);
    { uint32_t v = 0xD03A4u; push32(c, v); }
    // 0ee6ea  call 0xe53e0
    X86_AT(c, 0xee6eau);
    push32(c, 0xee6efu); f_000e53e0(c); X86_RET(c, 0xee6efu);
    X86_TICK(c, 13);
    // 0ee6ef  add esp, 0x40
    X86_AT(c, 0xee6efu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ee6f2  push eax
    X86_AT(c, 0xee6f2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee6f3  push 4
    X86_AT(c, 0xee6f3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee6f5  call 0xe6cb0
    X86_AT(c, 0xee6f5u);
    push32(c, 0xee6fau); f_000e6cb0(c); X86_RET(c, 0xee6fau);
    X86_TICK(c, 9);
    // 0ee6fa  push 0x14
    X86_AT(c, 0xee6fau);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0ee6fc  call 0xe9740
    X86_AT(c, 0xee6fcu);
    push32(c, 0xee701u); f_000e9740(c); X86_RET(c, 0xee701u);
    X86_TICK(c, 17);
    // 0ee701  add esp, 0xc
    X86_AT(c, 0xee701u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ee704  movzx edx, byte ptr [esi]
    X86_AT(c, 0xee704u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0ee707  sub edx, 0x43
    X86_AT(c, 0xee707u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x43u, 0, 4); }
    // 0ee70a  cmp edx, 0x11
    X86_AT(c, 0xee70au);
    (void)x86_sub(c, c.r[2], 0x11u, 0, 4);
    // 0ee70d  ja 0xee6a3
    X86_AT(c, 0xee70du);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xee6a3u); goto L_ee6a3; }
    X86_TICK(c, 7);
    // 0ee70f  jmp dword ptr cs:[edx*4 + 0xee717]
    X86_AT(c, 0xee70fu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xEE717u)));
      switch (t) {
      case 0xee6a3u: X86_POLL(c, 0xee6a3u); goto L_ee6a3;
      case 0xee75fu: goto L_ee75f;
      case 0xee76du: goto L_ee76d;
      case 0xee777u: goto L_ee777;
      case 0xee781u: goto L_ee781;
      case 0xee78bu: goto L_ee78b;
      default: x86_jump(c, t); return; } }
L_ee75f:
    X86_TICK(c, 11);
    // 0ee75f  push 0
    X86_AT(c, 0xee75fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ee761  push 4
    X86_AT(c, 0xee761u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee763  call 0xe6b70
    X86_AT(c, 0xee763u);
    push32(c, 0xee768u); f_000e6b70(c); X86_RET(c, 0xee768u);
    X86_TICK(c, 9);
    // 0ee768  add esp, 8
    X86_AT(c, 0xee768u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ee76b  jmp 0xee795
    X86_AT(c, 0xee76bu);
    goto L_ee795;
L_ee76d:
    X86_TICK(c, 7);
    // 0ee76d  call 0xebf74
    X86_AT(c, 0xee76du);
    push32(c, 0xee772u); f_000ebf74(c); X86_RET(c, 0xee772u);
    X86_TICK(c, 7);
    // 0ee772  jmp 0xee6a3
    X86_AT(c, 0xee772u);
    X86_POLL(c, 0xee6a3u); goto L_ee6a3;
L_ee777:
    X86_TICK(c, 7);
    // 0ee777  call 0xed610
    X86_AT(c, 0xee777u);
    push32(c, 0xee77cu); f_000ed610(c); X86_RET(c, 0xee77cu);
    X86_TICK(c, 7);
    // 0ee77c  jmp 0xee6a3
    X86_AT(c, 0xee77cu);
    X86_POLL(c, 0xee6a3u); goto L_ee6a3;
L_ee781:
    X86_TICK(c, 7);
    // 0ee781  call 0xedd38
    X86_AT(c, 0xee781u);
    push32(c, 0xee786u); f_000edd38(c); X86_RET(c, 0xee786u);
    X86_TICK(c, 7);
    // 0ee786  jmp 0xee6a3
    X86_AT(c, 0xee786u);
    X86_POLL(c, 0xee6a3u); goto L_ee6a3;
L_ee78b:
    X86_TICK(c, 7);
    // 0ee78b  call 0xee074
    X86_AT(c, 0xee78bu);
    push32(c, 0xee790u); f_000ee074(c); X86_RET(c, 0xee790u);
    X86_TICK(c, 7);
    // 0ee790  jmp 0xee6a3
    X86_AT(c, 0xee790u);
    X86_POLL(c, 0xee6a3u); goto L_ee6a3;
L_ee795:
    X86_TICK(c, 28);
    // 0ee795  pop edi
    X86_AT(c, 0xee795u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ee796  pop esi
    X86_AT(c, 0xee796u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ee797  pop ebx
    X86_AT(c, 0xee797u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ee798  leave 
    X86_AT(c, 0xee798u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ee799  ret 
    X86_AT(c, 0xee799u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xee6a3u, "ran off the end of a function");
}
void f_000ee79c(X86Cpu& c) {
    X86_TICK(c, 39);
    // 0ee79c  push ebp
    X86_AT(c, 0xee79cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ee79d  mov ebp, esp
    X86_AT(c, 0xee79du);
    c.r[5] = c.r[4];
    // 0ee79f  sub esp, 0x234
    X86_AT(c, 0xee79fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x234u, 0, 4); }
    // 0ee7a5  push ebx
    X86_AT(c, 0xee7a5u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ee7a6  push esi
    X86_AT(c, 0xee7a6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ee7a7  push edi
    X86_AT(c, 0xee7a7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ee7a8  push 0xd
    X86_AT(c, 0xee7a8u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0ee7aa  push 0xf
    X86_AT(c, 0xee7aau);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ee7ac  push 0xb
    X86_AT(c, 0xee7acu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ee7ae  push 0x17
    X86_AT(c, 0xee7aeu);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0ee7b0  push 0x4d
    X86_AT(c, 0xee7b0u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0ee7b2  push 0xc0
    X86_AT(c, 0xee7b2u);
    { uint32_t v = 0xC0u; push32(c, v); }
    // 0ee7b7  push 0x270
    X86_AT(c, 0xee7b7u);
    { uint32_t v = 0x270u; push32(c, v); }
    // 0ee7bc  push 0xb8
    X86_AT(c, 0xee7bcu);
    { uint32_t v = 0xB8u; push32(c, v); }
    // 0ee7c1  push 8
    X86_AT(c, 0xee7c1u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0ee7c3  push 4
    X86_AT(c, 0xee7c3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee7c5  call 0xe6858
    X86_AT(c, 0xee7c5u);
    push32(c, 0xee7cau); f_000e6858(c); X86_RET(c, 0xee7cau);
    X86_TICK(c, 9);
    // 0ee7ca  push 4
    X86_AT(c, 0xee7cau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee7cc  call 0xe699c
    X86_AT(c, 0xee7ccu);
    push32(c, 0xee7d1u); f_000e699c(c); X86_RET(c, 0xee7d1u);
    X86_TICK(c, 9);
    // 0ee7d1  push 4
    X86_AT(c, 0xee7d1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee7d3  call 0xe693c
    X86_AT(c, 0xee7d3u);
    push32(c, 0xee7d8u); f_000e693c(c); X86_RET(c, 0xee7d8u);
    X86_TICK(c, 13);
    // 0ee7d8  push 1
    X86_AT(c, 0xee7d8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ee7da  push 0x16
    X86_AT(c, 0xee7dau);
    { uint32_t v = 0x16u; push32(c, v); }
    // 0ee7dc  push 4
    X86_AT(c, 0xee7dcu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee7de  call 0xe7260
    X86_AT(c, 0xee7deu);
    push32(c, 0xee7e3u); f_000e7260(c); X86_RET(c, 0xee7e3u);
    X86_TICK(c, 13);
    // 0ee7e3  add esp, 0x3c
    X86_AT(c, 0xee7e3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ee7e6  push 0x4050
    X86_AT(c, 0xee7e6u);
    { uint32_t v = 0x4050u; push32(c, v); }
    // 0ee7eb  push 4
    X86_AT(c, 0xee7ebu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee7ed  call 0xe5654
    X86_AT(c, 0xee7edu);
    push32(c, 0xee7f2u); f_000e5654(c); X86_RET(c, 0xee7f2u);
    X86_TICK(c, 27);
    // 0ee7f2  lea eax, [ebp - 0x234]
    X86_AT(c, 0xee7f2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFDCCu);
    // 0ee7f8  push eax
    X86_AT(c, 0xee7f8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee7f9  push 4
    X86_AT(c, 0xee7f9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee7fb  push 0x1c
    X86_AT(c, 0xee7fbu);
    { uint32_t v = 0x1Cu; push32(c, v); }
    // 0ee7fd  push 1
    X86_AT(c, 0xee7fdu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ee7ff  push 0x10
    X86_AT(c, 0xee7ffu);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0ee801  push 4
    X86_AT(c, 0xee801u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee803  push 4
    X86_AT(c, 0xee803u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee805  lea eax, [ebp - 0x24]
    X86_AT(c, 0xee805u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFDCu);
    // 0ee808  push eax
    X86_AT(c, 0xee808u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee809  call 0xe50c8
    X86_AT(c, 0xee809u);
    push32(c, 0xee80eu); f_000e50c8(c); X86_RET(c, 0xee80eu);
    X86_TICK(c, 4);
    // 0ee80e  sub edi, edi
    X86_AT(c, 0xee80eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0ee810  add esp, 0x28
    X86_AT(c, 0xee810u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
L_ee813:
    X86_TICK(c, 7);
    // 0ee813  cmp edi, 4
    X86_AT(c, 0xee813u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0ee816  jge 0xee879
    X86_AT(c, 0xee816u);
    if (x86_cc(c, 13)) { goto L_ee879; }
    X86_TICK(c, 9);
    // 0ee818  push 4
    X86_AT(c, 0xee818u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee81a  call 0xe693c
    X86_AT(c, 0xee81au);
    push32(c, 0xee81fu); f_000e693c(c); X86_RET(c, 0xee81fu);
    X86_TICK(c, 15);
    // 0ee81f  lea eax, [edi + 4]
    X86_AT(c, 0xee81fu);
    c.r[0] = (uint32_t)(c.r[7] + 0x4u);
    // 0ee822  push eax
    X86_AT(c, 0xee822u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee823  push 0x16
    X86_AT(c, 0xee823u);
    { uint32_t v = 0x16u; push32(c, v); }
    // 0ee825  push 4
    X86_AT(c, 0xee825u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee827  call 0xe7260
    X86_AT(c, 0xee827u);
    push32(c, 0xee82cu); f_000e7260(c); X86_RET(c, 0xee82cu);
    X86_TICK(c, 17);
    // 0ee82c  push 2
    X86_AT(c, 0xee82cu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ee82e  lea eax, [edi + 1]
    X86_AT(c, 0xee82eu);
    c.r[0] = (uint32_t)(c.r[7] + 0x1u);
    // 0ee831  push eax
    X86_AT(c, 0xee831u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee832  push 4
    X86_AT(c, 0xee832u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee834  mov esi, eax
    X86_AT(c, 0xee834u);
    c.r[6] = c.r[0];
    // 0ee836  call 0xe5630
    X86_AT(c, 0xee836u);
    push32(c, 0xee83bu); f_000e5630(c); X86_RET(c, 0xee83bu);
    X86_TICK(c, 11);
    // 0ee83b  push 0x4088
    X86_AT(c, 0xee83bu);
    { uint32_t v = 0x4088u; push32(c, v); }
    // 0ee840  push 4
    X86_AT(c, 0xee840u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee842  call 0xe6cb0
    X86_AT(c, 0xee842u);
    push32(c, 0xee847u); f_000e6cb0(c); X86_RET(c, 0xee847u);
    X86_TICK(c, 40);
    // 0ee847  lea eax, [edi + 0x41]
    X86_AT(c, 0xee847u);
    c.r[0] = (uint32_t)(c.r[7] + 0x41u);
    // 0ee84a  push eax
    X86_AT(c, 0xee84au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee84b  mov eax, edi
    X86_AT(c, 0xee84bu);
    c.r[0] = c.r[7];
    // 0ee84d  lea edx, [eax + eax*4]
    X86_AT(c, 0xee84du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ee850  lea edx, [eax + edx*2]
    X86_AT(c, 0xee850u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ee853  shl edx, 5
    X86_AT(c, 0xee853u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ee856  sub edx, eax
    X86_AT(c, 0xee856u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ee858  add edx, 0xcde4d
    X86_AT(c, 0xee858u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xCDE4Du, 0, 4); }
    // 0ee85e  push edx
    X86_AT(c, 0xee85eu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0ee85f  push edx
    X86_AT(c, 0xee85fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0ee860  mov eax, edi
    X86_AT(c, 0xee860u);
    c.r[0] = c.r[7];
    // 0ee862  add al, 0x41
    X86_AT(c, 0xee862u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x41u, 0, 1)); }
    // 0ee864  push eax
    X86_AT(c, 0xee864u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee865  push edi
    X86_AT(c, 0xee865u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ee866  lea eax, [ebp - 0x234]
    X86_AT(c, 0xee866u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFDCCu);
    // 0ee86c  push eax
    X86_AT(c, 0xee86cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee86d  call 0xe5104
    X86_AT(c, 0xee86du);
    push32(c, 0xee872u); f_000e5104(c); X86_RET(c, 0xee872u);
    X86_TICK(c, 11);
    // 0ee872  add esp, 0x3c
    X86_AT(c, 0xee872u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ee875  mov edi, esi
    X86_AT(c, 0xee875u);
    c.r[7] = c.r[6];
    // 0ee877  jmp 0xee813
    X86_AT(c, 0xee877u);
    X86_POLL(c, 0xee813u); goto L_ee813;
L_ee879:
    X86_TICK(c, 9);
    // 0ee879  push 4
    X86_AT(c, 0xee879u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee87b  call 0xe693c
    X86_AT(c, 0xee87bu);
    push32(c, 0xee880u); f_000e693c(c); X86_RET(c, 0xee880u);
    X86_TICK(c, 13);
    // 0ee880  push 9
    X86_AT(c, 0xee880u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0ee882  push 0x1a
    X86_AT(c, 0xee882u);
    { uint32_t v = 0x1Au; push32(c, v); }
    // 0ee884  push 4
    X86_AT(c, 0xee884u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee886  call 0xe7260
    X86_AT(c, 0xee886u);
    push32(c, 0xee88bu); f_000e7260(c); X86_RET(c, 0xee88bu);
    X86_TICK(c, 11);
    // 0ee88b  push 0x408c
    X86_AT(c, 0xee88bu);
    { uint32_t v = 0x408Cu; push32(c, v); }
    // 0ee890  push 4
    X86_AT(c, 0xee890u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee892  call 0xe5654
    X86_AT(c, 0xee892u);
    push32(c, 0xee897u); f_000e5654(c); X86_RET(c, 0xee897u);
    X86_TICK(c, 15);
    // 0ee897  push 1
    X86_AT(c, 0xee897u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ee899  lea eax, [ebp - 0x24]
    X86_AT(c, 0xee899u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFDCu);
    // 0ee89c  push eax
    X86_AT(c, 0xee89cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ee89d  push 4
    X86_AT(c, 0xee89du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee89f  call 0xe553c
    X86_AT(c, 0xee89fu);
    push32(c, 0xee8a4u); f_000e553c(c); X86_RET(c, 0xee8a4u);
    X86_TICK(c, 11);
    // 0ee8a4  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xee8a4u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0ee8a7  add esp, 0x24
    X86_AT(c, 0xee8a7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0ee8aa  dec al
    X86_AT(c, 0xee8aau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0ee8ac  jne 0xee901
    X86_AT(c, 0xee8acu);
    if (x86_cc(c, 5)) { goto L_ee901; }
    X86_TICK(c, 13);
    // 0ee8ae  push 9
    X86_AT(c, 0xee8aeu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0ee8b0  push 0x1a
    X86_AT(c, 0xee8b0u);
    { uint32_t v = 0x1Au; push32(c, v); }
    // 0ee8b2  push 4
    X86_AT(c, 0xee8b2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee8b4  call 0xe7260
    X86_AT(c, 0xee8b4u);
    push32(c, 0xee8b9u); f_000e7260(c); X86_RET(c, 0xee8b9u);
    X86_TICK(c, 11);
    // 0ee8b9  push 0x40dc
    X86_AT(c, 0xee8b9u);
    { uint32_t v = 0x40DCu; push32(c, v); }
    // 0ee8be  push 4
    X86_AT(c, 0xee8beu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee8c0  call 0xe5654
    X86_AT(c, 0xee8c0u);
    push32(c, 0xee8c5u); f_000e5654(c); X86_RET(c, 0xee8c5u);
    X86_TICK(c, 9);
    // 0ee8c5  push 0x412c
    X86_AT(c, 0xee8c5u);
    { uint32_t v = 0x412Cu; push32(c, v); }
    // 0ee8ca  call 0xe75f8
    X86_AT(c, 0xee8cau);
    push32(c, 0xee8cfu); f_000e75f8(c); X86_RET(c, 0xee8cfu);
    X86_TICK(c, 2);
    // 0ee8cf  add esp, 0x18
    X86_AT(c, 0xee8cfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_ee8d2:
    X86_TICK(c, 9);
    // 0ee8d2  push 4
    X86_AT(c, 0xee8d2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee8d4  call 0xe4b60
    X86_AT(c, 0xee8d4u);
    push32(c, 0xee8d9u); f_000e4b60(c); X86_RET(c, 0xee8d9u);
    X86_TICK(c, 9);
    // 0ee8d9  add esp, 4
    X86_AT(c, 0xee8d9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ee8dc  and al, al
    X86_AT(c, 0xee8dcu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0ee8de  je 0xee8d2
    X86_AT(c, 0xee8deu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xee8d2u); goto L_ee8d2; }
    X86_TICK(c, 9);
    // 0ee8e0  push 2
    X86_AT(c, 0xee8e0u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ee8e2  call 0xe6c68
    X86_AT(c, 0xee8e2u);
    push32(c, 0xee8e7u); f_000e6c68(c); X86_RET(c, 0xee8e7u);
    X86_TICK(c, 9);
    // 0ee8e7  push 4
    X86_AT(c, 0xee8e7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee8e9  call 0xe693c
    X86_AT(c, 0xee8e9u);
    push32(c, 0xee8eeu); f_000e693c(c); X86_RET(c, 0xee8eeu);
    X86_TICK(c, 11);
    // 0ee8ee  push 0
    X86_AT(c, 0xee8eeu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ee8f0  push 4
    X86_AT(c, 0xee8f0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee8f2  call 0xe6b70
    X86_AT(c, 0xee8f2u);
    push32(c, 0xee8f7u); f_000e6b70(c); X86_RET(c, 0xee8f7u);
    X86_TICK(c, 9);
    // 0ee8f7  mov eax, 0xffffffff
    X86_AT(c, 0xee8f7u);
    c.r[0] = 0xFFFFFFFFu;
    // 0ee8fc  jmp 0xeea4f
    X86_AT(c, 0xee8fcu);
    goto L_eea4f;
L_ee901:
    X86_TICK(c, 11);
    // 0ee901  mov al, byte ptr [ebp - 1]
    X86_AT(c, 0xee901u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))));
    // 0ee904  cmp al, 0x41
    X86_AT(c, 0xee904u);
    (void)x86_sub(c, g8(c, 0), 0x41u, 0, 1);
    // 0ee906  jb 0xee879
    X86_AT(c, 0xee906u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xee879u); goto L_ee879; }
    X86_TICK(c, 34);
    // 0ee90c  sub byte ptr [ebp - 1], 0x41
    X86_AT(c, 0xee90cu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)); uint32_t v = rd8(ea); wr8(ea, x86_sub(c, v, 0x41u, 0, 1)); }
    // 0ee910  movzx eax, byte ptr [ebp - 1]
    X86_AT(c, 0xee910u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)));
    // 0ee914  lea edx, [eax + eax*4]
    X86_AT(c, 0xee914u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ee917  lea edx, [eax + edx*2]
    X86_AT(c, 0xee917u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ee91a  shl edx, 5
    X86_AT(c, 0xee91au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ee91d  sub edx, eax
    X86_AT(c, 0xee91du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ee91f  cmp byte ptr [edx + 0xcde4d], 0
    X86_AT(c, 0xee91fu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE4Du))), 0x0u, 0, 1);
    // 0ee926  jne 0xee970
    X86_AT(c, 0xee926u);
    if (x86_cc(c, 5)) { goto L_ee970; }
    X86_TICK(c, 13);
    // 0ee928  push 9
    X86_AT(c, 0xee928u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0ee92a  push 0x1a
    X86_AT(c, 0xee92au);
    { uint32_t v = 0x1Au; push32(c, v); }
    // 0ee92c  push 4
    X86_AT(c, 0xee92cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee92e  call 0xe7260
    X86_AT(c, 0xee92eu);
    push32(c, 0xee933u); f_000e7260(c); X86_RET(c, 0xee933u);
    X86_TICK(c, 11);
    // 0ee933  push 0x4160
    X86_AT(c, 0xee933u);
    { uint32_t v = 0x4160u; push32(c, v); }
    // 0ee938  push 4
    X86_AT(c, 0xee938u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee93a  call 0xe5654
    X86_AT(c, 0xee93au);
    push32(c, 0xee93fu); f_000e5654(c); X86_RET(c, 0xee93fu);
    X86_TICK(c, 9);
    // 0ee93f  push 0x41ac
    X86_AT(c, 0xee93fu);
    { uint32_t v = 0x41ACu; push32(c, v); }
    // 0ee944  call 0xe75f8
    X86_AT(c, 0xee944u);
    push32(c, 0xee949u); f_000e75f8(c); X86_RET(c, 0xee949u);
    X86_TICK(c, 2);
    // 0ee949  add esp, 0x18
    X86_AT(c, 0xee949u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_ee94c:
    X86_TICK(c, 9);
    // 0ee94c  push 4
    X86_AT(c, 0xee94cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee94e  call 0xe4b60
    X86_AT(c, 0xee94eu);
    push32(c, 0xee953u); f_000e4b60(c); X86_RET(c, 0xee953u);
    X86_TICK(c, 9);
    // 0ee953  add esp, 4
    X86_AT(c, 0xee953u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ee956  and al, al
    X86_AT(c, 0xee956u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0ee958  je 0xee94c
    X86_AT(c, 0xee958u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xee94cu); goto L_ee94c; }
    X86_TICK(c, 9);
    // 0ee95a  push 2
    X86_AT(c, 0xee95au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ee95c  call 0xe6c68
    X86_AT(c, 0xee95cu);
    push32(c, 0xee961u); f_000e6c68(c); X86_RET(c, 0xee961u);
    X86_TICK(c, 9);
    // 0ee961  push 4
    X86_AT(c, 0xee961u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee963  call 0xe693c
    X86_AT(c, 0xee963u);
    push32(c, 0xee968u); f_000e693c(c); X86_RET(c, 0xee968u);
    X86_TICK(c, 9);
    // 0ee968  add esp, 8
    X86_AT(c, 0xee968u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ee96b  jmp 0xee879
    X86_AT(c, 0xee96bu);
    X86_POLL(c, 0xee879u); goto L_ee879;
L_ee970:
    X86_TICK(c, 13);
    // 0ee970  push 9
    X86_AT(c, 0xee970u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0ee972  push 0x1a
    X86_AT(c, 0xee972u);
    { uint32_t v = 0x1Au; push32(c, v); }
    // 0ee974  push 4
    X86_AT(c, 0xee974u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee976  call 0xe7260
    X86_AT(c, 0xee976u);
    push32(c, 0xee97bu); f_000e7260(c); X86_RET(c, 0xee97bu);
    X86_TICK(c, 9);
    // 0ee97b  push 4
    X86_AT(c, 0xee97bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee97d  call 0xe693c
    X86_AT(c, 0xee97du);
    push32(c, 0xee982u); f_000e693c(c); X86_RET(c, 0xee982u);
    X86_TICK(c, 28);
    // 0ee982  movzx eax, byte ptr [ebp - 1]
    X86_AT(c, 0xee982u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)));
    // 0ee986  lea edx, [eax + eax*4]
    X86_AT(c, 0xee986u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ee989  lea edx, [eax + edx*2]
    X86_AT(c, 0xee989u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ee98c  shl edx, 5
    X86_AT(c, 0xee98cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ee98f  sub edx, eax
    X86_AT(c, 0xee98fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ee991  add edx, 0xcde4d
    X86_AT(c, 0xee991u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xCDE4Du, 0, 4); }
    // 0ee997  push edx
    X86_AT(c, 0xee997u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0ee998  push 4
    X86_AT(c, 0xee998u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee99a  call 0xe70ec
    X86_AT(c, 0xee99au);
    push32(c, 0xee99fu); f_000e70ec(c); X86_RET(c, 0xee99fu);
    X86_TICK(c, 11);
    // 0ee99f  push 0x41e0
    X86_AT(c, 0xee99fu);
    { uint32_t v = 0x41E0u; push32(c, v); }
    // 0ee9a4  push 4
    X86_AT(c, 0xee9a4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee9a6  call 0xe5654
    X86_AT(c, 0xee9a6u);
    push32(c, 0xee9abu); f_000e5654(c); X86_RET(c, 0xee9abu);
    X86_TICK(c, 9);
    // 0ee9ab  push 0x4224
    X86_AT(c, 0xee9abu);
    { uint32_t v = 0x4224u; push32(c, v); }
    // 0ee9b0  call 0xe75f8
    X86_AT(c, 0xee9b0u);
    push32(c, 0xee9b5u); f_000e75f8(c); X86_RET(c, 0xee9b5u);
    X86_TICK(c, 2);
    // 0ee9b5  add esp, 0x24
    X86_AT(c, 0xee9b5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
L_ee9b8:
    X86_TICK(c, 9);
    // 0ee9b8  push 4
    X86_AT(c, 0xee9b8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee9ba  call 0xe4b60
    X86_AT(c, 0xee9bau);
    push32(c, 0xee9bfu); f_000e4b60(c); X86_RET(c, 0xee9bfu);
    X86_TICK(c, 12);
    // 0ee9bf  xchg ebx, eax
    X86_AT(c, 0xee9bfu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0ee9c0  add esp, 4
    X86_AT(c, 0xee9c0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ee9c3  cmp bl, 0x59
    X86_AT(c, 0xee9c3u);
    (void)x86_sub(c, g8(c, 3), 0x59u, 0, 1);
    // 0ee9c6  je 0xee9d2
    X86_AT(c, 0xee9c6u);
    if (x86_cc(c, 4)) { goto L_ee9d2; }
    X86_TICK(c, 7);
    // 0ee9c8  cmp bl, 0x4e
    X86_AT(c, 0xee9c8u);
    (void)x86_sub(c, g8(c, 3), 0x4Eu, 0, 1);
    // 0ee9cb  je 0xee9d2
    X86_AT(c, 0xee9cbu);
    if (x86_cc(c, 4)) { goto L_ee9d2; }
    X86_TICK(c, 7);
    // 0ee9cd  cmp bl, 1
    X86_AT(c, 0xee9cdu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ee9d0  jne 0xee9b8
    X86_AT(c, 0xee9d0u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xee9b8u); goto L_ee9b8; }
L_ee9d2:
    X86_TICK(c, 9);
    // 0ee9d2  push 2
    X86_AT(c, 0xee9d2u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ee9d4  call 0xe6c68
    X86_AT(c, 0xee9d4u);
    push32(c, 0xee9d9u); f_000e6c68(c); X86_RET(c, 0xee9d9u);
    X86_TICK(c, 9);
    // 0ee9d9  push 4
    X86_AT(c, 0xee9d9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee9db  call 0xe693c
    X86_AT(c, 0xee9dbu);
    push32(c, 0xee9e0u); f_000e693c(c); X86_RET(c, 0xee9e0u);
    X86_TICK(c, 9);
    // 0ee9e0  add esp, 8
    X86_AT(c, 0xee9e0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ee9e3  cmp bl, 0x59
    X86_AT(c, 0xee9e3u);
    (void)x86_sub(c, g8(c, 3), 0x59u, 0, 1);
    // 0ee9e6  jne 0xee879
    X86_AT(c, 0xee9e6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xee879u); goto L_ee879; }
    X86_TICK(c, 17);
    // 0ee9ec  push 8
    X86_AT(c, 0xee9ecu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0ee9ee  push 0x30
    X86_AT(c, 0xee9eeu);
    { uint32_t v = 0x30u; push32(c, v); }
    // 0ee9f0  push 4
    X86_AT(c, 0xee9f0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee9f2  push 0x16
    X86_AT(c, 0xee9f2u);
    { uint32_t v = 0x16u; push32(c, v); }
    // 0ee9f4  push 4
    X86_AT(c, 0xee9f4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ee9f6  call 0xe739c
    X86_AT(c, 0xee9f6u);
    push32(c, 0xee9fbu); f_000e739c(c); X86_RET(c, 0xee9fbu);
    X86_TICK(c, 13);
    // 0ee9fb  push 9
    X86_AT(c, 0xee9fbu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0ee9fd  push 0x1a
    X86_AT(c, 0xee9fdu);
    { uint32_t v = 0x1Au; push32(c, v); }
    // 0ee9ff  push 4
    X86_AT(c, 0xee9ffu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0eea01  call 0xe7260
    X86_AT(c, 0xeea01u);
    push32(c, 0xeea06u); f_000e7260(c); X86_RET(c, 0xeea06u);
    X86_TICK(c, 11);
    // 0eea06  push 0x4250
    X86_AT(c, 0xeea06u);
    { uint32_t v = 0x4250u; push32(c, v); }
    // 0eea0b  push 4
    X86_AT(c, 0xeea0bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0eea0d  call 0xe5654
    X86_AT(c, 0xeea0du);
    push32(c, 0xeea12u); f_000e5654(c); X86_RET(c, 0xeea12u);
    X86_TICK(c, 9);
    // 0eea12  push 4
    X86_AT(c, 0xeea12u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0eea14  call 0xe7584
    X86_AT(c, 0xeea14u);
    push32(c, 0xeea19u); f_000e7584(c); X86_RET(c, 0xeea19u);
    X86_TICK(c, 9);
    // 0eea19  push 0x42a8
    X86_AT(c, 0xeea19u);
    { uint32_t v = 0x42A8u; push32(c, v); }
    // 0eea1e  call 0xe75f8
    X86_AT(c, 0xeea1eu);
    push32(c, 0xeea23u); f_000e75f8(c); X86_RET(c, 0xeea23u);
    X86_TICK(c, 2);
    // 0eea23  add esp, 0x30
    X86_AT(c, 0xeea23u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
L_eea26:
    X86_TICK(c, 9);
    // 0eea26  push 4
    X86_AT(c, 0xeea26u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0eea28  call 0xe4b60
    X86_AT(c, 0xeea28u);
    push32(c, 0xeea2du); f_000e4b60(c); X86_RET(c, 0xeea2du);
    X86_TICK(c, 9);
    // 0eea2d  add esp, 4
    X86_AT(c, 0xeea2du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0eea30  and al, al
    X86_AT(c, 0xeea30u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0eea32  je 0xeea26
    X86_AT(c, 0xeea32u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xeea26u); goto L_eea26; }
    X86_TICK(c, 9);
    // 0eea34  push 2
    X86_AT(c, 0xeea34u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0eea36  call 0xe6c68
    X86_AT(c, 0xeea36u);
    push32(c, 0xeea3bu); f_000e6c68(c); X86_RET(c, 0xeea3bu);
    X86_TICK(c, 9);
    // 0eea3b  push 4
    X86_AT(c, 0xeea3bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0eea3d  call 0xe693c
    X86_AT(c, 0xeea3du);
    push32(c, 0xeea42u); f_000e693c(c); X86_RET(c, 0xeea42u);
    X86_TICK(c, 11);
    // 0eea42  push 0
    X86_AT(c, 0xeea42u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0eea44  push 4
    X86_AT(c, 0xeea44u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0eea46  call 0xe6b70
    X86_AT(c, 0xeea46u);
    push32(c, 0xeea4bu); f_000e6b70(c); X86_RET(c, 0xeea4bu);
    X86_TICK(c, 6);
    // 0eea4b  movzx eax, byte ptr [ebp - 1]
    X86_AT(c, 0xeea4bu);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)));
L_eea4f:
    X86_TICK(c, 30);
    // 0eea4f  add esp, 0x10
    X86_AT(c, 0xeea4fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0eea52  pop edi
    X86_AT(c, 0xeea52u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0eea53  pop esi
    X86_AT(c, 0xeea53u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0eea54  pop ebx
    X86_AT(c, 0xeea54u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0eea55  leave 
    X86_AT(c, 0xeea55u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0eea56  ret 
    X86_AT(c, 0xeea56u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xee79cu, "ran off the end of a function");
}
}
