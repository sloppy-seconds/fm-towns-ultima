#include "p_game_funcs.h"
namespace p_game {
void f_000f9780(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0f9780  push ebx
    X86_AT(c, 0xf9780u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f9781  push esi
    X86_AT(c, 0xf9781u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f9782  push edi
    X86_AT(c, 0xf9782u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f9783  push 7
    X86_AT(c, 0xf9783u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f9785  call 0xe693c
    X86_AT(c, 0xf9785u);
    push32(c, 0xf978au); f_000e693c(c); X86_RET(c, 0xf978au);
    X86_TICK(c, 11);
    // 0f978a  push 0xaae4
    X86_AT(c, 0xf978au);
    { uint32_t v = 0xAAE4u; push32(c, v); }
    // 0f978f  push 7
    X86_AT(c, 0xf978fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f9791  call 0xe5654
    X86_AT(c, 0xf9791u);
    push32(c, 0xf9796u); f_000e5654(c); X86_RET(c, 0xf9796u);
    X86_TICK(c, 9);
    // 0f9796  push 7
    X86_AT(c, 0xf9796u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f9798  call 0xe6c68
    X86_AT(c, 0xf9798u);
    push32(c, 0xf979du); f_000e6c68(c); X86_RET(c, 0xf979du);
    X86_TICK(c, 9);
    // 0f979d  push 5
    X86_AT(c, 0xf979du);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0f979f  call 0xe1944
    X86_AT(c, 0xf979fu);
    push32(c, 0xf97a4u); f_000e1944(c); X86_RET(c, 0xf97a4u);
    X86_TICK(c, 7);
    // 0f97a4  call 0xe2824
    X86_AT(c, 0xf97a4u);
    push32(c, 0xf97a9u); f_000e2824(c); X86_RET(c, 0xf97a9u);
    X86_TICK(c, 25);
    // 0f97a9  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf97a9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f97ae  lea edx, [eax + eax*4]
    X86_AT(c, 0xf97aeu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f97b1  lea edx, [eax + edx*2]
    X86_AT(c, 0xf97b1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f97b4  shl edx, 5
    X86_AT(c, 0xf97b4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f97b7  sub edx, eax
    X86_AT(c, 0xf97b7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f97b9  push dword ptr [edx + 0xcde99]
    X86_AT(c, 0xf97b9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u))); push32(c, v); }
    // 0f97bf  call 0xe3b24
    X86_AT(c, 0xf97bfu);
    push32(c, 0xf97c4u); f_000e3b24(c); X86_RET(c, 0xf97c4u);
    X86_TICK(c, 25);
    // 0f97c4  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf97c4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f97c9  lea edx, [eax + eax*4]
    X86_AT(c, 0xf97c9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f97cc  lea edx, [eax + edx*2]
    X86_AT(c, 0xf97ccu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f97cf  shl edx, 5
    X86_AT(c, 0xf97cfu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f97d2  sub edx, eax
    X86_AT(c, 0xf97d2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f97d4  push dword ptr [edx + 0xcde99]
    X86_AT(c, 0xf97d4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u))); push32(c, v); }
    // 0f97da  call 0xfd76c
    X86_AT(c, 0xf97dau);
    push32(c, 0xf97dfu); f_000fd76c(c); X86_RET(c, 0xf97dfu);
    X86_TICK(c, 7);
    // 0f97df  call 0xe3974
    X86_AT(c, 0xf97dfu);
    push32(c, 0xf97e4u); f_000e3974(c); X86_RET(c, 0xf97e4u);
    X86_TICK(c, 26);
    // 0f97e4  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf97e4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f97e9  lea edx, [eax + eax*4]
    X86_AT(c, 0xf97e9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f97ec  lea edx, [eax + edx*2]
    X86_AT(c, 0xf97ecu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f97ef  shl edx, 5
    X86_AT(c, 0xf97efu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f97f2  sub edx, eax
    X86_AT(c, 0xf97f2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f97f4  add esp, 0x1c
    X86_AT(c, 0xf97f4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0f97f7  mov edx, dword ptr [edx + 0xcde99]
    X86_AT(c, 0xf97f7u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u)));
    // 0f97fd  cmp edx, 4
    X86_AT(c, 0xf97fdu);
    (void)x86_sub(c, c.r[2], 0x4u, 0, 4);
    // 0f9800  ja 0xf99c1
    X86_AT(c, 0xf9800u);
    if (x86_cc(c, 7)) { goto L_f99c1; }
    X86_TICK(c, 7);
    // 0f9806  jmp dword ptr cs:[edx*4 + 0xf980e]
    X86_AT(c, 0xf9806u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF980Eu)));
      switch (t) {
      case 0xf9822u: goto L_f9822;
      case 0xf986au: goto L_f986a;
      case 0xf98b2u: goto L_f98b2;
      case 0xf9910u: goto L_f9910;
      case 0xf9947u: goto L_f9947;
      default: x86_jump(c, t); return; } }
L_f9822:
    X86_TICK(c, 24);
    // 0f9822  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf9822u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f9827  lea edx, [eax + eax*4]
    X86_AT(c, 0xf9827u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f982a  lea edx, [eax + edx*2]
    X86_AT(c, 0xf982au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f982d  shl edx, 5
    X86_AT(c, 0xf982du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f9830  sub edx, eax
    X86_AT(c, 0xf9830u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f9832  mov edx, dword ptr [edx + 0xcdf8f]
    X86_AT(c, 0xf9832u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF8Fu)));
    // 0f9838  cmp edx, 3
    X86_AT(c, 0xf9838u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0f983b  ja 0xf99c1
    X86_AT(c, 0xf983bu);
    if (x86_cc(c, 7)) { goto L_f99c1; }
    X86_TICK(c, 7);
    // 0f9841  jmp dword ptr cs:[edx*4 + 0xf9849]
    X86_AT(c, 0xf9841u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF9849u)));
      switch (t) {
      case 0xf9859u: goto L_f9859;
      case 0xf98a1u: goto L_f98a1;
      case 0xf98e9u: goto L_f98e9;
      case 0xf98fau: goto L_f98fa;
      default: x86_jump(c, t); return; } }
L_f9859:
    X86_TICK(c, 15);
    // 0f9859  mov esi, dword ptr [0xd4630]
    X86_AT(c, 0xf9859u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xD4630u)));
    // 0f985f  mov ebx, dword ptr [0xd4634]
    X86_AT(c, 0xf985fu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0xD4634u)));
    // 0f9865  jmp 0xf9996
    X86_AT(c, 0xf9865u);
    goto L_f9996;
L_f986a:
    X86_TICK(c, 24);
    // 0f986a  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf986au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f986f  lea edx, [eax + eax*4]
    X86_AT(c, 0xf986fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f9872  lea edx, [eax + edx*2]
    X86_AT(c, 0xf9872u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f9875  shl edx, 5
    X86_AT(c, 0xf9875u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f9878  sub edx, eax
    X86_AT(c, 0xf9878u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f987a  mov edx, dword ptr [edx + 0xcdf8f]
    X86_AT(c, 0xf987au);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF8Fu)));
    // 0f9880  cmp edx, 3
    X86_AT(c, 0xf9880u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0f9883  ja 0xf99c1
    X86_AT(c, 0xf9883u);
    if (x86_cc(c, 7)) { goto L_f99c1; }
    X86_TICK(c, 7);
    // 0f9889  jmp dword ptr cs:[edx*4 + 0xf9891]
    X86_AT(c, 0xf9889u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF9891u)));
      switch (t) {
      case 0xf98a1u: goto L_f98a1;
      case 0xf98e9u: goto L_f98e9;
      case 0xf98fau: goto L_f98fa;
      case 0xf997au: goto L_f997a;
      default: x86_jump(c, t); return; } }
L_f98a1:
    X86_TICK(c, 15);
    // 0f98a1  mov esi, dword ptr [0xd4658]
    X86_AT(c, 0xf98a1u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xD4658u)));
    // 0f98a7  mov ebx, dword ptr [0xd465c]
    X86_AT(c, 0xf98a7u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0xD465Cu)));
    // 0f98ad  jmp 0xf99a9
    X86_AT(c, 0xf98adu);
    goto L_f99a9;
L_f98b2:
    X86_TICK(c, 24);
    // 0f98b2  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf98b2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f98b7  lea edx, [eax + eax*4]
    X86_AT(c, 0xf98b7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f98ba  lea edx, [eax + edx*2]
    X86_AT(c, 0xf98bau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f98bd  shl edx, 5
    X86_AT(c, 0xf98bdu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f98c0  sub edx, eax
    X86_AT(c, 0xf98c0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f98c2  mov edx, dword ptr [edx + 0xcdf8f]
    X86_AT(c, 0xf98c2u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF8Fu)));
    // 0f98c8  cmp edx, 3
    X86_AT(c, 0xf98c8u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0f98cb  ja 0xf99c1
    X86_AT(c, 0xf98cbu);
    if (x86_cc(c, 7)) { goto L_f99c1; }
    X86_TICK(c, 7);
    // 0f98d1  jmp dword ptr cs:[edx*4 + 0xf98d9]
    X86_AT(c, 0xf98d1u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF98D9u)));
      switch (t) {
      case 0xf98e9u: goto L_f98e9;
      case 0xf98fau: goto L_f98fa;
      case 0xf997au: goto L_f997a;
      case 0xf998au: goto L_f998a;
      default: x86_jump(c, t); return; } }
L_f98e9:
    X86_TICK(c, 15);
    // 0f98e9  mov esi, dword ptr [0xd4680]
    X86_AT(c, 0xf98e9u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xD4680u)));
    // 0f98ef  mov ebx, dword ptr [0xd4684]
    X86_AT(c, 0xf98efu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0xD4684u)));
    // 0f98f5  jmp 0xf99bc
    X86_AT(c, 0xf98f5u);
    goto L_f99bc;
L_f98fa:
    X86_TICK(c, 17);
    // 0f98fa  mov esi, dword ptr [0xd46a8]
    X86_AT(c, 0xf98fau);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xD46A8u)));
    // 0f9900  mov ebx, dword ptr [0xd46ac]
    X86_AT(c, 0xf9900u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0xD46ACu)));
    // 0f9906  mov edi, 4
    X86_AT(c, 0xf9906u);
    c.r[7] = 0x4u;
    // 0f990b  jmp 0xf99c1
    X86_AT(c, 0xf990bu);
    goto L_f99c1;
L_f9910:
    X86_TICK(c, 24);
    // 0f9910  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf9910u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f9915  lea edx, [eax + eax*4]
    X86_AT(c, 0xf9915u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f9918  lea edx, [eax + edx*2]
    X86_AT(c, 0xf9918u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f991b  shl edx, 5
    X86_AT(c, 0xf991bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f991e  sub edx, eax
    X86_AT(c, 0xf991eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f9920  mov edx, dword ptr [edx + 0xcdf8f]
    X86_AT(c, 0xf9920u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF8Fu)));
    // 0f9926  cmp edx, 3
    X86_AT(c, 0xf9926u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0f9929  ja 0xf99c1
    X86_AT(c, 0xf9929u);
    if (x86_cc(c, 7)) { goto L_f99c1; }
    X86_TICK(c, 7);
    // 0f992f  jmp dword ptr cs:[edx*4 + 0xf9937]
    X86_AT(c, 0xf992fu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF9937u)));
      switch (t) {
      case 0xf997au: goto L_f997a;
      case 0xf998au: goto L_f998a;
      case 0xf999du: goto L_f999d;
      default: x86_jump(c, t); return; } }
L_f9947:
    X86_TICK(c, 24);
    // 0f9947  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf9947u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f994c  lea edx, [eax + eax*4]
    X86_AT(c, 0xf994cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f994f  lea edx, [eax + edx*2]
    X86_AT(c, 0xf994fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f9952  shl edx, 5
    X86_AT(c, 0xf9952u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f9955  sub edx, eax
    X86_AT(c, 0xf9955u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f9957  mov edx, dword ptr [edx + 0xcdf8f]
    X86_AT(c, 0xf9957u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF8Fu)));
    // 0f995d  cmp edx, 3
    X86_AT(c, 0xf995du);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0f9960  ja 0xf99c1
    X86_AT(c, 0xf9960u);
    if (x86_cc(c, 7)) { goto L_f99c1; }
    X86_TICK(c, 7);
    // 0f9962  jmp dword ptr cs:[edx*4 + 0xf996a]
    X86_AT(c, 0xf9962u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF996Au)));
      switch (t) {
      case 0xf997au: goto L_f997a;
      case 0xf998au: goto L_f998a;
      case 0xf999du: goto L_f999d;
      case 0xf99b0u: goto L_f99b0;
      default: x86_jump(c, t); return; } }
L_f997a:
    X86_TICK(c, 17);
    // 0f997a  mov esi, dword ptr [0xd4610]
    X86_AT(c, 0xf997au);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xD4610u)));
    // 0f9980  mov ebx, dword ptr [0xd4614]
    X86_AT(c, 0xf9980u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0xD4614u)));
    // 0f9986  sub edi, edi
    X86_AT(c, 0xf9986u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0f9988  jmp 0xf99c1
    X86_AT(c, 0xf9988u);
    goto L_f99c1;
L_f998a:
    X86_TICK(c, 8);
    // 0f998a  mov esi, dword ptr [0xd4638]
    X86_AT(c, 0xf998au);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xD4638u)));
    // 0f9990  mov ebx, dword ptr [0xd463c]
    X86_AT(c, 0xf9990u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0xD463Cu)));
L_f9996:
    X86_TICK(c, 9);
    // 0f9996  mov edi, 1
    X86_AT(c, 0xf9996u);
    c.r[7] = 0x1u;
    // 0f999b  jmp 0xf99c1
    X86_AT(c, 0xf999bu);
    goto L_f99c1;
L_f999d:
    X86_TICK(c, 8);
    // 0f999d  mov esi, dword ptr [0xd4660]
    X86_AT(c, 0xf999du);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xD4660u)));
    // 0f99a3  mov ebx, dword ptr [0xd4664]
    X86_AT(c, 0xf99a3u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0xD4664u)));
L_f99a9:
    X86_TICK(c, 9);
    // 0f99a9  mov edi, 2
    X86_AT(c, 0xf99a9u);
    c.r[7] = 0x2u;
    // 0f99ae  jmp 0xf99c1
    X86_AT(c, 0xf99aeu);
    goto L_f99c1;
L_f99b0:
    X86_TICK(c, 8);
    // 0f99b0  mov esi, dword ptr [0xd4688]
    X86_AT(c, 0xf99b0u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xD4688u)));
    // 0f99b6  mov ebx, dword ptr [0xd468c]
    X86_AT(c, 0xf99b6u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0xD468Cu)));
L_f99bc:
    X86_TICK(c, 2);
    // 0f99bc  mov edi, 3
    X86_AT(c, 0xf99bcu);
    c.r[7] = 0x3u;
L_f99c1:
    X86_TICK(c, 33);
    // 0f99c1  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf99c1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f99c6  lea edx, [eax + eax*4]
    X86_AT(c, 0xf99c6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f99c9  lea edx, [eax + edx*2]
    X86_AT(c, 0xf99c9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f99cc  shl edx, 5
    X86_AT(c, 0xf99ccu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f99cf  sub edx, eax
    X86_AT(c, 0xf99cfu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f99d1  mov dword ptr [edx + 0xcdf6b], esi
    X86_AT(c, 0xf99d1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)), c.r[6]);
    // 0f99d7  mov dword ptr [edx + 0xcdf6f], ebx
    X86_AT(c, 0xf99d7u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)), c.r[3]);
    // 0f99dd  mov dword ptr [edx + 0xcde99], edi
    X86_AT(c, 0xf99ddu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u)), c.r[7]);
    // 0f99e3  push dword ptr [edx + 0xcdf57]
    X86_AT(c, 0xf99e3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))); push32(c, v); }
    // 0f99e9  push edi
    X86_AT(c, 0xf99e9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f99ea  call 0xf3c40
    X86_AT(c, 0xf99eau);
    push32(c, 0xf99efu); f_000f3c40(c); X86_RET(c, 0xf99efu);
    X86_TICK(c, 35);
    // 0f99ef  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf99efu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f99f4  lea edx, [eax + eax*4]
    X86_AT(c, 0xf99f4u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f99f7  lea edx, [eax + edx*2]
    X86_AT(c, 0xf99f7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f99fa  shl edx, 5
    X86_AT(c, 0xf99fau);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f99fd  sub edx, eax
    X86_AT(c, 0xf99fdu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f99ff  mov dword ptr [edx + 0xcdfa7], 6
    X86_AT(c, 0xf99ffu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDFA7u)), 0x6u);
    // 0f9a09  inc dword ptr [edx + 0xcdf8f]
    X86_AT(c, 0xf9a09u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF8Fu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0f9a0f  add esp, 8
    X86_AT(c, 0xf9a0fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f9a12  cmp dword ptr [edx + 0xcdf8f], 3
    X86_AT(c, 0xf9a12u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF8Fu))), 0x3u, 0, 4);
    // 0f9a19  jle 0xf9a25
    X86_AT(c, 0xf9a19u);
    if (x86_cc(c, 14)) { goto L_f9a25; }
    X86_TICK(c, 2);
    // 0f9a1b  mov dword ptr [edx + 0xcdf8f], 0
    X86_AT(c, 0xf9a1bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF8Fu)), 0x0u);
