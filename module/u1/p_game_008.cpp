#include "p_game_funcs.h"
namespace p_game {
void f_000d124c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0d124c  push ebp
    X86_AT(c, 0xd124cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d124d  mov ebp, esp
    X86_AT(c, 0xd124du);
    c.r[5] = c.r[4];
    // 0d124f  push esi
    X86_AT(c, 0xd124fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d1250  push edi
    X86_AT(c, 0xd1250u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d1251  mov eax, dword ptr [0xaae98]
    X86_AT(c, 0xd1251u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAAE98u)));
    // 0d1256  sub eax, 2
    X86_AT(c, 0xd1256u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0d1259  push eax
    X86_AT(c, 0xd1259u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d125a  call 0xd47e4
    X86_AT(c, 0xd125au);
    push32(c, 0xd125fu); x86_call_known(c, 0xd47e4u, f_000d47e4); X86_RET(c, 0xd125fu);
    X86_TICK(c, 17);
    // 0d125f  xchg edi, eax
    X86_AT(c, 0xd125fu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d1260  add esp, 4
    X86_AT(c, 0xd1260u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d1263  cmp byte ptr [ebp + 8], 0x53
    X86_AT(c, 0xd1263u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x53u, 0, 1);
    // 0d1267  jne 0xd12a6
    X86_AT(c, 0xd1267u);
    if (x86_cc(c, 5)) { goto L_d12a6; }
    X86_TICK(c, 9);
    // 0d1269  push 7
    X86_AT(c, 0xd1269u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d126b  call 0xca0a0
    X86_AT(c, 0xd126bu);
    push32(c, 0xd1270u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd1270u);
    X86_TICK(c, 11);
    // 0d1270  push 0x7658
    X86_AT(c, 0xd1270u);
    { uint32_t v = 0x7658u; push32(c, v); }
    // 0d1275  push 7
    X86_AT(c, 0xd1275u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1277  call 0xc8cdc
    X86_AT(c, 0xd1277u);
    push32(c, 0xd127cu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd127cu);
    X86_TICK(c, 9);
    // 0d127c  push 7
    X86_AT(c, 0xd127cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d127e  call 0xca3cc
    X86_AT(c, 0xd127eu);
    push32(c, 0xd1283u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd1283u);
    X86_TICK(c, 9);
    // 0d1283  push 0x768c
    X86_AT(c, 0xd1283u);
    { uint32_t v = 0x768Cu; push32(c, v); }
    // 0d1288  call 0xcc7bc
    X86_AT(c, 0xd1288u);
    push32(c, 0xd128du); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd128du);
    X86_TICK(c, 7);
    // 0d128d  call 0xcf604
    X86_AT(c, 0xd128du);
    push32(c, 0xd1292u); x86_call_known(c, 0xcf604u, f_000cf604); X86_RET(c, 0xd1292u);
    X86_TICK(c, 11);
    // 0d1292  push 0xf
    X86_AT(c, 0xd1292u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d1294  push 0x76bc
    X86_AT(c, 0xd1294u);
    { uint32_t v = 0x76BCu; push32(c, v); }
    // 0d1299  call 0xcc830
    X86_AT(c, 0xd1299u);
    push32(c, 0xd129eu); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd129eu);
    X86_TICK(c, 9);
    // 0d129e  add esp, 0x1c
    X86_AT(c, 0xd129eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d12a1  jmp 0xd13a7
    X86_AT(c, 0xd12a1u);
    goto L_d13a7;
L_d12a6:
    X86_TICK(c, 63);
    // 0d12a6  mov eax, dword ptr [0xb0316]
    X86_AT(c, 0xd12a6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB0316u)));
    // 0d12ab  cdq 
    X86_AT(c, 0xd12abu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d12ac  mov ecx, 0x14
    X86_AT(c, 0xd12acu);
    c.r[1] = 0x14u;
    // 0d12b1  idiv ecx
    X86_AT(c, 0xd12b1u);
    x86_idiv(c, c.r[1], 4, 0xd12b1u);
    // 0d12b3  mov esi, 5
    X86_AT(c, 0xd12b3u);
    c.r[6] = 0x5u;
    // 0d12b8  sub esi, eax
    X86_AT(c, 0xd12b8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d12ba  push 3
    X86_AT(c, 0xd12bau);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d12bc  push 0
    X86_AT(c, 0xd12bcu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d12be  call 0xcc814
    X86_AT(c, 0xd12beu);
    push32(c, 0xd12c3u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd12c3u);
    X86_TICK(c, 11);
    // 0d12c3  push 0x76d8
    X86_AT(c, 0xd12c3u);
    { uint32_t v = 0x76D8u; push32(c, v); }
    // 0d12c8  push 4
    X86_AT(c, 0xd12c8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d12ca  call 0xc8cdc
    X86_AT(c, 0xd12cau);
    push32(c, 0xd12cfu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd12cfu);
    X86_TICK(c, 11);
    // 0d12cf  push 4
    X86_AT(c, 0xd12cfu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d12d1  push 0
    X86_AT(c, 0xd12d1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d12d3  call 0xcc814
    X86_AT(c, 0xd12d3u);
    push32(c, 0xd12d8u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd12d8u);
    X86_TICK(c, 11);
    // 0d12d8  push 0x76f0
    X86_AT(c, 0xd12d8u);
    { uint32_t v = 0x76F0u; push32(c, v); }
    // 0d12dd  push 4
    X86_AT(c, 0xd12ddu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d12df  call 0xc8cdc
    X86_AT(c, 0xd12dfu);
    push32(c, 0xd12e4u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd12e4u);
    X86_TICK(c, 11);
    // 0d12e4  push 5
    X86_AT(c, 0xd12e4u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d12e6  push 0
    X86_AT(c, 0xd12e6u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d12e8  call 0xcc814
    X86_AT(c, 0xd12e8u);
    push32(c, 0xd12edu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd12edu);
    X86_TICK(c, 11);
    // 0d12ed  push 0x772c
    X86_AT(c, 0xd12edu);
    { uint32_t v = 0x772Cu; push32(c, v); }
    // 0d12f2  push 4
    X86_AT(c, 0xd12f2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d12f4  call 0xc8cdc
    X86_AT(c, 0xd12f4u);
    push32(c, 0xd12f9u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd12f9u);
    X86_TICK(c, 13);
    // 0d12f9  push 1
    X86_AT(c, 0xd12f9u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d12fb  push esi
    X86_AT(c, 0xd12fbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d12fc  push 4
    X86_AT(c, 0xd12fcu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d12fe  call 0xc8cb8
    X86_AT(c, 0xd12feu);
    push32(c, 0xd1303u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd1303u);
    X86_TICK(c, 13);
    // 0d1303  add esp, 0x3c
    X86_AT(c, 0xd1303u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d1306  push 0x773c
    X86_AT(c, 0xd1306u);
    { uint32_t v = 0x773Cu; push32(c, v); }
    // 0d130b  push 4
    X86_AT(c, 0xd130bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d130d  call 0xc8cdc
    X86_AT(c, 0xd130du);
    push32(c, 0xd1312u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd1312u);
    X86_TICK(c, 9);
    // 0d1312  push 7
    X86_AT(c, 0xd1312u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1314  call 0xca0a0
    X86_AT(c, 0xd1314u);
    push32(c, 0xd1319u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd1319u);
    X86_TICK(c, 11);
    // 0d1319  push 0xf
    X86_AT(c, 0xd1319u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d131b  push 0x7764
    X86_AT(c, 0xd131bu);
    { uint32_t v = 0x7764u; push32(c, v); }
    // 0d1320  call 0xcc830
    X86_AT(c, 0xd1320u);
    push32(c, 0xd1325u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd1325u);
    X86_TICK(c, 11);
    // 0d1325  push 0xf
    X86_AT(c, 0xd1325u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d1327  push 0x77a0
    X86_AT(c, 0xd1327u);
    { uint32_t v = 0x77A0u; push32(c, v); }
    // 0d132c  call 0xcc830
    X86_AT(c, 0xd132cu);
    push32(c, 0xd1331u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd1331u);
    X86_TICK(c, 11);
    // 0d1331  push 0x18
    X86_AT(c, 0xd1331u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0d1333  push 0xf
    X86_AT(c, 0xd1333u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d1335  call 0xd0038
    X86_AT(c, 0xd1335u);
    push32(c, 0xd133au); x86_call_known(c, 0xd0038u, f_000d0038); X86_RET(c, 0xd133au);
    X86_TICK(c, 36);
    // 0d133a  mov edi, eax
    X86_AT(c, 0xd133au);
    c.r[7] = c.r[0];
    // 0d133c  imul eax, esi
    X86_AT(c, 0xd133cu);
    c.r[0] = x86_imul2(c, c.r[0], c.r[6], 4);
    // 0d133f  xchg esi, eax
    X86_AT(c, 0xd133fu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d1340  add esp, 0x24
    X86_AT(c, 0xd1340u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0d1343  and esi, esi
    X86_AT(c, 0xd1343u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d1345  jge 0xd134e
    X86_AT(c, 0xd1345u);
    if (x86_cc(c, 13)) { goto L_d134e; }
    X86_TICK(c, 6);
    // 0d1347  mov esi, dword ptr [0xb031a]
    X86_AT(c, 0xd1347u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xB031Au)));
    // 0d134d  inc esi
    X86_AT(c, 0xd134du);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_d134e:
    X86_TICK(c, 7);
    // 0d134e  and edi, edi
    X86_AT(c, 0xd134eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0d1350  je 0xd135a
    X86_AT(c, 0xd1350u);
    if (x86_cc(c, 4)) { goto L_d135a; }
    X86_TICK(c, 11);
    // 0d1352  cmp esi, dword ptr [0xb031a]
    X86_AT(c, 0xd1352u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xB031Au))), 0, 4);
    // 0d1358  jle 0xd1378
    X86_AT(c, 0xd1358u);
    if (x86_cc(c, 14)) { goto L_d1378; }
L_d135a:
    X86_TICK(c, 11);
    // 0d135a  push 0xf
    X86_AT(c, 0xd135au);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d135c  push 0x77d0
    X86_AT(c, 0xd135cu);
    { uint32_t v = 0x77D0u; push32(c, v); }
    // 0d1361  call 0xcc830
    X86_AT(c, 0xd1361u);
    push32(c, 0xd1366u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd1366u);
    X86_TICK(c, 13);
    // 0d1366  add esp, 8
    X86_AT(c, 0xd1366u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d1369  cmp esi, dword ptr [0xb031a]
    X86_AT(c, 0xd1369u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xB031Au))), 0, 4);
    // 0d136f  jle 0xd13a7
    X86_AT(c, 0xd136fu);
    if (x86_cc(c, 14)) { goto L_d13a7; }
    X86_TICK(c, 7);
    // 0d1371  call 0xcfffc
    X86_AT(c, 0xd1371u);
    push32(c, 0xd1376u); x86_call_known(c, 0xcfffcu, f_000cfffc); X86_RET(c, 0xd1376u);
    X86_TICK(c, 7);
    // 0d1376  jmp 0xd13a7
    X86_AT(c, 0xd1376u);
    goto L_d13a7;
L_d1378:
    X86_TICK(c, 11);
    // 0d1378  push 0xf
    X86_AT(c, 0xd1378u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d137a  push 0x77f0
    X86_AT(c, 0xd137au);
    { uint32_t v = 0x77F0u; push32(c, v); }
    // 0d137f  call 0xcc830
    X86_AT(c, 0xd137fu);
    push32(c, 0xd1384u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd1384u);
    X86_TICK(c, 14);
    // 0d1384  sub dword ptr [0xb031a], esi
    X86_AT(c, 0xd1384u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB031Au)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[6], 0, 4)); }
    // 0d138a  call 0xcc6cc
    X86_AT(c, 0xd138au);
    push32(c, 0xd138fu); x86_call_known(c, 0xcc6ccu, f_000cc6cc); X86_RET(c, 0xd138fu);
    X86_TICK(c, 18);
    // 0d138f  lea eax, [edi + edi*4]
    X86_AT(c, 0xd138fu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 4);
    // 0d1392  add eax, eax
    X86_AT(c, 0xd1392u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d1394  add dword ptr [0xb0322], eax
    X86_AT(c, 0xd1394u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB0322u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0d139a  call 0xcc66c
    X86_AT(c, 0xd139au);
    push32(c, 0xd139fu); x86_call_known(c, 0xcc66cu, f_000cc66c); X86_RET(c, 0xd139fu);
    X86_TICK(c, 7);
    // 0d139f  call 0xcffc4
    X86_AT(c, 0xd139fu);
    push32(c, 0xd13a4u); x86_call_known(c, 0xcffc4u, f_000cffc4); X86_RET(c, 0xd13a4u);
    X86_TICK(c, 2);
    // 0d13a4  add esp, 8
    X86_AT(c, 0xd13a4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d13a7:
    X86_TICK(c, 9);
    // 0d13a7  push 0x7818
    X86_AT(c, 0xd13a7u);
    { uint32_t v = 0x7818u; push32(c, v); }
    // 0d13ac  call 0xcc7bc
    X86_AT(c, 0xd13acu);
    push32(c, 0xd13b1u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd13b1u);
    X86_TICK(c, 26);
    // 0d13b1  add esp, 4
    X86_AT(c, 0xd13b1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d13b4  pop edi
    X86_AT(c, 0xd13b4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d13b5  pop esi
    X86_AT(c, 0xd13b5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d13b6  leave 
    X86_AT(c, 0xd13b6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d13b7  ret 
    X86_AT(c, 0xd13b7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd124cu, "ran off the end of a function");
}
void f_000d13b8(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0d13b8  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0xd13b8u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0d13bc  inc dword ptr [ecx*4 + 0xb03fe]
    X86_AT(c, 0xd13bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[1] * 4 + 0xB03FEu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d13c3  cmp ecx, 2
    X86_AT(c, 0xd13c3u);
    (void)x86_sub(c, c.r[1], 0x2u, 0, 4);
    // 0d13c6  jg 0xd13d9
    X86_AT(c, 0xd13c6u);
    if (x86_cc(c, 15)) { goto L_d13d9; }
    X86_TICK(c, 11);
    // 0d13c8  mov eax, dword ptr [0xaa2b8]
    X86_AT(c, 0xd13c8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAA2B8u)));
    // 0d13cd  and eax, eax
    X86_AT(c, 0xd13cdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d13cf  je 0xd13d9
    X86_AT(c, 0xd13cfu);
    if (x86_cc(c, 4)) { goto L_d13d9; }
    X86_TICK(c, 13);
    // 0d13d1  dec dword ptr [0xaa2b8]
    X86_AT(c, 0xd13d1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xAA2B8u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d13d7  jmp 0xd13f1
    X86_AT(c, 0xd13d7u);
    goto L_d13f1;
L_d13d9:
    X86_TICK(c, 7);
    // 0d13d9  cmp ecx, 4
    X86_AT(c, 0xd13d9u);
    (void)x86_sub(c, c.r[1], 0x4u, 0, 4);
    // 0d13dc  je 0xd13e3
    X86_AT(c, 0xd13dcu);
    if (x86_cc(c, 4)) { goto L_d13e3; }
    X86_TICK(c, 7);
    // 0d13de  cmp ecx, 3
    X86_AT(c, 0xd13deu);
    (void)x86_sub(c, c.r[1], 0x3u, 0, 4);
    // 0d13e1  jne 0xd13eb
    X86_AT(c, 0xd13e1u);
    if (x86_cc(c, 5)) { goto L_d13eb; }
L_d13e3:
    X86_TICK(c, 13);
    // 0d13e3  dec dword ptr [0xaa2b0]
    X86_AT(c, 0xd13e3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xAA2B0u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d13e9  jmp 0xd13f1
    X86_AT(c, 0xd13e9u);
    goto L_d13f1;
L_d13eb:
    X86_TICK(c, 6);
    // 0d13eb  dec dword ptr [0xaa2b4]
    X86_AT(c, 0xd13ebu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xAA2B4u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_d13f1:
    X86_TICK(c, 10);
    // 0d13f1  ret 
    X86_AT(c, 0xd13f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd13b8u, "ran off the end of a function");
}
void f_000d13f4(X86Cpu& c) {
    X86_TICK(c, 136);
    // 0d13f4  push ebp
    X86_AT(c, 0xd13f4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d13f5  mov ebp, esp
    X86_AT(c, 0xd13f5u);
    c.r[5] = c.r[4];
    // 0d13f7  push edi
    X86_AT(c, 0xd13f7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d13f8  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd13f8u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d13fb  mov eax, 0xc8
    X86_AT(c, 0xd13fbu);
    c.r[0] = 0xC8u;
    // 0d1400  sub eax, dword ptr [0xb0316]
    X86_AT(c, 0xd1400u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0xB0316u))), 0, 4); }
    // 0d1406  cdq 
    X86_AT(c, 0xd1406u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d1407  mov ecx, 5
    X86_AT(c, 0xd1407u);
    c.r[1] = 0x5u;
    // 0d140c  idiv ecx
    X86_AT(c, 0xd140cu);
    x86_idiv(c, c.r[1], 4, 0xd140cu);
    // 0d140e  xchg ecx, eax
    X86_AT(c, 0xd140eu);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 0d140f  mov eax, edi
    X86_AT(c, 0xd140fu);
    c.r[0] = c.r[7];
    // 0d1411  imul eax, ecx
    X86_AT(c, 0xd1411u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 0d1414  xchg ecx, eax
    X86_AT(c, 0xd1414u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 0d1415  mov eax, edi
    X86_AT(c, 0xd1415u);
    c.r[0] = c.r[7];
    // 0d1417  imul eax, ecx
    X86_AT(c, 0xd1417u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 0d141a  pop edi
    X86_AT(c, 0xd141au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d141b  leave 
    X86_AT(c, 0xd141bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d141c  ret 
    X86_AT(c, 0xd141cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd13f4u, "ran off the end of a function");
}
void f_000d1420(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0d1420  push ebp
    X86_AT(c, 0xd1420u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d1421  mov ebp, esp
    X86_AT(c, 0xd1421u);
    c.r[5] = c.r[4];
    // 0d1423  push ebx
    X86_AT(c, 0xd1423u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d1424  push esi
    X86_AT(c, 0xd1424u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d1425  push edi
    X86_AT(c, 0xd1425u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d1426  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd1426u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d1429  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd1429u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d142c  mov ebx, 4
    X86_AT(c, 0xd142cu);
    c.r[3] = 0x4u;
    // 0d1431  push esi
    X86_AT(c, 0xd1431u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d1432  push 0
    X86_AT(c, 0xd1432u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1434  call 0xcc814
    X86_AT(c, 0xd1434u);
    push32(c, 0xd1439u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd1439u);
    X86_TICK(c, 16);
    // 0d1439  push 0xf
    X86_AT(c, 0xd1439u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d143b  push dword ptr [ebp + 0x10]
    X86_AT(c, 0xd143bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 0d143e  push ebx
    X86_AT(c, 0xd143eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d143f  call 0xcc7dc
    X86_AT(c, 0xd143fu);
    push32(c, 0xd1444u); x86_call_known(c, 0xcc7dcu, f_000cc7dc); X86_RET(c, 0xd1444u);
    X86_TICK(c, 11);
    // 0d1444  push 0x781c
    X86_AT(c, 0xd1444u);
    { uint32_t v = 0x781Cu; push32(c, v); }
    // 0d1449  push ebx
    X86_AT(c, 0xd1449u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d144a  call 0xc8cdc
    X86_AT(c, 0xd144au);
    push32(c, 0xd144fu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd144fu);
    X86_TICK(c, 14);
    // 0d144f  push dword ptr [edi*4 + 0xab0d8]
    X86_AT(c, 0xd144fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xAB0D8u))); push32(c, v); }
    // 0d1456  push ebx
    X86_AT(c, 0xd1456u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d1457  call 0xc8cdc
    X86_AT(c, 0xd1457u);
    push32(c, 0xd145cu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd145cu);
    X86_TICK(c, 11);
    // 0d145c  push 0x7820
    X86_AT(c, 0xd145cu);
    { uint32_t v = 0x7820u; push32(c, v); }
    // 0d1461  push ebx
    X86_AT(c, 0xd1461u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d1462  call 0xc8cdc
    X86_AT(c, 0xd1462u);
    push32(c, 0xd1467u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd1467u);
    X86_TICK(c, 11);
    // 0d1467  push esi
    X86_AT(c, 0xd1467u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d1468  push 0x14
    X86_AT(c, 0xd1468u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0d146a  call 0xcc814
    X86_AT(c, 0xd146au);
    push32(c, 0xd146fu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd146fu);
    X86_TICK(c, 11);
    // 0d146f  push ebx
    X86_AT(c, 0xd146fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d1470  push edi
    X86_AT(c, 0xd1470u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d1471  call 0xd13f4
    X86_AT(c, 0xd1471u);
    push32(c, 0xd1476u); x86_call_known(c, 0xd13f4u, f_000d13f4); X86_RET(c, 0xd1476u);
    X86_TICK(c, 13);
    // 0d1476  add esp, 4
    X86_AT(c, 0xd1476u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d1479  push eax
    X86_AT(c, 0xd1479u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d147a  push ebx
    X86_AT(c, 0xd147au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d147b  call 0xc8cb8
    X86_AT(c, 0xd147bu);
    push32(c, 0xd1480u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd1480u);
    X86_TICK(c, 11);
    // 0d1480  add esp, 0x40
    X86_AT(c, 0xd1480u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0d1483  push 7
    X86_AT(c, 0xd1483u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1485  call 0xca0a0
    X86_AT(c, 0xd1485u);
    push32(c, 0xd148au); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd148au);
    X86_TICK(c, 30);
    // 0d148a  add esp, 4
    X86_AT(c, 0xd148au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d148d  pop edi
    X86_AT(c, 0xd148du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d148e  pop esi
    X86_AT(c, 0xd148eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d148f  pop ebx
    X86_AT(c, 0xd148fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d1490  leave 
    X86_AT(c, 0xd1490u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d1491  ret 
    X86_AT(c, 0xd1491u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd1420u, "ran off the end of a function");
}
void f_000d1494(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0d1494  push ebp
    X86_AT(c, 0xd1494u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d1495  mov ebp, esp
    X86_AT(c, 0xd1495u);
    c.r[5] = c.r[4];
    // 0d1497  sub esp, 0x10
    X86_AT(c, 0xd1497u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x10u, 0, 4); }
    // 0d149a  push ebx
    X86_AT(c, 0xd149au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d149b  push esi
    X86_AT(c, 0xd149bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d149c  push edi
    X86_AT(c, 0xd149cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d149d  mov eax, dword ptr [0xaae98]
    X86_AT(c, 0xd149du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAAE98u)));
    // 0d14a2  sub eax, 2
    X86_AT(c, 0xd14a2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0d14a5  push eax
    X86_AT(c, 0xd14a5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d14a6  call 0xd4588
    X86_AT(c, 0xd14a6u);
    push32(c, 0xd14abu); x86_call_known(c, 0xd4588u, f_000d4588); X86_RET(c, 0xd14abu);
    X86_TICK(c, 17);
    // 0d14ab  xchg edi, eax
    X86_AT(c, 0xd14abu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d14ac  add esp, 4
    X86_AT(c, 0xd14acu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d14af  cmp byte ptr [ebp + 8], 0x53
    X86_AT(c, 0xd14afu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x53u, 0, 1);
    // 0d14b3  jne 0xd14fd
    X86_AT(c, 0xd14b3u);
    if (x86_cc(c, 5)) { goto L_d14fd; }
    X86_TICK(c, 9);
    // 0d14b5  push 7
    X86_AT(c, 0xd14b5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d14b7  call 0xca0a0
    X86_AT(c, 0xd14b7u);
    push32(c, 0xd14bcu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd14bcu);
    X86_TICK(c, 11);
    // 0d14bc  push 0x7824
    X86_AT(c, 0xd14bcu);
    { uint32_t v = 0x7824u; push32(c, v); }
    // 0d14c1  push 7
    X86_AT(c, 0xd14c1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d14c3  call 0xc8cdc
    X86_AT(c, 0xd14c3u);
    push32(c, 0xd14c8u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd14c8u);
    X86_TICK(c, 11);
    // 0d14c8  push 0x7868
    X86_AT(c, 0xd14c8u);
    { uint32_t v = 0x7868u; push32(c, v); }
    // 0d14cd  push 7
    X86_AT(c, 0xd14cdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d14cf  call 0xc8cdc
    X86_AT(c, 0xd14cfu);
    push32(c, 0xd14d4u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd14d4u);
    X86_TICK(c, 11);
    // 0d14d4  push 0x78ac
    X86_AT(c, 0xd14d4u);
    { uint32_t v = 0x78ACu; push32(c, v); }
    // 0d14d9  push 7
    X86_AT(c, 0xd14d9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d14db  call 0xc8cdc
    X86_AT(c, 0xd14dbu);
    push32(c, 0xd14e0u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd14e0u);
    X86_TICK(c, 9);
    // 0d14e0  push 7
    X86_AT(c, 0xd14e0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d14e2  call 0xca3cc
    X86_AT(c, 0xd14e2u);
    push32(c, 0xd14e7u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd14e7u);
    X86_TICK(c, 7);
    // 0d14e7  call 0xcf604
    X86_AT(c, 0xd14e7u);
    push32(c, 0xd14ecu); x86_call_known(c, 0xcf604u, f_000cf604); X86_RET(c, 0xd14ecu);
    X86_TICK(c, 11);
    // 0d14ec  push 0xf
    X86_AT(c, 0xd14ecu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d14ee  push 0x78c0
    X86_AT(c, 0xd14eeu);
    { uint32_t v = 0x78C0u; push32(c, v); }
    // 0d14f3  call 0xcc830
    X86_AT(c, 0xd14f3u);
    push32(c, 0xd14f8u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd14f8u);
    X86_TICK(c, 7);
    // 0d14f8  jmp 0xd1598
    X86_AT(c, 0xd14f8u);
    goto L_d1598;
L_d14fd:
    X86_TICK(c, 2);
    // 0d14fd  sub esi, esi
    X86_AT(c, 0xd14fdu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_d14ff:
    X86_TICK(c, 7);
    // 0d14ff  cmp esi, 6
    X86_AT(c, 0xd14ffu);
    (void)x86_sub(c, c.r[6], 0x6u, 0, 4);
    // 0d1502  jge 0xd150c
    X86_AT(c, 0xd1502u);
    if (x86_cc(c, 13)) { goto L_d150c; }
    X86_TICK(c, 11);
    // 0d1504  mov byte ptr [ebp + esi*1 - 0x10], 0
    X86_AT(c, 0xd1504u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFFF0u)), 0x0u);
    // 0d1509  inc esi
    X86_AT(c, 0xd1509u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d150a  jmp 0xd14ff
    X86_AT(c, 0xd150au);
    X86_POLL(c, 0xd14ffu); goto L_d14ff;
L_d150c:
    X86_TICK(c, 12);
    // 0d150c  cmp dword ptr [0xaa2b4], 0
    X86_AT(c, 0xd150cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xAA2B4u))), 0x0u, 0, 4);
    // 0d1513  jne 0xd152b
    X86_AT(c, 0xd1513u);
    if (x86_cc(c, 5)) { goto L_d152b; }
    X86_TICK(c, 12);
    // 0d1515  cmp dword ptr [0xaa2b8], 0
    X86_AT(c, 0xd1515u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xAA2B8u))), 0x0u, 0, 4);
    // 0d151c  jne 0xd152b
    X86_AT(c, 0xd151cu);
    if (x86_cc(c, 5)) { goto L_d152b; }
    X86_TICK(c, 12);
    // 0d151e  cmp dword ptr [0xaa2b0], 0
    X86_AT(c, 0xd151eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xAA2B0u))), 0x0u, 0, 4);
    // 0d1525  jne 0xd152b
    X86_AT(c, 0xd1525u);
    if (x86_cc(c, 5)) { goto L_d152b; }
    X86_TICK(c, 9);
    // 0d1527  sub eax, eax
    X86_AT(c, 0xd1527u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d1529  jmp 0xd152d
    X86_AT(c, 0xd1529u);
    goto L_d152d;
L_d152b:
    X86_TICK(c, 2);
    // 0d152b  mov al, 1
    X86_AT(c, 0xd152bu);
    s8(c, 0, 0x1u);
L_d152d:
    X86_TICK(c, 12);
    // 0d152d  movzx eax, al
    X86_AT(c, 0xd152du);
    c.r[0] = g8(c, 0);
    // 0d1530  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xd1530u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0d1533  and eax, eax
    X86_AT(c, 0xd1533u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d1535  je 0xd155b
    X86_AT(c, 0xd1535u);
    if (x86_cc(c, 4)) { goto L_d155b; }
    X86_TICK(c, 12);
    // 0d1537  cmp dword ptr [0xb0416], 0
    X86_AT(c, 0xd1537u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0416u))), 0x0u, 0, 4);
    // 0d153e  je 0xd1549
    X86_AT(c, 0xd153eu);
    if (x86_cc(c, 4)) { goto L_d1549; }
    X86_TICK(c, 12);
    // 0d1540  cmp dword ptr [0xaa2ac], 0xf
    X86_AT(c, 0xd1540u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xAA2ACu))), 0xFu, 0, 4);
    // 0d1547  jge 0xd155b
    X86_AT(c, 0xd1547u);
    if (x86_cc(c, 13)) { goto L_d155b; }
L_d1549:
    X86_TICK(c, 12);
    // 0d1549  cmp dword ptr [0xaa2b4], 0
    X86_AT(c, 0xd1549u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xAA2B4u))), 0x0u, 0, 4);
    // 0d1550  jne 0xd15a0
    X86_AT(c, 0xd1550u);
    if (x86_cc(c, 5)) { goto L_d15a0; }
    X86_TICK(c, 12);
    // 0d1552  cmp dword ptr [0xaa2ac], 0xf
    X86_AT(c, 0xd1552u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xAA2ACu))), 0xFu, 0, 4);
    // 0d1559  jl 0xd15a0
    X86_AT(c, 0xd1559u);
    if (x86_cc(c, 12)) { goto L_d15a0; }
L_d155b:
    X86_TICK(c, 11);
    // 0d155b  push 3
    X86_AT(c, 0xd155bu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d155d  push 0
    X86_AT(c, 0xd155du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d155f  call 0xcc814
    X86_AT(c, 0xd155fu);
    push32(c, 0xd1564u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd1564u);
    X86_TICK(c, 11);
    // 0d1564  push 0x78e0
    X86_AT(c, 0xd1564u);
    { uint32_t v = 0x78E0u; push32(c, v); }
    // 0d1569  push 4
    X86_AT(c, 0xd1569u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d156b  call 0xc8cdc
    X86_AT(c, 0xd156bu);
    push32(c, 0xd1570u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd1570u);
    X86_TICK(c, 11);
    // 0d1570  push 5
    X86_AT(c, 0xd1570u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d1572  push 0
    X86_AT(c, 0xd1572u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1574  call 0xcc814
    X86_AT(c, 0xd1574u);
    push32(c, 0xd1579u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd1579u);
    X86_TICK(c, 11);
    // 0d1579  push 0x791c
    X86_AT(c, 0xd1579u);
    { uint32_t v = 0x791Cu; push32(c, v); }
    // 0d157e  push 4
    X86_AT(c, 0xd157eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1580  call 0xc8cdc
    X86_AT(c, 0xd1580u);
    push32(c, 0xd1585u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd1585u);
    X86_TICK(c, 9);
    // 0d1585  push 7
    X86_AT(c, 0xd1585u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1587  call 0xca0a0
    X86_AT(c, 0xd1587u);
    push32(c, 0xd158cu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd158cu);
    X86_TICK(c, 9);
    // 0d158c  push 7
    X86_AT(c, 0xd158cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d158e  call 0xca3cc
    X86_AT(c, 0xd158eu);
    push32(c, 0xd1593u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd1593u);
    X86_TICK(c, 7);
    // 0d1593  call 0xcf604
    X86_AT(c, 0xd1593u);
    push32(c, 0xd1598u); x86_call_known(c, 0xcf604u, f_000cf604); X86_RET(c, 0xd1598u);
L_d1598:
    X86_TICK(c, 9);
    // 0d1598  add esp, 0x28
    X86_AT(c, 0xd1598u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0d159b  jmp 0xd1740
    X86_AT(c, 0xd159bu);
    goto L_d1740;
L_d15a0:
    X86_TICK(c, 12);
    // 0d15a0  cmp dword ptr [0xb0416], 0
    X86_AT(c, 0xd15a0u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0416u))), 0x0u, 0, 4);
    // 0d15a7  jne 0xd15b6
    X86_AT(c, 0xd15a7u);
    if (x86_cc(c, 5)) { goto L_d15b6; }
    X86_TICK(c, 12);
    // 0d15a9  cmp dword ptr [0xaa2ac], 0xf
    X86_AT(c, 0xd15a9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xAA2ACu))), 0xFu, 0, 4);
    // 0d15b0  jl 0xd15b6
    X86_AT(c, 0xd15b0u);
    if (x86_cc(c, 12)) { goto L_d15b6; }
    X86_TICK(c, 9);
    // 0d15b2  mov al, 1
    X86_AT(c, 0xd15b2u);
    s8(c, 0, 0x1u);
    // 0d15b4  jmp 0xd15b8
    X86_AT(c, 0xd15b4u);
    goto L_d15b8;
L_d15b6:
    X86_TICK(c, 2);
    // 0d15b6  sub eax, eax
    X86_AT(c, 0xd15b6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_d15b8:
    X86_TICK(c, 17);
    // 0d15b8  movzx eax, al
    X86_AT(c, 0xd15b8u);
    c.r[0] = g8(c, 0);
    // 0d15bb  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xd15bbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0d15be  cmp dword ptr [0xaa2b8], 0
    X86_AT(c, 0xd15beu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xAA2B8u))), 0x0u, 0, 4);
    // 0d15c5  jne 0xd15d0
    X86_AT(c, 0xd15c5u);
    if (x86_cc(c, 5)) { goto L_d15d0; }
    X86_TICK(c, 12);
    // 0d15c7  cmp dword ptr [0xaa2b4], 0
    X86_AT(c, 0xd15c7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xAA2B4u))), 0x0u, 0, 4);
    // 0d15ce  je 0xd15f5
    X86_AT(c, 0xd15ceu);
    if (x86_cc(c, 4)) { goto L_d15f5; }
L_d15d0:
    X86_TICK(c, 12);
    // 0d15d0  cmp dword ptr [ebp - 8], 0
    X86_AT(c, 0xd15d0u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x0u, 0, 4);
    // 0d15d4  jne 0xd15f5
    X86_AT(c, 0xd15d4u);
    if (x86_cc(c, 5)) { goto L_d15f5; }
    X86_TICK(c, 13);
    // 0d15d6  push 0x41
    X86_AT(c, 0xd15d6u);
    { uint32_t v = 0x41u; push32(c, v); }
    // 0d15d8  push edi
    X86_AT(c, 0xd15d8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d15d9  push 1
    X86_AT(c, 0xd15d9u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d15db  call 0xd1420
    X86_AT(c, 0xd15dbu);
    push32(c, 0xd15e0u); x86_call_known(c, 0xd1420u, f_000d1420); X86_RET(c, 0xd15e0u);
    X86_TICK(c, 21);
    // 0d15e0  inc edi
    X86_AT(c, 0xd15e0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d15e1  inc byte ptr [ebp - 0x10]
    X86_AT(c, 0xd15e1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 0d15e4  push 0x42
    X86_AT(c, 0xd15e4u);
    { uint32_t v = 0x42u; push32(c, v); }
    // 0d15e6  push edi
    X86_AT(c, 0xd15e6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d15e7  push 2
    X86_AT(c, 0xd15e7u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d15e9  call 0xd1420
    X86_AT(c, 0xd15e9u);
    push32(c, 0xd15eeu); x86_call_known(c, 0xd1420u, f_000d1420); X86_RET(c, 0xd15eeu);
    X86_TICK(c, 10);
    // 0d15ee  inc edi
    X86_AT(c, 0xd15eeu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d15ef  inc byte ptr [ebp - 0xf]
    X86_AT(c, 0xd15efu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 0d15f2  add esp, 0x18
    X86_AT(c, 0xd15f2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_d15f5:
    X86_TICK(c, 12);
    // 0d15f5  cmp dword ptr [0xaa2b0], 0
    X86_AT(c, 0xd15f5u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xAA2B0u))), 0x0u, 0, 4);
    // 0d15fc  je 0xd1623
    X86_AT(c, 0xd15fcu);
    if (x86_cc(c, 4)) { goto L_d1623; }
    X86_TICK(c, 12);
    // 0d15fe  cmp dword ptr [ebp - 8], 0
    X86_AT(c, 0xd15feu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x0u, 0, 4);
    // 0d1602  jne 0xd1623
    X86_AT(c, 0xd1602u);
    if (x86_cc(c, 5)) { goto L_d1623; }
    X86_TICK(c, 13);
    // 0d1604  push 0x43
    X86_AT(c, 0xd1604u);
    { uint32_t v = 0x43u; push32(c, v); }
    // 0d1606  push edi
    X86_AT(c, 0xd1606u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d1607  push 3
    X86_AT(c, 0xd1607u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d1609  call 0xd1420
    X86_AT(c, 0xd1609u);
    push32(c, 0xd160eu); x86_call_known(c, 0xd1420u, f_000d1420); X86_RET(c, 0xd160eu);
    X86_TICK(c, 21);
    // 0d160e  inc edi
    X86_AT(c, 0xd160eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d160f  inc byte ptr [ebp - 0xe]
    X86_AT(c, 0xd160fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 0d1612  push 0x44
    X86_AT(c, 0xd1612u);
    { uint32_t v = 0x44u; push32(c, v); }
    // 0d1614  push edi
    X86_AT(c, 0xd1614u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d1615  push 4
    X86_AT(c, 0xd1615u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1617  call 0xd1420
    X86_AT(c, 0xd1617u);
    push32(c, 0xd161cu); x86_call_known(c, 0xd1420u, f_000d1420); X86_RET(c, 0xd161cu);
    X86_TICK(c, 10);
    // 0d161c  inc edi
    X86_AT(c, 0xd161cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d161d  inc byte ptr [ebp - 0xd]
    X86_AT(c, 0xd161du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 0d1620  add esp, 0x18
    X86_AT(c, 0xd1620u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_d1623:
    X86_TICK(c, 12);
    // 0d1623  cmp dword ptr [0xaa2dc], 0xbb8
    X86_AT(c, 0xd1623u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xAA2DCu))), 0xBB8u, 0, 4);
    // 0d162d  jle 0xd1668
    X86_AT(c, 0xd162du);
    if (x86_cc(c, 14)) { goto L_d1668; }
    X86_TICK(c, 12);
    // 0d162f  cmp dword ptr [0xaa2b4], 0
    X86_AT(c, 0xd162fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xAA2B4u))), 0x0u, 0, 4);
    // 0d1636  je 0xd1668
    X86_AT(c, 0xd1636u);
    if (x86_cc(c, 4)) { goto L_d1668; }
    X86_TICK(c, 12);
    // 0d1638  cmp dword ptr [ebp - 8], 0
    X86_AT(c, 0xd1638u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x0u, 0, 4);
    // 0d163c  jne 0xd164f
    X86_AT(c, 0xd163cu);
    if (x86_cc(c, 5)) { goto L_d164f; }
    X86_TICK(c, 13);
    // 0d163e  push 0x45
    X86_AT(c, 0xd163eu);
    { uint32_t v = 0x45u; push32(c, v); }
    // 0d1640  push edi
    X86_AT(c, 0xd1640u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d1641  push 5
    X86_AT(c, 0xd1641u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d1643  call 0xd1420
    X86_AT(c, 0xd1643u);
    push32(c, 0xd1648u); x86_call_known(c, 0xd1420u, f_000d1420); X86_RET(c, 0xd1648u);
    X86_TICK(c, 10);
    // 0d1648  inc edi
    X86_AT(c, 0xd1648u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d1649  inc byte ptr [ebp - 0xc]
    X86_AT(c, 0xd1649u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 0d164c  add esp, 0xc
    X86_AT(c, 0xd164cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_d164f:
    X86_TICK(c, 12);
    // 0d164f  cmp dword ptr [0xb0416], 0
    X86_AT(c, 0xd164fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0416u))), 0x0u, 0, 4);
    // 0d1656  jne 0xd1665
    X86_AT(c, 0xd1656u);
    if (x86_cc(c, 5)) { goto L_d1665; }
    X86_TICK(c, 13);
    // 0d1658  push 0x46
    X86_AT(c, 0xd1658u);
    { uint32_t v = 0x46u; push32(c, v); }
    // 0d165a  push edi
    X86_AT(c, 0xd165au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d165b  push 6
    X86_AT(c, 0xd165bu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d165d  call 0xd1420
    X86_AT(c, 0xd165du);
    push32(c, 0xd1662u); x86_call_known(c, 0xd1420u, f_000d1420); X86_RET(c, 0xd1662u);
    X86_TICK(c, 2);
    // 0d1662  add esp, 0xc
    X86_AT(c, 0xd1662u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_d1665:
    X86_TICK(c, 6);
    // 0d1665  inc byte ptr [ebp - 0xb]
    X86_AT(c, 0xd1665u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF5u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
L_d1668:
    X86_TICK(c, 9);
    // 0d1668  push 7
    X86_AT(c, 0xd1668u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d166a  call 0xc81e4
    X86_AT(c, 0xd166au);
    push32(c, 0xd166fu); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd166fu);
    X86_TICK(c, 12);
    // 0d166f  add esp, 4
    X86_AT(c, 0xd166fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d1672  xchg ebx, eax
    X86_AT(c, 0xd1672u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d1673  and bl, bl
    X86_AT(c, 0xd1673u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d1675  je 0xd1668
    X86_AT(c, 0xd1675u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd1668u); goto L_d1668; }
    X86_TICK(c, 9);
    // 0d1677  push 7
    X86_AT(c, 0xd1677u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1679  call 0xca0a0
    X86_AT(c, 0xd1679u);
    push32(c, 0xd167eu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd167eu);
    X86_TICK(c, 9);
    // 0d167e  add esp, 4
    X86_AT(c, 0xd167eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d1681  cmp bl, 0x41
    X86_AT(c, 0xd1681u);
    (void)x86_sub(c, g8(c, 3), 0x41u, 0, 1);
    // 0d1684  jb 0xd168b
    X86_AT(c, 0xd1684u);
    if (x86_cc(c, 2)) { goto L_d168b; }
    X86_TICK(c, 7);
    // 0d1686  cmp bl, 0x46
    X86_AT(c, 0xd1686u);
    (void)x86_sub(c, g8(c, 3), 0x46u, 0, 1);
    // 0d1689  jbe 0xd1694
    X86_AT(c, 0xd1689u);
    if (x86_cc(c, 6)) { goto L_d1694; }
L_d168b:
    X86_TICK(c, 11);
    // 0d168b  push 0xf
    X86_AT(c, 0xd168bu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d168d  push 0x7938
    X86_AT(c, 0xd168du);
    { uint32_t v = 0x7938u; push32(c, v); }
    // 0d1692  jmp 0xd16a5
    X86_AT(c, 0xd1692u);
    goto L_d16a5;
L_d1694:
    X86_TICK(c, 15);
    // 0d1694  movzx ebx, bl
    X86_AT(c, 0xd1694u);
    c.r[3] = g8(c, 3);
    // 0d1697  cmp byte ptr [ebp + ebx*1 - 0x51], 0
    X86_AT(c, 0xd1697u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[3] + 0xFFFFFFAFu))), 0x0u, 0, 1);
    // 0d169c  jne 0xd16ac
    X86_AT(c, 0xd169cu);
    if (x86_cc(c, 5)) { goto L_d16ac; }
    X86_TICK(c, 4);
    // 0d169e  push 0xf
    X86_AT(c, 0xd169eu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d16a0  push 0x7958
    X86_AT(c, 0xd16a0u);
    { uint32_t v = 0x7958u; push32(c, v); }
L_d16a5:
    X86_TICK(c, 7);
    // 0d16a5  call 0xcc830
    X86_AT(c, 0xd16a5u);
    push32(c, 0xd16aau); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd16aau);
    X86_TICK(c, 7);
    // 0d16aa  jmp 0xd16d7
    X86_AT(c, 0xd16aau);
    goto L_d16d7;
L_d16ac:
    X86_TICK(c, 14);
    // 0d16ac  movzx ebx, bl
    X86_AT(c, 0xd16acu);
    c.r[3] = g8(c, 3);
    // 0d16af  lea eax, [ebx - 0x40]
    X86_AT(c, 0xd16afu);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFC0u);
    // 0d16b2  push eax
    X86_AT(c, 0xd16b2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d16b3  call 0xd13f4
    X86_AT(c, 0xd16b3u);
    push32(c, 0xd16b8u); x86_call_known(c, 0xd13f4u, f_000d13f4); X86_RET(c, 0xd16b8u);
    X86_TICK(c, 15);
    // 0d16b8  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd16b8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d16bb  add esp, 4
    X86_AT(c, 0xd16bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d16be  cmp eax, dword ptr [0xb031a]
    X86_AT(c, 0xd16beu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xB031Au))), 0, 4);
    // 0d16c4  jle 0xd16dc
    X86_AT(c, 0xd16c4u);
    if (x86_cc(c, 14)) { goto L_d16dc; }
    X86_TICK(c, 11);
    // 0d16c6  push 0xf
    X86_AT(c, 0xd16c6u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d16c8  push 0x7978
    X86_AT(c, 0xd16c8u);
    { uint32_t v = 0x7978u; push32(c, v); }
    // 0d16cd  call 0xcc830
    X86_AT(c, 0xd16cdu);
    push32(c, 0xd16d2u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd16d2u);
    X86_TICK(c, 7);
    // 0d16d2  call 0xcfffc
    X86_AT(c, 0xd16d2u);
    push32(c, 0xd16d7u); x86_call_known(c, 0xcfffcu, f_000cfffc); X86_RET(c, 0xd16d7u);
L_d16d7:
    X86_TICK(c, 9);
    // 0d16d7  add esp, 8
    X86_AT(c, 0xd16d7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d16da  jmp 0xd1740
    X86_AT(c, 0xd16dau);
    goto L_d1740;
L_d16dc:
    X86_TICK(c, 17);
    // 0d16dc  push 0xf
    X86_AT(c, 0xd16dcu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d16de  movzx ebx, bl
    X86_AT(c, 0xd16deu);
    c.r[3] = g8(c, 3);
    // 0d16e1  push dword ptr [ebx*4 + 0xa1d88]
    X86_AT(c, 0xd16e1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xA1D88u))); push32(c, v); }
    // 0d16e8  call 0xcc830
    X86_AT(c, 0xd16e8u);
    push32(c, 0xd16edu); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd16edu);
    X86_TICK(c, 18);
    // 0d16ed  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd16edu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d16f0  sub dword ptr [0xb031a], eax
    X86_AT(c, 0xd16f0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB031Au)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0d16f6  call 0xcc6cc
    X86_AT(c, 0xd16f6u);
    push32(c, 0xd16fbu); x86_call_known(c, 0xcc6ccu, f_000cc6cc); X86_RET(c, 0xd16fbu);
    X86_TICK(c, 13);
    // 0d16fb  inc dword ptr [0xaa2ac]
    X86_AT(c, 0xd16fbu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xAA2ACu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d1701  call 0xcffc4
    X86_AT(c, 0xd1701u);
    push32(c, 0xd1706u); x86_call_known(c, 0xcffc4u, f_000cffc4); X86_RET(c, 0xd1706u);
    X86_TICK(c, 9);
    // 0d1706  add esp, 8
    X86_AT(c, 0xd1706u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d1709  cmp bl, 0x46
    X86_AT(c, 0xd1709u);
    (void)x86_sub(c, g8(c, 3), 0x46u, 0, 1);
    // 0d170c  jne 0xd171d
    X86_AT(c, 0xd170cu);
    if (x86_cc(c, 5)) { goto L_d171d; }
    X86_TICK(c, 6);
    // 0d170e  mov eax, 0x3e8
    X86_AT(c, 0xd170eu);
    c.r[0] = 0x3E8u;
    // 0d1713  mov dword ptr [0xb0432], eax
    X86_AT(c, 0xd1713u);
    wr32((c.sbase[3] + (uint32_t)(0xB0432u)), c.r[0]);
    // 0d1718  mov dword ptr [0xb042e], eax
    X86_AT(c, 0xd1718u);
    wr32((c.sbase[3] + (uint32_t)(0xB042Eu)), c.r[0]);
L_d171d:
    X86_TICK(c, 16);
    // 0d171d  movzx ebx, bl
    X86_AT(c, 0xd171du);
    c.r[3] = g8(c, 3);
    // 0d1720  lea eax, [ebx - 0x40]
    X86_AT(c, 0xd1720u);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFC0u);
    // 0d1723  push eax
    X86_AT(c, 0xd1723u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d1724  mov edx, eax
    X86_AT(c, 0xd1724u);
    c.r[2] = c.r[0];
    // 0d1726  call 0xd13b8
    X86_AT(c, 0xd1726u);
    push32(c, 0xd172bu); x86_call_known(c, 0xd13b8u, f_000d13b8); X86_RET(c, 0xd172bu);
    X86_TICK(c, 14);
    // 0d172b  mov eax, dword ptr [0xaa0ec]
    X86_AT(c, 0xd172bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAA0ECu)));
    // 0d1730  mov dword ptr [eax*4 + 0xaa0f0], edx
    X86_AT(c, 0xd1730u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xAA0F0u)), c.r[2]);
    // 0d1737  inc dword ptr [0xaa0ec]
    X86_AT(c, 0xd1737u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xAA0ECu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d173d  add esp, 4
    X86_AT(c, 0xd173du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_d1740:
    X86_TICK(c, 9);
    // 0d1740  push 0x7998
    X86_AT(c, 0xd1740u);
    { uint32_t v = 0x7998u; push32(c, v); }
    // 0d1745  call 0xcc7bc
    X86_AT(c, 0xd1745u);
    push32(c, 0xd174au); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd174au);
    X86_TICK(c, 30);
    // 0d174a  add esp, 4
    X86_AT(c, 0xd174au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d174d  pop edi
    X86_AT(c, 0xd174du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d174e  pop esi
    X86_AT(c, 0xd174eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d174f  pop ebx
    X86_AT(c, 0xd174fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d1750  leave 
    X86_AT(c, 0xd1750u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d1751  ret 
    X86_AT(c, 0xd1751u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd1494u, "ran off the end of a function");
}
void f_000d1754(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0d1754  push 9
    X86_AT(c, 0xd1754u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0d1756  push 0x72
    X86_AT(c, 0xd1756u);
    { uint32_t v = 0x72u; push32(c, v); }
    // 0d1758  push 0x274
    X86_AT(c, 0xd1758u);
    { uint32_t v = 0x274u; push32(c, v); }
    // 0d175d  push 0x71
    X86_AT(c, 0xd175du);
    { uint32_t v = 0x71u; push32(c, v); }
    // 0d175f  push 0x174
    X86_AT(c, 0xd175fu);
    { uint32_t v = 0x174u; push32(c, v); }
    // 0d1764  call 0xc95ec
    X86_AT(c, 0xd1764u);
    push32(c, 0xd1769u); x86_call_known(c, 0xc95ecu, f_000c95ec); X86_RET(c, 0xd1769u);
    X86_TICK(c, 17);
    // 0d1769  push 9
    X86_AT(c, 0xd1769u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0d176b  push 0x121
    X86_AT(c, 0xd176bu);
    { uint32_t v = 0x121u; push32(c, v); }
    // 0d1770  push 0x175
    X86_AT(c, 0xd1770u);
    { uint32_t v = 0x175u; push32(c, v); }
    // 0d1775  push 0x71
    X86_AT(c, 0xd1775u);
    { uint32_t v = 0x71u; push32(c, v); }
    // 0d1777  push 0x174
    X86_AT(c, 0xd1777u);
    { uint32_t v = 0x174u; push32(c, v); }
    // 0d177c  call 0xc95ec
    X86_AT(c, 0xd177cu);
    push32(c, 0xd1781u); x86_call_known(c, 0xc95ecu, f_000c95ec); X86_RET(c, 0xd1781u);
    X86_TICK(c, 17);
    // 0d1781  push 0xa
    X86_AT(c, 0xd1781u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d1783  push 0x123
    X86_AT(c, 0xd1783u);
    { uint32_t v = 0x123u; push32(c, v); }
    // 0d1788  push 0x277
    X86_AT(c, 0xd1788u);
    { uint32_t v = 0x277u; push32(c, v); }
    // 0d178d  push 0x123
    X86_AT(c, 0xd178du);
    { uint32_t v = 0x123u; push32(c, v); }
    // 0d1792  push 0x173
    X86_AT(c, 0xd1792u);
    { uint32_t v = 0x173u; push32(c, v); }
    // 0d1797  call 0xc9378
    X86_AT(c, 0xd1797u);
    push32(c, 0xd179cu); x86_call_known(c, 0xc9378u, f_000c9378); X86_RET(c, 0xd179cu);
    X86_TICK(c, 19);
    // 0d179c  add esp, 0x3c
    X86_AT(c, 0xd179cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d179f  push 0xa
    X86_AT(c, 0xd179fu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d17a1  push 0x124
    X86_AT(c, 0xd17a1u);
    { uint32_t v = 0x124u; push32(c, v); }
    // 0d17a6  push 0x277
    X86_AT(c, 0xd17a6u);
    { uint32_t v = 0x277u; push32(c, v); }
    // 0d17ab  push 0x124
    X86_AT(c, 0xd17abu);
    { uint32_t v = 0x124u; push32(c, v); }
    // 0d17b0  push 0x174
    X86_AT(c, 0xd17b0u);
    { uint32_t v = 0x174u; push32(c, v); }
    // 0d17b5  call 0xc9378
    X86_AT(c, 0xd17b5u);
    push32(c, 0xd17bau); x86_call_known(c, 0xc9378u, f_000c9378); X86_RET(c, 0xd17bau);
    X86_TICK(c, 17);
    // 0d17ba  push 0xa
    X86_AT(c, 0xd17bau);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d17bc  push 0x124
    X86_AT(c, 0xd17bcu);
    { uint32_t v = 0x124u; push32(c, v); }
    // 0d17c1  push 0x277
    X86_AT(c, 0xd17c1u);
    { uint32_t v = 0x277u; push32(c, v); }
    // 0d17c6  push 0x70
    X86_AT(c, 0xd17c6u);
    { uint32_t v = 0x70u; push32(c, v); }
    // 0d17c8  push 0x277
    X86_AT(c, 0xd17c8u);
    { uint32_t v = 0x277u; push32(c, v); }
    // 0d17cd  call 0xc9378
    X86_AT(c, 0xd17cdu);
    push32(c, 0xd17d2u); x86_call_known(c, 0xc9378u, f_000c9378); X86_RET(c, 0xd17d2u);
    X86_TICK(c, 17);
    // 0d17d2  push 0xa
    X86_AT(c, 0xd17d2u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d17d4  push 0x124
    X86_AT(c, 0xd17d4u);
    { uint32_t v = 0x124u; push32(c, v); }
    // 0d17d9  push 0x278
    X86_AT(c, 0xd17d9u);
    { uint32_t v = 0x278u; push32(c, v); }
    // 0d17de  push 0x71
    X86_AT(c, 0xd17deu);
    { uint32_t v = 0x71u; push32(c, v); }
    // 0d17e0  push 0x278
    X86_AT(c, 0xd17e0u);
    { uint32_t v = 0x278u; push32(c, v); }
    // 0d17e5  call 0xc9378
    X86_AT(c, 0xd17e5u);
    push32(c, 0xd17eau); x86_call_known(c, 0xc9378u, f_000c9378); X86_RET(c, 0xd17eau);
    X86_TICK(c, 19);
    // 0d17ea  add esp, 0x3c
    X86_AT(c, 0xd17eau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d17ed  push 0xf
    X86_AT(c, 0xd17edu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d17ef  push 0x122
    X86_AT(c, 0xd17efu);
    { uint32_t v = 0x122u; push32(c, v); }
    // 0d17f4  push 0x276
    X86_AT(c, 0xd17f4u);
    { uint32_t v = 0x276u; push32(c, v); }
    // 0d17f9  push 0x121
    X86_AT(c, 0xd17f9u);
    { uint32_t v = 0x121u; push32(c, v); }
    // 0d17fe  push 0x172
    X86_AT(c, 0xd17feu);
    { uint32_t v = 0x172u; push32(c, v); }
    // 0d1803  call 0xc95ec
    X86_AT(c, 0xd1803u);
    push32(c, 0xd1808u); x86_call_known(c, 0xc95ecu, f_000c95ec); X86_RET(c, 0xd1808u);
    X86_TICK(c, 17);
    // 0d1808  push 0xf
    X86_AT(c, 0xd1808u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d180a  push 0x122
    X86_AT(c, 0xd180au);
    { uint32_t v = 0x122u; push32(c, v); }
    // 0d180f  push 0x276
    X86_AT(c, 0xd180fu);
    { uint32_t v = 0x276u; push32(c, v); }
    // 0d1814  push 0x6f
    X86_AT(c, 0xd1814u);
    { uint32_t v = 0x6Fu; push32(c, v); }
    // 0d1816  push 0x275
    X86_AT(c, 0xd1816u);
    { uint32_t v = 0x275u; push32(c, v); }
    // 0d181b  call 0xc95ec
    X86_AT(c, 0xd181bu);
    push32(c, 0xd1820u); x86_call_known(c, 0xc95ecu, f_000c95ec); X86_RET(c, 0xd1820u);
    X86_TICK(c, 12);
    // 0d1820  add esp, 0x28
    X86_AT(c, 0xd1820u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0d1823  ret 
    X86_AT(c, 0xd1823u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd1754u, "ran off the end of a function");
}
void f_000d1824(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0d1824  push ebx
    X86_AT(c, 0xd1824u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d1825  push edi
    X86_AT(c, 0xd1825u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d1826  push 0xf
    X86_AT(c, 0xd1826u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d1828  push 0x799c
    X86_AT(c, 0xd1828u);
    { uint32_t v = 0x799Cu; push32(c, v); }
    // 0d182d  call 0xcc830
    X86_AT(c, 0xd182du);
    push32(c, 0xd1832u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd1832u);
    X86_TICK(c, 14);
    // 0d1832  add esp, 8
    X86_AT(c, 0xd1832u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d1835  cmp dword ptr [0xaae9c], 0
    X86_AT(c, 0xd1835u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xAAE9Cu))), 0x0u, 0, 4);
    // 0d183c  je 0xd1845
    X86_AT(c, 0xd183cu);
    if (x86_cc(c, 4)) { goto L_d1845; }
    X86_TICK(c, 9);
    // 0d183e  push 0x79b8
    X86_AT(c, 0xd183eu);
    { uint32_t v = 0x79B8u; push32(c, v); }
    // 0d1843  jmp 0xd18a6
    X86_AT(c, 0xd1843u);
    goto L_d18a6;
L_d1845:
    X86_TICK(c, 13);
    // 0d1845  movzx edi, byte ptr [0x92494]
    X86_AT(c, 0xd1845u);
    c.r[7] = rd8((c.sbase[3] + (uint32_t)(0x92494u)));
    // 0d184c  cmp edi, 0x43
    X86_AT(c, 0xd184cu);
    (void)x86_sub(c, c.r[7], 0x43u, 0, 4);
    // 0d184f  jl 0xd1856
    X86_AT(c, 0xd184fu);
    if (x86_cc(c, 12)) { goto L_d1856; }
    X86_TICK(c, 7);
    // 0d1851  cmp edi, 0x4b
    X86_AT(c, 0xd1851u);
    (void)x86_sub(c, c.r[7], 0x4Bu, 0, 4);
    // 0d1854  jle 0xd1879
    X86_AT(c, 0xd1854u);
    if (x86_cc(c, 14)) { goto L_d1879; }
L_d1856:
    X86_TICK(c, 9);
    // 0d1856  push 0x7a04
    X86_AT(c, 0xd1856u);
    { uint32_t v = 0x7A04u; push32(c, v); }
    // 0d185b  call 0xcc7bc
    X86_AT(c, 0xd185bu);
    push32(c, 0xd1860u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd1860u);
    X86_TICK(c, 9);
    // 0d1860  push 0x7a08
    X86_AT(c, 0xd1860u);
    { uint32_t v = 0x7A08u; push32(c, v); }
    // 0d1865  call 0xcc7bc
    X86_AT(c, 0xd1865u);
    push32(c, 0xd186au); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd186au);
    X86_TICK(c, 9);
    // 0d186a  push 1
    X86_AT(c, 0xd186au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d186c  call 0xc5ca4
    X86_AT(c, 0xd186cu);
    push32(c, 0xd1871u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xd1871u);
    X86_TICK(c, 9);
    // 0d1871  add esp, 0xc
    X86_AT(c, 0xd1871u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d1874  jmp 0xd19c0
    X86_AT(c, 0xd1874u);
    goto L_d19c0;
L_d1879:
    X86_TICK(c, 11);
    // 0d1879  push 0xf
    X86_AT(c, 0xd1879u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d187b  push 0x7a58
    X86_AT(c, 0xd187bu);
    { uint32_t v = 0x7A58u; push32(c, v); }
    // 0d1880  call 0xcc830
    X86_AT(c, 0xd1880u);
    push32(c, 0xd1885u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd1885u);
    X86_TICK(c, 2);
    // 0d1885  add esp, 8
    X86_AT(c, 0xd1885u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d1888:
    X86_TICK(c, 9);
    // 0d1888  push 7
    X86_AT(c, 0xd1888u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d188a  call 0xc81e4
    X86_AT(c, 0xd188au);
    push32(c, 0xd188fu); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd188fu);
    X86_TICK(c, 12);
    // 0d188f  add esp, 4
    X86_AT(c, 0xd188fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d1892  xchg ebx, eax
    X86_AT(c, 0xd1892u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d1893  and bl, bl
    X86_AT(c, 0xd1893u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d1895  je 0xd1888
    X86_AT(c, 0xd1895u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd1888u); goto L_d1888; }
    X86_TICK(c, 7);
    // 0d1897  cmp bl, 0x42
    X86_AT(c, 0xd1897u);
    (void)x86_sub(c, g8(c, 3), 0x42u, 0, 1);
    // 0d189a  je 0xd18b3
    X86_AT(c, 0xd189au);
    if (x86_cc(c, 4)) { goto L_d18b3; }
    X86_TICK(c, 7);
    // 0d189c  cmp bl, 0x53
    X86_AT(c, 0xd189cu);
    (void)x86_sub(c, g8(c, 3), 0x53u, 0, 1);
    // 0d189f  je 0xd18b3
    X86_AT(c, 0xd189fu);
    if (x86_cc(c, 4)) { goto L_d18b3; }
    X86_TICK(c, 2);
    // 0d18a1  push 0x7a8c
    X86_AT(c, 0xd18a1u);
    { uint32_t v = 0x7A8Cu; push32(c, v); }
L_d18a6:
    X86_TICK(c, 7);
    // 0d18a6  call 0xcc7bc
    X86_AT(c, 0xd18a6u);
    push32(c, 0xd18abu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd18abu);
    X86_TICK(c, 9);
    // 0d18ab  add esp, 4
    X86_AT(c, 0xd18abu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d18ae  jmp 0xd19c0
    X86_AT(c, 0xd18aeu);
    goto L_d19c0;
L_d18b3:
    X86_TICK(c, 7);
    // 0d18b3  cmp bl, 0x42
    X86_AT(c, 0xd18b3u);
    (void)x86_sub(c, g8(c, 3), 0x42u, 0, 1);
    // 0d18b6  jne 0xd18cd
    X86_AT(c, 0xd18b6u);
    if (x86_cc(c, 5)) { goto L_d18cd; }
    X86_TICK(c, 11);
    // 0d18b8  push 0xf
    X86_AT(c, 0xd18b8u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d18ba  push 0x7abc
    X86_AT(c, 0xd18bau);
    { uint32_t v = 0x7ABCu; push32(c, v); }
    // 0d18bf  call 0xcc830
    X86_AT(c, 0xd18bfu);
    push32(c, 0xd18c4u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd18c4u);
    X86_TICK(c, 11);
    // 0d18c4  push 0xf
    X86_AT(c, 0xd18c4u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d18c6  push 0x7ac0
    X86_AT(c, 0xd18c6u);
    { uint32_t v = 0x7AC0u; push32(c, v); }
    // 0d18cb  jmp 0xd18e0
    X86_AT(c, 0xd18cbu);
    goto L_d18e0;
L_d18cd:
    X86_TICK(c, 11);
    // 0d18cd  push 0xf
    X86_AT(c, 0xd18cdu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d18cf  push 0x7ad4
    X86_AT(c, 0xd18cfu);
    { uint32_t v = 0x7AD4u; push32(c, v); }
    // 0d18d4  call 0xcc830
    X86_AT(c, 0xd18d4u);
    push32(c, 0xd18d9u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd18d9u);
    X86_TICK(c, 4);
    // 0d18d9  push 0xf
    X86_AT(c, 0xd18d9u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d18db  push 0x7ad8
    X86_AT(c, 0xd18dbu);
    { uint32_t v = 0x7AD8u; push32(c, v); }
L_d18e0:
    X86_TICK(c, 7);
    // 0d18e0  call 0xcc830
    X86_AT(c, 0xd18e0u);
    push32(c, 0xd18e5u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd18e5u);
    X86_TICK(c, 29);
    // 0d18e5  add esp, 0x10
    X86_AT(c, 0xd18e5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d18e8  push 0xa
    X86_AT(c, 0xd18e8u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d18ea  push 0xf
    X86_AT(c, 0xd18eau);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d18ec  push 0xf
    X86_AT(c, 0xd18ecu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d18ee  push 0xa
    X86_AT(c, 0xd18eeu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d18f0  push 0x1f
    X86_AT(c, 0xd18f0u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0d18f2  push 0xb6
    X86_AT(c, 0xd18f2u);
    { uint32_t v = 0xB6u; push32(c, v); }
    // 0d18f7  push 0x107
    X86_AT(c, 0xd18f7u);
    { uint32_t v = 0x107u; push32(c, v); }
    // 0d18fc  push 0x6f
    X86_AT(c, 0xd18fcu);
    { uint32_t v = 0x6Fu; push32(c, v); }
    // 0d18fe  push 0x172
    X86_AT(c, 0xd18feu);
    { uint32_t v = 0x172u; push32(c, v); }
    // 0d1903  push 4
    X86_AT(c, 0xd1903u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1905  call 0xc9fbc
    X86_AT(c, 0xd1905u);
    push32(c, 0xd190au); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xd190au);
    X86_TICK(c, 9);
    // 0d190a  push 4
    X86_AT(c, 0xd190au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d190c  call 0xca100
    X86_AT(c, 0xd190cu);
    push32(c, 0xd1911u); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xd1911u);
    X86_TICK(c, 7);
    // 0d1911  call 0xd1754
    X86_AT(c, 0xd1911u);
    push32(c, 0xd1916u); x86_call_known(c, 0xd1754u, f_000d1754); X86_RET(c, 0xd1916u);
    X86_TICK(c, 9);
    // 0d1916  push 7
    X86_AT(c, 0xd1916u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1918  call 0xca0a0
    X86_AT(c, 0xd1918u);
    push32(c, 0xd191du); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd191du);
    X86_TICK(c, 11);
    // 0d191d  add esp, 0x30
    X86_AT(c, 0xd191du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0d1920  lea edx, [edi - 0x43]
    X86_AT(c, 0xd1920u);
    c.r[2] = (uint32_t)(c.r[7] + 0xFFFFFFBDu);
    // 0d1923  cmp edx, 8
    X86_AT(c, 0xd1923u);
    (void)x86_sub(c, c.r[2], 0x8u, 0, 4);
    // 0d1926  ja 0xd199b
    X86_AT(c, 0xd1926u);
    if (x86_cc(c, 7)) { goto L_d199b; }
    X86_TICK(c, 7);
    // 0d192c  jmp dword ptr cs:[edx*4 + 0xd1934]
    X86_AT(c, 0xd192cu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD1934u)));
      switch (t) {
      case 0xd1958u: goto L_d1958;
      case 0xd1963u: goto L_d1963;
      case 0xd196eu: goto L_d196e;
      case 0xd1979u: goto L_d1979;
      case 0xd1984u: goto L_d1984;
      case 0xd198fu: goto L_d198f;
      default: x86_jump(c, t); return; } }
L_d1958:
    X86_TICK(c, 12);
    // 0d1958  movzx ebx, bl
    X86_AT(c, 0xd1958u);
    c.r[3] = g8(c, 3);
    // 0d195b  push ebx
    X86_AT(c, 0xd195bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d195c  call 0xd0eec
    X86_AT(c, 0xd195cu);
    push32(c, 0xd1961u); x86_call_known(c, 0xd0eecu, f_000d0eec); X86_RET(c, 0xd1961u);
    X86_TICK(c, 7);
    // 0d1961  jmp 0xd1998
    X86_AT(c, 0xd1961u);
    goto L_d1998;
L_d1963:
    X86_TICK(c, 12);
    // 0d1963  movzx ebx, bl
    X86_AT(c, 0xd1963u);
    c.r[3] = g8(c, 3);
    // 0d1966  push ebx
    X86_AT(c, 0xd1966u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d1967  call 0xd124c
    X86_AT(c, 0xd1967u);
    push32(c, 0xd196cu); x86_call_known(c, 0xd124cu, f_000d124c); X86_RET(c, 0xd196cu);
    X86_TICK(c, 7);
    // 0d196c  jmp 0xd1998
    X86_AT(c, 0xd196cu);
    goto L_d1998;
L_d196e:
    X86_TICK(c, 12);
    // 0d196e  movzx ebx, bl
    X86_AT(c, 0xd196eu);
    c.r[3] = g8(c, 3);
    // 0d1971  push ebx
    X86_AT(c, 0xd1971u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d1972  call 0xd0b98
    X86_AT(c, 0xd1972u);
    push32(c, 0xd1977u); x86_call_known(c, 0xd0b98u, f_000d0b98); X86_RET(c, 0xd1977u);
    X86_TICK(c, 7);
    // 0d1977  jmp 0xd1998
    X86_AT(c, 0xd1977u);
    goto L_d1998;
L_d1979:
    X86_TICK(c, 12);
    // 0d1979  movzx ebx, bl
    X86_AT(c, 0xd1979u);
    c.r[3] = g8(c, 3);
    // 0d197c  push ebx
    X86_AT(c, 0xd197cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d197d  call 0xd10b8
    X86_AT(c, 0xd197du);
    push32(c, 0xd1982u); x86_call_known(c, 0xd10b8u, f_000d10b8); X86_RET(c, 0xd1982u);
    X86_TICK(c, 7);
    // 0d1982  jmp 0xd1998
    X86_AT(c, 0xd1982u);
    goto L_d1998;
L_d1984:
    X86_TICK(c, 12);
    // 0d1984  movzx ebx, bl
    X86_AT(c, 0xd1984u);
    c.r[3] = g8(c, 3);
    // 0d1987  push ebx
    X86_AT(c, 0xd1987u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d1988  call 0xd077c
    X86_AT(c, 0xd1988u);
    push32(c, 0xd198du); x86_call_known(c, 0xd077cu, f_000d077c); X86_RET(c, 0xd198du);
    X86_TICK(c, 7);
    // 0d198d  jmp 0xd1998
    X86_AT(c, 0xd198du);
    goto L_d1998;
L_d198f:
    X86_TICK(c, 12);
    // 0d198f  movzx ebx, bl
    X86_AT(c, 0xd198fu);
    c.r[3] = g8(c, 3);
    // 0d1992  push ebx
    X86_AT(c, 0xd1992u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d1993  call 0xd1494
    X86_AT(c, 0xd1993u);
    push32(c, 0xd1998u); x86_call_known(c, 0xd1494u, f_000d1494); X86_RET(c, 0xd1998u);
L_d1998:
    X86_TICK(c, 2);
    // 0d1998  add esp, 4
    X86_AT(c, 0xd1998u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_d199b:
    X86_TICK(c, 13);
    // 0d199b  mov dword ptr [0xbef90], 1
    X86_AT(c, 0xd199bu);
    wr32((c.sbase[3] + (uint32_t)(0xBEF90u)), 0x1u);
    // 0d19a5  push 0
    X86_AT(c, 0xd19a5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d19a7  push 4
    X86_AT(c, 0xd19a7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d19a9  call 0xca2d4
    X86_AT(c, 0xd19a9u);
    push32(c, 0xd19aeu); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd19aeu);
    X86_TICK(c, 7);
    // 0d19ae  call 0xd3370
    X86_AT(c, 0xd19aeu);
    push32(c, 0xd19b3u); x86_call_known(c, 0xd3370u, f_000d3370); X86_RET(c, 0xd19b3u);
    X86_TICK(c, 7);
    // 0d19b3  call 0xd351c
    X86_AT(c, 0xd19b3u);
    push32(c, 0xd19b8u); x86_call_known(c, 0xd351cu, f_000d351c); X86_RET(c, 0xd19b8u);
    X86_TICK(c, 7);
    // 0d19b8  call 0xcc700
    X86_AT(c, 0xd19b8u);
    push32(c, 0xd19bdu); x86_call_known(c, 0xcc700u, f_000cc700); X86_RET(c, 0xd19bdu);
    X86_TICK(c, 2);
    // 0d19bd  add esp, 8
    X86_AT(c, 0xd19bdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d19c0:
    X86_TICK(c, 18);
    // 0d19c0  pop edi
    X86_AT(c, 0xd19c0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d19c1  pop ebx
    X86_AT(c, 0xd19c1u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d19c2  ret 
    X86_AT(c, 0xd19c2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd1824u, "ran off the end of a function");
}
void f_000d19c0(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0d19c0  pop edi
    X86_AT(c, 0xd19c0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d19c1  pop ebx
    X86_AT(c, 0xd19c1u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d19c2  ret 
    X86_AT(c, 0xd19c2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd19c0u, "ran off the end of a function");
}
void f_000d19c4(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0d19c4  mov eax, dword ptr [0xaaeac]
    X86_AT(c, 0xd19c4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAAEACu)));
    // 0d19c9  mov dword ptr [eax*4 + 0xb0346], 1
    X86_AT(c, 0xd19c9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB0346u)), 0x1u);
    // 0d19d4  test al, 1
    X86_AT(c, 0xd19d4u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0d19d6  jne 0xd1a4a
    X86_AT(c, 0xd19d6u);
    if (x86_cc(c, 5)) { goto L_d1a4a; }
    X86_TICK(c, 9);
    // 0d19d8  push 0x7af0
    X86_AT(c, 0xd19d8u);
    { uint32_t v = 0x7AF0u; push32(c, v); }
    // 0d19dd  call 0xcc7bc
    X86_AT(c, 0xd19ddu);
    push32(c, 0xd19e2u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd19e2u);
    X86_TICK(c, 15);
    // 0d19e2  add esp, 4
    X86_AT(c, 0xd19e2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d19e5  mov edx, dword ptr [0xaaeac]
    X86_AT(c, 0xd19e5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xAAEACu)));
    // 0d19eb  sub edx, 2
    X86_AT(c, 0xd19ebu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0d19ee  cmp edx, 6
    X86_AT(c, 0xd19eeu);
    (void)x86_sub(c, c.r[2], 0x6u, 0, 4);
    // 0d19f1  ja 0xd1abc
    X86_AT(c, 0xd19f1u);
    if (x86_cc(c, 7)) { goto L_d1abc; }
    X86_TICK(c, 7);
    // 0d19f7  jmp dword ptr cs:[edx*4 + 0xd19ff]
    X86_AT(c, 0xd19f7u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD19FFu)));
      switch (t) {
      case 0xd1a1bu: goto L_d1a1b;
      case 0xd1a24u: goto L_d1a24;
      case 0xd1a2du: goto L_d1a2d;
      case 0xd1a36u: goto L_d1a36;
      case 0xd1abcu: goto L_d1abc;
      default: x86_jump(c, t); return; } }
L_d1a1b:
    X86_TICK(c, 11);
    // 0d1a1b  push 0xf
    X86_AT(c, 0xd1a1bu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d1a1d  push 0x7b2c
    X86_AT(c, 0xd1a1du);
    { uint32_t v = 0x7B2Cu; push32(c, v); }
    // 0d1a22  jmp 0xd1a3d
    X86_AT(c, 0xd1a22u);
    goto L_d1a3d;
L_d1a24:
    X86_TICK(c, 11);
    // 0d1a24  push 0xf
    X86_AT(c, 0xd1a24u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d1a26  push 0x7b6c
    X86_AT(c, 0xd1a26u);
    { uint32_t v = 0x7B6Cu; push32(c, v); }
    // 0d1a2b  jmp 0xd1a3d
    X86_AT(c, 0xd1a2bu);
    goto L_d1a3d;
L_d1a2d:
    X86_TICK(c, 11);
    // 0d1a2d  push 0xf
    X86_AT(c, 0xd1a2du);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d1a2f  push 0x7ba8
    X86_AT(c, 0xd1a2fu);
    { uint32_t v = 0x7BA8u; push32(c, v); }
    // 0d1a34  jmp 0xd1a3d
    X86_AT(c, 0xd1a34u);
    goto L_d1a3d;
L_d1a36:
    X86_TICK(c, 4);
    // 0d1a36  push 0xf
    X86_AT(c, 0xd1a36u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d1a38  push 0x7bd4
    X86_AT(c, 0xd1a38u);
    { uint32_t v = 0x7BD4u; push32(c, v); }
L_d1a3d:
    X86_TICK(c, 7);
    // 0d1a3d  call 0xcc830
    X86_AT(c, 0xd1a3du);
    push32(c, 0xd1a42u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd1a42u);
    X86_TICK(c, 9);
    // 0d1a42  add esp, 8
    X86_AT(c, 0xd1a42u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d1a45  jmp 0xd1abc
    X86_AT(c, 0xd1a45u);
    goto L_d1abc;
L_d1a4a:
    X86_TICK(c, 9);
    // 0d1a4a  push 0x7c08
    X86_AT(c, 0xd1a4au);
    { uint32_t v = 0x7C08u; push32(c, v); }
    // 0d1a4f  call 0xcc7bc
    X86_AT(c, 0xd1a4fu);
    push32(c, 0xd1a54u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd1a54u);
    X86_TICK(c, 15);
    // 0d1a54  add esp, 4
    X86_AT(c, 0xd1a54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d1a57  mov edx, dword ptr [0xaaeac]
    X86_AT(c, 0xd1a57u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xAAEACu)));
    // 0d1a5d  dec edx
    X86_AT(c, 0xd1a5du);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0d1a5e  cmp edx, 6
    X86_AT(c, 0xd1a5eu);
    (void)x86_sub(c, c.r[2], 0x6u, 0, 4);
    // 0d1a61  ja 0xd1aaf
    X86_AT(c, 0xd1a61u);
    if (x86_cc(c, 7)) { goto L_d1aaf; }
    X86_TICK(c, 7);
    // 0d1a63  jmp dword ptr cs:[edx*4 + 0xd1a6b]
    X86_AT(c, 0xd1a63u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD1A6Bu)));
      switch (t) {
      case 0xd1a87u: goto L_d1a87;
      case 0xd1a8fu: goto L_d1a8f;
      case 0xd1a97u: goto L_d1a97;
      case 0xd1a9fu: goto L_d1a9f;
      case 0xd1aafu: goto L_d1aaf;
      default: x86_jump(c, t); return; } }
L_d1a87:
    X86_TICK(c, 12);
    // 0d1a87  push dword ptr [0xaaf58]
    X86_AT(c, 0xd1a87u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xAAF58u))); push32(c, v); }
    // 0d1a8d  jmp 0xd1aa5
    X86_AT(c, 0xd1a8du);
    goto L_d1aa5;
L_d1a8f:
    X86_TICK(c, 12);
    // 0d1a8f  push dword ptr [0xaaf60]
    X86_AT(c, 0xd1a8fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xAAF60u))); push32(c, v); }
    // 0d1a95  jmp 0xd1aa5
    X86_AT(c, 0xd1a95u);
    goto L_d1aa5;
L_d1a97:
    X86_TICK(c, 12);
    // 0d1a97  push dword ptr [0xaaf68]
    X86_AT(c, 0xd1a97u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xAAF68u))); push32(c, v); }
    // 0d1a9d  jmp 0xd1aa5
    X86_AT(c, 0xd1a9du);
    goto L_d1aa5;
L_d1a9f:
    X86_TICK(c, 5);
    // 0d1a9f  push dword ptr [0xaaf70]
    X86_AT(c, 0xd1a9fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xAAF70u))); push32(c, v); }
L_d1aa5:
    X86_TICK(c, 9);
    // 0d1aa5  push 7
    X86_AT(c, 0xd1aa5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1aa7  call 0xc8cdc
    X86_AT(c, 0xd1aa7u);
    push32(c, 0xd1aacu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd1aacu);
    X86_TICK(c, 2);
    // 0d1aac  add esp, 8
    X86_AT(c, 0xd1aacu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d1aaf:
    X86_TICK(c, 9);
    // 0d1aaf  push 0x7c2c
    X86_AT(c, 0xd1aafu);
    { uint32_t v = 0x7C2Cu; push32(c, v); }
    // 0d1ab4  call 0xcc7bc
    X86_AT(c, 0xd1ab4u);
    push32(c, 0xd1ab9u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd1ab9u);
    X86_TICK(c, 2);
    // 0d1ab9  add esp, 4
    X86_AT(c, 0xd1ab9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_d1abc:
    X86_TICK(c, 9);
    // 0d1abc  push 0x7c44
    X86_AT(c, 0xd1abcu);
    { uint32_t v = 0x7C44u; push32(c, v); }
    // 0d1ac1  call 0xcc7bc
    X86_AT(c, 0xd1ac1u);
    push32(c, 0xd1ac6u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd1ac6u);
    X86_TICK(c, 9);
    // 0d1ac6  push 0x7c84
    X86_AT(c, 0xd1ac6u);
    { uint32_t v = 0x7C84u; push32(c, v); }
    // 0d1acb  call 0xcc7bc
    X86_AT(c, 0xd1acbu);
    push32(c, 0xd1ad0u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd1ad0u);
    X86_TICK(c, 7);
    // 0d1ad0  call 0xcc85c
    X86_AT(c, 0xd1ad0u);
    push32(c, 0xd1ad5u); x86_call_known(c, 0xcc85cu, f_000cc85c); X86_RET(c, 0xd1ad5u);
    X86_TICK(c, 14);
    // 0d1ad5  mov dword ptr [0xbef90], 1
    X86_AT(c, 0xd1ad5u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF90u)), 0x1u);
    // 0d1adf  add esp, 8
    X86_AT(c, 0xd1adfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d1ae2  ret 
    X86_AT(c, 0xd1ae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd19c4u, "ran off the end of a function");
}
void f_000d1ae4(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0d1ae4  mov eax, dword ptr [0xaaeac]
    X86_AT(c, 0xd1ae4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAAEACu)));
    // 0d1ae9  cmp dword ptr [eax*4 + 0xb0346], 1
    X86_AT(c, 0xd1ae9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB0346u))), 0x1u, 0, 4);
    // 0d1af1  sete al
    X86_AT(c, 0xd1af1u);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 0d1af4  movzx eax, al
    X86_AT(c, 0xd1af4u);
    c.r[0] = g8(c, 0);
    // 0d1af7  ret 
    X86_AT(c, 0xd1af7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd1ae4u, "ran off the end of a function");
}
void f_000d1af8(X86Cpu& c) {
    X86_TICK(c, 41);
    // 0d1af8  push edi
    X86_AT(c, 0xd1af8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d1af9  mov eax, 0x63
    X86_AT(c, 0xd1af9u);
    c.r[0] = 0x63u;
    // 0d1afe  sub eax, dword ptr [0xb0302]
    X86_AT(c, 0xd1afeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0xB0302u))), 0, 4); }
    // 0d1b04  cdq 
    X86_AT(c, 0xd1b04u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d1b05  sub eax, edx
    X86_AT(c, 0xd1b05u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0d1b07  sar eax, 1
    X86_AT(c, 0xd1b07u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0d1b09  cdq 
    X86_AT(c, 0xd1b09u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d1b0a  sub eax, edx
    X86_AT(c, 0xd1b0au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0d1b0c  sar eax, 1
    X86_AT(c, 0xd1b0cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0d1b0e  cdq 
    X86_AT(c, 0xd1b0eu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d1b0f  sub eax, edx
    X86_AT(c, 0xd1b0fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0d1b11  sar eax, 1
    X86_AT(c, 0xd1b11u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0d1b13  xchg edi, eax
    X86_AT(c, 0xd1b13u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d1b14  and edi, edi
    X86_AT(c, 0xd1b14u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0d1b16  jne 0xd1b26
    X86_AT(c, 0xd1b16u);
    if (x86_cc(c, 5)) { goto L_d1b26; }
    X86_TICK(c, 12);
    // 0d1b18  cmp dword ptr [0xb0302], 0x63
    X86_AT(c, 0xd1b18u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0302u))), 0x63u, 0, 4);
    // 0d1b1f  je 0xd1b26
    X86_AT(c, 0xd1b1fu);
    if (x86_cc(c, 4)) { goto L_d1b26; }
    X86_TICK(c, 2);
    // 0d1b21  mov edi, 1
    X86_AT(c, 0xd1b21u);
    c.r[7] = 0x1u;
L_d1b26:
    X86_TICK(c, 9);
    // 0d1b26  push 0x7cd4
    X86_AT(c, 0xd1b26u);
    { uint32_t v = 0x7CD4u; push32(c, v); }
    // 0d1b2b  call 0xcc7bc
    X86_AT(c, 0xd1b2bu);
    push32(c, 0xd1b30u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd1b30u);
    X86_TICK(c, 13);
    // 0d1b30  push 2
    X86_AT(c, 0xd1b30u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d1b32  push edi
    X86_AT(c, 0xd1b32u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d1b33  push 7
    X86_AT(c, 0xd1b33u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1b35  call 0xc8cb8
    X86_AT(c, 0xd1b35u);
    push32(c, 0xd1b3au); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd1b3au);
    X86_TICK(c, 11);
    // 0d1b3a  push 0x7d24
    X86_AT(c, 0xd1b3au);
    { uint32_t v = 0x7D24u; push32(c, v); }
    // 0d1b3f  push 7
    X86_AT(c, 0xd1b3fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1b41  call 0xc8cdc
    X86_AT(c, 0xd1b41u);
    push32(c, 0xd1b46u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd1b46u);
    X86_TICK(c, 9);
    // 0d1b46  add esp, 0x18
    X86_AT(c, 0xd1b46u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d1b49  cmp edi, 1
    X86_AT(c, 0xd1b49u);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0d1b4c  je 0xd1b5d
    X86_AT(c, 0xd1b4cu);
    if (x86_cc(c, 4)) { goto L_d1b5d; }
    X86_TICK(c, 11);
    // 0d1b4e  push 0x7d4c
    X86_AT(c, 0xd1b4eu);
    { uint32_t v = 0x7D4Cu; push32(c, v); }
    // 0d1b53  push 7
    X86_AT(c, 0xd1b53u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1b55  call 0xc8cdc
    X86_AT(c, 0xd1b55u);
    push32(c, 0xd1b5au); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd1b5au);
    X86_TICK(c, 2);
    // 0d1b5a  add esp, 8
    X86_AT(c, 0xd1b5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d1b5d:
    X86_TICK(c, 9);
    // 0d1b5d  push 7
    X86_AT(c, 0xd1b5du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1b5f  call 0xca3cc
    X86_AT(c, 0xd1b5fu);
    push32(c, 0xd1b64u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd1b64u);
    X86_TICK(c, 11);
    // 0d1b64  push 0xf
    X86_AT(c, 0xd1b64u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d1b66  push 0x7d50
    X86_AT(c, 0xd1b66u);
    { uint32_t v = 0x7D50u; push32(c, v); }
    // 0d1b6b  call 0xcc830
    X86_AT(c, 0xd1b6bu);
    push32(c, 0xd1b70u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd1b70u);
    X86_TICK(c, 14);
    // 0d1b70  add dword ptr [0xb0302], edi
    X86_AT(c, 0xd1b70u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB0302u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 0d1b76  call 0xcc700
    X86_AT(c, 0xd1b76u);
    push32(c, 0xd1b7bu); x86_call_known(c, 0xcc700u, f_000cc700); X86_RET(c, 0xd1b7bu);
    X86_TICK(c, 7);
    // 0d1b7b  call 0xcc85c
    X86_AT(c, 0xd1b7bu);
    push32(c, 0xd1b80u); x86_call_known(c, 0xcc85cu, f_000cc85c); X86_RET(c, 0xd1b80u);
    X86_TICK(c, 18);
    // 0d1b80  mov dword ptr [0xbef90], 1
    X86_AT(c, 0xd1b80u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF90u)), 0x1u);
    // 0d1b8a  add esp, 0xc
    X86_AT(c, 0xd1b8au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d1b8d  pop edi
    X86_AT(c, 0xd1b8du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d1b8e  ret 
    X86_AT(c, 0xd1b8eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd1af8u, "ran off the end of a function");
}
void f_000d1b90(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0d1b90  push edi
    X86_AT(c, 0xd1b90u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d1b91  push 0xa
    X86_AT(c, 0xd1b91u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d1b93  push 0xf
    X86_AT(c, 0xd1b93u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d1b95  push 0xf
    X86_AT(c, 0xd1b95u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d1b97  push 0xb
    X86_AT(c, 0xd1b97u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d1b99  push 0x1f
    X86_AT(c, 0xd1b99u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0d1b9b  push 0xb6
    X86_AT(c, 0xd1b9bu);
    { uint32_t v = 0xB6u; push32(c, v); }
    // 0d1ba0  push 0x107
    X86_AT(c, 0xd1ba0u);
    { uint32_t v = 0x107u; push32(c, v); }
    // 0d1ba5  push 0x6f
    X86_AT(c, 0xd1ba5u);
    { uint32_t v = 0x6Fu; push32(c, v); }
    // 0d1ba7  push 0x172
    X86_AT(c, 0xd1ba7u);
    { uint32_t v = 0x172u; push32(c, v); }
    // 0d1bac  push 4
    X86_AT(c, 0xd1bacu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1bae  call 0xc9fbc
    X86_AT(c, 0xd1baeu);
    push32(c, 0xd1bb3u); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xd1bb3u);
    X86_TICK(c, 9);
    // 0d1bb3  push 4
    X86_AT(c, 0xd1bb3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1bb5  call 0xca100
    X86_AT(c, 0xd1bb5u);
    push32(c, 0xd1bbau); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xd1bbau);
    X86_TICK(c, 9);
    // 0d1bba  push 4
    X86_AT(c, 0xd1bbau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1bbc  call 0xca0a0
    X86_AT(c, 0xd1bbcu);
    push32(c, 0xd1bc1u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd1bc1u);
    X86_TICK(c, 17);
    // 0d1bc1  push dword ptr [0xaa0e8]
    X86_AT(c, 0xd1bc1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xAA0E8u))); push32(c, v); }
    // 0d1bc7  push dword ptr [0xaa0e4]
    X86_AT(c, 0xd1bc7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xAA0E4u))); push32(c, v); }
    // 0d1bcd  call 0xcf89c
    X86_AT(c, 0xd1bcdu);
    push32(c, 0xd1bd2u); x86_call_known(c, 0xcf89cu, f_000cf89c); X86_RET(c, 0xd1bd2u);
    X86_TICK(c, 14);
    // 0d1bd2  xchg edi, eax
    X86_AT(c, 0xd1bd2u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d1bd3  push 1
    X86_AT(c, 0xd1bd3u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d1bd5  push 0
    X86_AT(c, 0xd1bd5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1bd7  call 0xcc814
    X86_AT(c, 0xd1bd7u);
    push32(c, 0xd1bdcu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd1bdcu);
    X86_TICK(c, 13);
    // 0d1bdc  add esp, 0x40
    X86_AT(c, 0xd1bdcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0d1bdf  push 0x7d6c
    X86_AT(c, 0xd1bdfu);
    { uint32_t v = 0x7D6Cu; push32(c, v); }
    // 0d1be4  push 4
    X86_AT(c, 0xd1be4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1be6  call 0xc8cdc
    X86_AT(c, 0xd1be6u);
    push32(c, 0xd1bebu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd1bebu);
    X86_TICK(c, 11);
    // 0d1beb  push 2
    X86_AT(c, 0xd1bebu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d1bed  push 0
    X86_AT(c, 0xd1bedu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1bef  call 0xcc814
    X86_AT(c, 0xd1befu);
    push32(c, 0xd1bf4u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd1bf4u);
    X86_TICK(c, 11);
    // 0d1bf4  push 0x7d90
    X86_AT(c, 0xd1bf4u);
    { uint32_t v = 0x7D90u; push32(c, v); }
    // 0d1bf9  push 4
    X86_AT(c, 0xd1bf9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1bfb  call 0xc8cdc
    X86_AT(c, 0xd1bfbu);
    push32(c, 0xd1c00u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd1c00u);
    X86_TICK(c, 11);
    // 0d1c00  push 3
    X86_AT(c, 0xd1c00u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d1c02  push 0
    X86_AT(c, 0xd1c02u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1c04  call 0xcc814
    X86_AT(c, 0xd1c04u);
    push32(c, 0xd1c09u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd1c09u);
    X86_TICK(c, 11);
    // 0d1c09  add esp, 0x20
    X86_AT(c, 0xd1c09u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0d1c0c  mov edx, edi
    X86_AT(c, 0xd1c0cu);
    c.r[2] = c.r[7];
    // 0d1c0e  cmp edx, 3
    X86_AT(c, 0xd1c0eu);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0d1c11  ja 0xd1e85
    X86_AT(c, 0xd1c11u);
    if (x86_cc(c, 7)) { goto L_d1e85; }
    X86_TICK(c, 7);
    // 0d1c17  jmp dword ptr cs:[edx*4 + 0xd1c1f]
    X86_AT(c, 0xd1c17u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD1C1Fu)));
      switch (t) {
      case 0xd1c2fu: goto L_d1c2f;
      case 0xd1cc7u: goto L_d1cc7;
      case 0xd1d5fu: goto L_d1d5f;
      case 0xd1de5u: goto L_d1de5;
      default: x86_jump(c, t); return; } }
L_d1c2f:
    X86_TICK(c, 11);
    // 0d1c2f  push 0x7dc4
    X86_AT(c, 0xd1c2fu);
    { uint32_t v = 0x7DC4u; push32(c, v); }
    // 0d1c34  push 4
    X86_AT(c, 0xd1c34u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1c36  call 0xc8cdc
    X86_AT(c, 0xd1c36u);
    push32(c, 0xd1c3bu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd1c3bu);
    X86_TICK(c, 11);
    // 0d1c3b  push 4
    X86_AT(c, 0xd1c3bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1c3d  push 0
    X86_AT(c, 0xd1c3du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1c3f  call 0xcc814
    X86_AT(c, 0xd1c3fu);
    push32(c, 0xd1c44u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd1c44u);
    X86_TICK(c, 11);
    // 0d1c44  push 0x7e04
    X86_AT(c, 0xd1c44u);
    { uint32_t v = 0x7E04u; push32(c, v); }
    // 0d1c49  push 4
    X86_AT(c, 0xd1c49u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1c4b  call 0xc8cdc
    X86_AT(c, 0xd1c4bu);
    push32(c, 0xd1c50u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd1c50u);
    X86_TICK(c, 11);
    // 0d1c50  push 5
    X86_AT(c, 0xd1c50u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d1c52  push 0
    X86_AT(c, 0xd1c52u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1c54  call 0xcc814
    X86_AT(c, 0xd1c54u);
    push32(c, 0xd1c59u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd1c59u);
    X86_TICK(c, 11);
    // 0d1c59  push 0x7e40
    X86_AT(c, 0xd1c59u);
    { uint32_t v = 0x7E40u; push32(c, v); }
    // 0d1c5e  push 4
    X86_AT(c, 0xd1c5eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1c60  call 0xc8cdc
    X86_AT(c, 0xd1c60u);
    push32(c, 0xd1c65u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd1c65u);
    X86_TICK(c, 11);
    // 0d1c65  push 6
    X86_AT(c, 0xd1c65u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d1c67  push 0
    X86_AT(c, 0xd1c67u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1c69  call 0xcc814
    X86_AT(c, 0xd1c69u);
    push32(c, 0xd1c6eu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd1c6eu);
    X86_TICK(c, 11);
    // 0d1c6e  push 0x7e68
    X86_AT(c, 0xd1c6eu);
    { uint32_t v = 0x7E68u; push32(c, v); }
    // 0d1c73  push 4
    X86_AT(c, 0xd1c73u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1c75  call 0xc8cdc
    X86_AT(c, 0xd1c75u);
    push32(c, 0xd1c7au); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd1c7au);
    X86_TICK(c, 11);
    // 0d1c7a  push 7
    X86_AT(c, 0xd1c7au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1c7c  push 0
    X86_AT(c, 0xd1c7cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1c7e  call 0xcc814
    X86_AT(c, 0xd1c7eu);
    push32(c, 0xd1c83u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd1c83u);
    X86_TICK(c, 13);
    // 0d1c83  add esp, 0x40
    X86_AT(c, 0xd1c83u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0d1c86  push 0x7ea8
    X86_AT(c, 0xd1c86u);
    { uint32_t v = 0x7EA8u; push32(c, v); }
    // 0d1c8b  push 4
    X86_AT(c, 0xd1c8bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1c8d  call 0xc8cdc
    X86_AT(c, 0xd1c8du);
    push32(c, 0xd1c92u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd1c92u);
    X86_TICK(c, 11);
    // 0d1c92  push 8
    X86_AT(c, 0xd1c92u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d1c94  push 0
    X86_AT(c, 0xd1c94u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1c96  call 0xcc814
    X86_AT(c, 0xd1c96u);
    push32(c, 0xd1c9bu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd1c9bu);
    X86_TICK(c, 11);
    // 0d1c9b  push 0x7ecc
    X86_AT(c, 0xd1c9bu);
    { uint32_t v = 0x7ECCu; push32(c, v); }
    // 0d1ca0  push 4
    X86_AT(c, 0xd1ca0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1ca2  call 0xc8cdc
    X86_AT(c, 0xd1ca2u);
    push32(c, 0xd1ca7u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd1ca7u);
    X86_TICK(c, 11);
    // 0d1ca7  push 9
    X86_AT(c, 0xd1ca7u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0d1ca9  push 0
    X86_AT(c, 0xd1ca9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1cab  call 0xcc814
    X86_AT(c, 0xd1cabu);
    push32(c, 0xd1cb0u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd1cb0u);
    X86_TICK(c, 11);
    // 0d1cb0  push 0x7ef0
    X86_AT(c, 0xd1cb0u);
    { uint32_t v = 0x7EF0u; push32(c, v); }
    // 0d1cb5  push 4
    X86_AT(c, 0xd1cb5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1cb7  call 0xc8cdc
    X86_AT(c, 0xd1cb7u);
    push32(c, 0xd1cbcu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd1cbcu);
    X86_TICK(c, 13);
    // 0d1cbc  inc dword ptr [0xb036a]
    X86_AT(c, 0xd1cbcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB036Au)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d1cc2  jmp 0xd1e82
    X86_AT(c, 0xd1cc2u);
    goto L_d1e82;
L_d1cc7:
    X86_TICK(c, 11);
    // 0d1cc7  push 0x7f14
    X86_AT(c, 0xd1cc7u);
    { uint32_t v = 0x7F14u; push32(c, v); }
    // 0d1ccc  push 4
    X86_AT(c, 0xd1cccu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1cce  call 0xc8cdc
    X86_AT(c, 0xd1cceu);
    push32(c, 0xd1cd3u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd1cd3u);
    X86_TICK(c, 11);
    // 0d1cd3  push 4
    X86_AT(c, 0xd1cd3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1cd5  push 0
    X86_AT(c, 0xd1cd5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1cd7  call 0xcc814
    X86_AT(c, 0xd1cd7u);
    push32(c, 0xd1cdcu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd1cdcu);
    X86_TICK(c, 11);
    // 0d1cdc  push 0x7f54
    X86_AT(c, 0xd1cdcu);
    { uint32_t v = 0x7F54u; push32(c, v); }
    // 0d1ce1  push 4
    X86_AT(c, 0xd1ce1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1ce3  call 0xc8cdc
    X86_AT(c, 0xd1ce3u);
    push32(c, 0xd1ce8u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd1ce8u);
    X86_TICK(c, 11);
    // 0d1ce8  push 5
    X86_AT(c, 0xd1ce8u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d1cea  push 0
    X86_AT(c, 0xd1ceau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1cec  call 0xcc814
    X86_AT(c, 0xd1cecu);
    push32(c, 0xd1cf1u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd1cf1u);
    X86_TICK(c, 11);
    // 0d1cf1  push 0x7f90
    X86_AT(c, 0xd1cf1u);
    { uint32_t v = 0x7F90u; push32(c, v); }
    // 0d1cf6  push 4
    X86_AT(c, 0xd1cf6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1cf8  call 0xc8cdc
    X86_AT(c, 0xd1cf8u);
    push32(c, 0xd1cfdu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd1cfdu);
    X86_TICK(c, 11);
    // 0d1cfd  push 6
    X86_AT(c, 0xd1cfdu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d1cff  push 0
    X86_AT(c, 0xd1cffu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1d01  call 0xcc814
    X86_AT(c, 0xd1d01u);
    push32(c, 0xd1d06u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd1d06u);
    X86_TICK(c, 11);
    // 0d1d06  push 0x7fcc
    X86_AT(c, 0xd1d06u);
    { uint32_t v = 0x7FCCu; push32(c, v); }
    // 0d1d0b  push 4
    X86_AT(c, 0xd1d0bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1d0d  call 0xc8cdc
    X86_AT(c, 0xd1d0du);
    push32(c, 0xd1d12u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd1d12u);
    X86_TICK(c, 11);
    // 0d1d12  push 7
    X86_AT(c, 0xd1d12u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1d14  push 0
    X86_AT(c, 0xd1d14u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1d16  call 0xcc814
    X86_AT(c, 0xd1d16u);
    push32(c, 0xd1d1bu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd1d1bu);
    X86_TICK(c, 13);
    // 0d1d1b  add esp, 0x40
    X86_AT(c, 0xd1d1bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0d1d1e  push 0x800c
    X86_AT(c, 0xd1d1eu);
    { uint32_t v = 0x800Cu; push32(c, v); }
    // 0d1d23  push 4
    X86_AT(c, 0xd1d23u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1d25  call 0xc8cdc
    X86_AT(c, 0xd1d25u);
    push32(c, 0xd1d2au); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd1d2au);
    X86_TICK(c, 11);
    // 0d1d2a  push 8
    X86_AT(c, 0xd1d2au);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d1d2c  push 0
    X86_AT(c, 0xd1d2cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1d2e  call 0xcc814
    X86_AT(c, 0xd1d2eu);
    push32(c, 0xd1d33u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd1d33u);
    X86_TICK(c, 11);
    // 0d1d33  push 0x8030
    X86_AT(c, 0xd1d33u);
    { uint32_t v = 0x8030u; push32(c, v); }
    // 0d1d38  push 4
    X86_AT(c, 0xd1d38u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1d3a  call 0xc8cdc
    X86_AT(c, 0xd1d3au);
    push32(c, 0xd1d3fu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd1d3fu);
    X86_TICK(c, 11);
    // 0d1d3f  push 9
    X86_AT(c, 0xd1d3fu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0d1d41  push 0
    X86_AT(c, 0xd1d41u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1d43  call 0xcc814
    X86_AT(c, 0xd1d43u);
    push32(c, 0xd1d48u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd1d48u);
    X86_TICK(c, 11);
    // 0d1d48  push 0x8054
    X86_AT(c, 0xd1d48u);
    { uint32_t v = 0x8054u; push32(c, v); }
    // 0d1d4d  push 4
    X86_AT(c, 0xd1d4du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1d4f  call 0xc8cdc
    X86_AT(c, 0xd1d4fu);
    push32(c, 0xd1d54u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd1d54u);
    X86_TICK(c, 13);
    // 0d1d54  inc dword ptr [0xb036e]
    X86_AT(c, 0xd1d54u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB036Eu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d1d5a  jmp 0xd1e82
    X86_AT(c, 0xd1d5au);
    goto L_d1e82;
L_d1d5f:
    X86_TICK(c, 11);
    // 0d1d5f  push 0x8078
    X86_AT(c, 0xd1d5fu);
    { uint32_t v = 0x8078u; push32(c, v); }
    // 0d1d64  push 4
    X86_AT(c, 0xd1d64u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1d66  call 0xc8cdc
    X86_AT(c, 0xd1d66u);
    push32(c, 0xd1d6bu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd1d6bu);
    X86_TICK(c, 11);
    // 0d1d6b  push 4
    X86_AT(c, 0xd1d6bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1d6d  push 0
    X86_AT(c, 0xd1d6du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1d6f  call 0xcc814
    X86_AT(c, 0xd1d6fu);
    push32(c, 0xd1d74u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd1d74u);
    X86_TICK(c, 11);
    // 0d1d74  push 0x80b0
    X86_AT(c, 0xd1d74u);
    { uint32_t v = 0x80B0u; push32(c, v); }
    // 0d1d79  push 4
    X86_AT(c, 0xd1d79u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1d7b  call 0xc8cdc
    X86_AT(c, 0xd1d7bu);
    push32(c, 0xd1d80u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd1d80u);
    X86_TICK(c, 11);
    // 0d1d80  push 5
    X86_AT(c, 0xd1d80u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d1d82  push 0
    X86_AT(c, 0xd1d82u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1d84  call 0xcc814
    X86_AT(c, 0xd1d84u);
    push32(c, 0xd1d89u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd1d89u);
    X86_TICK(c, 11);
    // 0d1d89  push 0x80f0
    X86_AT(c, 0xd1d89u);
    { uint32_t v = 0x80F0u; push32(c, v); }
    // 0d1d8e  push 4
    X86_AT(c, 0xd1d8eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1d90  call 0xc8cdc
    X86_AT(c, 0xd1d90u);
    push32(c, 0xd1d95u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd1d95u);
    X86_TICK(c, 11);
    // 0d1d95  push 6
    X86_AT(c, 0xd1d95u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d1d97  push 0
    X86_AT(c, 0xd1d97u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1d99  call 0xcc814
    X86_AT(c, 0xd1d99u);
    push32(c, 0xd1d9eu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd1d9eu);
    X86_TICK(c, 11);
    // 0d1d9e  push 0x812c
    X86_AT(c, 0xd1d9eu);
    { uint32_t v = 0x812Cu; push32(c, v); }
    // 0d1da3  push 4
    X86_AT(c, 0xd1da3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1da5  call 0xc8cdc
    X86_AT(c, 0xd1da5u);
    push32(c, 0xd1daau); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd1daau);
    X86_TICK(c, 11);
    // 0d1daa  push 7
    X86_AT(c, 0xd1daau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1dac  push 0
    X86_AT(c, 0xd1dacu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1dae  call 0xcc814
    X86_AT(c, 0xd1daeu);
    push32(c, 0xd1db3u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd1db3u);
    X86_TICK(c, 13);
    // 0d1db3  add esp, 0x40
    X86_AT(c, 0xd1db3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0d1db6  push 0x816c
    X86_AT(c, 0xd1db6u);
    { uint32_t v = 0x816Cu; push32(c, v); }
    // 0d1dbb  push 4
    X86_AT(c, 0xd1dbbu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1dbd  call 0xc8cdc
    X86_AT(c, 0xd1dbdu);
    push32(c, 0xd1dc2u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd1dc2u);
    X86_TICK(c, 11);
    // 0d1dc2  push 8
    X86_AT(c, 0xd1dc2u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d1dc4  push 0
    X86_AT(c, 0xd1dc4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1dc6  call 0xcc814
    X86_AT(c, 0xd1dc6u);
    push32(c, 0xd1dcbu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd1dcbu);
    X86_TICK(c, 11);
    // 0d1dcb  push 0x8190
    X86_AT(c, 0xd1dcbu);
    { uint32_t v = 0x8190u; push32(c, v); }
    // 0d1dd0  push 4
    X86_AT(c, 0xd1dd0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1dd2  call 0xc8cdc
    X86_AT(c, 0xd1dd2u);
    push32(c, 0xd1dd7u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd1dd7u);
    X86_TICK(c, 15);
    // 0d1dd7  inc dword ptr [0xb0372]
    X86_AT(c, 0xd1dd7u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB0372u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d1ddd  add esp, 0x18
    X86_AT(c, 0xd1dddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d1de0  jmp 0xd1e85
    X86_AT(c, 0xd1de0u);
    goto L_d1e85;
L_d1de5:
    X86_TICK(c, 11);
    // 0d1de5  push 0x81b4
    X86_AT(c, 0xd1de5u);
    { uint32_t v = 0x81B4u; push32(c, v); }
    // 0d1dea  push 4
    X86_AT(c, 0xd1deau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1dec  call 0xc8cdc
    X86_AT(c, 0xd1decu);
    push32(c, 0xd1df1u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd1df1u);
    X86_TICK(c, 11);
    // 0d1df1  push 4
    X86_AT(c, 0xd1df1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1df3  push 0
    X86_AT(c, 0xd1df3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1df5  call 0xcc814
    X86_AT(c, 0xd1df5u);
    push32(c, 0xd1dfau); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd1dfau);
    X86_TICK(c, 11);
    // 0d1dfa  push 0x81f4
    X86_AT(c, 0xd1dfau);
    { uint32_t v = 0x81F4u; push32(c, v); }
    // 0d1dff  push 4
    X86_AT(c, 0xd1dffu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1e01  call 0xc8cdc
    X86_AT(c, 0xd1e01u);
    push32(c, 0xd1e06u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd1e06u);
    X86_TICK(c, 11);
    // 0d1e06  push 5
    X86_AT(c, 0xd1e06u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d1e08  push 0
    X86_AT(c, 0xd1e08u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1e0a  call 0xcc814
    X86_AT(c, 0xd1e0au);
    push32(c, 0xd1e0fu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd1e0fu);
    X86_TICK(c, 11);
    // 0d1e0f  push 0x822c
    X86_AT(c, 0xd1e0fu);
    { uint32_t v = 0x822Cu; push32(c, v); }
    // 0d1e14  push 4
    X86_AT(c, 0xd1e14u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1e16  call 0xc8cdc
    X86_AT(c, 0xd1e16u);
    push32(c, 0xd1e1bu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd1e1bu);
    X86_TICK(c, 11);
    // 0d1e1b  push 6
    X86_AT(c, 0xd1e1bu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d1e1d  push 0
    X86_AT(c, 0xd1e1du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1e1f  call 0xcc814
    X86_AT(c, 0xd1e1fu);
    push32(c, 0xd1e24u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd1e24u);
    X86_TICK(c, 11);
    // 0d1e24  push 0x8264
    X86_AT(c, 0xd1e24u);
    { uint32_t v = 0x8264u; push32(c, v); }
    // 0d1e29  push 4
    X86_AT(c, 0xd1e29u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1e2b  call 0xc8cdc
    X86_AT(c, 0xd1e2bu);
    push32(c, 0xd1e30u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd1e30u);
    X86_TICK(c, 11);
    // 0d1e30  push 7
    X86_AT(c, 0xd1e30u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1e32  push 0
    X86_AT(c, 0xd1e32u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1e34  call 0xcc814
    X86_AT(c, 0xd1e34u);
    push32(c, 0xd1e39u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd1e39u);
    X86_TICK(c, 13);
    // 0d1e39  add esp, 0x40
    X86_AT(c, 0xd1e39u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0d1e3c  push 0x82a4
    X86_AT(c, 0xd1e3cu);
    { uint32_t v = 0x82A4u; push32(c, v); }
    // 0d1e41  push 4
    X86_AT(c, 0xd1e41u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1e43  call 0xc8cdc
    X86_AT(c, 0xd1e43u);
    push32(c, 0xd1e48u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd1e48u);
    X86_TICK(c, 11);
    // 0d1e48  push 8
    X86_AT(c, 0xd1e48u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d1e4a  push 0
    X86_AT(c, 0xd1e4au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1e4c  call 0xcc814
    X86_AT(c, 0xd1e4cu);
    push32(c, 0xd1e51u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd1e51u);
    X86_TICK(c, 11);
    // 0d1e51  push 0x82c8
    X86_AT(c, 0xd1e51u);
    { uint32_t v = 0x82C8u; push32(c, v); }
    // 0d1e56  push 4
    X86_AT(c, 0xd1e56u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1e58  call 0xc8cdc
    X86_AT(c, 0xd1e58u);
    push32(c, 0xd1e5du); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd1e5du);
    X86_TICK(c, 11);
    // 0d1e5d  push 9
    X86_AT(c, 0xd1e5du);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0d1e5f  push 0
    X86_AT(c, 0xd1e5fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1e61  call 0xcc814
    X86_AT(c, 0xd1e61u);
    push32(c, 0xd1e66u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd1e66u);
    X86_TICK(c, 11);
    // 0d1e66  push 0x82ec
    X86_AT(c, 0xd1e66u);
    { uint32_t v = 0x82ECu; push32(c, v); }
    // 0d1e6b  push 4
    X86_AT(c, 0xd1e6bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1e6d  call 0xc8cdc
    X86_AT(c, 0xd1e6du);
    push32(c, 0xd1e72u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd1e72u);
    X86_TICK(c, 8);
    // 0d1e72  inc dword ptr [0xb0376]
    X86_AT(c, 0xd1e72u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB0376u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d1e78  mov dword ptr [0xaa2d8], 9
    X86_AT(c, 0xd1e78u);
    wr32((c.sbase[3] + (uint32_t)(0xAA2D8u)), 0x9u);
L_d1e82:
    X86_TICK(c, 2);
    // 0d1e82  add esp, 0x28
    X86_AT(c, 0xd1e82u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
L_d1e85:
    X86_TICK(c, 9);
    // 0d1e85  push 4
    X86_AT(c, 0xd1e85u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1e87  call 0xca3cc
    X86_AT(c, 0xd1e87u);
    push32(c, 0xd1e8cu); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd1e8cu);
    X86_TICK(c, 9);
    // 0d1e8c  push 0xa
    X86_AT(c, 0xd1e8cu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d1e8e  call 0xd6660
    X86_AT(c, 0xd1e8eu);
    push32(c, 0xd1e93u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xd1e93u);
    X86_TICK(c, 7);
    // 0d1e93  call 0xcc85c
    X86_AT(c, 0xd1e93u);
    push32(c, 0xd1e98u); x86_call_known(c, 0xcc85cu, f_000cc85c); X86_RET(c, 0xd1e98u);
    X86_TICK(c, 11);
    // 0d1e98  push 0
    X86_AT(c, 0xd1e98u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1e9a  push 4
    X86_AT(c, 0xd1e9au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1e9c  call 0xca2d4
    X86_AT(c, 0xd1e9cu);
    push32(c, 0xd1ea1u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd1ea1u);
    X86_TICK(c, 7);
    // 0d1ea1  call 0xd3370
    X86_AT(c, 0xd1ea1u);
    push32(c, 0xd1ea6u); x86_call_known(c, 0xd3370u, f_000d3370); X86_RET(c, 0xd1ea6u);
    X86_TICK(c, 7);
    // 0d1ea6  call 0xd351c
    X86_AT(c, 0xd1ea6u);
    push32(c, 0xd1eabu); x86_call_known(c, 0xd351cu, f_000d351c); X86_RET(c, 0xd1eabu);
    X86_TICK(c, 7);
    // 0d1eab  call 0xcc700
    X86_AT(c, 0xd1eabu);
    push32(c, 0xd1eb0u); x86_call_known(c, 0xcc700u, f_000cc700); X86_RET(c, 0xd1eb0u);
    X86_TICK(c, 18);
    // 0d1eb0  mov dword ptr [0xbef90], 1
    X86_AT(c, 0xd1eb0u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF90u)), 0x1u);
    // 0d1eba  add esp, 0x10
    X86_AT(c, 0xd1ebau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d1ebd  pop edi
    X86_AT(c, 0xd1ebdu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d1ebe  ret 
    X86_AT(c, 0xd1ebeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd1b90u, "ran off the end of a function");
}
void f_000d1e82(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0d1e82  add esp, 0x28
    X86_AT(c, 0xd1e82u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0d1e85  push 4
    X86_AT(c, 0xd1e85u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1e87  call 0xca3cc
    X86_AT(c, 0xd1e87u);
    push32(c, 0xd1e8cu); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd1e8cu);
    X86_TICK(c, 9);
    // 0d1e8c  push 0xa
    X86_AT(c, 0xd1e8cu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d1e8e  call 0xd6660
    X86_AT(c, 0xd1e8eu);
    push32(c, 0xd1e93u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xd1e93u);
    X86_TICK(c, 7);
    // 0d1e93  call 0xcc85c
    X86_AT(c, 0xd1e93u);
    push32(c, 0xd1e98u); x86_call_known(c, 0xcc85cu, f_000cc85c); X86_RET(c, 0xd1e98u);
    X86_TICK(c, 11);
    // 0d1e98  push 0
    X86_AT(c, 0xd1e98u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d1e9a  push 4
    X86_AT(c, 0xd1e9au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d1e9c  call 0xca2d4
    X86_AT(c, 0xd1e9cu);
    push32(c, 0xd1ea1u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd1ea1u);
    X86_TICK(c, 7);
    // 0d1ea1  call 0xd3370
    X86_AT(c, 0xd1ea1u);
    push32(c, 0xd1ea6u); x86_call_known(c, 0xd3370u, f_000d3370); X86_RET(c, 0xd1ea6u);
    X86_TICK(c, 7);
    // 0d1ea6  call 0xd351c
    X86_AT(c, 0xd1ea6u);
    push32(c, 0xd1eabu); x86_call_known(c, 0xd351cu, f_000d351c); X86_RET(c, 0xd1eabu);
    X86_TICK(c, 7);
    // 0d1eab  call 0xcc700
    X86_AT(c, 0xd1eabu);
    push32(c, 0xd1eb0u); x86_call_known(c, 0xcc700u, f_000cc700); X86_RET(c, 0xd1eb0u);
    X86_TICK(c, 18);
    // 0d1eb0  mov dword ptr [0xbef90], 1
    X86_AT(c, 0xd1eb0u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF90u)), 0x1u);
    // 0d1eba  add esp, 0x10
    X86_AT(c, 0xd1ebau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d1ebd  pop edi
    X86_AT(c, 0xd1ebdu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d1ebe  ret 
    X86_AT(c, 0xd1ebeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd1e82u, "ran off the end of a function");
}
void f_000d1ec0(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0d1ec0  mov eax, dword ptr [0xaaeac]
    X86_AT(c, 0xd1ec0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAAEACu)));
    // 0d1ec5  cmp dword ptr [eax*4 + 0xb0346], 2
    X86_AT(c, 0xd1ec5u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB0346u))), 0x2u, 0, 4);
    // 0d1ecd  je 0xd1ed3
    X86_AT(c, 0xd1ecdu);
    if (x86_cc(c, 4)) { goto L_d1ed3; }
    X86_TICK(c, 9);
    // 0d1ecf  sub eax, eax
    X86_AT(c, 0xd1ecfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d1ed1  jmp 0xd1f43
    X86_AT(c, 0xd1ed1u);
    goto L_d1f43;
L_d1ed3:
    X86_TICK(c, 17);
    // 0d1ed3  mov eax, dword ptr [0xaaeac]
    X86_AT(c, 0xd1ed3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAAEACu)));
    // 0d1ed8  mov dword ptr [eax*4 + 0xb0346], 0
    X86_AT(c, 0xd1ed8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB0346u)), 0x0u);
    // 0d1ee3  push 0xf
    X86_AT(c, 0xd1ee3u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d1ee5  push 0x8310
    X86_AT(c, 0xd1ee5u);
    { uint32_t v = 0x8310u; push32(c, v); }
    // 0d1eea  call 0xcc830
    X86_AT(c, 0xd1eeau);
    push32(c, 0xd1eefu); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd1eefu);
    X86_TICK(c, 11);
    // 0d1eef  push 0xb02ec
    X86_AT(c, 0xd1eefu);
    { uint32_t v = 0xB02ECu; push32(c, v); }
    // 0d1ef4  push 7
    X86_AT(c, 0xd1ef4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1ef6  call 0xca850
    X86_AT(c, 0xd1ef6u);
    push32(c, 0xd1efbu); x86_call_known(c, 0xca850u, f_000ca850); X86_RET(c, 0xd1efbu);
    X86_TICK(c, 11);
    // 0d1efb  push 0xf
    X86_AT(c, 0xd1efbu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d1efd  push 0x8320
    X86_AT(c, 0xd1efdu);
    { uint32_t v = 0x8320u; push32(c, v); }
    // 0d1f02  call 0xcc830
    X86_AT(c, 0xd1f02u);
    push32(c, 0xd1f07u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd1f07u);
    X86_TICK(c, 11);
    // 0d1f07  push 0xf
    X86_AT(c, 0xd1f07u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d1f09  push 0x8328
    X86_AT(c, 0xd1f09u);
    { uint32_t v = 0x8328u; push32(c, v); }
    // 0d1f0e  call 0xcc830
    X86_AT(c, 0xd1f0eu);
    push32(c, 0xd1f13u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd1f13u);
    X86_TICK(c, 11);
    // 0d1f13  push 0xf
    X86_AT(c, 0xd1f13u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d1f15  push 0x8374
    X86_AT(c, 0xd1f15u);
    { uint32_t v = 0x8374u; push32(c, v); }
    // 0d1f1a  call 0xcc830
    X86_AT(c, 0xd1f1au);
    push32(c, 0xd1f1fu); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd1f1fu);
    X86_TICK(c, 9);
    // 0d1f1f  push 0x32
    X86_AT(c, 0xd1f1fu);
    { uint32_t v = 0x32u; push32(c, v); }
    // 0d1f21  call 0xd6660
    X86_AT(c, 0xd1f21u);
    push32(c, 0xd1f26u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xd1f26u);
    X86_TICK(c, 14);
    // 0d1f26  add esp, 0x2c
    X86_AT(c, 0xd1f26u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0d1f29  test byte ptr [0xaaeac], 1
    X86_AT(c, 0xd1f29u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xAAEACu))) & 0x1u, 1);
    // 0d1f30  je 0xd1f39
    X86_AT(c, 0xd1f30u);
    if (x86_cc(c, 4)) { goto L_d1f39; }
    X86_TICK(c, 7);
    // 0d1f32  call 0xd1af8
    X86_AT(c, 0xd1f32u);
    push32(c, 0xd1f37u); x86_call_known(c, 0xd1af8u, f_000d1af8); X86_RET(c, 0xd1f37u);
    X86_TICK(c, 7);
    // 0d1f37  jmp 0xd1f3e
    X86_AT(c, 0xd1f37u);
    goto L_d1f3e;
L_d1f39:
    X86_TICK(c, 7);
    // 0d1f39  call 0xd1b90
    X86_AT(c, 0xd1f39u);
    push32(c, 0xd1f3eu); x86_call_known(c, 0xd1b90u, f_000d1b90); X86_RET(c, 0xd1f3eu);
L_d1f3e:
    X86_TICK(c, 2);
    // 0d1f3e  mov eax, 1
    X86_AT(c, 0xd1f3eu);
    c.r[0] = 0x1u;
L_d1f43:
    X86_TICK(c, 10);
    // 0d1f43  ret 
    X86_AT(c, 0xd1f43u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd1ec0u, "ran off the end of a function");
}
void f_000d1f44(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0d1f44  push ebx
    X86_AT(c, 0xd1f44u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d1f45  push esi
    X86_AT(c, 0xd1f45u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d1f46  push edi
    X86_AT(c, 0xd1f46u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d1f47  push dword ptr [0xb033e]
    X86_AT(c, 0xd1f47u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Eu))); push32(c, v); }
    // 0d1f4d  push dword ptr [0xb033a]
    X86_AT(c, 0xd1f4du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Au))); push32(c, v); }
    // 0d1f53  call 0xcf89c
    X86_AT(c, 0xd1f53u);
    push32(c, 0xd1f58u); x86_call_known(c, 0xcf89cu, f_000cf89c); X86_RET(c, 0xd1f58u);
    X86_TICK(c, 20);
    // 0d1f58  xchg esi, eax
    X86_AT(c, 0xd1f58u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d1f59  add esi, esi
    X86_AT(c, 0xd1f59u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[6], 0, 4); }
    // 0d1f5b  add esi, dword ptr [0xaae98]
    X86_AT(c, 0xd1f5bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xAAE98u))), 0, 4); }
    // 0d1f61  push 0x838c
    X86_AT(c, 0xd1f61u);
    { uint32_t v = 0x838Cu; push32(c, v); }
    // 0d1f66  call 0xcc7bc
    X86_AT(c, 0xd1f66u);
    push32(c, 0xd1f6bu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd1f6bu);
    X86_TICK(c, 14);
    // 0d1f6b  add esp, 0xc
    X86_AT(c, 0xd1f6bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d1f6e  cmp byte ptr [0x92494], 0x4b
    X86_AT(c, 0xd1f6eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x92494u))), 0x4Bu, 0, 1);
    // 0d1f75  je 0xd1f81
    X86_AT(c, 0xd1f75u);
    if (x86_cc(c, 4)) { goto L_d1f81; }
    X86_TICK(c, 9);
    // 0d1f77  push 0x83c8
    X86_AT(c, 0xd1f77u);
    { uint32_t v = 0x83C8u; push32(c, v); }
    // 0d1f7c  jmp 0xd2027
    X86_AT(c, 0xd1f7cu);
    goto L_d2027;
L_d1f81:
    X86_TICK(c, 12);
    // 0d1f81  cmp dword ptr [0xaae9c], 0
    X86_AT(c, 0xd1f81u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xAAE9Cu))), 0x0u, 0, 4);
    // 0d1f88  je 0xd1f94
    X86_AT(c, 0xd1f88u);
    if (x86_cc(c, 4)) { goto L_d1f94; }
    X86_TICK(c, 9);
    // 0d1f8a  push 0x840c
    X86_AT(c, 0xd1f8au);
    { uint32_t v = 0x840Cu; push32(c, v); }
    // 0d1f8f  jmp 0xd2027
    X86_AT(c, 0xd1f8fu);
    goto L_d2027;
L_d1f94:
    X86_TICK(c, 9);
    // 0d1f94  push esi
    X86_AT(c, 0xd1f94u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d1f95  call 0xd1ec0
    X86_AT(c, 0xd1f95u);
    push32(c, 0xd1f9au); x86_call_known(c, 0xd1ec0u, f_000d1ec0); X86_RET(c, 0xd1f9au);
    X86_TICK(c, 9);
    // 0d1f9a  add esp, 4
    X86_AT(c, 0xd1f9au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d1f9d  and eax, eax
    X86_AT(c, 0xd1f9du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d1f9f  jne 0xd20e8
    X86_AT(c, 0xd1f9fu);
    if (x86_cc(c, 5)) { goto L_d20e8; }
    X86_TICK(c, 9);
    // 0d1fa5  push 0x8460
    X86_AT(c, 0xd1fa5u);
    { uint32_t v = 0x8460u; push32(c, v); }
    // 0d1faa  call 0xcc7bc
    X86_AT(c, 0xd1faau);
    push32(c, 0xd1fafu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd1fafu);
    X86_TICK(c, 11);
    // 0d1faf  push 0xf
    X86_AT(c, 0xd1fafu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d1fb1  push 0x84bc
    X86_AT(c, 0xd1fb1u);
    { uint32_t v = 0x84BCu; push32(c, v); }
    // 0d1fb6  call 0xcc830
    X86_AT(c, 0xd1fb6u);
    push32(c, 0xd1fbbu); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd1fbbu);
    X86_TICK(c, 2);
    // 0d1fbb  add esp, 0xc
    X86_AT(c, 0xd1fbbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_d1fbe:
    X86_TICK(c, 9);
    // 0d1fbe  push 7
    X86_AT(c, 0xd1fbeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d1fc0  call 0xc81e4
    X86_AT(c, 0xd1fc0u);
    push32(c, 0xd1fc5u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd1fc5u);
    X86_TICK(c, 12);
    // 0d1fc5  add esp, 4
    X86_AT(c, 0xd1fc5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d1fc8  xchg ebx, eax
    X86_AT(c, 0xd1fc8u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d1fc9  and bl, bl
    X86_AT(c, 0xd1fc9u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d1fcb  je 0xd1fbe
    X86_AT(c, 0xd1fcbu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd1fbeu); goto L_d1fbe; }
    X86_TICK(c, 7);
    // 0d1fcd  cmp bl, 0x50
    X86_AT(c, 0xd1fcdu);
    (void)x86_sub(c, g8(c, 3), 0x50u, 0, 1);
    // 0d1fd0  je 0xd1fde
    X86_AT(c, 0xd1fd0u);
    if (x86_cc(c, 4)) { goto L_d1fde; }
    X86_TICK(c, 7);
    // 0d1fd2  cmp bl, 0x53
    X86_AT(c, 0xd1fd2u);
    (void)x86_sub(c, g8(c, 3), 0x53u, 0, 1);
    // 0d1fd5  je 0xd1fde
    X86_AT(c, 0xd1fd5u);
    if (x86_cc(c, 4)) { goto L_d1fde; }
    X86_TICK(c, 9);
    // 0d1fd7  push 0x84fc
    X86_AT(c, 0xd1fd7u);
    { uint32_t v = 0x84FCu; push32(c, v); }
    // 0d1fdc  jmp 0xd2027
    X86_AT(c, 0xd1fdcu);
    goto L_d2027;
L_d1fde:
    X86_TICK(c, 10);
    // 0d1fde  movzx edx, bl
    X86_AT(c, 0xd1fdeu);
    c.r[2] = g8(c, 3);
    // 0d1fe1  cmp edx, 0x50
    X86_AT(c, 0xd1fe1u);
    (void)x86_sub(c, c.r[2], 0x50u, 0, 4);
    // 0d1fe4  je 0xd1ff4
    X86_AT(c, 0xd1fe4u);
    if (x86_cc(c, 4)) { goto L_d1ff4; }
    X86_TICK(c, 7);
    // 0d1fe6  cmp edx, 0x53
    X86_AT(c, 0xd1fe6u);
    (void)x86_sub(c, c.r[2], 0x53u, 0, 4);
    // 0d1fe9  je 0xd20a9
    X86_AT(c, 0xd1fe9u);
    if (x86_cc(c, 4)) { goto L_d20a9; }
    X86_TICK(c, 7);
    // 0d1fef  jmp 0xd20e8
    X86_AT(c, 0xd1fefu);
    goto L_d20e8;
L_d1ff4:
    X86_TICK(c, 9);
    // 0d1ff4  push 0x8518
    X86_AT(c, 0xd1ff4u);
    { uint32_t v = 0x8518u; push32(c, v); }
    // 0d1ff9  call 0xcc7bc
    X86_AT(c, 0xd1ff9u);
    push32(c, 0xd1ffeu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd1ffeu);
    X86_TICK(c, 11);
    // 0d1ffe  push 0xf
    X86_AT(c, 0xd1ffeu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d2000  push 0x852c
    X86_AT(c, 0xd2000u);
    { uint32_t v = 0x852Cu; push32(c, v); }
    // 0d2005  call 0xcc830
    X86_AT(c, 0xd2005u);
    push32(c, 0xd200au); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd200au);
    X86_TICK(c, 11);
    // 0d200a  push 0x18
    X86_AT(c, 0xd200au);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0d200c  push 0xb
    X86_AT(c, 0xd200cu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d200e  call 0xd0038
    X86_AT(c, 0xd200eu);
    push32(c, 0xd2013u); x86_call_known(c, 0xd0038u, f_000d0038); X86_RET(c, 0xd2013u);
    X86_TICK(c, 12);
    // 0d2013  xchg edi, eax
    X86_AT(c, 0xd2013u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d2014  push 7
    X86_AT(c, 0xd2014u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2016  call 0xca3cc
    X86_AT(c, 0xd2016u);
    push32(c, 0xd201bu); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd201bu);
    X86_TICK(c, 9);
    // 0d201b  add esp, 0x18
    X86_AT(c, 0xd201bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d201e  and edi, edi
    X86_AT(c, 0xd201eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0d2020  jne 0xd2034
    X86_AT(c, 0xd2020u);
    if (x86_cc(c, 5)) { goto L_d2034; }
    X86_TICK(c, 2);
    // 0d2022  push 0x8550
    X86_AT(c, 0xd2022u);
    { uint32_t v = 0x8550u; push32(c, v); }
L_d2027:
    X86_TICK(c, 7);
    // 0d2027  call 0xcc7bc
    X86_AT(c, 0xd2027u);
    push32(c, 0xd202cu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd202cu);
    X86_TICK(c, 9);
    // 0d202c  add esp, 4
    X86_AT(c, 0xd202cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d202f  jmp 0xd20e8
    X86_AT(c, 0xd202fu);
    goto L_d20e8;
L_d2034:
    X86_TICK(c, 11);
    // 0d2034  cmp edi, dword ptr [0xb031a]
    X86_AT(c, 0xd2034u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xB031Au))), 0, 4);
    // 0d203a  jle 0xd205f
    X86_AT(c, 0xd203au);
    if (x86_cc(c, 14)) { goto L_d205f; }
    X86_TICK(c, 9);
    // 0d203c  push 0x8562
    X86_AT(c, 0xd203cu);
    { uint32_t v = 0x8562u; push32(c, v); }
    // 0d2041  call 0xcc7bc
    X86_AT(c, 0xd2041u);
    push32(c, 0xd2046u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd2046u);
    X86_TICK(c, 9);
    // 0d2046  push 0x8564
    X86_AT(c, 0xd2046u);
    { uint32_t v = 0x8564u; push32(c, v); }
    // 0d204b  call 0xcc7bc
    X86_AT(c, 0xd204bu);
    push32(c, 0xd2050u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd2050u);
    X86_TICK(c, 9);
    // 0d2050  push 1
    X86_AT(c, 0xd2050u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d2052  call 0xc5ca4
    X86_AT(c, 0xd2052u);
    push32(c, 0xd2057u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xd2057u);
    X86_TICK(c, 9);
    // 0d2057  add esp, 0xc
    X86_AT(c, 0xd2057u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d205a  jmp 0xd20e8
    X86_AT(c, 0xd205au);
    goto L_d20e8;
L_d205f:
    X86_TICK(c, 31);
    // 0d205f  sub dword ptr [0xb031a], edi
    X86_AT(c, 0xd205fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB031Au)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[7], 0, 4)); }
    // 0d2065  lea edi, [edi + edi*2]
    X86_AT(c, 0xd2065u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d2068  xchg edi, eax
    X86_AT(c, 0xd2068u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d2069  cdq 
    X86_AT(c, 0xd2069u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d206a  sub eax, edx
    X86_AT(c, 0xd206au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0d206c  sar eax, 1
    X86_AT(c, 0xd206cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0d206e  xchg edi, eax
    X86_AT(c, 0xd206eu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d206f  push 0x85ae
    X86_AT(c, 0xd206fu);
    { uint32_t v = 0x85AEu; push32(c, v); }
    // 0d2074  call 0xcc7bc
    X86_AT(c, 0xd2074u);
    push32(c, 0xd2079u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd2079u);
    X86_TICK(c, 9);
    // 0d2079  push 0x85b0
    X86_AT(c, 0xd2079u);
    { uint32_t v = 0x85B0u; push32(c, v); }
    // 0d207e  call 0xcc7bc
    X86_AT(c, 0xd207eu);
    push32(c, 0xd2083u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd2083u);
    X86_TICK(c, 13);
    // 0d2083  push 4
    X86_AT(c, 0xd2083u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d2085  push edi
    X86_AT(c, 0xd2085u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2086  push 7
    X86_AT(c, 0xd2086u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2088  call 0xc8cb8
    X86_AT(c, 0xd2088u);
    push32(c, 0xd208du); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd208du);
    X86_TICK(c, 9);
    // 0d208d  push 0x8604
    X86_AT(c, 0xd208du);
    { uint32_t v = 0x8604u; push32(c, v); }
    // 0d2092  call 0xcc7bc
    X86_AT(c, 0xd2092u);
    push32(c, 0xd2097u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd2097u);
    X86_TICK(c, 14);
    // 0d2097  add dword ptr [0xb02fe], edi
    X86_AT(c, 0xd2097u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB02FEu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 0d209d  call 0xcc628
    X86_AT(c, 0xd209du);
    push32(c, 0xd20a2u); x86_call_known(c, 0xcc628u, f_000cc628); X86_RET(c, 0xd20a2u);
    X86_TICK(c, 7);
    // 0d20a2  call 0xcc6cc
    X86_AT(c, 0xd20a2u);
    push32(c, 0xd20a7u); x86_call_known(c, 0xcc6ccu, f_000cc6cc); X86_RET(c, 0xd20a7u);
    X86_TICK(c, 7);
    // 0d20a7  jmp 0xd20de
    X86_AT(c, 0xd20a7u);
    goto L_d20de;
L_d20a9:
    X86_TICK(c, 7);
    // 0d20a9  call 0xd1ae4
    X86_AT(c, 0xd20a9u);
    push32(c, 0xd20aeu); x86_call_known(c, 0xd1ae4u, f_000d1ae4); X86_RET(c, 0xd20aeu);
    X86_TICK(c, 7);
    // 0d20ae  and eax, eax
    X86_AT(c, 0xd20aeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d20b0  je 0xd20e3
    X86_AT(c, 0xd20b0u);
    if (x86_cc(c, 4)) { goto L_d20e3; }
    X86_TICK(c, 9);
    // 0d20b2  push 0x8636
    X86_AT(c, 0xd20b2u);
    { uint32_t v = 0x8636u; push32(c, v); }
    // 0d20b7  call 0xcc7bc
    X86_AT(c, 0xd20b7u);
    push32(c, 0xd20bcu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd20bcu);
    X86_TICK(c, 11);
    // 0d20bc  push 0x8638
    X86_AT(c, 0xd20bcu);
    { uint32_t v = 0x8638u; push32(c, v); }
    // 0d20c1  push 7
    X86_AT(c, 0xd20c1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d20c3  call 0xc8cdc
    X86_AT(c, 0xd20c3u);
    push32(c, 0xd20c8u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd20c8u);
    X86_TICK(c, 11);
    // 0d20c8  push 0x867c
    X86_AT(c, 0xd20c8u);
    { uint32_t v = 0x867Cu; push32(c, v); }
    // 0d20cd  push 7
    X86_AT(c, 0xd20cdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d20cf  call 0xc8cdc
    X86_AT(c, 0xd20cfu);
    push32(c, 0xd20d4u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd20d4u);
    X86_TICK(c, 9);
    // 0d20d4  push 0x86c0
    X86_AT(c, 0xd20d4u);
    { uint32_t v = 0x86C0u; push32(c, v); }
    // 0d20d9  call 0xcc7bc
    X86_AT(c, 0xd20d9u);
    push32(c, 0xd20deu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd20deu);
L_d20de:
    X86_TICK(c, 9);
    // 0d20de  add esp, 0x18
    X86_AT(c, 0xd20deu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d20e1  jmp 0xd20e8
    X86_AT(c, 0xd20e1u);
    goto L_d20e8;
L_d20e3:
    X86_TICK(c, 7);
    // 0d20e3  call 0xd19c4
    X86_AT(c, 0xd20e3u);
    push32(c, 0xd20e8u); x86_call_known(c, 0xd19c4u, f_000d19c4); X86_RET(c, 0xd20e8u);
L_d20e8:
    X86_TICK(c, 22);
    // 0d20e8  pop edi
    X86_AT(c, 0xd20e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d20e9  pop esi
    X86_AT(c, 0xd20e9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d20ea  pop ebx
    X86_AT(c, 0xd20eau);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d20eb  ret 
    X86_AT(c, 0xd20ebu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd1f44u, "ran off the end of a function");
}
void f_000d2027(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0d2027  call 0xcc7bc
    X86_AT(c, 0xd2027u);
    push32(c, 0xd202cu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd202cu);
    X86_TICK(c, 9);
    // 0d202c  add esp, 4
    X86_AT(c, 0xd202cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d202f  jmp 0xd20e8
    X86_AT(c, 0xd202fu);
    goto L_d20e8;
L_d20e8:
    X86_TICK(c, 22);
    // 0d20e8  pop edi
    X86_AT(c, 0xd20e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d20e9  pop esi
    X86_AT(c, 0xd20e9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d20ea  pop ebx
    X86_AT(c, 0xd20eau);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d20eb  ret 
    X86_AT(c, 0xd20ebu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2027u, "ran off the end of a function");
}
void f_000d20e8(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0d20e8  pop edi
    X86_AT(c, 0xd20e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d20e9  pop esi
    X86_AT(c, 0xd20e9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d20ea  pop ebx
    X86_AT(c, 0xd20eau);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d20eb  ret 
    X86_AT(c, 0xd20ebu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd20e8u, "ran off the end of a function");
}
void f_000d20ec(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0d20ec  cmp dword ptr [0xb52f8], 1
    X86_AT(c, 0xd20ecu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x1u, 0, 4);
    // 0d20f3  jne 0xd20fc
    X86_AT(c, 0xd20f3u);
    if (x86_cc(c, 5)) { goto L_d20fc; }
    X86_TICK(c, 7);
    // 0d20f5  call 0xd1824
    X86_AT(c, 0xd20f5u);
    push32(c, 0xd20fau); x86_call_known(c, 0xd1824u, f_000d1824); X86_RET(c, 0xd20fau);
    X86_TICK(c, 7);
    // 0d20fa  jmp 0xd2120
    X86_AT(c, 0xd20fau);
    goto L_d2120;
L_d20fc:
    X86_TICK(c, 12);
    // 0d20fc  cmp dword ptr [0xb52f8], 2
    X86_AT(c, 0xd20fcu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x2u, 0, 4);
    // 0d2103  jne 0xd210c
    X86_AT(c, 0xd2103u);
    if (x86_cc(c, 5)) { goto L_d210c; }
    X86_TICK(c, 7);
    // 0d2105  call 0xd1f44
    X86_AT(c, 0xd2105u);
    push32(c, 0xd210au); x86_call_known(c, 0xd1f44u, f_000d1f44); X86_RET(c, 0xd210au);
    X86_TICK(c, 7);
    // 0d210a  jmp 0xd2120
    X86_AT(c, 0xd210au);
    goto L_d2120;
L_d210c:
    X86_TICK(c, 9);
    // 0d210c  push 0x86f0
    X86_AT(c, 0xd210cu);
    { uint32_t v = 0x86F0u; push32(c, v); }
    // 0d2111  call 0xcc7bc
    X86_AT(c, 0xd2111u);
    push32(c, 0xd2116u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd2116u);
    X86_TICK(c, 9);
    // 0d2116  push 1
    X86_AT(c, 0xd2116u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d2118  call 0xc5ca4
    X86_AT(c, 0xd2118u);
    push32(c, 0xd211du); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xd211du);
    X86_TICK(c, 2);
    // 0d211d  add esp, 8
    X86_AT(c, 0xd211du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d2120:
    X86_TICK(c, 10);
    // 0d2120  ret 
    X86_AT(c, 0xd2120u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd20ecu, "ran off the end of a function");
}
void f_000d2124(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0d2124  push 9
    X86_AT(c, 0xd2124u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0d2126  push 0x44
    X86_AT(c, 0xd2126u);
    { uint32_t v = 0x44u; push32(c, v); }
    // 0d2128  push 0x164
    X86_AT(c, 0xd2128u);
    { uint32_t v = 0x164u; push32(c, v); }
    // 0d212d  push 0x43
    X86_AT(c, 0xd212du);
    { uint32_t v = 0x43u; push32(c, v); }
    // 0d212f  push 0xe
    X86_AT(c, 0xd212fu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d2131  call 0xc95ec
    X86_AT(c, 0xd2131u);
    push32(c, 0xd2136u); x86_call_known(c, 0xc95ecu, f_000c95ec); X86_RET(c, 0xd2136u);
    X86_TICK(c, 17);
    // 0d2136  push 9
    X86_AT(c, 0xd2136u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0d2138  push 0x179
    X86_AT(c, 0xd2138u);
    { uint32_t v = 0x179u; push32(c, v); }
    // 0d213d  push 0xf
    X86_AT(c, 0xd213du);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d213f  push 0x43
    X86_AT(c, 0xd213fu);
    { uint32_t v = 0x43u; push32(c, v); }
    // 0d2141  push 0xe
    X86_AT(c, 0xd2141u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d2143  call 0xc95ec
    X86_AT(c, 0xd2143u);
    push32(c, 0xd2148u); x86_call_known(c, 0xc95ecu, f_000c95ec); X86_RET(c, 0xd2148u);
    X86_TICK(c, 17);
    // 0d2148  push 0xd
    X86_AT(c, 0xd2148u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d214a  push 0x17b
    X86_AT(c, 0xd214au);
    { uint32_t v = 0x17Bu; push32(c, v); }
    // 0d214f  push 0x167
    X86_AT(c, 0xd214fu);
    { uint32_t v = 0x167u; push32(c, v); }
    // 0d2154  push 0x17b
    X86_AT(c, 0xd2154u);
    { uint32_t v = 0x17Bu; push32(c, v); }
    // 0d2159  push 0xd
    X86_AT(c, 0xd2159u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d215b  call 0xc9378
    X86_AT(c, 0xd215bu);
    push32(c, 0xd2160u); x86_call_known(c, 0xc9378u, f_000c9378); X86_RET(c, 0xd2160u);
    X86_TICK(c, 19);
    // 0d2160  add esp, 0x3c
    X86_AT(c, 0xd2160u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d2163  push 0xd
    X86_AT(c, 0xd2163u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d2165  push 0x17c
    X86_AT(c, 0xd2165u);
    { uint32_t v = 0x17Cu; push32(c, v); }
    // 0d216a  push 0x167
    X86_AT(c, 0xd216au);
    { uint32_t v = 0x167u; push32(c, v); }
    // 0d216f  push 0x17c
    X86_AT(c, 0xd216fu);
    { uint32_t v = 0x17Cu; push32(c, v); }
    // 0d2174  push 0xe
    X86_AT(c, 0xd2174u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d2176  call 0xc9378
    X86_AT(c, 0xd2176u);
    push32(c, 0xd217bu); x86_call_known(c, 0xc9378u, f_000c9378); X86_RET(c, 0xd217bu);
    X86_TICK(c, 17);
    // 0d217b  push 0xd
    X86_AT(c, 0xd217bu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d217d  push 0x17c
    X86_AT(c, 0xd217du);
    { uint32_t v = 0x17Cu; push32(c, v); }
    // 0d2182  push 0x166
    X86_AT(c, 0xd2182u);
    { uint32_t v = 0x166u; push32(c, v); }
    // 0d2187  push 0x42
    X86_AT(c, 0xd2187u);
    { uint32_t v = 0x42u; push32(c, v); }
    // 0d2189  push 0x166
    X86_AT(c, 0xd2189u);
    { uint32_t v = 0x166u; push32(c, v); }
    // 0d218e  call 0xc9378
    X86_AT(c, 0xd218eu);
    push32(c, 0xd2193u); x86_call_known(c, 0xc9378u, f_000c9378); X86_RET(c, 0xd2193u);
    X86_TICK(c, 17);
    // 0d2193  push 0xd
    X86_AT(c, 0xd2193u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d2195  push 0x17c
    X86_AT(c, 0xd2195u);
    { uint32_t v = 0x17Cu; push32(c, v); }
    // 0d219a  push 0x167
    X86_AT(c, 0xd219au);
    { uint32_t v = 0x167u; push32(c, v); }
    // 0d219f  push 0x43
    X86_AT(c, 0xd219fu);
    { uint32_t v = 0x43u; push32(c, v); }
    // 0d21a1  push 0x167
    X86_AT(c, 0xd21a1u);
    { uint32_t v = 0x167u; push32(c, v); }
    // 0d21a6  call 0xc9378
    X86_AT(c, 0xd21a6u);
    push32(c, 0xd21abu); x86_call_known(c, 0xc9378u, f_000c9378); X86_RET(c, 0xd21abu);
    X86_TICK(c, 19);
    // 0d21ab  add esp, 0x3c
    X86_AT(c, 0xd21abu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d21ae  push 0xf
    X86_AT(c, 0xd21aeu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d21b0  push 0x179
    X86_AT(c, 0xd21b0u);
    { uint32_t v = 0x179u; push32(c, v); }
    // 0d21b5  push 0x165
    X86_AT(c, 0xd21b5u);
    { uint32_t v = 0x165u; push32(c, v); }
    // 0d21ba  push 0x179
    X86_AT(c, 0xd21bau);
    { uint32_t v = 0x179u; push32(c, v); }
    // 0d21bf  push 0xc
    X86_AT(c, 0xd21bfu);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0d21c1  call 0xc9378
    X86_AT(c, 0xd21c1u);
    push32(c, 0xd21c6u); x86_call_known(c, 0xc9378u, f_000c9378); X86_RET(c, 0xd21c6u);
    X86_TICK(c, 17);
    // 0d21c6  push 0xf
    X86_AT(c, 0xd21c6u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d21c8  push 0x17a
    X86_AT(c, 0xd21c8u);
    { uint32_t v = 0x17Au; push32(c, v); }
    // 0d21cd  push 0x165
    X86_AT(c, 0xd21cdu);
    { uint32_t v = 0x165u; push32(c, v); }
    // 0d21d2  push 0x17a
    X86_AT(c, 0xd21d2u);
    { uint32_t v = 0x17Au; push32(c, v); }
    // 0d21d7  push 0xc
    X86_AT(c, 0xd21d7u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0d21d9  call 0xc9378
    X86_AT(c, 0xd21d9u);
    push32(c, 0xd21deu); x86_call_known(c, 0xc9378u, f_000c9378); X86_RET(c, 0xd21deu);
    X86_TICK(c, 17);
    // 0d21de  push 0xf
    X86_AT(c, 0xd21deu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d21e0  push 0x17a
    X86_AT(c, 0xd21e0u);
    { uint32_t v = 0x17Au; push32(c, v); }
    // 0d21e5  push 0x164
    X86_AT(c, 0xd21e5u);
    { uint32_t v = 0x164u; push32(c, v); }
    // 0d21ea  push 0x41
    X86_AT(c, 0xd21eau);
    { uint32_t v = 0x41u; push32(c, v); }
    // 0d21ec  push 0x164
    X86_AT(c, 0xd21ecu);
    { uint32_t v = 0x164u; push32(c, v); }
    // 0d21f1  call 0xc9378
    X86_AT(c, 0xd21f1u);
    push32(c, 0xd21f6u); x86_call_known(c, 0xc9378u, f_000c9378); X86_RET(c, 0xd21f6u);
    X86_TICK(c, 19);
    // 0d21f6  add esp, 0x3c
    X86_AT(c, 0xd21f6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d21f9  push 0xf
    X86_AT(c, 0xd21f9u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d21fb  push 0x17a
    X86_AT(c, 0xd21fbu);
    { uint32_t v = 0x17Au; push32(c, v); }
    // 0d2200  push 0x165
    X86_AT(c, 0xd2200u);
    { uint32_t v = 0x165u; push32(c, v); }
    // 0d2205  push 0x41
    X86_AT(c, 0xd2205u);
    { uint32_t v = 0x41u; push32(c, v); }
    // 0d2207  push 0x165
    X86_AT(c, 0xd2207u);
    { uint32_t v = 0x165u; push32(c, v); }
    // 0d220c  call 0xc9378
    X86_AT(c, 0xd220cu);
    push32(c, 0xd2211u); x86_call_known(c, 0xc9378u, f_000c9378); X86_RET(c, 0xd2211u);
    X86_TICK(c, 12);
    // 0d2211  add esp, 0x14
    X86_AT(c, 0xd2211u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d2214  ret 
    X86_AT(c, 0xd2214u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2124u, "ran off the end of a function");
}
void f_000d2218(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0d2218  push ebp
    X86_AT(c, 0xd2218u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d2219  mov ebp, esp
    X86_AT(c, 0xd2219u);
    c.r[5] = c.r[4];
    // 0d221b  push esi
    X86_AT(c, 0xd221bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d221c  push edi
    X86_AT(c, 0xd221cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d221d  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd221du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d2220  mov esi, 1
    X86_AT(c, 0xd2220u);
    c.r[6] = 0x1u;
L_d2225:
    X86_TICK(c, 7);
    // 0d2225  cmp edi, esi
    X86_AT(c, 0xd2225u);
    (void)x86_sub(c, c.r[7], c.r[6], 0, 4);
    // 0d2227  jl 0xd223b
    X86_AT(c, 0xd2227u);
    if (x86_cc(c, 12)) { goto L_d223b; }
    X86_TICK(c, 11);
    // 0d2229  push 0x8710
    X86_AT(c, 0xd2229u);
    { uint32_t v = 0x8710u; push32(c, v); }
    // 0d222e  push 4
    X86_AT(c, 0xd222eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d2230  call 0xc8cdc
    X86_AT(c, 0xd2230u);
    push32(c, 0xd2235u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd2235u);
    X86_TICK(c, 11);
    // 0d2235  inc esi
    X86_AT(c, 0xd2235u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d2236  add esp, 8
    X86_AT(c, 0xd2236u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d2239  jmp 0xd2225
    X86_AT(c, 0xd2239u);
    X86_POLL(c, 0xd2225u); goto L_d2225;
L_d223b:
    X86_TICK(c, 24);
    // 0d223b  pop edi
    X86_AT(c, 0xd223bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d223c  pop esi
    X86_AT(c, 0xd223cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d223d  leave 
    X86_AT(c, 0xd223du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d223e  ret 
    X86_AT(c, 0xd223eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2218u, "ran off the end of a function");
}
void f_000d2240(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0d2240  push edi
    X86_AT(c, 0xd2240u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2241  mov edi, 4
    X86_AT(c, 0xd2241u);
    c.r[7] = 0x4u;
    // 0d2246  push edi
    X86_AT(c, 0xd2246u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2247  call 0xca3cc
    X86_AT(c, 0xd2247u);
    push32(c, 0xd224cu); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd224cu);
    X86_TICK(c, 11);
    // 0d224c  push 0x8714
    X86_AT(c, 0xd224cu);
    { uint32_t v = 0x8714u; push32(c, v); }
    // 0d2251  push edi
    X86_AT(c, 0xd2251u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2252  call 0xc8cdc
    X86_AT(c, 0xd2252u);
    push32(c, 0xd2257u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd2257u);
    X86_TICK(c, 7);
    // 0d2257  call 0xcc85c
    X86_AT(c, 0xd2257u);
    push32(c, 0xd225cu); x86_call_known(c, 0xcc85cu, f_000cc85c); X86_RET(c, 0xd225cu);
    X86_TICK(c, 9);
    // 0d225c  push edi
    X86_AT(c, 0xd225cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d225d  call 0xca254
    X86_AT(c, 0xd225du);
    push32(c, 0xd2262u); x86_call_known(c, 0xca254u, f_000ca254); X86_RET(c, 0xd2262u);
    X86_TICK(c, 7);
    // 0d2262  call 0xd2124
    X86_AT(c, 0xd2262u);
    push32(c, 0xd2267u); x86_call_known(c, 0xd2124u, f_000d2124); X86_RET(c, 0xd2267u);
    X86_TICK(c, 16);
    // 0d2267  add esp, 0x10
    X86_AT(c, 0xd2267u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d226a  pop edi
    X86_AT(c, 0xd226au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d226b  ret 
    X86_AT(c, 0xd226bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2240u, "ran off the end of a function");
}
void f_000d226c(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0d226c  push ebp
    X86_AT(c, 0xd226cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d226d  mov ebp, esp
    X86_AT(c, 0xd226du);
    c.r[5] = c.r[4];
    // 0d226f  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xd226fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d2272  add eax, 7
    X86_AT(c, 0xd2272u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x7u, 0, 4); }
    // 0d2275  push eax
    X86_AT(c, 0xd2275u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d2276  push 2
    X86_AT(c, 0xd2276u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d2278  call 0xcc814
    X86_AT(c, 0xd2278u);
    push32(c, 0xd227du); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd227du);
    X86_TICK(c, 16);
    // 0d227d  leave 
    X86_AT(c, 0xd227du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d227e  ret 
    X86_AT(c, 0xd227eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd226cu, "ran off the end of a function");
}
void f_000d2280(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0d2280  push ebp
    X86_AT(c, 0xd2280u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d2281  mov ebp, esp
    X86_AT(c, 0xd2281u);
    c.r[5] = c.r[4];
    // 0d2283  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xd2283u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d2286  add eax, 7
    X86_AT(c, 0xd2286u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x7u, 0, 4); }
    // 0d2289  push eax
    X86_AT(c, 0xd2289u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d228a  push 0x20
    X86_AT(c, 0xd228au);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0d228c  call 0xcc814
    X86_AT(c, 0xd228cu);
    push32(c, 0xd2291u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd2291u);
    X86_TICK(c, 16);
    // 0d2291  leave 
    X86_AT(c, 0xd2291u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d2292  ret 
    X86_AT(c, 0xd2292u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2280u, "ran off the end of a function");
}
void f_000d2294(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0d2294  push ebp
    X86_AT(c, 0xd2294u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d2295  mov ebp, esp
    X86_AT(c, 0xd2295u);
    c.r[5] = c.r[4];
    // 0d2297  push edi
    X86_AT(c, 0xd2297u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2298  mov edi, 4
    X86_AT(c, 0xd2298u);
    c.r[7] = 0x4u;
    // 0d229d  movsx eax, word ptr [ebp + 0xc]
    X86_AT(c, 0xd229du);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d22a1  push eax
    X86_AT(c, 0xd22a1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d22a2  call 0xc8dd4
    X86_AT(c, 0xd22a2u);
    push32(c, 0xd22a7u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xd22a7u);
    X86_TICK(c, 19);
    // 0d22a7  push edi
    X86_AT(c, 0xd22a7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d22a8  movsx eax, word ptr [ebp + 8]
    X86_AT(c, 0xd22a8u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d22ac  push eax
    X86_AT(c, 0xd22acu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d22ad  push edi
    X86_AT(c, 0xd22adu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d22ae  call 0xc8cb8
    X86_AT(c, 0xd22aeu);
    push32(c, 0xd22b3u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd22b3u);
    X86_TICK(c, 9);
    // 0d22b3  push 0xf
    X86_AT(c, 0xd22b3u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d22b5  call 0xc8dd4
    X86_AT(c, 0xd22b5u);
    push32(c, 0xd22bau); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xd22bau);
    X86_TICK(c, 9);
    // 0d22ba  push edi
    X86_AT(c, 0xd22bau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d22bb  call 0xca0a0
    X86_AT(c, 0xd22bbu);
    push32(c, 0xd22c0u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd22c0u);
    X86_TICK(c, 22);
    // 0d22c0  add esp, 0x18
    X86_AT(c, 0xd22c0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d22c3  pop edi
    X86_AT(c, 0xd22c3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d22c4  leave 
    X86_AT(c, 0xd22c4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d22c5  ret 
    X86_AT(c, 0xd22c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2294u, "ran off the end of a function");
}
void f_000d22c8(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0d22c8  push ebp
    X86_AT(c, 0xd22c8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d22c9  mov ebp, esp
    X86_AT(c, 0xd22c9u);
    c.r[5] = c.r[4];
    // 0d22cb  sub esp, 0xc
    X86_AT(c, 0xd22cbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0d22ce  push ebx
    X86_AT(c, 0xd22ceu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d22cf  push esi
    X86_AT(c, 0xd22cfu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d22d0  push edi
    X86_AT(c, 0xd22d0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d22d1  mov di, word ptr [ebp + 0x1c]
    X86_AT(c, 0xd22d1u);
    s16(c, 7, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu))));
    // 0d22d5  mov dword ptr [ebp - 4], 4
    X86_AT(c, 0xd22d5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x4u);
    // 0d22dc  mov si, word ptr [ebp + 0x10]
    X86_AT(c, 0xd22dcu);
    s16(c, 6, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
L_d22e0:
    X86_TICK(c, 11);
    // 0d22e0  cmp si, word ptr [ebp + 0x14]
    X86_AT(c, 0xd22e0u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0, 2);
    // 0d22e4  jg 0xd2382
    X86_AT(c, 0xd22e4u);
    if (x86_cc(c, 15)) { goto L_d2382; }
    X86_TICK(c, 19);
    // 0d22ea  movsx eax, si
    X86_AT(c, 0xd22eau);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[6] & 0xFFFFu);
    // 0d22ed  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xd22edu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d22f0  cmp dword ptr [edx + eax*4], 0
    X86_AT(c, 0xd22f0u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[0] * 4))), 0x0u, 0, 4);
    // 0d22f4  je 0xd237c
    X86_AT(c, 0xd22f4u);
    if (x86_cc(c, 4)) { goto L_d237c; }
    X86_TICK(c, 7);
    // 0d22fa  cmp di, 9
    X86_AT(c, 0xd22fau);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x9u, 0, 2);
    // 0d22fe  jle 0xd2309
    X86_AT(c, 0xd22feu);
    if (x86_cc(c, 14)) { goto L_d2309; }
    X86_TICK(c, 7);
    // 0d2300  call 0xd2240
    X86_AT(c, 0xd2300u);
    push32(c, 0xd2305u); x86_call_known(c, 0xd2240u, f_000d2240); X86_RET(c, 0xd2305u);
    X86_TICK(c, 2);
    // 0d2305  mov di, 0xfffa
    X86_AT(c, 0xd2305u);
    s16(c, 7, 0xFFFAu);
L_d2309:
    X86_TICK(c, 12);
    // 0d2309  movsx eax, di
    X86_AT(c, 0xd2309u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[7] & 0xFFFFu);
    // 0d230c  push eax
    X86_AT(c, 0xd230cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d230d  call 0xd226c
    X86_AT(c, 0xd230du);
    push32(c, 0xd2312u); x86_call_known(c, 0xd226cu, f_000d226c); X86_RET(c, 0xd2312u);
    X86_TICK(c, 13);
    // 0d2312  add esp, 4
    X86_AT(c, 0xd2312u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d2315  cmp si, word ptr [ebp + 0x18]
    X86_AT(c, 0xd2315u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 0, 2);
    // 0d2319  je 0xd2321
    X86_AT(c, 0xd2319u);
    if (x86_cc(c, 4)) { goto L_d2321; }
    X86_TICK(c, 9);
    // 0d231b  mov bx, 0xf
    X86_AT(c, 0xd231bu);
    s16(c, 3, 0xFu);
    // 0d231f  jmp 0xd2325
    X86_AT(c, 0xd231fu);
    goto L_d2325;
L_d2321:
    X86_TICK(c, 2);
    // 0d2321  mov bx, 0xe
    X86_AT(c, 0xd2321u);
    s16(c, 3, 0xEu);
L_d2325:
    X86_TICK(c, 26);
    // 0d2325  movsx eax, si
    X86_AT(c, 0xd2325u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[6] & 0xFFFFu);
    // 0d2328  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd2328u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d232b  push dword ptr [edx + eax*4]
    X86_AT(c, 0xd232bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[0] * 4))); push32(c, v); }
    // 0d232e  push dword ptr [ebp - 4]
    X86_AT(c, 0xd232eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0d2331  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xd2331u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0d2334  call 0xc8cdc
    X86_AT(c, 0xd2334u);
    push32(c, 0xd2339u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd2339u);
    X86_TICK(c, 27);
    // 0d2339  movsx eax, bx
    X86_AT(c, 0xd2339u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[3] & 0xFFFFu);
    // 0d233c  push eax
    X86_AT(c, 0xd233cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d233d  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd233du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d2340  mov ecx, dword ptr [ebp - 8]
    X86_AT(c, 0xd2340u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0d2343  push dword ptr [edx + ecx*4]
    X86_AT(c, 0xd2343u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[1] * 4))); push32(c, v); }
    // 0d2346  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xd2346u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0d2349  call 0xcc884
    X86_AT(c, 0xd2349u);
    push32(c, 0xd234eu); x86_call_known(c, 0xcc884u, f_000cc884); X86_RET(c, 0xd234eu);
    X86_TICK(c, 15);
    // 0d234e  add esp, 4
    X86_AT(c, 0xd234eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d2351  mov edx, 0xd
    X86_AT(c, 0xd2351u);
    c.r[2] = 0xDu;
    // 0d2356  sub edx, eax
    X86_AT(c, 0xd2356u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d2358  push edx
    X86_AT(c, 0xd2358u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d2359  call 0xd2218
    X86_AT(c, 0xd2359u);
    push32(c, 0xd235eu); x86_call_known(c, 0xd2218u, f_000d2218); X86_RET(c, 0xd235eu);
    X86_TICK(c, 12);
    // 0d235e  movsx eax, di
    X86_AT(c, 0xd235eu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[7] & 0xFFFFu);
    // 0d2361  push eax
    X86_AT(c, 0xd2361u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d2362  call 0xd2280
    X86_AT(c, 0xd2362u);
    push32(c, 0xd2367u); x86_call_known(c, 0xd2280u, f_000d2280); X86_RET(c, 0xd2367u);
    X86_TICK(c, 25);
    // 0d2367  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xd2367u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0d236a  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xd236au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d236d  mov ecx, dword ptr [ebp - 8]
    X86_AT(c, 0xd236du);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0d2370  push dword ptr [eax + ecx*4]
    X86_AT(c, 0xd2370u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] * 4))); push32(c, v); }
    // 0d2373  call 0xd2294
    X86_AT(c, 0xd2373u);
    push32(c, 0xd2378u); x86_call_known(c, 0xd2294u, f_000d2294); X86_RET(c, 0xd2378u);
    X86_TICK(c, 4);
    // 0d2378  inc edi
    X86_AT(c, 0xd2378u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d2379  add esp, 0x1c
    X86_AT(c, 0xd2379u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_d237c:
    X86_TICK(c, 9);
    // 0d237c  inc esi
    X86_AT(c, 0xd237cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d237d  jmp 0xd22e0
    X86_AT(c, 0xd237du);
    X86_POLL(c, 0xd22e0u); goto L_d22e0;
L_d2382:
    X86_TICK(c, 30);
    // 0d2382  mov eax, edi
    X86_AT(c, 0xd2382u);
    c.r[0] = c.r[7];
    // 0d2384  pop edi
    X86_AT(c, 0xd2384u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d2385  pop esi
    X86_AT(c, 0xd2385u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d2386  pop ebx
    X86_AT(c, 0xd2386u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d2387  leave 
    X86_AT(c, 0xd2387u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d2388  ret 
    X86_AT(c, 0xd2388u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd22c8u, "ran off the end of a function");
}
void f_000d238c(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0d238c  push ebx
    X86_AT(c, 0xd238cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d238d  push esi
    X86_AT(c, 0xd238du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d238e  push edi
    X86_AT(c, 0xd238eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d238f  mov esi, 4
    X86_AT(c, 0xd238fu);
    c.r[6] = 0x4u;
    // 0d2394  push 0x8744
    X86_AT(c, 0xd2394u);
    { uint32_t v = 0x8744u; push32(c, v); }
    // 0d2399  call 0xcc7bc
    X86_AT(c, 0xd2399u);
    push32(c, 0xd239eu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd239eu);
    X86_TICK(c, 27);
    // 0d239e  push 0xa
    X86_AT(c, 0xd239eu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d23a0  push 0xf
    X86_AT(c, 0xd23a0u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d23a2  push 0xf
    X86_AT(c, 0xd23a2u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d23a4  push 0x12
    X86_AT(c, 0xd23a4u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0d23a6  push 0x29
    X86_AT(c, 0xd23a6u);
    { uint32_t v = 0x29u; push32(c, v); }
    // 0d23a8  push 0x13c
    X86_AT(c, 0xd23a8u);
    { uint32_t v = 0x13Cu; push32(c, v); }
    // 0d23ad  push 0x15c
    X86_AT(c, 0xd23adu);
    { uint32_t v = 0x15Cu; push32(c, v); }
    // 0d23b2  push 0x41
    X86_AT(c, 0xd23b2u);
    { uint32_t v = 0x41u; push32(c, v); }
    // 0d23b4  push 0xc
    X86_AT(c, 0xd23b4u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0d23b6  push esi
    X86_AT(c, 0xd23b6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d23b7  call 0xc9fbc
    X86_AT(c, 0xd23b7u);
    push32(c, 0xd23bcu); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xd23bcu);
    X86_TICK(c, 9);
    // 0d23bc  push esi
    X86_AT(c, 0xd23bcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d23bd  call 0xca100
    X86_AT(c, 0xd23bdu);
    push32(c, 0xd23c2u); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xd23c2u);
    X86_TICK(c, 7);
    // 0d23c2  call 0xd2124
    X86_AT(c, 0xd23c2u);
    push32(c, 0xd23c7u); x86_call_known(c, 0xd2124u, f_000d2124); X86_RET(c, 0xd23c7u);
    X86_TICK(c, 11);
    // 0d23c7  push 1
    X86_AT(c, 0xd23c7u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d23c9  push 0xc
    X86_AT(c, 0xd23c9u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0d23cb  call 0xcc814
    X86_AT(c, 0xd23cbu);
    push32(c, 0xd23d0u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd23d0u);
    X86_TICK(c, 9);
    // 0d23d0  push 0xb
    X86_AT(c, 0xd23d0u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d23d2  call 0xc8dd4
    X86_AT(c, 0xd23d2u);
    push32(c, 0xd23d7u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xd23d7u);
    X86_TICK(c, 13);
    // 0d23d7  add esp, 0x3c
    X86_AT(c, 0xd23d7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d23da  push 0x875c
    X86_AT(c, 0xd23dau);
    { uint32_t v = 0x875Cu; push32(c, v); }
    // 0d23df  push esi
    X86_AT(c, 0xd23dfu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d23e0  call 0xc8cdc
    X86_AT(c, 0xd23e0u);
    push32(c, 0xd23e5u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd23e5u);
    X86_TICK(c, 9);
    // 0d23e5  push 0xf
    X86_AT(c, 0xd23e5u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d23e7  call 0xc8dd4
    X86_AT(c, 0xd23e7u);
    push32(c, 0xd23ecu); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xd23ecu);
    X86_TICK(c, 11);
    // 0d23ec  push 2
    X86_AT(c, 0xd23ecu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d23ee  push 2
    X86_AT(c, 0xd23eeu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d23f0  call 0xcc814
    X86_AT(c, 0xd23f0u);
    push32(c, 0xd23f5u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd23f5u);
    X86_TICK(c, 11);
    // 0d23f5  push 0x8784
    X86_AT(c, 0xd23f5u);
    { uint32_t v = 0x8784u; push32(c, v); }
    // 0d23fa  push esi
    X86_AT(c, 0xd23fau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d23fb  call 0xc8cdc
    X86_AT(c, 0xd23fbu);
    push32(c, 0xd2400u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd2400u);
    X86_TICK(c, 11);
    // 0d2400  push 0xb02ec
    X86_AT(c, 0xd2400u);
    { uint32_t v = 0xB02ECu; push32(c, v); }
    // 0d2405  push esi
    X86_AT(c, 0xd2405u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2406  call 0xca850
    X86_AT(c, 0xd2406u);
    push32(c, 0xd240bu); x86_call_known(c, 0xca850u, f_000ca850); X86_RET(c, 0xd240bu);
    X86_TICK(c, 11);
    // 0d240b  push 3
    X86_AT(c, 0xd240bu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d240d  push 2
    X86_AT(c, 0xd240du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d240f  call 0xcc814
    X86_AT(c, 0xd240fu);
    push32(c, 0xd2414u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd2414u);
    X86_TICK(c, 11);
    // 0d2414  push 0x879c
    X86_AT(c, 0xd2414u);
    { uint32_t v = 0x879Cu; push32(c, v); }
    // 0d2419  push esi
    X86_AT(c, 0xd2419u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d241a  call 0xc8cdc
    X86_AT(c, 0xd241au);
    push32(c, 0xd241fu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd241fu);
    X86_TICK(c, 11);
    // 0d241f  push 3
    X86_AT(c, 0xd241fu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d2421  push 0x24
    X86_AT(c, 0xd2421u);
    { uint32_t v = 0x24u; push32(c, v); }
    // 0d2423  call 0xcc814
    X86_AT(c, 0xd2423u);
    push32(c, 0xd2428u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd2428u);
    X86_TICK(c, 11);
    // 0d2428  add esp, 0x3c
    X86_AT(c, 0xd2428u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d242b  push 2
    X86_AT(c, 0xd242bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d242d  call 0xcf88c
    X86_AT(c, 0xd242du);
    push32(c, 0xd2432u); x86_call_known(c, 0xcf88cu, f_000cf88c); X86_RET(c, 0xd2432u);
    X86_TICK(c, 11);
    // 0d2432  push eax
    X86_AT(c, 0xd2432u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d2433  push esi
    X86_AT(c, 0xd2433u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2434  call 0xc8cb8
    X86_AT(c, 0xd2434u);
    push32(c, 0xd2439u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd2439u);
    X86_TICK(c, 11);
    // 0d2439  push esi
    X86_AT(c, 0xd2439u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d243a  push 2
    X86_AT(c, 0xd243au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d243c  call 0xcc814
    X86_AT(c, 0xd243cu);
    push32(c, 0xd2441u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd2441u);
    X86_TICK(c, 11);
    // 0d2441  push 0x87bc
    X86_AT(c, 0xd2441u);
    { uint32_t v = 0x87BCu; push32(c, v); }
    // 0d2446  push esi
    X86_AT(c, 0xd2446u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2447  call 0xc8cdc
    X86_AT(c, 0xd2447u);
    push32(c, 0xd244cu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd244cu);
    X86_TICK(c, 11);
    // 0d244c  push esi
    X86_AT(c, 0xd244cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d244d  push 0x18
    X86_AT(c, 0xd244du);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0d244f  call 0xcc814
    X86_AT(c, 0xd244fu);
    push32(c, 0xd2454u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd2454u);
    X86_TICK(c, 22);
    // 0d2454  add esp, 0x24
    X86_AT(c, 0xd2454u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0d2457  movzx eax, byte ptr [0xb02fd]
    X86_AT(c, 0xd2457u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xB02FDu)));
    // 0d245e  push dword ptr [eax*4 + 0xa1e28]
    X86_AT(c, 0xd245eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA1E28u))); push32(c, v); }
    // 0d2465  push esi
    X86_AT(c, 0xd2465u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2466  call 0xc8cdc
    X86_AT(c, 0xd2466u);
    push32(c, 0xd246bu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd246bu);
    X86_TICK(c, 11);
    // 0d246b  push 5
    X86_AT(c, 0xd246bu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d246d  push 2
    X86_AT(c, 0xd246du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d246f  call 0xcc814
    X86_AT(c, 0xd246fu);
    push32(c, 0xd2474u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd2474u);
    X86_TICK(c, 11);
    // 0d2474  push 0x87d0
    X86_AT(c, 0xd2474u);
    { uint32_t v = 0x87D0u; push32(c, v); }
    // 0d2479  push esi
    X86_AT(c, 0xd2479u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d247a  call 0xc8cdc
    X86_AT(c, 0xd247au);
    push32(c, 0xd247fu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd247fu);
    X86_TICK(c, 11);
    // 0d247f  push 5
    X86_AT(c, 0xd247fu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d2481  push 0x18
    X86_AT(c, 0xd2481u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0d2483  call 0xcc814
    X86_AT(c, 0xd2483u);
    push32(c, 0xd2488u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd2488u);
    X86_TICK(c, 20);
    // 0d2488  movzx eax, byte ptr [0xb02fb]
    X86_AT(c, 0xd2488u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xB02FBu)));
    // 0d248f  push dword ptr [eax*4 + 0xa1e34]
    X86_AT(c, 0xd248fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA1E34u))); push32(c, v); }
    // 0d2496  push esi
    X86_AT(c, 0xd2496u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2497  call 0xc8cdc
    X86_AT(c, 0xd2497u);
    push32(c, 0xd249cu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd249cu);
    X86_TICK(c, 11);
    // 0d249c  push 6
    X86_AT(c, 0xd249cu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d249e  push 2
    X86_AT(c, 0xd249eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d24a0  call 0xcc814
    X86_AT(c, 0xd24a0u);
    push32(c, 0xd24a5u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd24a5u);
    X86_TICK(c, 11);
    // 0d24a5  push 0x87e4
    X86_AT(c, 0xd24a5u);
    { uint32_t v = 0x87E4u; push32(c, v); }
    // 0d24aa  push esi
    X86_AT(c, 0xd24aau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d24ab  call 0xc8cdc
    X86_AT(c, 0xd24abu);
    push32(c, 0xd24b0u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd24b0u);
    X86_TICK(c, 11);
    // 0d24b0  push 6
    X86_AT(c, 0xd24b0u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d24b2  push 0x18
    X86_AT(c, 0xd24b2u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0d24b4  call 0xcc814
    X86_AT(c, 0xd24b4u);
    push32(c, 0xd24b9u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd24b9u);
    X86_TICK(c, 22);
    // 0d24b9  add esp, 0x40
    X86_AT(c, 0xd24b9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0d24bc  movzx eax, byte ptr [0xb02fc]
    X86_AT(c, 0xd24bcu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xB02FCu)));
    // 0d24c3  push dword ptr [eax*4 + 0xa1ed4]
    X86_AT(c, 0xd24c3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA1ED4u))); push32(c, v); }
    // 0d24ca  push esi
    X86_AT(c, 0xd24cau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d24cb  call 0xc8cdc
    X86_AT(c, 0xd24cbu);
    push32(c, 0xd24d0u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd24d0u);
    X86_TICK(c, 19);
    // 0d24d0  push 0
    X86_AT(c, 0xd24d0u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d24d2  push 0xffffffff
    X86_AT(c, 0xd24d2u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d24d4  push 6
    X86_AT(c, 0xd24d4u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d24d6  push 0
    X86_AT(c, 0xd24d6u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d24d8  push 0xa1eb8
    X86_AT(c, 0xd24d8u);
    { uint32_t v = 0xA1EB8u; push32(c, v); }
    // 0d24dd  push 0xb02fe
    X86_AT(c, 0xd24ddu);
    { uint32_t v = 0xB02FEu; push32(c, v); }
    // 0d24e2  call 0xd22c8
    X86_AT(c, 0xd24e2u);
    push32(c, 0xd24e7u); x86_call_known(c, 0xd22c8u, f_000d22c8); X86_RET(c, 0xd24e7u);
    X86_TICK(c, 60);
    // 0d24e7  xchg edi, eax
    X86_AT(c, 0xd24e7u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d24e8  add esp, 0x20
    X86_AT(c, 0xd24e8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0d24eb  mov eax, dword ptr [0xb031a]
    X86_AT(c, 0xd24ebu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB031Au)));
    // 0d24f0  cdq 
    X86_AT(c, 0xd24f0u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d24f1  mov ecx, 0xa
    X86_AT(c, 0xd24f1u);
    c.r[1] = 0xAu;
    // 0d24f6  idiv ecx
    X86_AT(c, 0xd24f6u);
    x86_idiv(c, c.r[1], 4, 0xd24f6u);
    // 0d24f8  and edx, edx
    X86_AT(c, 0xd24f8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0d24fa  je 0xd2531
    X86_AT(c, 0xd24fau);
    if (x86_cc(c, 4)) { goto L_d2531; }
    X86_TICK(c, 14);
    // 0d24fc  movsx eax, di
    X86_AT(c, 0xd24fcu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[7] & 0xFFFFu);
    // 0d24ff  push eax
    X86_AT(c, 0xd24ffu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d2500  mov ebx, eax
    X86_AT(c, 0xd2500u);
    c.r[3] = c.r[0];
    // 0d2502  call 0xd226c
    X86_AT(c, 0xd2502u);
    push32(c, 0xd2507u); x86_call_known(c, 0xd226cu, f_000d226c); X86_RET(c, 0xd2507u);
    X86_TICK(c, 11);
    // 0d2507  push 0x87f8
    X86_AT(c, 0xd2507u);
    { uint32_t v = 0x87F8u; push32(c, v); }
    // 0d250c  push esi
    X86_AT(c, 0xd250cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d250d  call 0xc8cdc
    X86_AT(c, 0xd250du);
    push32(c, 0xd2512u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd2512u);
    X86_TICK(c, 9);
    // 0d2512  push ebx
    X86_AT(c, 0xd2512u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d2513  call 0xd2280
    X86_AT(c, 0xd2513u);
    push32(c, 0xd2518u); x86_call_known(c, 0xd2280u, f_000d2280); X86_RET(c, 0xd2518u);
    X86_TICK(c, 59);
    // 0d2518  push 0xf
    X86_AT(c, 0xd2518u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d251a  mov eax, dword ptr [0xb031a]
    X86_AT(c, 0xd251au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB031Au)));
    // 0d251f  cdq 
    X86_AT(c, 0xd251fu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d2520  mov ecx, 0xa
    X86_AT(c, 0xd2520u);
    c.r[1] = 0xAu;
    // 0d2525  idiv ecx
    X86_AT(c, 0xd2525u);
    x86_idiv(c, c.r[1], 4, 0xd2525u);
    // 0d2527  push edx
    X86_AT(c, 0xd2527u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d2528  call 0xd2294
    X86_AT(c, 0xd2528u);
    push32(c, 0xd252du); x86_call_known(c, 0xd2294u, f_000d2294); X86_RET(c, 0xd252du);
    X86_TICK(c, 4);
    // 0d252d  add esp, 0x18
    X86_AT(c, 0xd252du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d2530  inc edi
    X86_AT(c, 0xd2530u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_d2531:
    X86_TICK(c, 55);
    // 0d2531  mov eax, dword ptr [0xb031a]
    X86_AT(c, 0xd2531u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB031Au)));
    // 0d2536  cdq 
    X86_AT(c, 0xd2536u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d2537  mov ecx, 0x64
    X86_AT(c, 0xd2537u);
    c.r[1] = 0x64u;
    // 0d253c  idiv ecx
    X86_AT(c, 0xd253cu);
    x86_idiv(c, c.r[1], 4, 0xd253cu);
    // 0d253e  cmp edx, 9
    X86_AT(c, 0xd253eu);
    (void)x86_sub(c, c.r[2], 0x9u, 0, 4);
    // 0d2541  jle 0xd2581
    X86_AT(c, 0xd2541u);
    if (x86_cc(c, 14)) { goto L_d2581; }
    X86_TICK(c, 14);
    // 0d2543  movsx eax, di
    X86_AT(c, 0xd2543u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[7] & 0xFFFFu);
    // 0d2546  push eax
    X86_AT(c, 0xd2546u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d2547  mov ebx, eax
    X86_AT(c, 0xd2547u);
    c.r[3] = c.r[0];
    // 0d2549  call 0xd226c
    X86_AT(c, 0xd2549u);
    push32(c, 0xd254eu); x86_call_known(c, 0xd226cu, f_000d226c); X86_RET(c, 0xd254eu);
    X86_TICK(c, 11);
    // 0d254e  push 0x8830
    X86_AT(c, 0xd254eu);
    { uint32_t v = 0x8830u; push32(c, v); }
    // 0d2553  push esi
    X86_AT(c, 0xd2553u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2554  call 0xc8cdc
    X86_AT(c, 0xd2554u);
    push32(c, 0xd2559u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd2559u);
    X86_TICK(c, 9);
    // 0d2559  push ebx
    X86_AT(c, 0xd2559u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d255a  call 0xd2280
    X86_AT(c, 0xd255au);
    push32(c, 0xd255fu); x86_call_known(c, 0xd2280u, f_000d2280); X86_RET(c, 0xd255fu);
    X86_TICK(c, 106);
    // 0d255f  push 0xf
    X86_AT(c, 0xd255fu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d2561  mov eax, dword ptr [0xb031a]
    X86_AT(c, 0xd2561u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB031Au)));
    // 0d2566  cdq 
    X86_AT(c, 0xd2566u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d2567  mov ecx, 0x64
    X86_AT(c, 0xd2567u);
    c.r[1] = 0x64u;
    // 0d256c  idiv ecx
    X86_AT(c, 0xd256cu);
    x86_idiv(c, c.r[1], 4, 0xd256cu);
    // 0d256e  xchg edx, eax
    X86_AT(c, 0xd256eu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0d256f  cdq 
    X86_AT(c, 0xd256fu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d2570  mov ecx, 0xa
    X86_AT(c, 0xd2570u);
    c.r[1] = 0xAu;
    // 0d2575  idiv ecx
    X86_AT(c, 0xd2575u);
    x86_idiv(c, c.r[1], 4, 0xd2575u);
    // 0d2577  push eax
    X86_AT(c, 0xd2577u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d2578  call 0xd2294
    X86_AT(c, 0xd2578u);
    push32(c, 0xd257du); x86_call_known(c, 0xd2294u, f_000d2294); X86_RET(c, 0xd257du);
    X86_TICK(c, 4);
    // 0d257d  inc edi
    X86_AT(c, 0xd257du);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d257e  add esp, 0x18
    X86_AT(c, 0xd257eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_d2581:
    X86_TICK(c, 12);
    // 0d2581  cmp dword ptr [0xb031a], 0x63
    X86_AT(c, 0xd2581u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB031Au))), 0x63u, 0, 4);
    // 0d2588  jle 0xd25bf
    X86_AT(c, 0xd2588u);
    if (x86_cc(c, 14)) { goto L_d25bf; }
    X86_TICK(c, 14);
    // 0d258a  movsx eax, di
    X86_AT(c, 0xd258au);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[7] & 0xFFFFu);
    // 0d258d  push eax
    X86_AT(c, 0xd258du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d258e  mov ebx, eax
    X86_AT(c, 0xd258eu);
    c.r[3] = c.r[0];
    // 0d2590  call 0xd226c
    X86_AT(c, 0xd2590u);
    push32(c, 0xd2595u); x86_call_known(c, 0xd226cu, f_000d226c); X86_RET(c, 0xd2595u);
    X86_TICK(c, 11);
    // 0d2595  push 0x8868
    X86_AT(c, 0xd2595u);
    { uint32_t v = 0x8868u; push32(c, v); }
    // 0d259a  push esi
    X86_AT(c, 0xd259au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d259b  call 0xc8cdc
    X86_AT(c, 0xd259bu);
    push32(c, 0xd25a0u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd25a0u);
    X86_TICK(c, 9);
    // 0d25a0  push ebx
    X86_AT(c, 0xd25a0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d25a1  call 0xd2280
    X86_AT(c, 0xd25a1u);
    push32(c, 0xd25a6u); x86_call_known(c, 0xd2280u, f_000d2280); X86_RET(c, 0xd25a6u);
    X86_TICK(c, 59);
    // 0d25a6  push 0xf
    X86_AT(c, 0xd25a6u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d25a8  mov eax, dword ptr [0xb031a]
    X86_AT(c, 0xd25a8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB031Au)));
    // 0d25ad  cdq 
    X86_AT(c, 0xd25adu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d25ae  mov ecx, 0x64
    X86_AT(c, 0xd25aeu);
    c.r[1] = 0x64u;
    // 0d25b3  idiv ecx
    X86_AT(c, 0xd25b3u);
    x86_idiv(c, c.r[1], 4, 0xd25b3u);
    // 0d25b5  push eax
    X86_AT(c, 0xd25b5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d25b6  call 0xd2294
    X86_AT(c, 0xd25b6u);
    push32(c, 0xd25bbu); x86_call_known(c, 0xd2294u, f_000d2294); X86_RET(c, 0xd25bbu);
    X86_TICK(c, 4);
    // 0d25bb  inc edi
    X86_AT(c, 0xd25bbu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d25bc  add esp, 0x18
    X86_AT(c, 0xd25bcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_d25bf:
    X86_TICK(c, 12);
    // 0d25bf  cmp dword ptr [0xb041e], 0
    X86_AT(c, 0xd25bfu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB041Eu))), 0x0u, 0, 4);
    // 0d25c6  je 0xd25f5
    X86_AT(c, 0xd25c6u);
    if (x86_cc(c, 4)) { goto L_d25f5; }
    X86_TICK(c, 14);
    // 0d25c8  movsx eax, di
    X86_AT(c, 0xd25c8u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[7] & 0xFFFFu);
    // 0d25cb  push eax
    X86_AT(c, 0xd25cbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d25cc  mov ebx, eax
    X86_AT(c, 0xd25ccu);
    c.r[3] = c.r[0];
    // 0d25ce  call 0xd226c
    X86_AT(c, 0xd25ceu);
    push32(c, 0xd25d3u); x86_call_known(c, 0xd226cu, f_000d226c); X86_RET(c, 0xd25d3u);
    X86_TICK(c, 11);
    // 0d25d3  push 0x88a0
    X86_AT(c, 0xd25d3u);
    { uint32_t v = 0x88A0u; push32(c, v); }
    // 0d25d8  push esi
    X86_AT(c, 0xd25d8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d25d9  call 0xc8cdc
    X86_AT(c, 0xd25d9u);
    push32(c, 0xd25deu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd25deu);
    X86_TICK(c, 9);
    // 0d25de  push ebx
    X86_AT(c, 0xd25deu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d25df  call 0xd2280
    X86_AT(c, 0xd25dfu);
    push32(c, 0xd25e4u); x86_call_known(c, 0xd2280u, f_000d2280); X86_RET(c, 0xd25e4u);
    X86_TICK(c, 14);
    // 0d25e4  push 0xf
    X86_AT(c, 0xd25e4u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d25e6  push dword ptr [0xb041e]
    X86_AT(c, 0xd25e6u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB041Eu))); push32(c, v); }
    // 0d25ec  call 0xd2294
    X86_AT(c, 0xd25ecu);
    push32(c, 0xd25f1u); x86_call_known(c, 0xd2294u, f_000d2294); X86_RET(c, 0xd25f1u);
    X86_TICK(c, 4);
    // 0d25f1  inc edi
    X86_AT(c, 0xd25f1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d25f2  add esp, 0x18
    X86_AT(c, 0xd25f2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_d25f5:
    X86_TICK(c, 25);
    // 0d25f5  movsx eax, di
    X86_AT(c, 0xd25f5u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[7] & 0xFFFFu);
    // 0d25f8  push eax
    X86_AT(c, 0xd25f8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d25f9  push dword ptr [0xb032e]
    X86_AT(c, 0xd25f9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB032Eu))); push32(c, v); }
    // 0d25ff  push 5
    X86_AT(c, 0xd25ffu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d2601  push 1
    X86_AT(c, 0xd2601u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d2603  push 0xa1e70
    X86_AT(c, 0xd2603u);
    { uint32_t v = 0xA1E70u; push32(c, v); }
    // 0d2608  push 0xb037a
    X86_AT(c, 0xd2608u);
    { uint32_t v = 0xB037Au; push32(c, v); }
    // 0d260d  call 0xd22c8
    X86_AT(c, 0xd260du);
    push32(c, 0xd2612u); x86_call_known(c, 0xd22c8u, f_000d22c8); X86_RET(c, 0xd2612u);
    X86_TICK(c, 28);
    // 0d2612  xchg edi, eax
    X86_AT(c, 0xd2612u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d2613  movsx eax, di
    X86_AT(c, 0xd2613u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[7] & 0xFFFFu);
    // 0d2616  push eax
    X86_AT(c, 0xd2616u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d2617  push dword ptr [0xb0326]
    X86_AT(c, 0xd2617u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB0326u))); push32(c, v); }
    // 0d261d  push 0xf
    X86_AT(c, 0xd261du);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d261f  push 1
    X86_AT(c, 0xd261fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d2621  push 0xa1de8
    X86_AT(c, 0xd2621u);
    { uint32_t v = 0xA1DE8u; push32(c, v); }
    // 0d2626  push 0xb0392
    X86_AT(c, 0xd2626u);
    { uint32_t v = 0xB0392u; push32(c, v); }
    // 0d262b  call 0xd22c8
    X86_AT(c, 0xd262bu);
    push32(c, 0xd2630u); x86_call_known(c, 0xd22c8u, f_000d22c8); X86_RET(c, 0xd2630u);
    X86_TICK(c, 28);
    // 0d2630  xchg edi, eax
    X86_AT(c, 0xd2630u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d2631  movsx eax, di
    X86_AT(c, 0xd2631u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[7] & 0xFFFFu);
    // 0d2634  push eax
    X86_AT(c, 0xd2634u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d2635  push dword ptr [0xb032a]
    X86_AT(c, 0xd2635u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB032Au))); push32(c, v); }
    // 0d263b  push 0xa
    X86_AT(c, 0xd263bu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d263d  push 1
    X86_AT(c, 0xd263du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d263f  push 0xa1e44
    X86_AT(c, 0xd263fu);
    { uint32_t v = 0xA1E44u; push32(c, v); }
    // 0d2644  push 0xb03d2
    X86_AT(c, 0xd2644u);
    { uint32_t v = 0xB03D2u; push32(c, v); }
    // 0d2649  call 0xd22c8
    X86_AT(c, 0xd2649u);
    push32(c, 0xd264eu); x86_call_known(c, 0xd22c8u, f_000d22c8); X86_RET(c, 0xd264eu);
    X86_TICK(c, 30);
    // 0d264e  add esp, 0x48
    X86_AT(c, 0xd264eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x48u, 0, 4); }
    // 0d2651  xchg edi, eax
    X86_AT(c, 0xd2651u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d2652  movsx eax, di
    X86_AT(c, 0xd2652u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[7] & 0xFFFFu);
    // 0d2655  push eax
    X86_AT(c, 0xd2655u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d2656  push dword ptr [0xb0332]
    X86_AT(c, 0xd2656u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB0332u))); push32(c, v); }
    // 0d265c  push 7
    X86_AT(c, 0xd265cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d265e  push 1
    X86_AT(c, 0xd265eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d2660  push 0xa1e88
    X86_AT(c, 0xd2660u);
    { uint32_t v = 0xA1E88u; push32(c, v); }
    // 0d2665  push 0xb03fe
    X86_AT(c, 0xd2665u);
    { uint32_t v = 0xB03FEu; push32(c, v); }
    // 0d266a  call 0xd22c8
    X86_AT(c, 0xd266au);
    push32(c, 0xd266fu); x86_call_known(c, 0xd22c8u, f_000d22c8); X86_RET(c, 0xd266fu);
    X86_TICK(c, 25);
    // 0d266f  xchg edi, eax
    X86_AT(c, 0xd266fu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d2670  movsx eax, di
    X86_AT(c, 0xd2670u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[7] & 0xFFFFu);
    // 0d2673  push eax
    X86_AT(c, 0xd2673u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d2674  push 0xffffffff
    X86_AT(c, 0xd2674u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d2676  push 3
    X86_AT(c, 0xd2676u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d2678  push 0
    X86_AT(c, 0xd2678u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d267a  push 0xa1ea8
    X86_AT(c, 0xd267au);
    { uint32_t v = 0xA1EA8u; push32(c, v); }
    // 0d267f  push 0xb036a
    X86_AT(c, 0xd267fu);
    { uint32_t v = 0xB036Au; push32(c, v); }
    // 0d2684  call 0xd22c8
    X86_AT(c, 0xd2684u);
    push32(c, 0xd2689u); x86_call_known(c, 0xd22c8u, f_000d22c8); X86_RET(c, 0xd2689u);
    X86_TICK(c, 10);
    // 0d2689  xchg edi, eax
    X86_AT(c, 0xd2689u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d268a  call 0xcc85c
    X86_AT(c, 0xd268au);
    push32(c, 0xd268fu); x86_call_known(c, 0xcc85cu, f_000cc85c); X86_RET(c, 0xd268fu);
    X86_TICK(c, 11);
    // 0d268f  push 0
    X86_AT(c, 0xd268fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d2691  push 4
    X86_AT(c, 0xd2691u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d2693  call 0xca2d4
    X86_AT(c, 0xd2693u);
    push32(c, 0xd2698u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd2698u);
    X86_TICK(c, 9);
    // 0d2698  push 7
    X86_AT(c, 0xd2698u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d269a  call 0xca0a0
    X86_AT(c, 0xd269au);
    push32(c, 0xd269fu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd269fu);
    X86_TICK(c, 24);
    // 0d269f  add esp, 0x3c
    X86_AT(c, 0xd269fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d26a2  pop edi
    X86_AT(c, 0xd26a2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d26a3  pop esi
    X86_AT(c, 0xd26a3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d26a4  pop ebx
    X86_AT(c, 0xd26a4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d26a5  ret 
    X86_AT(c, 0xd26a5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd238cu, "ran off the end of a function");
}
void f_000d26a8(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0d26a8  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0xd26a8u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0d26ac  cmp ecx, 0x53
    X86_AT(c, 0xd26acu);
    (void)x86_sub(c, c.r[1], 0x53u, 0, 4);
    // 0d26af  jle 0xd26b4
    X86_AT(c, 0xd26afu);
    if (x86_cc(c, 14)) { goto L_d26b4; }
    X86_TICK(c, 2);
    // 0d26b1  sub ecx, 0x54
    X86_AT(c, 0xd26b1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x54u, 0, 4); }
L_d26b4:
    X86_TICK(c, 7);
    // 0d26b4  cmp ecx, 0xa3
    X86_AT(c, 0xd26b4u);
    (void)x86_sub(c, c.r[1], 0xA3u, 0, 4);
    // 0d26ba  jge 0xd26c8
    X86_AT(c, 0xd26bau);
    if (x86_cc(c, 13)) { goto L_d26c8; }
    X86_TICK(c, 7);
    // 0d26bc  cmp ecx, 4
    X86_AT(c, 0xd26bcu);
    (void)x86_sub(c, c.r[1], 0x4u, 0, 4);
    // 0d26bf  jle 0xd26c8
    X86_AT(c, 0xd26bfu);
    if (x86_cc(c, 14)) { goto L_d26c8; }
    X86_TICK(c, 9);
    // 0d26c1  mov eax, 1
    X86_AT(c, 0xd26c1u);
    c.r[0] = 0x1u;
    // 0d26c6  jmp 0xd26ca
    X86_AT(c, 0xd26c6u);
    goto L_d26ca;
L_d26c8:
    X86_TICK(c, 2);
    // 0d26c8  sub eax, eax
    X86_AT(c, 0xd26c8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_d26ca:
    X86_TICK(c, 10);
    // 0d26ca  ret 
    X86_AT(c, 0xd26cau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd26a8u, "ran off the end of a function");
}
void f_000d26cc(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0d26cc  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0xd26ccu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0d26d0  cmp ecx, 0x4d
    X86_AT(c, 0xd26d0u);
    (void)x86_sub(c, c.r[1], 0x4Du, 0, 4);
    // 0d26d3  jle 0xd26d8
    X86_AT(c, 0xd26d3u);
    if (x86_cc(c, 14)) { goto L_d26d8; }
    X86_TICK(c, 2);
    // 0d26d5  sub ecx, 0x4e
    X86_AT(c, 0xd26d5u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x4Eu, 0, 4); }
L_d26d8:
    X86_TICK(c, 7);
    // 0d26d8  cmp ecx, 0x97
    X86_AT(c, 0xd26d8u);
    (void)x86_sub(c, c.r[1], 0x97u, 0, 4);
    // 0d26de  jge 0xd26ec
    X86_AT(c, 0xd26deu);
    if (x86_cc(c, 13)) { goto L_d26ec; }
    X86_TICK(c, 7);
    // 0d26e0  cmp ecx, 4
    X86_AT(c, 0xd26e0u);
    (void)x86_sub(c, c.r[1], 0x4u, 0, 4);
    // 0d26e3  jle 0xd26ec
    X86_AT(c, 0xd26e3u);
    if (x86_cc(c, 14)) { goto L_d26ec; }
    X86_TICK(c, 9);
    // 0d26e5  mov eax, 1
    X86_AT(c, 0xd26e5u);
    c.r[0] = 0x1u;
    // 0d26ea  jmp 0xd26ee
    X86_AT(c, 0xd26eau);
    goto L_d26ee;
L_d26ec:
    X86_TICK(c, 2);
    // 0d26ec  sub eax, eax
    X86_AT(c, 0xd26ecu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_d26ee:
    X86_TICK(c, 10);
    // 0d26ee  ret 
    X86_AT(c, 0xd26eeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd26ccu, "ran off the end of a function");
}
void f_000d26f0(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0d26f0  push ebp
    X86_AT(c, 0xd26f0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d26f1  mov ebp, esp
    X86_AT(c, 0xd26f1u);
    c.r[5] = c.r[4];
    // 0d26f3  sub esp, 0x28
    X86_AT(c, 0xd26f3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x28u, 0, 4); }
    // 0d26f6  push ebx
    X86_AT(c, 0xd26f6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d26f7  push esi
    X86_AT(c, 0xd26f7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d26f8  push edi
    X86_AT(c, 0xd26f8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d26f9  mov dword ptr [ebp - 0x10], 0
    X86_AT(c, 0xd26f9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), 0x0u);
    // 0d2700  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xd2700u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
    // 0d2707  push 0xff
    X86_AT(c, 0xd2707u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0d270c  push 1
    X86_AT(c, 0xd270cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d270e  call 0xc5df0
    X86_AT(c, 0xd270eu);
    push32(c, 0xd2713u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xd2713u);
    X86_TICK(c, 67);
    // 0d2713  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xd2713u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0d2716  mov eax, dword ptr [0xb031e]
    X86_AT(c, 0xd2716u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB031Eu)));
    // 0d271b  cdq 
    X86_AT(c, 0xd271bu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d271c  mov ecx, 0x3e8
    X86_AT(c, 0xd271cu);
    c.r[1] = 0x3E8u;
    // 0d2721  idiv ecx
    X86_AT(c, 0xd2721u);
    x86_idiv(c, c.r[1], 4, 0xd2721u);
    // 0d2723  add esp, 8
    X86_AT(c, 0xd2723u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d2726  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0xd2726u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0d2729  cmp edx, dword ptr [eax*4 + 0xafed4]
    X86_AT(c, 0xd2729u);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xAFED4u))), 0, 4);
    // 0d2730  jge 0xd2898
    X86_AT(c, 0xd2730u);
    if (x86_cc(c, 13)) { goto L_d2898; }
    X86_TICK(c, 13);
    // 0d2736  mov dword ptr [ebp - 0x14], 0
    X86_AT(c, 0xd2736u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), 0x0u);
    // 0d273d  push 8
    X86_AT(c, 0xd273du);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d273f  push 1
    X86_AT(c, 0xd273fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d2741  call 0xc5df0
    X86_AT(c, 0xd2741u);
    push32(c, 0xd2746u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xd2746u);
    X86_TICK(c, 15);
    // 0d2746  add eax, eax
    X86_AT(c, 0xd2746u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d2748  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd2748u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d274b  push 0x95
    X86_AT(c, 0xd274bu);
    { uint32_t v = 0x95u; push32(c, v); }
    // 0d2750  push 0
    X86_AT(c, 0xd2750u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d2752  call 0xc5df0
    X86_AT(c, 0xd2752u);
    push32(c, 0xd2757u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xd2757u);
    X86_TICK(c, 65);
    // 0d2757  cdq 
    X86_AT(c, 0xd2757u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d2758  mov ecx, 0xa
    X86_AT(c, 0xd2758u);
    c.r[1] = 0xAu;
    // 0d275d  idiv ecx
    X86_AT(c, 0xd275du);
    x86_idiv(c, c.r[1], 4, 0xd275du);
    // 0d275f  mov dword ptr [ebp - 0x18], eax
    X86_AT(c, 0xd275fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[0]);
    // 0d2762  mov eax, dword ptr [eax*4 + 0xaa158]
    X86_AT(c, 0xd2762u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xAA158u)));
    // 0d2769  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xd2769u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0d276c  add esp, 0x10
    X86_AT(c, 0xd276cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d276f  cmp eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd276fu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4);
    // 0d2772  jge 0xd2777
    X86_AT(c, 0xd2772u);
    if (x86_cc(c, 13)) { goto L_d2777; }
    X86_TICK(c, 2);
    // 0d2774  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd2774u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_d2777:
    X86_TICK(c, 12);
    // 0d2777  cmp dword ptr [ebp - 0x18], 4
    X86_AT(c, 0xd2777u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))), 0x4u, 0, 4);
    // 0d277b  jge 0xd278d
    X86_AT(c, 0xd277bu);
    if (x86_cc(c, 13)) { goto L_d278d; }
    X86_TICK(c, 11);
    // 0d277d  mov dword ptr [ebp - 0xc], 0xa
    X86_AT(c, 0xd277du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0xAu);
    // 0d2784  mov dword ptr [ebp - 0x10], 1
    X86_AT(c, 0xd2784u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), 0x1u);
    // 0d278b  jmp 0xd27a5
    X86_AT(c, 0xd278bu);
    goto L_d27a5;
L_d278d:
    X86_TICK(c, 12);
    // 0d278d  cmp dword ptr [ebp - 0x18], 9
    X86_AT(c, 0xd278du);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))), 0x9u, 0, 4);
    // 0d2791  jge 0xd279a
    X86_AT(c, 0xd2791u);
    if (x86_cc(c, 13)) { goto L_d279a; }
    X86_TICK(c, 9);
    // 0d2793  mov eax, 3
    X86_AT(c, 0xd2793u);
    c.r[0] = 0x3u;
    // 0d2798  jmp 0xd279f
    X86_AT(c, 0xd2798u);
    goto L_d279f;
L_d279a:
    X86_TICK(c, 2);
    // 0d279a  mov eax, 2
    X86_AT(c, 0xd279au);
    c.r[0] = 0x2u;
L_d279f:
    X86_TICK(c, 4);
    // 0d279f  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xd279fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0d27a2  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xd27a2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
L_d27a5:
    X86_TICK(c, 23);
    // 0d27a5  mov eax, dword ptr [ebp - 0x18]
    X86_AT(c, 0xd27a5u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 0d27a8  add eax, 0x8b
    X86_AT(c, 0xd27a8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8Bu, 0, 4); }
    // 0d27ad  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xd27adu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0d27b0  mov eax, dword ptr [ebp - 0x18]
    X86_AT(c, 0xd27b0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 0d27b3  lea eax, [eax + eax*1 + 0x16]
    X86_AT(c, 0xd27b3u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] + 0x16u);
    // 0d27b7  mov dword ptr [ebp - 0x24], eax
    X86_AT(c, 0xd27b7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), c.r[0]);
    // 0d27ba  call 0xcf88c
    X86_AT(c, 0xd27bau);
    push32(c, 0xd27bfu); x86_call_known(c, 0xcf88cu, f_000cf88c); X86_RET(c, 0xd27bfu);
    X86_TICK(c, 18);
    // 0d27bf  mov ecx, dword ptr [ebp - 0x18]
    X86_AT(c, 0xd27bfu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 0d27c2  inc eax
    X86_AT(c, 0xd27c2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d27c3  mov edx, dword ptr [ecx*4 + 0xaa158]
    X86_AT(c, 0xd27c3u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[1] * 4 + 0xAA158u)));
    // 0d27ca  lea edx, [edx + edx*4]
    X86_AT(c, 0xd27cau);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0d27cd  add edx, edx
    X86_AT(c, 0xd27cdu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[2], 0, 4); }
    // 0d27cf  add edx, eax
    X86_AT(c, 0xd27cfu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d27d1  mov dword ptr [ebp - 0x20], edx
    X86_AT(c, 0xd27d1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[2]);
L_d27d4:
    X86_TICK(c, 11);
    // 0d27d4  push 0xf
    X86_AT(c, 0xd27d4u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d27d6  push 6
    X86_AT(c, 0xd27d6u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d27d8  call 0xc5df0
    X86_AT(c, 0xd27d8u);
    push32(c, 0xd27ddu); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xd27ddu);
    X86_TICK(c, 14);
    // 0d27dd  xchg edi, eax
    X86_AT(c, 0xd27ddu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d27de  push 0xf
    X86_AT(c, 0xd27deu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d27e0  push 6
    X86_AT(c, 0xd27e0u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d27e2  call 0xc5df0
    X86_AT(c, 0xd27e2u);
    push32(c, 0xd27e7u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xd27e7u);
    X86_TICK(c, 14);
    // 0d27e7  xchg esi, eax
    X86_AT(c, 0xd27e7u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d27e8  push 0x10
    X86_AT(c, 0xd27e8u);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0d27ea  push 1
    X86_AT(c, 0xd27eau);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d27ec  call 0xc5df0
    X86_AT(c, 0xd27ecu);
    push32(c, 0xd27f1u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xd27f1u);
    X86_TICK(c, 9);
    // 0d27f1  add esp, 0x18
    X86_AT(c, 0xd27f1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d27f4  test al, 1
    X86_AT(c, 0xd27f4u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0d27f6  je 0xd27fa
    X86_AT(c, 0xd27f6u);
    if (x86_cc(c, 4)) { goto L_d27fa; }
    X86_TICK(c, 2);
    // 0d27f8  neg edi
    X86_AT(c, 0xd27f8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_neg(c, v, 4); }
L_d27fa:
    X86_TICK(c, 11);
    // 0d27fa  push 0x10
    X86_AT(c, 0xd27fau);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0d27fc  push 1
    X86_AT(c, 0xd27fcu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d27fe  call 0xc5df0
    X86_AT(c, 0xd27feu);
    push32(c, 0xd2803u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xd2803u);
    X86_TICK(c, 9);
    // 0d2803  add esp, 8
    X86_AT(c, 0xd2803u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d2806  test al, 1
    X86_AT(c, 0xd2806u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0d2808  je 0xd280c
    X86_AT(c, 0xd2808u);
    if (x86_cc(c, 4)) { goto L_d280c; }
    X86_TICK(c, 2);
    // 0d280a  neg esi
    X86_AT(c, 0xd280au);
    { uint32_t v = c.r[6]; c.r[6] = x86_neg(c, v, 4); }
L_d280c:
    X86_TICK(c, 11);
    // 0d280c  lea eax, [edi + 5]
    X86_AT(c, 0xd280cu);
    c.r[0] = (uint32_t)(c.r[7] + 0x5u);
    // 0d280f  push eax
    X86_AT(c, 0xd280fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d2810  call 0xcc5ac
    X86_AT(c, 0xd2810u);
    push32(c, 0xd2815u); x86_call_known(c, 0xcc5acu, f_000cc5ac); X86_RET(c, 0xd2815u);
    X86_TICK(c, 14);
    // 0d2815  xchg edi, eax
    X86_AT(c, 0xd2815u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d2816  lea eax, [esi + 5]
    X86_AT(c, 0xd2816u);
    c.r[0] = (uint32_t)(c.r[6] + 0x5u);
    // 0d2819  push eax
    X86_AT(c, 0xd2819u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d281a  call 0xcc5d8
    X86_AT(c, 0xd281au);
    push32(c, 0xd281fu); x86_call_known(c, 0xcc5d8u, f_000cc5d8); X86_RET(c, 0xd281fu);
    X86_TICK(c, 16);
    // 0d281f  xchg esi, eax
    X86_AT(c, 0xd281fu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d2820  push 1
    X86_AT(c, 0xd2820u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d2822  push esi
    X86_AT(c, 0xd2822u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2823  push edi
    X86_AT(c, 0xd2823u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2824  call 0xcc538
    X86_AT(c, 0xd2824u);
    push32(c, 0xd2829u); x86_call_known(c, 0xcc538u, f_000cc538); X86_RET(c, 0xd2829u);
    X86_TICK(c, 12);
    // 0d2829  xchg ebx, eax
    X86_AT(c, 0xd2829u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d282a  push edi
    X86_AT(c, 0xd282au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d282b  call 0xd26a8
    X86_AT(c, 0xd282bu);
    push32(c, 0xd2830u); x86_call_known(c, 0xd26a8u, f_000d26a8); X86_RET(c, 0xd2830u);
    X86_TICK(c, 7);
    // 0d2830  and eax, eax
    X86_AT(c, 0xd2830u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d2832  je 0xd2845
    X86_AT(c, 0xd2832u);
    if (x86_cc(c, 4)) { goto L_d2845; }
    X86_TICK(c, 9);
    // 0d2834  push esi
    X86_AT(c, 0xd2834u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2835  call 0xd26cc
    X86_AT(c, 0xd2835u);
    push32(c, 0xd283au); x86_call_known(c, 0xd26ccu, f_000d26cc); X86_RET(c, 0xd283au);
    X86_TICK(c, 9);
    // 0d283a  add esp, 4
    X86_AT(c, 0xd283au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d283d  and eax, eax
    X86_AT(c, 0xd283du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d283f  je 0xd2845
    X86_AT(c, 0xd283fu);
    if (x86_cc(c, 4)) { goto L_d2845; }
    X86_TICK(c, 9);
    // 0d2841  mov al, 1
    X86_AT(c, 0xd2841u);
    s8(c, 0, 0x1u);
    // 0d2843  jmp 0xd2847
    X86_AT(c, 0xd2843u);
    goto L_d2847;
L_d2845:
    X86_TICK(c, 2);
    // 0d2845  sub eax, eax
    X86_AT(c, 0xd2845u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_d2847:
    X86_TICK(c, 19);
    // 0d2847  movzx eax, al
    X86_AT(c, 0xd2847u);
    c.r[0] = g8(c, 0);
    // 0d284a  mov dword ptr [ebp - 0x28], eax
    X86_AT(c, 0xd284au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)), c.r[0]);
    // 0d284d  add esp, 0x18
    X86_AT(c, 0xd284du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d2850  cmp dword ptr [ebp - 0x14], 5
    X86_AT(c, 0xd2850u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 0x5u, 0, 4);
    // 0d2854  jge 0xd286a
    X86_AT(c, 0xd2854u);
    if (x86_cc(c, 13)) { goto L_d286a; }
    X86_TICK(c, 11);
    // 0d2856  cmp ebx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xd2856u);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4);
    // 0d2859  jne 0xd2860
    X86_AT(c, 0xd2859u);
    if (x86_cc(c, 5)) { goto L_d2860; }
    X86_TICK(c, 11);
    // 0d285b  cmp ebx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xd285bu);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0, 4);
    // 0d285e  je 0xd286a
    X86_AT(c, 0xd285eu);
    if (x86_cc(c, 4)) { goto L_d286a; }
L_d2860:
    X86_TICK(c, 12);
    // 0d2860  cmp dword ptr [ebp - 0x28], 0
    X86_AT(c, 0xd2860u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u))), 0x0u, 0, 4);
    // 0d2864  je 0xd27d4
    X86_AT(c, 0xd2864u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd27d4u); goto L_d27d4; }
L_d286a:
    X86_TICK(c, 11);
    // 0d286a  cmp ebx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xd286au);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4);
    // 0d286d  je 0xd2874
    X86_AT(c, 0xd286du);
    if (x86_cc(c, 4)) { goto L_d2874; }
    X86_TICK(c, 11);
    // 0d286f  cmp ebx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xd286fu);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0, 4);
    // 0d2872  jne 0xd2898
    X86_AT(c, 0xd2872u);
    if (x86_cc(c, 5)) { goto L_d2898; }
L_d2874:
    X86_TICK(c, 12);
    // 0d2874  cmp dword ptr [ebp - 0x28], 0
    X86_AT(c, 0xd2874u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u))), 0x0u, 0, 4);
    // 0d2878  je 0xd2898
    X86_AT(c, 0xd2878u);
    if (x86_cc(c, 4)) { goto L_d2898; }
    X86_TICK(c, 33);
    // 0d287a  push 0
    X86_AT(c, 0xd287au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d287c  push dword ptr [ebp - 0x24]
    X86_AT(c, 0xd287cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu))); push32(c, v); }
    // 0d287f  push dword ptr [ebp - 0x20]
    X86_AT(c, 0xd287fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u))); push32(c, v); }
    // 0d2882  push esi
    X86_AT(c, 0xd2882u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2883  push edi
    X86_AT(c, 0xd2883u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2884  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xd2884u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0d2887  push dword ptr [ebp - 0x1c]
    X86_AT(c, 0xd2887u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))); push32(c, v); }
    // 0d288a  call 0xcf6b0
    X86_AT(c, 0xd288au);
    push32(c, 0xd288fu); x86_call_known(c, 0xcf6b0u, f_000cf6b0); X86_RET(c, 0xd288fu);
    X86_TICK(c, 8);
    // 0d288f  inc dword ptr [0xaa2a8]
    X86_AT(c, 0xd288fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xAA2A8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d2895  add esp, 0x1c
    X86_AT(c, 0xd2895u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_d2898:
    X86_TICK(c, 28);
    // 0d2898  pop edi
    X86_AT(c, 0xd2898u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d2899  pop esi
    X86_AT(c, 0xd2899u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d289a  pop ebx
    X86_AT(c, 0xd289au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d289b  leave 
    X86_AT(c, 0xd289bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d289c  ret 
    X86_AT(c, 0xd289cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd26f0u, "ran off the end of a function");
}
void f_000d28a0(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0d28a0  push ebp
    X86_AT(c, 0xd28a0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d28a1  mov ebp, esp
    X86_AT(c, 0xd28a1u);
    c.r[5] = c.r[4];
    // 0d28a3  sub esp, 0x14
    X86_AT(c, 0xd28a3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x14u, 0, 4); }
    // 0d28a6  push ebx
    X86_AT(c, 0xd28a6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d28a7  push esi
    X86_AT(c, 0xd28a7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d28a8  push edi
    X86_AT(c, 0xd28a8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d28a9  mov dword ptr [ebp - 4], 3
    X86_AT(c, 0xd28a9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x3u);
    // 0d28b0  mov dword ptr [ebp - 8], 2
    X86_AT(c, 0xd28b0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x2u);
    // 0d28b7  sub edi, edi
    X86_AT(c, 0xd28b7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0d28b9  mov dword ptr [ebp - 0x14], edi
    X86_AT(c, 0xd28b9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[7]);
    // 0d28bc  push 0x64
    X86_AT(c, 0xd28bcu);
    { uint32_t v = 0x64u; push32(c, v); }
    // 0d28be  push 1
    X86_AT(c, 0xd28beu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d28c0  call 0xc5df0
    X86_AT(c, 0xd28c0u);
    push32(c, 0xd28c5u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xd28c5u);
    X86_TICK(c, 17);
    // 0d28c5  mov edx, dword ptr [0xb0332]
    X86_AT(c, 0xd28c5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB0332u)));
    // 0d28cb  add esp, 8
    X86_AT(c, 0xd28cbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d28ce  cmp eax, dword ptr [edx*4 + 0xaa1f8]
    X86_AT(c, 0xd28ceu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[2] * 4 + 0xAA1F8u))), 0, 4);
    // 0d28d5  jle 0xd28de
    X86_AT(c, 0xd28d5u);
    if (x86_cc(c, 14)) { goto L_d28de; }
    X86_TICK(c, 9);
    // 0d28d7  mov eax, edi
    X86_AT(c, 0xd28d7u);
    c.r[0] = c.r[7];
    // 0d28d9  jmp 0xd29ca
    X86_AT(c, 0xd28d9u);
    goto L_d29ca;
L_d28de:
    X86_TICK(c, 19);
    // 0d28de  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xd28deu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d28e1  lea eax, [eax*8]
    X86_AT(c, 0xd28e1u);
    c.r[0] = (uint32_t)(c.r[0] * 8);
    // 0d28e8  lea eax, [eax + eax*4]
    X86_AT(c, 0xd28e8u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0d28eb  mov esi, dword ptr [eax + 0xbefcc]
    X86_AT(c, 0xd28ebu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFCCu)));
    // 0d28f1  cmp esi, 0x8b
    X86_AT(c, 0xd28f1u);
    (void)x86_sub(c, c.r[6], 0x8Bu, 0, 4);
    // 0d28f7  jl 0xd2916
    X86_AT(c, 0xd28f7u);
    if (x86_cc(c, 12)) { goto L_d2916; }
    X86_TICK(c, 7);
    // 0d28f9  cmp esi, 0x8e
    X86_AT(c, 0xd28f9u);
    (void)x86_sub(c, c.r[6], 0x8Eu, 0, 4);
    // 0d28ff  jg 0xd2916
    X86_AT(c, 0xd28ffu);
    if (x86_cc(c, 15)) { goto L_d2916; }
    X86_TICK(c, 13);
    // 0d2901  mov dword ptr [ebp - 4], 1
    X86_AT(c, 0xd2901u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x1u);
    // 0d2908  mov dword ptr [ebp - 8], 0xa
    X86_AT(c, 0xd2908u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0xAu);
    // 0d290f  mov edi, 0x12
    X86_AT(c, 0xd290fu);
    c.r[7] = 0x12u;
    // 0d2914  jmp 0xd2931
    X86_AT(c, 0xd2914u);
    goto L_d2931;
L_d2916:
    X86_TICK(c, 7);
    // 0d2916  cmp esi, 0x91
    X86_AT(c, 0xd2916u);
    (void)x86_sub(c, c.r[6], 0x91u, 0, 4);
    // 0d291c  je 0xd2926
    X86_AT(c, 0xd291cu);
    if (x86_cc(c, 4)) { goto L_d2926; }
    X86_TICK(c, 7);
    // 0d291e  cmp esi, 0x93
    X86_AT(c, 0xd291eu);
    (void)x86_sub(c, c.r[6], 0x93u, 0, 4);
    // 0d2924  jne 0xd2931
    X86_AT(c, 0xd2924u);
    if (x86_cc(c, 5)) { goto L_d2931; }
L_d2926:
    X86_TICK(c, 6);
    // 0d2926  mov eax, 3
    X86_AT(c, 0xd2926u);
    c.r[0] = 0x3u;
    // 0d292b  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xd292bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0d292e  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd292eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_d2931:
    X86_TICK(c, 17);
    // 0d2931  mov eax, 5
    X86_AT(c, 0xd2931u);
    c.r[0] = 0x5u;
    // 0d2936  sub eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd2936u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 0d2939  push eax
    X86_AT(c, 0xd2939u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d293a  call 0xcc5ac
    X86_AT(c, 0xd293au);
    push32(c, 0xd293fu); x86_call_known(c, 0xcc5acu, f_000cc5ac); X86_RET(c, 0xd293fu);
    X86_TICK(c, 19);
    // 0d293f  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xd293fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0d2942  mov edx, 5
    X86_AT(c, 0xd2942u);
    c.r[2] = 0x5u;
    // 0d2947  sub edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xd2947u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4); }
    // 0d294a  push edx
    X86_AT(c, 0xd294au);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d294b  call 0xcc5d8
    X86_AT(c, 0xd294bu);
    push32(c, 0xd2950u); x86_call_known(c, 0xcc5d8u, f_000cc5d8); X86_RET(c, 0xd2950u);
    X86_TICK(c, 18);
    // 0d2950  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xd2950u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0d2953  push 0
    X86_AT(c, 0xd2953u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d2955  push eax
    X86_AT(c, 0xd2955u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d2956  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xd2956u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0d2959  call 0xcc538
    X86_AT(c, 0xd2959u);
    push32(c, 0xd295eu); x86_call_known(c, 0xcc538u, f_000cc538); X86_RET(c, 0xd295eu);
    X86_TICK(c, 17);
    // 0d295e  xchg ebx, eax
    X86_AT(c, 0xd295eu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d295f  add esp, 0x14
    X86_AT(c, 0xd295fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d2962  cmp dword ptr [ebp - 4], 3
    X86_AT(c, 0xd2962u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x3u, 0, 4);
    // 0d2966  jne 0xd2984
    X86_AT(c, 0xd2966u);
    if (x86_cc(c, 5)) { goto L_d2984; }
    X86_TICK(c, 12);
    // 0d2968  cmp dword ptr [ebp - 8], 2
    X86_AT(c, 0xd2968u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x2u, 0, 4);
    // 0d296c  jne 0xd2984
    X86_AT(c, 0xd296cu);
    if (x86_cc(c, 5)) { goto L_d2984; }
    X86_TICK(c, 7);
    // 0d296e  cmp ebx, 8
    X86_AT(c, 0xd296eu);
    (void)x86_sub(c, c.r[3], 0x8u, 0, 4);
    // 0d2971  jg 0xd297c
    X86_AT(c, 0xd2971u);
    if (x86_cc(c, 15)) { goto L_d297c; }
    X86_TICK(c, 7);
    // 0d2973  cmp ebx, 6
    X86_AT(c, 0xd2973u);
    (void)x86_sub(c, c.r[3], 0x6u, 0, 4);
    // 0d2976  jl 0xd297c
    X86_AT(c, 0xd2976u);
    if (x86_cc(c, 12)) { goto L_d297c; }
    X86_TICK(c, 9);
    // 0d2978  mov al, 1
    X86_AT(c, 0xd2978u);
    s8(c, 0, 0x1u);
    // 0d297a  jmp 0xd297e
    X86_AT(c, 0xd297au);
    goto L_d297e;
L_d297c:
    X86_TICK(c, 2);
    // 0d297c  sub eax, eax
    X86_AT(c, 0xd297cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_d297e:
    X86_TICK(c, 5);
    // 0d297e  movzx eax, al
    X86_AT(c, 0xd297eu);
    c.r[0] = g8(c, 0);
    // 0d2981  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xd2981u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
L_d2984:
    X86_TICK(c, 11);
    // 0d2984  cmp ebx, dword ptr [ebp - 4]
    X86_AT(c, 0xd2984u);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4);
    // 0d2987  je 0xd299d
    X86_AT(c, 0xd2987u);
    if (x86_cc(c, 4)) { goto L_d299d; }
    X86_TICK(c, 11);
    // 0d2989  cmp ebx, dword ptr [ebp - 8]
    X86_AT(c, 0xd2989u);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4);
    // 0d298c  je 0xd299d
    X86_AT(c, 0xd298cu);
    if (x86_cc(c, 4)) { goto L_d299d; }
    X86_TICK(c, 7);
    // 0d298e  and edi, edi
    X86_AT(c, 0xd298eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0d2990  je 0xd29bb
    X86_AT(c, 0xd2990u);
    if (x86_cc(c, 4)) { goto L_d29bb; }
    X86_TICK(c, 7);
    // 0d2992  cmp edi, ebx
    X86_AT(c, 0xd2992u);
    (void)x86_sub(c, c.r[7], c.r[3], 0, 4);
    // 0d2994  jg 0xd29bb
    X86_AT(c, 0xd2994u);
    if (x86_cc(c, 15)) { goto L_d29bb; }
    X86_TICK(c, 9);
    // 0d2996  lea eax, [edi + 0xe]
    X86_AT(c, 0xd2996u);
    c.r[0] = (uint32_t)(c.r[7] + 0xEu);
    // 0d2999  cmp eax, ebx
    X86_AT(c, 0xd2999u);
    (void)x86_sub(c, c.r[0], c.r[3], 0, 4);
    // 0d299b  jl 0xd29bb
    X86_AT(c, 0xd299bu);
    if (x86_cc(c, 12)) { goto L_d29bb; }
L_d299d:
    X86_TICK(c, 12);
    // 0d299d  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xd299du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0d29a0  call 0xd26a8
    X86_AT(c, 0xd29a0u);
    push32(c, 0xd29a5u); x86_call_known(c, 0xd26a8u, f_000d26a8); X86_RET(c, 0xd29a5u);
    X86_TICK(c, 9);
    // 0d29a5  add esp, 4
    X86_AT(c, 0xd29a5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d29a8  and eax, eax
    X86_AT(c, 0xd29a8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d29aa  je 0xd29bb
    X86_AT(c, 0xd29aau);
    if (x86_cc(c, 4)) { goto L_d29bb; }
    X86_TICK(c, 12);
    // 0d29ac  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xd29acu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0d29af  call 0xd26cc
    X86_AT(c, 0xd29afu);
    push32(c, 0xd29b4u); x86_call_known(c, 0xd26ccu, f_000d26cc); X86_RET(c, 0xd29b4u);
    X86_TICK(c, 9);
    // 0d29b4  add esp, 4
    X86_AT(c, 0xd29b4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d29b7  and eax, eax
    X86_AT(c, 0xd29b7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d29b9  jne 0xd29c1
    X86_AT(c, 0xd29b9u);
    if (x86_cc(c, 5)) { goto L_d29c1; }
L_d29bb:
    X86_TICK(c, 12);
    // 0d29bb  cmp dword ptr [ebp - 0x14], 0
    X86_AT(c, 0xd29bbu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 0x0u, 0, 4);
    // 0d29bf  je 0xd29c8
    X86_AT(c, 0xd29bfu);
    if (x86_cc(c, 4)) { goto L_d29c8; }
L_d29c1:
    X86_TICK(c, 9);
    // 0d29c1  mov eax, 1
    X86_AT(c, 0xd29c1u);
    c.r[0] = 0x1u;
    // 0d29c6  jmp 0xd29ca
    X86_AT(c, 0xd29c6u);
    goto L_d29ca;
L_d29c8:
    X86_TICK(c, 2);
    // 0d29c8  sub eax, eax
    X86_AT(c, 0xd29c8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_d29ca:
    X86_TICK(c, 28);
    // 0d29ca  pop edi
    X86_AT(c, 0xd29cau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d29cb  pop esi
    X86_AT(c, 0xd29cbu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d29cc  pop ebx
    X86_AT(c, 0xd29ccu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d29cd  leave 
    X86_AT(c, 0xd29cdu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d29ce  ret 
    X86_AT(c, 0xd29ceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd28a0u, "ran off the end of a function");
}
}