L_f9a25:
    X86_TICK(c, 63);
    // 0f9a25  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf9a25u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f9a2a  lea edx, [eax + eax*4]
    X86_AT(c, 0xf9a2au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f9a2d  lea edx, [eax + edx*2]
    X86_AT(c, 0xf9a2du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f9a30  shl edx, 5
    X86_AT(c, 0xf9a30u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f9a33  sub edx, eax
    X86_AT(c, 0xf9a33u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f9a35  mov eax, dword ptr [edx + 0xcde99]
    X86_AT(c, 0xf9a35u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u)));
    // 0f9a3b  shl eax, 5
    X86_AT(c, 0xf9a3bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[0] = r; }
    // 0f9a3e  mov ecx, dword ptr [edx + 0xcdf8f]
    X86_AT(c, 0xf9a3eu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF8Fu)));
    // 0f9a44  mov eax, dword ptr [eax + ecx*8 + 0xd4610]
    X86_AT(c, 0xf9a44u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] * 8 + 0xD4610u)));
    // 0f9a4b  mov dword ptr [edx + 0xcdf9f], eax
    X86_AT(c, 0xf9a4bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF9Fu)), c.r[0]);
    // 0f9a51  mov eax, dword ptr [edx + 0xcde99]
    X86_AT(c, 0xf9a51u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u)));
    // 0f9a57  shl eax, 5
    X86_AT(c, 0xf9a57u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[0] = r; }
    // 0f9a5a  mov ecx, dword ptr [edx + 0xcdf8f]
    X86_AT(c, 0xf9a5au);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF8Fu)));
    // 0f9a60  mov eax, dword ptr [eax + ecx*8 + 0xd4614]
    X86_AT(c, 0xf9a60u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] * 8 + 0xD4614u)));
    // 0f9a67  mov dword ptr [edx + 0xcdfa3], eax
    X86_AT(c, 0xf9a67u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDFA3u)), c.r[0]);
    // 0f9a6d  push eax
    X86_AT(c, 0xf9a6du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f9a6e  push dword ptr [edx + 0xcdf9f]
    X86_AT(c, 0xf9a6eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF9Fu))); push32(c, v); }
    // 0f9a74  push 0x10
    X86_AT(c, 0xf9a74u);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0f9a76  call 0xf3c0c
    X86_AT(c, 0xf9a76u);
    push32(c, 0xf9a7bu); f_000f3c0c(c); X86_RET(c, 0xf9a7bu);
    X86_TICK(c, 9);
    // 0f9a7b  push 0
    X86_AT(c, 0xf9a7bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f9a7d  call 0xe3188
    X86_AT(c, 0xf9a7du);
    push32(c, 0xf9a82u); f_000e3188(c); X86_RET(c, 0xf9a82u);
    X86_TICK(c, 9);
    // 0f9a82  push 1
    X86_AT(c, 0xf9a82u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f9a84  call 0xe1a9c
    X86_AT(c, 0xf9a84u);
    push32(c, 0xf9a89u); f_000e1a9c(c); X86_RET(c, 0xf9a89u);
    X86_TICK(c, 9);
    // 0f9a89  push 7
    X86_AT(c, 0xf9a89u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f9a8b  call 0xe693c
    X86_AT(c, 0xf9a8bu);
    push32(c, 0xf9a90u); f_000e693c(c); X86_RET(c, 0xf9a90u);
    X86_TICK(c, 11);
    // 0f9a90  push 0xab2c
    X86_AT(c, 0xf9a90u);
    { uint32_t v = 0xAB2Cu; push32(c, v); }
    // 0f9a95  push 7
    X86_AT(c, 0xf9a95u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f9a97  call 0xe5654
    X86_AT(c, 0xf9a97u);
    push32(c, 0xf9a9cu); f_000e5654(c); X86_RET(c, 0xf9a9cu);
    X86_TICK(c, 9);
    // 0f9a9c  push 7
    X86_AT(c, 0xf9a9cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f9a9e  call 0xe6c68
    X86_AT(c, 0xf9a9eu);
    push32(c, 0xf9aa3u); f_000e6c68(c); X86_RET(c, 0xf9aa3u);
    X86_TICK(c, 24);
    // 0f9aa3  add esp, 0x24
    X86_AT(c, 0xf9aa3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0f9aa6  pop edi
    X86_AT(c, 0xf9aa6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f9aa7  pop esi
    X86_AT(c, 0xf9aa7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f9aa8  pop ebx
    X86_AT(c, 0xf9aa8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f9aa9  ret 
    X86_AT(c, 0xf9aa9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf9780u, "ran off the end of a function");
}
void f_000f9aac(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0f9aac  push ebp
    X86_AT(c, 0xf9aacu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f9aad  mov ebp, esp
    X86_AT(c, 0xf9aadu);
    c.r[5] = c.r[4];
    // 0f9aaf  push ebx
    X86_AT(c, 0xf9aafu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f9ab0  push esi
    X86_AT(c, 0xf9ab0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f9ab1  push edi
    X86_AT(c, 0xf9ab1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f9ab2  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xf9ab2u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0f9ab5  push edi
    X86_AT(c, 0xf9ab5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f9ab6  call 0xe1a7c
    X86_AT(c, 0xf9ab6u);
    push32(c, 0xf9abbu); f_000e1a7c(c); X86_RET(c, 0xf9abbu);
    X86_TICK(c, 12);
    // 0f9abb  xchg esi, eax
    X86_AT(c, 0xf9abbu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0f9abc  push edi
    X86_AT(c, 0xf9abcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f9abd  call 0xe1a7c
    X86_AT(c, 0xf9abdu);
    push32(c, 0xf9ac2u); f_000e1a7c(c); X86_RET(c, 0xf9ac2u);
    X86_TICK(c, 12);
    // 0f9ac2  xchg ebx, eax
    X86_AT(c, 0xf9ac2u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0f9ac3  add esp, 8
    X86_AT(c, 0xf9ac3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f9ac6  cmp ebx, esi
    X86_AT(c, 0xf9ac6u);
    (void)x86_sub(c, c.r[3], c.r[6], 0, 4);
    // 0f9ac8  jg 0xf9ace
    X86_AT(c, 0xf9ac8u);
    if (x86_cc(c, 15)) { goto L_f9ace; }
    X86_TICK(c, 9);
    // 0f9aca  mov eax, ebx
    X86_AT(c, 0xf9acau);
    c.r[0] = c.r[3];
    // 0f9acc  jmp 0xf9ad0
    X86_AT(c, 0xf9accu);
    goto L_f9ad0;
L_f9ace:
    X86_TICK(c, 2);
    // 0f9ace  mov eax, esi
    X86_AT(c, 0xf9aceu);
    c.r[0] = c.r[6];
L_f9ad0:
    X86_TICK(c, 28);
    // 0f9ad0  pop edi
    X86_AT(c, 0xf9ad0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f9ad1  pop esi
    X86_AT(c, 0xf9ad1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f9ad2  pop ebx
    X86_AT(c, 0xf9ad2u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f9ad3  leave 
    X86_AT(c, 0xf9ad3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f9ad4  ret 
    X86_AT(c, 0xf9ad4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf9aacu, "ran off the end of a function");
}
void f_000f9ad8(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0f9ad8  push esi
    X86_AT(c, 0xf9ad8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f9ad9  push edi
    X86_AT(c, 0xf9ad9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f9ada  push 0x64
    X86_AT(c, 0xf9adau);
    { uint32_t v = 0x64u; push32(c, v); }
    // 0f9adc  call 0xe1a7c
    X86_AT(c, 0xf9adcu);
    push32(c, 0xf9ae1u); f_000e1a7c(c); X86_RET(c, 0xf9ae1u);
    X86_TICK(c, 12);
    // 0f9ae1  xchg edi, eax
    X86_AT(c, 0xf9ae1u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0f9ae2  add esp, 4
    X86_AT(c, 0xf9ae2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f9ae5  cmp edi, 0x28
    X86_AT(c, 0xf9ae5u);
    (void)x86_sub(c, c.r[7], 0x28u, 0, 4);
    // 0f9ae8  jge 0xf9af1
    X86_AT(c, 0xf9ae8u);
    if (x86_cc(c, 13)) { goto L_f9af1; }
    X86_TICK(c, 9);
    // 0f9aea  sub esi, esi
    X86_AT(c, 0xf9aeau);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0f9aec  jmp 0xf9b59
    X86_AT(c, 0xf9aecu);
    goto L_f9b59;
L_f9af1:
    X86_TICK(c, 7);
    // 0f9af1  cmp edi, 0x46
    X86_AT(c, 0xf9af1u);
    (void)x86_sub(c, c.r[7], 0x46u, 0, 4);
    // 0f9af4  jge 0xf9b00
    X86_AT(c, 0xf9af4u);
    if (x86_cc(c, 13)) { goto L_f9b00; }
    X86_TICK(c, 9);
    // 0f9af6  mov esi, 1
    X86_AT(c, 0xf9af6u);
    c.r[6] = 0x1u;
    // 0f9afb  jmp 0xf9b59
    X86_AT(c, 0xf9afbu);
    goto L_f9b59;
L_f9b00:
    X86_TICK(c, 7);
    // 0f9b00  cmp edi, 0x50
    X86_AT(c, 0xf9b00u);
    (void)x86_sub(c, c.r[7], 0x50u, 0, 4);
    // 0f9b03  jge 0xf9b0c
    X86_AT(c, 0xf9b03u);
    if (x86_cc(c, 13)) { goto L_f9b0c; }
    X86_TICK(c, 9);
    // 0f9b05  mov esi, 2
    X86_AT(c, 0xf9b05u);
    c.r[6] = 0x2u;
    // 0f9b0a  jmp 0xf9b59
    X86_AT(c, 0xf9b0au);
    goto L_f9b59;
L_f9b0c:
    X86_TICK(c, 7);
    // 0f9b0c  cmp edi, 0x52
    X86_AT(c, 0xf9b0cu);
    (void)x86_sub(c, c.r[7], 0x52u, 0, 4);
    // 0f9b0f  jge 0xf9b18
    X86_AT(c, 0xf9b0fu);
    if (x86_cc(c, 13)) { goto L_f9b18; }
    X86_TICK(c, 9);
    // 0f9b11  mov esi, 3
    X86_AT(c, 0xf9b11u);
    c.r[6] = 0x3u;
    // 0f9b16  jmp 0xf9b59
    X86_AT(c, 0xf9b16u);
    goto L_f9b59;
L_f9b18:
    X86_TICK(c, 7);
    // 0f9b18  cmp edi, 0x5a
    X86_AT(c, 0xf9b18u);
    (void)x86_sub(c, c.r[7], 0x5Au, 0, 4);
    // 0f9b1b  jge 0xf9b24
    X86_AT(c, 0xf9b1bu);
    if (x86_cc(c, 13)) { goto L_f9b24; }
    X86_TICK(c, 9);
    // 0f9b1d  mov esi, 4
    X86_AT(c, 0xf9b1du);
    c.r[6] = 0x4u;
    // 0f9b22  jmp 0xf9b59
    X86_AT(c, 0xf9b22u);
    goto L_f9b59;
L_f9b24:
    X86_TICK(c, 7);
    // 0f9b24  cmp edi, 0x5c
    X86_AT(c, 0xf9b24u);
    (void)x86_sub(c, c.r[7], 0x5Cu, 0, 4);
    // 0f9b27  jge 0xf9b30
    X86_AT(c, 0xf9b27u);
    if (x86_cc(c, 13)) { goto L_f9b30; }
    X86_TICK(c, 9);
    // 0f9b29  mov esi, 5
    X86_AT(c, 0xf9b29u);
    c.r[6] = 0x5u;
    // 0f9b2e  jmp 0xf9b59
    X86_AT(c, 0xf9b2eu);
    goto L_f9b59;
L_f9b30:
    X86_TICK(c, 7);
    // 0f9b30  cmp edi, 0x5f
    X86_AT(c, 0xf9b30u);
    (void)x86_sub(c, c.r[7], 0x5Fu, 0, 4);
    // 0f9b33  jge 0xf9b3c
    X86_AT(c, 0xf9b33u);
    if (x86_cc(c, 13)) { goto L_f9b3c; }
    X86_TICK(c, 9);
    // 0f9b35  mov esi, 6
    X86_AT(c, 0xf9b35u);
    c.r[6] = 0x6u;
    // 0f9b3a  jmp 0xf9b59
    X86_AT(c, 0xf9b3au);
    goto L_f9b59;
L_f9b3c:
    X86_TICK(c, 7);
    // 0f9b3c  cmp edi, 0x61
    X86_AT(c, 0xf9b3cu);
    (void)x86_sub(c, c.r[7], 0x61u, 0, 4);
    // 0f9b3f  jge 0xf9b48
    X86_AT(c, 0xf9b3fu);
    if (x86_cc(c, 13)) { goto L_f9b48; }
    X86_TICK(c, 9);
    // 0f9b41  mov esi, 7
    X86_AT(c, 0xf9b41u);
    c.r[6] = 0x7u;
    // 0f9b46  jmp 0xf9b59
    X86_AT(c, 0xf9b46u);
    goto L_f9b59;
L_f9b48:
    X86_TICK(c, 7);
    // 0f9b48  cmp edi, 0x64
    X86_AT(c, 0xf9b48u);
    (void)x86_sub(c, c.r[7], 0x64u, 0, 4);
    // 0f9b4b  jge 0xf9b54
    X86_AT(c, 0xf9b4bu);
    if (x86_cc(c, 13)) { goto L_f9b54; }
    X86_TICK(c, 9);
    // 0f9b4d  mov esi, 8
    X86_AT(c, 0xf9b4du);
    c.r[6] = 0x8u;
    // 0f9b52  jmp 0xf9b59
    X86_AT(c, 0xf9b52u);
    goto L_f9b59;
L_f9b54:
    X86_TICK(c, 2);
    // 0f9b54  mov esi, 9
    X86_AT(c, 0xf9b54u);
    c.r[6] = 0x9u;
L_f9b59:
    X86_TICK(c, 20);
    // 0f9b59  mov eax, esi
    X86_AT(c, 0xf9b59u);
    c.r[0] = c.r[6];
    // 0f9b5b  pop edi
    X86_AT(c, 0xf9b5bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f9b5c  pop esi
    X86_AT(c, 0xf9b5cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f9b5d  ret 
    X86_AT(c, 0xf9b5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf9ad8u, "ran off the end of a function");
}
void f_000f9b59(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0f9b59  mov eax, esi
    X86_AT(c, 0xf9b59u);
    c.r[0] = c.r[6];
    // 0f9b5b  pop edi
    X86_AT(c, 0xf9b5bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f9b5c  pop esi
    X86_AT(c, 0xf9b5cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f9b5d  ret 
    X86_AT(c, 0xf9b5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf9b59u, "ran off the end of a function");
}
void f_000f9b60(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0f9b60  call 0xf0c70
    X86_AT(c, 0xf9b60u);
    push32(c, 0xf9b65u); f_000f0c70(c); X86_RET(c, 0xf9b65u);
    X86_TICK(c, 9);
    // 0f9b65  push 7
    X86_AT(c, 0xf9b65u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f9b67  call 0xe693c
    X86_AT(c, 0xf9b67u);
    push32(c, 0xf9b6cu); f_000e693c(c); X86_RET(c, 0xf9b6cu);
    X86_TICK(c, 11);
    // 0f9b6c  push 0xab5c
    X86_AT(c, 0xf9b6cu);
    { uint32_t v = 0xAB5Cu; push32(c, v); }
    // 0f9b71  push 7
    X86_AT(c, 0xf9b71u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f9b73  call 0xe5654
    X86_AT(c, 0xf9b73u);
    push32(c, 0xf9b78u); f_000e5654(c); X86_RET(c, 0xf9b78u);
    X86_TICK(c, 9);
    // 0f9b78  push 7
    X86_AT(c, 0xf9b78u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f9b7a  call 0xe6c68
    X86_AT(c, 0xf9b7au);
    push32(c, 0xf9b7fu); f_000e6c68(c); X86_RET(c, 0xf9b7fu);
    X86_TICK(c, 9);
    // 0f9b7f  push 0x100
    X86_AT(c, 0xf9b7fu);
    { uint32_t v = 0x100u; push32(c, v); }
    // 0f9b84  call 0xe1a7c
    X86_AT(c, 0xf9b84u);
    push32(c, 0xf9b89u); f_000e1a7c(c); X86_RET(c, 0xf9b89u);
    X86_TICK(c, 9);
    // 0f9b89  add esp, 0x14
    X86_AT(c, 0xf9b89u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0f9b8c  cmp eax, 0x10
    X86_AT(c, 0xf9b8cu);
    (void)x86_sub(c, c.r[0], 0x10u, 0, 4);
    // 0f9b8f  jl 0xf9baa
    X86_AT(c, 0xf9b8fu);
    if (x86_cc(c, 12)) { goto L_f9baa; }
    X86_TICK(c, 25);
    // 0f9b91  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf9b91u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f9b96  lea edx, [eax + eax*4]
    X86_AT(c, 0xf9b96u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f9b99  lea edx, [eax + edx*2]
    X86_AT(c, 0xf9b99u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f9b9c  shl edx, 5
    X86_AT(c, 0xf9b9cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f9b9f  sub edx, eax
    X86_AT(c, 0xf9b9fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f9ba1  cmp dword ptr [edx + 0xcdef3], 0
    X86_AT(c, 0xf9ba1u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEF3u))), 0x0u, 0, 4);
    // 0f9ba8  jne 0xf9bce
    X86_AT(c, 0xf9ba8u);
    if (x86_cc(c, 5)) { goto L_f9bce; }
L_f9baa:
    X86_TICK(c, 9);
    // 0f9baa  push 5
    X86_AT(c, 0xf9baau);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0f9bac  call 0xe1a7c
    X86_AT(c, 0xf9bacu);
    push32(c, 0xf9bb1u); f_000e1a7c(c); X86_RET(c, 0xf9bb1u);
    X86_TICK(c, 26);
    // 0f9bb1  mov edx, dword ptr [0xceca0]
    X86_AT(c, 0xf9bb1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f9bb7  lea ecx, [edx + edx*4]
    X86_AT(c, 0xf9bb7u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0f9bba  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xf9bbau);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0f9bbd  shl ecx, 5
    X86_AT(c, 0xf9bbdu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0f9bc0  sub ecx, edx
    X86_AT(c, 0xf9bc0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0f9bc2  inc eax
    X86_AT(c, 0xf9bc2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0f9bc3  mov dword ptr [ecx + 0xcdf97], eax
    X86_AT(c, 0xf9bc3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDF97u)), c.r[0]);
    // 0f9bc9  add esp, 4
    X86_AT(c, 0xf9bc9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f9bcc  jmp 0xf9bfa
    X86_AT(c, 0xf9bccu);
    goto L_f9bfa;
L_f9bce:
    X86_TICK(c, 11);
    // 0f9bce  push 0xab94
    X86_AT(c, 0xf9bceu);
    { uint32_t v = 0xAB94u; push32(c, v); }
    // 0f9bd3  push 7
    X86_AT(c, 0xf9bd3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f9bd5  call 0xe5654
    X86_AT(c, 0xf9bd5u);
    push32(c, 0xf9bdau); f_000e5654(c); X86_RET(c, 0xf9bdau);
    X86_TICK(c, 9);
    // 0f9bda  push 7
    X86_AT(c, 0xf9bdau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f9bdc  call 0xe6c68
    X86_AT(c, 0xf9bdcu);
    push32(c, 0xf9be1u); f_000e6c68(c); X86_RET(c, 0xf9be1u);
    X86_TICK(c, 21);
    // 0f9be1  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf9be1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f9be6  lea edx, [eax + eax*4]
    X86_AT(c, 0xf9be6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f9be9  lea edx, [eax + edx*2]
    X86_AT(c, 0xf9be9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f9bec  shl edx, 5
    X86_AT(c, 0xf9becu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f9bef  sub edx, eax
    X86_AT(c, 0xf9befu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f9bf1  dec dword ptr [edx + 0xcdef3]
    X86_AT(c, 0xf9bf1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEF3u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0f9bf7  add esp, 0xc
    X86_AT(c, 0xf9bf7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_f9bfa:
    X86_TICK(c, 10);
    // 0f9bfa  ret 
    X86_AT(c, 0xf9bfau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf9b60u, "ran off the end of a function");
}
void f_000f9bfc(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0f9bfc  call 0xf0c70
    X86_AT(c, 0xf9bfcu);
    push32(c, 0xf9c01u); f_000f0c70(c); X86_RET(c, 0xf9c01u);
    X86_TICK(c, 9);
    // 0f9c01  push 7
    X86_AT(c, 0xf9c01u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f9c03  call 0xe693c
    X86_AT(c, 0xf9c03u);
    push32(c, 0xf9c08u); f_000e693c(c); X86_RET(c, 0xf9c08u);
    X86_TICK(c, 11);
    // 0f9c08  push 0xabdc
    X86_AT(c, 0xf9c08u);
    { uint32_t v = 0xABDCu; push32(c, v); }
    // 0f9c0d  push 7
    X86_AT(c, 0xf9c0du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f9c0f  call 0xe5654
    X86_AT(c, 0xf9c0fu);
    push32(c, 0xf9c14u); f_000e5654(c); X86_RET(c, 0xf9c14u);
    X86_TICK(c, 9);
    // 0f9c14  push 7
    X86_AT(c, 0xf9c14u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f9c16  call 0xe6c68
    X86_AT(c, 0xf9c16u);
    push32(c, 0xf9c1bu); f_000e6c68(c); X86_RET(c, 0xf9c1bu);
    X86_TICK(c, 9);
    // 0f9c1b  push 0x100
    X86_AT(c, 0xf9c1bu);
    { uint32_t v = 0x100u; push32(c, v); }
    // 0f9c20  call 0xe1a7c
    X86_AT(c, 0xf9c20u);
    push32(c, 0xf9c25u); f_000e1a7c(c); X86_RET(c, 0xf9c25u);
    X86_TICK(c, 9);
    // 0f9c25  add esp, 0x14
    X86_AT(c, 0xf9c25u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0f9c28  cmp eax, 0x10
    X86_AT(c, 0xf9c28u);
    (void)x86_sub(c, c.r[0], 0x10u, 0, 4);
    // 0f9c2b  jl 0xf9c46
    X86_AT(c, 0xf9c2bu);
    if (x86_cc(c, 12)) { goto L_f9c46; }
    X86_TICK(c, 25);
    // 0f9c2d  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf9c2du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f9c32  lea edx, [eax + eax*4]
    X86_AT(c, 0xf9c32u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f9c35  lea edx, [eax + edx*2]
    X86_AT(c, 0xf9c35u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f9c38  shl edx, 5
    X86_AT(c, 0xf9c38u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f9c3b  sub edx, eax
    X86_AT(c, 0xf9c3bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f9c3d  cmp dword ptr [edx + 0xcdef7], 0
    X86_AT(c, 0xf9c3du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEF7u))), 0x0u, 0, 4);
    // 0f9c44  jne 0xf9c6a
    X86_AT(c, 0xf9c44u);
    if (x86_cc(c, 5)) { goto L_f9c6a; }
L_f9c46:
    X86_TICK(c, 9);
    // 0f9c46  push 5
    X86_AT(c, 0xf9c46u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0f9c48  call 0xe1a7c
    X86_AT(c, 0xf9c48u);
    push32(c, 0xf9c4du); f_000e1a7c(c); X86_RET(c, 0xf9c4du);
    X86_TICK(c, 26);
    // 0f9c4d  mov edx, dword ptr [0xceca0]
    X86_AT(c, 0xf9c4du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f9c53  lea ecx, [edx + edx*4]
    X86_AT(c, 0xf9c53u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0f9c56  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xf9c56u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0f9c59  shl ecx, 5
    X86_AT(c, 0xf9c59u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0f9c5c  sub ecx, edx
    X86_AT(c, 0xf9c5cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0f9c5e  inc eax
    X86_AT(c, 0xf9c5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0f9c5f  mov dword ptr [ecx + 0xcdf93], eax
    X86_AT(c, 0xf9c5fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDF93u)), c.r[0]);
    // 0f9c65  add esp, 4
    X86_AT(c, 0xf9c65u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f9c68  jmp 0xf9c96
    X86_AT(c, 0xf9c68u);
    goto L_f9c96;
L_f9c6a:
    X86_TICK(c, 11);
    // 0f9c6a  push 0xac14
    X86_AT(c, 0xf9c6au);
    { uint32_t v = 0xAC14u; push32(c, v); }
    // 0f9c6f  push 7
    X86_AT(c, 0xf9c6fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f9c71  call 0xe5654
    X86_AT(c, 0xf9c71u);
    push32(c, 0xf9c76u); f_000e5654(c); X86_RET(c, 0xf9c76u);
    X86_TICK(c, 9);
    // 0f9c76  push 7
    X86_AT(c, 0xf9c76u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f9c78  call 0xe6c68
    X86_AT(c, 0xf9c78u);
    push32(c, 0xf9c7du); f_000e6c68(c); X86_RET(c, 0xf9c7du);
    X86_TICK(c, 21);
    // 0f9c7d  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf9c7du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f9c82  lea edx, [eax + eax*4]
    X86_AT(c, 0xf9c82u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f9c85  lea edx, [eax + edx*2]
    X86_AT(c, 0xf9c85u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f9c88  shl edx, 5
    X86_AT(c, 0xf9c88u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f9c8b  sub edx, eax
    X86_AT(c, 0xf9c8bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f9c8d  dec dword ptr [edx + 0xcdef7]
    X86_AT(c, 0xf9c8du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEF7u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0f9c93  add esp, 0xc
    X86_AT(c, 0xf9c93u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_f9c96:
    X86_TICK(c, 10);
    // 0f9c96  ret 
    X86_AT(c, 0xf9c96u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf9bfcu, "ran off the end of a function");
}
void f_000f9c98(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0f9c98  call 0xf0c70
    X86_AT(c, 0xf9c98u);
    push32(c, 0xf9c9du); f_000f0c70(c); X86_RET(c, 0xf9c9du);
    X86_TICK(c, 9);
    // 0f9c9d  push 7
    X86_AT(c, 0xf9c9du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f9c9f  call 0xe693c
    X86_AT(c, 0xf9c9fu);
    push32(c, 0xf9ca4u); f_000e693c(c); X86_RET(c, 0xf9ca4u);
    X86_TICK(c, 11);
    // 0f9ca4  push 0xac5c
    X86_AT(c, 0xf9ca4u);
    { uint32_t v = 0xAC5Cu; push32(c, v); }
    // 0f9ca9  push 7
    X86_AT(c, 0xf9ca9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f9cab  call 0xe5654
    X86_AT(c, 0xf9cabu);
    push32(c, 0xf9cb0u); f_000e5654(c); X86_RET(c, 0xf9cb0u);
    X86_TICK(c, 9);
    // 0f9cb0  push 7
    X86_AT(c, 0xf9cb0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f9cb2  call 0xe6c68
    X86_AT(c, 0xf9cb2u);
    push32(c, 0xf9cb7u); f_000e6c68(c); X86_RET(c, 0xf9cb7u);
    X86_TICK(c, 9);
    // 0f9cb7  push 0x100
    X86_AT(c, 0xf9cb7u);
    { uint32_t v = 0x100u; push32(c, v); }
    // 0f9cbc  call 0xe1a7c
    X86_AT(c, 0xf9cbcu);
    push32(c, 0xf9cc1u); f_000e1a7c(c); X86_RET(c, 0xf9cc1u);
    X86_TICK(c, 9);
    // 0f9cc1  add esp, 0x14
    X86_AT(c, 0xf9cc1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0f9cc4  cmp eax, 0x10
    X86_AT(c, 0xf9cc4u);
    (void)x86_sub(c, c.r[0], 0x10u, 0, 4);
    // 0f9cc7  jl 0xf9ce2
    X86_AT(c, 0xf9cc7u);
    if (x86_cc(c, 12)) { goto L_f9ce2; }
    X86_TICK(c, 25);
    // 0f9cc9  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf9cc9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f9cce  lea edx, [eax + eax*4]
    X86_AT(c, 0xf9cceu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f9cd1  lea edx, [eax + edx*2]
    X86_AT(c, 0xf9cd1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f9cd4  shl edx, 5
    X86_AT(c, 0xf9cd4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f9cd7  sub edx, eax
    X86_AT(c, 0xf9cd7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f9cd9  cmp dword ptr [edx + 0xcdf1f], 0
    X86_AT(c, 0xf9cd9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF1Fu))), 0x0u, 0, 4);
    // 0f9ce0  jne 0xf9d08
    X86_AT(c, 0xf9ce0u);
    if (x86_cc(c, 5)) { goto L_f9d08; }
L_f9ce2:
    X86_TICK(c, 9);
    // 0f9ce2  push 5
    X86_AT(c, 0xf9ce2u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0f9ce4  call 0xe1a7c
    X86_AT(c, 0xf9ce4u);
    push32(c, 0xf9ce9u); f_000e1a7c(c); X86_RET(c, 0xf9ce9u);
    X86_TICK(c, 26);
    // 0f9ce9  mov edx, dword ptr [0xceca0]
    X86_AT(c, 0xf9ce9u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f9cef  lea ecx, [edx + edx*4]
    X86_AT(c, 0xf9cefu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0f9cf2  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xf9cf2u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0f9cf5  shl ecx, 5
    X86_AT(c, 0xf9cf5u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0f9cf8  sub ecx, edx
    X86_AT(c, 0xf9cf8u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0f9cfa  add eax, 2
    X86_AT(c, 0xf9cfau);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0f9cfd  mov dword ptr [ecx + 0xcdf9b], eax
    X86_AT(c, 0xf9cfdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDF9Bu)), c.r[0]);
    // 0f9d03  add esp, 4
    X86_AT(c, 0xf9d03u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f9d06  jmp 0xf9d34
    X86_AT(c, 0xf9d06u);
    goto L_f9d34;
L_f9d08:
    X86_TICK(c, 11);
    // 0f9d08  push 0xac88
    X86_AT(c, 0xf9d08u);
    { uint32_t v = 0xAC88u; push32(c, v); }
    // 0f9d0d  push 7
    X86_AT(c, 0xf9d0du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f9d0f  call 0xe5654
    X86_AT(c, 0xf9d0fu);
    push32(c, 0xf9d14u); f_000e5654(c); X86_RET(c, 0xf9d14u);
    X86_TICK(c, 9);
    // 0f9d14  push 7
    X86_AT(c, 0xf9d14u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f9d16  call 0xe6c68
    X86_AT(c, 0xf9d16u);
    push32(c, 0xf9d1bu); f_000e6c68(c); X86_RET(c, 0xf9d1bu);
    X86_TICK(c, 21);
    // 0f9d1b  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf9d1bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f9d20  lea edx, [eax + eax*4]
    X86_AT(c, 0xf9d20u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f9d23  lea edx, [eax + edx*2]
    X86_AT(c, 0xf9d23u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f9d26  shl edx, 5
    X86_AT(c, 0xf9d26u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f9d29  sub edx, eax
    X86_AT(c, 0xf9d29u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f9d2b  dec dword ptr [edx + 0xcdf1f]
    X86_AT(c, 0xf9d2bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF1Fu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0f9d31  add esp, 0xc
    X86_AT(c, 0xf9d31u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_f9d34:
    X86_TICK(c, 10);
    // 0f9d34  ret 
    X86_AT(c, 0xf9d34u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf9c98u, "ran off the end of a function");
}
void f_000f9d38(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0f9d38  push ebp
    X86_AT(c, 0xf9d38u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f9d39  mov ebp, esp
    X86_AT(c, 0xf9d39u);
    c.r[5] = c.r[4];
    // 0f9d3b  sub esp, 8
    X86_AT(c, 0xf9d3bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0f9d3e  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xf9d3eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
    // 0f9d45  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xf9d45u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0f9d4c  lea eax, [ebp - 8]
    X86_AT(c, 0xf9d4cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0f9d4f  push eax
    X86_AT(c, 0xf9d4fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f9d50  lea eax, [ebp - 4]
    X86_AT(c, 0xf9d50u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0f9d53  push eax
    X86_AT(c, 0xf9d53u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f9d54  push dword ptr [ebp + 8]
    X86_AT(c, 0xf9d54u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0f9d57  call 0xf8dd8
    X86_AT(c, 0xf9d57u);
    push32(c, 0xf9d5cu); f_000f8dd8(c); X86_RET(c, 0xf9d5cu);
    X86_TICK(c, 9);
    // 0f9d5c  add esp, 0xc
    X86_AT(c, 0xf9d5cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f9d5f  and eax, eax
    X86_AT(c, 0xf9d5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f9d61  jne 0xf9d9a
    X86_AT(c, 0xf9d61u);
    if (x86_cc(c, 5)) { goto L_f9d9a; }
    X86_TICK(c, 9);
    // 0f9d63  push 5
    X86_AT(c, 0xf9d63u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0f9d65  call 0xe1944
    X86_AT(c, 0xf9d65u);
    push32(c, 0xf9d6au); f_000e1944(c); X86_RET(c, 0xf9d6au);
    X86_TICK(c, 7);
    // 0f9d6a  call 0xf0c70
    X86_AT(c, 0xf9d6au);
    push32(c, 0xf9d6fu); f_000f0c70(c); X86_RET(c, 0xf9d6fu);
    X86_TICK(c, 9);
    // 0f9d6f  push 7
    X86_AT(c, 0xf9d6fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f9d71  call 0xe693c
    X86_AT(c, 0xf9d71u);
    push32(c, 0xf9d76u); f_000e693c(c); X86_RET(c, 0xf9d76u);
    X86_TICK(c, 11);
    // 0f9d76  push 0xacb4
    X86_AT(c, 0xf9d76u);
    { uint32_t v = 0xACB4u; push32(c, v); }
    // 0f9d7b  push 7
    X86_AT(c, 0xf9d7bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f9d7d  call 0xe5654
    X86_AT(c, 0xf9d7du);
    push32(c, 0xf9d82u); f_000e5654(c); X86_RET(c, 0xf9d82u);
    X86_TICK(c, 9);
    // 0f9d82  push 7
    X86_AT(c, 0xf9d82u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f9d84  call 0xe6c68
    X86_AT(c, 0xf9d84u);
    push32(c, 0xf9d89u); f_000e6c68(c); X86_RET(c, 0xf9d89u);
    X86_TICK(c, 9);
    // 0f9d89  push 8
    X86_AT(c, 0xf9d89u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0f9d8b  call 0xe1944
    X86_AT(c, 0xf9d8bu);
    push32(c, 0xf9d90u); f_000e1944(c); X86_RET(c, 0xf9d90u);
    X86_TICK(c, 9);
    // 0f9d90  push 0x64
    X86_AT(c, 0xf9d90u);
    { uint32_t v = 0x64u; push32(c, v); }
    // 0f9d92  call 0xeff44
    X86_AT(c, 0xf9d92u);
    push32(c, 0xf9d97u); f_000eff44(c); X86_RET(c, 0xf9d97u);
    X86_TICK(c, 2);
    // 0f9d97  add esp, 0x1c
    X86_AT(c, 0xf9d97u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_f9d9a:
    X86_TICK(c, 16);
    // 0f9d9a  leave 
    X86_AT(c, 0xf9d9au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f9d9b  ret 
    X86_AT(c, 0xf9d9bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf9d38u, "ran off the end of a function");
}
void f_000f9d9c(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0f9d9c  push edi
    X86_AT(c, 0xf9d9cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f9d9d  push 0xff
    X86_AT(c, 0xf9d9du);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0f9da2  call 0xe1a7c
    X86_AT(c, 0xf9da2u);
    push32(c, 0xf9da7u); f_000e1a7c(c); X86_RET(c, 0xf9da7u);
    X86_TICK(c, 9);
    // 0f9da7  add esp, 4
    X86_AT(c, 0xf9da7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f9daa  cmp eax, 0x10
    X86_AT(c, 0xf9daau);
    (void)x86_sub(c, c.r[0], 0x10u, 0, 4);
    // 0f9dad  jge 0xf9df9
    X86_AT(c, 0xf9dadu);
    if (x86_cc(c, 13)) { goto L_f9df9; }
    X86_TICK(c, 9);
    // 0f9daf  push 0xf
    X86_AT(c, 0xf9dafu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f9db1  call 0xe1a7c
    X86_AT(c, 0xf9db1u);
    push32(c, 0xf9db6u); f_000e1a7c(c); X86_RET(c, 0xf9db6u);
    X86_TICK(c, 29);
    // 0f9db6  xchg edi, eax
    X86_AT(c, 0xf9db6u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0f9db7  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf9db7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f9dbc  lea edx, [eax + eax*4]
    X86_AT(c, 0xf9dbcu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f9dbf  lea edx, [eax + edx*2]
    X86_AT(c, 0xf9dbfu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f9dc2  shl edx, 5
    X86_AT(c, 0xf9dc2u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f9dc5  sub edx, eax
    X86_AT(c, 0xf9dc5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f9dc7  add esp, 4
    X86_AT(c, 0xf9dc7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f9dca  mov eax, dword ptr [edx + edi*4 + 0xcdee7]
    X86_AT(c, 0xf9dcau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[7] * 4 + 0xCDEE7u)));
    // 0f9dd1  and eax, eax
    X86_AT(c, 0xf9dd1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0f9dd3  je 0xf9df9
    X86_AT(c, 0xf9dd3u);
    if (x86_cc(c, 4)) { goto L_f9df9; }
    X86_TICK(c, 15);
    // 0f9dd5  dec dword ptr [edx + edi*4 + 0xcdee7]
    X86_AT(c, 0xf9dd5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + c.r[7] * 4 + 0xCDEE7u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0f9ddc  push 7
    X86_AT(c, 0xf9ddcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f9dde  call 0xe693c
    X86_AT(c, 0xf9ddeu);
    push32(c, 0xf9de3u); f_000e693c(c); X86_RET(c, 0xf9de3u);
    X86_TICK(c, 11);
    // 0f9de3  push 0xad08
    X86_AT(c, 0xf9de3u);
    { uint32_t v = 0xAD08u; push32(c, v); }
    // 0f9de8  push 7
    X86_AT(c, 0xf9de8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f9dea  call 0xe5654
    X86_AT(c, 0xf9deau);
    push32(c, 0xf9defu); f_000e5654(c); X86_RET(c, 0xf9defu);
    X86_TICK(c, 9);
    // 0f9def  push 7
    X86_AT(c, 0xf9defu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f9df1  call 0xe6c68
    X86_AT(c, 0xf9df1u);
    push32(c, 0xf9df6u); f_000e6c68(c); X86_RET(c, 0xf9df6u);
    X86_TICK(c, 2);
    // 0f9df6  add esp, 0x10
    X86_AT(c, 0xf9df6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_f9df9:
    X86_TICK(c, 14);
    // 0f9df9  pop edi
    X86_AT(c, 0xf9df9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f9dfa  ret 
    X86_AT(c, 0xf9dfau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf9d9cu, "ran off the end of a function");
}
void f_000f9dfc(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0f9dfc  push ebp
    X86_AT(c, 0xf9dfcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f9dfd  mov ebp, esp
    X86_AT(c, 0xf9dfdu);
    c.r[5] = c.r[4];
    // 0f9dff  push eax
    X86_AT(c, 0xf9dffu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f9e00  push ebx
    X86_AT(c, 0xf9e00u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f9e01  push esi
    X86_AT(c, 0xf9e01u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f9e02  push edi
    X86_AT(c, 0xf9e02u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f9e03  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xf9e03u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0f9e06  push 7
    X86_AT(c, 0xf9e06u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f9e08  call 0xe1944
    X86_AT(c, 0xf9e08u);
    push32(c, 0xf9e0du); f_000e1944(c); X86_RET(c, 0xf9e0du);
    X86_TICK(c, 14);
    // 0f9e0d  add esp, 4
    X86_AT(c, 0xf9e0du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f9e10  cmp byte ptr [edi + 0xce3c8], 0xfc
    X86_AT(c, 0xf9e10u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCE3C8u))), 0xFCu, 0, 1);
    // 0f9e17  jne 0xf9e1e
    X86_AT(c, 0xf9e17u);
    if (x86_cc(c, 5)) { goto L_f9e1e; }
    X86_TICK(c, 7);
    // 0f9e19  call 0xf9d9c
    X86_AT(c, 0xf9e19u);
    push32(c, 0xf9e1eu); f_000f9d9c(c); X86_RET(c, 0xf9e1eu);
L_f9e1e:
    X86_TICK(c, 9);
    // 0f9e1e  push 7
    X86_AT(c, 0xf9e1eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f9e20  call 0xe693c
    X86_AT(c, 0xf9e20u);
    push32(c, 0xf9e25u); f_000e693c(c); X86_RET(c, 0xf9e25u);
    X86_TICK(c, 11);
    // 0f9e25  push 0xad4c
    X86_AT(c, 0xf9e25u);
    { uint32_t v = 0xAD4Cu; push32(c, v); }
    // 0f9e2a  push 7
    X86_AT(c, 0xf9e2au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f9e2c  call 0xe5654
    X86_AT(c, 0xf9e2cu);
    push32(c, 0xf9e31u); f_000e5654(c); X86_RET(c, 0xf9e31u);
    X86_TICK(c, 9);
    // 0f9e31  push 7
    X86_AT(c, 0xf9e31u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f9e33  call 0xe6c68
    X86_AT(c, 0xf9e33u);
    push32(c, 0xf9e38u); f_000e6c68(c); X86_RET(c, 0xf9e38u);
    X86_TICK(c, 9);
    // 0f9e38  push 0x20
    X86_AT(c, 0xf9e38u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0f9e3a  call 0xe1a7c
    X86_AT(c, 0xf9e3au);
    push32(c, 0xf9e3fu); f_000e1a7c(c); X86_RET(c, 0xf9e3fu);
    X86_TICK(c, 78);
    // 0f9e3f  mov edx, dword ptr [0xceca0]
    X86_AT(c, 0xf9e3fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f9e45  lea ecx, [edx + edx*4]
    X86_AT(c, 0xf9e45u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0f9e48  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xf9e48u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0f9e4b  shl ecx, 5
    X86_AT(c, 0xf9e4bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0f9e4e  sub ecx, edx
    X86_AT(c, 0xf9e4eu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0f9e50  add esp, 0x14
    X86_AT(c, 0xf9e50u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0f9e53  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xf9e53u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0f9e56  mov eax, dword ptr [ecx + 0xcde66]
    X86_AT(c, 0xf9e56u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE66u)));
    // 0f9e5c  cdq 
    X86_AT(c, 0xf9e5cu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0f9e5d  mov ecx, 0xa
    X86_AT(c, 0xf9e5du);
    c.r[1] = 0xAu;
    // 0f9e62  idiv ecx
    X86_AT(c, 0xf9e62u);
    x86_idiv(c, c.r[1], 4, 0xf9e62u);
    // 0f9e64  inc eax
    X86_AT(c, 0xf9e64u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0f9e65  cmp eax, dword ptr [ebp - 4]
    X86_AT(c, 0xf9e65u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4);
    // 0f9e68  jg 0xf9e9e
    X86_AT(c, 0xf9e68u);
    if (x86_cc(c, 15)) { goto L_f9e9e; }
    X86_TICK(c, 9);
    // 0f9e6a  push 0xff
    X86_AT(c, 0xf9e6au);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0f9e6f  call 0xe1a7c
    X86_AT(c, 0xf9e6fu);
    push32(c, 0xf9e74u); f_000e1a7c(c); X86_RET(c, 0xf9e74u);
    X86_TICK(c, 74);
    // 0f9e74  mov edx, dword ptr [0xceca0]
    X86_AT(c, 0xf9e74u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f9e7a  lea ecx, [edx + edx*4]
    X86_AT(c, 0xf9e7au);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0f9e7d  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xf9e7du);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0f9e80  shl ecx, 5
    X86_AT(c, 0xf9e80u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0f9e83  sub ecx, edx
    X86_AT(c, 0xf9e83u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0f9e85  add esp, 4
    X86_AT(c, 0xf9e85u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f9e88  cdq 
    X86_AT(c, 0xf9e88u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0f9e89  mov ebx, 7
    X86_AT(c, 0xf9e89u);
    c.r[3] = 0x7u;
    // 0f9e8e  idiv ebx
    X86_AT(c, 0xf9e8eu);
    x86_idiv(c, c.r[3], 4, 0xf9e8eu);
    // 0f9e90  movzx eax, byte ptr [ecx + 0xcdea1]
    X86_AT(c, 0xf9e90u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDEA1u)));
    // 0f9e97  sub eax, 0x41
    X86_AT(c, 0xf9e97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x41u, 0, 4); }
    // 0f9e9a  cmp eax, edx
    X86_AT(c, 0xf9e9au);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0f9e9c  jle 0xf9eb6
    X86_AT(c, 0xf9e9cu);
    if (x86_cc(c, 14)) { goto L_f9eb6; }
L_f9e9e:
    X86_TICK(c, 11);
    // 0f9e9e  push 0xad6c
    X86_AT(c, 0xf9e9eu);
    { uint32_t v = 0xAD6Cu; push32(c, v); }
    // 0f9ea3  push 7
    X86_AT(c, 0xf9ea3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f9ea5  call 0xe5654
    X86_AT(c, 0xf9ea5u);
    push32(c, 0xf9eaau); f_000e5654(c); X86_RET(c, 0xf9eaau);
    X86_TICK(c, 9);
    // 0f9eaa  push 7
    X86_AT(c, 0xf9eaau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f9eac  call 0xe6c68
    X86_AT(c, 0xf9eacu);
    push32(c, 0xf9eb1u); f_000e6c68(c); X86_RET(c, 0xf9eb1u);
    X86_TICK(c, 9);
    // 0f9eb1  add esp, 0xc
    X86_AT(c, 0xf9eb1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f9eb4  jmp 0xf9f2a
    X86_AT(c, 0xf9eb4u);
    goto L_f9f2a;
L_f9eb6:
    X86_TICK(c, 9);
    // 0f9eb6  push 0
    X86_AT(c, 0xf9eb6u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f9eb8  call 0xf309c
    X86_AT(c, 0xf9eb8u);
    push32(c, 0xf9ebdu); f_000f309c(c); X86_RET(c, 0xf9ebdu);
    X86_TICK(c, 9);
    // 0f9ebd  push 4
    X86_AT(c, 0xf9ebdu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0f9ebf  call 0xe1a7c
    X86_AT(c, 0xf9ebfu);
    push32(c, 0xf9ec4u); f_000e1a7c(c); X86_RET(c, 0xf9ec4u);
    X86_TICK(c, 85);
    // 0f9ec4  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xf9ec4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0f9ec7  mov eax, dword ptr [edi*4 + 0xce608]
    X86_AT(c, 0xf9ec7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE608u)));
    // 0f9ece  sub edx, edx
    X86_AT(c, 0xf9eceu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0f9ed0  mov ecx, 6
    X86_AT(c, 0xf9ed0u);
    c.r[1] = 0x6u;
    // 0f9ed5  div ecx
    X86_AT(c, 0xf9ed5u);
    x86_div(c, c.r[1], 4, 0xf9ed5u);
    // 0f9ed7  mov esi, dword ptr [ebp - 4]
    X86_AT(c, 0xf9ed7u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0f9eda  add esi, eax
    X86_AT(c, 0xf9edau);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 0f9edc  inc esi
    X86_AT(c, 0xf9edcu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0f9edd  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf9eddu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f9ee2  lea edx, [eax + eax*4]
    X86_AT(c, 0xf9ee2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f9ee5  lea edx, [eax + edx*2]
    X86_AT(c, 0xf9ee5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f9ee8  shl edx, 5
    X86_AT(c, 0xf9ee8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f9eeb  sub edx, eax
    X86_AT(c, 0xf9eebu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f9eed  add esp, 8
    X86_AT(c, 0xf9eedu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f9ef0  cmp dword ptr [edx + 0xcde99], 0
    X86_AT(c, 0xf9ef0u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u))), 0x0u, 0, 4);
    // 0f9ef7  jne 0xf9f04
    X86_AT(c, 0xf9ef7u);
    if (x86_cc(c, 5)) { goto L_f9f04; }
    X86_TICK(c, 12);
    // 0f9ef9  cmp dword ptr [edx + 0xcdf57], 3
    X86_AT(c, 0xf9ef9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))), 0x3u, 0, 4);
    // 0f9f00  jne 0xf9f04
    X86_AT(c, 0xf9f00u);
    if (x86_cc(c, 5)) { goto L_f9f04; }
    X86_TICK(c, 2);
    // 0f9f02  add esi, esi
    X86_AT(c, 0xf9f02u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[6], 0, 4); }
L_f9f04:
    X86_TICK(c, 9);
    // 0f9f04  push esi
    X86_AT(c, 0xf9f04u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f9f05  call 0xeff44
    X86_AT(c, 0xf9f05u);
    push32(c, 0xf9f0au); f_000eff44(c); X86_RET(c, 0xf9f0au);
    X86_TICK(c, 13);
    // 0f9f0a  push 4
    X86_AT(c, 0xf9f0au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0f9f0c  push esi
    X86_AT(c, 0xf9f0cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f9f0d  push 7
    X86_AT(c, 0xf9f0du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f9f0f  call 0xe5630
    X86_AT(c, 0xf9f0fu);
    push32(c, 0xf9f14u); f_000e5630(c); X86_RET(c, 0xf9f14u);
    X86_TICK(c, 11);
    // 0f9f14  push 0xad90
    X86_AT(c, 0xf9f14u);
    { uint32_t v = 0xAD90u; push32(c, v); }
    // 0f9f19  push 7
    X86_AT(c, 0xf9f19u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f9f1b  call 0xe5654
    X86_AT(c, 0xf9f1bu);
    push32(c, 0xf9f20u); f_000e5654(c); X86_RET(c, 0xf9f20u);
    X86_TICK(c, 9);
    // 0f9f20  push 7
    X86_AT(c, 0xf9f20u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f9f22  call 0xe6c68
    X86_AT(c, 0xf9f22u);
    push32(c, 0xf9f27u); f_000e6c68(c); X86_RET(c, 0xf9f27u);
    X86_TICK(c, 2);
    // 0f9f27  add esp, 0x1c
    X86_AT(c, 0xf9f27u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_f9f2a:
    X86_TICK(c, 28);
    // 0f9f2a  pop edi
    X86_AT(c, 0xf9f2au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f9f2b  pop esi
    X86_AT(c, 0xf9f2bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f9f2c  pop ebx
    X86_AT(c, 0xf9f2cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f9f2d  leave 
    X86_AT(c, 0xf9f2du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f9f2e  ret 
    X86_AT(c, 0xf9f2eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf9dfcu, "ran off the end of a function");
}
void f_000f9f30(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0f9f30  push ebp
    X86_AT(c, 0xf9f30u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f9f31  mov ebp, esp
    X86_AT(c, 0xf9f31u);
    c.r[5] = c.r[4];
    // 0f9f33  sub esp, 0xc
    X86_AT(c, 0xf9f33u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0f9f36  push ebx
    X86_AT(c, 0xf9f36u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f9f37  push esi
    X86_AT(c, 0xf9f37u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f9f38  push edi
    X86_AT(c, 0xf9f38u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f9f39  mov dword ptr [ebp - 4], 0xd6e6c
    X86_AT(c, 0xf9f39u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xD6E6Cu);
    // 0f9f40  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xf9f40u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0f9f43  dec edx
    X86_AT(c, 0xf9f43u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0f9f44  cmp edx, 3
    X86_AT(c, 0xf9f44u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0f9f47  ja 0xfa05e
    X86_AT(c, 0xf9f47u);
    if (x86_cc(c, 7)) { goto L_fa05e; }
    X86_TICK(c, 7);
    // 0f9f4d  jmp dword ptr cs:[edx*4 + 0xf9f55]
    X86_AT(c, 0xf9f4du);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF9F55u)));
      switch (t) {
      case 0xf9f65u: goto L_f9f65;
      case 0xf9f86u: goto L_f9f86;
      case 0xf9fd0u: goto L_f9fd0;
      case 0xfa019u: goto L_fa019;
      default: x86_jump(c, t); return; } }
L_f9f65:
    X86_TICK(c, 2);
    // 0f9f65  sub edi, edi
    X86_AT(c, 0xf9f65u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_f9f67:
    X86_TICK(c, 7);
    // 0f9f67  cmp edi, 0x100
    X86_AT(c, 0xf9f67u);
    (void)x86_sub(c, c.r[7], 0x100u, 0, 4);
    // 0f9f6d  jge 0xfa05e
    X86_AT(c, 0xf9f6du);
    if (x86_cc(c, 13)) { goto L_fa05e; }
    X86_TICK(c, 35);
    // 0f9f73  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xf9f73u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0f9f76  inc dword ptr [ebp + 8]
    X86_AT(c, 0xf9f76u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0f9f79  mov al, byte ptr [eax]
    X86_AT(c, 0xf9f79u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0f9f7b  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xf9f7bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0f9f7e  inc dword ptr [ebp - 4]
    X86_AT(c, 0xf9f7eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0f9f81  mov byte ptr [edx], al
    X86_AT(c, 0xf9f81u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 0f9f83  inc edi
    X86_AT(c, 0xf9f83u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0f9f84  jmp 0xf9f67
    X86_AT(c, 0xf9f84u);
    X86_POLL(c, 0xf9f67u); goto L_f9f67;
L_f9f86:
    X86_TICK(c, 4);
    // 0f9f86  mov edi, 0xf0
    X86_AT(c, 0xf9f86u);
    c.r[7] = 0xF0u;
    // 0f9f8b  sub ebx, ebx
    X86_AT(c, 0xf9f8bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_f9f8d:
    X86_TICK(c, 7);
    // 0f9f8d  cmp ebx, 0x10
    X86_AT(c, 0xf9f8du);
    (void)x86_sub(c, c.r[3], 0x10u, 0, 4);
    // 0f9f90  jge 0xf9fb8
    X86_AT(c, 0xf9f90u);
    if (x86_cc(c, 13)) { goto L_f9fb8; }
    X86_TICK(c, 2);
    // 0f9f92  sub esi, esi
    X86_AT(c, 0xf9f92u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_f9f94:
    X86_TICK(c, 7);
    // 0f9f94  cmp esi, 0x10
    X86_AT(c, 0xf9f94u);
    (void)x86_sub(c, c.r[6], 0x10u, 0, 4);
    // 0f9f97  jge 0xf9fb4
    X86_AT(c, 0xf9f97u);
    if (x86_cc(c, 13)) { goto L_f9fb4; }
    X86_TICK(c, 38);
    // 0f9f99  mov eax, esi
    X86_AT(c, 0xf9f99u);
    c.r[0] = c.r[6];
    // 0f9f9b  shl eax, 4
    X86_AT(c, 0xf9f9bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0f9f9e  neg eax
    X86_AT(c, 0xf9f9eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0f9fa0  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xf9fa0u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0f9fa3  lea ecx, [edi + edx*1]
    X86_AT(c, 0xf9fa3u);
    c.r[1] = (uint32_t)(c.r[7] + c.r[2]);
    // 0f9fa6  mov al, byte ptr [ecx + eax*1]
    X86_AT(c, 0xf9fa6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1] + c.r[0]))));
    // 0f9fa9  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xf9fa9u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0f9fac  inc dword ptr [ebp - 4]
    X86_AT(c, 0xf9facu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0f9faf  mov byte ptr [edx], al
    X86_AT(c, 0xf9fafu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 0f9fb1  inc esi
    X86_AT(c, 0xf9fb1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0f9fb2  jmp 0xf9f94
    X86_AT(c, 0xf9fb2u);
    X86_POLL(c, 0xf9f94u); goto L_f9f94;
L_f9fb4:
    X86_TICK(c, 11);
    // 0f9fb4  inc edi
    X86_AT(c, 0xf9fb4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0f9fb5  inc ebx
    X86_AT(c, 0xf9fb5u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0f9fb6  jmp 0xf9f8d
    X86_AT(c, 0xf9fb6u);
    X86_POLL(c, 0xf9f8du); goto L_f9f8d;
L_f9fb8:
    X86_TICK(c, 31);
    // 0f9fb8  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xf9fb8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0f9fbb  mov esi, dword ptr [eax]
    X86_AT(c, 0xf9fbbu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0f9fbd  mov edx, 0xf
    X86_AT(c, 0xf9fbdu);
    c.r[2] = 0xFu;
    // 0f9fc2  mov ecx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xf9fc2u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0f9fc5  sub edx, dword ptr [ecx]
    X86_AT(c, 0xf9fc5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[1]))), 0, 4); }
    // 0f9fc7  mov dword ptr [eax], edx
    X86_AT(c, 0xf9fc7u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), c.r[2]);
    // 0f9fc9  mov dword ptr [ecx], esi
    X86_AT(c, 0xf9fc9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1])), c.r[6]);
    // 0f9fcb  jmp 0xfa05e
    X86_AT(c, 0xf9fcbu);
    goto L_fa05e;
L_f9fd0:
    X86_TICK(c, 4);
    // 0f9fd0  mov edi, 0xff
    X86_AT(c, 0xf9fd0u);
    c.r[7] = 0xFFu;
    // 0f9fd5  sub ebx, ebx
    X86_AT(c, 0xf9fd5u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_f9fd7:
    X86_TICK(c, 7);
    // 0f9fd7  cmp ebx, 0x10
    X86_AT(c, 0xf9fd7u);
    (void)x86_sub(c, c.r[3], 0x10u, 0, 4);
    // 0f9fda  jge 0xfa001
    X86_AT(c, 0xf9fdau);
    if (x86_cc(c, 13)) { goto L_fa001; }
    X86_TICK(c, 2);
    // 0f9fdc  sub esi, esi
    X86_AT(c, 0xf9fdcu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_f9fde:
    X86_TICK(c, 7);
    // 0f9fde  cmp esi, 0x10
    X86_AT(c, 0xf9fdeu);
    (void)x86_sub(c, c.r[6], 0x10u, 0, 4);
    // 0f9fe1  jge 0xf9ffb
    X86_AT(c, 0xf9fe1u);
    if (x86_cc(c, 13)) { goto L_f9ffb; }
    X86_TICK(c, 35);
    // 0f9fe3  mov eax, esi
    X86_AT(c, 0xf9fe3u);
    c.r[0] = c.r[6];
    // 0f9fe5  neg eax
    X86_AT(c, 0xf9fe5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0f9fe7  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xf9fe7u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0f9fea  lea ecx, [edi + edx*1]
    X86_AT(c, 0xf9feau);
    c.r[1] = (uint32_t)(c.r[7] + c.r[2]);
    // 0f9fed  mov al, byte ptr [ecx + eax*1]
    X86_AT(c, 0xf9fedu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1] + c.r[0]))));
    // 0f9ff0  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xf9ff0u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0f9ff3  inc dword ptr [ebp - 4]
    X86_AT(c, 0xf9ff3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0f9ff6  mov byte ptr [edx], al
    X86_AT(c, 0xf9ff6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 0f9ff8  inc esi
    X86_AT(c, 0xf9ff8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0f9ff9  jmp 0xf9fde
    X86_AT(c, 0xf9ff9u);
    X86_POLL(c, 0xf9fdeu); goto L_f9fde;
L_f9ffb:
    X86_TICK(c, 11);
    // 0f9ffb  sub edi, 0x10
    X86_AT(c, 0xf9ffbu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, 0x10u, 0, 4); }
    // 0f9ffe  inc ebx
    X86_AT(c, 0xf9ffeu);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0f9fff  jmp 0xf9fd7
    X86_AT(c, 0xf9fffu);
    X86_POLL(c, 0xf9fd7u); goto L_f9fd7;
L_fa001:
    X86_TICK(c, 33);
    // 0fa001  mov eax, 0xf
    X86_AT(c, 0xfa001u);
    c.r[0] = 0xFu;
    // 0fa006  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xfa006u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0fa009  sub eax, dword ptr [edx]
    X86_AT(c, 0xfa009u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2]))), 0, 4); }
    // 0fa00b  mov dword ptr [edx], eax
    X86_AT(c, 0xfa00bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0fa00d  mov eax, 0xf
    X86_AT(c, 0xfa00du);
    c.r[0] = 0xFu;
    // 0fa012  mov edx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xfa012u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0fa015  sub eax, dword ptr [edx]
    X86_AT(c, 0xfa015u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2]))), 0, 4); }
    // 0fa017  jmp 0xfa05c
    X86_AT(c, 0xfa017u);
    goto L_fa05c;
L_fa019:
    X86_TICK(c, 4);
    // 0fa019  mov edi, 0xf
    X86_AT(c, 0xfa019u);
    c.r[7] = 0xFu;
    // 0fa01e  sub ebx, ebx
    X86_AT(c, 0xfa01eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_fa020:
    X86_TICK(c, 7);
    // 0fa020  cmp ebx, 0x10
    X86_AT(c, 0xfa020u);
    (void)x86_sub(c, c.r[3], 0x10u, 0, 4);
    // 0fa023  jge 0xfa049
    X86_AT(c, 0xfa023u);
    if (x86_cc(c, 13)) { goto L_fa049; }
    X86_TICK(c, 2);
    // 0fa025  sub esi, esi
    X86_AT(c, 0xfa025u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_fa027:
    X86_TICK(c, 7);
    // 0fa027  cmp esi, 0x10
    X86_AT(c, 0xfa027u);
    (void)x86_sub(c, c.r[6], 0x10u, 0, 4);
    // 0fa02a  jge 0xfa045
    X86_AT(c, 0xfa02au);
    if (x86_cc(c, 13)) { goto L_fa045; }
    X86_TICK(c, 36);
    // 0fa02c  mov eax, esi
    X86_AT(c, 0xfa02cu);
    c.r[0] = c.r[6];
    // 0fa02e  shl eax, 4
    X86_AT(c, 0xfa02eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0fa031  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xfa031u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0fa034  lea ecx, [edi + edx*1]
    X86_AT(c, 0xfa034u);
    c.r[1] = (uint32_t)(c.r[7] + c.r[2]);
    // 0fa037  mov al, byte ptr [ecx + eax*1]
    X86_AT(c, 0xfa037u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1] + c.r[0]))));
    // 0fa03a  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xfa03au);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0fa03d  inc dword ptr [ebp - 4]
    X86_AT(c, 0xfa03du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0fa040  mov byte ptr [edx], al
    X86_AT(c, 0xfa040u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 0fa042  inc esi
    X86_AT(c, 0xfa042u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0fa043  jmp 0xfa027
    X86_AT(c, 0xfa043u);
    X86_POLL(c, 0xfa027u); goto L_fa027;
L_fa045:
    X86_TICK(c, 11);
    // 0fa045  dec edi
    X86_AT(c, 0xfa045u);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0fa046  inc ebx
    X86_AT(c, 0xfa046u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0fa047  jmp 0xfa020
    X86_AT(c, 0xfa047u);
    X86_POLL(c, 0xfa020u); goto L_fa020;
L_fa049:
    X86_TICK(c, 22);
    // 0fa049  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xfa049u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0fa04c  mov esi, dword ptr [eax]
    X86_AT(c, 0xfa04cu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0fa04e  mov edx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xfa04eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0fa051  mov ecx, dword ptr [edx]
    X86_AT(c, 0xfa051u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2])));
    // 0fa053  mov dword ptr [eax], ecx
    X86_AT(c, 0xfa053u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), c.r[1]);
    // 0fa055  mov eax, 0xf
    X86_AT(c, 0xfa055u);
    c.r[0] = 0xFu;
    // 0fa05a  sub eax, esi
    X86_AT(c, 0xfa05au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
L_fa05c:
    X86_TICK(c, 2);
    // 0fa05c  mov dword ptr [edx], eax
    X86_AT(c, 0xfa05cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
L_fa05e:
    X86_TICK(c, 19);
    // 0fa05e  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xfa05eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0fa061  mov eax, dword ptr [eax]
    X86_AT(c, 0xfa061u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0fa063  sub eax, 2
    X86_AT(c, 0xfa063u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0fa066  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xfa066u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0fa069  and eax, eax
    X86_AT(c, 0xfa069u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0fa06b  jge 0xfa071
    X86_AT(c, 0xfa06bu);
    if (x86_cc(c, 13)) { goto L_fa071; }
    X86_TICK(c, 7);
    // 0fa06d  add dword ptr [ebp - 0xc], 0x10
    X86_AT(c, 0xfa06du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x10u, 0, 4)); }
L_fa071:
    X86_TICK(c, 19);
    // 0fa071  mov eax, dword ptr [ebp + 0x14]
    X86_AT(c, 0xfa071u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0fa074  mov eax, dword ptr [eax]
    X86_AT(c, 0xfa074u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0fa076  sub eax, 3
    X86_AT(c, 0xfa076u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0fa079  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xfa079u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0fa07c  and eax, eax
    X86_AT(c, 0xfa07cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0fa07e  jge 0xfa084
    X86_AT(c, 0xfa07eu);
    if (x86_cc(c, 13)) { goto L_fa084; }
    X86_TICK(c, 7);
    // 0fa080  add dword ptr [ebp - 8], 0x10
    X86_AT(c, 0xfa080u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x10u, 0, 4)); }
L_fa084:
    X86_TICK(c, 2);
    // 0fa084  sub ebx, ebx
    X86_AT(c, 0xfa084u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_fa086:
    X86_TICK(c, 7);
    // 0fa086  cmp ebx, 5
    X86_AT(c, 0xfa086u);
    (void)x86_sub(c, c.r[3], 0x5u, 0, 4);
    // 0fa089  jge 0xfa0cd
    X86_AT(c, 0xfa089u);
    if (x86_cc(c, 13)) { goto L_fa0cd; }
    X86_TICK(c, 6);
    // 0fa08b  mov edi, dword ptr [ebp - 0xc]
    X86_AT(c, 0xfa08bu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0fa08e  sub esi, esi
    X86_AT(c, 0xfa08eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_fa090:
    X86_TICK(c, 7);
    // 0fa090  cmp esi, 5
    X86_AT(c, 0xfa090u);
    (void)x86_sub(c, c.r[6], 0x5u, 0, 4);
    // 0fa093  jge 0xfa0ba
    X86_AT(c, 0xfa093u);
    if (x86_cc(c, 13)) { goto L_fa0ba; }
    X86_TICK(c, 28);
    // 0fa095  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xfa095u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0fa098  shl eax, 4
    X86_AT(c, 0xfa098u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0fa09b  add eax, edi
    X86_AT(c, 0xfa09bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[7], 0, 4); }
    // 0fa09d  lea edx, [ebx + ebx*4]
    X86_AT(c, 0xfa09du);
    c.r[2] = (uint32_t)(c.r[3] + c.r[3] * 4);
    // 0fa0a0  lea ecx, [esi + edx*1]
    X86_AT(c, 0xfa0a0u);
    c.r[1] = (uint32_t)(c.r[6] + c.r[2]);
    // 0fa0a3  mov al, byte ptr [eax + 0xd6e6c]
    X86_AT(c, 0xfa0a3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xD6E6Cu))));
    // 0fa0a9  mov byte ptr [ecx + 0xd6be4], al
    X86_AT(c, 0xfa0a9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xD6BE4u)), g8(c, 0));
    // 0fa0af  inc edi
    X86_AT(c, 0xfa0afu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0fa0b0  cmp edi, 0x10
    X86_AT(c, 0xfa0b0u);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0fa0b3  jne 0xfa0b7
    X86_AT(c, 0xfa0b3u);
    if (x86_cc(c, 5)) { goto L_fa0b7; }
    X86_TICK(c, 2);
    // 0fa0b5  sub edi, edi
    X86_AT(c, 0xfa0b5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_fa0b7:
    X86_TICK(c, 9);
    // 0fa0b7  inc esi
    X86_AT(c, 0xfa0b7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0fa0b8  jmp 0xfa090
    X86_AT(c, 0xfa0b8u);
    X86_POLL(c, 0xfa090u); goto L_fa090;
L_fa0ba:
    X86_TICK(c, 18);
    // 0fa0ba  inc dword ptr [ebp - 8]
    X86_AT(c, 0xfa0bau);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0fa0bd  cmp dword ptr [ebp - 8], 0x10
    X86_AT(c, 0xfa0bdu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x10u, 0, 4);
    // 0fa0c1  jne 0xfa0ca
    X86_AT(c, 0xfa0c1u);
    if (x86_cc(c, 5)) { goto L_fa0ca; }
    X86_TICK(c, 2);
    // 0fa0c3  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xfa0c3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_fa0ca:
    X86_TICK(c, 9);
    // 0fa0ca  inc ebx
    X86_AT(c, 0xfa0cau);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0fa0cb  jmp 0xfa086
    X86_AT(c, 0xfa0cbu);
    X86_POLL(c, 0xfa086u); goto L_fa086;
L_fa0cd:
    X86_TICK(c, 30);
    // 0fa0cd  mov eax, 0xd6e6c
    X86_AT(c, 0xfa0cdu);
    c.r[0] = 0xD6E6Cu;
    // 0fa0d2  pop edi
    X86_AT(c, 0xfa0d2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0fa0d3  pop esi
    X86_AT(c, 0xfa0d3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fa0d4  pop ebx
    X86_AT(c, 0xfa0d4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fa0d5  leave 
    X86_AT(c, 0xfa0d5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fa0d6  ret 
    X86_AT(c, 0xfa0d6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf9f30u, "ran off the end of a function");
}
void f_000fa0d8(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0fa0d8  push ebp
    X86_AT(c, 0xfa0d8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0fa0d9  mov ebp, esp
    X86_AT(c, 0xfa0d9u);
    c.r[5] = c.r[4];
    // 0fa0db  push ebx
    X86_AT(c, 0xfa0dbu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fa0dc  push esi
    X86_AT(c, 0xfa0dcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fa0dd  push edi
    X86_AT(c, 0xfa0ddu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fa0de  cmp dword ptr [0xcde44], 2
    X86_AT(c, 0xfa0deu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDE44u))), 0x2u, 0, 4);
    // 0fa0e5  jne 0xfa17b
    X86_AT(c, 0xfa0e5u);
    if (x86_cc(c, 5)) { goto L_fa17b; }
    X86_TICK(c, 2);
    // 0fa0eb  sub edi, edi
    X86_AT(c, 0xfa0ebu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_fa0ed:
    X86_TICK(c, 7);
    // 0fa0ed  cmp edi, 0x10
    X86_AT(c, 0xfa0edu);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0fa0f0  jge 0xfa151
    X86_AT(c, 0xfa0f0u);
    if (x86_cc(c, 13)) { goto L_fa151; }
    X86_TICK(c, 2);
    // 0fa0f2  sub esi, esi
    X86_AT(c, 0xfa0f2u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_fa0f4:
    X86_TICK(c, 7);
    // 0fa0f4  cmp esi, 0x10
    X86_AT(c, 0xfa0f4u);
    (void)x86_sub(c, c.r[6], 0x10u, 0, 4);
    // 0fa0f7  jge 0xfa14e
    X86_AT(c, 0xfa0f7u);
    if (x86_cc(c, 13)) { goto L_fa14e; }
    X86_TICK(c, 24);
    // 0fa0f9  mov eax, edi
    X86_AT(c, 0xfa0f9u);
    c.r[0] = c.r[7];
    // 0fa0fb  shl eax, 4
    X86_AT(c, 0xfa0fbu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0fa0fe  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xfa0feu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0fa101  add eax, edx
    X86_AT(c, 0xfa101u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0fa103  movzx ebx, byte ptr [eax + esi*1]
    X86_AT(c, 0xfa103u);
    c.r[3] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6])));
    // 0fa107  and ebx, ebx
    X86_AT(c, 0xfa107u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0fa109  jl 0xfa110
    X86_AT(c, 0xfa109u);
    if (x86_cc(c, 12)) { goto L_fa110; }
    X86_TICK(c, 7);
    // 0fa10b  cmp ebx, 0x10
    X86_AT(c, 0xfa10bu);
    (void)x86_sub(c, c.r[3], 0x10u, 0, 4);
    // 0fa10e  jle 0xfa115
    X86_AT(c, 0xfa10eu);
    if (x86_cc(c, 14)) { goto L_fa115; }
L_fa110:
    X86_TICK(c, 2);
    // 0fa110  mov ebx, 6
    X86_AT(c, 0xfa110u);
    c.r[3] = 0x6u;
L_fa115:
    X86_TICK(c, 35);
    // 0fa115  push 6
    X86_AT(c, 0xfa115u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0fa117  push 6
    X86_AT(c, 0xfa117u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0fa119  lea eax, [edi + edi*2]
    X86_AT(c, 0xfa119u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0fa11c  lea eax, [eax + eax*1 + 0x40]
    X86_AT(c, 0xfa11cu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] + 0x40u);
    // 0fa120  push eax
    X86_AT(c, 0xfa120u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fa121  lea eax, [esi + esi*2]
    X86_AT(c, 0xfa121u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 2);
    // 0fa124  lea eax, [eax*2 + 0xfa]
    X86_AT(c, 0xfa124u);
    c.r[0] = (uint32_t)(c.r[0] * 2 + 0xFAu);
    // 0fa12b  push eax
    X86_AT(c, 0xfa12bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fa12c  mov eax, dword ptr [ebx*4 + 0xd6f6c]
    X86_AT(c, 0xfa12cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xD6F6Cu)));
    // 0fa133  lea eax, [eax*8]
    X86_AT(c, 0xfa133u);
    c.r[0] = (uint32_t)(c.r[0] * 8);
    // 0fa13a  lea eax, [eax + eax*2]
    X86_AT(c, 0xfa13au);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0fa13d  add eax, 0xd6fb0
    X86_AT(c, 0xfa13du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xD6FB0u, 0, 4); }
    // 0fa142  push eax
    X86_AT(c, 0xfa142u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fa143  call 0xe6288
    X86_AT(c, 0xfa143u);
    push32(c, 0xfa148u); f_000e6288(c); X86_RET(c, 0xfa148u);
    X86_TICK(c, 11);
    // 0fa148  inc esi
    X86_AT(c, 0xfa148u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0fa149  add esp, 0x14
    X86_AT(c, 0xfa149u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0fa14c  jmp 0xfa0f4
    X86_AT(c, 0xfa14cu);
    X86_POLL(c, 0xfa0f4u); goto L_fa0f4;
L_fa14e:
    X86_TICK(c, 9);
    // 0fa14e  inc edi
    X86_AT(c, 0xfa14eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0fa14f  jmp 0xfa0ed
    X86_AT(c, 0xfa14fu);
    X86_POLL(c, 0xfa0edu); goto L_fa0ed;
L_fa151:
    X86_TICK(c, 33);
    // 0fa151  push 6
    X86_AT(c, 0xfa151u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0fa153  push 6
    X86_AT(c, 0xfa153u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0fa155  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xfa155u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0fa158  lea eax, [eax + eax*2]
    X86_AT(c, 0xfa158u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0fa15b  lea eax, [eax + eax*1 + 0x40]
    X86_AT(c, 0xfa15bu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] + 0x40u);
    // 0fa15f  push eax
    X86_AT(c, 0xfa15fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fa160  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xfa160u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0fa163  lea eax, [eax + eax*2]
    X86_AT(c, 0xfa163u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0fa166  lea eax, [eax*2 + 0xfa]
    X86_AT(c, 0xfa166u);
    c.r[0] = (uint32_t)(c.r[0] * 2 + 0xFAu);
    // 0fa16d  push eax
    X86_AT(c, 0xfa16du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fa16e  push 0xd7058
    X86_AT(c, 0xfa16eu);
    { uint32_t v = 0xD7058u; push32(c, v); }
    // 0fa173  call 0xe6288
    X86_AT(c, 0xfa173u);
    push32(c, 0xfa178u); f_000e6288(c); X86_RET(c, 0xfa178u);
    X86_TICK(c, 2);
    // 0fa178  add esp, 0x14
    X86_AT(c, 0xfa178u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_fa17b:
    X86_TICK(c, 28);
    // 0fa17b  pop edi
    X86_AT(c, 0xfa17bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0fa17c  pop esi
    X86_AT(c, 0xfa17cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fa17d  pop ebx
    X86_AT(c, 0xfa17du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fa17e  leave 
    X86_AT(c, 0xfa17eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fa17f  ret 
    X86_AT(c, 0xfa17fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfa0d8u, "ran off the end of a function");
}
void f_000fa180(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0fa180  push ebp
    X86_AT(c, 0xfa180u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0fa181  mov ebp, esp
    X86_AT(c, 0xfa181u);
    c.r[5] = c.r[4];
    // 0fa183  sub esp, 0xc
    X86_AT(c, 0xfa183u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0fa186  push ebx
    X86_AT(c, 0xfa186u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fa187  push esi
    X86_AT(c, 0xfa187u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fa188  push edi
    X86_AT(c, 0xfa188u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fa189  mov edi, 0xffffffff
    X86_AT(c, 0xfa189u);
    c.r[7] = 0xFFFFFFFFu;
    // 0fa18e  cmp word ptr [0xd4a48], 0
    X86_AT(c, 0xfa18eu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xD4A48u))), 0x0u, 0, 2);
    // 0fa196  jne 0xfa19f
    X86_AT(c, 0xfa196u);
    if (x86_cc(c, 5)) { goto L_fa19f; }
    X86_TICK(c, 9);
    // 0fa198  mov eax, edi
    X86_AT(c, 0xfa198u);
    c.r[0] = c.r[7];
    // 0fa19a  jmp 0xfa498
    X86_AT(c, 0xfa19au);
    goto L_fa498;
L_fa19f:
    X86_TICK(c, 9);
    // 0fa19f  push 7
    X86_AT(c, 0xfa19fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fa1a1  call 0xe693c
    X86_AT(c, 0xfa1a1u);
    push32(c, 0xfa1a6u); f_000e693c(c); X86_RET(c, 0xfa1a6u);
    X86_TICK(c, 15);
    // 0fa1a6  add esp, 4
    X86_AT(c, 0xfa1a6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0fa1a9  movzx edx, byte ptr [ebp + 8]
    X86_AT(c, 0xfa1a9u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0fa1ad  cmp edx, 3
    X86_AT(c, 0xfa1adu);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0fa1b0  ja 0xfa403
    X86_AT(c, 0xfa1b0u);
    if (x86_cc(c, 7)) { goto L_fa403; }
    X86_TICK(c, 7);
    // 0fa1b6  jmp dword ptr cs:[edx*4 + 0xfa1be]
    X86_AT(c, 0xfa1b6u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xFA1BEu)));
      switch (t) {
      case 0xfa1ceu: goto L_fa1ce;
      case 0xfa2ddu: goto L_fa2dd;
      case 0xfa336u: goto L_fa336;
      case 0xfa38cu: goto L_fa38c;
      default: x86_jump(c, t); return; } }
L_fa1ce:
    X86_TICK(c, 15);
    // 0fa1ce  movsx edx, word ptr [0xd6e68]
    X86_AT(c, 0xfa1ceu);
    c.r[2] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0xD6E68u)));
    // 0fa1d5  dec edx
    X86_AT(c, 0xfa1d5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0fa1d6  cmp edx, 3
    X86_AT(c, 0xfa1d6u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0fa1d9  ja 0xfa27b
    X86_AT(c, 0xfa1d9u);
    if (x86_cc(c, 7)) { goto L_fa27b; }
    X86_TICK(c, 7);
    // 0fa1df  jmp dword ptr cs:[edx*4 + 0xfa1e7]
    X86_AT(c, 0xfa1dfu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xFA1E7u)));
      switch (t) {
      case 0xfa1f7u: goto L_fa1f7;
      case 0xfa21cu: goto L_fa21c;
      case 0xfa236u: goto L_fa236;
      case 0xfa258u: goto L_fa258;
      default: x86_jump(c, t); return; } }
L_fa1f7:
    X86_TICK(c, 18);
    // 0fa1f7  mov eax, dword ptr [0xd4a4c]
    X86_AT(c, 0xfa1f7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD4A4Cu)));
    // 0fa1fc  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xfa1fcu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0fa1ff  cmp dword ptr [0xd4a50], 0
    X86_AT(c, 0xfa1ffu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD4A50u))), 0x0u, 0, 4);
    // 0fa206  jne 0xfa214
    X86_AT(c, 0xfa206u);
    if (x86_cc(c, 5)) { goto L_fa214; }
    X86_TICK(c, 9);
    // 0fa208  mov dword ptr [ebp - 8], 0xf
    X86_AT(c, 0xfa208u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0xFu);
    // 0fa20f  jmp 0xfa27b
    X86_AT(c, 0xfa20fu);
    goto L_fa27b;
L_fa214:
    X86_TICK(c, 13);
    // 0fa214  mov eax, dword ptr [0xd4a50]
    X86_AT(c, 0xfa214u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD4A50u)));
    // 0fa219  dec eax
    X86_AT(c, 0xfa219u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0fa21a  jmp 0xfa278
    X86_AT(c, 0xfa21au);
    goto L_fa278;
L_fa21c:
    X86_TICK(c, 12);
    // 0fa21c  cmp dword ptr [0xd4a4c], 0xf
    X86_AT(c, 0xfa21cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD4A4Cu))), 0xFu, 0, 4);
    // 0fa223  jne 0xfa22e
    X86_AT(c, 0xfa223u);
    if (x86_cc(c, 5)) { goto L_fa22e; }
    X86_TICK(c, 9);
    // 0fa225  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xfa225u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0fa22c  jmp 0xfa273
    X86_AT(c, 0xfa22cu);
    goto L_fa273;
L_fa22e:
    X86_TICK(c, 13);
    // 0fa22e  mov eax, dword ptr [0xd4a4c]
    X86_AT(c, 0xfa22eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD4A4Cu)));
    // 0fa233  inc eax
    X86_AT(c, 0xfa233u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0fa234  jmp 0xfa270
    X86_AT(c, 0xfa234u);
    goto L_fa270;
L_fa236:
    X86_TICK(c, 18);
    // 0fa236  mov eax, dword ptr [0xd4a4c]
    X86_AT(c, 0xfa236u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD4A4Cu)));
    // 0fa23b  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xfa23bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0fa23e  cmp dword ptr [0xd4a50], 0xf
    X86_AT(c, 0xfa23eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD4A50u))), 0xFu, 0, 4);
    // 0fa245  jne 0xfa250
    X86_AT(c, 0xfa245u);
    if (x86_cc(c, 5)) { goto L_fa250; }
    X86_TICK(c, 9);
    // 0fa247  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xfa247u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
    // 0fa24e  jmp 0xfa27b
    X86_AT(c, 0xfa24eu);
    goto L_fa27b;
L_fa250:
    X86_TICK(c, 13);
    // 0fa250  mov eax, dword ptr [0xd4a50]
    X86_AT(c, 0xfa250u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD4A50u)));
    // 0fa255  inc eax
    X86_AT(c, 0xfa255u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0fa256  jmp 0xfa278
    X86_AT(c, 0xfa256u);
    goto L_fa278;
L_fa258:
    X86_TICK(c, 12);
    // 0fa258  cmp dword ptr [0xd4a4c], 0
    X86_AT(c, 0xfa258u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD4A4Cu))), 0x0u, 0, 4);
    // 0fa25f  jne 0xfa26a
    X86_AT(c, 0xfa25fu);
    if (x86_cc(c, 5)) { goto L_fa26a; }
    X86_TICK(c, 9);
    // 0fa261  mov dword ptr [ebp - 4], 0xf
    X86_AT(c, 0xfa261u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xFu);
    // 0fa268  jmp 0xfa273
    X86_AT(c, 0xfa268u);
    goto L_fa273;
L_fa26a:
    X86_TICK(c, 6);
    // 0fa26a  mov eax, dword ptr [0xd4a4c]
    X86_AT(c, 0xfa26au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD4A4Cu)));
    // 0fa26f  dec eax
    X86_AT(c, 0xfa26fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
L_fa270:
    X86_TICK(c, 2);
    // 0fa270  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xfa270u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_fa273:
    X86_TICK(c, 4);
    // 0fa273  mov eax, dword ptr [0xd4a50]
    X86_AT(c, 0xfa273u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD4A50u)));
L_fa278:
    X86_TICK(c, 2);
    // 0fa278  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xfa278u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
L_fa27b:
    X86_TICK(c, 11);
    // 0fa27b  push 0xb090
    X86_AT(c, 0xfa27bu);
    { uint32_t v = 0xB090u; push32(c, v); }
    // 0fa280  push 7
    X86_AT(c, 0xfa280u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fa282  call 0xe5654
    X86_AT(c, 0xfa282u);
    push32(c, 0xfa287u); f_000e5654(c); X86_RET(c, 0xfa287u);
    X86_TICK(c, 9);
    // 0fa287  push 7
    X86_AT(c, 0xfa287u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fa289  call 0xe6c68
    X86_AT(c, 0xfa289u);
    push32(c, 0xfa28eu); f_000e6c68(c); X86_RET(c, 0xfa28eu);
    X86_TICK(c, 17);
    // 0fa28e  push dword ptr [ebp - 8]
    X86_AT(c, 0xfa28eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0fa291  push dword ptr [ebp - 4]
    X86_AT(c, 0xfa291u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0fa294  call 0xfad54
    X86_AT(c, 0xfa294u);
    push32(c, 0xfa299u); f_000fad54(c); X86_RET(c, 0xfa299u);
    X86_TICK(c, 9);
    // 0fa299  add esp, 0x14
    X86_AT(c, 0xfa299u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0fa29c  and eax, eax
    X86_AT(c, 0xfa29cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0fa29e  je 0xfa2aa
    X86_AT(c, 0xfa29eu);
    if (x86_cc(c, 4)) { goto L_fa2aa; }
    X86_TICK(c, 9);
    // 0fa2a0  mov eax, 0xffffffff
    X86_AT(c, 0xfa2a0u);
    c.r[0] = 0xFFFFFFFFu;
    // 0fa2a5  jmp 0xfa498
    X86_AT(c, 0xfa2a5u);
    goto L_fa498;
L_fa2aa:
    X86_TICK(c, 38);
    // 0fa2aa  sub edi, edi
    X86_AT(c, 0xfa2aau);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0fa2ac  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xfa2acu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0fa2b1  lea edx, [eax + eax*4]
    X86_AT(c, 0xfa2b1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0fa2b4  lea edx, [eax + edx*2]
    X86_AT(c, 0xfa2b4u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0fa2b7  shl edx, 5
    X86_AT(c, 0xfa2b7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0fa2ba  sub edx, eax
    X86_AT(c, 0xfa2bau);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fa2bc  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xfa2bcu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0fa2bf  mov dword ptr [edx + 0xcdf63], eax
    X86_AT(c, 0xfa2bfu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF63u)), c.r[0]);
    // 0fa2c5  mov dword ptr [0xd4a4c], eax
    X86_AT(c, 0xfa2c5u);
    wr32((c.sbase[3] + (uint32_t)(0xD4A4Cu)), c.r[0]);
    // 0fa2ca  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xfa2cau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0fa2cd  mov dword ptr [edx + 0xcdf67], eax
    X86_AT(c, 0xfa2cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF67u)), c.r[0]);
    // 0fa2d3  mov dword ptr [0xd4a50], eax
    X86_AT(c, 0xfa2d3u);
    wr32((c.sbase[3] + (uint32_t)(0xD4A50u)), c.r[0]);
    // 0fa2d8  jmp 0xfa418
    X86_AT(c, 0xfa2d8u);
    goto L_fa418;
L_fa2dd:
    X86_TICK(c, 15);
    // 0fa2dd  movsx edx, word ptr [0xd6e68]
    X86_AT(c, 0xfa2ddu);
    c.r[2] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0xD6E68u)));
    // 0fa2e4  dec edx
    X86_AT(c, 0xfa2e4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0fa2e5  cmp edx, 3
    X86_AT(c, 0xfa2e5u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0fa2e8  ja 0xfa32c
    X86_AT(c, 0xfa2e8u);
    if (x86_cc(c, 7)) { goto L_fa32c; }
    X86_TICK(c, 7);
    // 0fa2ea  jmp dword ptr cs:[edx*4 + 0xfa2f2]
    X86_AT(c, 0xfa2eau);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xFA2F2u)));
      switch (t) {
      case 0xfa302u: goto L_fa302;
      case 0xfa30du: goto L_fa30d;
      case 0xfa318u: goto L_fa318;
      case 0xfa323u: goto L_fa323;
      default: x86_jump(c, t); return; } }
L_fa302:
    X86_TICK(c, 9);
    // 0fa302  mov word ptr [0xd6e68], 2
    X86_AT(c, 0xfa302u);
    wr16((c.sbase[3] + (uint32_t)(0xD6E68u)), 0x2u);
    // 0fa30b  jmp 0xfa32c
    X86_AT(c, 0xfa30bu);
    goto L_fa32c;
L_fa30d:
    X86_TICK(c, 9);
    // 0fa30d  mov word ptr [0xd6e68], 3
    X86_AT(c, 0xfa30du);
    wr16((c.sbase[3] + (uint32_t)(0xD6E68u)), 0x3u);
    // 0fa316  jmp 0xfa32c
    X86_AT(c, 0xfa316u);
    goto L_fa32c;
L_fa318:
    X86_TICK(c, 9);
    // 0fa318  mov word ptr [0xd6e68], 4
    X86_AT(c, 0xfa318u);
    wr16((c.sbase[3] + (uint32_t)(0xD6E68u)), 0x4u);
    // 0fa321  jmp 0xfa32c
    X86_AT(c, 0xfa321u);
    goto L_fa32c;
L_fa323:
    X86_TICK(c, 2);
    // 0fa323  mov word ptr [0xd6e68], 1
    X86_AT(c, 0xfa323u);
    wr16((c.sbase[3] + (uint32_t)(0xD6E68u)), 0x1u);
L_fa32c:
    X86_TICK(c, 9);
    // 0fa32c  push 0xb0a4
    X86_AT(c, 0xfa32cu);
    { uint32_t v = 0xB0A4u; push32(c, v); }
    // 0fa331  jmp 0xfa3e0
    X86_AT(c, 0xfa331u);
    goto L_fa3e0;
L_fa336:
    X86_TICK(c, 15);
    // 0fa336  movsx edx, word ptr [0xd6e68]
    X86_AT(c, 0xfa336u);
    c.r[2] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0xD6E68u)));
    // 0fa33d  dec edx
    X86_AT(c, 0xfa33du);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0fa33e  cmp edx, 3
    X86_AT(c, 0xfa33eu);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0fa341  ja 0xfa385
    X86_AT(c, 0xfa341u);
    if (x86_cc(c, 7)) { goto L_fa385; }
    X86_TICK(c, 7);
    // 0fa343  jmp dword ptr cs:[edx*4 + 0xfa34b]
    X86_AT(c, 0xfa343u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xFA34Bu)));
      switch (t) {
      case 0xfa35bu: goto L_fa35b;
      case 0xfa366u: goto L_fa366;
      case 0xfa371u: goto L_fa371;
      case 0xfa37cu: goto L_fa37c;
      default: x86_jump(c, t); return; } }
L_fa35b:
    X86_TICK(c, 9);
    // 0fa35b  mov word ptr [0xd6e68], 3
    X86_AT(c, 0xfa35bu);
    wr16((c.sbase[3] + (uint32_t)(0xD6E68u)), 0x3u);
    // 0fa364  jmp 0xfa385
    X86_AT(c, 0xfa364u);
    goto L_fa385;
L_fa366:
    X86_TICK(c, 9);
    // 0fa366  mov word ptr [0xd6e68], 4
    X86_AT(c, 0xfa366u);
    wr16((c.sbase[3] + (uint32_t)(0xD6E68u)), 0x4u);
    // 0fa36f  jmp 0xfa385
    X86_AT(c, 0xfa36fu);
    goto L_fa385;
L_fa371:
    X86_TICK(c, 9);
    // 0fa371  mov word ptr [0xd6e68], 1
    X86_AT(c, 0xfa371u);
    wr16((c.sbase[3] + (uint32_t)(0xD6E68u)), 0x1u);
    // 0fa37a  jmp 0xfa385
    X86_AT(c, 0xfa37au);
    goto L_fa385;
L_fa37c:
    X86_TICK(c, 2);
    // 0fa37c  mov word ptr [0xd6e68], 2
    X86_AT(c, 0xfa37cu);
    wr16((c.sbase[3] + (uint32_t)(0xD6E68u)), 0x2u);
L_fa385:
    X86_TICK(c, 9);
    // 0fa385  push 0xb0c4
    X86_AT(c, 0xfa385u);
    { uint32_t v = 0xB0C4u; push32(c, v); }
    // 0fa38a  jmp 0xfa3e0
    X86_AT(c, 0xfa38au);
    goto L_fa3e0;
L_fa38c:
    X86_TICK(c, 15);
    // 0fa38c  movsx edx, word ptr [0xd6e68]
    X86_AT(c, 0xfa38cu);
    c.r[2] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0xD6E68u)));
    // 0fa393  dec edx
    X86_AT(c, 0xfa393u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0fa394  cmp edx, 3
    X86_AT(c, 0xfa394u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0fa397  ja 0xfa3db
    X86_AT(c, 0xfa397u);
    if (x86_cc(c, 7)) { goto L_fa3db; }
    X86_TICK(c, 7);
    // 0fa399  jmp dword ptr cs:[edx*4 + 0xfa3a1]
    X86_AT(c, 0xfa399u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xFA3A1u)));
      switch (t) {
      case 0xfa3b1u: goto L_fa3b1;
      case 0xfa3bcu: goto L_fa3bc;
      case 0xfa3c7u: goto L_fa3c7;
      case 0xfa3d2u: goto L_fa3d2;
      default: x86_jump(c, t); return; } }
L_fa3b1:
    X86_TICK(c, 9);
    // 0fa3b1  mov word ptr [0xd6e68], 4
    X86_AT(c, 0xfa3b1u);
    wr16((c.sbase[3] + (uint32_t)(0xD6E68u)), 0x4u);
    // 0fa3ba  jmp 0xfa3db
    X86_AT(c, 0xfa3bau);
    goto L_fa3db;
L_fa3bc:
    X86_TICK(c, 9);
    // 0fa3bc  mov word ptr [0xd6e68], 1
    X86_AT(c, 0xfa3bcu);
    wr16((c.sbase[3] + (uint32_t)(0xD6E68u)), 0x1u);
    // 0fa3c5  jmp 0xfa3db
    X86_AT(c, 0xfa3c5u);
    goto L_fa3db;
L_fa3c7:
    X86_TICK(c, 9);
    // 0fa3c7  mov word ptr [0xd6e68], 2
    X86_AT(c, 0xfa3c7u);
    wr16((c.sbase[3] + (uint32_t)(0xD6E68u)), 0x2u);
    // 0fa3d0  jmp 0xfa3db
    X86_AT(c, 0xfa3d0u);
    goto L_fa3db;
L_fa3d2:
    X86_TICK(c, 2);
    // 0fa3d2  mov word ptr [0xd6e68], 3
    X86_AT(c, 0xfa3d2u);
    wr16((c.sbase[3] + (uint32_t)(0xD6E68u)), 0x3u);
L_fa3db:
    X86_TICK(c, 2);
    // 0fa3db  push 0xb0e0
    X86_AT(c, 0xfa3dbu);
    { uint32_t v = 0xB0E0u; push32(c, v); }
L_fa3e0:
    X86_TICK(c, 9);
    // 0fa3e0  push 7
    X86_AT(c, 0xfa3e0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fa3e2  call 0xe5654
    X86_AT(c, 0xfa3e2u);
    push32(c, 0xfa3e7u); f_000e5654(c); X86_RET(c, 0xfa3e7u);
    X86_TICK(c, 9);
    // 0fa3e7  push 7
    X86_AT(c, 0xfa3e7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fa3e9  call 0xe6c68
    X86_AT(c, 0xfa3e9u);
    push32(c, 0xfa3eeu); f_000e6c68(c); X86_RET(c, 0xfa3eeu);
    X86_TICK(c, 21);
    // 0fa3ee  mov eax, dword ptr [0xd4a4c]
    X86_AT(c, 0xfa3eeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD4A4Cu)));
    // 0fa3f3  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xfa3f3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0fa3f6  mov eax, dword ptr [0xd4a50]
    X86_AT(c, 0xfa3f6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD4A50u)));
    // 0fa3fb  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xfa3fbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0fa3fe  add esp, 0xc
    X86_AT(c, 0xfa3feu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0fa401  jmp 0xfa418
    X86_AT(c, 0xfa401u);
    goto L_fa418;
L_fa403:
    X86_TICK(c, 14);
    // 0fa403  mov eax, dword ptr [0xd4a4c]
    X86_AT(c, 0xfa403u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD4A4Cu)));
    // 0fa408  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xfa408u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0fa40b  mov eax, dword ptr [0xd4a50]
    X86_AT(c, 0xfa40bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD4A50u)));
    // 0fa410  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xfa410u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0fa413  mov edi, 0xffffffff
    X86_AT(c, 0xfa413u);
    c.r[7] = 0xFFFFFFFFu;
L_fa418:
    X86_TICK(c, 12);
    // 0fa418  cmp dword ptr [0xcde44], 2
    X86_AT(c, 0xfa418u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDE44u))), 0x2u, 0, 4);
    // 0fa41f  jne 0xfa46a
    X86_AT(c, 0xfa41fu);
    if (x86_cc(c, 5)) { goto L_fa46a; }
    X86_TICK(c, 2);
    // 0fa421  sub ebx, ebx
    X86_AT(c, 0xfa421u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_fa423:
    X86_TICK(c, 7);
    // 0fa423  cmp ebx, 0x10
    X86_AT(c, 0xfa423u);
    (void)x86_sub(c, c.r[3], 0x10u, 0, 4);
    // 0fa426  jge 0xfa46a
    X86_AT(c, 0xfa426u);
    if (x86_cc(c, 13)) { goto L_fa46a; }
    X86_TICK(c, 2);
    // 0fa428  sub esi, esi
    X86_AT(c, 0xfa428u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_fa42a:
    X86_TICK(c, 7);
    // 0fa42a  cmp esi, 0x10
    X86_AT(c, 0xfa42au);
    (void)x86_sub(c, c.r[6], 0x10u, 0, 4);
    // 0fa42d  jge 0xfa467
    X86_AT(c, 0xfa42du);
    if (x86_cc(c, 13)) { goto L_fa467; }
    X86_TICK(c, 24);
    // 0fa42f  mov eax, ebx
    X86_AT(c, 0xfa42fu);
    c.r[0] = c.r[3];
    // 0fa431  shl eax, 4
    X86_AT(c, 0xfa431u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0fa434  mov edx, esi
    X86_AT(c, 0xfa434u);
    c.r[2] = c.r[6];
    // 0fa436  shl edx, 8
    X86_AT(c, 0xfa436u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[2] = r; }
    // 0fa439  add edx, eax
    X86_AT(c, 0xfa439u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fa43b  cmp dword ptr [edx + 0xd4a78], 0xffffffff
    X86_AT(c, 0xfa43bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A78u))), 0xFFFFFFFFu, 0, 4);
    // 0fa442  jne 0xfa455
    X86_AT(c, 0xfa442u);
    if (x86_cc(c, 5)) { goto L_fa455; }
    X86_TICK(c, 15);
    // 0fa444  lea ecx, [esi + eax*1]
    X86_AT(c, 0xfa444u);
    c.r[1] = (uint32_t)(c.r[6] + c.r[0]);
    // 0fa447  mov al, byte ptr [edx + 0xd4a74]
    X86_AT(c, 0xfa447u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A74u))));
    // 0fa44d  mov byte ptr [ecx + 0xd5a74], al
    X86_AT(c, 0xfa44du);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xD5A74u)), g8(c, 0));
    // 0fa453  jmp 0xfa464
    X86_AT(c, 0xfa453u);
    goto L_fa464;
L_fa455:
    X86_TICK(c, 9);
    // 0fa455  mov eax, ebx
    X86_AT(c, 0xfa455u);
    c.r[0] = c.r[3];
    // 0fa457  shl eax, 4
    X86_AT(c, 0xfa457u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0fa45a  lea edx, [esi + eax*1]
    X86_AT(c, 0xfa45au);
    c.r[2] = (uint32_t)(c.r[6] + c.r[0]);
    // 0fa45d  mov byte ptr [edx + 0xd5a74], 7
    X86_AT(c, 0xfa45du);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xD5A74u)), 0x7u);
L_fa464:
    X86_TICK(c, 9);
    // 0fa464  inc esi
    X86_AT(c, 0xfa464u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0fa465  jmp 0xfa42a
    X86_AT(c, 0xfa465u);
    X86_POLL(c, 0xfa42au); goto L_fa42a;
L_fa467:
    X86_TICK(c, 9);
    // 0fa467  inc ebx
    X86_AT(c, 0xfa467u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0fa468  jmp 0xfa423
    X86_AT(c, 0xfa468u);
    X86_POLL(c, 0xfa423u); goto L_fa423;
L_fa46a:
    X86_TICK(c, 25);
    // 0fa46a  lea eax, [ebp - 8]
    X86_AT(c, 0xfa46au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0fa46d  push eax
    X86_AT(c, 0xfa46du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fa46e  lea ecx, [ebp - 4]
    X86_AT(c, 0xfa46eu);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0fa471  push ecx
    X86_AT(c, 0xfa471u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0fa472  movsx edx, word ptr [0xd6e68]
    X86_AT(c, 0xfa472u);
    c.r[2] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0xD6E68u)));
    // 0fa479  push edx
    X86_AT(c, 0xfa479u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0fa47a  push 0xd5a74
    X86_AT(c, 0xfa47au);
    { uint32_t v = 0xD5A74u; push32(c, v); }
    // 0fa47f  call 0xf9f30
    X86_AT(c, 0xfa47fu);
    push32(c, 0xfa484u); f_000f9f30(c); X86_RET(c, 0xfa484u);
    X86_TICK(c, 21);
    // 0fa484  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xfa484u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0fa487  push dword ptr [ebp - 8]
    X86_AT(c, 0xfa487u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0fa48a  push dword ptr [ebp - 4]
    X86_AT(c, 0xfa48au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0fa48d  push eax
    X86_AT(c, 0xfa48du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fa48e  call 0xfa0d8
    X86_AT(c, 0xfa48eu);
    push32(c, 0xfa493u); f_000fa0d8(c); X86_RET(c, 0xfa493u);
    X86_TICK(c, 4);
    // 0fa493  mov eax, edi
    X86_AT(c, 0xfa493u);
    c.r[0] = c.r[7];
    // 0fa495  add esp, 0x1c
    X86_AT(c, 0xfa495u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_fa498:
    X86_TICK(c, 28);
    // 0fa498  pop edi
    X86_AT(c, 0xfa498u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0fa499  pop esi
    X86_AT(c, 0xfa499u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fa49a  pop ebx
    X86_AT(c, 0xfa49au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fa49b  leave 
    X86_AT(c, 0xfa49bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fa49c  ret 
    X86_AT(c, 0xfa49cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfa180u, "ran off the end of a function");
}
void f_000fa498(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0fa498  pop edi
    X86_AT(c, 0xfa498u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0fa499  pop esi
    X86_AT(c, 0xfa499u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fa49a  pop ebx
    X86_AT(c, 0xfa49au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fa49b  leave 
    X86_AT(c, 0xfa49bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fa49c  ret 
    X86_AT(c, 0xfa49cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfa498u, "ran off the end of a function");
}
void f_000fa4a0(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0fa4a0  push ebp
    X86_AT(c, 0xfa4a0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0fa4a1  mov ebp, esp
    X86_AT(c, 0xfa4a1u);
    c.r[5] = c.r[4];
    // 0fa4a3  push edi
    X86_AT(c, 0xfa4a3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fa4a4  push 0xb0fc
    X86_AT(c, 0xfa4a4u);
    { uint32_t v = 0xB0FCu; push32(c, v); }
    // 0fa4a9  push dword ptr [ebp + 8]
    X86_AT(c, 0xfa4a9u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0fa4ac  call 0x100f34
    X86_AT(c, 0xfa4acu);
    push32(c, 0xfa4b1u); f_00100f34(c); X86_RET(c, 0xfa4b1u);
    X86_TICK(c, 12);
    // 0fa4b1  add esp, 8
    X86_AT(c, 0xfa4b1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0fa4b4  xchg edi, eax
    X86_AT(c, 0xfa4b4u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0fa4b5  and edi, edi
    X86_AT(c, 0xfa4b5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0fa4b7  jne 0xfa4c5
    X86_AT(c, 0xfa4b7u);
    if (x86_cc(c, 5)) { goto L_fa4c5; }
    X86_TICK(c, 9);
    // 0fa4b9  push 0xb100
    X86_AT(c, 0xfa4b9u);
    { uint32_t v = 0xB100u; push32(c, v); }
    // 0fa4be  call 0xe75f8
    X86_AT(c, 0xfa4beu);
    push32(c, 0xfa4c3u); f_000e75f8(c); X86_RET(c, 0xfa4c3u);
    X86_TICK(c, 7);
    // 0fa4c3  jmp 0xfa4cb
    X86_AT(c, 0xfa4c3u);
    goto L_fa4cb;
L_fa4c5:
    X86_TICK(c, 9);
    // 0fa4c5  push edi
    X86_AT(c, 0xfa4c5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fa4c6  call 0x101430
    X86_AT(c, 0xfa4c6u);
    push32(c, 0xfa4cbu); f_00101430(c); X86_RET(c, 0xfa4cbu);
L_fa4cb:
    X86_TICK(c, 22);
    // 0fa4cb  add esp, 4
    X86_AT(c, 0xfa4cbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0fa4ce  pop edi
    X86_AT(c, 0xfa4ceu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0fa4cf  leave 
    X86_AT(c, 0xfa4cfu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fa4d0  ret 
    X86_AT(c, 0xfa4d0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfa4a0u, "ran off the end of a function");
}
void f_000fa4d4(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0fa4d4  push ebp
    X86_AT(c, 0xfa4d4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0fa4d5  mov ebp, esp
    X86_AT(c, 0xfa4d5u);
    c.r[5] = c.r[4];
    // 0fa4d7  push ebx
    X86_AT(c, 0xfa4d7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fa4d8  push esi
    X86_AT(c, 0xfa4d8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fa4d9  push edi
    X86_AT(c, 0xfa4d9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fa4da  push 7
    X86_AT(c, 0xfa4dau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fa4dc  call 0xe693c
    X86_AT(c, 0xfa4dcu);
    push32(c, 0xfa4e1u); f_000e693c(c); X86_RET(c, 0xfa4e1u);
    X86_TICK(c, 9);
    // 0fa4e1  push 2
    X86_AT(c, 0xfa4e1u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0fa4e3  call 0xe1944
    X86_AT(c, 0xfa4e3u);
    push32(c, 0xfa4e8u); f_000e1944(c); X86_RET(c, 0xfa4e8u);
    X86_TICK(c, 14);
    // 0fa4e8  push dword ptr [ebp + 8]
    X86_AT(c, 0xfa4e8u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0fa4eb  push 7
    X86_AT(c, 0xfa4ebu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fa4ed  call 0xe5654
    X86_AT(c, 0xfa4edu);
    push32(c, 0xfa4f2u); f_000e5654(c); X86_RET(c, 0xfa4f2u);
    X86_TICK(c, 9);
    // 0fa4f2  push 7
    X86_AT(c, 0xfa4f2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fa4f4  call 0xe6c68
    X86_AT(c, 0xfa4f4u);
    push32(c, 0xfa4f9u); f_000e6c68(c); X86_RET(c, 0xfa4f9u);
    X86_TICK(c, 7);
    // 0fa4f9  call 0xe8470
    X86_AT(c, 0xfa4f9u);
    push32(c, 0xfa4feu); f_000e8470(c); X86_RET(c, 0xfa4feu);
    X86_TICK(c, 6);
    // 0fa4fe  sub ebx, ebx
    X86_AT(c, 0xfa4feu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0fa500  mov esi, ebx
    X86_AT(c, 0xfa500u);
    c.r[6] = c.r[3];
    // 0fa502  add esp, 0x14
    X86_AT(c, 0xfa502u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_fa505:
    X86_TICK(c, 7);
    // 0fa505  cmp esi, 0x40
    X86_AT(c, 0xfa505u);
    (void)x86_sub(c, c.r[6], 0x40u, 0, 4);
    // 0fa508  jge 0xfa662
    X86_AT(c, 0xfa508u);
    if (x86_cc(c, 13)) { goto L_fa662; }
    X86_TICK(c, 2);
    // 0fa50e  sub edi, edi
    X86_AT(c, 0xfa50eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_fa510:
    X86_TICK(c, 7);
    // 0fa510  cmp edi, 0x40
    X86_AT(c, 0xfa510u);
    (void)x86_sub(c, c.r[7], 0x40u, 0, 4);
    // 0fa513  jge 0xfa65c
    X86_AT(c, 0xfa513u);
    if (x86_cc(c, 13)) { goto L_fa65c; }
    X86_TICK(c, 25);
    // 0fa519  mov eax, esi
    X86_AT(c, 0xfa519u);
    c.r[0] = c.r[6];
    // 0fa51b  shl eax, 6
    X86_AT(c, 0xfa51bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[0] = r; }
    // 0fa51e  lea edx, [edi + eax*1]
    X86_AT(c, 0xfa51eu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0fa521  movzx eax, byte ptr [edx + 0xbd578]
    X86_AT(c, 0xfa521u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xBD578u)));
    // 0fa528  xchg edx, eax
    X86_AT(c, 0xfa528u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0fa529  dec edx
    X86_AT(c, 0xfa529u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0fa52a  cmp edx, 0x21
    X86_AT(c, 0xfa52au);
    (void)x86_sub(c, c.r[2], 0x21u, 0, 4);
    // 0fa52d  ja 0xfa5f1
    X86_AT(c, 0xfa52du);
    if (x86_cc(c, 7)) { goto L_fa5f1; }
    X86_TICK(c, 7);
    // 0fa533  jmp dword ptr cs:[edx*4 + 0xfa53b]
    X86_AT(c, 0xfa533u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xFA53Bu)));
      switch (t) {
      case 0xfa5c3u: goto L_fa5c3;
      case 0xfa5cau: goto L_fa5ca;
      case 0xfa5d1u: goto L_fa5d1;
      case 0xfa5d8u: goto L_fa5d8;
      case 0xfa5dfu: goto L_fa5df;
      case 0xfa5e6u: goto L_fa5e6;
      case 0xfa5eau: goto L_fa5ea;
      case 0xfa5f1u: goto L_fa5f1;
      default: x86_jump(c, t); return; } }
L_fa5c3:
    X86_TICK(c, 9);
    // 0fa5c3  mov ebx, 2
    X86_AT(c, 0xfa5c3u);
    c.r[3] = 0x2u;
    // 0fa5c8  jmp 0xfa5f6
    X86_AT(c, 0xfa5c8u);
    goto L_fa5f6;
L_fa5ca:
    X86_TICK(c, 9);
    // 0fa5ca  mov ebx, 6
    X86_AT(c, 0xfa5cau);
    c.r[3] = 0x6u;
    // 0fa5cf  jmp 0xfa5f6
    X86_AT(c, 0xfa5cfu);
    goto L_fa5f6;
L_fa5d1:
    X86_TICK(c, 9);
    // 0fa5d1  mov ebx, 3
    X86_AT(c, 0xfa5d1u);
    c.r[3] = 0x3u;
    // 0fa5d6  jmp 0xfa5f6
    X86_AT(c, 0xfa5d6u);
    goto L_fa5f6;
L_fa5d8:
    X86_TICK(c, 9);
    // 0fa5d8  mov ebx, 4
    X86_AT(c, 0xfa5d8u);
    c.r[3] = 0x4u;
    // 0fa5dd  jmp 0xfa5f6
    X86_AT(c, 0xfa5ddu);
    goto L_fa5f6;
L_fa5df:
    X86_TICK(c, 9);
    // 0fa5df  mov ebx, 7
    X86_AT(c, 0xfa5dfu);
    c.r[3] = 0x7u;
    // 0fa5e4  jmp 0xfa5f6
    X86_AT(c, 0xfa5e4u);
    goto L_fa5f6;
L_fa5e6:
    X86_TICK(c, 9);
    // 0fa5e6  sub ebx, ebx
    X86_AT(c, 0xfa5e6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0fa5e8  jmp 0xfa5f6
    X86_AT(c, 0xfa5e8u);
    goto L_fa5f6;
L_fa5ea:
    X86_TICK(c, 9);
    // 0fa5ea  mov ebx, 8
    X86_AT(c, 0xfa5eau);
    c.r[3] = 0x8u;
    // 0fa5ef  jmp 0xfa5f6
    X86_AT(c, 0xfa5efu);
    goto L_fa5f6;
L_fa5f1:
    X86_TICK(c, 2);
    // 0fa5f1  mov ebx, 9
    X86_AT(c, 0xfa5f1u);
    c.r[3] = 0x9u;
L_fa5f6:
    X86_TICK(c, 18);
    // 0fa5f6  mov eax, esi
    X86_AT(c, 0xfa5f6u);
    c.r[0] = c.r[6];
    // 0fa5f8  shl eax, 6
    X86_AT(c, 0xfa5f8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[0] = r; }
    // 0fa5fb  lea edx, [edi + eax*1]
    X86_AT(c, 0xfa5fbu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0fa5fe  mov al, byte ptr [edx + 0xbd578]
    X86_AT(c, 0xfa5feu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xBD578u))));
    // 0fa604  cmp al, 0xa
    X86_AT(c, 0xfa604u);
    (void)x86_sub(c, g8(c, 0), 0xAu, 0, 1);
    // 0fa606  je 0xfa610
    X86_AT(c, 0xfa606u);
    if (x86_cc(c, 4)) { goto L_fa610; }
    X86_TICK(c, 7);
    // 0fa608  cmp al, 0x11
    X86_AT(c, 0xfa608u);
    (void)x86_sub(c, g8(c, 0), 0x11u, 0, 1);
    // 0fa60a  jbe 0xfa615
    X86_AT(c, 0xfa60au);
    if (x86_cc(c, 6)) { goto L_fa615; }
    X86_TICK(c, 7);
    // 0fa60c  cmp al, 0x21
    X86_AT(c, 0xfa60cu);
    (void)x86_sub(c, g8(c, 0), 0x21u, 0, 1);
    // 0fa60e  jae 0xfa615
    X86_AT(c, 0xfa60eu);
    if (x86_cc(c, 3)) { goto L_fa615; }
L_fa610:
    X86_TICK(c, 2);
    // 0fa610  mov ebx, 2
    X86_AT(c, 0xfa610u);
    c.r[3] = 0x2u;
L_fa615:
    X86_TICK(c, 18);
    // 0fa615  mov eax, esi
    X86_AT(c, 0xfa615u);
    c.r[0] = c.r[6];
    // 0fa617  shl eax, 6
    X86_AT(c, 0xfa617u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[0] = r; }
    // 0fa61a  lea edx, [edi + eax*1]
    X86_AT(c, 0xfa61au);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0fa61d  mov al, byte ptr [edx + 0xbd578]
    X86_AT(c, 0xfa61du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xBD578u))));
    // 0fa623  cmp al, 0x24
    X86_AT(c, 0xfa623u);
    (void)x86_sub(c, g8(c, 0), 0x24u, 0, 1);
    // 0fa625  jbe 0xfa630
    X86_AT(c, 0xfa625u);
    if (x86_cc(c, 6)) { goto L_fa630; }
    X86_TICK(c, 7);
    // 0fa627  cmp al, 0x40
    X86_AT(c, 0xfa627u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0fa629  jae 0xfa630
    X86_AT(c, 0xfa629u);
    if (x86_cc(c, 3)) { goto L_fa630; }
    X86_TICK(c, 2);
    // 0fa62b  mov ebx, 5
    X86_AT(c, 0xfa62bu);
    c.r[3] = 0x5u;
L_fa630:
    X86_TICK(c, 27);
    // 0fa630  push 5
    X86_AT(c, 0xfa630u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0fa632  push 5
    X86_AT(c, 0xfa632u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0fa634  lea eax, [esi + esi*4 + 0x3f]
    X86_AT(c, 0xfa634u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 4 + 0x3Fu);
    // 0fa638  push eax
    X86_AT(c, 0xfa638u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fa639  lea eax, [edi + edi*4 + 0x1a]
    X86_AT(c, 0xfa639u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 4 + 0x1Au);
    // 0fa63d  push eax
    X86_AT(c, 0xfa63du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fa63e  lea eax, [ebx*8]
    X86_AT(c, 0xfa63eu);
    c.r[0] = (uint32_t)(c.r[3] * 8);
    // 0fa645  lea eax, [eax + eax*2]
    X86_AT(c, 0xfa645u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0fa648  add eax, 0xd7070
    X86_AT(c, 0xfa648u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xD7070u, 0, 4); }
    // 0fa64d  push eax
    X86_AT(c, 0xfa64du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fa64e  call 0xe6288
    X86_AT(c, 0xfa64eu);
    push32(c, 0xfa653u); f_000e6288(c); X86_RET(c, 0xfa653u);
    X86_TICK(c, 11);
    // 0fa653  inc edi
    X86_AT(c, 0xfa653u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0fa654  add esp, 0x14
    X86_AT(c, 0xfa654u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0fa657  jmp 0xfa510
    X86_AT(c, 0xfa657u);
    X86_POLL(c, 0xfa510u); goto L_fa510;
L_fa65c:
    X86_TICK(c, 9);
    // 0fa65c  inc esi
    X86_AT(c, 0xfa65cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0fa65d  jmp 0xfa505
    X86_AT(c, 0xfa65du);
    X86_POLL(c, 0xfa505u); goto L_fa505;
L_fa662:
    X86_TICK(c, 11);
    // 0fa662  sub ebx, ebx
    X86_AT(c, 0xfa662u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0fa664  push 0xb148
    X86_AT(c, 0xfa664u);
    { uint32_t v = 0xB148u; push32(c, v); }
    // 0fa669  call 0xe75f8
    X86_AT(c, 0xfa669u);
    push32(c, 0xfa66eu); f_000e75f8(c); X86_RET(c, 0xfa66eu);
    X86_TICK(c, 2);
    // 0fa66e  add esp, 4
    X86_AT(c, 0xfa66eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_fa671:
    X86_TICK(c, 9);
    // 0fa671  push 7
    X86_AT(c, 0xfa671u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fa673  call 0xe4b60
    X86_AT(c, 0xfa673u);
    push32(c, 0xfa678u); f_000e4b60(c); X86_RET(c, 0xfa678u);
    X86_TICK(c, 9);
    // 0fa678  add esp, 4
    X86_AT(c, 0xfa678u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0fa67b  and al, al
    X86_AT(c, 0xfa67bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0fa67d  jne 0xfa70e
    X86_AT(c, 0xfa67du);
    if (x86_cc(c, 5)) { goto L_fa70e; }
    X86_TICK(c, 7);
    // 0fa683  and ebx, ebx
    X86_AT(c, 0xfa683u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0fa685  jne 0xfa6be
    X86_AT(c, 0xfa685u);
    if (x86_cc(c, 5)) { goto L_fa6be; }
    X86_TICK(c, 42);
    // 0fa687  push 5
    X86_AT(c, 0xfa687u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0fa689  push 5
    X86_AT(c, 0xfa689u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0fa68b  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xfa68bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0fa690  lea edx, [eax + eax*4]
    X86_AT(c, 0xfa690u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0fa693  lea edx, [eax + edx*2]
    X86_AT(c, 0xfa693u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0fa696  shl edx, 5
    X86_AT(c, 0xfa696u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0fa699  sub edx, eax
    X86_AT(c, 0xfa699u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fa69b  mov eax, dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xfa69bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)));
    // 0fa6a1  lea eax, [eax + eax*4 + 0x3f]
    X86_AT(c, 0xfa6a1u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4 + 0x3Fu);
    // 0fa6a5  push eax
    X86_AT(c, 0xfa6a5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fa6a6  mov eax, dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xfa6a6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)));
    // 0fa6ac  lea eax, [eax + eax*4 + 0x1a]
    X86_AT(c, 0xfa6acu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4 + 0x1Au);
    // 0fa6b0  push eax
    X86_AT(c, 0xfa6b0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fa6b1  push 0xd7088
    X86_AT(c, 0xfa6b1u);
    { uint32_t v = 0xD7088u; push32(c, v); }
    // 0fa6b6  call 0xe6288
    X86_AT(c, 0xfa6b6u);
    push32(c, 0xfa6bbu); f_000e6288(c); X86_RET(c, 0xfa6bbu);
    X86_TICK(c, 2);
    // 0fa6bb  add esp, 0x14
    X86_AT(c, 0xfa6bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_fa6be:
    X86_TICK(c, 7);
    // 0fa6be  cmp ebx, 0x64
    X86_AT(c, 0xfa6beu);
    (void)x86_sub(c, c.r[3], 0x64u, 0, 4);
    // 0fa6c1  jne 0xfa6fa
    X86_AT(c, 0xfa6c1u);
    if (x86_cc(c, 5)) { goto L_fa6fa; }
    X86_TICK(c, 42);
    // 0fa6c3  push 5
    X86_AT(c, 0xfa6c3u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0fa6c5  push 5
    X86_AT(c, 0xfa6c5u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0fa6c7  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xfa6c7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0fa6cc  lea edx, [eax + eax*4]
    X86_AT(c, 0xfa6ccu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0fa6cf  lea edx, [eax + edx*2]
    X86_AT(c, 0xfa6cfu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0fa6d2  shl edx, 5
    X86_AT(c, 0xfa6d2u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0fa6d5  sub edx, eax
    X86_AT(c, 0xfa6d5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fa6d7  mov eax, dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xfa6d7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)));
    // 0fa6dd  lea eax, [eax + eax*4 + 0x3f]
    X86_AT(c, 0xfa6ddu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4 + 0x3Fu);
    // 0fa6e1  push eax
    X86_AT(c, 0xfa6e1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fa6e2  mov eax, dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xfa6e2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)));
    // 0fa6e8  lea eax, [eax + eax*4 + 0x1a]
    X86_AT(c, 0xfa6e8u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4 + 0x1Au);
    // 0fa6ec  push eax
    X86_AT(c, 0xfa6ecu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fa6ed  push 0xd7130
    X86_AT(c, 0xfa6edu);
    { uint32_t v = 0xD7130u; push32(c, v); }
    // 0fa6f2  call 0xe6288
    X86_AT(c, 0xfa6f2u);
    push32(c, 0xfa6f7u); f_000e6288(c); X86_RET(c, 0xfa6f7u);
    X86_TICK(c, 2);
    // 0fa6f7  add esp, 0x14
    X86_AT(c, 0xfa6f7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_fa6fa:
    X86_TICK(c, 9);
    // 0fa6fa  inc ebx
    X86_AT(c, 0xfa6fau);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0fa6fb  cmp ebx, 0xc8
    X86_AT(c, 0xfa6fbu);
    (void)x86_sub(c, c.r[3], 0xC8u, 0, 4);
    // 0fa701  jne 0xfa671
    X86_AT(c, 0xfa701u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xfa671u); goto L_fa671; }
    X86_TICK(c, 9);
    // 0fa707  sub ebx, ebx
    X86_AT(c, 0xfa707u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0fa709  jmp 0xfa671
    X86_AT(c, 0xfa709u);
    X86_POLL(c, 0xfa671u); goto L_fa671;
L_fa70e:
    X86_TICK(c, 9);
    // 0fa70e  push 2
    X86_AT(c, 0xfa70eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0fa710  call 0xe6c68
    X86_AT(c, 0xfa710u);
    push32(c, 0xfa715u); f_000e6c68(c); X86_RET(c, 0xfa715u);
    X86_TICK(c, 7);
    // 0fa715  call 0xe8470
    X86_AT(c, 0xfa715u);
    push32(c, 0xfa71au); f_000e8470(c); X86_RET(c, 0xfa71au);
    X86_TICK(c, 27);
    // 0fa71a  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xfa71au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0fa71f  lea edx, [eax + eax*4]
    X86_AT(c, 0xfa71fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0fa722  lea edx, [eax + edx*2]
    X86_AT(c, 0xfa722u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0fa725  shl edx, 5
    X86_AT(c, 0xfa725u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0fa728  sub edx, eax
    X86_AT(c, 0xfa728u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fa72a  add esp, 4
    X86_AT(c, 0xfa72au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0fa72d  cmp dword ptr [edx + 0xcdf57], 5
    X86_AT(c, 0xfa72du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))), 0x5u, 0, 4);
    // 0fa734  je 0xfa740
    X86_AT(c, 0xfa734u);
    if (x86_cc(c, 4)) { goto L_fa740; }
    X86_TICK(c, 9);
    // 0fa736  push 1
    X86_AT(c, 0xfa736u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0fa738  call 0xe1a9c
    X86_AT(c, 0xfa738u);
    push32(c, 0xfa73du); f_000e1a9c(c); X86_RET(c, 0xfa73du);
    X86_TICK(c, 2);
    // 0fa73d  add esp, 4
    X86_AT(c, 0xfa73du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_fa740:
    X86_TICK(c, 28);
    // 0fa740  pop edi
    X86_AT(c, 0xfa740u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0fa741  pop esi
    X86_AT(c, 0xfa741u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fa742  pop ebx
    X86_AT(c, 0xfa742u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fa743  leave 
    X86_AT(c, 0xfa743u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fa744  ret 
    X86_AT(c, 0xfa744u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfa4d4u, "ran off the end of a function");
}
void f_000fa748(X86Cpu& c) {
    X86_TICK(c, 53);
    // 0fa748  push ebp
    X86_AT(c, 0xfa748u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0fa749  mov ebp, esp
    X86_AT(c, 0xfa749u);
    c.r[5] = c.r[4];
    // 0fa74b  push eax
    X86_AT(c, 0xfa74bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fa74c  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xfa74cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0fa751  lea edx, [eax + eax*4]
    X86_AT(c, 0xfa751u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0fa754  lea edx, [eax + edx*2]
    X86_AT(c, 0xfa754u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0fa757  shl edx, 5
    X86_AT(c, 0xfa757u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0fa75a  sub edx, eax
    X86_AT(c, 0xfa75au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fa75c  mov eax, dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xfa75cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)));
    // 0fa762  mov dword ptr [edx + 0xcdf5b], eax
    X86_AT(c, 0xfa762u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF5Bu)), c.r[0]);
    // 0fa768  mov dword ptr [0xd4a54], eax
    X86_AT(c, 0xfa768u);
    wr32((c.sbase[3] + (uint32_t)(0xD4A54u)), c.r[0]);
    // 0fa76d  mov eax, dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xfa76du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)));
    // 0fa773  mov dword ptr [edx + 0xcdf5f], eax
    X86_AT(c, 0xfa773u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF5Fu)), c.r[0]);
    // 0fa779  mov dword ptr [0xd4a58], eax
    X86_AT(c, 0xfa779u);
    wr32((c.sbase[3] + (uint32_t)(0xD4A58u)), c.r[0]);
    // 0fa77e  mov eax, dword ptr [edx + 0xcdf57]
    X86_AT(c, 0xfa77eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u)));
    // 0fa784  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xfa784u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0fa787  push dword ptr [edx + 0xcdf7f]
    X86_AT(c, 0xfa787u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF7Fu))); push32(c, v); }
    // 0fa78d  call 0x102208
    X86_AT(c, 0xfa78du);
    push32(c, 0xfa792u); f_00102208(c); X86_RET(c, 0xfa792u);
    X86_TICK(c, 7);
    // 0fa792  call 0x1022c8
    X86_AT(c, 0xfa792u);
    push32(c, 0xfa797u); f_001022c8(c); X86_RET(c, 0xfa797u);
    X86_TICK(c, 13);
    // 0fa797  mov dword ptr [0xd4a60], eax
    X86_AT(c, 0xfa797u);
    wr32((c.sbase[3] + (uint32_t)(0xD4A60u)), c.r[0]);
    // 0fa79c  mov dword ptr [0xd4a64], edx
    X86_AT(c, 0xfa79cu);
    wr32((c.sbase[3] + (uint32_t)(0xD4A64u)), c.r[2]);
    // 0fa7a2  push 7
    X86_AT(c, 0xfa7a2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fa7a4  call 0xe693c
    X86_AT(c, 0xfa7a4u);
    push32(c, 0xfa7a9u); f_000e693c(c); X86_RET(c, 0xfa7a9u);
    X86_TICK(c, 7);
    // 0fa7a9  call 0xe9230
    X86_AT(c, 0xfa7a9u);
    push32(c, 0xfa7aeu); f_000e9230(c); X86_RET(c, 0xfa7aeu);
    X86_TICK(c, 7);
    // 0fa7ae  call 0xe9238
    X86_AT(c, 0xfa7aeu);
    push32(c, 0xfa7b3u); f_000e9238(c); X86_RET(c, 0xfa7b3u);
    X86_TICK(c, 31);
    // 0fa7b3  mov eax, 3
    X86_AT(c, 0xfa7b3u);
    c.r[0] = 0x3u;
    // 0fa7b8  mov dword ptr [0xd6e64], eax
    X86_AT(c, 0xfa7b8u);
    wr32((c.sbase[3] + (uint32_t)(0xD6E64u)), c.r[0]);
    // 0fa7bd  mov dx, 0xffff
    X86_AT(c, 0xfa7bdu);
    s16(c, 2, 0xFFFFu);
    // 0fa7c1  mov word ptr [0xd4a48], dx
    X86_AT(c, 0xfa7c1u);
    wr16((c.sbase[3] + (uint32_t)(0xD4A48u)), (c.r[2] & 0xFFFFu));
    // 0fa7c8  mov dword ptr [0xd4a68], 1
    X86_AT(c, 0xfa7c8u);
    wr32((c.sbase[3] + (uint32_t)(0xD4A68u)), 0x1u);
    // 0fa7d2  mov word ptr [0xd6e68], ax
    X86_AT(c, 0xfa7d2u);
    wr16((c.sbase[3] + (uint32_t)(0xD6E68u)), (c.r[0] & 0xFFFFu));
    // 0fa7d8  mov dword ptr [0xd4a6c], 0
    X86_AT(c, 0xfa7d8u);
    wr32((c.sbase[3] + (uint32_t)(0xD4A6Cu)), 0x0u);
    // 0fa7e2  mov dword ptr [0xd4a70], 0
    X86_AT(c, 0xfa7e2u);
    wr32((c.sbase[3] + (uint32_t)(0xD4A70u)), 0x0u);
    // 0fa7ec  mov word ptr [0xcda74], dx
    X86_AT(c, 0xfa7ecu);
    wr16((c.sbase[3] + (uint32_t)(0xCDA74u)), (c.r[2] & 0xFFFFu));
    // 0fa7f3  mov dword ptr [0xd6e60], 0
    X86_AT(c, 0xfa7f3u);
    wr32((c.sbase[3] + (uint32_t)(0xD6E60u)), 0x0u);
    // 0fa7fd  mov dword ptr [0xd1424], 0
    X86_AT(c, 0xfa7fdu);
    wr32((c.sbase[3] + (uint32_t)(0xD1424u)), 0x0u);
    // 0fa807  push 1
    X86_AT(c, 0xfa807u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0fa809  call 0xe58cc
    X86_AT(c, 0xfa809u);
    push32(c, 0xfa80eu); f_000e58cc(c); X86_RET(c, 0xfa80eu);
    X86_TICK(c, 9);
    // 0fa80e  push 1
    X86_AT(c, 0xfa80eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0fa810  call 0xe7810
    X86_AT(c, 0xfa810u);
    push32(c, 0xfa815u); f_000e7810(c); X86_RET(c, 0xfa815u);
    X86_TICK(c, 9);
    // 0fa815  push 0
    X86_AT(c, 0xfa815u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0fa817  call 0xe58cc
    X86_AT(c, 0xfa817u);
    push32(c, 0xfa81cu); f_000e58cc(c); X86_RET(c, 0xfa81cu);
    X86_TICK(c, 9);
    // 0fa81c  push 2
    X86_AT(c, 0xfa81cu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0fa81e  call 0xe3188
    X86_AT(c, 0xfa81eu);
    push32(c, 0xfa823u); f_000e3188(c); X86_RET(c, 0xfa823u);
    X86_TICK(c, 7);
    // 0fa823  call 0xfb83c
    X86_AT(c, 0xfa823u);
    push32(c, 0xfa828u); f_000fb83c(c); X86_RET(c, 0xfa828u);
    X86_TICK(c, 27);
    // 0fa828  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xfa828u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0fa82d  lea edx, [eax + eax*4]
    X86_AT(c, 0xfa82du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0fa830  lea edx, [eax + edx*2]
    X86_AT(c, 0xfa830u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0fa833  shl edx, 5
    X86_AT(c, 0xfa833u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0fa836  sub edx, eax
    X86_AT(c, 0xfa836u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fa838  add esp, 0x14
    X86_AT(c, 0xfa838u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0fa83b  cmp dword ptr [edx + 0xcdf57], 5
    X86_AT(c, 0xfa83bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))), 0x5u, 0, 4);
    // 0fa842  jne 0xfa848
    X86_AT(c, 0xfa842u);
    if (x86_cc(c, 5)) { goto L_fa848; }
    X86_TICK(c, 9);
    // 0fa844  push 0
    X86_AT(c, 0xfa844u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0fa846  jmp 0xfa84a
    X86_AT(c, 0xfa846u);
    goto L_fa84a;
L_fa848:
    X86_TICK(c, 2);
    // 0fa848  push 1
    X86_AT(c, 0xfa848u);
    { uint32_t v = 0x1u; push32(c, v); }
L_fa84a:
    X86_TICK(c, 28);
    // 0fa84a  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xfa84au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0fa84f  lea edx, [eax + eax*4]
    X86_AT(c, 0xfa84fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0fa852  lea edx, [eax + edx*2]
    X86_AT(c, 0xfa852u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0fa855  shl edx, 5
    X86_AT(c, 0xfa855u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0fa858  sub edx, eax
    X86_AT(c, 0xfa858u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fa85a  lea eax, [edx + 0xcdf67]
    X86_AT(c, 0xfa85au);
    c.r[0] = (uint32_t)(c.r[2] + 0xCDF67u);
    // 0fa860  push eax
    X86_AT(c, 0xfa860u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fa861  add edx, 0xcdf63
    X86_AT(c, 0xfa861u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xCDF63u, 0, 4); }
    // 0fa867  push edx
    X86_AT(c, 0xfa867u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0fa868  call 0xfbae0
    X86_AT(c, 0xfa868u);
    push32(c, 0xfa86du); f_000fbae0(c); X86_RET(c, 0xfa86du);
    X86_TICK(c, 33);
    // 0fa86d  add esp, 0xc
    X86_AT(c, 0xfa86du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0fa870  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xfa870u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0fa875  lea edx, [eax + eax*4]
    X86_AT(c, 0xfa875u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0fa878  lea edx, [eax + edx*2]
    X86_AT(c, 0xfa878u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0fa87b  shl edx, 5
    X86_AT(c, 0xfa87bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0fa87e  sub edx, eax
    X86_AT(c, 0xfa87eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fa880  mov eax, dword ptr [edx + 0xcdf63]
    X86_AT(c, 0xfa880u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF63u)));
    // 0fa886  mov dword ptr [0xd4a4c], eax
    X86_AT(c, 0xfa886u);
    wr32((c.sbase[3] + (uint32_t)(0xD4A4Cu)), c.r[0]);
    // 0fa88b  mov eax, dword ptr [edx + 0xcdf67]
    X86_AT(c, 0xfa88bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF67u)));
    // 0fa891  mov dword ptr [0xd4a50], eax
    X86_AT(c, 0xfa891u);
    wr32((c.sbase[3] + (uint32_t)(0xD4A50u)), c.r[0]);
    // 0fa896  mov eax, 5
    X86_AT(c, 0xfa896u);
    c.r[0] = 0x5u;
    // 0fa89b  mov dword ptr [0xd4a50], eax
    X86_AT(c, 0xfa89bu);
    wr32((c.sbase[3] + (uint32_t)(0xD4A50u)), c.r[0]);
    // 0fa8a0  mov dword ptr [0xd4a4c], eax
    X86_AT(c, 0xfa8a0u);
    wr32((c.sbase[3] + (uint32_t)(0xD4A4Cu)), c.r[0]);
L_fa8a5:
    X86_TICK(c, 7);
    // 0fa8a5  call 0xfac9c
    X86_AT(c, 0xfa8a5u);
    push32(c, 0xfa8aau); f_000fac9c(c); X86_RET(c, 0xfa8aau);
    X86_TICK(c, 7);
    // 0fa8aa  and eax, eax
    X86_AT(c, 0xfa8aau);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0fa8ac  je 0xfa8a5
    X86_AT(c, 0xfa8acu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xfa8a5u); goto L_fa8a5; }
    X86_TICK(c, 11);
    // 0fa8ae  push 0xd
    X86_AT(c, 0xfa8aeu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0fa8b0  push 3
    X86_AT(c, 0xfa8b0u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0fa8b2  call 0xe6b70
    X86_AT(c, 0xfa8b2u);
    push32(c, 0xfa8b7u); f_000e6b70(c); X86_RET(c, 0xfa8b7u);
    X86_TICK(c, 11);
    // 0fa8b7  push 0xd
    X86_AT(c, 0xfa8b7u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0fa8b9  push 8
    X86_AT(c, 0xfa8b9u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0fa8bb  call 0xe6b70
    X86_AT(c, 0xfa8bbu);
    push32(c, 0xfa8c0u); f_000e6b70(c); X86_RET(c, 0xfa8c0u);
    X86_TICK(c, 9);
    // 0fa8c0  push 7
    X86_AT(c, 0xfa8c0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fa8c2  call 0xe693c
    X86_AT(c, 0xfa8c2u);
    push32(c, 0xfa8c7u); f_000e693c(c); X86_RET(c, 0xfa8c7u);
    X86_TICK(c, 14);
    // 0fa8c7  add esp, 0x14
    X86_AT(c, 0xfa8c7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0fa8ca  cmp word ptr [0xcde48], 0
    X86_AT(c, 0xfa8cau);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xCDE48u))), 0x0u, 0, 2);
    // 0fa8d2  je 0xfa9cd
    X86_AT(c, 0xfa8d2u);
    if (x86_cc(c, 4)) { goto L_fa9cd; }
    X86_TICK(c, 9);
    // 0fa8d8  push 7
    X86_AT(c, 0xfa8d8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fa8da  call 0xe6c68
    X86_AT(c, 0xfa8dau);
    push32(c, 0xfa8dfu); f_000e6c68(c); X86_RET(c, 0xfa8dfu);
    X86_TICK(c, 27);
    // 0fa8df  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xfa8dfu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0fa8e4  lea edx, [eax + eax*4]
    X86_AT(c, 0xfa8e4u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0fa8e7  lea edx, [eax + edx*2]
    X86_AT(c, 0xfa8e7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0fa8ea  shl edx, 5
    X86_AT(c, 0xfa8eau);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0fa8ed  sub edx, eax
    X86_AT(c, 0xfa8edu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fa8ef  add esp, 4
    X86_AT(c, 0xfa8efu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0fa8f2  cmp dword ptr [edx + 0xcdf57], 5
    X86_AT(c, 0xfa8f2u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))), 0x5u, 0, 4);
    // 0fa8f9  jne 0xfa902
    X86_AT(c, 0xfa8f9u);
    if (x86_cc(c, 5)) { goto L_fa902; }
    X86_TICK(c, 9);
    // 0fa8fb  push 0xb17c
    X86_AT(c, 0xfa8fbu);
    { uint32_t v = 0xB17Cu; push32(c, v); }
    // 0fa900  jmp 0xfa907
    X86_AT(c, 0xfa900u);
    goto L_fa907;
L_fa902:
    X86_TICK(c, 2);
    // 0fa902  push 0xb1c0
    X86_AT(c, 0xfa902u);
    { uint32_t v = 0xB1C0u; push32(c, v); }
L_fa907:
    X86_TICK(c, 9);
    // 0fa907  push 7
    X86_AT(c, 0xfa907u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fa909  call 0xe5654
    X86_AT(c, 0xfa909u);
    push32(c, 0xfa90eu); f_000e5654(c); X86_RET(c, 0xfa90eu);
    X86_TICK(c, 11);
    // 0fa90e  add esp, 8
    X86_AT(c, 0xfa90eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0fa911  push 7
    X86_AT(c, 0xfa911u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fa913  call 0xe6c68
    X86_AT(c, 0xfa913u);
    push32(c, 0xfa918u); f_000e6c68(c); X86_RET(c, 0xfa918u);
    X86_TICK(c, 44);
    // 0fa918  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xfa918u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0fa91d  lea edx, [eax + eax*4]
    X86_AT(c, 0xfa91du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0fa920  lea edx, [eax + edx*2]
    X86_AT(c, 0xfa920u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0fa923  shl edx, 5
    X86_AT(c, 0xfa923u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0fa926  sub edx, eax
    X86_AT(c, 0xfa926u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fa928  mov eax, dword ptr [0xd6e60]
    X86_AT(c, 0xfa928u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD6E60u)));
    // 0fa92d  mov dword ptr [edx + 0xcdf73], eax
    X86_AT(c, 0xfa92du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF73u)), c.r[0]);
    // 0fa933  mov dword ptr [edx + 0xcdf57], 0
    X86_AT(c, 0xfa933u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u)), 0x0u);
    // 0fa93d  mov eax, dword ptr [0xd4a54]
    X86_AT(c, 0xfa93du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD4A54u)));
    // 0fa942  mov dword ptr [edx + 0xcdf6b], eax
    X86_AT(c, 0xfa942u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)), c.r[0]);
    // 0fa948  mov dword ptr [edx + 0xcdf5b], eax
    X86_AT(c, 0xfa948u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF5Bu)), c.r[0]);
    // 0fa94e  mov eax, dword ptr [0xd4a58]
    X86_AT(c, 0xfa94eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD4A58u)));
    // 0fa953  mov dword ptr [edx + 0xcdf6f], eax
    X86_AT(c, 0xfa953u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)), c.r[0]);
    // 0fa959  mov dword ptr [edx + 0xcdf5f], eax
    X86_AT(c, 0xfa959u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF5Fu)), c.r[0]);
    // 0fa95f  call 0xe8470
    X86_AT(c, 0xfa95fu);
    push32(c, 0xfa964u); f_000e8470(c); X86_RET(c, 0xfa964u);
    X86_TICK(c, 30);
    // 0fa964  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xfa964u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0fa969  lea edx, [eax + eax*4]
    X86_AT(c, 0xfa969u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0fa96c  lea edx, [eax + edx*2]
    X86_AT(c, 0xfa96cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0fa96f  shl edx, 5
    X86_AT(c, 0xfa96fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0fa972  sub edx, eax
    X86_AT(c, 0xfa972u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fa974  push dword ptr [edx + 0xcdf57]
    X86_AT(c, 0xfa974u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))); push32(c, v); }
    // 0fa97a  push dword ptr [edx + 0xcde99]
    X86_AT(c, 0xfa97au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u))); push32(c, v); }
    // 0fa980  call 0xf3c40
    X86_AT(c, 0xfa980u);
    push32(c, 0xfa985u); f_000f3c40(c); X86_RET(c, 0xfa985u);
    X86_TICK(c, 27);
    // 0fa985  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xfa985u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0fa98a  lea edx, [eax + eax*4]
    X86_AT(c, 0xfa98au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0fa98d  lea edx, [eax + edx*2]
    X86_AT(c, 0xfa98du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0fa990  shl edx, 5
    X86_AT(c, 0xfa990u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0fa993  sub edx, eax
    X86_AT(c, 0xfa993u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fa995  add esp, 0xc
    X86_AT(c, 0xfa995u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0fa998  cmp dword ptr [edx + 0xcde99], 4
    X86_AT(c, 0xfa998u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u))), 0x4u, 0, 4);
    // 0fa99f  jle 0xfa9a5
    X86_AT(c, 0xfa99fu);
    if (x86_cc(c, 14)) { goto L_fa9a5; }
    X86_TICK(c, 9);
    // 0fa9a1  push 7
    X86_AT(c, 0xfa9a1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fa9a3  jmp 0xfa9a7
    X86_AT(c, 0xfa9a3u);
    goto L_fa9a7;
L_fa9a5:
    X86_TICK(c, 2);
    // 0fa9a5  push 0
    X86_AT(c, 0xfa9a5u);
    { uint32_t v = 0x0u; push32(c, v); }
L_fa9a7:
    X86_TICK(c, 7);
    // 0fa9a7  call 0xe3188
    X86_AT(c, 0xfa9a7u);
    push32(c, 0xfa9acu); f_000e3188(c); X86_RET(c, 0xfa9acu);
    X86_TICK(c, 11);
    // 0fa9ac  add esp, 4
    X86_AT(c, 0xfa9acu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0fa9af  push 0x79f0c
    X86_AT(c, 0xfa9afu);
    { uint32_t v = 0x79F0Cu; push32(c, v); }
    // 0fa9b4  call 0xe8660
    X86_AT(c, 0xfa9b4u);
    push32(c, 0xfa9b9u); f_000e8660(c); X86_RET(c, 0xfa9b9u);
    X86_TICK(c, 7);
    // 0fa9b9  call 0xe2c18
    X86_AT(c, 0xfa9b9u);
    push32(c, 0xfa9beu); f_000e2c18(c); X86_RET(c, 0xfa9beu);
    X86_TICK(c, 7);
    // 0fa9be  call 0xe2ea0
    X86_AT(c, 0xfa9beu);
    push32(c, 0xfa9c3u); f_000e2ea0(c); X86_RET(c, 0xfa9c3u);
    X86_TICK(c, 9);
    // 0fa9c3  push 1
    X86_AT(c, 0xfa9c3u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0fa9c5  call 0xe1a9c
    X86_AT(c, 0xfa9c5u);
    push32(c, 0xfa9cau); f_000e1a9c(c); X86_RET(c, 0xfa9cau);
    X86_TICK(c, 2);
    // 0fa9ca  add esp, 8
    X86_AT(c, 0xfa9cau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_fa9cd:
    X86_TICK(c, 16);
    // 0fa9cd  leave 
    X86_AT(c, 0xfa9cdu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fa9ce  ret 
    X86_AT(c, 0xfa9ceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfa748u, "ran off the end of a function");
}
void f_000fa9d0(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0fa9d0  cmp dword ptr [0xd6e60], 0
    X86_AT(c, 0xfa9d0u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD6E60u))), 0x0u, 0, 4);
    // 0fa9d7  jne 0xfa9f6
    X86_AT(c, 0xfa9d7u);
    if (x86_cc(c, 5)) { goto L_fa9f6; }
    X86_TICK(c, 12);
    // 0fa9d9  cmp dword ptr [0xcde44], 2
    X86_AT(c, 0xfa9d9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDE44u))), 0x2u, 0, 4);
    // 0fa9e0  je 0xfa9f6
    X86_AT(c, 0xfa9e0u);
    if (x86_cc(c, 4)) { goto L_fa9f6; }
    X86_TICK(c, 2);
    // 0fa9e2  sub eax, eax
    X86_AT(c, 0xfa9e2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_fa9e4:
    X86_TICK(c, 7);
    // 0fa9e4  cmp eax, 0xf200
    X86_AT(c, 0xfa9e4u);
    (void)x86_sub(c, c.r[0], 0xF200u, 0, 4);
    // 0fa9ea  jge 0xfa9f6
    X86_AT(c, 0xfa9eau);
    if (x86_cc(c, 13)) { goto L_fa9f6; }
    X86_TICK(c, 11);
    // 0fa9ec  mov byte ptr [eax + 0xbe5f4], 0
    X86_AT(c, 0xfa9ecu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBE5F4u)), 0x0u);
    // 0fa9f3  inc eax
    X86_AT(c, 0xfa9f3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0fa9f4  jmp 0xfa9e4
    X86_AT(c, 0xfa9f4u);
    X86_POLL(c, 0xfa9e4u); goto L_fa9e4;
L_fa9f6:
    X86_TICK(c, 10);
    // 0fa9f6  ret 
    X86_AT(c, 0xfa9f6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfa9d0u, "ran off the end of a function");
}
void f_000fa9f8(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0fa9f8  cmp dword ptr [0xd1424], 0
    X86_AT(c, 0xfa9f8u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD1424u))), 0x0u, 0, 4);
    // 0fa9ff  jle 0xfaa10
    X86_AT(c, 0xfa9ffu);
    if (x86_cc(c, 14)) { goto L_faa10; }
    X86_TICK(c, 11);
    // 0faa01  mov eax, dword ptr [0xd6e60]
    X86_AT(c, 0xfaa01u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD6E60u)));
    // 0faa06  and eax, eax
    X86_AT(c, 0xfaa06u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0faa08  jle 0xfaa10
    X86_AT(c, 0xfaa08u);
    if (x86_cc(c, 14)) { goto L_faa10; }
    X86_TICK(c, 6);
    // 0faa0a  dec dword ptr [0xd6e60]
    X86_AT(c, 0xfaa0au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xD6E60u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_faa10:
    X86_TICK(c, 10);
    // 0faa10  ret 
    X86_AT(c, 0xfaa10u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfa9f8u, "ran off the end of a function");
}
void f_000faa14(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0faa14  push 3
    X86_AT(c, 0xfaa14u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0faa16  call 0xe693c
    X86_AT(c, 0xfaa16u);
    push32(c, 0xfaa1bu); f_000e693c(c); X86_RET(c, 0xfaa1bu);
    X86_TICK(c, 13);
    // 0faa1b  push 0
    X86_AT(c, 0xfaa1bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0faa1d  push 0
    X86_AT(c, 0xfaa1du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0faa1f  push 3
    X86_AT(c, 0xfaa1fu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0faa21  call 0xe7260
    X86_AT(c, 0xfaa21u);
    push32(c, 0xfaa26u); f_000e7260(c); X86_RET(c, 0xfaa26u);
    X86_TICK(c, 11);
    // 0faa26  push 0xb1f8
    X86_AT(c, 0xfaa26u);
    { uint32_t v = 0xB1F8u; push32(c, v); }
    // 0faa2b  push 3
    X86_AT(c, 0xfaa2bu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0faa2d  call 0xe5654
    X86_AT(c, 0xfaa2du);
    push32(c, 0xfaa32u); f_000e5654(c); X86_RET(c, 0xfaa32u);
    X86_TICK(c, 13);
    // 0faa32  push 0
    X86_AT(c, 0xfaa32u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0faa34  push 0xa
    X86_AT(c, 0xfaa34u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0faa36  push 3
    X86_AT(c, 0xfaa36u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0faa38  call 0xe7260
    X86_AT(c, 0xfaa38u);
    push32(c, 0xfaa3du); f_000e7260(c); X86_RET(c, 0xfaa3du);
    X86_TICK(c, 17);
    // 0faa3d  add esp, 0x24
    X86_AT(c, 0xfaa3du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0faa40  movsx edx, word ptr [0xd6e68]
    X86_AT(c, 0xfaa40u);
    c.r[2] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0xD6E68u)));
    // 0faa47  dec edx
    X86_AT(c, 0xfaa47u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0faa48  cmp edx, 3
    X86_AT(c, 0xfaa48u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0faa4b  ja 0xfaa89
    X86_AT(c, 0xfaa4bu);
    if (x86_cc(c, 7)) { goto L_faa89; }
    X86_TICK(c, 7);
    // 0faa4d  jmp dword ptr cs:[edx*4 + 0xfaa55]
    X86_AT(c, 0xfaa4du);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xFAA55u)));
      switch (t) {
      case 0xfaa65u: goto L_faa65;
      case 0xfaa6cu: goto L_faa6c;
      case 0xfaa73u: goto L_faa73;
      case 0xfaa7au: goto L_faa7a;
      default: x86_jump(c, t); return; } }
L_faa65:
    X86_TICK(c, 9);
    // 0faa65  push 0xb214
    X86_AT(c, 0xfaa65u);
    { uint32_t v = 0xB214u; push32(c, v); }
    // 0faa6a  jmp 0xfaa7f
    X86_AT(c, 0xfaa6au);
    goto L_faa7f;
L_faa6c:
    X86_TICK(c, 9);
    // 0faa6c  push 0xb22c
    X86_AT(c, 0xfaa6cu);
    { uint32_t v = 0xB22Cu; push32(c, v); }
    // 0faa71  jmp 0xfaa7f
    X86_AT(c, 0xfaa71u);
    goto L_faa7f;
L_faa73:
    X86_TICK(c, 9);
    // 0faa73  push 0xb244
    X86_AT(c, 0xfaa73u);
    { uint32_t v = 0xB244u; push32(c, v); }
    // 0faa78  jmp 0xfaa7f
    X86_AT(c, 0xfaa78u);
    goto L_faa7f;
L_faa7a:
    X86_TICK(c, 2);
    // 0faa7a  push 0xb25c
    X86_AT(c, 0xfaa7au);
    { uint32_t v = 0xB25Cu; push32(c, v); }
L_faa7f:
    X86_TICK(c, 9);
    // 0faa7f  push 3
    X86_AT(c, 0xfaa7fu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0faa81  call 0xe5654
    X86_AT(c, 0xfaa81u);
    push32(c, 0xfaa86u); f_000e5654(c); X86_RET(c, 0xfaa86u);
    X86_TICK(c, 2);
    // 0faa86  add esp, 8
    X86_AT(c, 0xfaa86u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_faa89:
    X86_TICK(c, 9);
    // 0faa89  push 7
    X86_AT(c, 0xfaa89u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0faa8b  call 0xe693c
    X86_AT(c, 0xfaa8bu);
    push32(c, 0xfaa90u); f_000e693c(c); X86_RET(c, 0xfaa90u);
    X86_TICK(c, 12);
    // 0faa90  add esp, 4
    X86_AT(c, 0xfaa90u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0faa93  ret 
    X86_AT(c, 0xfaa93u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfaa14u, "ran off the end of a function");
}
void f_000faa94(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0faa94  push 8
    X86_AT(c, 0xfaa94u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0faa96  call 0xe693c
    X86_AT(c, 0xfaa96u);
    push32(c, 0xfaa9bu); f_000e693c(c); X86_RET(c, 0xfaa9bu);
    X86_TICK(c, 13);
    // 0faa9b  push 0
    X86_AT(c, 0xfaa9bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0faa9d  push 0
    X86_AT(c, 0xfaa9du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0faa9f  push 8
    X86_AT(c, 0xfaa9fu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0faaa1  call 0xe7260
    X86_AT(c, 0xfaaa1u);
    push32(c, 0xfaaa6u); f_000e7260(c); X86_RET(c, 0xfaaa6u);
    X86_TICK(c, 14);
    // 0faaa6  add esp, 0x10
    X86_AT(c, 0xfaaa6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0faaa9  cmp dword ptr [0xd4a68], 9
    X86_AT(c, 0xfaaa9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD4A68u))), 0x9u, 0, 4);
    // 0faab0  jle 0xfaad2
    X86_AT(c, 0xfaab0u);
    if (x86_cc(c, 14)) { goto L_faad2; }
    X86_TICK(c, 11);
    // 0faab2  push 0xb274
    X86_AT(c, 0xfaab2u);
    { uint32_t v = 0xB274u; push32(c, v); }
    // 0faab7  push 8
    X86_AT(c, 0xfaab7u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0faab9  call 0xe6cb0
    X86_AT(c, 0xfaab9u);
    push32(c, 0xfaabeu); f_000e6cb0(c); X86_RET(c, 0xfaabeu);
    X86_TICK(c, 16);
    // 0faabe  push 2
    X86_AT(c, 0xfaabeu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0faac0  push dword ptr [0xd4a68]
    X86_AT(c, 0xfaac0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xD4A68u))); push32(c, v); }
    // 0faac6  push 8
    X86_AT(c, 0xfaac6u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0faac8  call 0xe5630
    X86_AT(c, 0xfaac8u);
    push32(c, 0xfaacdu); f_000e5630(c); X86_RET(c, 0xfaacdu);
    X86_TICK(c, 9);
    // 0faacd  add esp, 0x14
    X86_AT(c, 0xfaacdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0faad0  jmp 0xfaafc
    X86_AT(c, 0xfaad0u);
    goto L_faafc;
L_faad2:
    X86_TICK(c, 11);
    // 0faad2  push 0xb278
    X86_AT(c, 0xfaad2u);
    { uint32_t v = 0xB278u; push32(c, v); }
    // 0faad7  push 8
    X86_AT(c, 0xfaad7u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0faad9  call 0xe6cb0
    X86_AT(c, 0xfaad9u);
    push32(c, 0xfaadeu); f_000e6cb0(c); X86_RET(c, 0xfaadeu);
    X86_TICK(c, 16);
    // 0faade  push 1
    X86_AT(c, 0xfaadeu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0faae0  push dword ptr [0xd4a68]
    X86_AT(c, 0xfaae0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xD4A68u))); push32(c, v); }
    // 0faae6  push 8
    X86_AT(c, 0xfaae6u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0faae8  call 0xe5630
    X86_AT(c, 0xfaae8u);
    push32(c, 0xfaaedu); f_000e5630(c); X86_RET(c, 0xfaaedu);
    X86_TICK(c, 11);
    // 0faaed  push 0xb27e
    X86_AT(c, 0xfaaedu);
    { uint32_t v = 0xB27Eu; push32(c, v); }
    // 0faaf2  push 8
    X86_AT(c, 0xfaaf2u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0faaf4  call 0xe6cb0
    X86_AT(c, 0xfaaf4u);
    push32(c, 0xfaaf9u); f_000e6cb0(c); X86_RET(c, 0xfaaf9u);
    X86_TICK(c, 2);
    // 0faaf9  add esp, 0x1c
    X86_AT(c, 0xfaaf9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_faafc:
    X86_TICK(c, 10);
    // 0faafc  ret 
    X86_AT(c, 0xfaafcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfaa94u, "ran off the end of a function");
}
void f_000fab00(X86Cpu& c) {
    X86_TICK(c, 47);
    // 0fab00  push ebp
    X86_AT(c, 0xfab00u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0fab01  mov ebp, esp
    X86_AT(c, 0xfab01u);
    c.r[5] = c.r[4];
    // 0fab03  sub esp, 8
    X86_AT(c, 0xfab03u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0fab06  push ebx
    X86_AT(c, 0xfab06u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fab07  push esi
    X86_AT(c, 0xfab07u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fab08  mov eax, 0xd4a48
    X86_AT(c, 0xfab08u);
    c.r[0] = 0xD4A48u;
    // 0fab0d  mov edx, dword ptr [eax + 0xc]
    X86_AT(c, 0xfab0du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)));
    // 0fab10  lea edx, [edx + edx*4]
    X86_AT(c, 0xfab10u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0fab13  mov ecx, dword ptr [eax + 0x10]
    X86_AT(c, 0xfab13u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x10u)));
    // 0fab16  lea ecx, [ecx + ecx*2]
    X86_AT(c, 0xfab16u);
    c.r[1] = (uint32_t)(c.r[1] + c.r[1] * 2);
    // 0fab19  add ecx, edx
    X86_AT(c, 0xfab19u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[2], 0, 4); }
    // 0fab1b  mov edx, dword ptr [eax + 0x20]
    X86_AT(c, 0xfab1bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x20u)));
    // 0fab1e  lea esi, [edx + edx*8]
    X86_AT(c, 0xfab1eu);
    c.r[6] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0fab21  lea edx, [esi + edx*8]
    X86_AT(c, 0xfab21u);
    c.r[2] = (uint32_t)(c.r[6] + c.r[2] * 8);
    // 0fab24  add edx, ecx
    X86_AT(c, 0xfab24u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[1], 0, 4); }
    // 0fab26  push edx
    X86_AT(c, 0xfab26u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0fab27  mov ebx, eax
    X86_AT(c, 0xfab27u);
    c.r[3] = c.r[0];
    // 0fab29  call 0x102208
    X86_AT(c, 0xfab29u);
    push32(c, 0xfab2eu); f_00102208(c); X86_RET(c, 0xfab2eu);
    X86_TICK(c, 7);
    // 0fab2e  call 0x1022c8
    X86_AT(c, 0xfab2eu);
    push32(c, 0xfab33u); f_001022c8(c); X86_RET(c, 0xfab33u);
    X86_TICK(c, 21);
    // 0fab33  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xfab33u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0fab36  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xfab36u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0fab39  push dword ptr [ebx + 0x1c]
    X86_AT(c, 0xfab39u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Cu))); push32(c, v); }
    // 0fab3c  push dword ptr [ebx + 0x18]
    X86_AT(c, 0xfab3cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x18u))); push32(c, v); }
    // 0fab3f  call 0x10228c
    X86_AT(c, 0xfab3fu);
    push32(c, 0xfab44u); f_0010228c(c); X86_RET(c, 0xfab44u);
    X86_TICK(c, 17);
    // 0fab44  push dword ptr [ebp - 4]
    X86_AT(c, 0xfab44u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0fab47  push dword ptr [ebp - 8]
    X86_AT(c, 0xfab47u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0fab4a  call 0x10228c
    X86_AT(c, 0xfab4au);
    push32(c, 0xfab4fu); f_0010228c(c); X86_RET(c, 0xfab4fu);
    X86_TICK(c, 7);
    // 0fab4f  call 0x101f70
    X86_AT(c, 0xfab4fu);
    push32(c, 0xfab54u); f_00101f70(c); X86_RET(c, 0xfab54u);
    X86_TICK(c, 7);
    // 0fab54  call 0x102088
    X86_AT(c, 0xfab54u);
    push32(c, 0xfab59u); f_00102088(c); X86_RET(c, 0xfab59u);
    X86_TICK(c, 9);
    // 0fab59  push eax
    X86_AT(c, 0xfab59u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fab5a  call 0x101888
    X86_AT(c, 0xfab5au);
    push32(c, 0xfab5fu); f_00101888(c); X86_RET(c, 0xfab5fu);
    X86_TICK(c, 26);
    // 0fab5f  add esp, 4
    X86_AT(c, 0xfab5fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0fab62  pop esi
    X86_AT(c, 0xfab62u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fab63  pop ebx
    X86_AT(c, 0xfab63u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fab64  leave 
    X86_AT(c, 0xfab64u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fab65  ret 
    X86_AT(c, 0xfab65u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfab00u, "ran off the end of a function");
}
void f_000fab68(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0fab68  push ebp
    X86_AT(c, 0xfab68u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0fab69  mov ebp, esp
    X86_AT(c, 0xfab69u);
    c.r[5] = c.r[4];
    // 0fab6b  sub esp, 8
    X86_AT(c, 0xfab6bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0fab6e  push ebx
    X86_AT(c, 0xfab6eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fab6f  push esi
    X86_AT(c, 0xfab6fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fab70  push edi
    X86_AT(c, 0xfab70u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fab71  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xfab71u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0fab78  cmp dword ptr [0xd4a5c], 5
    X86_AT(c, 0xfab78u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD4A5Cu))), 0x5u, 0, 4);
    // 0fab7f  jge 0xfac96
    X86_AT(c, 0xfab7fu);
    if (x86_cc(c, 13)) { goto L_fac96; }
L_fab85:
    X86_TICK(c, 11);
    // 0fab85  push 0xf2
    X86_AT(c, 0xfab85u);
    { uint32_t v = 0xF2u; push32(c, v); }
    // 0fab8a  push 0
    X86_AT(c, 0xfab8au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0fab8c  call 0xe3b6c
    X86_AT(c, 0xfab8cu);
    push32(c, 0xfab91u); f_000e3b6c(c); X86_RET(c, 0xfab91u);
    X86_TICK(c, 57);
    // 0fab91  cdq 
    X86_AT(c, 0xfab91u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0fab92  mov ecx, 9
    X86_AT(c, 0xfab92u);
    c.r[1] = 0x9u;
    // 0fab97  idiv ecx
    X86_AT(c, 0xfab97u);
    x86_idiv(c, c.r[1], 4, 0xfab97u);
    // 0fab99  lea edi, [edx + 1]
    X86_AT(c, 0xfab99u);
    c.r[7] = (uint32_t)(c.r[2] + 0x1u);
    // 0fab9c  push 0xf2
    X86_AT(c, 0xfab9cu);
    { uint32_t v = 0xF2u; push32(c, v); }
    // 0faba1  push 0
    X86_AT(c, 0xfaba1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0faba3  call 0xe3b6c
    X86_AT(c, 0xfaba3u);
    push32(c, 0xfaba8u); f_000e3b6c(c); X86_RET(c, 0xfaba8u);
    X86_TICK(c, 72);
    // 0faba8  cdq 
    X86_AT(c, 0xfaba8u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0faba9  mov ecx, 9
    X86_AT(c, 0xfaba9u);
    c.r[1] = 0x9u;
    // 0fabae  idiv ecx
    X86_AT(c, 0xfabaeu);
    x86_idiv(c, c.r[1], 4, 0xfabaeu);
    // 0fabb0  lea esi, [edx + 1]
    X86_AT(c, 0xfabb0u);
    c.r[6] = (uint32_t)(c.r[2] + 0x1u);
    // 0fabb3  mov eax, 0xd4a48
    X86_AT(c, 0xfabb3u);
    c.r[0] = 0xD4A48u;
    // 0fabb8  mov edx, edi
    X86_AT(c, 0xfabb8u);
    c.r[2] = c.r[7];
    // 0fabba  shl edx, 8
    X86_AT(c, 0xfabbau);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[2] = r; }
    // 0fabbd  mov eax, esi
    X86_AT(c, 0xfabbdu);
    c.r[0] = c.r[6];
    // 0fabbf  shl eax, 4
    X86_AT(c, 0xfabbfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0fabc2  add eax, edx
    X86_AT(c, 0xfabc2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0fabc4  cmp dword ptr [eax + 0xd4a78], 0xffffffff
    X86_AT(c, 0xfabc4u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4A78u))), 0xFFFFFFFFu, 0, 4);
    // 0fabcb  jne 0xfabfe
    X86_AT(c, 0xfabcbu);
    if (x86_cc(c, 5)) { goto L_fabfe; }
    X86_TICK(c, 11);
    // 0fabcd  mov edx, dword ptr [eax + 0xd4a74]
    X86_AT(c, 0xfabcdu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4A74u)));
    // 0fabd3  cmp edx, 2
    X86_AT(c, 0xfabd3u);
    (void)x86_sub(c, c.r[2], 0x2u, 0, 4);
    // 0fabd6  je 0xfabfe
    X86_AT(c, 0xfabd6u);
    if (x86_cc(c, 4)) { goto L_fabfe; }
    X86_TICK(c, 7);
    // 0fabd8  cmp edx, 3
    X86_AT(c, 0xfabd8u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0fabdb  je 0xfabfe
    X86_AT(c, 0xfabdbu);
    if (x86_cc(c, 4)) { goto L_fabfe; }
    X86_TICK(c, 7);
    // 0fabdd  cmp edx, 8
    X86_AT(c, 0xfabddu);
    (void)x86_sub(c, c.r[2], 0x8u, 0, 4);
    // 0fabe0  je 0xfabfe
    X86_AT(c, 0xfabe0u);
    if (x86_cc(c, 4)) { goto L_fabfe; }
    X86_TICK(c, 7);
    // 0fabe2  cmp edx, 0xf
    X86_AT(c, 0xfabe2u);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 0fabe5  je 0xfabfe
    X86_AT(c, 0xfabe5u);
    if (x86_cc(c, 4)) { goto L_fabfe; }
    X86_TICK(c, 7);
    // 0fabe7  cmp edx, 0xe
    X86_AT(c, 0xfabe7u);
    (void)x86_sub(c, c.r[2], 0xEu, 0, 4);
    // 0fabea  je 0xfabfe
    X86_AT(c, 0xfabeau);
    if (x86_cc(c, 4)) { goto L_fabfe; }
    X86_TICK(c, 7);
    // 0fabec  cmp edx, 0xa
    X86_AT(c, 0xfabecu);
    (void)x86_sub(c, c.r[2], 0xAu, 0, 4);
    // 0fabef  je 0xfabfe
    X86_AT(c, 0xfabefu);
    if (x86_cc(c, 4)) { goto L_fabfe; }
    X86_TICK(c, 12);
    // 0fabf1  cmp dword ptr [eax + 0xd4a7c], 4
    X86_AT(c, 0xfabf1u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4A7Cu))), 0x4u, 0, 4);
    // 0fabf8  je 0xfabfe
    X86_AT(c, 0xfabf8u);
    if (x86_cc(c, 4)) { goto L_fabfe; }
    X86_TICK(c, 9);
    // 0fabfa  mov al, 1
    X86_AT(c, 0xfabfau);
    s8(c, 0, 0x1u);
    // 0fabfc  jmp 0xfac00
    X86_AT(c, 0xfabfcu);
    goto L_fac00;
L_fabfe:
    X86_TICK(c, 2);
    // 0fabfe  sub eax, eax
    X86_AT(c, 0xfabfeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_fac00:
    X86_TICK(c, 12);
    // 0fac00  movzx ebx, al
    X86_AT(c, 0xfac00u);
    c.r[3] = g8(c, 0);
    // 0fac03  add esp, 0x10
    X86_AT(c, 0xfac03u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0fac06  and ebx, ebx
    X86_AT(c, 0xfac06u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0fac08  jne 0xfac1a
    X86_AT(c, 0xfac08u);
    if (x86_cc(c, 5)) { goto L_fac1a; }
    X86_TICK(c, 18);
    // 0fac0a  inc dword ptr [ebp - 4]
    X86_AT(c, 0xfac0au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0fac0d  cmp dword ptr [ebp - 4], 0x1f4
    X86_AT(c, 0xfac0du);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x1F4u, 0, 4);
    // 0fac14  jle 0xfab85
    X86_AT(c, 0xfac14u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xfab85u); goto L_fab85; }
L_fac1a:
    X86_TICK(c, 12);
    // 0fac1a  cmp dword ptr [ebp - 4], 0x1f4
    X86_AT(c, 0xfac1au);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x1F4u, 0, 4);
    // 0fac21  jge 0xfac90
    X86_AT(c, 0xfac21u);
    if (x86_cc(c, 13)) { goto L_fac90; }
    X86_TICK(c, 11);
    // 0fac23  cmp edi, dword ptr [0xd4a4c]
    X86_AT(c, 0xfac23u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xD4A4Cu))), 0, 4);
    // 0fac29  jne 0xfac33
    X86_AT(c, 0xfac29u);
    if (x86_cc(c, 5)) { goto L_fac33; }
    X86_TICK(c, 11);
    // 0fac2b  cmp esi, dword ptr [0xd4a50]
    X86_AT(c, 0xfac2bu);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xD4A50u))), 0, 4);
    // 0fac31  je 0xfac90
    X86_AT(c, 0xfac31u);
    if (x86_cc(c, 4)) { goto L_fac90; }
L_fac33:
    X86_TICK(c, 9);
    // 0fac33  push 9
    X86_AT(c, 0xfac33u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0fac35  call 0xe1a7c
    X86_AT(c, 0xfac35u);
    push32(c, 0xfac3au); f_000e1a7c(c); X86_RET(c, 0xfac3au);
    X86_TICK(c, 17);
    // 0fac3a  add eax, dword ptr [0xd4a68]
    X86_AT(c, 0xfac3au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xD4A68u))), 0, 4); }
    // 0fac40  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xfac40u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0fac43  add esp, 4
    X86_AT(c, 0xfac43u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0fac46  cmp eax, 0x18
    X86_AT(c, 0xfac46u);
    (void)x86_sub(c, c.r[0], 0x18u, 0, 4);
    // 0fac49  jle 0xfac52
    X86_AT(c, 0xfac49u);
    if (x86_cc(c, 14)) { goto L_fac52; }
    X86_TICK(c, 2);
    // 0fac4b  mov dword ptr [ebp - 4], 0x18
    X86_AT(c, 0xfac4bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x18u);
L_fac52:
    X86_TICK(c, 37);
    // 0fac52  mov eax, edi
    X86_AT(c, 0xfac52u);
    c.r[0] = c.r[7];
    // 0fac54  shl eax, 8
    X86_AT(c, 0xfac54u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0fac57  mov edx, esi
    X86_AT(c, 0xfac57u);
    c.r[2] = c.r[6];
    // 0fac59  shl edx, 4
    X86_AT(c, 0xfac59u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fac5c  add edx, eax
    X86_AT(c, 0xfac5cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fac5e  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xfac5eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0fac61  mov dword ptr [edx + 0xd4a78], eax
    X86_AT(c, 0xfac61u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A78u)), c.r[0]);
    // 0fac67  mov ecx, dword ptr [0xd4a68]
    X86_AT(c, 0xfac67u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xD4A68u)));
    // 0fac6d  inc ecx
    X86_AT(c, 0xfac6du);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0fac6e  push ecx
    X86_AT(c, 0xfac6eu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0fac6f  push 1
    X86_AT(c, 0xfac6fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0fac71  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0xfac71u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
    // 0fac74  call 0xe3b6c
    X86_AT(c, 0xfac74u);
    push32(c, 0xfac79u); f_000e3b6c(c); X86_RET(c, 0xfac79u);
    X86_TICK(c, 19);
    // 0fac79  add eax, 0xa
    X86_AT(c, 0xfac79u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xAu, 0, 4); }
    // 0fac7c  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xfac7cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0fac7f  shl edx, 2
    X86_AT(c, 0xfac7fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[2] = r; }
    // 0fac82  add edx, eax
    X86_AT(c, 0xfac82u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fac84  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xfac84u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0fac87  mov dword ptr [eax + 0xd4a80], edx
    X86_AT(c, 0xfac87u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4A80u)), c.r[2]);
    // 0fac8d  add esp, 8
    X86_AT(c, 0xfac8du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_fac90:
    X86_TICK(c, 6);
    // 0fac90  inc dword ptr [0xd4a5c]
    X86_AT(c, 0xfac90u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xD4A5Cu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_fac96:
    X86_TICK(c, 28);
    // 0fac96  pop edi
    X86_AT(c, 0xfac96u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0fac97  pop esi
    X86_AT(c, 0xfac97u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fac98  pop ebx
    X86_AT(c, 0xfac98u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fac99  leave 
    X86_AT(c, 0xfac99u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fac9a  ret 
    X86_AT(c, 0xfac9au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfab68u, "ran off the end of a function");
}
void f_000fac9c(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0fac9c  push ebp
    X86_AT(c, 0xfac9cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0fac9d  mov ebp, esp
    X86_AT(c, 0xfac9du);
    c.r[5] = c.r[4];
    // 0fac9f  push eax
    X86_AT(c, 0xfac9fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0faca0  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xfaca0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0faca5  lea edx, [eax + eax*4]
    X86_AT(c, 0xfaca5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0faca8  lea edx, [eax + edx*2]
    X86_AT(c, 0xfaca8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0facab  shl edx, 5
    X86_AT(c, 0xfacabu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0facae  sub edx, eax
    X86_AT(c, 0xfacaeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0facb0  cmp dword ptr [edx + 0xcde81], 0
    X86_AT(c, 0xfacb0u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE81u))), 0x0u, 0, 4);
    // 0facb7  jle 0xfad12
    X86_AT(c, 0xfacb7u);
    if (x86_cc(c, 14)) { goto L_fad12; }
    X86_TICK(c, 7);
    // 0facb9  call 0xfa9f8
    X86_AT(c, 0xfacb9u);
    push32(c, 0xfacbeu); f_000fa9f8(c); X86_RET(c, 0xfacbeu);
    X86_TICK(c, 9);
    // 0facbe  push 0xa
    X86_AT(c, 0xfacbeu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0facc0  call 0xf0a08
    X86_AT(c, 0xfacc0u);
    push32(c, 0xfacc5u); f_000f0a08(c); X86_RET(c, 0xfacc5u);
    X86_TICK(c, 7);
    // 0facc5  call 0xe9010
    X86_AT(c, 0xfacc5u);
    push32(c, 0xfaccau); f_000e9010(c); X86_RET(c, 0xfaccau);
    X86_TICK(c, 7);
    // 0facca  call 0xfaeac
    X86_AT(c, 0xfaccau);
    push32(c, 0xfaccfu); f_000faeac(c); X86_RET(c, 0xfaccfu);
    X86_TICK(c, 9);
    // 0faccf  push eax
    X86_AT(c, 0xfaccfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0facd0  call 0xfa180
    X86_AT(c, 0xfacd0u);
    push32(c, 0xfacd5u); f_000fa180(c); X86_RET(c, 0xfacd5u);
    X86_TICK(c, 16);
    // 0facd5  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xfacd5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0facd8  add esp, 8
    X86_AT(c, 0xfacd8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0facdb  cmp word ptr [0xd4a48], 0
    X86_AT(c, 0xfacdbu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xD4A48u))), 0x0u, 0, 2);
    // 0face3  je 0xfad1b
    X86_AT(c, 0xface3u);
    if (x86_cc(c, 4)) { goto L_fad1b; }
    X86_TICK(c, 7);
    // 0face5  call 0xfaa94
    X86_AT(c, 0xface5u);
    push32(c, 0xfaceau); f_000faa94(c); X86_RET(c, 0xfaceau);
    X86_TICK(c, 7);
    // 0facea  call 0xfaa14
    X86_AT(c, 0xfaceau);
    push32(c, 0xfacefu); f_000faa14(c); X86_RET(c, 0xfacefu);
    X86_TICK(c, 7);
    // 0facef  call 0xe8a0c
    X86_AT(c, 0xfacefu);
    push32(c, 0xfacf4u); f_000e8a0c(c); X86_RET(c, 0xfacf4u);
    X86_TICK(c, 7);
    // 0facf4  call 0xfc774
    X86_AT(c, 0xfacf4u);
    push32(c, 0xfacf9u); f_000fc774(c); X86_RET(c, 0xfacf9u);
    X86_TICK(c, 25);
    // 0facf9  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xfacf9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0facfe  lea edx, [eax + eax*4]
    X86_AT(c, 0xfacfeu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0fad01  lea edx, [eax + edx*2]
    X86_AT(c, 0xfad01u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0fad04  shl edx, 5
    X86_AT(c, 0xfad04u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0fad07  sub edx, eax
    X86_AT(c, 0xfad07u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fad09  cmp dword ptr [edx + 0xcde81], 0
    X86_AT(c, 0xfad09u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE81u))), 0x0u, 0, 4);
    // 0fad10  jg 0xfad22
    X86_AT(c, 0xfad10u);
    if (x86_cc(c, 15)) { goto L_fad22; }
L_fad12:
    X86_TICK(c, 2);
    // 0fad12  mov word ptr [0xcde48], 0
    X86_AT(c, 0xfad12u);
    wr16((c.sbase[3] + (uint32_t)(0xCDE48u)), 0x0u);
L_fad1b:
    X86_TICK(c, 9);
    // 0fad1b  mov eax, 0xffffffff
    X86_AT(c, 0xfad1bu);
    c.r[0] = 0xFFFFFFFFu;
    // 0fad20  jmp 0xfad4f
    X86_AT(c, 0xfad20u);
    goto L_fad4f;
L_fad22:
    X86_TICK(c, 7);
    // 0fad22  call 0xe8a0c
    X86_AT(c, 0xfad22u);
    push32(c, 0xfad27u); f_000e8a0c(c); X86_RET(c, 0xfad27u);
    X86_TICK(c, 12);
    // 0fad27  cmp dword ptr [0xd6e60], 0
    X86_AT(c, 0xfad27u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD6E60u))), 0x0u, 0, 4);
    // 0fad2e  jne 0xfad4d
    X86_AT(c, 0xfad2eu);
    if (x86_cc(c, 5)) { goto L_fad4d; }
    X86_TICK(c, 9);
    // 0fad30  push 7
    X86_AT(c, 0xfad30u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fad32  call 0xe693c
    X86_AT(c, 0xfad32u);
    push32(c, 0xfad37u); f_000e693c(c); X86_RET(c, 0xfad37u);
    X86_TICK(c, 11);
    // 0fad37  push 0xb280
    X86_AT(c, 0xfad37u);
    { uint32_t v = 0xB280u; push32(c, v); }
    // 0fad3c  push 7
    X86_AT(c, 0xfad3cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fad3e  call 0xe5654
    X86_AT(c, 0xfad3eu);
    push32(c, 0xfad43u); f_000e5654(c); X86_RET(c, 0xfad43u);
    X86_TICK(c, 9);
    // 0fad43  push 7
    X86_AT(c, 0xfad43u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fad45  call 0xe6c68
    X86_AT(c, 0xfad45u);
    push32(c, 0xfad4au); f_000e6c68(c); X86_RET(c, 0xfad4au);
    X86_TICK(c, 2);
    // 0fad4a  add esp, 0x10
    X86_AT(c, 0xfad4au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_fad4d:
    X86_TICK(c, 2);
    // 0fad4d  sub eax, eax
    X86_AT(c, 0xfad4du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_fad4f:
    X86_TICK(c, 16);
    // 0fad4f  leave 
    X86_AT(c, 0xfad4fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fad50  ret 
    X86_AT(c, 0xfad50u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfac9cu, "ran off the end of a function");
}
void f_000fad54(X86Cpu& c) {
    X86_TICK(c, 42);
    // 0fad54  push ebp
    X86_AT(c, 0xfad54u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0fad55  mov ebp, esp
    X86_AT(c, 0xfad55u);
    c.r[5] = c.r[4];
    // 0fad57  push ebx
    X86_AT(c, 0xfad57u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fad58  push esi
    X86_AT(c, 0xfad58u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fad59  push edi
    X86_AT(c, 0xfad59u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fad5a  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xfad5au);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0fad5d  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xfad5du);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0fad60  mov eax, edi
    X86_AT(c, 0xfad60u);
    c.r[0] = c.r[7];
    // 0fad62  shl eax, 8
    X86_AT(c, 0xfad62u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0fad65  mov edx, esi
    X86_AT(c, 0xfad65u);
    c.r[2] = c.r[6];
    // 0fad67  shl edx, 4
    X86_AT(c, 0xfad67u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fad6a  add edx, eax
    X86_AT(c, 0xfad6au);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fad6c  cmp dword ptr [edx + 0xd4a78], 0xffffffff
    X86_AT(c, 0xfad6cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A78u))), 0xFFFFFFFFu, 0, 4);
    // 0fad73  je 0xfad9c
    X86_AT(c, 0xfad73u);
    if (x86_cc(c, 4)) { goto L_fad9c; }
    X86_TICK(c, 9);
    // 0fad75  push 0
    X86_AT(c, 0xfad75u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0fad77  call 0xe1944
    X86_AT(c, 0xfad77u);
    push32(c, 0xfad7cu); f_000e1944(c); X86_RET(c, 0xfad7cu);
    X86_TICK(c, 11);
    // 0fad7c  push 0xb2a0
    X86_AT(c, 0xfad7cu);
    { uint32_t v = 0xB2A0u; push32(c, v); }
    // 0fad81  push 7
    X86_AT(c, 0xfad81u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fad83  call 0xe5654
    X86_AT(c, 0xfad83u);
    push32(c, 0xfad88u); f_000e5654(c); X86_RET(c, 0xfad88u);
    X86_TICK(c, 9);
    // 0fad88  push 7
    X86_AT(c, 0xfad88u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fad8a  call 0xe6c68
    X86_AT(c, 0xfad8au);
    push32(c, 0xfad8fu); f_000e6c68(c); X86_RET(c, 0xfad8fu);
    X86_TICK(c, 11);
    // 0fad8f  mov eax, 0xffffffff
    X86_AT(c, 0xfad8fu);
    c.r[0] = 0xFFFFFFFFu;
    // 0fad94  add esp, 0x10
    X86_AT(c, 0xfad94u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0fad97  jmp 0xfaea4
    X86_AT(c, 0xfad97u);
    goto L_faea4;
L_fad9c:
    X86_TICK(c, 25);
    // 0fad9c  mov eax, edi
    X86_AT(c, 0xfad9cu);
    c.r[0] = c.r[7];
    // 0fad9e  shl eax, 8
    X86_AT(c, 0xfad9eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0fada1  mov edx, esi
    X86_AT(c, 0xfada1u);
    c.r[2] = c.r[6];
    // 0fada3  shl edx, 4
    X86_AT(c, 0xfada3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fada6  add edx, eax
    X86_AT(c, 0xfada6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fada8  mov ebx, dword ptr [edx + 0xd4a74]
    X86_AT(c, 0xfada8u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A74u)));
    // 0fadae  mov edx, ebx
    X86_AT(c, 0xfadaeu);
    c.r[2] = c.r[3];
    // 0fadb0  cmp edx, 1
    X86_AT(c, 0xfadb0u);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0fadb3  je 0xfaddd
    X86_AT(c, 0xfadb3u);
    if (x86_cc(c, 4)) { goto L_faddd; }
    X86_TICK(c, 7);
    // 0fadb5  cmp edx, 2
    X86_AT(c, 0xfadb5u);
    (void)x86_sub(c, c.r[2], 0x2u, 0, 4);
    // 0fadb8  je 0xfadc1
    X86_AT(c, 0xfadb8u);
    if (x86_cc(c, 4)) { goto L_fadc1; }
    X86_TICK(c, 7);
    // 0fadba  cmp edx, 3
    X86_AT(c, 0xfadbau);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0fadbd  je 0xfadcf
    X86_AT(c, 0xfadbdu);
    if (x86_cc(c, 4)) { goto L_fadcf; }
    X86_TICK(c, 7);
    // 0fadbf  jmp 0xfadfa
    X86_AT(c, 0xfadbfu);
    goto L_fadfa;
L_fadc1:
    X86_TICK(c, 9);
    // 0fadc1  push 0
    X86_AT(c, 0xfadc1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0fadc3  call 0xe1944
    X86_AT(c, 0xfadc3u);
    push32(c, 0xfadc8u); f_000e1944(c); X86_RET(c, 0xfadc8u);
    X86_TICK(c, 9);
    // 0fadc8  push 0xb2e4
    X86_AT(c, 0xfadc8u);
    { uint32_t v = 0xB2E4u; push32(c, v); }
    // 0fadcd  jmp 0xfade9
    X86_AT(c, 0xfadcdu);
    goto L_fade9;
L_fadcf:
    X86_TICK(c, 9);
    // 0fadcf  push 9
    X86_AT(c, 0xfadcfu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0fadd1  call 0xe1944
    X86_AT(c, 0xfadd1u);
    push32(c, 0xfadd6u); f_000e1944(c); X86_RET(c, 0xfadd6u);
    X86_TICK(c, 9);
    // 0fadd6  push 0xb324
    X86_AT(c, 0xfadd6u);
    { uint32_t v = 0xB324u; push32(c, v); }
    // 0faddb  jmp 0xfade9
    X86_AT(c, 0xfaddbu);
    goto L_fade9;
L_faddd:
    X86_TICK(c, 9);
    // 0faddd  push 9
    X86_AT(c, 0xfadddu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0faddf  call 0xe1944
    X86_AT(c, 0xfaddfu);
    push32(c, 0xfade4u); f_000e1944(c); X86_RET(c, 0xfade4u);
    X86_TICK(c, 2);
    // 0fade4  push 0xb37c
    X86_AT(c, 0xfade4u);
    { uint32_t v = 0xB37Cu; push32(c, v); }
L_fade9:
    X86_TICK(c, 9);
    // 0fade9  push 7
    X86_AT(c, 0xfade9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fadeb  call 0xe5654
    X86_AT(c, 0xfadebu);
    push32(c, 0xfadf0u); f_000e5654(c); X86_RET(c, 0xfadf0u);
    X86_TICK(c, 9);
    // 0fadf0  push 7
    X86_AT(c, 0xfadf0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fadf2  call 0xe6c68
    X86_AT(c, 0xfadf2u);
    push32(c, 0xfadf7u); f_000e6c68(c); X86_RET(c, 0xfadf7u);
    X86_TICK(c, 2);
    // 0fadf7  add esp, 0x10
    X86_AT(c, 0xfadf7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_fadfa:
    X86_TICK(c, 7);
    // 0fadfa  cmp ebx, 2
    X86_AT(c, 0xfadfau);
    (void)x86_sub(c, c.r[3], 0x2u, 0, 4);
    // 0fadfd  jne 0xfae09
    X86_AT(c, 0xfadfdu);
    if (x86_cc(c, 5)) { goto L_fae09; }
    X86_TICK(c, 9);
    // 0fadff  mov eax, 0xffffffff
    X86_AT(c, 0xfadffu);
    c.r[0] = 0xFFFFFFFFu;
    // 0fae04  jmp 0xfaea4
    X86_AT(c, 0xfae04u);
    goto L_faea4;
L_fae09:
    X86_TICK(c, 9);
    // 0fae09  push 0xff
    X86_AT(c, 0xfae09u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0fae0e  call 0xe1a7c
    X86_AT(c, 0xfae0eu);
    push32(c, 0xfae13u); f_000e1a7c(c); X86_RET(c, 0xfae13u);
    X86_TICK(c, 9);
    // 0fae13  add esp, 4
    X86_AT(c, 0xfae13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0fae16  dec eax
    X86_AT(c, 0xfae16u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0fae17  jge 0xfaea2
    X86_AT(c, 0xfae17u);
    if (x86_cc(c, 13)) { goto L_faea2; }
    X86_TICK(c, 9);
    // 0fae1d  push 8
    X86_AT(c, 0xfae1du);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0fae1f  call 0xe1944
    X86_AT(c, 0xfae1fu);
    push32(c, 0xfae24u); f_000e1944(c); X86_RET(c, 0xfae24u);
    X86_TICK(c, 11);
    // 0fae24  push 0xb3a8
    X86_AT(c, 0xfae24u);
    { uint32_t v = 0xB3A8u; push32(c, v); }
    // 0fae29  push 7
    X86_AT(c, 0xfae29u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fae2b  call 0xe5654
    X86_AT(c, 0xfae2bu);
    push32(c, 0xfae30u); f_000e5654(c); X86_RET(c, 0xfae30u);
    X86_TICK(c, 9);
    // 0fae30  push 7
    X86_AT(c, 0xfae30u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fae32  call 0xe6c68
    X86_AT(c, 0xfae32u);
    push32(c, 0xfae37u); f_000e6c68(c); X86_RET(c, 0xfae37u);
    X86_TICK(c, 30);
    // 0fae37  sub eax, eax
    X86_AT(c, 0xfae37u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fae39  mov dword ptr [0xd6e60], eax
    X86_AT(c, 0xfae39u);
    wr32((c.sbase[3] + (uint32_t)(0xD6E60u)), c.r[0]);
    // 0fae3e  mov edx, dword ptr [0xceca0]
    X86_AT(c, 0xfae3eu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0fae44  lea ecx, [edx + edx*4]
    X86_AT(c, 0xfae44u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0fae47  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xfae47u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0fae4a  shl ecx, 5
    X86_AT(c, 0xfae4au);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0fae4d  sub ecx, edx
    X86_AT(c, 0xfae4du);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0fae4f  add esp, 0x10
    X86_AT(c, 0xfae4fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0fae52  cmp eax, dword ptr [ecx + 0xcde9d]
    X86_AT(c, 0xfae52u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE9Du))), 0, 4);
    // 0fae58  jge 0xfae85
    X86_AT(c, 0xfae58u);
    if (x86_cc(c, 13)) { goto L_fae85; }
    X86_TICK(c, 11);
    // 0fae5a  push 0xb3dc
    X86_AT(c, 0xfae5au);
    { uint32_t v = 0xB3DCu; push32(c, v); }
    // 0fae5f  push 7
    X86_AT(c, 0xfae5fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fae61  call 0xe5654
    X86_AT(c, 0xfae61u);
    push32(c, 0xfae66u); f_000e5654(c); X86_RET(c, 0xfae66u);
    X86_TICK(c, 9);
    // 0fae66  push 7
    X86_AT(c, 0xfae66u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fae68  call 0xe6c68
    X86_AT(c, 0xfae68u);
    push32(c, 0xfae6du); f_000e6c68(c); X86_RET(c, 0xfae6du);
    X86_TICK(c, 26);
    // 0fae6d  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xfae6du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0fae72  lea edx, [eax + eax*4]
    X86_AT(c, 0xfae72u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0fae75  lea edx, [eax + edx*2]
    X86_AT(c, 0xfae75u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0fae78  shl edx, 5
    X86_AT(c, 0xfae78u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0fae7b  sub edx, eax
    X86_AT(c, 0xfae7bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fae7d  dec dword ptr [edx + 0xcde9d]
    X86_AT(c, 0xfae7du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE9Du)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0fae83  jmp 0xfae9f
    X86_AT(c, 0xfae83u);
    goto L_fae9f;
L_fae85:
    X86_TICK(c, 9);
    // 0fae85  push 2
    X86_AT(c, 0xfae85u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0fae87  call 0xe9740
    X86_AT(c, 0xfae87u);
    push32(c, 0xfae8cu); f_000e9740(c); X86_RET(c, 0xfae8cu);
    X86_TICK(c, 9);
    // 0fae8c  push 8
    X86_AT(c, 0xfae8cu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0fae8e  call 0xe1944
    X86_AT(c, 0xfae8eu);
    push32(c, 0xfae93u); f_000e1944(c); X86_RET(c, 0xfae93u);
    X86_TICK(c, 9);
    // 0fae93  push 0x64
    X86_AT(c, 0xfae93u);
    { uint32_t v = 0x64u; push32(c, v); }
    // 0fae95  call 0xeff44
    X86_AT(c, 0xfae95u);
    push32(c, 0xfae9au); f_000eff44(c); X86_RET(c, 0xfae9au);
    X86_TICK(c, 7);
    // 0fae9a  call 0xe9010
    X86_AT(c, 0xfae9au);
    push32(c, 0xfae9fu); f_000e9010(c); X86_RET(c, 0xfae9fu);
L_fae9f:
    X86_TICK(c, 2);
    // 0fae9f  add esp, 0xc
    X86_AT(c, 0xfae9fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_faea2:
    X86_TICK(c, 2);
    // 0faea2  sub eax, eax
    X86_AT(c, 0xfaea2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_faea4:
    X86_TICK(c, 28);
    // 0faea4  pop edi
    X86_AT(c, 0xfaea4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0faea5  pop esi
    X86_AT(c, 0xfaea5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0faea6  pop ebx
    X86_AT(c, 0xfaea6u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0faea7  leave 
    X86_AT(c, 0xfaea7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0faea8  ret 
    X86_AT(c, 0xfaea8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfad54u, "ran off the end of a function");
}
void f_000faea4(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0faea4  pop edi
    X86_AT(c, 0xfaea4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0faea5  pop esi
    X86_AT(c, 0xfaea5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0faea6  pop ebx
    X86_AT(c, 0xfaea6u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0faea7  leave 
    X86_AT(c, 0xfaea7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0faea8  ret 
    X86_AT(c, 0xfaea8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfaea4u, "ran off the end of a function");
}
void f_000faeac(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0faeac  push ebp
    X86_AT(c, 0xfaeacu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0faead  mov ebp, esp
    X86_AT(c, 0xfaeadu);
    c.r[5] = c.r[4];
    // 0faeaf  push eax
    X86_AT(c, 0xfaeafu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0faeb0  push ebx
    X86_AT(c, 0xfaeb0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0faeb1  push esi
    X86_AT(c, 0xfaeb1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0faeb2  push 7
    X86_AT(c, 0xfaeb2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0faeb4  call 0xe7618
    X86_AT(c, 0xfaeb4u);
    push32(c, 0xfaeb9u); f_000e7618(c); X86_RET(c, 0xfaeb9u);
    X86_TICK(c, 9);
    // 0faeb9  push 7
    X86_AT(c, 0xfaeb9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0faebb  call 0xe693c
    X86_AT(c, 0xfaebbu);
    push32(c, 0xfaec0u); f_000e693c(c); X86_RET(c, 0xfaec0u);
    X86_TICK(c, 29);
    // 0faec0  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xfaec0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0faec5  lea edx, [eax + eax*4]
    X86_AT(c, 0xfaec5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0faec8  lea edx, [eax + edx*2]
    X86_AT(c, 0xfaec8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0faecb  shl edx, 5
    X86_AT(c, 0xfaecbu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0faece  sub edx, eax
    X86_AT(c, 0xfaeceu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0faed0  mov eax, dword ptr [0xd4a4c]
    X86_AT(c, 0xfaed0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD4A4Cu)));
    // 0faed5  mov dword ptr [edx + 0xcdf63], eax
    X86_AT(c, 0xfaed5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF63u)), c.r[0]);
    // 0faedb  mov eax, dword ptr [0xd4a50]
    X86_AT(c, 0xfaedbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD4A50u)));
    // 0faee0  mov dword ptr [edx + 0xcdf67], eax
    X86_AT(c, 0xfaee0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF67u)), c.r[0]);
    // 0faee6  mov byte ptr [ebp - 1], 0xff
    X86_AT(c, 0xfaee6u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0xFFu);
    // 0faeea  add esp, 8
    X86_AT(c, 0xfaeeau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_faeed:
    X86_TICK(c, 9);
    // 0faeed  push 7
    X86_AT(c, 0xfaeedu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0faeef  call 0xe4748
    X86_AT(c, 0xfaeefu);
    push32(c, 0xfaef4u); f_000e4748(c); X86_RET(c, 0xfaef4u);
    X86_TICK(c, 12);
    // 0faef4  xchg ebx, eax
    X86_AT(c, 0xfaef4u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0faef5  add esp, 4
    X86_AT(c, 0xfaef5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0faef8  and bl, bl
    X86_AT(c, 0xfaef8u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0faefa  je 0xfaeed
    X86_AT(c, 0xfaefau);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xfaeedu); goto L_faeed; }
    X86_TICK(c, 14);
    // 0faefc  mov eax, 0xd4a48
    X86_AT(c, 0xfaefcu);
    c.r[0] = 0xD4A48u;
    // 0faf01  cmp dword ptr [eax + 0x28], 0
    X86_AT(c, 0xfaf01u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x28u))), 0x0u, 0, 4);
    // 0faf05  jle 0xfaf31
    X86_AT(c, 0xfaf05u);
    if (x86_cc(c, 14)) { goto L_faf31; }
    X86_TICK(c, 11);
    // 0faf07  push 3
    X86_AT(c, 0xfaf07u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0faf09  mov esi, eax
    X86_AT(c, 0xfaf09u);
    c.r[6] = c.r[0];
    // 0faf0b  call 0xe1944
    X86_AT(c, 0xfaf0bu);
    push32(c, 0xfaf10u); f_000e1944(c); X86_RET(c, 0xfaf10u);
    X86_TICK(c, 11);
    // 0faf10  push 0xb420
    X86_AT(c, 0xfaf10u);
    { uint32_t v = 0xB420u; push32(c, v); }
    // 0faf15  push 7
    X86_AT(c, 0xfaf15u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0faf17  call 0xe5654
    X86_AT(c, 0xfaf17u);
    push32(c, 0xfaf1cu); f_000e5654(c); X86_RET(c, 0xfaf1cu);
    X86_TICK(c, 9);
    // 0faf1c  push 7
    X86_AT(c, 0xfaf1cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0faf1e  call 0xe6c68
    X86_AT(c, 0xfaf1eu);
    push32(c, 0xfaf23u); f_000e6c68(c); X86_RET(c, 0xfaf23u);
    X86_TICK(c, 19);
    // 0faf23  dec dword ptr [esi + 0x28]
    X86_AT(c, 0xfaf23u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0x28u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0faf26  mov al, byte ptr [ebp - 1]
    X86_AT(c, 0xfaf26u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))));
    // 0faf29  add esp, 0x10
    X86_AT(c, 0xfaf29u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0faf2c  jmp 0xfb078
    X86_AT(c, 0xfaf2cu);
    goto L_fb078;
L_faf31:
    X86_TICK(c, 10);
    // 0faf31  movzx edx, bl
    X86_AT(c, 0xfaf31u);
    c.r[2] = g8(c, 3);
    // 0faf34  cmp edx, 0x47
    X86_AT(c, 0xfaf34u);
    (void)x86_sub(c, c.r[2], 0x47u, 0, 4);
    // 0faf37  ja 0xfaf8b
    X86_AT(c, 0xfaf37u);
    if (x86_cc(c, 7)) { goto L_faf8b; }
    X86_TICK(c, 7);
    // 0faf39  cmp edx, 0x47
    X86_AT(c, 0xfaf39u);
    (void)x86_sub(c, c.r[2], 0x47u, 0, 4);
    // 0faf3c  je 0xfb023
    X86_AT(c, 0xfaf3cu);
    if (x86_cc(c, 4)) { goto L_fb023; }
    X86_TICK(c, 7);
    // 0faf42  cmp edx, 0x44
    X86_AT(c, 0xfaf42u);
    (void)x86_sub(c, c.r[2], 0x44u, 0, 4);
    // 0faf45  je 0xfb069
    X86_AT(c, 0xfaf45u);
    if (x86_cc(c, 4)) { goto L_fb069; }
    X86_TICK(c, 7);
    // 0faf4b  cmp edx, 0x43
    X86_AT(c, 0xfaf4bu);
    (void)x86_sub(c, c.r[2], 0x43u, 0, 4);
    // 0faf4e  je 0xfb01c
    X86_AT(c, 0xfaf4eu);
    if (x86_cc(c, 4)) { goto L_fb01c; }
    X86_TICK(c, 7);
    // 0faf54  cmp edx, 0x41
    X86_AT(c, 0xfaf54u);
    (void)x86_sub(c, c.r[2], 0x41u, 0, 4);
    // 0faf57  je 0xfb015
    X86_AT(c, 0xfaf57u);
    if (x86_cc(c, 4)) { goto L_fb015; }
    X86_TICK(c, 9);
    // 0faf5d  dec edx
    X86_AT(c, 0xfaf5du);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0faf5e  cmp edx, 6
    X86_AT(c, 0xfaf5eu);
    (void)x86_sub(c, c.r[2], 0x6u, 0, 4);
    // 0faf61  ja 0xfb070
    X86_AT(c, 0xfaf61u);
    if (x86_cc(c, 7)) { goto L_fb070; }
    X86_TICK(c, 7);
    // 0faf67  jmp dword ptr cs:[edx*4 + 0xfaf6f]
    X86_AT(c, 0xfaf67u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xFAF6Fu)));
      switch (t) {
      case 0xfafe7u: goto L_fafe7;
      case 0xfaff0u: goto L_faff0;
      case 0xfaff9u: goto L_faff9;
      case 0xfb002u: goto L_fb002;
      case 0xfb00bu: goto L_fb00b;
      case 0xfb070u: goto L_fb070;
      default: x86_jump(c, t); return; } }
L_faf8b:
    X86_TICK(c, 9);
    // 0faf8b  sub edx, 0x49
    X86_AT(c, 0xfaf8bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x49u, 0, 4); }
    // 0faf8e  cmp edx, 0x11
    X86_AT(c, 0xfaf8eu);
    (void)x86_sub(c, c.r[2], 0x11u, 0, 4);
    // 0faf91  ja 0xfb070
    X86_AT(c, 0xfaf91u);
    if (x86_cc(c, 7)) { goto L_fb070; }
    X86_TICK(c, 7);
    // 0faf97  jmp dword ptr cs:[edx*4 + 0xfaf9f]
    X86_AT(c, 0xfaf97u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xFAF9Fu)));
      switch (t) {
      case 0xfb00bu: goto L_fb00b;
      case 0xfb02au: goto L_fb02a;
      case 0xfb031u: goto L_fb031;
      case 0xfb038u: goto L_fb038;
      case 0xfb03fu: goto L_fb03f;
      case 0xfb046u: goto L_fb046;
      case 0xfb04du: goto L_fb04d;
      case 0xfb054u: goto L_fb054;
      case 0xfb05bu: goto L_fb05b;
      case 0xfb062u: goto L_fb062;
      case 0xfb070u: goto L_fb070;
      default: x86_jump(c, t); return; } }
L_fafe7:
    X86_TICK(c, 9);
    // 0fafe7  mov byte ptr [ebp - 1], 2
    X86_AT(c, 0xfafe7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x2u);
    // 0fafeb  jmp 0xfb075
    X86_AT(c, 0xfafebu);
    goto L_fb075;
L_faff0:
    X86_TICK(c, 9);
    // 0faff0  mov byte ptr [ebp - 1], 1
    X86_AT(c, 0xfaff0u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x1u);
    // 0faff4  jmp 0xfb075
    X86_AT(c, 0xfaff4u);
    goto L_fb075;
L_faff9:
    X86_TICK(c, 9);
    // 0faff9  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0xfaff9u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
    // 0faffd  jmp 0xfb075
    X86_AT(c, 0xfaffdu);
    goto L_fb075;
L_fb002:
    X86_TICK(c, 9);
    // 0fb002  mov byte ptr [ebp - 1], 3
    X86_AT(c, 0xfb002u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x3u);
    // 0fb006  jmp 0xfb075
    X86_AT(c, 0xfb006u);
    goto L_fb075;
L_fb00b:
    X86_TICK(c, 7);
    // 0fb00b  call 0xf326c
    X86_AT(c, 0xfb00bu);
    push32(c, 0xfb010u); f_000f326c(c); X86_RET(c, 0xfb010u);
    X86_TICK(c, 7);
    // 0fb010  jmp 0xfb075
    X86_AT(c, 0xfb010u);
    goto L_fb075;
L_fb015:
    X86_TICK(c, 7);
    // 0fb015  call 0xfb0a8
    X86_AT(c, 0xfb015u);
    push32(c, 0xfb01au); f_000fb0a8(c); X86_RET(c, 0xfb01au);
    X86_TICK(c, 7);
    // 0fb01a  jmp 0xfb075
    X86_AT(c, 0xfb01au);
    goto L_fb075;
L_fb01c:
    X86_TICK(c, 7);
    // 0fb01c  call 0xf79f0
    X86_AT(c, 0xfb01cu);
    push32(c, 0xfb021u); f_000f79f0(c); X86_RET(c, 0xfb021u);
    X86_TICK(c, 7);
    // 0fb021  jmp 0xfb075
    X86_AT(c, 0xfb021u);
    goto L_fb075;
L_fb023:
    X86_TICK(c, 7);
    // 0fb023  call 0xf21c4
    X86_AT(c, 0xfb023u);
    push32(c, 0xfb028u); f_000f21c4(c); X86_RET(c, 0xfb028u);
    X86_TICK(c, 7);
    // 0fb028  jmp 0xfb075
    X86_AT(c, 0xfb028u);
    goto L_fb075;
L_fb02a:
    X86_TICK(c, 7);
    // 0fb02a  call 0xeeecc
    X86_AT(c, 0xfb02au);
    push32(c, 0xfb02fu); f_000eeecc(c); X86_RET(c, 0xfb02fu);
    X86_TICK(c, 7);
    // 0fb02f  jmp 0xfb075
    X86_AT(c, 0xfb02fu);
    goto L_fb075;
L_fb031:
    X86_TICK(c, 7);
    // 0fb031  call 0xf73ec
    X86_AT(c, 0xfb031u);
    push32(c, 0xfb036u); f_000f73ec(c); X86_RET(c, 0xfb036u);
    X86_TICK(c, 7);
    // 0fb036  jmp 0xfb075
    X86_AT(c, 0xfb036u);
    goto L_fb075;
L_fb038:
    X86_TICK(c, 7);
    // 0fb038  call 0xeef7c
    X86_AT(c, 0xfb038u);
    push32(c, 0xfb03du); f_000eef7c(c); X86_RET(c, 0xfb03du);
    X86_TICK(c, 7);
    // 0fb03d  jmp 0xfb075
    X86_AT(c, 0xfb03du);
    goto L_fb075;
L_fb03f:
    X86_TICK(c, 7);
    // 0fb03f  call 0xf1964
    X86_AT(c, 0xfb03fu);
    push32(c, 0xfb044u); f_000f1964(c); X86_RET(c, 0xfb044u);
    X86_TICK(c, 7);
    // 0fb044  jmp 0xfb075
    X86_AT(c, 0xfb044u);
    goto L_fb075;
L_fb046:
    X86_TICK(c, 7);
    // 0fb046  call 0xf82c4
    X86_AT(c, 0xfb046u);
    push32(c, 0xfb04bu); f_000f82c4(c); X86_RET(c, 0xfb04bu);
    X86_TICK(c, 7);
    // 0fb04b  jmp 0xfb075
    X86_AT(c, 0xfb04bu);
    goto L_fb075;
L_fb04d:
    X86_TICK(c, 7);
    // 0fb04d  call 0xf1b08
    X86_AT(c, 0xfb04du);
    push32(c, 0xfb052u); f_000f1b08(c); X86_RET(c, 0xfb052u);
    X86_TICK(c, 7);
    // 0fb052  jmp 0xfb075
    X86_AT(c, 0xfb052u);
    goto L_fb075;
L_fb054:
    X86_TICK(c, 7);
    // 0fb054  call 0xf0dec
    X86_AT(c, 0xfb054u);
    push32(c, 0xfb059u); f_000f0dec(c); X86_RET(c, 0xfb059u);
    X86_TICK(c, 7);
    // 0fb059  jmp 0xfb075
    X86_AT(c, 0xfb059u);
    goto L_fb075;
L_fb05b:
    X86_TICK(c, 7);
    // 0fb05b  call 0xf8c78
    X86_AT(c, 0xfb05bu);
    push32(c, 0xfb060u); f_000f8c78(c); X86_RET(c, 0xfb060u);
    X86_TICK(c, 7);
    // 0fb060  jmp 0xfb075
    X86_AT(c, 0xfb060u);
    goto L_fb075;
L_fb062:
    X86_TICK(c, 7);
    // 0fb062  call 0xfb664
    X86_AT(c, 0xfb062u);
    push32(c, 0xfb067u); f_000fb664(c); X86_RET(c, 0xfb067u);
    X86_TICK(c, 7);
    // 0fb067  jmp 0xfb075
    X86_AT(c, 0xfb067u);
    goto L_fb075;
L_fb069:
    X86_TICK(c, 7);
    // 0fb069  call 0xfb6f8
    X86_AT(c, 0xfb069u);
    push32(c, 0xfb06eu); f_000fb6f8(c); X86_RET(c, 0xfb06eu);
    X86_TICK(c, 7);
    // 0fb06e  jmp 0xfb075
    X86_AT(c, 0xfb06eu);
    goto L_fb075;
L_fb070:
    X86_TICK(c, 7);
    // 0fb070  call 0xfb07c
    X86_AT(c, 0xfb070u);
    push32(c, 0xfb075u); f_000fb07c(c); X86_RET(c, 0xfb075u);
L_fb075:
    X86_TICK(c, 4);
    // 0fb075  mov al, byte ptr [ebp - 1]
    X86_AT(c, 0xfb075u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))));
L_fb078:
    X86_TICK(c, 24);
    // 0fb078  pop esi
    X86_AT(c, 0xfb078u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fb079  pop ebx
    X86_AT(c, 0xfb079u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fb07a  leave 
    X86_AT(c, 0xfb07au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fb07b  ret 
    X86_AT(c, 0xfb07bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfaeacu, "ran off the end of a function");
}
}
