#include "p_game_funcs.h"
namespace p_game {
void f_000ba310(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0ba310  push ebp
    X86_AT(c, 0xba310u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ba311  mov ebp, esp
    X86_AT(c, 0xba311u);
    c.r[5] = c.r[4];
    // 0ba313  sub esp, 8
    X86_AT(c, 0xba313u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0ba316  push ebx
    X86_AT(c, 0xba316u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ba317  push esi
    X86_AT(c, 0xba317u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ba318  push edi
    X86_AT(c, 0xba318u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ba319  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xba319u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0ba31c  push edi
    X86_AT(c, 0xba31cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ba31d  call 0xba07c
    X86_AT(c, 0xba31du);
    push32(c, 0xba322u); x86_call_known(c, 0xba07cu, f_000ba07c); X86_RET(c, 0xba322u);
    X86_TICK(c, 9);
    // 0ba322  sub ebx, ebx
    X86_AT(c, 0xba322u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0ba324  call 0xb90e8
    X86_AT(c, 0xba324u);
    push32(c, 0xba329u); x86_call_known(c, 0xb90e8u, f_000b90e8); X86_RET(c, 0xba329u);
    X86_TICK(c, 17);
    // 0ba329  sub ebx, ebx
    X86_AT(c, 0xba329u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0ba32b  mov dword ptr [ebp - 4], ebx
    X86_AT(c, 0xba32bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[3]);
    // 0ba32e  mov esi, ebx
    X86_AT(c, 0xba32eu);
    c.r[6] = c.r[3];
    // 0ba330  push esi
    X86_AT(c, 0xba330u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ba331  push edi
    X86_AT(c, 0xba331u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ba332  call 0xb9f98
    X86_AT(c, 0xba332u);
    push32(c, 0xba337u); x86_call_known(c, 0xb9f98u, f_000b9f98); X86_RET(c, 0xba337u);
    X86_TICK(c, 2);
    // 0ba337  add esp, 0xc
    X86_AT(c, 0xba337u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_ba33a:
    X86_TICK(c, 12);
    // 0ba33a  push dword ptr [ebp + 8]
    X86_AT(c, 0xba33au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0ba33d  call 0xb9930
    X86_AT(c, 0xba33du);
    push32(c, 0xba342u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xba342u);
    X86_TICK(c, 12);
    // 0ba342  xchg ebx, eax
    X86_AT(c, 0xba342u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0ba343  add esp, 4
    X86_AT(c, 0xba343u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ba346  and bl, bl
    X86_AT(c, 0xba346u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0ba348  je 0xba33a
    X86_AT(c, 0xba348u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xba33au); goto L_ba33a; }
    X86_TICK(c, 7);
    // 0ba34a  cmp bl, 4
    X86_AT(c, 0xba34au);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0ba34d  je 0xba3d0
    X86_AT(c, 0xba34du);
    if (x86_cc(c, 4)) { goto L_ba3d0; }
    X86_TICK(c, 7);
    // 0ba353  cmp bl, 5
    X86_AT(c, 0xba353u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0ba356  jne 0xba363
    X86_AT(c, 0xba356u);
    if (x86_cc(c, 5)) { goto L_ba363; }
    X86_TICK(c, 9);
    // 0ba358  dec esi
    X86_AT(c, 0xba358u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0ba359  and esi, esi
    X86_AT(c, 0xba359u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0ba35b  jge 0xba370
    X86_AT(c, 0xba35bu);
    if (x86_cc(c, 13)) { goto L_ba370; }
    X86_TICK(c, 13);
    // 0ba35d  mov esi, dword ptr [edi + 4]
    X86_AT(c, 0xba35du);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)));
    // 0ba360  dec esi
    X86_AT(c, 0xba360u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0ba361  jmp 0xba370
    X86_AT(c, 0xba361u);
    goto L_ba370;
L_ba363:
    X86_TICK(c, 7);
    // 0ba363  cmp bl, 6
    X86_AT(c, 0xba363u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0ba366  jne 0xba37c
    X86_AT(c, 0xba366u);
    if (x86_cc(c, 5)) { goto L_ba37c; }
    X86_TICK(c, 13);
    // 0ba368  inc esi
    X86_AT(c, 0xba368u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0ba369  cmp esi, dword ptr [edi + 4]
    X86_AT(c, 0xba369u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0, 4);
    // 0ba36c  jl 0xba370
    X86_AT(c, 0xba36cu);
    if (x86_cc(c, 12)) { goto L_ba370; }
    X86_TICK(c, 2);
    // 0ba36e  sub esi, esi
    X86_AT(c, 0xba36eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_ba370:
    X86_TICK(c, 11);
    // 0ba370  push esi
    X86_AT(c, 0xba370u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ba371  push edi
    X86_AT(c, 0xba371u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ba372  call 0xb9f98
    X86_AT(c, 0xba372u);
    push32(c, 0xba377u); x86_call_known(c, 0xb9f98u, f_000b9f98); X86_RET(c, 0xba377u);
    X86_TICK(c, 9);
    // 0ba377  add esp, 8
    X86_AT(c, 0xba377u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ba37a  jmp 0xba33a
    X86_AT(c, 0xba37au);
    X86_POLL(c, 0xba33au); goto L_ba33a;
L_ba37c:
    X86_TICK(c, 7);
    // 0ba37c  cmp bl, 1
    X86_AT(c, 0xba37cu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ba37f  jne 0xba3ab
    X86_AT(c, 0xba37fu);
    if (x86_cc(c, 5)) { goto L_ba3ab; }
    X86_TICK(c, 18);
    // 0ba381  lea eax, [ebp - 5]
    X86_AT(c, 0xba381u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 0ba384  push eax
    X86_AT(c, 0xba384u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ba385  push dword ptr [ebp + 0x10]
    X86_AT(c, 0xba385u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 0ba388  push edi
    X86_AT(c, 0xba388u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ba389  call 0xba100
    X86_AT(c, 0xba389u);
    push32(c, 0xba38eu); x86_call_known(c, 0xba100u, f_000ba100); X86_RET(c, 0xba38eu);
    X86_TICK(c, 11);
    // 0ba38e  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xba38eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0ba391  add esp, 0xc
    X86_AT(c, 0xba391u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ba394  inc eax
    X86_AT(c, 0xba394u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0ba395  jne 0xba3a6
    X86_AT(c, 0xba395u);
    if (x86_cc(c, 5)) { goto L_ba3a6; }
    X86_TICK(c, 11);
    // 0ba397  push esi
    X86_AT(c, 0xba397u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ba398  push edi
    X86_AT(c, 0xba398u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ba399  call 0xb9f98
    X86_AT(c, 0xba399u);
    push32(c, 0xba39eu); x86_call_known(c, 0xb9f98u, f_000b9f98); X86_RET(c, 0xba39eu);
    X86_TICK(c, 13);
    // 0ba39e  mov al, byte ptr [ebp + 0x10]
    X86_AT(c, 0xba39eu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 0ba3a1  add esp, 8
    X86_AT(c, 0xba3a1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ba3a4  jmp 0xba3fc
    X86_AT(c, 0xba3a4u);
    goto L_ba3fc;
L_ba3a6:
    X86_TICK(c, 11);
    // 0ba3a6  mov esi, dword ptr [ebp - 4]
    X86_AT(c, 0xba3a6u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0ba3a9  jmp 0xba3c6
    X86_AT(c, 0xba3a9u);
    goto L_ba3c6;
L_ba3ab:
    X86_TICK(c, 15);
    // 0ba3ab  lea eax, [ebp - 5]
    X86_AT(c, 0xba3abu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 0ba3ae  push eax
    X86_AT(c, 0xba3aeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ba3af  push ebx
    X86_AT(c, 0xba3afu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ba3b0  push edi
    X86_AT(c, 0xba3b0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ba3b1  call 0xba100
    X86_AT(c, 0xba3b1u);
    push32(c, 0xba3b6u); x86_call_known(c, 0xba100u, f_000ba100); X86_RET(c, 0xba3b6u);
    X86_TICK(c, 11);
    // 0ba3b6  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xba3b6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0ba3b9  add esp, 0xc
    X86_AT(c, 0xba3b9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ba3bc  cmp eax, 0xffffffff
    X86_AT(c, 0xba3bcu);
    (void)x86_sub(c, c.r[0], 0xFFFFFFFFu, 0, 4);
    // 0ba3bf  je 0xba33a
    X86_AT(c, 0xba3bfu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xba33au); goto L_ba33a; }
    X86_TICK(c, 3);
    // 0ba3c5  xchg esi, eax
    X86_AT(c, 0xba3c5u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_ba3c6:
    X86_TICK(c, 11);
    // 0ba3c6  push esi
    X86_AT(c, 0xba3c6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ba3c7  push edi
    X86_AT(c, 0xba3c7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ba3c8  call 0xb9f98
    X86_AT(c, 0xba3c8u);
    push32(c, 0xba3cdu); x86_call_known(c, 0xb9f98u, f_000b9f98); X86_RET(c, 0xba3cdu);
    X86_TICK(c, 2);
    // 0ba3cd  add esp, 8
    X86_AT(c, 0xba3cdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_ba3d0:
    X86_TICK(c, 9);
    // 0ba3d0  push 2
    X86_AT(c, 0xba3d0u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ba3d2  call 0xbebbc
    X86_AT(c, 0xba3d2u);
    push32(c, 0xba3d7u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xba3d7u);
    X86_TICK(c, 11);
    // 0ba3d7  push esi
    X86_AT(c, 0xba3d7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ba3d8  push edi
    X86_AT(c, 0xba3d8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ba3d9  call 0xb9f98
    X86_AT(c, 0xba3d9u);
    push32(c, 0xba3deu); x86_call_known(c, 0xb9f98u, f_000b9f98); X86_RET(c, 0xba3deu);
    X86_TICK(c, 16);
    // 0ba3de  lea eax, [esi*4]
    X86_AT(c, 0xba3deu);
    c.r[0] = (uint32_t)(c.r[6] * 4);
    // 0ba3e5  lea edx, [eax*8]
    X86_AT(c, 0xba3e5u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0ba3ec  lea edx, [eax + edx*4]
    X86_AT(c, 0xba3ecu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0ba3ef  mov eax, dword ptr [edi + 0x1c]
    X86_AT(c, 0xba3efu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)));
    // 0ba3f2  mov al, byte ptr [eax + edx*1 + 0x83]
    X86_AT(c, 0xba3f2u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x83u))));
    // 0ba3f9  add esp, 0xc
    X86_AT(c, 0xba3f9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_ba3fc:
    X86_TICK(c, 28);
    // 0ba3fc  pop edi
    X86_AT(c, 0xba3fcu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ba3fd  pop esi
    X86_AT(c, 0xba3fdu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ba3fe  pop ebx
    X86_AT(c, 0xba3feu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ba3ff  leave 
    X86_AT(c, 0xba3ffu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ba400  ret 
    X86_AT(c, 0xba400u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xba310u, "ran off the end of a function");
}
void f_000ba404(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0ba404  push ebp
    X86_AT(c, 0xba404u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ba405  mov ebp, esp
    X86_AT(c, 0xba405u);
    c.r[5] = c.r[4];
    // 0ba407  push dword ptr [ebp + 0x10]
    X86_AT(c, 0xba407u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 0ba40a  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xba40au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0ba40d  call 0xb8da0
    X86_AT(c, 0xba40du);
    push32(c, 0xba412u); x86_call_known(c, 0xb8da0u, f_000b8da0); X86_RET(c, 0xba412u);
    X86_TICK(c, 9);
    // 0ba412  push eax
    X86_AT(c, 0xba412u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ba413  call 0xb8e08
    X86_AT(c, 0xba413u);
    push32(c, 0xba418u); x86_call_known(c, 0xb8e08u, f_000b8e08); X86_RET(c, 0xba418u);
    X86_TICK(c, 14);
    // 0ba418  push eax
    X86_AT(c, 0xba418u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ba419  push dword ptr [ebp + 8]
    X86_AT(c, 0xba419u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0ba41c  call 0xbbba4
    X86_AT(c, 0xba41cu);
    push32(c, 0xba421u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xba421u);
    X86_TICK(c, 18);
    // 0ba421  add esp, 0x14
    X86_AT(c, 0xba421u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0ba424  leave 
    X86_AT(c, 0xba424u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ba425  ret 
    X86_AT(c, 0xba425u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xba404u, "ran off the end of a function");
}
void f_000ba428(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0ba428  push ebp
    X86_AT(c, 0xba428u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ba429  mov ebp, esp
    X86_AT(c, 0xba429u);
    c.r[5] = c.r[4];
    // 0ba42b  push edi
    X86_AT(c, 0xba42bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ba42c  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xba42cu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0ba42f  cmp dword ptr [0x460e4], 0
    X86_AT(c, 0xba42fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x460E4u))), 0x0u, 0, 4);
    // 0ba436  je 0xba43f
    X86_AT(c, 0xba436u);
    if (x86_cc(c, 4)) { goto L_ba43f; }
L_ba438:
    X86_TICK(c, 14);
    // 0ba438  inc edi
    X86_AT(c, 0xba438u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0ba439  cmp byte ptr [edi - 1], 0
    X86_AT(c, 0xba439u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 0ba43d  jne 0xba438
    X86_AT(c, 0xba43du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xba438u); goto L_ba438; }
L_ba43f:
    X86_TICK(c, 14);
    // 0ba43f  push edi
    X86_AT(c, 0xba43fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ba440  push dword ptr [ebp + 8]
    X86_AT(c, 0xba440u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0ba443  call 0xbbba4
    X86_AT(c, 0xba443u);
    push32(c, 0xba448u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xba448u);
    X86_TICK(c, 22);
    // 0ba448  add esp, 8
    X86_AT(c, 0xba448u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ba44b  pop edi
    X86_AT(c, 0xba44bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ba44c  leave 
    X86_AT(c, 0xba44cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ba44d  ret 
    X86_AT(c, 0xba44du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xba428u, "ran off the end of a function");
}
void f_000ba464(X86Cpu& c) {
    X86_TICK(c, 8);
    // 0ba464  push edi
    X86_AT(c, 0xba464u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ba465  mov dword ptr [0x46808], 1
    X86_AT(c, 0xba465u);
    wr32((c.sbase[3] + (uint32_t)(0x46808u)), 0x1u);
    // 0ba46f  mov byte ptr [0x46813], 0
    X86_AT(c, 0xba46fu);
    wr8((c.sbase[3] + (uint32_t)(0x46813u)), 0x0u);
    // 0ba476  mov edi, 1
    X86_AT(c, 0xba476u);
    c.r[7] = 0x1u;
L_ba47b:
    X86_TICK(c, 7);
    // 0ba47b  cmp edi, 0x10
    X86_AT(c, 0xba47bu);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0ba47e  jge 0xba4d2
    X86_AT(c, 0xba47eu);
    if (x86_cc(c, 13)) { goto L_ba4d2; }
    X86_TICK(c, 41);
    // 0ba480  mov dword ptr [0x4680c], edi
    X86_AT(c, 0xba480u);
    wr32((c.sbase[3] + (uint32_t)(0x4680Cu)), c.r[7]);
    // 0ba486  mov eax, 0x46200
    X86_AT(c, 0xba486u);
    c.r[0] = 0x46200u;
    // 0ba48b  lea edx, [edi*4]
    X86_AT(c, 0xba48bu);
    c.r[2] = (uint32_t)(c.r[7] * 4);
    // 0ba492  lea edx, [edx + edx*2]
    X86_AT(c, 0xba492u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0ba495  mov cl, byte ptr [eax + edx*1 + 0x648]
    X86_AT(c, 0xba495u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x648u))));
    // 0ba49c  mov byte ptr [0x46810], cl
    X86_AT(c, 0xba49cu);
    wr8((c.sbase[3] + (uint32_t)(0x46810u)), g8(c, 1));
    // 0ba4a2  mov cl, byte ptr [eax + edx*1 + 0x64c]
    X86_AT(c, 0xba4a2u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x64Cu))));
    // 0ba4a9  mov byte ptr [0x46811], cl
    X86_AT(c, 0xba4a9u);
    wr8((c.sbase[3] + (uint32_t)(0x46811u)), g8(c, 1));
    // 0ba4af  mov dl, byte ptr [eax + edx*1 + 0x650]
    X86_AT(c, 0xba4afu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x650u))));
    // 0ba4b6  mov byte ptr [0x46812], dl
    X86_AT(c, 0xba4b6u);
    wr8((c.sbase[3] + (uint32_t)(0x46812u)), g8(c, 2));
    // 0ba4bc  push 0x46808
    X86_AT(c, 0xba4bcu);
    { uint32_t v = 0x46808u; push32(c, v); }
    // 0ba4c1  push 1
    X86_AT(c, 0xba4c1u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ba4c3  add eax, 8
    X86_AT(c, 0xba4c3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ba4c6  push eax
    X86_AT(c, 0xba4c6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ba4c7  call 0x19c
    X86_AT(c, 0xba4c7u);
    push32(c, 0xba4ccu); x86_call_known(c, 0x19cu, f_0000019c); X86_RET(c, 0xba4ccu);
    X86_TICK(c, 11);
    // 0ba4cc  inc edi
    X86_AT(c, 0xba4ccu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0ba4cd  add esp, 0xc
    X86_AT(c, 0xba4cdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ba4d0  jmp 0xba47b
    X86_AT(c, 0xba4d0u);
    X86_POLL(c, 0xba47bu); goto L_ba47b;
L_ba4d2:
    X86_TICK(c, 14);
    // 0ba4d2  pop edi
    X86_AT(c, 0xba4d2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ba4d3  ret 
    X86_AT(c, 0xba4d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xba464u, "ran off the end of a function");
}
void f_000ba4d4(X86Cpu& c) {
    X86_TICK(c, 45);
    // 0ba4d4  push ebp
    X86_AT(c, 0xba4d4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ba4d5  mov ebp, esp
    X86_AT(c, 0xba4d5u);
    c.r[5] = c.r[4];
    // 0ba4d7  mov dword ptr [0x46808], 1
    X86_AT(c, 0xba4d7u);
    wr32((c.sbase[3] + (uint32_t)(0x46808u)), 0x1u);
    // 0ba4e1  mov byte ptr [0x46813], 0
    X86_AT(c, 0xba4e1u);
    wr8((c.sbase[3] + (uint32_t)(0x46813u)), 0x0u);
    // 0ba4e8  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xba4e8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ba4eb  mov dword ptr [0x4680c], eax
    X86_AT(c, 0xba4ebu);
    wr32((c.sbase[3] + (uint32_t)(0x4680Cu)), c.r[0]);
    // 0ba4f0  mov al, byte ptr [ebp + 0xc]
    X86_AT(c, 0xba4f0u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0ba4f3  mov byte ptr [0x46810], al
    X86_AT(c, 0xba4f3u);
    wr8((c.sbase[3] + (uint32_t)(0x46810u)), g8(c, 0));
    // 0ba4f8  mov al, byte ptr [ebp + 0x10]
    X86_AT(c, 0xba4f8u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 0ba4fb  mov byte ptr [0x46811], al
    X86_AT(c, 0xba4fbu);
    wr8((c.sbase[3] + (uint32_t)(0x46811u)), g8(c, 0));
    // 0ba500  mov al, byte ptr [ebp + 0x14]
    X86_AT(c, 0xba500u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0ba503  mov byte ptr [0x46812], al
    X86_AT(c, 0xba503u);
    wr8((c.sbase[3] + (uint32_t)(0x46812u)), g8(c, 0));
    // 0ba508  push 0x46808
    X86_AT(c, 0xba508u);
    { uint32_t v = 0x46808u; push32(c, v); }
    // 0ba50d  push 1
    X86_AT(c, 0xba50du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ba50f  push 0x46208
    X86_AT(c, 0xba50fu);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0ba514  call 0x19c
    X86_AT(c, 0xba514u);
    push32(c, 0xba519u); x86_call_known(c, 0x19cu, f_0000019c); X86_RET(c, 0xba519u);
    X86_TICK(c, 16);
    // 0ba519  leave 
    X86_AT(c, 0xba519u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ba51a  ret 
    X86_AT(c, 0xba51au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xba4d4u, "ran off the end of a function");
}
void f_000ba51c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0ba51c  push ebp
    X86_AT(c, 0xba51cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ba51d  mov ebp, esp
    X86_AT(c, 0xba51du);
    c.r[5] = c.r[4];
    // 0ba51f  movsx eax, word ptr [ebp + 8]
    X86_AT(c, 0xba51fu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ba523  push eax
    X86_AT(c, 0xba523u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ba524  push 0
    X86_AT(c, 0xba524u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ba526  push 0x46208
    X86_AT(c, 0xba526u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0ba52b  call 0x20e
    X86_AT(c, 0xba52bu);
    push32(c, 0xba530u); x86_call_known(c, 0x20eu, f_0000020e); X86_RET(c, 0xba530u);
    X86_TICK(c, 16);
    // 0ba530  leave 
    X86_AT(c, 0xba530u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ba531  ret 
    X86_AT(c, 0xba531u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xba51cu, "ran off the end of a function");
}
void f_000ba534(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0ba534  push ebp
    X86_AT(c, 0xba534u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ba535  mov ebp, esp
    X86_AT(c, 0xba535u);
    c.r[5] = c.r[4];
    // 0ba537  movsx eax, word ptr [ebp + 8]
    X86_AT(c, 0xba537u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ba53b  push eax
    X86_AT(c, 0xba53bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ba53c  push 1
    X86_AT(c, 0xba53cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ba53e  push 0x46208
    X86_AT(c, 0xba53eu);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0ba543  call 0x20e
    X86_AT(c, 0xba543u);
    push32(c, 0xba548u); x86_call_known(c, 0x20eu, f_0000020e); X86_RET(c, 0xba548u);
    X86_TICK(c, 16);
    // 0ba548  leave 
    X86_AT(c, 0xba548u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ba549  ret 
    X86_AT(c, 0xba549u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xba534u, "ran off the end of a function");
}
void f_000ba54c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0ba54c  push ebp
    X86_AT(c, 0xba54cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ba54d  mov ebp, esp
    X86_AT(c, 0xba54du);
    c.r[5] = c.r[4];
    // 0ba54f  movsx eax, word ptr [ebp + 8]
    X86_AT(c, 0xba54fu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ba553  push eax
    X86_AT(c, 0xba553u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ba554  push 2
    X86_AT(c, 0xba554u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ba556  push 0x46208
    X86_AT(c, 0xba556u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0ba55b  call 0x20e
    X86_AT(c, 0xba55bu);
    push32(c, 0xba560u); x86_call_known(c, 0x20eu, f_0000020e); X86_RET(c, 0xba560u);
    X86_TICK(c, 16);
    // 0ba560  leave 
    X86_AT(c, 0xba560u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ba561  ret 
    X86_AT(c, 0xba561u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xba54cu, "ran off the end of a function");
}
void f_000ba564(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0ba564  push ebp
    X86_AT(c, 0xba564u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ba565  mov ebp, esp
    X86_AT(c, 0xba565u);
    c.r[5] = c.r[4];
    // 0ba567  movsx eax, word ptr [ebp + 8]
    X86_AT(c, 0xba567u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ba56b  push eax
    X86_AT(c, 0xba56bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ba56c  push 3
    X86_AT(c, 0xba56cu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ba56e  push 0x46208
    X86_AT(c, 0xba56eu);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0ba573  call 0x20e
    X86_AT(c, 0xba573u);
    push32(c, 0xba578u); x86_call_known(c, 0x20eu, f_0000020e); X86_RET(c, 0xba578u);
    X86_TICK(c, 16);
    // 0ba578  leave 
    X86_AT(c, 0xba578u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ba579  ret 
    X86_AT(c, 0xba579u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xba564u, "ran off the end of a function");
}
void f_000ba57c(X86Cpu& c) {
    X86_TICK(c, 50);
    // 0ba57c  push ebp
    X86_AT(c, 0xba57cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ba57d  mov ebp, esp
    X86_AT(c, 0xba57du);
    c.r[5] = c.r[4];
    // 0ba57f  push edi
    X86_AT(c, 0xba57fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ba580  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xba580u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ba583  sar eax, 3
    X86_AT(c, 0xba583u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 0ba586  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xba586u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0ba589  sar edx, 3
    X86_AT(c, 0xba589u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0ba58c  shl edx, 5
    X86_AT(c, 0xba58cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ba58f  add edx, eax
    X86_AT(c, 0xba58fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0ba591  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xba591u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0ba594  sar edi, 3
    X86_AT(c, 0xba594u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 0ba597  shl edi, 0xa
    X86_AT(c, 0xba597u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[7] = r; }
    // 0ba59a  add edi, edx
    X86_AT(c, 0xba59au);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[2], 0, 4); }
    // 0ba59c  push edi
    X86_AT(c, 0xba59cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ba59d  push 0
    X86_AT(c, 0xba59du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ba59f  push 0x46208
    X86_AT(c, 0xba59fu);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0ba5a4  call 0x20e
    X86_AT(c, 0xba5a4u);
    push32(c, 0xba5a9u); x86_call_known(c, 0x20eu, f_0000020e); X86_RET(c, 0xba5a9u);
    X86_TICK(c, 22);
    // 0ba5a9  add esp, 0xc
    X86_AT(c, 0xba5a9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ba5ac  pop edi
    X86_AT(c, 0xba5acu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ba5ad  leave 
    X86_AT(c, 0xba5adu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ba5ae  ret 
    X86_AT(c, 0xba5aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xba57cu, "ran off the end of a function");
}
void f_000ba5b0(X86Cpu& c) {
    X86_TICK(c, 50);
    // 0ba5b0  push ebp
    X86_AT(c, 0xba5b0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ba5b1  mov ebp, esp
    X86_AT(c, 0xba5b1u);
    c.r[5] = c.r[4];
    // 0ba5b3  push edi
    X86_AT(c, 0xba5b3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ba5b4  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xba5b4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ba5b7  sar eax, 3
    X86_AT(c, 0xba5b7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 0ba5ba  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xba5bau);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0ba5bd  sar edx, 3
    X86_AT(c, 0xba5bdu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0ba5c0  shl edx, 5
    X86_AT(c, 0xba5c0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ba5c3  add edx, eax
    X86_AT(c, 0xba5c3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0ba5c5  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xba5c5u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0ba5c8  sar edi, 3
    X86_AT(c, 0xba5c8u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 0ba5cb  shl edi, 0xa
    X86_AT(c, 0xba5cbu);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[7] = r; }
    // 0ba5ce  add edi, edx
    X86_AT(c, 0xba5ceu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[2], 0, 4); }
    // 0ba5d0  push edi
    X86_AT(c, 0xba5d0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ba5d1  push 1
    X86_AT(c, 0xba5d1u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ba5d3  push 0x46208
    X86_AT(c, 0xba5d3u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0ba5d8  call 0x20e
    X86_AT(c, 0xba5d8u);
    push32(c, 0xba5ddu); x86_call_known(c, 0x20eu, f_0000020e); X86_RET(c, 0xba5ddu);
    X86_TICK(c, 22);
    // 0ba5dd  add esp, 0xc
    X86_AT(c, 0xba5ddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ba5e0  pop edi
    X86_AT(c, 0xba5e0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ba5e1  leave 
    X86_AT(c, 0xba5e1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ba5e2  ret 
    X86_AT(c, 0xba5e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xba5b0u, "ran off the end of a function");
}
void f_000ba5e4(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0ba5e4  push ebp
    X86_AT(c, 0xba5e4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ba5e5  mov ebp, esp
    X86_AT(c, 0xba5e5u);
    c.r[5] = c.r[4];
    // 0ba5e7  push dword ptr [ebp + 8]
    X86_AT(c, 0xba5e7u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0ba5ea  push 0x46208
    X86_AT(c, 0xba5eau);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0ba5ef  call 0x4b1
    X86_AT(c, 0xba5efu);
    push32(c, 0xba5f4u); x86_call_known(c, 0x4b1u, f_000004b1); X86_RET(c, 0xba5f4u);
    X86_TICK(c, 16);
    // 0ba5f4  leave 
    X86_AT(c, 0xba5f4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ba5f5  ret 
    X86_AT(c, 0xba5f5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xba5e4u, "ran off the end of a function");
}
void f_000ba610(X86Cpu& c) {
    X86_TICK(c, 50);
    // 0ba610  push ebp
    X86_AT(c, 0xba610u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ba611  mov ebp, esp
    X86_AT(c, 0xba611u);
    c.r[5] = c.r[4];
    // 0ba613  push edi
    X86_AT(c, 0xba613u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ba614  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xba614u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ba617  sar eax, 3
    X86_AT(c, 0xba617u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 0ba61a  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xba61au);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0ba61d  sar edx, 3
    X86_AT(c, 0xba61du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0ba620  shl edx, 5
    X86_AT(c, 0xba620u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ba623  add edx, eax
    X86_AT(c, 0xba623u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0ba625  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xba625u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0ba628  sar edi, 3
    X86_AT(c, 0xba628u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 0ba62b  shl edi, 0xa
    X86_AT(c, 0xba62bu);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[7] = r; }
    // 0ba62e  add edi, edx
    X86_AT(c, 0xba62eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[2], 0, 4); }
    // 0ba630  push edi
    X86_AT(c, 0xba630u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ba631  push 2
    X86_AT(c, 0xba631u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ba633  push 0x46208
    X86_AT(c, 0xba633u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0ba638  call 0x20e
    X86_AT(c, 0xba638u);
    push32(c, 0xba63du); x86_call_known(c, 0x20eu, f_0000020e); X86_RET(c, 0xba63du);
    X86_TICK(c, 22);
    // 0ba63d  add esp, 0xc
    X86_AT(c, 0xba63du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ba640  pop edi
    X86_AT(c, 0xba640u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ba641  leave 
    X86_AT(c, 0xba641u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ba642  ret 
    X86_AT(c, 0xba642u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xba610u, "ran off the end of a function");
}
void f_000ba644(X86Cpu& c) {
    X86_TICK(c, 50);
    // 0ba644  push ebp
    X86_AT(c, 0xba644u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ba645  mov ebp, esp
    X86_AT(c, 0xba645u);
    c.r[5] = c.r[4];
    // 0ba647  push edi
    X86_AT(c, 0xba647u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ba648  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xba648u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ba64b  sar eax, 3
    X86_AT(c, 0xba64bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 0ba64e  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xba64eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0ba651  sar edx, 3
    X86_AT(c, 0xba651u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0ba654  shl edx, 5
    X86_AT(c, 0xba654u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ba657  add edx, eax
    X86_AT(c, 0xba657u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0ba659  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xba659u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0ba65c  sar edi, 3
    X86_AT(c, 0xba65cu);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 0ba65f  shl edi, 0xa
    X86_AT(c, 0xba65fu);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[7] = r; }
    // 0ba662  add edi, edx
    X86_AT(c, 0xba662u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[2], 0, 4); }
    // 0ba664  push edi
    X86_AT(c, 0xba664u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ba665  push 3
    X86_AT(c, 0xba665u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ba667  push 0x46208
    X86_AT(c, 0xba667u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0ba66c  call 0x20e
    X86_AT(c, 0xba66cu);
    push32(c, 0xba671u); x86_call_known(c, 0x20eu, f_0000020e); X86_RET(c, 0xba671u);
    X86_TICK(c, 22);
    // 0ba671  add esp, 0xc
    X86_AT(c, 0xba671u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ba674  pop edi
    X86_AT(c, 0xba674u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ba675  leave 
    X86_AT(c, 0xba675u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ba676  ret 
    X86_AT(c, 0xba676u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xba644u, "ran off the end of a function");
}
void f_000ba68c(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0ba68c  push ebp
    X86_AT(c, 0xba68cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ba68d  mov ebp, esp
    X86_AT(c, 0xba68du);
    c.r[5] = c.r[4];
    // 0ba68f  push dword ptr [ebp + 8]
    X86_AT(c, 0xba68fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0ba692  push 0x46208
    X86_AT(c, 0xba692u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0ba697  call 0x27d
    X86_AT(c, 0xba697u);
    push32(c, 0xba69cu); x86_call_known(c, 0x27du, f_0000027d); X86_RET(c, 0xba69cu);
    X86_TICK(c, 16);
    // 0ba69c  leave 
    X86_AT(c, 0xba69cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ba69d  ret 
    X86_AT(c, 0xba69du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xba68cu, "ran off the end of a function");
}
void f_000ba6a0(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0ba6a0  push ebp
    X86_AT(c, 0xba6a0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ba6a1  mov ebp, esp
    X86_AT(c, 0xba6a1u);
    c.r[5] = c.r[4];
    // 0ba6a3  push dword ptr [ebp + 8]
    X86_AT(c, 0xba6a3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0ba6a6  push 0x46208
    X86_AT(c, 0xba6a6u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0ba6ab  call 0x1c4
    X86_AT(c, 0xba6abu);
    push32(c, 0xba6b0u); x86_call_known(c, 0x1c4u, f_000001c4); X86_RET(c, 0xba6b0u);
    X86_TICK(c, 16);
    // 0ba6b0  leave 
    X86_AT(c, 0xba6b0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ba6b1  ret 
    X86_AT(c, 0xba6b1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xba6a0u, "ran off the end of a function");
}
void f_000ba6b4(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0ba6b4  push ebp
    X86_AT(c, 0xba6b4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ba6b5  mov ebp, esp
    X86_AT(c, 0xba6b5u);
    c.r[5] = c.r[4];
    // 0ba6b7  push edi
    X86_AT(c, 0xba6b7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ba6b8  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xba6b8u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ba6bb  inc edi
    X86_AT(c, 0xba6bbu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0ba6bc  cmp edi, 4
    X86_AT(c, 0xba6bcu);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0ba6bf  jne 0xba6c3
    X86_AT(c, 0xba6bfu);
    if (x86_cc(c, 5)) { goto L_ba6c3; }
    X86_TICK(c, 2);
    // 0ba6c1  sub edi, edi
    X86_AT(c, 0xba6c1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_ba6c3:
    X86_TICK(c, 13);
    // 0ba6c3  push edi
    X86_AT(c, 0xba6c3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ba6c4  push 0
    X86_AT(c, 0xba6c4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ba6c6  push 0x46208
    X86_AT(c, 0xba6c6u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0ba6cb  call 0x1e6
    X86_AT(c, 0xba6cbu);
    push32(c, 0xba6d0u); x86_call_known(c, 0x1e6u, f_000001e6); X86_RET(c, 0xba6d0u);
    X86_TICK(c, 22);
    // 0ba6d0  add esp, 0xc
    X86_AT(c, 0xba6d0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ba6d3  pop edi
    X86_AT(c, 0xba6d3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ba6d4  leave 
    X86_AT(c, 0xba6d4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ba6d5  ret 
    X86_AT(c, 0xba6d5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xba6b4u, "ran off the end of a function");
}
void f_000ba810(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0ba810  push ebp
    X86_AT(c, 0xba810u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ba811  mov ebp, esp
    X86_AT(c, 0xba811u);
    c.r[5] = c.r[4];
    // 0ba813  push edi
    X86_AT(c, 0xba813u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ba814  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xba814u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ba817  and edi, edi
    X86_AT(c, 0xba817u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0ba819  jne 0xba82e
    X86_AT(c, 0xba819u);
    if (x86_cc(c, 5)) { goto L_ba82e; }
    X86_TICK(c, 15);
    // 0ba81b  push 0
    X86_AT(c, 0xba81bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ba81d  push 0
    X86_AT(c, 0xba81du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ba81f  push 1
    X86_AT(c, 0xba81fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ba821  push 0x46208
    X86_AT(c, 0xba821u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0ba826  call 0x14a
    X86_AT(c, 0xba826u);
    push32(c, 0xba82bu); x86_call_known(c, 0x14au, f_0000014a); X86_RET(c, 0xba82bu);
    X86_TICK(c, 2);
    // 0ba82b  add esp, 0x10
    X86_AT(c, 0xba82bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_ba82e:
    X86_TICK(c, 7);
    // 0ba82e  cmp edi, 1
    X86_AT(c, 0xba82eu);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0ba831  jne 0xba846
    X86_AT(c, 0xba831u);
    if (x86_cc(c, 5)) { goto L_ba846; }
    X86_TICK(c, 15);
    // 0ba833  push 0x31
    X86_AT(c, 0xba833u);
    { uint32_t v = 0x31u; push32(c, v); }
    // 0ba835  push 0x36
    X86_AT(c, 0xba835u);
    { uint32_t v = 0x36u; push32(c, v); }
    // 0ba837  push 1
    X86_AT(c, 0xba837u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ba839  push 0x46208
    X86_AT(c, 0xba839u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0ba83e  call 0x14a
    X86_AT(c, 0xba83eu);
    push32(c, 0xba843u); x86_call_known(c, 0x14au, f_0000014a); X86_RET(c, 0xba843u);
    X86_TICK(c, 2);
    // 0ba843  add esp, 0x10
    X86_AT(c, 0xba843u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_ba846:
    X86_TICK(c, 20);
    // 0ba846  pop edi
    X86_AT(c, 0xba846u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ba847  leave 
    X86_AT(c, 0xba847u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ba848  ret 
    X86_AT(c, 0xba848u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xba810u, "ran off the end of a function");
}
void f_000ba868(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0ba868  push ebp
    X86_AT(c, 0xba868u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ba869  mov ebp, esp
    X86_AT(c, 0xba869u);
    c.r[5] = c.r[4];
    // 0ba86b  push edi
    X86_AT(c, 0xba86bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ba86c  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xba86cu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ba86f  and edi, edi
    X86_AT(c, 0xba86fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0ba871  jne 0xba87e
    X86_AT(c, 0xba871u);
    if (x86_cc(c, 5)) { goto L_ba87e; }
    X86_TICK(c, 9);
    // 0ba873  mov word ptr [0x46908], 3
    X86_AT(c, 0xba873u);
    wr16((c.sbase[3] + (uint32_t)(0x46908u)), 0x3u);
    // 0ba87c  jmp 0xba890
    X86_AT(c, 0xba87cu);
    goto L_ba890;
L_ba87e:
    X86_TICK(c, 7);
    // 0ba87e  cmp edi, 1
    X86_AT(c, 0xba87eu);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0ba881  jne 0xba95f
    X86_AT(c, 0xba881u);
    if (x86_cc(c, 5)) { goto L_ba95f; }
    X86_TICK(c, 2);
    // 0ba887  mov word ptr [0x4690a], 3
    X86_AT(c, 0xba887u);
    wr16((c.sbase[3] + (uint32_t)(0x4690Au)), 0x3u);
L_ba890:
    X86_TICK(c, 13);
    // 0ba890  push 1
    X86_AT(c, 0xba890u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ba892  push edi
    X86_AT(c, 0xba892u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ba893  push 0x46208
    X86_AT(c, 0xba893u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0ba898  call 0xea
    X86_AT(c, 0xba898u);
    push32(c, 0xba89du); x86_call_known(c, 0xeau, f_000000ea); X86_RET(c, 0xba89du);
    X86_TICK(c, 13);
    // 0ba89d  push 3
    X86_AT(c, 0xba89du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ba89f  push edi
    X86_AT(c, 0xba89fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ba8a0  push 0x46208
    X86_AT(c, 0xba8a0u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0ba8a5  call 0xea
    X86_AT(c, 0xba8a5u);
    push32(c, 0xba8aau); x86_call_known(c, 0xeau, f_000000ea); X86_RET(c, 0xba8aau);
    X86_TICK(c, 9);
    // 0ba8aa  push edi
    X86_AT(c, 0xba8aau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ba8ab  call 0xba6a0
    X86_AT(c, 0xba8abu);
    push32(c, 0xba8b0u); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xba8b0u);
    X86_TICK(c, 19);
    // 0ba8b0  mov word ptr [0x46808], 0
    X86_AT(c, 0xba8b0u);
    wr16((c.sbase[3] + (uint32_t)(0x46808u)), 0x0u);
    // 0ba8b9  mov word ptr [0x4680a], 0
    X86_AT(c, 0xba8b9u);
    wr16((c.sbase[3] + (uint32_t)(0x4680Au)), 0x0u);
    // 0ba8c2  mov word ptr [0x4680c], 0x2ff
    X86_AT(c, 0xba8c2u);
    wr16((c.sbase[3] + (uint32_t)(0x4680Cu)), 0x2FFu);
    // 0ba8cb  mov word ptr [0x4680e], 0x1df
    X86_AT(c, 0xba8cbu);
    wr16((c.sbase[3] + (uint32_t)(0x4680Eu)), 0x1DFu);
    // 0ba8d4  push 0x46808
    X86_AT(c, 0xba8d4u);
    { uint32_t v = 0x46808u; push32(c, v); }
    // 0ba8d9  push 0x46208
    X86_AT(c, 0xba8d9u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0ba8de  call 0x178
    X86_AT(c, 0xba8deu);
    push32(c, 0xba8e3u); x86_call_known(c, 0x178u, f_00000178); X86_RET(c, 0xba8e3u);
    X86_TICK(c, 7);
    // 0ba8e3  call 0xba464
    X86_AT(c, 0xba8e3u);
    push32(c, 0xba8e8u); x86_call_known(c, 0xba464u, f_000ba464); X86_RET(c, 0xba8e8u);
    X86_TICK(c, 9);
    // 0ba8e8  push 0xf
    X86_AT(c, 0xba8e8u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ba8ea  call 0xba51c
    X86_AT(c, 0xba8eau);
    push32(c, 0xba8efu); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xba8efu);
    X86_TICK(c, 9);
    // 0ba8ef  push 0
    X86_AT(c, 0xba8efu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ba8f1  call 0xba534
    X86_AT(c, 0xba8f1u);
    push32(c, 0xba8f6u); x86_call_known(c, 0xba534u, f_000ba534); X86_RET(c, 0xba8f6u);
    X86_TICK(c, 9);
    // 0ba8f6  push 0xd
    X86_AT(c, 0xba8f6u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0ba8f8  call 0xba54c
    X86_AT(c, 0xba8f8u);
    push32(c, 0xba8fdu); x86_call_known(c, 0xba54cu, f_000ba54c); X86_RET(c, 0xba8fdu);
    X86_TICK(c, 9);
    // 0ba8fd  push 0
    X86_AT(c, 0xba8fdu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ba8ff  call 0xba564
    X86_AT(c, 0xba8ffu);
    push32(c, 0xba904u); x86_call_known(c, 0xba564u, f_000ba564); X86_RET(c, 0xba904u);
    X86_TICK(c, 15);
    // 0ba904  movsx eax, word ptr [0x46204]
    X86_AT(c, 0xba904u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x46204u)));
    // 0ba90b  push eax
    X86_AT(c, 0xba90bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ba90c  call 0xba68c
    X86_AT(c, 0xba90cu);
    push32(c, 0xba911u); x86_call_known(c, 0xba68cu, f_000ba68c); X86_RET(c, 0xba911u);
    X86_TICK(c, 17);
    // 0ba911  movsx eax, word ptr [0x4690c]
    X86_AT(c, 0xba911u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x4690Cu)));
    // 0ba918  push eax
    X86_AT(c, 0xba918u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ba919  push 0x46208
    X86_AT(c, 0xba919u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0ba91e  call 0x2c5
    X86_AT(c, 0xba91eu);
    push32(c, 0xba923u); x86_call_known(c, 0x2c5u, f_000002c5); X86_RET(c, 0xba923u);
    X86_TICK(c, 17);
    // 0ba923  add esp, 0x40
    X86_AT(c, 0xba923u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ba926  push 0
    X86_AT(c, 0xba926u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ba928  push 0
    X86_AT(c, 0xba928u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ba92a  push 0
    X86_AT(c, 0xba92au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ba92c  push 0x46208
    X86_AT(c, 0xba92cu);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0ba931  call 0x14a
    X86_AT(c, 0xba931u);
    push32(c, 0xba936u); x86_call_known(c, 0x14au, f_0000014a); X86_RET(c, 0xba936u);
    X86_TICK(c, 15);
    // 0ba936  push 1
    X86_AT(c, 0xba936u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ba938  push 1
    X86_AT(c, 0xba938u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ba93a  push 2
    X86_AT(c, 0xba93au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ba93c  push 0x46208
    X86_AT(c, 0xba93cu);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0ba941  call 0x14a
    X86_AT(c, 0xba941u);
    push32(c, 0xba946u); x86_call_known(c, 0x14au, f_0000014a); X86_RET(c, 0xba946u);
    X86_TICK(c, 15);
    // 0ba946  push 0x1e0
    X86_AT(c, 0xba946u);
    { uint32_t v = 0x1E0u; push32(c, v); }
    // 0ba94b  push 0x280
    X86_AT(c, 0xba94bu);
    { uint32_t v = 0x280u; push32(c, v); }
    // 0ba950  push 3
    X86_AT(c, 0xba950u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ba952  push 0x46208
    X86_AT(c, 0xba952u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0ba957  call 0x14a
    X86_AT(c, 0xba957u);
    push32(c, 0xba95cu); x86_call_known(c, 0x14au, f_0000014a); X86_RET(c, 0xba95cu);
    X86_TICK(c, 2);
    // 0ba95c  add esp, 0x30
    X86_AT(c, 0xba95cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
L_ba95f:
    X86_TICK(c, 20);
    // 0ba95f  pop edi
    X86_AT(c, 0xba95fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ba960  leave 
    X86_AT(c, 0xba960u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ba961  ret 
    X86_AT(c, 0xba961u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xba868u, "ran off the end of a function");
}
void f_000ba964(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0ba964  push 0x600
    X86_AT(c, 0xba964u);
    { uint32_t v = 0x600u; push32(c, v); }
    // 0ba969  push 0x46208
    X86_AT(c, 0xba969u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0ba96e  call 0xc8
    X86_AT(c, 0xba96eu);
    push32(c, 0xba973u); x86_call_known(c, 0xc8u, f_000000c8); X86_RET(c, 0xba973u);
    X86_TICK(c, 9);
    // 0ba973  add esp, 8
    X86_AT(c, 0xba973u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ba976  and eax, eax
    X86_AT(c, 0xba976u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ba978  je 0xba984
    X86_AT(c, 0xba978u);
    if (x86_cc(c, 4)) { goto L_ba984; }
    X86_TICK(c, 9);
    // 0ba97a  mov eax, 0xffffffff
    X86_AT(c, 0xba97au);
    c.r[0] = 0xFFFFFFFFu;
    // 0ba97f  jmp 0xbaa3e
    X86_AT(c, 0xba97fu);
    goto L_baa3e;
L_ba984:
    X86_TICK(c, 17);
    // 0ba984  mov word ptr [0x46908], 3
    X86_AT(c, 0xba984u);
    wr16((c.sbase[3] + (uint32_t)(0x46908u)), 0x3u);
    // 0ba98d  mov eax, 3
    X86_AT(c, 0xba98du);
    c.r[0] = 0x3u;
    // 0ba992  push eax
    X86_AT(c, 0xba992u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ba993  push 0
    X86_AT(c, 0xba993u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ba995  push 0x46208
    X86_AT(c, 0xba995u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0ba99a  call 0xea
    X86_AT(c, 0xba99au);
    push32(c, 0xba99fu); x86_call_known(c, 0xeau, f_000000ea); X86_RET(c, 0xba99fu);
    X86_TICK(c, 19);
    // 0ba99f  mov ax, 3
    X86_AT(c, 0xba99fu);
    s16(c, 0, 0x3u);
    // 0ba9a3  mov word ptr [0x4690a], ax
    X86_AT(c, 0xba9a3u);
    wr16((c.sbase[3] + (uint32_t)(0x4690Au)), (c.r[0] & 0xFFFFu));
    // 0ba9a9  mov eax, 3
    X86_AT(c, 0xba9a9u);
    c.r[0] = 0x3u;
    // 0ba9ae  push eax
    X86_AT(c, 0xba9aeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ba9af  push 1
    X86_AT(c, 0xba9afu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ba9b1  push 0x46208
    X86_AT(c, 0xba9b1u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0ba9b6  call 0xea
    X86_AT(c, 0xba9b6u);
    push32(c, 0xba9bbu); x86_call_known(c, 0xeau, f_000000ea); X86_RET(c, 0xba9bbu);
    X86_TICK(c, 15);
    // 0ba9bb  mov ax, 9
    X86_AT(c, 0xba9bbu);
    s16(c, 0, 0x9u);
    // 0ba9bf  mov word ptr [0x46204], ax
    X86_AT(c, 0xba9bfu);
    wr16((c.sbase[3] + (uint32_t)(0x46204u)), (c.r[0] & 0xFFFFu));
    // 0ba9c5  mov eax, 9
    X86_AT(c, 0xba9c5u);
    c.r[0] = 0x9u;
    // 0ba9ca  push eax
    X86_AT(c, 0xba9cau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ba9cb  call 0xba68c
    X86_AT(c, 0xba9cbu);
    push32(c, 0xba9d0u); x86_call_known(c, 0xba68cu, f_000ba68c); X86_RET(c, 0xba9d0u);
    X86_TICK(c, 17);
    // 0ba9d0  mov ax, 0x22
    X86_AT(c, 0xba9d0u);
    s16(c, 0, 0x22u);
    // 0ba9d4  mov word ptr [0x4690c], ax
    X86_AT(c, 0xba9d4u);
    wr16((c.sbase[3] + (uint32_t)(0x4690Cu)), (c.r[0] & 0xFFFFu));
    // 0ba9da  mov eax, 0x22
    X86_AT(c, 0xba9dau);
    c.r[0] = 0x22u;
    // 0ba9df  push eax
    X86_AT(c, 0xba9dfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ba9e0  push 0x46208
    X86_AT(c, 0xba9e0u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0ba9e5  call 0x2c5
    X86_AT(c, 0xba9e5u);
    push32(c, 0xba9eau); x86_call_known(c, 0x2c5u, f_000002c5); X86_RET(c, 0xba9eau);
    X86_TICK(c, 9);
    // 0ba9ea  push 0
    X86_AT(c, 0xba9eau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ba9ec  call 0xba6a0
    X86_AT(c, 0xba9ecu);
    push32(c, 0xba9f1u); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xba9f1u);
    X86_TICK(c, 9);
    // 0ba9f1  push 0
    X86_AT(c, 0xba9f1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ba9f3  call 0xba6b4
    X86_AT(c, 0xba9f3u);
    push32(c, 0xba9f8u); x86_call_known(c, 0xba6b4u, f_000ba6b4); X86_RET(c, 0xba9f8u);
    X86_TICK(c, 7);
    // 0ba9f8  call 0xba464
    X86_AT(c, 0xba9f8u);
    push32(c, 0xba9fdu); x86_call_known(c, 0xba464u, f_000ba464); X86_RET(c, 0xba9fdu);
    X86_TICK(c, 9);
    // 0ba9fd  push 0xf
    X86_AT(c, 0xba9fdu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ba9ff  call 0xba51c
    X86_AT(c, 0xba9ffu);
    push32(c, 0xbaa04u); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xbaa04u);
    X86_TICK(c, 9);
    // 0baa04  push 0
    X86_AT(c, 0xbaa04u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0baa06  call 0xba534
    X86_AT(c, 0xbaa06u);
    push32(c, 0xbaa0bu); x86_call_known(c, 0xba534u, f_000ba534); X86_RET(c, 0xbaa0bu);
    X86_TICK(c, 9);
    // 0baa0b  push 0xd
    X86_AT(c, 0xbaa0bu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0baa0d  call 0xba54c
    X86_AT(c, 0xbaa0du);
    push32(c, 0xbaa12u); x86_call_known(c, 0xba54cu, f_000ba54c); X86_RET(c, 0xbaa12u);
    X86_TICK(c, 11);
    // 0baa12  push 0
    X86_AT(c, 0xbaa12u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0baa14  push 0x46208
    X86_AT(c, 0xbaa14u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0baa19  call 0x41c
    X86_AT(c, 0xbaa19u);
    push32(c, 0xbaa1eu); x86_call_known(c, 0x41cu, f_0000041c); X86_RET(c, 0xbaa1eu);
    X86_TICK(c, 13);
    // 0baa1e  add esp, 0x40
    X86_AT(c, 0xbaa1eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0baa21  push 0
    X86_AT(c, 0xbaa21u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0baa23  push 0x46208
    X86_AT(c, 0xbaa23u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0baa28  call 0x43e
    X86_AT(c, 0xbaa28u);
    push32(c, 0xbaa2du); x86_call_known(c, 0x43eu, f_0000043e); X86_RET(c, 0xbaa2du);
    X86_TICK(c, 11);
    // 0baa2d  push 0
    X86_AT(c, 0xbaa2du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0baa2f  push 0x46208
    X86_AT(c, 0xbaa2fu);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0baa34  call 0x460
    X86_AT(c, 0xbaa34u);
    push32(c, 0xbaa39u); x86_call_known(c, 0x460u, f_00000460); X86_RET(c, 0xbaa39u);
    X86_TICK(c, 4);
    // 0baa39  sub eax, eax
    X86_AT(c, 0xbaa39u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0baa3b  add esp, 0x10
    X86_AT(c, 0xbaa3bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_baa3e:
    X86_TICK(c, 10);
    // 0baa3e  ret 
    X86_AT(c, 0xbaa3eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xba964u, "ran off the end of a function");
}
void f_000baa40(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0baa40  push ebp
    X86_AT(c, 0xbaa40u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0baa41  mov ebp, esp
    X86_AT(c, 0xbaa41u);
    c.r[5] = c.r[4];
    // 0baa43  movsx eax, word ptr [ebp + 8]
    X86_AT(c, 0xbaa43u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0baa47  push eax
    X86_AT(c, 0xbaa47u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0baa48  push 1
    X86_AT(c, 0xbaa48u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0baa4a  push 0x46208
    X86_AT(c, 0xbaa4au);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0baa4f  call 0x20e
    X86_AT(c, 0xbaa4fu);
    push32(c, 0xbaa54u); x86_call_known(c, 0x20eu, f_0000020e); X86_RET(c, 0xbaa54u);
    X86_TICK(c, 9);
    // 0baa54  push 0x46208
    X86_AT(c, 0xbaa54u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0baa59  call 0x518
    X86_AT(c, 0xbaa59u);
    push32(c, 0xbaa5eu); x86_call_known(c, 0x518u, f_00000518); X86_RET(c, 0xbaa5eu);
    X86_TICK(c, 16);
    // 0baa5e  leave 
    X86_AT(c, 0xbaa5eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0baa5f  ret 
    X86_AT(c, 0xbaa5fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbaa40u, "ran off the end of a function");
}
void f_000baa94(X86Cpu& c) {
    X86_TICK(c, 41);
    // 0baa94  push ebp
    X86_AT(c, 0xbaa94u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0baa95  mov ebp, esp
    X86_AT(c, 0xbaa95u);
    c.r[5] = c.r[4];
    // 0baa97  mov word ptr [0x46808], 2
    X86_AT(c, 0xbaa97u);
    wr16((c.sbase[3] + (uint32_t)(0x46808u)), 0x2u);
    // 0baaa0  mov ax, word ptr [ebp + 8]
    X86_AT(c, 0xbaaa0u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0baaa4  mov word ptr [0x4680a], ax
    X86_AT(c, 0xbaaa4u);
    wr16((c.sbase[3] + (uint32_t)(0x4680Au)), (c.r[0] & 0xFFFFu));
    // 0baaaa  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0xbaaaau);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0baaae  mov word ptr [0x4680c], ax
    X86_AT(c, 0xbaaaeu);
    wr16((c.sbase[3] + (uint32_t)(0x4680Cu)), (c.r[0] & 0xFFFFu));
    // 0baab4  mov ax, word ptr [ebp + 0x10]
    X86_AT(c, 0xbaab4u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 0baab8  mov word ptr [0x4680e], ax
    X86_AT(c, 0xbaab8u);
    wr16((c.sbase[3] + (uint32_t)(0x4680Eu)), (c.r[0] & 0xFFFFu));
    // 0baabe  mov ax, word ptr [ebp + 0x14]
    X86_AT(c, 0xbaabeu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0baac2  mov word ptr [0x46810], ax
    X86_AT(c, 0xbaac2u);
    wr16((c.sbase[3] + (uint32_t)(0x46810u)), (c.r[0] & 0xFFFFu));
    // 0baac8  push 0x46808
    X86_AT(c, 0xbaac8u);
    { uint32_t v = 0x46808u; push32(c, v); }
    // 0baacd  push 0x46208
    X86_AT(c, 0xbaacdu);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0baad2  call 0x809
    X86_AT(c, 0xbaad2u);
    push32(c, 0xbaad7u); x86_call_known(c, 0x809u, f_00000809); X86_RET(c, 0xbaad7u);
    X86_TICK(c, 16);
    // 0baad7  leave 
    X86_AT(c, 0xbaad7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0baad8  ret 
    X86_AT(c, 0xbaad8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbaa94u, "ran off the end of a function");
}
void f_000bab4c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0bab4c  push ebp
    X86_AT(c, 0xbab4cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bab4d  mov ebp, esp
    X86_AT(c, 0xbab4du);
    c.r[5] = c.r[4];
    // 0bab4f  movsx eax, word ptr [0x4690c]
    X86_AT(c, 0xbab4fu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x4690Cu)));
    // 0bab56  and eax, 0xff0f
    X86_AT(c, 0xbab56u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFF0Fu, 4); }
    // 0bab5b  push eax
    X86_AT(c, 0xbab5bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bab5c  push 0x46208
    X86_AT(c, 0xbab5cu);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0bab61  call 0x2c5
    X86_AT(c, 0xbab61u);
    push32(c, 0xbab66u); x86_call_known(c, 0x2c5u, f_000002c5); X86_RET(c, 0xbab66u);
    X86_TICK(c, 35);
    // 0bab66  mov ax, word ptr [ebp + 8]
    X86_AT(c, 0xbab66u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0bab6a  mov word ptr [0x46808], ax
    X86_AT(c, 0xbab6au);
    wr16((c.sbase[3] + (uint32_t)(0x46808u)), (c.r[0] & 0xFFFFu));
    // 0bab70  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0xbab70u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0bab74  mov word ptr [0x4680a], ax
    X86_AT(c, 0xbab74u);
    wr16((c.sbase[3] + (uint32_t)(0x4680Au)), (c.r[0] & 0xFFFFu));
    // 0bab7a  mov ax, word ptr [ebp + 0x10]
    X86_AT(c, 0xbab7au);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 0bab7e  mov word ptr [0x4680c], ax
    X86_AT(c, 0xbab7eu);
    wr16((c.sbase[3] + (uint32_t)(0x4680Cu)), (c.r[0] & 0xFFFFu));
    // 0bab84  mov ax, word ptr [ebp + 0x14]
    X86_AT(c, 0xbab84u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0bab88  mov word ptr [0x4680e], ax
    X86_AT(c, 0xbab88u);
    wr16((c.sbase[3] + (uint32_t)(0x4680Eu)), (c.r[0] & 0xFFFFu));
    // 0bab8e  push 0x46808
    X86_AT(c, 0xbab8eu);
    { uint32_t v = 0x46808u; push32(c, v); }
    // 0bab93  push 0x46208
    X86_AT(c, 0xbab93u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0bab98  call 0x8bd
    X86_AT(c, 0xbab98u);
    push32(c, 0xbab9du); x86_call_known(c, 0x8bdu, f_000008bd); X86_RET(c, 0xbab9du);
    X86_TICK(c, 17);
    // 0bab9d  movsx eax, word ptr [0x4690c]
    X86_AT(c, 0xbab9du);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x4690Cu)));
    // 0baba4  push eax
    X86_AT(c, 0xbaba4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0baba5  push 0x46208
    X86_AT(c, 0xbaba5u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0babaa  call 0x2c5
    X86_AT(c, 0xbabaau);
    push32(c, 0xbabafu); x86_call_known(c, 0x2c5u, f_000002c5); X86_RET(c, 0xbabafu);
    X86_TICK(c, 16);
    // 0babaf  leave 
    X86_AT(c, 0xbabafu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0babb0  ret 
    X86_AT(c, 0xbabb0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbab4cu, "ran off the end of a function");
}
void f_000babb4(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0babb4  push ebp
    X86_AT(c, 0xbabb4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0babb5  mov ebp, esp
    X86_AT(c, 0xbabb5u);
    c.r[5] = c.r[4];
    // 0babb7  mov ax, word ptr [0x4690c]
    X86_AT(c, 0xbabb7u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x4690Cu))));
    // 0babbd  or al, 0x20
    X86_AT(c, 0xbabbdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x20u, 1)); }
    // 0babbf  movsx eax, ax
    X86_AT(c, 0xbabbfu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 0babc2  push eax
    X86_AT(c, 0xbabc2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0babc3  push 0x46208
    X86_AT(c, 0xbabc3u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0babc8  call 0x2c5
    X86_AT(c, 0xbabc8u);
    push32(c, 0xbabcdu); x86_call_known(c, 0x2c5u, f_000002c5); X86_RET(c, 0xbabcdu);
    X86_TICK(c, 35);
    // 0babcd  mov ax, word ptr [ebp + 8]
    X86_AT(c, 0xbabcdu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0babd1  mov word ptr [0x46808], ax
    X86_AT(c, 0xbabd1u);
    wr16((c.sbase[3] + (uint32_t)(0x46808u)), (c.r[0] & 0xFFFFu));
    // 0babd7  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0xbabd7u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0babdb  mov word ptr [0x4680a], ax
    X86_AT(c, 0xbabdbu);
    wr16((c.sbase[3] + (uint32_t)(0x4680Au)), (c.r[0] & 0xFFFFu));
    // 0babe1  mov ax, word ptr [ebp + 0x10]
    X86_AT(c, 0xbabe1u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 0babe5  mov word ptr [0x4680c], ax
    X86_AT(c, 0xbabe5u);
    wr16((c.sbase[3] + (uint32_t)(0x4680Cu)), (c.r[0] & 0xFFFFu));
    // 0babeb  mov ax, word ptr [ebp + 0x14]
    X86_AT(c, 0xbabebu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0babef  mov word ptr [0x4680e], ax
    X86_AT(c, 0xbabefu);
    wr16((c.sbase[3] + (uint32_t)(0x4680Eu)), (c.r[0] & 0xFFFFu));
    // 0babf5  push 0x46808
    X86_AT(c, 0xbabf5u);
    { uint32_t v = 0x46808u; push32(c, v); }
    // 0babfa  push 0x46208
    X86_AT(c, 0xbabfau);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0babff  call 0x8bd
    X86_AT(c, 0xbabffu);
    push32(c, 0xbac04u); x86_call_known(c, 0x8bdu, f_000008bd); X86_RET(c, 0xbac04u);
    X86_TICK(c, 17);
    // 0bac04  movsx eax, word ptr [0x4690c]
    X86_AT(c, 0xbac04u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x4690Cu)));
    // 0bac0b  push eax
    X86_AT(c, 0xbac0bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bac0c  push 0x46208
    X86_AT(c, 0xbac0cu);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0bac11  call 0x2c5
    X86_AT(c, 0xbac11u);
    push32(c, 0xbac16u); x86_call_known(c, 0x2c5u, f_000002c5); X86_RET(c, 0xbac16u);
    X86_TICK(c, 16);
    // 0bac16  leave 
    X86_AT(c, 0xbac16u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bac17  ret 
    X86_AT(c, 0xbac17u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbabb4u, "ran off the end of a function");
}
void f_000bac18(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0bac18  push ebp
    X86_AT(c, 0xbac18u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bac19  mov ebp, esp
    X86_AT(c, 0xbac19u);
    c.r[5] = c.r[4];
    // 0bac1b  push edi
    X86_AT(c, 0xbac1bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bac1c  mov edi, dword ptr [ebp + 0x18]
    X86_AT(c, 0xbac1cu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0bac1f  push 0
    X86_AT(c, 0xbac1fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bac21  call 0xba68c
    X86_AT(c, 0xbac21u);
    push32(c, 0xbac26u); x86_call_known(c, 0xba68cu, f_000ba68c); X86_RET(c, 0xbac26u);
    X86_TICK(c, 9);
    // 0bac26  push edi
    X86_AT(c, 0xbac26u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bac27  call 0xba51c
    X86_AT(c, 0xbac27u);
    push32(c, 0xbac2cu); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xbac2cu);
    X86_TICK(c, 9);
    // 0bac2c  push edi
    X86_AT(c, 0xbac2cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bac2d  call 0xba54c
    X86_AT(c, 0xbac2du);
    push32(c, 0xbac32u); x86_call_known(c, 0xba54cu, f_000ba54c); X86_RET(c, 0xbac32u);
    X86_TICK(c, 35);
    // 0bac32  mov ax, word ptr [ebp + 8]
    X86_AT(c, 0xbac32u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0bac36  mov word ptr [0x46808], ax
    X86_AT(c, 0xbac36u);
    wr16((c.sbase[3] + (uint32_t)(0x46808u)), (c.r[0] & 0xFFFFu));
    // 0bac3c  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0xbac3cu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0bac40  mov word ptr [0x4680a], ax
    X86_AT(c, 0xbac40u);
    wr16((c.sbase[3] + (uint32_t)(0x4680Au)), (c.r[0] & 0xFFFFu));
    // 0bac46  mov ax, word ptr [ebp + 0x10]
    X86_AT(c, 0xbac46u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 0bac4a  mov word ptr [0x4680c], ax
    X86_AT(c, 0xbac4au);
    wr16((c.sbase[3] + (uint32_t)(0x4680Cu)), (c.r[0] & 0xFFFFu));
    // 0bac50  mov ax, word ptr [ebp + 0x14]
    X86_AT(c, 0xbac50u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0bac54  mov word ptr [0x4680e], ax
    X86_AT(c, 0xbac54u);
    wr16((c.sbase[3] + (uint32_t)(0x4680Eu)), (c.r[0] & 0xFFFFu));
    // 0bac5a  push 0x46808
    X86_AT(c, 0xbac5au);
    { uint32_t v = 0x46808u; push32(c, v); }
    // 0bac5f  push 0x46208
    X86_AT(c, 0xbac5fu);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0bac64  call 0x8bd
    X86_AT(c, 0xbac64u);
    push32(c, 0xbac69u); x86_call_known(c, 0x8bdu, f_000008bd); X86_RET(c, 0xbac69u);
    X86_TICK(c, 15);
    // 0bac69  movsx eax, word ptr [0x46204]
    X86_AT(c, 0xbac69u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x46204u)));
    // 0bac70  push eax
    X86_AT(c, 0xbac70u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bac71  call 0xba68c
    X86_AT(c, 0xbac71u);
    push32(c, 0xbac76u); x86_call_known(c, 0xba68cu, f_000ba68c); X86_RET(c, 0xbac76u);
    X86_TICK(c, 17);
    // 0bac76  movsx eax, word ptr [0x4690c]
    X86_AT(c, 0xbac76u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x4690Cu)));
    // 0bac7d  push eax
    X86_AT(c, 0xbac7du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bac7e  push 0x46208
    X86_AT(c, 0xbac7eu);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0bac83  call 0x2c5
    X86_AT(c, 0xbac83u);
    push32(c, 0xbac88u); x86_call_known(c, 0x2c5u, f_000002c5); X86_RET(c, 0xbac88u);
    X86_TICK(c, 22);
    // 0bac88  add esp, 0x20
    X86_AT(c, 0xbac88u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0bac8b  pop edi
    X86_AT(c, 0xbac8bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bac8c  leave 
    X86_AT(c, 0xbac8cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bac8d  ret 
    X86_AT(c, 0xbac8du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbac18u, "ran off the end of a function");
}
void f_000bac90(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0bac90  push ebp
    X86_AT(c, 0xbac90u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bac91  mov ebp, esp
    X86_AT(c, 0xbac91u);
    c.r[5] = c.r[4];
    // 0bac93  sub esp, 0x24
    X86_AT(c, 0xbac93u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x24u, 0, 4); }
    // 0bac96  push ebx
    X86_AT(c, 0xbac96u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bac97  push esi
    X86_AT(c, 0xbac97u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bac98  push edi
    X86_AT(c, 0xbac98u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bac99  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xbac99u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0bac9c  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xbac9cu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0bac9f  mov ebx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xbac9fu);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0baca2  push 9
    X86_AT(c, 0xbaca2u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0baca4  call 0xba51c
    X86_AT(c, 0xbaca4u);
    push32(c, 0xbaca9u); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xbaca9u);
    X86_TICK(c, 9);
    // 0baca9  push 9
    X86_AT(c, 0xbaca9u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0bacab  call 0xba54c
    X86_AT(c, 0xbacabu);
    push32(c, 0xbacb0u); x86_call_known(c, 0xba54cu, f_000ba54c); X86_RET(c, 0xbacb0u);
    X86_TICK(c, 29);
    // 0bacb0  lea eax, [ebx + esi*1]
    X86_AT(c, 0xbacb0u);
    c.r[0] = (uint32_t)(c.r[3] + c.r[6]);
    // 0bacb3  dec eax
    X86_AT(c, 0xbacb3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0bacb4  push eax
    X86_AT(c, 0xbacb4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bacb5  mov eax, edi
    X86_AT(c, 0xbacb5u);
    c.r[0] = c.r[7];
    // 0bacb7  add eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xbacb7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4); }
    // 0bacba  dec eax
    X86_AT(c, 0xbacbau);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0bacbb  push eax
    X86_AT(c, 0xbacbbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bacbc  push esi
    X86_AT(c, 0xbacbcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bacbd  push edi
    X86_AT(c, 0xbacbdu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bacbe  call 0xbabb4
    X86_AT(c, 0xbacbeu);
    push32(c, 0xbacc3u); x86_call_known(c, 0xbabb4u, f_000babb4); X86_RET(c, 0xbacc3u);
    X86_TICK(c, 12);
    // 0bacc3  push dword ptr [ebp + 0x18]
    X86_AT(c, 0xbacc3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 0bacc6  call 0xba51c
    X86_AT(c, 0xbacc6u);
    push32(c, 0xbaccbu); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xbaccbu);
    X86_TICK(c, 12);
    // 0baccb  push dword ptr [ebp + 0x18]
    X86_AT(c, 0xbaccbu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 0bacce  call 0xba54c
    X86_AT(c, 0xbacceu);
    push32(c, 0xbacd3u); x86_call_known(c, 0xba54cu, f_000ba54c); X86_RET(c, 0xbacd3u);
    X86_TICK(c, 20);
    // 0bacd3  mov ax, word ptr [0x4690c]
    X86_AT(c, 0xbacd3u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x4690Cu))));
    // 0bacd9  or al, 0x20
    X86_AT(c, 0xbacd9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x20u, 1)); }
    // 0bacdb  movsx eax, ax
    X86_AT(c, 0xbacdbu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 0bacde  push eax
    X86_AT(c, 0xbacdeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bacdf  push 0x46208
    X86_AT(c, 0xbacdfu);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0bace4  call 0x2c5
    X86_AT(c, 0xbace4u);
    push32(c, 0xbace9u); x86_call_known(c, 0x2c5u, f_000002c5); X86_RET(c, 0xbace9u);
    X86_TICK(c, 31);
    // 0bace9  lea eax, [edi + 0xf]
    X86_AT(c, 0xbace9u);
    c.r[0] = (uint32_t)(c.r[7] + 0xFu);
    // 0bacec  mov word ptr [0x46808], ax
    X86_AT(c, 0xbacecu);
    wr16((c.sbase[3] + (uint32_t)(0x46808u)), (c.r[0] & 0xFFFFu));
    // 0bacf2  lea eax, [esi + 0x10]
    X86_AT(c, 0xbacf2u);
    c.r[0] = (uint32_t)(c.r[6] + 0x10u);
    // 0bacf5  mov word ptr [0x4680a], ax
    X86_AT(c, 0xbacf5u);
    wr16((c.sbase[3] + (uint32_t)(0x4680Au)), (c.r[0] & 0xFFFFu));
    // 0bacfb  mov ax, 0xfff0
    X86_AT(c, 0xbacfbu);
    s16(c, 0, 0xFFF0u);
    // 0bacff  mov word ptr [0x4680c], ax
    X86_AT(c, 0xbacffu);
    wr16((c.sbase[3] + (uint32_t)(0x4680Cu)), (c.r[0] & 0xFFFFu));
    // 0bad05  mov word ptr [0x4680e], ax
    X86_AT(c, 0xbad05u);
    wr16((c.sbase[3] + (uint32_t)(0x4680Eu)), (c.r[0] & 0xFFFFu));
    // 0bad0b  mov word ptr [0x46810], ax
    X86_AT(c, 0xbad0bu);
    wr16((c.sbase[3] + (uint32_t)(0x46810u)), (c.r[0] & 0xFFFFu));
    // 0bad11  mov word ptr [0x46812], ax
    X86_AT(c, 0xbad11u);
    wr16((c.sbase[3] + (uint32_t)(0x46812u)), (c.r[0] & 0xFFFFu));
    // 0bad17  mov word ptr [0x46814], 0x10
    X86_AT(c, 0xbad17u);
    wr16((c.sbase[3] + (uint32_t)(0x46814u)), 0x10u);
    // 0bad20  push 0x46808
    X86_AT(c, 0xbad20u);
    { uint32_t v = 0x46808u; push32(c, v); }
    // 0bad25  push 0x46208
    X86_AT(c, 0xbad25u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0bad2a  call 0x929
    X86_AT(c, 0xbad2au);
    push32(c, 0xbad2fu); x86_call_known(c, 0x929u, f_00000929); X86_RET(c, 0xbad2fu);
    X86_TICK(c, 9);
    // 0bad2f  push 0xf
    X86_AT(c, 0xbad2fu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0bad31  call 0xba51c
    X86_AT(c, 0xbad31u);
    push32(c, 0xbad36u); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xbad36u);
    X86_TICK(c, 11);
    // 0bad36  push 0x46808
    X86_AT(c, 0xbad36u);
    { uint32_t v = 0x46808u; push32(c, v); }
    // 0bad3b  push 0x46208
    X86_AT(c, 0xbad3bu);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0bad40  call 0x905
    X86_AT(c, 0xbad40u);
    push32(c, 0xbad45u); x86_call_known(c, 0x905u, f_00000905); X86_RET(c, 0xbad45u);
    X86_TICK(c, 14);
    // 0bad45  add esp, 0x3c
    X86_AT(c, 0xbad45u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0bad48  push dword ptr [ebp + 0x18]
    X86_AT(c, 0xbad48u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 0bad4b  call 0xba51c
    X86_AT(c, 0xbad4bu);
    push32(c, 0xbad50u); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xbad50u);
    X86_TICK(c, 47);
    // 0bad50  mov eax, edi
    X86_AT(c, 0xbad50u);
    c.r[0] = c.r[7];
    // 0bad52  mov word ptr [ebp - 4], ax
    X86_AT(c, 0xbad52u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), (c.r[0] & 0xFFFFu));
    // 0bad56  add ax, word ptr [ebp + 0x10]
    X86_AT(c, 0xbad56u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 2)); }
    // 0bad5a  sub ax, 0x10
    X86_AT(c, 0xbad5au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x10u, 0, 2)); }
    // 0bad5e  mov word ptr [0x46808], ax
    X86_AT(c, 0xbad5eu);
    wr16((c.sbase[3] + (uint32_t)(0x46808u)), (c.r[0] & 0xFFFFu));
    // 0bad64  mov edx, esi
    X86_AT(c, 0xbad64u);
    c.r[2] = c.r[6];
    // 0bad66  mov word ptr [ebp - 8], dx
    X86_AT(c, 0xbad66u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), (c.r[2] & 0xFFFFu));
    // 0bad6a  add dx, 0x10
    X86_AT(c, 0xbad6au);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x10u, 0, 2)); }
    // 0bad6e  mov word ptr [0x4680a], dx
    X86_AT(c, 0xbad6eu);
    wr16((c.sbase[3] + (uint32_t)(0x4680Au)), (c.r[2] & 0xFFFFu));
    // 0bad75  mov word ptr [0x4680c], 0
    X86_AT(c, 0xbad75u);
    wr16((c.sbase[3] + (uint32_t)(0x4680Cu)), 0x0u);
    // 0bad7e  mov word ptr [0x4680e], 0xfff0
    X86_AT(c, 0xbad7eu);
    wr16((c.sbase[3] + (uint32_t)(0x4680Eu)), 0xFFF0u);
    // 0bad87  mov word ptr [0x46810], 0x10
    X86_AT(c, 0xbad87u);
    wr16((c.sbase[3] + (uint32_t)(0x46810u)), 0x10u);
    // 0bad90  mov word ptr [0x46812], 0
    X86_AT(c, 0xbad90u);
    wr16((c.sbase[3] + (uint32_t)(0x46812u)), 0x0u);
    // 0bad99  push 0x46808
    X86_AT(c, 0xbad99u);
    { uint32_t v = 0x46808u; push32(c, v); }
    // 0bad9e  mov edx, 0x46200
    X86_AT(c, 0xbad9eu);
    c.r[2] = 0x46200u;
    // 0bada3  add edx, 8
    X86_AT(c, 0xbada3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x8u, 0, 4); }
    // 0bada6  push edx
    X86_AT(c, 0xbada6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0bada7  mov word ptr [ebp - 0xc], ax
    X86_AT(c, 0xbada7u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), (c.r[0] & 0xFFFFu));
    // 0badab  call 0x929
    X86_AT(c, 0xbadabu);
    push32(c, 0xbadb0u); x86_call_known(c, 0x929u, f_00000929); X86_RET(c, 0xbadb0u);
    X86_TICK(c, 9);
    // 0badb0  push 0xf
    X86_AT(c, 0xbadb0u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0badb2  call 0xba51c
    X86_AT(c, 0xbadb2u);
    push32(c, 0xbadb7u); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xbadb7u);
    X86_TICK(c, 13);
    // 0badb7  push 0x46808
    X86_AT(c, 0xbadb7u);
    { uint32_t v = 0x46808u; push32(c, v); }
    // 0badbc  mov eax, 0x46208
    X86_AT(c, 0xbadbcu);
    c.r[0] = 0x46208u;
    // 0badc1  push eax
    X86_AT(c, 0xbadc1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0badc2  call 0x905
    X86_AT(c, 0xbadc2u);
    push32(c, 0xbadc7u); x86_call_known(c, 0x905u, f_00000905); X86_RET(c, 0xbadc7u);
    X86_TICK(c, 12);
    // 0badc7  push dword ptr [ebp + 0x18]
    X86_AT(c, 0xbadc7u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 0badca  call 0xba51c
    X86_AT(c, 0xbadcau);
    push32(c, 0xbadcfu); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xbadcfu);
    X86_TICK(c, 41);
    // 0badcf  mov ax, word ptr [ebp - 0xc]
    X86_AT(c, 0xbadcfu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))));
    // 0badd3  mov word ptr [0x46808], ax
    X86_AT(c, 0xbadd3u);
    wr16((c.sbase[3] + (uint32_t)(0x46808u)), (c.r[0] & 0xFFFFu));
    // 0badd9  mov eax, ebx
    X86_AT(c, 0xbadd9u);
    c.r[0] = c.r[3];
    // 0baddb  add ax, word ptr [ebp - 8]
    X86_AT(c, 0xbaddbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 2)); }
    // 0baddf  sub ax, 0x11
    X86_AT(c, 0xbaddfu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x11u, 0, 2)); }
    // 0bade3  mov word ptr [0x4680a], ax
    X86_AT(c, 0xbade3u);
    wr16((c.sbase[3] + (uint32_t)(0x4680Au)), (c.r[0] & 0xFFFFu));
    // 0bade9  mov word ptr [0x4680c], 0x10
    X86_AT(c, 0xbade9u);
    wr16((c.sbase[3] + (uint32_t)(0x4680Cu)), 0x10u);
    // 0badf2  mov word ptr [0x4680e], 0
    X86_AT(c, 0xbadf2u);
    wr16((c.sbase[3] + (uint32_t)(0x4680Eu)), 0x0u);
    // 0badfb  mov word ptr [0x46810], 0
    X86_AT(c, 0xbadfbu);
    wr16((c.sbase[3] + (uint32_t)(0x46810u)), 0x0u);
    // 0bae04  mov word ptr [0x46812], 0x10
    X86_AT(c, 0xbae04u);
    wr16((c.sbase[3] + (uint32_t)(0x46812u)), 0x10u);
    // 0bae0d  push 0x46808
    X86_AT(c, 0xbae0du);
    { uint32_t v = 0x46808u; push32(c, v); }
    // 0bae12  mov ecx, 0x46208
    X86_AT(c, 0xbae12u);
    c.r[1] = 0x46208u;
    // 0bae17  push ecx
    X86_AT(c, 0xbae17u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0bae18  mov word ptr [ebp - 0x10], ax
    X86_AT(c, 0xbae18u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), (c.r[0] & 0xFFFFu));
    // 0bae1c  call 0x929
    X86_AT(c, 0xbae1cu);
    push32(c, 0xbae21u); x86_call_known(c, 0x929u, f_00000929); X86_RET(c, 0xbae21u);
    X86_TICK(c, 9);
    // 0bae21  push 0xf
    X86_AT(c, 0xbae21u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0bae23  call 0xba51c
    X86_AT(c, 0xbae23u);
    push32(c, 0xbae28u); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xbae28u);
    X86_TICK(c, 13);
    // 0bae28  push 0x46808
    X86_AT(c, 0xbae28u);
    { uint32_t v = 0x46808u; push32(c, v); }
    // 0bae2d  mov eax, 0x46208
    X86_AT(c, 0xbae2du);
    c.r[0] = 0x46208u;
    // 0bae32  push eax
    X86_AT(c, 0xbae32u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bae33  call 0x905
    X86_AT(c, 0xbae33u);
    push32(c, 0xbae38u); x86_call_known(c, 0x905u, f_00000905); X86_RET(c, 0xbae38u);
    X86_TICK(c, 12);
    // 0bae38  push dword ptr [ebp + 0x18]
    X86_AT(c, 0xbae38u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 0bae3b  call 0xba51c
    X86_AT(c, 0xbae3bu);
    push32(c, 0xbae40u); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xbae40u);
    X86_TICK(c, 35);
    // 0bae40  mov ax, word ptr [ebp - 4]
    X86_AT(c, 0xbae40u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))));
    // 0bae44  add ax, 0xf
    X86_AT(c, 0xbae44u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0xFu, 0, 2)); }
    // 0bae48  mov word ptr [0x46808], ax
    X86_AT(c, 0xbae48u);
    wr16((c.sbase[3] + (uint32_t)(0x46808u)), (c.r[0] & 0xFFFFu));
    // 0bae4e  mov ax, word ptr [ebp - 0x10]
    X86_AT(c, 0xbae4eu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))));
    // 0bae52  mov word ptr [0x4680a], ax
    X86_AT(c, 0xbae52u);
    wr16((c.sbase[3] + (uint32_t)(0x4680Au)), (c.r[0] & 0xFFFFu));
    // 0bae58  mov word ptr [0x4680c], 0
    X86_AT(c, 0xbae58u);
    wr16((c.sbase[3] + (uint32_t)(0x4680Cu)), 0x0u);
    // 0bae61  mov word ptr [0x4680e], 0x10
    X86_AT(c, 0xbae61u);
    wr16((c.sbase[3] + (uint32_t)(0x4680Eu)), 0x10u);
    // 0bae6a  mov word ptr [0x46810], 0xfff0
    X86_AT(c, 0xbae6au);
    wr16((c.sbase[3] + (uint32_t)(0x46810u)), 0xFFF0u);
    // 0bae73  add esp, 0x34
    X86_AT(c, 0xbae73u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0bae76  mov word ptr [0x46812], 0
    X86_AT(c, 0xbae76u);
    wr16((c.sbase[3] + (uint32_t)(0x46812u)), 0x0u);
    // 0bae7f  push 0x46808
    X86_AT(c, 0xbae7fu);
    { uint32_t v = 0x46808u; push32(c, v); }
    // 0bae84  push 0x46208
    X86_AT(c, 0xbae84u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0bae89  call 0x929
    X86_AT(c, 0xbae89u);
    push32(c, 0xbae8eu); x86_call_known(c, 0x929u, f_00000929); X86_RET(c, 0xbae8eu);
    X86_TICK(c, 9);
    // 0bae8e  push 0xf
    X86_AT(c, 0xbae8eu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0bae90  call 0xba51c
    X86_AT(c, 0xbae90u);
    push32(c, 0xbae95u); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xbae95u);
    X86_TICK(c, 11);
    // 0bae95  push 0x46808
    X86_AT(c, 0xbae95u);
    { uint32_t v = 0x46808u; push32(c, v); }
    // 0bae9a  push 0x46208
    X86_AT(c, 0xbae9au);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0bae9f  call 0x905
    X86_AT(c, 0xbae9fu);
    push32(c, 0xbaea4u); x86_call_known(c, 0x905u, f_00000905); X86_RET(c, 0xbaea4u);
    X86_TICK(c, 12);
    // 0baea4  push dword ptr [ebp + 0x18]
    X86_AT(c, 0xbaea4u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 0baea7  call 0xba51c
    X86_AT(c, 0xbaea7u);
    push32(c, 0xbaeacu); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xbaeacu);
    X86_TICK(c, 35);
    // 0baeac  lea eax, [esi + 0xf]
    X86_AT(c, 0xbaeacu);
    c.r[0] = (uint32_t)(c.r[6] + 0xFu);
    // 0baeaf  push eax
    X86_AT(c, 0xbaeafu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0baeb0  mov eax, edi
    X86_AT(c, 0xbaeb0u);
    c.r[0] = c.r[7];
    // 0baeb2  add eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xbaeb2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4); }
    // 0baeb5  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xbaeb5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0baeb8  sub eax, 0x11
    X86_AT(c, 0xbaeb8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x11u, 0, 4); }
    // 0baebb  push eax
    X86_AT(c, 0xbaebbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0baebc  push esi
    X86_AT(c, 0xbaebcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0baebd  lea edx, [edi + 0x10]
    X86_AT(c, 0xbaebdu);
    c.r[2] = (uint32_t)(c.r[7] + 0x10u);
    // 0baec0  push edx
    X86_AT(c, 0xbaec0u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0baec1  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xbaec1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0baec4  mov dword ptr [ebp - 0xc], edx
    X86_AT(c, 0xbaec4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[2]);
    // 0baec7  call 0xbabb4
    X86_AT(c, 0xbaec7u);
    push32(c, 0xbaeccu); x86_call_known(c, 0xbabb4u, f_000babb4); X86_RET(c, 0xbaeccu);
    X86_TICK(c, 33);
    // 0baecc  lea eax, [ebx + esi*1]
    X86_AT(c, 0xbaeccu);
    c.r[0] = (uint32_t)(c.r[3] + c.r[6]);
    // 0baecf  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xbaecfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0baed2  sub eax, 0x11
    X86_AT(c, 0xbaed2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x11u, 0, 4); }
    // 0baed5  push eax
    X86_AT(c, 0xbaed5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0baed6  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xbaed6u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0baed9  dec edx
    X86_AT(c, 0xbaed9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0baeda  push edx
    X86_AT(c, 0xbaedau);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0baedb  lea ecx, [esi + 0x10]
    X86_AT(c, 0xbaedbu);
    c.r[1] = (uint32_t)(c.r[6] + 0x10u);
    // 0baede  push ecx
    X86_AT(c, 0xbaedeu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0baedf  push edi
    X86_AT(c, 0xbaedfu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0baee0  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xbaee0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0baee3  mov dword ptr [ebp - 0x18], edx
    X86_AT(c, 0xbaee3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[2]);
    // 0baee6  call 0xbabb4
    X86_AT(c, 0xbaee6u);
    push32(c, 0xbaeebu); x86_call_known(c, 0xbabb4u, f_000babb4); X86_RET(c, 0xbaeebu);
    X86_TICK(c, 32);
    // 0baeeb  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xbaeebu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0baeee  dec eax
    X86_AT(c, 0xbaeeeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0baeef  push eax
    X86_AT(c, 0xbaeefu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0baef0  push dword ptr [ebp - 8]
    X86_AT(c, 0xbaef0u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0baef3  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xbaef3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0baef6  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xbaef6u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0baef9  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xbaef9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0baefc  call 0xbabb4
    X86_AT(c, 0xbaefcu);
    push32(c, 0xbaf01u); x86_call_known(c, 0xbabb4u, f_000babb4); X86_RET(c, 0xbaf01u);
    X86_TICK(c, 11);
    // 0baf01  add esp, 0x48
    X86_AT(c, 0xbaf01u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x48u, 0, 4); }
    // 0baf04  push 0xf
    X86_AT(c, 0xbaf04u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0baf06  call 0xba51c
    X86_AT(c, 0xbaf06u);
    push32(c, 0xbaf0bu); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xbaf0bu);
    X86_TICK(c, 21);
    // 0baf0b  push esi
    X86_AT(c, 0xbaf0bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0baf0c  push dword ptr [ebp - 8]
    X86_AT(c, 0xbaf0cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0baf0f  push esi
    X86_AT(c, 0xbaf0fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0baf10  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xbaf10u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0baf13  call 0xbaa94
    X86_AT(c, 0xbaf13u);
    push32(c, 0xbaf18u); x86_call_known(c, 0xbaa94u, f_000baa94); X86_RET(c, 0xbaf18u);
    X86_TICK(c, 33);
    // 0baf18  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xbaf18u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0baf1b  sub eax, 0xe
    X86_AT(c, 0xbaf1bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xEu, 0, 4); }
    // 0baf1e  push eax
    X86_AT(c, 0xbaf1eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0baf1f  push dword ptr [ebp - 0x18]
    X86_AT(c, 0xbaf1fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))); push32(c, v); }
    // 0baf22  lea edx, [esi + 0xd]
    X86_AT(c, 0xbaf22u);
    c.r[2] = (uint32_t)(c.r[6] + 0xDu);
    // 0baf25  push edx
    X86_AT(c, 0xbaf25u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0baf26  push dword ptr [ebp - 0x18]
    X86_AT(c, 0xbaf26u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))); push32(c, v); }
    // 0baf29  mov dword ptr [ebp - 0x20], eax
    X86_AT(c, 0xbaf29u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[0]);
    // 0baf2c  mov dword ptr [ebp - 0x24], edx
    X86_AT(c, 0xbaf2cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), c.r[2]);
    // 0baf2f  call 0xbaa94
    X86_AT(c, 0xbaf2fu);
    push32(c, 0xbaf34u); x86_call_known(c, 0xbaa94u, f_000baa94); X86_RET(c, 0xbaf34u);
    X86_TICK(c, 27);
    // 0baf34  push dword ptr [ebp - 0x1c]
    X86_AT(c, 0xbaf34u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))); push32(c, v); }
    // 0baf37  push dword ptr [ebp - 8]
    X86_AT(c, 0xbaf37u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0baf3a  push dword ptr [ebp - 0x1c]
    X86_AT(c, 0xbaf3au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))); push32(c, v); }
    // 0baf3d  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xbaf3du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0baf40  call 0xbaa94
    X86_AT(c, 0xbaf40u);
    push32(c, 0xbaf45u); x86_call_known(c, 0xbaa94u, f_000baa94); X86_RET(c, 0xbaf45u);
    X86_TICK(c, 21);
    // 0baf45  push dword ptr [ebp - 0x20]
    X86_AT(c, 0xbaf45u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u))); push32(c, v); }
    // 0baf48  push edi
    X86_AT(c, 0xbaf48u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0baf49  push dword ptr [ebp - 0x24]
    X86_AT(c, 0xbaf49u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu))); push32(c, v); }
    // 0baf4c  push edi
    X86_AT(c, 0xbaf4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0baf4d  call 0xbaa94
    X86_AT(c, 0xbaf4du);
    push32(c, 0xbaf52u); x86_call_known(c, 0xbaa94u, f_000baa94); X86_RET(c, 0xbaf52u);
    X86_TICK(c, 14);
    // 0baf52  add esp, 0x44
    X86_AT(c, 0xbaf52u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 0baf55  cmp dword ptr [ebp + 0x18], 0
    X86_AT(c, 0xbaf55u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 0x0u, 0, 4);
    // 0baf59  je 0xbaf5f
    X86_AT(c, 0xbaf59u);
    if (x86_cc(c, 4)) { goto L_baf5f; }
    X86_TICK(c, 9);
    // 0baf5b  push 0xf
    X86_AT(c, 0xbaf5bu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0baf5d  jmp 0xbaf61
    X86_AT(c, 0xbaf5du);
    goto L_baf61;
L_baf5f:
    X86_TICK(c, 2);
    // 0baf5f  push 0
    X86_AT(c, 0xbaf5fu);
    { uint32_t v = 0x0u; push32(c, v); }
L_baf61:
    X86_TICK(c, 7);
    // 0baf61  call 0xba51c
    X86_AT(c, 0xbaf61u);
    push32(c, 0xbaf66u); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xbaf66u);
    X86_TICK(c, 11);
    // 0baf66  add esp, 4
    X86_AT(c, 0xbaf66u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0baf69  push 0
    X86_AT(c, 0xbaf69u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0baf6b  call 0xba54c
    X86_AT(c, 0xbaf6bu);
    push32(c, 0xbaf70u); x86_call_known(c, 0xba54cu, f_000ba54c); X86_RET(c, 0xbaf70u);
    X86_TICK(c, 15);
    // 0baf70  push 0x18e
    X86_AT(c, 0xbaf70u);
    { uint32_t v = 0x18Eu; push32(c, v); }
    // 0baf75  push 0x169
    X86_AT(c, 0xbaf75u);
    { uint32_t v = 0x169u; push32(c, v); }
    // 0baf7a  push 0x2f
    X86_AT(c, 0xbaf7au);
    { uint32_t v = 0x2Fu; push32(c, v); }
    // 0baf7c  push 0xa
    X86_AT(c, 0xbaf7cu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0baf7e  call 0xbabb4
    X86_AT(c, 0xbaf7eu);
    push32(c, 0xbaf83u); x86_call_known(c, 0xbabb4u, f_000babb4); X86_RET(c, 0xbaf83u);
    X86_TICK(c, 9);
    // 0baf83  push 0xf
    X86_AT(c, 0xbaf83u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0baf85  call 0xba51c
    X86_AT(c, 0xbaf85u);
    push32(c, 0xbaf8au); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xbaf8au);
    X86_TICK(c, 17);
    // 0baf8a  movsx eax, word ptr [0x4690c]
    X86_AT(c, 0xbaf8au);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x4690Cu)));
    // 0baf91  push eax
    X86_AT(c, 0xbaf91u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0baf92  push 0x46208
    X86_AT(c, 0xbaf92u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0baf97  call 0x2c5
    X86_AT(c, 0xbaf97u);
    push32(c, 0xbaf9cu); x86_call_known(c, 0x2c5u, f_000002c5); X86_RET(c, 0xbaf9cu);
    X86_TICK(c, 30);
    // 0baf9c  add esp, 0x20
    X86_AT(c, 0xbaf9cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0baf9f  pop edi
    X86_AT(c, 0xbaf9fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bafa0  pop esi
    X86_AT(c, 0xbafa0u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bafa1  pop ebx
    X86_AT(c, 0xbafa1u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0bafa2  leave 
    X86_AT(c, 0xbafa2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bafa3  ret 
    X86_AT(c, 0xbafa3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbac90u, "ran off the end of a function");
}
void f_000bb018(X86Cpu& c) {
    X86_TICK(c, 69);
    // 0bb018  push ebp
    X86_AT(c, 0xbb018u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bb019  mov ebp, esp
    X86_AT(c, 0xbb019u);
    c.r[5] = c.r[4];
    // 0bb01b  push esi
    X86_AT(c, 0xbb01bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bb01c  push edi
    X86_AT(c, 0xbb01cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bb01d  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xbb01du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0bb020  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xbb020u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0bb023  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xbb023u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0bb026  mov dword ptr [0x46808], eax
    X86_AT(c, 0xbb026u);
    wr32((c.sbase[3] + (uint32_t)(0x46808u)), c.r[0]);
    // 0bb02b  mov word ptr [0x4680c], 0x14
    X86_AT(c, 0xbb02bu);
    wr16((c.sbase[3] + (uint32_t)(0x4680Cu)), 0x14u);
    // 0bb034  mov eax, edi
    X86_AT(c, 0xbb034u);
    c.r[0] = c.r[7];
    // 0bb036  mov word ptr [0x4680e], ax
    X86_AT(c, 0xbb036u);
    wr16((c.sbase[3] + (uint32_t)(0x4680Eu)), (c.r[0] & 0xFFFFu));
    // 0bb03c  mov eax, esi
    X86_AT(c, 0xbb03cu);
    c.r[0] = c.r[6];
    // 0bb03e  mov word ptr [0x46810], ax
    X86_AT(c, 0xbb03eu);
    wr16((c.sbase[3] + (uint32_t)(0x46810u)), (c.r[0] & 0xFFFFu));
    // 0bb044  mov eax, edi
    X86_AT(c, 0xbb044u);
    c.r[0] = c.r[7];
    // 0bb046  add ax, word ptr [ebp + 0x14]
    X86_AT(c, 0xbb046u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0, 2)); }
    // 0bb04a  dec eax
    X86_AT(c, 0xbb04au);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0bb04b  mov word ptr [0x46812], ax
    X86_AT(c, 0xbb04bu);
    wr16((c.sbase[3] + (uint32_t)(0x46812u)), (c.r[0] & 0xFFFFu));
    // 0bb051  mov eax, esi
    X86_AT(c, 0xbb051u);
    c.r[0] = c.r[6];
    // 0bb053  add ax, word ptr [ebp + 0x18]
    X86_AT(c, 0xbb053u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 0, 2)); }
    // 0bb057  dec eax
    X86_AT(c, 0xbb057u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0bb058  mov word ptr [0x46814], ax
    X86_AT(c, 0xbb058u);
    wr16((c.sbase[3] + (uint32_t)(0x46814u)), (c.r[0] & 0xFFFFu));
    // 0bb05e  push 0x46808
    X86_AT(c, 0xbb05eu);
    { uint32_t v = 0x46808u; push32(c, v); }
    // 0bb063  push 0
    X86_AT(c, 0xbb063u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bb065  push 0x46208
    X86_AT(c, 0xbb065u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0bb06a  call 0x5c4
    X86_AT(c, 0xbb06au);
    push32(c, 0xbb06fu); x86_call_known(c, 0x5c4u, f_000005c4); X86_RET(c, 0xbb06fu);
    X86_TICK(c, 26);
    // 0bb06f  add esp, 0xc
    X86_AT(c, 0xbb06fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0bb072  pop edi
    X86_AT(c, 0xbb072u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bb073  pop esi
    X86_AT(c, 0xbb073u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bb074  leave 
    X86_AT(c, 0xbb074u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bb075  ret 
    X86_AT(c, 0xbb075u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbb018u, "ran off the end of a function");
}
void f_000bb078(X86Cpu& c) {
    X86_TICK(c, 62);
    // 0bb078  push ebp
    X86_AT(c, 0xbb078u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bb079  mov ebp, esp
    X86_AT(c, 0xbb079u);
    c.r[5] = c.r[4];
    // 0bb07b  push esi
    X86_AT(c, 0xbb07bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bb07c  push edi
    X86_AT(c, 0xbb07cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bb07d  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xbb07du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0bb080  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xbb080u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0bb083  mov eax, dword ptr [ebp + 0x14]
    X86_AT(c, 0xbb083u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0bb086  shl eax, 9
    X86_AT(c, 0xbb086u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0bb089  add eax, dword ptr [ebp + 8]
    X86_AT(c, 0xbb089u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 0bb08c  mov dword ptr [0x46808], eax
    X86_AT(c, 0xbb08cu);
    wr32((c.sbase[3] + (uint32_t)(0x46808u)), c.r[0]);
    // 0bb091  mov word ptr [0x4680c], 0x14
    X86_AT(c, 0xbb091u);
    wr16((c.sbase[3] + (uint32_t)(0x4680Cu)), 0x14u);
    // 0bb09a  mov eax, edi
    X86_AT(c, 0xbb09au);
    c.r[0] = c.r[7];
    // 0bb09c  mov word ptr [0x4680e], ax
    X86_AT(c, 0xbb09cu);
    wr16((c.sbase[3] + (uint32_t)(0x4680Eu)), (c.r[0] & 0xFFFFu));
    // 0bb0a2  mov eax, esi
    X86_AT(c, 0xbb0a2u);
    c.r[0] = c.r[6];
    // 0bb0a4  mov word ptr [0x46810], ax
    X86_AT(c, 0xbb0a4u);
    wr16((c.sbase[3] + (uint32_t)(0x46810u)), (c.r[0] & 0xFFFFu));
    // 0bb0aa  lea eax, [edi + 0x1f]
    X86_AT(c, 0xbb0aau);
    c.r[0] = (uint32_t)(c.r[7] + 0x1Fu);
    // 0bb0ad  mov word ptr [0x46812], ax
    X86_AT(c, 0xbb0adu);
    wr16((c.sbase[3] + (uint32_t)(0x46812u)), (c.r[0] & 0xFFFFu));
    // 0bb0b3  lea eax, [esi + 0x1f]
    X86_AT(c, 0xbb0b3u);
    c.r[0] = (uint32_t)(c.r[6] + 0x1Fu);
    // 0bb0b6  mov word ptr [0x46814], ax
    X86_AT(c, 0xbb0b6u);
    wr16((c.sbase[3] + (uint32_t)(0x46814u)), (c.r[0] & 0xFFFFu));
    // 0bb0bc  push 0x46808
    X86_AT(c, 0xbb0bcu);
    { uint32_t v = 0x46808u; push32(c, v); }
    // 0bb0c1  push 0
    X86_AT(c, 0xbb0c1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bb0c3  push 0x46208
    X86_AT(c, 0xbb0c3u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0bb0c8  call 0x5c4
    X86_AT(c, 0xbb0c8u);
    push32(c, 0xbb0cdu); x86_call_known(c, 0x5c4u, f_000005c4); X86_RET(c, 0xbb0cdu);
    X86_TICK(c, 26);
    // 0bb0cd  add esp, 0xc
    X86_AT(c, 0xbb0cdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0bb0d0  pop edi
    X86_AT(c, 0xbb0d0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bb0d1  pop esi
    X86_AT(c, 0xbb0d1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bb0d2  leave 
    X86_AT(c, 0xbb0d2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bb0d3  ret 
    X86_AT(c, 0xbb0d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbb078u, "ran off the end of a function");
}
void f_000bb18c(X86Cpu& c) {
    X86_TICK(c, 34);
    // 0bb18c  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0xbb18cu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0bb190  mov eax, dword ptr [ecx + 0x1e]
    X86_AT(c, 0xbb190u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x1Eu)));
    // 0bb193  mov edx, dword ptr [esp + 8]
    X86_AT(c, 0xbb193u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0bb197  mov dword ptr [edx], eax
    X86_AT(c, 0xbb197u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0bb199  mov eax, dword ptr [ecx + 0x2a]
    X86_AT(c, 0xbb199u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x2Au)));
    // 0bb19c  mov edx, dword ptr [esp + 0xc]
    X86_AT(c, 0xbb19cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 0bb1a0  mov dword ptr [edx], eax
    X86_AT(c, 0xbb1a0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0bb1a2  ret 
    X86_AT(c, 0xbb1a2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbb18cu, "ran off the end of a function");
}
void f_000bb1bc(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0bb1bc  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0xbb1bcu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0bb1c0  movsx eax, word ptr [eax + 0x36]
    X86_AT(c, 0xbb1c0u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x36u)));
    // 0bb1c4  ret 
    X86_AT(c, 0xbb1c4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbb1bcu, "ran off the end of a function");
}
void f_000bb1c8(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0bb1c8  push ebp
    X86_AT(c, 0xbb1c8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bb1c9  mov ebp, esp
    X86_AT(c, 0xbb1c9u);
    c.r[5] = c.r[4];
    // 0bb1cb  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xbb1cbu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0bb1ce  push 2
    X86_AT(c, 0xbb1ceu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0bb1d0  push 0x100
    X86_AT(c, 0xbb1d0u);
    { uint32_t v = 0x100u; push32(c, v); }
    // 0bb1d5  push dword ptr [ebp + 8]
    X86_AT(c, 0xbb1d5u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0bb1d8  call 0xd7ce8
    X86_AT(c, 0xbb1d8u);
    push32(c, 0xbb1ddu); x86_call_known(c, 0xd7ce8u, f_000d7ce8); X86_RET(c, 0xbb1ddu);
    X86_TICK(c, 9);
    // 0bb1dd  add esp, 0x10
    X86_AT(c, 0xbb1ddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0bb1e0  cmp eax, 2
    X86_AT(c, 0xbb1e0u);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 0bb1e3  jge 0xbb1ec
    X86_AT(c, 0xbb1e3u);
    if (x86_cc(c, 13)) { goto L_bb1ec; }
    X86_TICK(c, 9);
    // 0bb1e5  mov eax, 0xffffffff
    X86_AT(c, 0xbb1e5u);
    c.r[0] = 0xFFFFFFFFu;
    // 0bb1ea  jmp 0xbb1ee
    X86_AT(c, 0xbb1eau);
    goto L_bb1ee;
L_bb1ec:
    X86_TICK(c, 2);
    // 0bb1ec  sub eax, eax
    X86_AT(c, 0xbb1ecu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_bb1ee:
    X86_TICK(c, 16);
    // 0bb1ee  leave 
    X86_AT(c, 0xbb1eeu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bb1ef  ret 
    X86_AT(c, 0xbb1efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbb1c8u, "ran off the end of a function");
}
void f_000bb1f0(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0bb1f0  push ebp
    X86_AT(c, 0xbb1f0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bb1f1  mov ebp, esp
    X86_AT(c, 0xbb1f1u);
    c.r[5] = c.r[4];
    // 0bb1f3  sub esp, 0x200
    X86_AT(c, 0xbb1f3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x200u, 0, 4); }
    // 0bb1f9  push ebx
    X86_AT(c, 0xbb1f9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bb1fa  push esi
    X86_AT(c, 0xbb1fau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bb1fb  push edi
    X86_AT(c, 0xbb1fbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bb1fc  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xbb1fcu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0bb1ff  push 0x21b0
    X86_AT(c, 0xbb1ffu);
    { uint32_t v = 0x21B0u; push32(c, v); }
    // 0bb204  push dword ptr [ebp + 8]
    X86_AT(c, 0xbb204u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0bb207  call 0xd7fc4
    X86_AT(c, 0xbb207u);
    push32(c, 0xbb20cu); x86_call_known(c, 0xd7fc4u, f_000d7fc4); X86_RET(c, 0xbb20cu);
    X86_TICK(c, 12);
    // 0bb20c  add esp, 8
    X86_AT(c, 0xbb20cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0bb20f  xchg ebx, eax
    X86_AT(c, 0xbb20fu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0bb210  and ebx, ebx
    X86_AT(c, 0xbb210u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0bb212  jne 0xbb21e
    X86_AT(c, 0xbb212u);
    if (x86_cc(c, 5)) { goto L_bb21e; }
    X86_TICK(c, 9);
    // 0bb214  mov eax, 0xffffffff
    X86_AT(c, 0xbb214u);
    c.r[0] = 0xFFFFFFFFu;
    // 0bb219  jmp 0xbb2bf
    X86_AT(c, 0xbb219u);
    goto L_bb2bf;
L_bb21e:
    X86_TICK(c, 13);
    // 0bb21e  push ebx
    X86_AT(c, 0xbb21eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bb21f  lea eax, [ebp - 0x200]
    X86_AT(c, 0xbb21fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFE00u);
    // 0bb225  push eax
    X86_AT(c, 0xbb225u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb226  call 0xbb1c8
    X86_AT(c, 0xbb226u);
    push32(c, 0xbb22bu); x86_call_known(c, 0xbb1c8u, f_000bb1c8); X86_RET(c, 0xbb22bu);
    X86_TICK(c, 9);
    // 0bb22b  add esp, 8
    X86_AT(c, 0xbb22bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0bb22e  inc eax
    X86_AT(c, 0xbb22eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0bb22f  je 0xbb26d
    X86_AT(c, 0xbb22fu);
    if (x86_cc(c, 4)) { goto L_bb26d; }
    X86_TICK(c, 21);
    // 0bb231  push dword ptr [ebp + 0x18]
    X86_AT(c, 0xbb231u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 0bb234  push dword ptr [ebp + 0x14]
    X86_AT(c, 0xbb234u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))); push32(c, v); }
    // 0bb237  lea eax, [ebp - 0x200]
    X86_AT(c, 0xbb237u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFE00u);
    // 0bb23d  push eax
    X86_AT(c, 0xbb23du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb23e  call 0xbb18c
    X86_AT(c, 0xbb23eu);
    push32(c, 0xbb243u); x86_call_known(c, 0xbb18cu, f_000bb18c); X86_RET(c, 0xbb243u);
    X86_TICK(c, 11);
    // 0bb243  lea eax, [ebp - 0x200]
    X86_AT(c, 0xbb243u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFE00u);
    // 0bb249  push eax
    X86_AT(c, 0xbb249u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb24a  call 0xbb1bc
    X86_AT(c, 0xbb24au);
    push32(c, 0xbb24fu); x86_call_known(c, 0xbb1bcu, f_000bb1bc); X86_RET(c, 0xbb24fu);
    X86_TICK(c, 21);
    // 0bb24f  mov edx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0xbb24fu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0bb252  mov dword ptr [edx], eax
    X86_AT(c, 0xbb252u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0bb254  movzx eax, byte ptr [ebx + 0xe]
    X86_AT(c, 0xbb254u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu)));
    // 0bb258  push eax
    X86_AT(c, 0xbb258u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb259  call 0xd91b7
    X86_AT(c, 0xbb259u);
    push32(c, 0xbb25eu); x86_call_known(c, 0xd91b7u, f_000d91b7); X86_RET(c, 0xbb25eu);
    X86_TICK(c, 14);
    // 0bb25e  xchg esi, eax
    X86_AT(c, 0xbb25eu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0bb25f  sub esi, 0x200
    X86_AT(c, 0xbb25fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x200u, 0, 4); }
    // 0bb265  add esp, 0x14
    X86_AT(c, 0xbb265u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0bb268  cmp esi, 1
    X86_AT(c, 0xbb268u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0bb26b  jge 0xbb27a
    X86_AT(c, 0xbb26bu);
    if (x86_cc(c, 13)) { goto L_bb27a; }
L_bb26d:
    X86_TICK(c, 9);
    // 0bb26d  push ebx
    X86_AT(c, 0xbb26du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bb26e  call 0xd84c0
    X86_AT(c, 0xbb26eu);
    push32(c, 0xbb273u); x86_call_known(c, 0xd84c0u, f_000d84c0); X86_RET(c, 0xbb273u);
    X86_TICK(c, 9);
    // 0bb273  mov eax, 0xffffffff
    X86_AT(c, 0xbb273u);
    c.r[0] = 0xFFFFFFFFu;
    // 0bb278  jmp 0xbb2bc
    X86_AT(c, 0xbb278u);
    goto L_bb2bc;
L_bb27a:
    X86_TICK(c, 7);
    // 0bb27a  cmp edi, esi
    X86_AT(c, 0xbb27au);
    (void)x86_sub(c, c.r[7], c.r[6], 0, 4);
    // 0bb27c  jge 0xbb280
    X86_AT(c, 0xbb27cu);
    if (x86_cc(c, 13)) { goto L_bb280; }
    X86_TICK(c, 2);
    // 0bb27e  mov esi, edi
    X86_AT(c, 0xbb27eu);
    c.r[6] = c.r[7];
L_bb280:
    X86_TICK(c, 18);
    // 0bb280  push ebx
    X86_AT(c, 0xbb280u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bb281  push esi
    X86_AT(c, 0xbb281u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bb282  push 1
    X86_AT(c, 0xbb282u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bb284  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xbb284u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0bb287  call 0xd7ce8
    X86_AT(c, 0xbb287u);
    push32(c, 0xbb28cu); x86_call_known(c, 0xd7ce8u, f_000d7ce8); X86_RET(c, 0xbb28cu);
    X86_TICK(c, 9);
    // 0bb28c  add esp, 0x10
    X86_AT(c, 0xbb28cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0bb28f  cmp esi, eax
    X86_AT(c, 0xbb28fu);
    (void)x86_sub(c, c.r[6], c.r[0], 0, 4);
    // 0bb291  jle 0xbb2b4
    X86_AT(c, 0xbb291u);
    if (x86_cc(c, 14)) { goto L_bb2b4; }
    X86_TICK(c, 9);
    // 0bb293  push 0x21b4
    X86_AT(c, 0xbb293u);
    { uint32_t v = 0x21B4u; push32(c, v); }
    // 0bb298  call 0xbc50c
    X86_AT(c, 0xbb298u);
    push32(c, 0xbb29du); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xbb29du);
    X86_TICK(c, 9);
    // 0bb29d  push 0xa
    X86_AT(c, 0xbb29du);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0bb29f  call 0xbebbc
    X86_AT(c, 0xbb29fu);
    push32(c, 0xbb2a4u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xbb2a4u);
    X86_TICK(c, 9);
    // 0bb2a4  push ebx
    X86_AT(c, 0xbb2a4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bb2a5  call 0xd84c0
    X86_AT(c, 0xbb2a5u);
    push32(c, 0xbb2aau); x86_call_known(c, 0xd84c0u, f_000d84c0); X86_RET(c, 0xbb2aau);
    X86_TICK(c, 11);
    // 0bb2aa  mov eax, 0xffffffff
    X86_AT(c, 0xbb2aau);
    c.r[0] = 0xFFFFFFFFu;
    // 0bb2af  add esp, 0xc
    X86_AT(c, 0xbb2afu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0bb2b2  jmp 0xbb2bf
    X86_AT(c, 0xbb2b2u);
    goto L_bb2bf;
L_bb2b4:
    X86_TICK(c, 9);
    // 0bb2b4  push ebx
    X86_AT(c, 0xbb2b4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bb2b5  call 0xd84c0
    X86_AT(c, 0xbb2b5u);
    push32(c, 0xbb2bau); x86_call_known(c, 0xd84c0u, f_000d84c0); X86_RET(c, 0xbb2bau);
    X86_TICK(c, 2);
    // 0bb2ba  mov eax, esi
    X86_AT(c, 0xbb2bau);
    c.r[0] = c.r[6];
L_bb2bc:
    X86_TICK(c, 2);
    // 0bb2bc  add esp, 4
    X86_AT(c, 0xbb2bcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_bb2bf:
    X86_TICK(c, 28);
    // 0bb2bf  pop edi
    X86_AT(c, 0xbb2bfu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bb2c0  pop esi
    X86_AT(c, 0xbb2c0u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bb2c1  pop ebx
    X86_AT(c, 0xbb2c1u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0bb2c2  leave 
    X86_AT(c, 0xbb2c2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bb2c3  ret 
    X86_AT(c, 0xbb2c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbb1f0u, "ran off the end of a function");
}
void f_000bb2c4(X86Cpu& c) {
    X86_TICK(c, 32);
    // 0bb2c4  push ebp
    X86_AT(c, 0xbb2c4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bb2c5  mov ebp, esp
    X86_AT(c, 0xbb2c5u);
    c.r[5] = c.r[4];
    // 0bb2c7  sub esp, 0x281c
    X86_AT(c, 0xbb2c7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x281Cu, 0, 4); }
    // 0bb2cd  push ebx
    X86_AT(c, 0xbb2cdu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bb2ce  push esi
    X86_AT(c, 0xbb2ceu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bb2cf  push edi
    X86_AT(c, 0xbb2cfu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bb2d0  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xbb2d0u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0bb2d3  mov dword ptr [ebp - 0x18], 0
    X86_AT(c, 0xbb2d3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), 0x0u);
    // 0bb2da  push 0x21d4
    X86_AT(c, 0xbb2dau);
    { uint32_t v = 0x21D4u; push32(c, v); }
    // 0bb2df  push dword ptr [ebp + 8]
    X86_AT(c, 0xbb2dfu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0bb2e2  call 0xd7fc4
    X86_AT(c, 0xbb2e2u);
    push32(c, 0xbb2e7u); x86_call_known(c, 0xd7fc4u, f_000d7fc4); X86_RET(c, 0xbb2e7u);
    X86_TICK(c, 11);
    // 0bb2e7  add esp, 8
    X86_AT(c, 0xbb2e7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0bb2ea  mov dword ptr [ebp - 0x281c], eax
    X86_AT(c, 0xbb2eau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u)), c.r[0]);
    // 0bb2f0  and eax, eax
    X86_AT(c, 0xbb2f0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0bb2f2  je 0xbb5bd
    X86_AT(c, 0xbb2f2u);
    if (x86_cc(c, 4)) { goto L_bb5bd; }
    X86_TICK(c, 16);
    // 0bb2f8  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0xbb2f8u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 0bb2fe  lea eax, [ebp - 0x2818]
    X86_AT(c, 0xbb2feu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 0bb304  push eax
    X86_AT(c, 0xbb304u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb305  call 0xbb1c8
    X86_AT(c, 0xbb305u);
    push32(c, 0xbb30au); x86_call_known(c, 0xbb1c8u, f_000bb1c8); X86_RET(c, 0xbb30au);
    X86_TICK(c, 9);
    // 0bb30a  add esp, 8
    X86_AT(c, 0xbb30au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0bb30d  inc eax
    X86_AT(c, 0xbb30du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0bb30e  je 0xbb52d
    X86_AT(c, 0xbb30eu);
    if (x86_cc(c, 4)) { goto L_bb52d; }
    X86_TICK(c, 19);
    // 0bb314  lea eax, [ebp - 0xc]
    X86_AT(c, 0xbb314u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0bb317  push eax
    X86_AT(c, 0xbb317u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb318  lea ecx, [ebp - 8]
    X86_AT(c, 0xbb318u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0bb31b  push ecx
    X86_AT(c, 0xbb31bu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0bb31c  lea edx, [ebp - 0x2818]
    X86_AT(c, 0xbb31cu);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 0bb322  push edx
    X86_AT(c, 0xbb322u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0bb323  call 0xbb18c
    X86_AT(c, 0xbb323u);
    push32(c, 0xbb328u); x86_call_known(c, 0xbb18cu, f_000bb18c); X86_RET(c, 0xbb328u);
    X86_TICK(c, 11);
    // 0bb328  lea eax, [ebp - 0x2818]
    X86_AT(c, 0xbb328u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 0bb32e  push eax
    X86_AT(c, 0xbb32eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb32f  call 0xbb1bc
    X86_AT(c, 0xbb32fu);
    push32(c, 0xbb334u); x86_call_known(c, 0xbb1bcu, f_000bb1bc); X86_RET(c, 0xbb334u);
    X86_TICK(c, 21);
    // 0bb334  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xbb334u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0bb337  mov eax, dword ptr [ebp - 0x281c]
    X86_AT(c, 0xbb337u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u)));
    // 0bb33d  movzx eax, byte ptr [eax + 0xe]
    X86_AT(c, 0xbb33du);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xEu)));
    // 0bb341  push eax
    X86_AT(c, 0xbb341u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb342  call 0xd91b7
    X86_AT(c, 0xbb342u);
    push32(c, 0xbb347u); x86_call_known(c, 0xd91b7u, f_000d91b7); X86_RET(c, 0xbb347u);
    X86_TICK(c, 14);
    // 0bb347  xchg esi, eax
    X86_AT(c, 0xbb347u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0bb348  sub esi, 0x200
    X86_AT(c, 0xbb348u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x200u, 0, 4); }
    // 0bb34e  add esp, 0x14
    X86_AT(c, 0xbb34eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0bb351  cmp esi, 1
    X86_AT(c, 0xbb351u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0bb354  jl 0xbb52d
    X86_AT(c, 0xbb354u);
    if (x86_cc(c, 12)) { goto L_bb52d; }
    X86_TICK(c, 12);
    // 0bb35a  cmp dword ptr [ebp - 8], 1
    X86_AT(c, 0xbb35au);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x1u, 0, 4);
    // 0bb35e  jl 0xbb52d
    X86_AT(c, 0xbb35eu);
    if (x86_cc(c, 12)) { goto L_bb52d; }
    X86_TICK(c, 12);
    // 0bb364  cmp dword ptr [ebp - 0xc], 1
    X86_AT(c, 0xbb364u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x1u, 0, 4);
    // 0bb368  jl 0xbb52d
    X86_AT(c, 0xbb368u);
    if (x86_cc(c, 12)) { goto L_bb52d; }
    X86_TICK(c, 13);
    // 0bb36e  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xbb36eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0bb371  dec edx
    X86_AT(c, 0xbb371u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0bb372  cmp edx, 0xf
    X86_AT(c, 0xbb372u);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 0bb375  ja 0xbb3d7
    X86_AT(c, 0xbb375u);
    if (x86_cc(c, 7)) { goto L_bb3d7; }
    X86_TICK(c, 7);
    // 0bb377  jmp dword ptr cs:[edx*4 + 0xbb37f]
    X86_AT(c, 0xbb377u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBB37Fu)));
      switch (t) {
      case 0xbb3bfu: goto L_bb3bf;
      case 0xbb3cau: goto L_bb3ca;
      case 0xbb3cfu: goto L_bb3cf;
      case 0xbb3d7u: goto L_bb3d7;
      default: x86_jump(c, t); return; } }
L_bb3bf:
    X86_TICK(c, 20);
    // 0bb3bf  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xbb3bfu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0bb3c2  inc eax
    X86_AT(c, 0xbb3c2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0bb3c3  cdq 
    X86_AT(c, 0xbb3c3u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0bb3c4  sub eax, edx
    X86_AT(c, 0xbb3c4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0bb3c6  sar eax, 1
    X86_AT(c, 0xbb3c6u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0bb3c8  jmp 0xbb3d4
    X86_AT(c, 0xbb3c8u);
    goto L_bb3d4;
L_bb3ca:
    X86_TICK(c, 11);
    // 0bb3ca  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xbb3cau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0bb3cd  jmp 0xbb3d4
    X86_AT(c, 0xbb3cdu);
    goto L_bb3d4;
L_bb3cf:
    X86_TICK(c, 6);
    // 0bb3cf  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xbb3cfu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0bb3d2  add eax, eax
    X86_AT(c, 0xbb3d2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
L_bb3d4:
    X86_TICK(c, 2);
    // 0bb3d4  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xbb3d4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
L_bb3d7:
    X86_TICK(c, 33);
    // 0bb3d7  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xbb3d7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0bb3da  imul eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xbb3dau);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 4);
    // 0bb3de  cmp eax, esi
    X86_AT(c, 0xbb3deu);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 0bb3e0  jge 0xbb3e3
    X86_AT(c, 0xbb3e0u);
    if (x86_cc(c, 13)) { goto L_bb3e3; }
    X86_TICK(c, 3);
    // 0bb3e2  xchg esi, eax
    X86_AT(c, 0xbb3e2u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_bb3e3:
    X86_TICK(c, 33);
    // 0bb3e3  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xbb3e3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0bb3e6  imul eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xbb3e6u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 4);
    // 0bb3ea  cmp eax, esi
    X86_AT(c, 0xbb3eau);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 0bb3ec  jle 0xbb3fc
    X86_AT(c, 0xbb3ecu);
    if (x86_cc(c, 14)) { goto L_bb3fc; }
    X86_TICK(c, 71);
    // 0bb3ee  mov eax, esi
    X86_AT(c, 0xbb3eeu);
    c.r[0] = c.r[6];
    // 0bb3f0  cdq 
    X86_AT(c, 0xbb3f0u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0bb3f1  idiv dword ptr [ebp - 0x10]
    X86_AT(c, 0xbb3f1u);
    x86_idiv(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4, 0xbb3f1u);
    // 0bb3f4  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xbb3f4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0bb3f7  imul eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xbb3f7u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4);
    // 0bb3fb  xchg esi, eax
    X86_AT(c, 0xbb3fbu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_bb3fc:
    X86_TICK(c, 7);
    // 0bb3fc  cmp esi, 0x2800
    X86_AT(c, 0xbb3fcu);
    (void)x86_sub(c, c.r[6], 0x2800u, 0, 4);
    // 0bb402  jg 0xbb492
    X86_AT(c, 0xbb402u);
    if (x86_cc(c, 15)) { goto L_bb492; }
    X86_TICK(c, 22);
    // 0bb408  mov ebx, esi
    X86_AT(c, 0xbb408u);
    c.r[3] = c.r[6];
    // 0bb40a  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0xbb40au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 0bb410  push 1
    X86_AT(c, 0xbb410u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bb412  push ebx
    X86_AT(c, 0xbb412u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bb413  lea eax, [ebp - 0x2818]
    X86_AT(c, 0xbb413u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 0bb419  push eax
    X86_AT(c, 0xbb419u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb41a  call 0xd7ce8
    X86_AT(c, 0xbb41au);
    push32(c, 0xbb41fu); x86_call_known(c, 0xd7ce8u, f_000d7ce8); X86_RET(c, 0xbb41fu);
    X86_TICK(c, 9);
    // 0bb41f  add esp, 0x10
    X86_AT(c, 0xbb41fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0bb422  dec eax
    X86_AT(c, 0xbb422u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0bb423  jge 0xbb42c
    X86_AT(c, 0xbb423u);
    if (x86_cc(c, 13)) { goto L_bb42c; }
    X86_TICK(c, 2);
    // 0bb425  mov dword ptr [ebp - 0x18], 0xffffffff
    X86_AT(c, 0xbb425u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), 0xFFFFFFFFu);
L_bb42c:
    X86_TICK(c, 51);
    // 0bb42c  lea eax, [ebp - 0x2818]
    X86_AT(c, 0xbb42cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 0bb432  mov dword ptr [0x46808], eax
    X86_AT(c, 0xbb432u);
    wr32((c.sbase[3] + (uint32_t)(0x46808u)), c.r[0]);
    // 0bb437  mov word ptr [0x4680c], 0x14
    X86_AT(c, 0xbb437u);
    wr16((c.sbase[3] + (uint32_t)(0x4680Cu)), 0x14u);
    // 0bb440  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0xbb440u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0bb444  mov word ptr [0x4680e], ax
    X86_AT(c, 0xbb444u);
    wr16((c.sbase[3] + (uint32_t)(0x4680Eu)), (c.r[0] & 0xFFFFu));
    // 0bb44a  mov edx, edi
    X86_AT(c, 0xbb44au);
    c.r[2] = c.r[7];
    // 0bb44c  mov word ptr [0x46810], dx
    X86_AT(c, 0xbb44cu);
    wr16((c.sbase[3] + (uint32_t)(0x46810u)), (c.r[2] & 0xFFFFu));
    // 0bb453  add ax, word ptr [ebp - 8]
    X86_AT(c, 0xbb453u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 2)); }
    // 0bb457  dec eax
    X86_AT(c, 0xbb457u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0bb458  mov word ptr [0x46812], ax
    X86_AT(c, 0xbb458u);
    wr16((c.sbase[3] + (uint32_t)(0x46812u)), (c.r[0] & 0xFFFFu));
    // 0bb45e  mov eax, edi
    X86_AT(c, 0xbb45eu);
    c.r[0] = c.r[7];
    // 0bb460  add ax, word ptr [ebp - 0xc]
    X86_AT(c, 0xbb460u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 2)); }
    // 0bb464  dec eax
    X86_AT(c, 0xbb464u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0bb465  mov word ptr [0x46814], ax
    X86_AT(c, 0xbb465u);
    wr16((c.sbase[3] + (uint32_t)(0x46814u)), (c.r[0] & 0xFFFFu));
    // 0bb46b  push 0x46808
    X86_AT(c, 0xbb46bu);
    { uint32_t v = 0x46808u; push32(c, v); }
    // 0bb470  push 0
    X86_AT(c, 0xbb470u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bb472  push 0x46208
    X86_AT(c, 0xbb472u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0bb477  call 0x5c4
    X86_AT(c, 0xbb477u);
    push32(c, 0xbb47cu); x86_call_known(c, 0x5c4u, f_000005c4); X86_RET(c, 0xbb47cu);
    X86_TICK(c, 12);
    // 0bb47c  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0xbb47cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 0bb482  call 0xd84c0
    X86_AT(c, 0xbb482u);
    push32(c, 0xbb487u); x86_call_known(c, 0xd84c0u, f_000d84c0); X86_RET(c, 0xbb487u);
    X86_TICK(c, 13);
    // 0bb487  mov eax, dword ptr [ebp - 0x18]
    X86_AT(c, 0xbb487u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 0bb48a  add esp, 0x10
    X86_AT(c, 0xbb48au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0bb48d  jmp 0xbb5c6
    X86_AT(c, 0xbb48du);
    goto L_bb5c6;
L_bb492:
    X86_TICK(c, 93);
    // 0bb492  mov eax, 0x2800
    X86_AT(c, 0xbb492u);
    c.r[0] = 0x2800u;
    // 0bb497  cdq 
    X86_AT(c, 0xbb497u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0bb498  idiv dword ptr [ebp - 0x10]
    X86_AT(c, 0xbb498u);
    x86_idiv(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4, 0xbb498u);
    // 0bb49b  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xbb49bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0bb49e  imul eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xbb49eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4);
    // 0bb4a2  xchg ebx, eax
    X86_AT(c, 0xbb4a2u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0bb4a3  lea eax, [ebp - 0x2818]
    X86_AT(c, 0xbb4a3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 0bb4a9  mov dword ptr [0x46808], eax
    X86_AT(c, 0xbb4a9u);
    wr32((c.sbase[3] + (uint32_t)(0x46808u)), c.r[0]);
    // 0bb4ae  mov word ptr [0x4680c], 0x14
    X86_AT(c, 0xbb4aeu);
    wr16((c.sbase[3] + (uint32_t)(0x4680Cu)), 0x14u);
    // 0bb4b7  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0xbb4b7u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0bb4bb  mov word ptr [0x4680e], ax
    X86_AT(c, 0xbb4bbu);
    wr16((c.sbase[3] + (uint32_t)(0x4680Eu)), (c.r[0] & 0xFFFFu));
    // 0bb4c1  add ax, word ptr [ebp - 8]
    X86_AT(c, 0xbb4c1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 2)); }
    // 0bb4c5  dec eax
    X86_AT(c, 0xbb4c5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0bb4c6  mov word ptr [0x46812], ax
    X86_AT(c, 0xbb4c6u);
    wr16((c.sbase[3] + (uint32_t)(0x46812u)), (c.r[0] & 0xFFFFu));
L_bb4cc:
    X86_TICK(c, 7);
    // 0bb4cc  cmp ebx, esi
    X86_AT(c, 0xbb4ccu);
    (void)x86_sub(c, c.r[3], c.r[6], 0, 4);
    // 0bb4ce  jge 0xbb528
    X86_AT(c, 0xbb4ceu);
    if (x86_cc(c, 13)) { goto L_bb528; }
    X86_TICK(c, 20);
    // 0bb4d0  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0xbb4d0u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 0bb4d6  push 1
    X86_AT(c, 0xbb4d6u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bb4d8  push ebx
    X86_AT(c, 0xbb4d8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bb4d9  lea eax, [ebp - 0x2818]
    X86_AT(c, 0xbb4d9u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 0bb4df  push eax
    X86_AT(c, 0xbb4dfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb4e0  call 0xd7ce8
    X86_AT(c, 0xbb4e0u);
    push32(c, 0xbb4e5u); x86_call_known(c, 0xd7ce8u, f_000d7ce8); X86_RET(c, 0xbb4e5u);
    X86_TICK(c, 9);
    // 0bb4e5  add esp, 0x10
    X86_AT(c, 0xbb4e5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0bb4e8  dec eax
    X86_AT(c, 0xbb4e8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0bb4e9  jge 0xbb4f2
    X86_AT(c, 0xbb4e9u);
    if (x86_cc(c, 13)) { goto L_bb4f2; }
    X86_TICK(c, 2);
    // 0bb4eb  mov dword ptr [ebp - 0x18], 0xffffffff
    X86_AT(c, 0xbb4ebu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), 0xFFFFFFFFu);
L_bb4f2:
    X86_TICK(c, 29);
    // 0bb4f2  mov eax, edi
    X86_AT(c, 0xbb4f2u);
    c.r[0] = c.r[7];
    // 0bb4f4  mov word ptr [0x46810], ax
    X86_AT(c, 0xbb4f4u);
    wr16((c.sbase[3] + (uint32_t)(0x46810u)), (c.r[0] & 0xFFFFu));
    // 0bb4fa  mov eax, edi
    X86_AT(c, 0xbb4fau);
    c.r[0] = c.r[7];
    // 0bb4fc  add ax, word ptr [ebp - 0x14]
    X86_AT(c, 0xbb4fcu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 0, 2)); }
    // 0bb500  dec eax
    X86_AT(c, 0xbb500u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0bb501  mov word ptr [0x46814], ax
    X86_AT(c, 0xbb501u);
    wr16((c.sbase[3] + (uint32_t)(0x46814u)), (c.r[0] & 0xFFFFu));
    // 0bb507  push 0x46808
    X86_AT(c, 0xbb507u);
    { uint32_t v = 0x46808u; push32(c, v); }
    // 0bb50c  push 0
    X86_AT(c, 0xbb50cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bb50e  push 0x46208
    X86_AT(c, 0xbb50eu);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0bb513  call 0x5c4
    X86_AT(c, 0xbb513u);
    push32(c, 0xbb518u); x86_call_known(c, 0x5c4u, f_000005c4); X86_RET(c, 0xbb518u);
    X86_TICK(c, 22);
    // 0bb518  add edi, dword ptr [ebp - 0x14]
    X86_AT(c, 0xbb518u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 0, 4); }
    // 0bb51b  sub esi, ebx
    X86_AT(c, 0xbb51bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0bb51d  add esp, 0xc
    X86_AT(c, 0xbb51du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0bb520  cmp dword ptr [ebp - 0x18], 0xffffffff
    X86_AT(c, 0xbb520u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))), 0xFFFFFFFFu, 0, 4);
    // 0bb524  jne 0xbb4cc
    X86_AT(c, 0xbb524u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xbb4ccu); goto L_bb4cc; }
    X86_TICK(c, 7);
    // 0bb526  jmp 0xbb52d
    X86_AT(c, 0xbb526u);
    goto L_bb52d;
L_bb528:
    X86_TICK(c, 11);
    // 0bb528  cmp esi, dword ptr [ebp - 0x10]
    X86_AT(c, 0xbb528u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0, 4);
    // 0bb52b  jge 0xbb545
    X86_AT(c, 0xbb52bu);
    if (x86_cc(c, 13)) { goto L_bb545; }
L_bb52d:
    X86_TICK(c, 12);
    // 0bb52d  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0xbb52du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 0bb533  call 0xd84c0
    X86_AT(c, 0xbb533u);
    push32(c, 0xbb538u); x86_call_known(c, 0xd84c0u, f_000d84c0); X86_RET(c, 0xbb538u);
    X86_TICK(c, 11);
    // 0bb538  mov eax, 0xffffffff
    X86_AT(c, 0xbb538u);
    c.r[0] = 0xFFFFFFFFu;
    // 0bb53d  add esp, 4
    X86_AT(c, 0xbb53du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0bb540  jmp 0xbb5c6
    X86_AT(c, 0xbb540u);
    goto L_bb5c6;
L_bb545:
    X86_TICK(c, 88);
    // 0bb545  mov eax, esi
    X86_AT(c, 0xbb545u);
    c.r[0] = c.r[6];
    // 0bb547  cdq 
    X86_AT(c, 0xbb547u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0bb548  idiv dword ptr [ebp - 0x10]
    X86_AT(c, 0xbb548u);
    x86_idiv(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4, 0xbb548u);
    // 0bb54b  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xbb54bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0bb54e  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0xbb54eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 0bb554  push 1
    X86_AT(c, 0xbb554u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bb556  imul eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xbb556u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4);
    // 0bb55a  push eax
    X86_AT(c, 0xbb55au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb55b  lea eax, [ebp - 0x2818]
    X86_AT(c, 0xbb55bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 0bb561  push eax
    X86_AT(c, 0xbb561u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb562  call 0xd7ce8
    X86_AT(c, 0xbb562u);
    push32(c, 0xbb567u); x86_call_known(c, 0xd7ce8u, f_000d7ce8); X86_RET(c, 0xbb567u);
    X86_TICK(c, 9);
    // 0bb567  add esp, 0x10
    X86_AT(c, 0xbb567u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0bb56a  dec eax
    X86_AT(c, 0xbb56au);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0bb56b  jge 0xbb574
    X86_AT(c, 0xbb56bu);
    if (x86_cc(c, 13)) { goto L_bb574; }
    X86_TICK(c, 2);
    // 0bb56d  mov dword ptr [ebp - 0x18], 0xffffffff
    X86_AT(c, 0xbb56du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), 0xFFFFFFFFu);
L_bb574:
    X86_TICK(c, 35);
    // 0bb574  mov eax, edi
    X86_AT(c, 0xbb574u);
    c.r[0] = c.r[7];
    // 0bb576  mov word ptr [0x46810], ax
    X86_AT(c, 0xbb576u);
    wr16((c.sbase[3] + (uint32_t)(0x46810u)), (c.r[0] & 0xFFFFu));
    // 0bb57c  mov eax, edi
    X86_AT(c, 0xbb57cu);
    c.r[0] = c.r[7];
    // 0bb57e  add ax, word ptr [ebp - 0x14]
    X86_AT(c, 0xbb57eu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 0, 2)); }
    // 0bb582  dec eax
    X86_AT(c, 0xbb582u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0bb583  mov word ptr [0x46814], ax
    X86_AT(c, 0xbb583u);
    wr16((c.sbase[3] + (uint32_t)(0x46814u)), (c.r[0] & 0xFFFFu));
    // 0bb589  mov ax, word ptr [ebp - 0x14]
    X86_AT(c, 0xbb589u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))));
    // 0bb58d  mov word ptr [0x46818], ax
    X86_AT(c, 0xbb58du);
    wr16((c.sbase[3] + (uint32_t)(0x46818u)), (c.r[0] & 0xFFFFu));
    // 0bb593  push 0x46808
    X86_AT(c, 0xbb593u);
    { uint32_t v = 0x46808u; push32(c, v); }
    // 0bb598  push 0
    X86_AT(c, 0xbb598u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bb59a  push 0x46208
    X86_AT(c, 0xbb59au);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0bb59f  call 0x5c4
    X86_AT(c, 0xbb59fu);
    push32(c, 0xbb5a4u); x86_call_known(c, 0x5c4u, f_000005c4); X86_RET(c, 0xbb5a4u);
    X86_TICK(c, 12);
    // 0bb5a4  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0xbb5a4u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 0bb5aa  call 0xd84c0
    X86_AT(c, 0xbb5aau);
    push32(c, 0xbb5afu); x86_call_known(c, 0xd84c0u, f_000d84c0); X86_RET(c, 0xbb5afu);
    X86_TICK(c, 35);
    // 0bb5af  add esp, 0x10
    X86_AT(c, 0xbb5afu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0bb5b2  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xbb5b2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0bb5b5  imul eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xbb5b5u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 4);
    // 0bb5b9  cmp eax, esi
    X86_AT(c, 0xbb5b9u);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 0bb5bb  jge 0xbb5c4
    X86_AT(c, 0xbb5bbu);
    if (x86_cc(c, 13)) { goto L_bb5c4; }
L_bb5bd:
    X86_TICK(c, 9);
    // 0bb5bd  mov eax, 0xffffffff
    X86_AT(c, 0xbb5bdu);
    c.r[0] = 0xFFFFFFFFu;
    // 0bb5c2  jmp 0xbb5c6
    X86_AT(c, 0xbb5c2u);
    goto L_bb5c6;
L_bb5c4:
    X86_TICK(c, 2);
    // 0bb5c4  sub eax, eax
    X86_AT(c, 0xbb5c4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_bb5c6:
    X86_TICK(c, 28);
    // 0bb5c6  pop edi
    X86_AT(c, 0xbb5c6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bb5c7  pop esi
    X86_AT(c, 0xbb5c7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bb5c8  pop ebx
    X86_AT(c, 0xbb5c8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0bb5c9  leave 
    X86_AT(c, 0xbb5c9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bb5ca  ret 
    X86_AT(c, 0xbb5cau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbb2c4u, "ran off the end of a function");
}
void f_000bb5c6(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0bb5c6  pop edi
    X86_AT(c, 0xbb5c6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bb5c7  pop esi
    X86_AT(c, 0xbb5c7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bb5c8  pop ebx
    X86_AT(c, 0xbb5c8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0bb5c9  leave 
    X86_AT(c, 0xbb5c9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bb5ca  ret 
    X86_AT(c, 0xbb5cau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbb5c6u, "ran off the end of a function");
}
void f_000bb5cc(X86Cpu& c) {
    X86_TICK(c, 56);
    // 0bb5cc  push ebp
    X86_AT(c, 0xbb5ccu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bb5cd  mov ebp, esp
    X86_AT(c, 0xbb5cdu);
    c.r[5] = c.r[4];
    // 0bb5cf  push ebx
    X86_AT(c, 0xbb5cfu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bb5d0  push esi
    X86_AT(c, 0xbb5d0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bb5d1  push edi
    X86_AT(c, 0xbb5d1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bb5d2  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xbb5d2u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0bb5d5  mov esi, dword ptr [ebp + 0x14]
    X86_AT(c, 0xbb5d5u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0bb5d8  mov ebx, dword ptr [ebp + 0x20]
    X86_AT(c, 0xbb5d8u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)));
    // 0bb5db  lea eax, [esi - 6]
    X86_AT(c, 0xbb5dbu);
    c.r[0] = (uint32_t)(c.r[6] + 0xFFFFFFFAu);
    // 0bb5de  cdq 
    X86_AT(c, 0xbb5deu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0bb5df  sub eax, edx
    X86_AT(c, 0xbb5dfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0bb5e1  sar eax, 1
    X86_AT(c, 0xbb5e1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0bb5e3  cdq 
    X86_AT(c, 0xbb5e3u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0bb5e4  sub eax, edx
    X86_AT(c, 0xbb5e4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0bb5e6  sar eax, 1
    X86_AT(c, 0xbb5e6u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0bb5e8  cdq 
    X86_AT(c, 0xbb5e8u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0bb5e9  sub eax, edx
    X86_AT(c, 0xbb5e9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0bb5eb  sar eax, 1
    X86_AT(c, 0xbb5ebu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0bb5ed  cmp eax, dword ptr [ebp + 0x1c]
    X86_AT(c, 0xbb5edu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu))), 0, 4);
    // 0bb5f0  jge 0xbb5f5
    X86_AT(c, 0xbb5f0u);
    if (x86_cc(c, 13)) { goto L_bb5f5; }
    X86_TICK(c, 2);
    // 0bb5f2  mov dword ptr [ebp + 0x1c], eax
    X86_AT(c, 0xbb5f2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)), c.r[0]);
L_bb5f5:
    X86_TICK(c, 57);
    // 0bb5f5  mov eax, dword ptr [ebp + 0x18]
    X86_AT(c, 0xbb5f5u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0bb5f8  sub eax, 4
    X86_AT(c, 0xbb5f8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x4u, 0, 4); }
    // 0bb5fb  cdq 
    X86_AT(c, 0xbb5fbu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0bb5fc  mov ecx, 0x10
    X86_AT(c, 0xbb5fcu);
    c.r[1] = 0x10u;
    // 0bb601  idiv ecx
    X86_AT(c, 0xbb601u);
    x86_idiv(c, c.r[1], 4, 0xbb601u);
    // 0bb603  cmp eax, ebx
    X86_AT(c, 0xbb603u);
    (void)x86_sub(c, c.r[0], c.r[3], 0, 4);
    // 0bb605  jge 0xbb608
    X86_AT(c, 0xbb605u);
    if (x86_cc(c, 13)) { goto L_bb608; }
    X86_TICK(c, 3);
    // 0bb607  xchg ebx, eax
    X86_AT(c, 0xbb607u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
L_bb608:
    X86_TICK(c, 100);
    // 0bb608  mov eax, 0x46200
    X86_AT(c, 0xbb608u);
    c.r[0] = 0x46200u;
    // 0bb60d  lea edx, [edi + edi*2]
    X86_AT(c, 0xbb60du);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0bb610  lea ecx, [edx + edx*8]
    X86_AT(c, 0xbb610u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0bb613  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xbb613u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0bb616  mov byte ptr [eax + ecx*1 + 0x714], 0xff
    X86_AT(c, 0xbb616u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x714u)), 0xFFu);
    // 0bb61e  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xbb61eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0bb621  mov dword ptr [eax + ecx*1 + 0x715], edx
    X86_AT(c, 0xbb621u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x715u)), c.r[2]);
    // 0bb628  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xbb628u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0bb62b  mov dword ptr [eax + ecx*1 + 0x719], edx
    X86_AT(c, 0xbb62bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x719u)), c.r[2]);
    // 0bb632  mov dword ptr [eax + ecx*1 + 0x71d], esi
    X86_AT(c, 0xbb632u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x71Du)), c.r[6]);
    // 0bb639  mov edx, dword ptr [ebp + 0x18]
    X86_AT(c, 0xbb639u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0bb63c  mov dword ptr [eax + ecx*1 + 0x721], edx
    X86_AT(c, 0xbb63cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x721u)), c.r[2]);
    // 0bb643  mov edx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0xbb643u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0bb646  mov dword ptr [eax + ecx*1 + 0x725], edx
    X86_AT(c, 0xbb646u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x725u)), c.r[2]);
    // 0bb64d  mov dword ptr [eax + ecx*1 + 0x729], ebx
    X86_AT(c, 0xbb64du);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x729u)), c.r[3]);
    // 0bb654  sub edx, edx
    X86_AT(c, 0xbb654u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0bb656  mov dword ptr [eax + ecx*1 + 0x72d], edx
    X86_AT(c, 0xbb656u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x72Du)), c.r[2]);
    // 0bb65d  mov dword ptr [eax + ecx*1 + 0x731], edx
    X86_AT(c, 0xbb65du);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x731u)), c.r[2]);
    // 0bb664  mov edx, 0xffffffff
    X86_AT(c, 0xbb664u);
    c.r[2] = 0xFFFFFFFFu;
    // 0bb669  mov dword ptr [eax + ecx*1 + 0x735], edx
    X86_AT(c, 0xbb669u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x735u)), c.r[2]);
    // 0bb670  mov edx, dword ptr [ebp + 0x24]
    X86_AT(c, 0xbb670u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u)));
    // 0bb673  mov dword ptr [eax + ecx*1 + 0x739], edx
    X86_AT(c, 0xbb673u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x739u)), c.r[2]);
    // 0bb67a  mov dword ptr [eax + ecx*1 + 0x73d], 0
    X86_AT(c, 0xbb67au);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x73Du)), 0x0u);
    // 0bb685  mov edx, dword ptr [ebp + 0x28]
    X86_AT(c, 0xbb685u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x28u)));
    // 0bb688  mov dword ptr [eax + ecx*1 + 0x741], edx
    X86_AT(c, 0xbb688u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x741u)), c.r[2]);
    // 0bb68f  mov edx, dword ptr [ebp + 0x2c]
    X86_AT(c, 0xbb68fu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x2Cu)));
    // 0bb692  mov dword ptr [eax + ecx*1 + 0x745], edx
    X86_AT(c, 0xbb692u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x745u)), c.r[2]);
    // 0bb699  mov dword ptr [eax + ecx*1 + 0x749], 0xffffffff
    X86_AT(c, 0xbb699u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x749u)), 0xFFFFFFFFu);
    // 0bb6a4  lea eax, [eax + ecx*1 + 0x714]
    X86_AT(c, 0xbb6a4u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[1] + 0x714u);
    // 0bb6ab  pop edi
    X86_AT(c, 0xbb6abu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bb6ac  pop esi
    X86_AT(c, 0xbb6acu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bb6ad  pop ebx
    X86_AT(c, 0xbb6adu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0bb6ae  leave 
    X86_AT(c, 0xbb6aeu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bb6af  ret 
    X86_AT(c, 0xbb6afu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbb5ccu, "ran off the end of a function");
}
void f_000bb6b0(X86Cpu& c) {
    X86_TICK(c, 38);
    // 0bb6b0  push ebp
    X86_AT(c, 0xbb6b0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bb6b1  mov ebp, esp
    X86_AT(c, 0xbb6b1u);
    c.r[5] = c.r[4];
    // 0bb6b3  push ebx
    X86_AT(c, 0xbb6b3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bb6b4  push esi
    X86_AT(c, 0xbb6b4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bb6b5  push edi
    X86_AT(c, 0xbb6b5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bb6b6  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xbb6b6u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0bb6b9  mov eax, 0x46200
    X86_AT(c, 0xbb6b9u);
    c.r[0] = 0x46200u;
    // 0bb6be  lea edx, [edi + edi*2]
    X86_AT(c, 0xbb6beu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0bb6c1  lea ecx, [edx + edx*8]
    X86_AT(c, 0xbb6c1u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0bb6c4  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xbb6c4u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0bb6c7  push dword ptr [eax + ecx*1 + 0x739]
    X86_AT(c, 0xbb6c7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x739u))); push32(c, v); }
    // 0bb6ce  mov ebx, eax
    X86_AT(c, 0xbb6ceu);
    c.r[3] = c.r[0];
    // 0bb6d0  mov esi, ecx
    X86_AT(c, 0xbb6d0u);
    c.r[6] = c.r[1];
    // 0bb6d2  call 0xba51c
    X86_AT(c, 0xbb6d2u);
    push32(c, 0xbb6d7u); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xbb6d7u);
    X86_TICK(c, 14);
    // 0bb6d7  add esp, 4
    X86_AT(c, 0xbb6d7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0bb6da  cmp dword ptr [ebx + esi*1 + 0x749], 0xffffffff
    X86_AT(c, 0xbb6dau);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[6] + 0x749u))), 0xFFFFFFFFu, 0, 4);
    // 0bb6e2  jne 0xbb6f3
    X86_AT(c, 0xbb6e2u);
    if (x86_cc(c, 5)) { goto L_bb6f3; }
    X86_TICK(c, 12);
    // 0bb6e4  push dword ptr [ebx + esi*1 + 0x745]
    X86_AT(c, 0xbb6e4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[6] + 0x745u))); push32(c, v); }
    // 0bb6eb  call 0xba534
    X86_AT(c, 0xbb6ebu);
    push32(c, 0xbb6f0u); x86_call_known(c, 0xba534u, f_000ba534); X86_RET(c, 0xbb6f0u);
    X86_TICK(c, 2);
    // 0bb6f0  add esp, 4
    X86_AT(c, 0xbb6f0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_bb6f3:
    X86_TICK(c, 18);
    // 0bb6f3  lea eax, [edi + edi*2]
    X86_AT(c, 0xbb6f3u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0bb6f6  lea edx, [eax + eax*8]
    X86_AT(c, 0xbb6f6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0bb6f9  lea edx, [eax + edx*2]
    X86_AT(c, 0xbb6f9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0bb6fc  push dword ptr [edx + 0x4693d]
    X86_AT(c, 0xbb6fcu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4693Du))); push32(c, v); }
    // 0bb702  call 0xba5e4
    X86_AT(c, 0xbb702u);
    push32(c, 0xbb707u); x86_call_known(c, 0xba5e4u, f_000ba5e4); X86_RET(c, 0xbb707u);
    X86_TICK(c, 30);
    // 0bb707  add esp, 4
    X86_AT(c, 0xbb707u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0bb70a  pop edi
    X86_AT(c, 0xbb70au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bb70b  pop esi
    X86_AT(c, 0xbb70bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bb70c  pop ebx
    X86_AT(c, 0xbb70cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0bb70d  leave 
    X86_AT(c, 0xbb70du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bb70e  ret 
    X86_AT(c, 0xbb70eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbb6b0u, "ran off the end of a function");
}
void f_000bb710(X86Cpu& c) {
    X86_TICK(c, 74);
    // 0bb710  push ebp
    X86_AT(c, 0xbb710u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bb711  mov ebp, esp
    X86_AT(c, 0xbb711u);
    c.r[5] = c.r[4];
    // 0bb713  push edi
    X86_AT(c, 0xbb713u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bb714  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xbb714u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0bb717  lea eax, [eax + eax*2]
    X86_AT(c, 0xbb717u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0bb71a  lea edx, [eax + eax*8]
    X86_AT(c, 0xbb71au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0bb71d  lea edx, [eax + edx*2]
    X86_AT(c, 0xbb71du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0bb720  lea edi, [edx + 0x46914]
    X86_AT(c, 0xbb720u);
    c.r[7] = (uint32_t)(c.r[2] + 0x46914u);
    // 0bb726  push dword ptr [edi + 0x31]
    X86_AT(c, 0xbb726u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x31u))); push32(c, v); }
    // 0bb729  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xbb729u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0bb72c  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0xbb72cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 0bb72f  sub eax, 2
    X86_AT(c, 0xbb72fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0bb732  push eax
    X86_AT(c, 0xbb732u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb733  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xbb733u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0bb736  add eax, dword ptr [edi + 9]
    X86_AT(c, 0xbb736u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 0bb739  sub eax, 2
    X86_AT(c, 0xbb739u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0bb73c  push eax
    X86_AT(c, 0xbb73cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb73d  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xbb73du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0bb740  inc eax
    X86_AT(c, 0xbb740u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0bb741  push eax
    X86_AT(c, 0xbb741u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb742  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xbb742u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0bb745  inc eax
    X86_AT(c, 0xbb745u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0bb746  push eax
    X86_AT(c, 0xbb746u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb747  call 0xbac18
    X86_AT(c, 0xbb747u);
    push32(c, 0xbb74cu); x86_call_known(c, 0xbac18u, f_000bac18); X86_RET(c, 0xbb74cu);
    X86_TICK(c, 12);
    // 0bb74c  push dword ptr [edi + 0x2d]
    X86_AT(c, 0xbb74cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Du))); push32(c, v); }
    // 0bb74f  call 0xba51c
    X86_AT(c, 0xbb74fu);
    push32(c, 0xbb754u); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xbb754u);
    X86_TICK(c, 51);
    // 0bb754  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xbb754u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0bb757  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0xbb757u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 0bb75a  sub eax, 2
    X86_AT(c, 0xbb75au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0bb75d  push eax
    X86_AT(c, 0xbb75du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb75e  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xbb75eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0bb761  add eax, dword ptr [edi + 9]
    X86_AT(c, 0xbb761u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 0bb764  sub eax, 2
    X86_AT(c, 0xbb764u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0bb767  push eax
    X86_AT(c, 0xbb767u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb768  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xbb768u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0bb76b  inc eax
    X86_AT(c, 0xbb76bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0bb76c  push eax
    X86_AT(c, 0xbb76cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb76d  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xbb76du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0bb770  inc eax
    X86_AT(c, 0xbb770u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0bb771  push eax
    X86_AT(c, 0xbb771u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb772  call 0xbabb4
    X86_AT(c, 0xbb772u);
    push32(c, 0xbb777u); x86_call_known(c, 0xbabb4u, f_000babb4); X86_RET(c, 0xbb777u);
    X86_TICK(c, 39);
    // 0bb777  push dword ptr [edi + 5]
    X86_AT(c, 0xbb777u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))); push32(c, v); }
    // 0bb77a  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xbb77au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0bb77d  add eax, dword ptr [edi + 9]
    X86_AT(c, 0xbb77du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 0bb780  sub eax, 3
    X86_AT(c, 0xbb780u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0bb783  push eax
    X86_AT(c, 0xbb783u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb784  push dword ptr [edi + 5]
    X86_AT(c, 0xbb784u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))); push32(c, v); }
    // 0bb787  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xbb787u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0bb78a  add eax, 2
    X86_AT(c, 0xbb78au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0bb78d  push eax
    X86_AT(c, 0xbb78du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb78e  call 0xbaa94
    X86_AT(c, 0xbb78eu);
    push32(c, 0xbb793u); x86_call_known(c, 0xbaa94u, f_000baa94); X86_RET(c, 0xbb793u);
    X86_TICK(c, 45);
    // 0bb793  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xbb793u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0bb796  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0xbb796u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 0bb799  sub eax, 3
    X86_AT(c, 0xbb799u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0bb79c  push eax
    X86_AT(c, 0xbb79cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb79d  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xbb79du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0bb7a0  add eax, dword ptr [edi + 9]
    X86_AT(c, 0xbb7a0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 0bb7a3  dec eax
    X86_AT(c, 0xbb7a3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0bb7a4  push eax
    X86_AT(c, 0xbb7a4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb7a5  mov edx, dword ptr [edi + 5]
    X86_AT(c, 0xbb7a5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0bb7a8  add edx, 2
    X86_AT(c, 0xbb7a8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x2u, 0, 4); }
    // 0bb7ab  push edx
    X86_AT(c, 0xbb7abu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0bb7ac  push eax
    X86_AT(c, 0xbb7acu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb7ad  call 0xbaa94
    X86_AT(c, 0xbb7adu);
    push32(c, 0xbb7b2u); x86_call_known(c, 0xbaa94u, f_000baa94); X86_RET(c, 0xbb7b2u);
    X86_TICK(c, 47);
    // 0bb7b2  add esp, 0x48
    X86_AT(c, 0xbb7b2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x48u, 0, 4); }
    // 0bb7b5  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xbb7b5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0bb7b8  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0xbb7b8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 0bb7bb  dec eax
    X86_AT(c, 0xbb7bbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0bb7bc  push eax
    X86_AT(c, 0xbb7bcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb7bd  mov edx, dword ptr [edi + 1]
    X86_AT(c, 0xbb7bdu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0bb7c0  add edx, dword ptr [edi + 9]
    X86_AT(c, 0xbb7c0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 0bb7c3  sub edx, 3
    X86_AT(c, 0xbb7c3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0bb7c6  push edx
    X86_AT(c, 0xbb7c6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0bb7c7  push eax
    X86_AT(c, 0xbb7c7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb7c8  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xbb7c8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0bb7cb  add eax, 2
    X86_AT(c, 0xbb7cbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0bb7ce  push eax
    X86_AT(c, 0xbb7ceu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb7cf  call 0xbaa94
    X86_AT(c, 0xbb7cfu);
    push32(c, 0xbb7d4u); x86_call_known(c, 0xbaa94u, f_000baa94); X86_RET(c, 0xbb7d4u);
    X86_TICK(c, 41);
    // 0bb7d4  add esp, 0x10
    X86_AT(c, 0xbb7d4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0bb7d7  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xbb7d7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0bb7da  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0xbb7dau);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 0bb7dd  sub eax, 3
    X86_AT(c, 0xbb7ddu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0bb7e0  push eax
    X86_AT(c, 0xbb7e0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb7e1  push dword ptr [edi + 1]
    X86_AT(c, 0xbb7e1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))); push32(c, v); }
    // 0bb7e4  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xbb7e4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0bb7e7  add eax, 2
    X86_AT(c, 0xbb7e7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0bb7ea  push eax
    X86_AT(c, 0xbb7eau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb7eb  push dword ptr [edi + 1]
    X86_AT(c, 0xbb7ebu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))); push32(c, v); }
    // 0bb7ee  call 0xbaa94
    X86_AT(c, 0xbb7eeu);
    push32(c, 0xbb7f3u); x86_call_known(c, 0xbaa94u, f_000baa94); X86_RET(c, 0xbb7f3u);
    X86_TICK(c, 24);
    // 0bb7f3  mov byte ptr [edi], 0
    X86_AT(c, 0xbb7f3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 0bb7f6  add esp, 0x10
    X86_AT(c, 0xbb7f6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0bb7f9  pop edi
    X86_AT(c, 0xbb7f9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bb7fa  leave 
    X86_AT(c, 0xbb7fau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bb7fb  ret 
    X86_AT(c, 0xbb7fbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbb710u, "ran off the end of a function");
}
void f_000bb7fc(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0bb7fc  push ebp
    X86_AT(c, 0xbb7fcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bb7fd  mov ebp, esp
    X86_AT(c, 0xbb7fdu);
    c.r[5] = c.r[4];
    // 0bb7ff  push edi
    X86_AT(c, 0xbb7ffu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bb800  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xbb800u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0bb803  lea eax, [eax + eax*2]
    X86_AT(c, 0xbb803u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0bb806  lea edx, [eax + eax*8]
    X86_AT(c, 0xbb806u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0bb809  lea edx, [eax + edx*2]
    X86_AT(c, 0xbb809u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0bb80c  lea edi, [edx + 0x46914]
    X86_AT(c, 0xbb80cu);
    c.r[7] = (uint32_t)(c.r[2] + 0x46914u);
    // 0bb812  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xbb812u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0bb815  call 0xba51c
    X86_AT(c, 0xbb815u);
    push32(c, 0xbb81au); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xbb81au);
    X86_TICK(c, 51);
    // 0bb81a  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xbb81au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0bb81d  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0xbb81du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 0bb820  sub eax, 2
    X86_AT(c, 0xbb820u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0bb823  push eax
    X86_AT(c, 0xbb823u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb824  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xbb824u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0bb827  add eax, dword ptr [edi + 9]
    X86_AT(c, 0xbb827u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 0bb82a  sub eax, 2
    X86_AT(c, 0xbb82au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0bb82d  push eax
    X86_AT(c, 0xbb82du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb82e  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xbb82eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0bb831  inc eax
    X86_AT(c, 0xbb831u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0bb832  push eax
    X86_AT(c, 0xbb832u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb833  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xbb833u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0bb836  inc eax
    X86_AT(c, 0xbb836u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0bb837  push eax
    X86_AT(c, 0xbb837u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb838  call 0xbab4c
    X86_AT(c, 0xbb838u);
    push32(c, 0xbb83du); x86_call_known(c, 0xbab4cu, f_000bab4c); X86_RET(c, 0xbb83du);
    X86_TICK(c, 39);
    // 0bb83d  push dword ptr [edi + 5]
    X86_AT(c, 0xbb83du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))); push32(c, v); }
    // 0bb840  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xbb840u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0bb843  add eax, dword ptr [edi + 9]
    X86_AT(c, 0xbb843u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 0bb846  sub eax, 3
    X86_AT(c, 0xbb846u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0bb849  push eax
    X86_AT(c, 0xbb849u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb84a  push dword ptr [edi + 5]
    X86_AT(c, 0xbb84au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))); push32(c, v); }
    // 0bb84d  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xbb84du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0bb850  add eax, 2
    X86_AT(c, 0xbb850u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0bb853  push eax
    X86_AT(c, 0xbb853u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb854  call 0xbaa94
    X86_AT(c, 0xbb854u);
    push32(c, 0xbb859u); x86_call_known(c, 0xbaa94u, f_000baa94); X86_RET(c, 0xbb859u);
    X86_TICK(c, 45);
    // 0bb859  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xbb859u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0bb85c  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0xbb85cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 0bb85f  sub eax, 3
    X86_AT(c, 0xbb85fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0bb862  push eax
    X86_AT(c, 0xbb862u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb863  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xbb863u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0bb866  add eax, dword ptr [edi + 9]
    X86_AT(c, 0xbb866u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 0bb869  dec eax
    X86_AT(c, 0xbb869u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0bb86a  push eax
    X86_AT(c, 0xbb86au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb86b  mov edx, dword ptr [edi + 5]
    X86_AT(c, 0xbb86bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0bb86e  add edx, 2
    X86_AT(c, 0xbb86eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x2u, 0, 4); }
    // 0bb871  push edx
    X86_AT(c, 0xbb871u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0bb872  push eax
    X86_AT(c, 0xbb872u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb873  call 0xbaa94
    X86_AT(c, 0xbb873u);
    push32(c, 0xbb878u); x86_call_known(c, 0xbaa94u, f_000baa94); X86_RET(c, 0xbb878u);
    X86_TICK(c, 45);
    // 0bb878  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xbb878u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0bb87b  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0xbb87bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 0bb87e  dec eax
    X86_AT(c, 0xbb87eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0bb87f  push eax
    X86_AT(c, 0xbb87fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb880  mov edx, dword ptr [edi + 1]
    X86_AT(c, 0xbb880u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0bb883  add edx, dword ptr [edi + 9]
    X86_AT(c, 0xbb883u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 0bb886  sub edx, 3
    X86_AT(c, 0xbb886u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0bb889  push edx
    X86_AT(c, 0xbb889u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0bb88a  push eax
    X86_AT(c, 0xbb88au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb88b  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xbb88bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0bb88e  add eax, 2
    X86_AT(c, 0xbb88eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0bb891  push eax
    X86_AT(c, 0xbb891u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb892  call 0xbaa94
    X86_AT(c, 0xbb892u);
    push32(c, 0xbb897u); x86_call_known(c, 0xbaa94u, f_000baa94); X86_RET(c, 0xbb897u);
    X86_TICK(c, 41);
    // 0bb897  add esp, 0x44
    X86_AT(c, 0xbb897u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 0bb89a  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xbb89au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0bb89d  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0xbb89du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 0bb8a0  sub eax, 3
    X86_AT(c, 0xbb8a0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0bb8a3  push eax
    X86_AT(c, 0xbb8a3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb8a4  push dword ptr [edi + 1]
    X86_AT(c, 0xbb8a4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))); push32(c, v); }
    // 0bb8a7  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xbb8a7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0bb8aa  add eax, 2
    X86_AT(c, 0xbb8aau);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0bb8ad  push eax
    X86_AT(c, 0xbb8adu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb8ae  push dword ptr [edi + 1]
    X86_AT(c, 0xbb8aeu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))); push32(c, v); }
    // 0bb8b1  call 0xbaa94
    X86_AT(c, 0xbb8b1u);
    push32(c, 0xbb8b6u); x86_call_known(c, 0xbaa94u, f_000baa94); X86_RET(c, 0xbb8b6u);
    X86_TICK(c, 22);
    // 0bb8b6  add esp, 0x10
    X86_AT(c, 0xbb8b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0bb8b9  pop edi
    X86_AT(c, 0xbb8b9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bb8ba  leave 
    X86_AT(c, 0xbb8bau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bb8bb  ret 
    X86_AT(c, 0xbb8bbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbb7fcu, "ran off the end of a function");
}
void f_000bb8bc(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0bb8bc  push ebp
    X86_AT(c, 0xbb8bcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bb8bd  mov ebp, esp
    X86_AT(c, 0xbb8bdu);
    c.r[5] = c.r[4];
    // 0bb8bf  push edi
    X86_AT(c, 0xbb8bfu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bb8c0  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xbb8c0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0bb8c3  lea eax, [eax + eax*2]
    X86_AT(c, 0xbb8c3u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0bb8c6  lea edx, [eax + eax*8]
    X86_AT(c, 0xbb8c6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0bb8c9  lea edx, [eax + edx*2]
    X86_AT(c, 0xbb8c9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0bb8cc  lea edi, [edx + 0x46914]
    X86_AT(c, 0xbb8ccu);
    c.r[7] = (uint32_t)(c.r[2] + 0x46914u);
    // 0bb8d2  push dword ptr [edi + 0x2d]
    X86_AT(c, 0xbb8d2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Du))); push32(c, v); }
    // 0bb8d5  call 0xba51c
    X86_AT(c, 0xbb8d5u);
    push32(c, 0xbb8dau); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xbb8dau);
    X86_TICK(c, 51);
    // 0bb8da  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xbb8dau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0bb8dd  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0xbb8ddu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 0bb8e0  sub eax, 2
    X86_AT(c, 0xbb8e0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0bb8e3  push eax
    X86_AT(c, 0xbb8e3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb8e4  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xbb8e4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0bb8e7  add eax, dword ptr [edi + 9]
    X86_AT(c, 0xbb8e7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 0bb8ea  sub eax, 2
    X86_AT(c, 0xbb8eau);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0bb8ed  push eax
    X86_AT(c, 0xbb8edu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb8ee  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xbb8eeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0bb8f1  inc eax
    X86_AT(c, 0xbb8f1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0bb8f2  push eax
    X86_AT(c, 0xbb8f2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb8f3  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xbb8f3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0bb8f6  inc eax
    X86_AT(c, 0xbb8f6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0bb8f7  push eax
    X86_AT(c, 0xbb8f7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb8f8  call 0xbab4c
    X86_AT(c, 0xbb8f8u);
    push32(c, 0xbb8fdu); x86_call_known(c, 0xbab4cu, f_000bab4c); X86_RET(c, 0xbb8fdu);
    X86_TICK(c, 39);
    // 0bb8fd  push dword ptr [edi + 5]
    X86_AT(c, 0xbb8fdu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))); push32(c, v); }
    // 0bb900  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xbb900u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0bb903  add eax, dword ptr [edi + 9]
    X86_AT(c, 0xbb903u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 0bb906  sub eax, 3
    X86_AT(c, 0xbb906u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0bb909  push eax
    X86_AT(c, 0xbb909u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb90a  push dword ptr [edi + 5]
    X86_AT(c, 0xbb90au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))); push32(c, v); }
    // 0bb90d  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xbb90du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0bb910  add eax, 2
    X86_AT(c, 0xbb910u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0bb913  push eax
    X86_AT(c, 0xbb913u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb914  call 0xbaa94
    X86_AT(c, 0xbb914u);
    push32(c, 0xbb919u); x86_call_known(c, 0xbaa94u, f_000baa94); X86_RET(c, 0xbb919u);
    X86_TICK(c, 45);
    // 0bb919  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xbb919u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0bb91c  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0xbb91cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 0bb91f  sub eax, 3
    X86_AT(c, 0xbb91fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0bb922  push eax
    X86_AT(c, 0xbb922u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb923  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xbb923u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0bb926  add eax, dword ptr [edi + 9]
    X86_AT(c, 0xbb926u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 0bb929  dec eax
    X86_AT(c, 0xbb929u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0bb92a  push eax
    X86_AT(c, 0xbb92au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb92b  mov edx, dword ptr [edi + 5]
    X86_AT(c, 0xbb92bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0bb92e  add edx, 2
    X86_AT(c, 0xbb92eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x2u, 0, 4); }
    // 0bb931  push edx
    X86_AT(c, 0xbb931u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0bb932  push eax
    X86_AT(c, 0xbb932u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb933  call 0xbaa94
    X86_AT(c, 0xbb933u);
    push32(c, 0xbb938u); x86_call_known(c, 0xbaa94u, f_000baa94); X86_RET(c, 0xbb938u);
    X86_TICK(c, 45);
    // 0bb938  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xbb938u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0bb93b  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0xbb93bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 0bb93e  dec eax
    X86_AT(c, 0xbb93eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0bb93f  push eax
    X86_AT(c, 0xbb93fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb940  mov edx, dword ptr [edi + 1]
    X86_AT(c, 0xbb940u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0bb943  add edx, dword ptr [edi + 9]
    X86_AT(c, 0xbb943u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 0bb946  sub edx, 3
    X86_AT(c, 0xbb946u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0bb949  push edx
    X86_AT(c, 0xbb949u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0bb94a  push eax
    X86_AT(c, 0xbb94au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb94b  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xbb94bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0bb94e  add eax, 2
    X86_AT(c, 0xbb94eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0bb951  push eax
    X86_AT(c, 0xbb951u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb952  call 0xbaa94
    X86_AT(c, 0xbb952u);
    push32(c, 0xbb957u); x86_call_known(c, 0xbaa94u, f_000baa94); X86_RET(c, 0xbb957u);
    X86_TICK(c, 41);
    // 0bb957  add esp, 0x44
    X86_AT(c, 0xbb957u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 0bb95a  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xbb95au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0bb95d  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0xbb95du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 0bb960  sub eax, 3
    X86_AT(c, 0xbb960u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0bb963  push eax
    X86_AT(c, 0xbb963u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb964  push dword ptr [edi + 1]
    X86_AT(c, 0xbb964u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))); push32(c, v); }
    // 0bb967  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xbb967u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0bb96a  add eax, 2
    X86_AT(c, 0xbb96au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0bb96d  push eax
    X86_AT(c, 0xbb96du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb96e  push dword ptr [edi + 1]
    X86_AT(c, 0xbb96eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))); push32(c, v); }
    // 0bb971  call 0xbaa94
    X86_AT(c, 0xbb971u);
    push32(c, 0xbb976u); x86_call_known(c, 0xbaa94u, f_000baa94); X86_RET(c, 0xbb976u);
    X86_TICK(c, 22);
    // 0bb976  add esp, 0x10
    X86_AT(c, 0xbb976u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0bb979  pop edi
    X86_AT(c, 0xbb979u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bb97a  leave 
    X86_AT(c, 0xbb97au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bb97b  ret 
    X86_AT(c, 0xbb97bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbb8bcu, "ran off the end of a function");
}
void f_000bb97c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0bb97c  push ebp
    X86_AT(c, 0xbb97cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bb97d  mov ebp, esp
    X86_AT(c, 0xbb97du);
    c.r[5] = c.r[4];
    // 0bb97f  sub esp, 0x40
    X86_AT(c, 0xbb97fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x40u, 0, 4); }
    // 0bb982  push ebx
    X86_AT(c, 0xbb982u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bb983  push edi
    X86_AT(c, 0xbb983u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bb984  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xbb984u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0bb987  push 9
    X86_AT(c, 0xbb987u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0bb989  call 0xba68c
    X86_AT(c, 0xbb989u);
    push32(c, 0xbb98eu); x86_call_known(c, 0xba68cu, f_000ba68c); X86_RET(c, 0xbb98eu);
    X86_TICK(c, 32);
    // 0bb98e  mov ax, word ptr [ebp + 8]
    X86_AT(c, 0xbb98eu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0bb992  mov word ptr [ebp - 0x40], ax
    X86_AT(c, 0xbb992u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC0u)), (c.r[0] & 0xFFFFu));
    // 0bb996  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0xbb996u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0bb99a  mov word ptr [ebp - 0x3e], ax
    X86_AT(c, 0xbb99au);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC2u)), (c.r[0] & 0xFFFFu));
    // 0bb99e  mov edx, 0xffff
    X86_AT(c, 0xbb99eu);
    c.r[2] = 0xFFFFu;
    // 0bb9a3  sub eax, eax
    X86_AT(c, 0xbb9a3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0bb9a5  push edi
    X86_AT(c, 0xbb9a5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bb9a6  mov ecx, edx
    X86_AT(c, 0xbb9a6u);
    c.r[1] = c.r[2];
    // 0bb9a8  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xbb9a8u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0bb9aa  jne 0xbb9af
    X86_AT(c, 0xbb9aau);
    if (x86_cc(c, 5)) { goto L_bb9af; }
    X86_TICK(c, 4);
    // 0bb9ac  inc ecx
    X86_AT(c, 0xbb9acu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0bb9ad  sub edx, ecx
    X86_AT(c, 0xbb9adu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_bb9af:
    X86_TICK(c, 19);
    // 0bb9af  pop edi
    X86_AT(c, 0xbb9afu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bb9b0  mov word ptr [ebp - 0x3c], dx
    X86_AT(c, 0xbb9b0u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC4u)), (c.r[2] & 0xFFFFu));
    // 0bb9b4  push edi
    X86_AT(c, 0xbb9b4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bb9b5  lea eax, [ebp - 0x3a]
    X86_AT(c, 0xbb9b5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFC6u);
    // 0bb9b8  push eax
    X86_AT(c, 0xbb9b8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb9b9  call 0xd8a30
    X86_AT(c, 0xbb9b9u);
    push32(c, 0xbb9beu); x86_call_known(c, 0xd8a30u, f_000d8a30); X86_RET(c, 0xbb9beu);
    X86_TICK(c, 15);
    // 0bb9be  lea ebx, [ebp - 0x40]
    X86_AT(c, 0xbb9beu);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFC0u);
    // 0bb9c1  push ebx
    X86_AT(c, 0xbb9c1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bb9c2  push 1
    X86_AT(c, 0xbb9c2u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bb9c4  push 0x46208
    X86_AT(c, 0xbb9c4u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0bb9c9  call 0xac5
    X86_AT(c, 0xbb9c9u);
    push32(c, 0xbb9ceu); x86_call_known(c, 0xac5u, f_00000ac5); X86_RET(c, 0xbb9ceu);
    X86_TICK(c, 15);
    // 0bb9ce  movsx eax, word ptr [0x46204]
    X86_AT(c, 0xbb9ceu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x46204u)));
    // 0bb9d5  push eax
    X86_AT(c, 0xbb9d5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bb9d6  call 0xba68c
    X86_AT(c, 0xbb9d6u);
    push32(c, 0xbb9dbu); x86_call_known(c, 0xba68cu, f_000ba68c); X86_RET(c, 0xbb9dbu);
    X86_TICK(c, 26);
    // 0bb9db  add esp, 0x1c
    X86_AT(c, 0xbb9dbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0bb9de  pop edi
    X86_AT(c, 0xbb9deu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bb9df  pop ebx
    X86_AT(c, 0xbb9dfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0bb9e0  leave 
    X86_AT(c, 0xbb9e0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bb9e1  ret 
    X86_AT(c, 0xbb9e1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbb97cu, "ran off the end of a function");
}
void f_000bb9e4(X86Cpu& c) {
    X86_TICK(c, 74);
    // 0bb9e4  push ebp
    X86_AT(c, 0xbb9e4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bb9e5  mov ebp, esp
    X86_AT(c, 0xbb9e5u);
    c.r[5] = c.r[4];
    // 0bb9e7  push edi
    X86_AT(c, 0xbb9e7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bb9e8  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xbb9e8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0bb9eb  lea eax, [eax + eax*2]
    X86_AT(c, 0xbb9ebu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0bb9ee  lea edx, [eax + eax*8]
    X86_AT(c, 0xbb9eeu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0bb9f1  lea edx, [eax + edx*2]
    X86_AT(c, 0xbb9f1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0bb9f4  lea edi, [edx + 0x46914]
    X86_AT(c, 0xbb9f4u);
    c.r[7] = (uint32_t)(c.r[2] + 0x46914u);
    // 0bb9fa  push dword ptr [edi + 0x31]
    X86_AT(c, 0xbb9fau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x31u))); push32(c, v); }
    // 0bb9fd  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xbb9fdu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0bba00  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0xbba00u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 0bba03  sub eax, 3
    X86_AT(c, 0xbba03u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0bba06  push eax
    X86_AT(c, 0xbba06u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bba07  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xbba07u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0bba0a  add eax, dword ptr [edi + 9]
    X86_AT(c, 0xbba0au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 0bba0d  sub eax, 3
    X86_AT(c, 0xbba0du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0bba10  push eax
    X86_AT(c, 0xbba10u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bba11  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xbba11u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0bba14  add eax, 2
    X86_AT(c, 0xbba14u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0bba17  push eax
    X86_AT(c, 0xbba17u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bba18  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xbba18u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0bba1b  add eax, 2
    X86_AT(c, 0xbba1bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0bba1e  push eax
    X86_AT(c, 0xbba1eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bba1f  call 0xbac18
    X86_AT(c, 0xbba1fu);
    push32(c, 0xbba24u); x86_call_known(c, 0xbac18u, f_000bac18); X86_RET(c, 0xbba24u);
    X86_TICK(c, 12);
    // 0bba24  push dword ptr [edi + 0x25]
    X86_AT(c, 0xbba24u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x25u))); push32(c, v); }
    // 0bba27  call 0xba51c
    X86_AT(c, 0xbba27u);
    push32(c, 0xbba2cu); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xbba2cu);
    X86_TICK(c, 12);
    // 0bba2c  push dword ptr [edi + 0x31]
    X86_AT(c, 0xbba2cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x31u))); push32(c, v); }
    // 0bba2f  call 0xba54c
    X86_AT(c, 0xbba2fu);
    push32(c, 0xbba34u); x86_call_known(c, 0xba54cu, f_000ba54c); X86_RET(c, 0xbba34u);
    X86_TICK(c, 14);
    // 0bba34  add esp, 0x1c
    X86_AT(c, 0xbba34u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0bba37  cmp dword ptr [edi + 0x35], 0
    X86_AT(c, 0xbba37u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x35u))), 0x0u, 0, 4);
    // 0bba3b  jne 0xbba41
    X86_AT(c, 0xbba3bu);
    if (x86_cc(c, 5)) { goto L_bba41; }
    X86_TICK(c, 9);
    // 0bba3d  push 0xb
    X86_AT(c, 0xbba3du);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0bba3f  jmp 0xbba44
    X86_AT(c, 0xbba3fu);
    goto L_bba44;
L_bba41:
    X86_TICK(c, 5);
    // 0bba41  push dword ptr [edi + 0x31]
    X86_AT(c, 0xbba41u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x31u))); push32(c, v); }
L_bba44:
    X86_TICK(c, 7);
    // 0bba44  call 0xba534
    X86_AT(c, 0xbba44u);
    push32(c, 0xbba49u); x86_call_known(c, 0xba534u, f_000ba534); X86_RET(c, 0xbba49u);
    X86_TICK(c, 19);
    // 0bba49  add esp, 4
    X86_AT(c, 0xbba49u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0bba4c  movsx eax, word ptr [0x4690c]
    X86_AT(c, 0xbba4cu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x4690Cu)));
    // 0bba53  push eax
    X86_AT(c, 0xbba53u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bba54  push 0x46208
    X86_AT(c, 0xbba54u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0bba59  call 0x2c5
    X86_AT(c, 0xbba59u);
    push32(c, 0xbba5eu); x86_call_known(c, 0x2c5u, f_000002c5); X86_RET(c, 0xbba5eu);
    X86_TICK(c, 22);
    // 0bba5e  add esp, 8
    X86_AT(c, 0xbba5eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0bba61  pop edi
    X86_AT(c, 0xbba61u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bba62  leave 
    X86_AT(c, 0xbba62u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bba63  ret 
    X86_AT(c, 0xbba63u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbb9e4u, "ran off the end of a function");
}
void f_000bba64(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0bba64  push ebp
    X86_AT(c, 0xbba64u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bba65  mov ebp, esp
    X86_AT(c, 0xbba65u);
    c.r[5] = c.r[4];
    // 0bba67  push edi
    X86_AT(c, 0xbba67u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bba68  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xbba68u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0bba6b  lea eax, [eax + eax*2]
    X86_AT(c, 0xbba6bu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0bba6e  lea edx, [eax + eax*8]
    X86_AT(c, 0xbba6eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0bba71  lea edx, [eax + edx*2]
    X86_AT(c, 0xbba71u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0bba74  lea edi, [edx + 0x46914]
    X86_AT(c, 0xbba74u);
    c.r[7] = (uint32_t)(c.r[2] + 0x46914u);
    // 0bba7a  cmp byte ptr [edi], 0
    X86_AT(c, 0xbba7au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 0bba7d  jne 0xbbab8
    X86_AT(c, 0xbba7du);
    if (x86_cc(c, 5)) { goto L_bbab8; }
    X86_TICK(c, 50);
    // 0bba7f  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xbba7fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0bba82  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xbba82u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0bba85  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0xbba85u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 0bba88  dec eax
    X86_AT(c, 0xbba88u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0bba89  push eax
    X86_AT(c, 0xbba89u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bba8a  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xbba8au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0bba8d  add eax, dword ptr [edi + 9]
    X86_AT(c, 0xbba8du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 0bba90  dec eax
    X86_AT(c, 0xbba90u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0bba91  push eax
    X86_AT(c, 0xbba91u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0bba92  push dword ptr [edi + 5]
    X86_AT(c, 0xbba92u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))); push32(c, v); }
    // 0bba95  push dword ptr [edi + 1]
    X86_AT(c, 0xbba95u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))); push32(c, v); }
    // 0bba98  call 0xbac18
    X86_AT(c, 0xbba98u);
    push32(c, 0xbba9du); x86_call_known(c, 0xbac18u, f_000bac18); X86_RET(c, 0xbba9du);
    X86_TICK(c, 9);
    // 0bba9d  push 0xf
    X86_AT(c, 0xbba9du);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0bba9f  call 0xba51c
    X86_AT(c, 0xbba9fu);
    push32(c, 0xbbaa4u); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xbbaa4u);
    X86_TICK(c, 9);
    // 0bbaa4  push 0xf
    X86_AT(c, 0xbbaa4u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0bbaa6  call 0xba54c
    X86_AT(c, 0xbbaa6u);
    push32(c, 0xbbaabu); x86_call_known(c, 0xba54cu, f_000ba54c); X86_RET(c, 0xbbaabu);
    X86_TICK(c, 6);
    // 0bbaab  mov dword ptr [edi + 0x35], 0xffffffff
    X86_AT(c, 0xbbaabu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x35u)), 0xFFFFFFFFu);
    // 0bbab2  mov byte ptr [edi], 0xff
    X86_AT(c, 0xbbab2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0xFFu);
    // 0bbab5  add esp, 0x1c
    X86_AT(c, 0xbbab5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_bbab8:
    X86_TICK(c, 20);
    // 0bbab8  pop edi
    X86_AT(c, 0xbbab8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bbab9  leave 
    X86_AT(c, 0xbbab9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bbaba  ret 
    X86_AT(c, 0xbbabau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbba64u, "ran off the end of a function");
}
void f_000bbabc(X86Cpu& c) {
    X86_TICK(c, 32);
    // 0bbabc  push ebp
    X86_AT(c, 0xbbabcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bbabd  mov ebp, esp
    X86_AT(c, 0xbbabdu);
    c.r[5] = c.r[4];
    // 0bbabf  push ebx
    X86_AT(c, 0xbbabfu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bbac0  push edi
    X86_AT(c, 0xbbac0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bbac1  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xbbac1u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0bbac4  lea eax, [edi + edi*2]
    X86_AT(c, 0xbbac4u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0bbac7  lea edx, [eax + eax*8]
    X86_AT(c, 0xbbac7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0bbaca  lea edx, [eax + edx*2]
    X86_AT(c, 0xbbacau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0bbacd  push dword ptr [edx + 0x46945]
    X86_AT(c, 0xbbacdu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x46945u))); push32(c, v); }
    // 0bbad3  mov ebx, edx
    X86_AT(c, 0xbbad3u);
    c.r[3] = c.r[2];
    // 0bbad5  call 0xba534
    X86_AT(c, 0xbbad5u);
    push32(c, 0xbbadau); x86_call_known(c, 0xba534u, f_000ba534); X86_RET(c, 0xbbadau);
    X86_TICK(c, 61);
    // 0bbada  mov ax, word ptr [ebx + 0x46915]
    X86_AT(c, 0xbbadau);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x46915u))));
    // 0bbae1  add ax, 2
    X86_AT(c, 0xbbae1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x2u, 0, 2)); }
    // 0bbae5  mov word ptr [0x46808], ax
    X86_AT(c, 0xbbae5u);
    wr16((c.sbase[3] + (uint32_t)(0x46808u)), (c.r[0] & 0xFFFFu));
    // 0bbaeb  mov ax, word ptr [ebx + 0x46919]
    X86_AT(c, 0xbbaebu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x46919u))));
    // 0bbaf2  add ax, 2
    X86_AT(c, 0xbbaf2u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x2u, 0, 2)); }
    // 0bbaf6  mov word ptr [0x4680a], ax
    X86_AT(c, 0xbbaf6u);
    wr16((c.sbase[3] + (uint32_t)(0x4680Au)), (c.r[0] & 0xFFFFu));
    // 0bbafc  mov ax, word ptr [ebx + 0x46915]
    X86_AT(c, 0xbbafcu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x46915u))));
    // 0bbb03  add ax, word ptr [ebx + 0x4691d]
    X86_AT(c, 0xbbb03u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x4691Du))), 0, 2)); }
    // 0bbb0a  sub ax, 3
    X86_AT(c, 0xbbb0au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x3u, 0, 2)); }
    // 0bbb0e  mov word ptr [0x4680c], ax
    X86_AT(c, 0xbbb0eu);
    wr16((c.sbase[3] + (uint32_t)(0x4680Cu)), (c.r[0] & 0xFFFFu));
    // 0bbb14  mov ax, word ptr [ebx + 0x46919]
    X86_AT(c, 0xbbb14u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x46919u))));
    // 0bbb1b  add ax, word ptr [ebx + 0x46921]
    X86_AT(c, 0xbbb1bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x46921u))), 0, 2)); }
    // 0bbb22  sub ax, 3
    X86_AT(c, 0xbbb22u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x3u, 0, 2)); }
    // 0bbb26  mov word ptr [0x4680e], ax
    X86_AT(c, 0xbbb26u);
    wr16((c.sbase[3] + (uint32_t)(0x4680Eu)), (c.r[0] & 0xFFFFu));
    // 0bbb2c  push 0x46808
    X86_AT(c, 0xbbb2cu);
    { uint32_t v = 0x46808u; push32(c, v); }
    // 0bbb31  push 0xfffffff0
    X86_AT(c, 0xbbb31u);
    { uint32_t v = 0xFFFFFFF0u; push32(c, v); }
    // 0bbb33  push 0
    X86_AT(c, 0xbbb33u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0bbb35  push 1
    X86_AT(c, 0xbbb35u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0bbb37  push 0x46208
    X86_AT(c, 0xbbb37u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0bbb3c  call 0x6b6
    X86_AT(c, 0xbbb3cu);
    push32(c, 0xbbb41u); x86_call_known(c, 0x6b6u, f_000006b6); X86_RET(c, 0xbbb41u);
    X86_TICK(c, 14);
    // 0bbb41  add esp, 0x18
    X86_AT(c, 0xbbb41u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0bbb44  cmp dword ptr [ebx + 0x46949], 0
    X86_AT(c, 0xbbb44u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x46949u))), 0x0u, 0, 4);
    // 0bbb4b  jne 0xbbb57
    X86_AT(c, 0xbbb4bu);
    if (x86_cc(c, 5)) { goto L_bbb57; }
    X86_TICK(c, 9);
    // 0bbb4d  push 0xb
    X86_AT(c, 0xbbb4du);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0bbb4f  call 0xba534
    X86_AT(c, 0xbbb4fu);
    push32(c, 0xbbb54u); x86_call_known(c, 0xba534u, f_000ba534); X86_RET(c, 0xbbb54u);
    X86_TICK(c, 2);
    // 0bbb54  add esp, 4
    X86_AT(c, 0xbbb54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_bbb57:
    X86_TICK(c, 24);
    // 0bbb57  pop edi
    X86_AT(c, 0xbbb57u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bbb58  pop ebx
    X86_AT(c, 0xbbb58u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0bbb59  leave 
    X86_AT(c, 0xbbb59u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bbb5a  ret 
    X86_AT(c, 0xbbb5au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbbabcu, "ran off the end of a function");
}
void f_000bbb5c(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0bbb5c  push ebp
    X86_AT(c, 0xbbb5cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bbb5d  mov ebp, esp
    X86_AT(c, 0xbbb5du);
    c.r[5] = c.r[4];
    // 0bbb5f  push edi
    X86_AT(c, 0xbbb5fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bbb60  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xbbb60u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0bbb63  lea eax, [edi + edi*2]
    X86_AT(c, 0xbbb63u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0bbb66  lea edx, [eax + eax*8]
    X86_AT(c, 0xbbb66u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0bbb69  lea edx, [eax + edx*2]
    X86_AT(c, 0xbbb69u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0bbb6c  mov dword ptr [edx + 0x4692d], 0
    X86_AT(c, 0xbbb6cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4692Du)), 0x0u);
    // 0bbb76  mov eax, dword ptr [edx + 0x46931]
    X86_AT(c, 0xbbb76u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x46931u)));
    // 0bbb7c  cmp eax, dword ptr [edx + 0x46929]
    X86_AT(c, 0xbbb7cu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x46929u))), 0, 4);
    // 0bbb82  jne 0xbbb8f
    X86_AT(c, 0xbbb82u);
    if (x86_cc(c, 5)) { goto L_bbb8f; }
    X86_TICK(c, 9);
    // 0bbb84  push edi
    X86_AT(c, 0xbbb84u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bbb85  call 0xbbabc
    X86_AT(c, 0xbbb85u);
    push32(c, 0xbbb8au); x86_call_known(c, 0xbbabcu, f_000bbabc); X86_RET(c, 0xbbb8au);
    X86_TICK(c, 9);
    // 0bbb8a  add esp, 4
    X86_AT(c, 0xbbb8au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0bbb8d  jmp 0xbbb9e
    X86_AT(c, 0xbbb8du);
    goto L_bbb9e;
L_bbb8f:
    X86_TICK(c, 12);
    // 0bbb8f  lea eax, [edi + edi*2]
    X86_AT(c, 0xbbb8fu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0bbb92  lea edx, [eax + eax*8]
    X86_AT(c, 0xbbb92u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0bbb95  lea edx, [eax + edx*2]
    X86_AT(c, 0xbbb95u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0bbb98  inc dword ptr [edx + 0x46931]
    X86_AT(c, 0xbbb98u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0x46931u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_bbb9e:
    X86_TICK(c, 20);
    // 0bbb9e  pop edi
    X86_AT(c, 0xbbb9eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bbb9f  leave 
    X86_AT(c, 0xbbb9fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bbba0  ret 
    X86_AT(c, 0xbbba0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbbb5cu, "ran off the end of a function");
}
void f_000bbba4(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0bbba4  push ebp
    X86_AT(c, 0xbbba4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0bbba5  mov ebp, esp
    X86_AT(c, 0xbbba5u);
    c.r[5] = c.r[4];
    // 0bbba7  sub esp, 0xc
    X86_AT(c, 0xbbba7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0bbbaa  push ebx
    X86_AT(c, 0xbbbaau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0bbbab  push esi
    X86_AT(c, 0xbbbabu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0bbbac  push edi
    X86_AT(c, 0xbbbacu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0bbbad  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xbbbadu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0bbbb0  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xbbbb0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0bbbb3  lea eax, [eax + eax*2]
    X86_AT(c, 0xbbbb3u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0bbbb6  lea edx, [eax + eax*8]
    X86_AT(c, 0xbbbb6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0bbbb9  lea edx, [eax + edx*2]
    X86_AT(c, 0xbbbb9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0bbbbc  lea ebx, [edx + 0x46914]
    X86_AT(c, 0xbbbbcu);
    c.r[3] = (uint32_t)(c.r[2] + 0x46914u);
L_bbbc2:
    X86_TICK(c, 12);
    // 0bbbc2  cmp byte ptr [edi], 0
    X86_AT(c, 0xbbbc2u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 0bbbc5  je 0xbbd14
    X86_AT(c, 0xbbbc5u);
    if (x86_cc(c, 4)) { goto L_bbd14; }
    X86_TICK(c, 52);
    // 0bbbcb  mov dword ptr [ebp - 0xc], 0x9c54e
    X86_AT(c, 0xbbbcbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x9C54Eu);
    // 0bbbd2  mov ax, word ptr [ebx + 1]
    X86_AT(c, 0xbbbd2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x1u))));
    // 0bbbd6  add ax, 4
    X86_AT(c, 0xbbbd6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x4u, 0, 2)); }
    // 0bbbda  mov edx, dword ptr [ebx + 0x19]
    X86_AT(c, 0xbbbdau);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)));
    // 0bbbdd  shl edx, 3
    X86_AT(c, 0xbbbddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0bbbe0  add edx, eax
    X86_AT(c, 0xbbbe0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0bbbe2  mov word ptr [0x9c548], dx
    X86_AT(c, 0xbbbe2u);
    wr16((c.sbase[3] + (uint32_t)(0x9C548u)), (c.r[2] & 0xFFFFu));
    // 0bbbe9  mov ax, word ptr [ebx + 5]
    X86_AT(c, 0xbbbe9u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x5u))));
    // 0bbbed  add ax, 0x11
    X86_AT(c, 0xbbbedu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x11u, 0, 2)); }
    // 0bbbf1  mov edx, dword ptr [ebx + 0x1d]
    X86_AT(c, 0xbbbf1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)));
    // 0bbbf4  shl edx, 4
    X86_AT(c, 0xbbbf4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0bbbf7  add edx, eax
    X86_AT(c, 0xbbbf7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0bbbf9  mov word ptr [0x9c54a], dx
    X86_AT(c, 0xbbbf9u);
    wr16((c.sbase[3] + (uint32_t)(0x9C54Au)), (c.r[2] & 0xFFFFu));
    // 0bbc00  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xbbc00u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0bbc07  mov esi, dword ptr [ebx + 0x11]
    X86_AT(c, 0xbbc07u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x11u)));
    // 0bbc0a  sub esi, dword ptr [ebx + 0x19]
    X86_AT(c, 0xbbc0au);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u))), 0, 4); }
    // 0bbc0d  inc esi
    X86_AT(c, 0xbbc0du);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0bbc0e  mov dword ptr [ebp - 8], esi
    X86_AT(c, 0xbbc0eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[6]);
L_bbc11:
    X86_TICK(c, 7);
    // 0bbc11  and esi, esi
    X86_AT(c, 0xbbc11u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0bbc13  jle 0xbbca7
    X86_AT(c, 0xbbc13u);
    if (x86_cc(c, 14)) { goto L_bbca7; }
    X86_TICK(c, 17);
    // 0bbc19  mov al, byte ptr [edi]
    X86_AT(c, 0xbbc19u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0bbc1b  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xbbc1bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0bbc1e  mov byte ptr [edx], al
    X86_AT(c, 0xbbc1eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 0bbc20  cmp esi, 1
    X86_AT(c, 0xbbc20u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0bbc23  jne 0xbbc84
    X86_AT(c, 0xbbc23u);
    if (x86_cc(c, 5)) { goto L_bbc84; }
    X86_TICK(c, 11);
    // 0bbc29  mov al, byte ptr [edi]
    X86_AT(c, 0xbbc29u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0bbc2b  cmp al, 0x81
    X86_AT(c, 0xbbc2bu);
    (void)x86_sub(c, g8(c, 0), 0x81u, 0, 1);
    // 0bbc2d  jb 0xbbc33
    X86_AT(c, 0xbbc2du);
    if (x86_cc(c, 2)) { goto L_bbc33; }
    X86_TICK(c, 7);
    // 0bbc2f  cmp al, 0x9f
    X86_AT(c, 0xbbc2fu);
    (void)x86_sub(c, g8(c, 0), 0x9Fu, 0, 1);
    // 0bbc31  jbe 0xbbc41
    X86_AT(c, 0xbbc31u);
    if (x86_cc(c, 6)) { goto L_bbc41; }
L_bbc33:
    X86_TICK(c, 11);
    // 0bbc33  mov al, byte ptr [edi]
    X86_AT(c, 0xbbc33u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0bbc35  cmp al, 0xe0
    X86_AT(c, 0xbbc35u);
    (void)x86_sub(c, g8(c, 0), 0xE0u, 0, 1);
    // 0bbc37  jb 0xbbc84
    X86_AT(c, 0xbbc37u);
    if (x86_cc(c, 2)) { goto L_bbc84; }
    X86_TICK(c, 7);
    // 0bbc3d  cmp al, 0xfc
    X86_AT(c, 0xbbc3du);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 0bbc3f  ja 0xbbc84
    X86_AT(c, 0xbbc3fu);
    if (x86_cc(c, 7)) { goto L_bbc84; }
L_bbc41:
    X86_TICK(c, 11);
    // 0bbc41  mov al, byte ptr [edi + 1]
    X86_AT(c, 0xbbc41u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0bbc44  cmp al, 0x40
    X86_AT(c, 0xbbc44u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0bbc46  jb 0xbbc4c
    X86_AT(c, 0xbbc46u);
    if (x86_cc(c, 2)) { goto L_bbc4c; }
    X86_TICK(c, 7);
    // 0bbc48  cmp al, 0x7e
    X86_AT(c, 0xbbc48u);
    (void)x86_sub(c, g8(c, 0), 0x7Eu, 0, 1);
    // 0bbc4a  jbe 0xbbc57
    X86_AT(c, 0xbbc4au);
    if (x86_cc(c, 6)) { goto L_bbc57; }
L_bbc4c:
    X86_TICK(c, 11);
    // 0bbc4c  mov al, byte ptr [edi + 1]
    X86_AT(c, 0xbbc4cu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0bbc4f  cmp al, 0x80
    X86_AT(c, 0xbbc4fu);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 0bbc51  jb 0xbbc84
    X86_AT(c, 0xbbc51u);
    if (x86_cc(c, 2)) { goto L_bbc84; }
    X86_TICK(c, 7);
    // 0bbc53  cmp al, 0xfc
    X86_AT(c, 0xbbc53u);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 0bbc55  ja 0xbbc84
    X86_AT(c, 0xbbc55u);
    if (x86_cc(c, 7)) { goto L_bbc84; }
L_bbc57:
    X86_TICK(c, 11);
    // 0bbc57  mov al, byte ptr [edi - 1]
    X86_AT(c, 0xbbc57u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xFFFFFFFFu))));
    // 0bbc5a  cmp al, 0x81
    X86_AT(c, 0xbbc5au);
    (void)x86_sub(c, g8(c, 0), 0x81u, 0, 1);
    // 0bbc5c  jb 0xbbc62
    X86_AT(c, 0xbbc5cu);
    if (x86_cc(c, 2)) { goto L_bbc62; }
    X86_TICK(c, 7);
    // 0bbc5e  cmp al, 0x9f
    X86_AT(c, 0xbbc5eu);
    (void)x86_sub(c, g8(c, 0), 0x9Fu, 0, 1);
    // 0bbc60  jbe 0xbbc6d
    X86_AT(c, 0xbbc60u);
    if (x86_cc(c, 6)) { goto L_bbc6d; }
L_bbc62:
    X86_TICK(c, 11);
    // 0bbc62  mov al, byte ptr [edi - 1]
    X86_AT(c, 0xbbc62u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xFFFFFFFFu))));
    // 0bbc65  cmp al, 0xe0
    X86_AT(c, 0xbbc65u);
    (void)x86_sub(c, g8(c, 0), 0xE0u, 0, 1);
    // 0bbc67  jb 0xbbca7
    X86_AT(c, 0xbbc67u);
    if (x86_cc(c, 2)) { goto L_bbca7; }
    X86_TICK(c, 7);
    // 0bbc69  cmp al, 0xfc
    X86_AT(c, 0xbbc69u);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 0bbc6b  ja 0xbbca7
    X86_AT(c, 0xbbc6bu);
    if (x86_cc(c, 7)) { goto L_bbca7; }
L_bbc6d:
    X86_TICK(c, 11);
    // 0bbc6d  mov al, byte ptr [edi]
    X86_AT(c, 0xbbc6du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0bbc6f  cmp al, 0x40
    X86_AT(c, 0xbbc6fu);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0bbc71  jb 0xbbc77
    X86_AT(c, 0xbbc71u);
    if (x86_cc(c, 2)) { goto L_bbc77; }
    X86_TICK(c, 7);
    // 0bbc73  cmp al, 0x7e
    X86_AT(c, 0xbbc73u);
    (void)x86_sub(c, g8(c, 0), 0x7Eu, 0, 1);
    // 0bbc75  jbe 0xbbc81
    X86_AT(c, 0xbbc75u);
    if (x86_cc(c, 6)) { goto L_bbc81; }
L_bbc77:
    X86_TICK(c, 11);
    // 0bbc77  mov al, byte ptr [edi]
    X86_AT(c, 0xbbc77u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0bbc79  cmp al, 0x80
    X86_AT(c, 0xbbc79u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 0bbc7b  jb 0xbbca7
    X86_AT(c, 0xbbc7bu);
    if (x86_cc(c, 2)) { goto L_bbca7; }
    X86_TICK(c, 7);
    // 0bbc7d  cmp al, 0xfc
    X86_AT(c, 0xbbc7du);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 0bbc7f  ja 0xbbca7
    X86_AT(c, 0xbbc7fu);
    if (x86_cc(c, 7)) { goto L_bbca7; }
L_bbc81:
    X86_TICK(c, 9);
    // 0bbc81  inc edi
    X86_AT(c, 0xbbc81u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bbc82  jmp 0xbbca7
    X86_AT(c, 0xbbc82u);
    goto L_bbca7;
L_bbc84:
    X86_TICK(c, 12);
    // 0bbc84  cmp byte ptr [edi], 0xa
    X86_AT(c, 0xbbc84u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0xAu, 0, 1);
    // 0bbc87  jne 0xbbc8f
    X86_AT(c, 0xbbc87u);
    if (x86_cc(c, 5)) { goto L_bbc8f; }
    X86_TICK(c, 15);
    // 0bbc89  inc edi
    X86_AT(c, 0xbbc89u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bbc8a  dec dword ptr [ebp - 0xc]
    X86_AT(c, 0xbbc8au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0bbc8d  jmp 0xbbca7
    X86_AT(c, 0xbbc8du);
    goto L_bbca7;
L_bbc8f:
    X86_TICK(c, 12);
    // 0bbc8f  cmp byte ptr [edi], 0
    X86_AT(c, 0xbbc8fu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 0bbc92  jne 0xbbc9d
    X86_AT(c, 0xbbc92u);
    if (x86_cc(c, 5)) { goto L_bbc9d; }
    X86_TICK(c, 9);
    // 0bbc94  mov dword ptr [ebp - 4], 0xffffffff
    X86_AT(c, 0xbbc94u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xFFFFFFFFu);
    // 0bbc9b  jmp 0xbbca7
    X86_AT(c, 0xbbc9bu);
    goto L_bbca7;
L_bbc9d:
    X86_TICK(c, 17);
    // 0bbc9d  dec esi
    X86_AT(c, 0xbbc9du);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0bbc9e  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xbbc9eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bbca1  inc edi
    X86_AT(c, 0xbbca1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bbca2  jmp 0xbbc11
    X86_AT(c, 0xbbca2u);
    X86_POLL(c, 0xbbc11u); goto L_bbc11;
L_bbca7:
    X86_TICK(c, 33);
    // 0bbca7  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xbbca7u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bbcaa  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xbbcaau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0bbcad  mov byte ptr [eax], 0
    X86_AT(c, 0xbbcadu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0x0u);
    // 0bbcb0  mov eax, esi
    X86_AT(c, 0xbbcb0u);
    c.r[0] = c.r[6];
    // 0bbcb2  mov dx, word ptr [ebp - 8]
    X86_AT(c, 0xbbcb2u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))));
    // 0bbcb6  sub edx, eax
    X86_AT(c, 0xbbcb6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0bbcb8  mov word ptr [0x9c54c], dx
    X86_AT(c, 0xbbcb8u);
    wr16((c.sbase[3] + (uint32_t)(0x9C54Cu)), (c.r[2] & 0xFFFFu));
    // 0bbcbf  push 0x9c548
    X86_AT(c, 0xbbcbfu);
    { uint32_t v = 0x9C548u; push32(c, v); }
    // 0bbcc4  push 0x46208
    X86_AT(c, 0xbbcc4u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0bbcc9  call 0xa7d
    X86_AT(c, 0xbbcc9u);
    push32(c, 0xbbcceu); x86_call_known(c, 0xa7du, f_00000a7d); X86_RET(c, 0xbbcceu);
    X86_TICK(c, 28);
    // 0bbcce  mov eax, dword ptr [ebx + 0x19]
    X86_AT(c, 0xbbcceu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)));
    // 0bbcd1  add eax, dword ptr [ebp - 8]
    X86_AT(c, 0xbbcd1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4); }
    // 0bbcd4  sub eax, esi
    X86_AT(c, 0xbbcd4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0bbcd6  mov dword ptr [ebx + 0x19], eax
    X86_AT(c, 0xbbcd6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), c.r[0]);
    // 0bbcd9  add esp, 8
    X86_AT(c, 0xbbcd9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0bbcdc  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0xbbcdcu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0bbce0  jne 0xbbbc2
    X86_AT(c, 0xbbce0u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xbbbc2u); goto L_bbbc2; }
    X86_TICK(c, 15);
    // 0bbce6  mov eax, dword ptr [ebx + 0x1d]
    X86_AT(c, 0xbbce6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)));
    // 0bbce9  cmp eax, dword ptr [ebx + 0x15]
    X86_AT(c, 0xbbce9u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x15u))), 0, 4);
    // 0bbcec  jne 0xbbd05
    X86_AT(c, 0xbbcecu);
    if (x86_cc(c, 5)) { goto L_bbd05; }
    X86_TICK(c, 12);
    // 0bbcee  push dword ptr [ebp + 8]
    X86_AT(c, 0xbbceeu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0bbcf1  call 0xbbabc
    X86_AT(c, 0xbbcf1u);
    push32(c, 0xbbcf6u); x86_call_known(c, 0xbbabcu, f_000bbabc); X86_RET(c, 0xbbcf6u);
    X86_TICK(c, 11);
    // 0bbcf6  mov dword ptr [ebx + 0x19], 0
    X86_AT(c, 0xbbcf6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x0u);
    // 0bbcfd  add esp, 4
    X86_AT(c, 0xbbcfdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0bbd00  jmp 0xbbbc2
    X86_AT(c, 0xbbd00u);
    X86_POLL(c, 0xbbbc2u); goto L_bbbc2;
L_bbd05:
    X86_TICK(c, 15);
    // 0bbd05  mov dword ptr [ebx + 0x19], 0
    X86_AT(c, 0xbbd05u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x0u);
    // 0bbd0c  inc dword ptr [ebx + 0x1d]
    X86_AT(c, 0xbbd0cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bbd0f  jmp 0xbbbc2
    X86_AT(c, 0xbbd0fu);
    X86_POLL(c, 0xbbbc2u); goto L_bbbc2;
L_bbd14:
    X86_TICK(c, 28);
    // 0bbd14  pop edi
    X86_AT(c, 0xbbd14u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bbd15  pop esi
    X86_AT(c, 0xbbd15u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bbd16  pop ebx
    X86_AT(c, 0xbbd16u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0bbd17  leave 
    X86_AT(c, 0xbbd17u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bbd18  ret 
    X86_AT(c, 0xbbd18u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbbba4u, "ran off the end of a function");
}
void f_000bbbc2(X86Cpu& c) {
L_bbbc2:
    X86_TICK(c, 12);
    // 0bbbc2  cmp byte ptr [edi], 0
    X86_AT(c, 0xbbbc2u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 0bbbc5  je 0xbbd14
    X86_AT(c, 0xbbbc5u);
    if (x86_cc(c, 4)) { goto L_bbd14; }
    X86_TICK(c, 52);
    // 0bbbcb  mov dword ptr [ebp - 0xc], 0x9c54e
    X86_AT(c, 0xbbbcbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x9C54Eu);
    // 0bbbd2  mov ax, word ptr [ebx + 1]
    X86_AT(c, 0xbbbd2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x1u))));
    // 0bbbd6  add ax, 4
    X86_AT(c, 0xbbbd6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x4u, 0, 2)); }
    // 0bbbda  mov edx, dword ptr [ebx + 0x19]
    X86_AT(c, 0xbbbdau);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)));
    // 0bbbdd  shl edx, 3
    X86_AT(c, 0xbbbddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0bbbe0  add edx, eax
    X86_AT(c, 0xbbbe0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0bbbe2  mov word ptr [0x9c548], dx
    X86_AT(c, 0xbbbe2u);
    wr16((c.sbase[3] + (uint32_t)(0x9C548u)), (c.r[2] & 0xFFFFu));
    // 0bbbe9  mov ax, word ptr [ebx + 5]
    X86_AT(c, 0xbbbe9u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x5u))));
    // 0bbbed  add ax, 0x11
    X86_AT(c, 0xbbbedu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x11u, 0, 2)); }
    // 0bbbf1  mov edx, dword ptr [ebx + 0x1d]
    X86_AT(c, 0xbbbf1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)));
    // 0bbbf4  shl edx, 4
    X86_AT(c, 0xbbbf4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0bbbf7  add edx, eax
    X86_AT(c, 0xbbbf7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0bbbf9  mov word ptr [0x9c54a], dx
    X86_AT(c, 0xbbbf9u);
    wr16((c.sbase[3] + (uint32_t)(0x9C54Au)), (c.r[2] & 0xFFFFu));
    // 0bbc00  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xbbc00u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0bbc07  mov esi, dword ptr [ebx + 0x11]
    X86_AT(c, 0xbbc07u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x11u)));
    // 0bbc0a  sub esi, dword ptr [ebx + 0x19]
    X86_AT(c, 0xbbc0au);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u))), 0, 4); }
    // 0bbc0d  inc esi
    X86_AT(c, 0xbbc0du);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0bbc0e  mov dword ptr [ebp - 8], esi
    X86_AT(c, 0xbbc0eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[6]);
L_bbc11:
    X86_TICK(c, 7);
    // 0bbc11  and esi, esi
    X86_AT(c, 0xbbc11u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0bbc13  jle 0xbbca7
    X86_AT(c, 0xbbc13u);
    if (x86_cc(c, 14)) { goto L_bbca7; }
    X86_TICK(c, 17);
    // 0bbc19  mov al, byte ptr [edi]
    X86_AT(c, 0xbbc19u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0bbc1b  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xbbc1bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0bbc1e  mov byte ptr [edx], al
    X86_AT(c, 0xbbc1eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 0bbc20  cmp esi, 1
    X86_AT(c, 0xbbc20u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0bbc23  jne 0xbbc84
    X86_AT(c, 0xbbc23u);
    if (x86_cc(c, 5)) { goto L_bbc84; }
    X86_TICK(c, 11);
    // 0bbc29  mov al, byte ptr [edi]
    X86_AT(c, 0xbbc29u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0bbc2b  cmp al, 0x81
    X86_AT(c, 0xbbc2bu);
    (void)x86_sub(c, g8(c, 0), 0x81u, 0, 1);
    // 0bbc2d  jb 0xbbc33
    X86_AT(c, 0xbbc2du);
    if (x86_cc(c, 2)) { goto L_bbc33; }
    X86_TICK(c, 7);
    // 0bbc2f  cmp al, 0x9f
    X86_AT(c, 0xbbc2fu);
    (void)x86_sub(c, g8(c, 0), 0x9Fu, 0, 1);
    // 0bbc31  jbe 0xbbc41
    X86_AT(c, 0xbbc31u);
    if (x86_cc(c, 6)) { goto L_bbc41; }
L_bbc33:
    X86_TICK(c, 11);
    // 0bbc33  mov al, byte ptr [edi]
    X86_AT(c, 0xbbc33u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0bbc35  cmp al, 0xe0
    X86_AT(c, 0xbbc35u);
    (void)x86_sub(c, g8(c, 0), 0xE0u, 0, 1);
    // 0bbc37  jb 0xbbc84
    X86_AT(c, 0xbbc37u);
    if (x86_cc(c, 2)) { goto L_bbc84; }
    X86_TICK(c, 7);
    // 0bbc3d  cmp al, 0xfc
    X86_AT(c, 0xbbc3du);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 0bbc3f  ja 0xbbc84
    X86_AT(c, 0xbbc3fu);
    if (x86_cc(c, 7)) { goto L_bbc84; }
L_bbc41:
    X86_TICK(c, 11);
    // 0bbc41  mov al, byte ptr [edi + 1]
    X86_AT(c, 0xbbc41u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0bbc44  cmp al, 0x40
    X86_AT(c, 0xbbc44u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0bbc46  jb 0xbbc4c
    X86_AT(c, 0xbbc46u);
    if (x86_cc(c, 2)) { goto L_bbc4c; }
    X86_TICK(c, 7);
    // 0bbc48  cmp al, 0x7e
    X86_AT(c, 0xbbc48u);
    (void)x86_sub(c, g8(c, 0), 0x7Eu, 0, 1);
    // 0bbc4a  jbe 0xbbc57
    X86_AT(c, 0xbbc4au);
    if (x86_cc(c, 6)) { goto L_bbc57; }
L_bbc4c:
    X86_TICK(c, 11);
    // 0bbc4c  mov al, byte ptr [edi + 1]
    X86_AT(c, 0xbbc4cu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0bbc4f  cmp al, 0x80
    X86_AT(c, 0xbbc4fu);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 0bbc51  jb 0xbbc84
    X86_AT(c, 0xbbc51u);
    if (x86_cc(c, 2)) { goto L_bbc84; }
    X86_TICK(c, 7);
    // 0bbc53  cmp al, 0xfc
    X86_AT(c, 0xbbc53u);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 0bbc55  ja 0xbbc84
    X86_AT(c, 0xbbc55u);
    if (x86_cc(c, 7)) { goto L_bbc84; }
L_bbc57:
    X86_TICK(c, 11);
    // 0bbc57  mov al, byte ptr [edi - 1]
    X86_AT(c, 0xbbc57u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xFFFFFFFFu))));
    // 0bbc5a  cmp al, 0x81
    X86_AT(c, 0xbbc5au);
    (void)x86_sub(c, g8(c, 0), 0x81u, 0, 1);
    // 0bbc5c  jb 0xbbc62
    X86_AT(c, 0xbbc5cu);
    if (x86_cc(c, 2)) { goto L_bbc62; }
    X86_TICK(c, 7);
    // 0bbc5e  cmp al, 0x9f
    X86_AT(c, 0xbbc5eu);
    (void)x86_sub(c, g8(c, 0), 0x9Fu, 0, 1);
    // 0bbc60  jbe 0xbbc6d
    X86_AT(c, 0xbbc60u);
    if (x86_cc(c, 6)) { goto L_bbc6d; }
L_bbc62:
    X86_TICK(c, 11);
    // 0bbc62  mov al, byte ptr [edi - 1]
    X86_AT(c, 0xbbc62u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xFFFFFFFFu))));
    // 0bbc65  cmp al, 0xe0
    X86_AT(c, 0xbbc65u);
    (void)x86_sub(c, g8(c, 0), 0xE0u, 0, 1);
    // 0bbc67  jb 0xbbca7
    X86_AT(c, 0xbbc67u);
    if (x86_cc(c, 2)) { goto L_bbca7; }
    X86_TICK(c, 7);
    // 0bbc69  cmp al, 0xfc
    X86_AT(c, 0xbbc69u);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 0bbc6b  ja 0xbbca7
    X86_AT(c, 0xbbc6bu);
    if (x86_cc(c, 7)) { goto L_bbca7; }
L_bbc6d:
    X86_TICK(c, 11);
    // 0bbc6d  mov al, byte ptr [edi]
    X86_AT(c, 0xbbc6du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0bbc6f  cmp al, 0x40
    X86_AT(c, 0xbbc6fu);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0bbc71  jb 0xbbc77
    X86_AT(c, 0xbbc71u);
    if (x86_cc(c, 2)) { goto L_bbc77; }
    X86_TICK(c, 7);
    // 0bbc73  cmp al, 0x7e
    X86_AT(c, 0xbbc73u);
    (void)x86_sub(c, g8(c, 0), 0x7Eu, 0, 1);
    // 0bbc75  jbe 0xbbc81
    X86_AT(c, 0xbbc75u);
    if (x86_cc(c, 6)) { goto L_bbc81; }
L_bbc77:
    X86_TICK(c, 11);
    // 0bbc77  mov al, byte ptr [edi]
    X86_AT(c, 0xbbc77u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0bbc79  cmp al, 0x80
    X86_AT(c, 0xbbc79u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 0bbc7b  jb 0xbbca7
    X86_AT(c, 0xbbc7bu);
    if (x86_cc(c, 2)) { goto L_bbca7; }
    X86_TICK(c, 7);
    // 0bbc7d  cmp al, 0xfc
    X86_AT(c, 0xbbc7du);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 0bbc7f  ja 0xbbca7
    X86_AT(c, 0xbbc7fu);
    if (x86_cc(c, 7)) { goto L_bbca7; }
L_bbc81:
    X86_TICK(c, 9);
    // 0bbc81  inc edi
    X86_AT(c, 0xbbc81u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bbc82  jmp 0xbbca7
    X86_AT(c, 0xbbc82u);
    goto L_bbca7;
L_bbc84:
    X86_TICK(c, 12);
    // 0bbc84  cmp byte ptr [edi], 0xa
    X86_AT(c, 0xbbc84u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0xAu, 0, 1);
    // 0bbc87  jne 0xbbc8f
    X86_AT(c, 0xbbc87u);
    if (x86_cc(c, 5)) { goto L_bbc8f; }
    X86_TICK(c, 15);
    // 0bbc89  inc edi
    X86_AT(c, 0xbbc89u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bbc8a  dec dword ptr [ebp - 0xc]
    X86_AT(c, 0xbbc8au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0bbc8d  jmp 0xbbca7
    X86_AT(c, 0xbbc8du);
    goto L_bbca7;
L_bbc8f:
    X86_TICK(c, 12);
    // 0bbc8f  cmp byte ptr [edi], 0
    X86_AT(c, 0xbbc8fu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 0bbc92  jne 0xbbc9d
    X86_AT(c, 0xbbc92u);
    if (x86_cc(c, 5)) { goto L_bbc9d; }
    X86_TICK(c, 9);
    // 0bbc94  mov dword ptr [ebp - 4], 0xffffffff
    X86_AT(c, 0xbbc94u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xFFFFFFFFu);
    // 0bbc9b  jmp 0xbbca7
    X86_AT(c, 0xbbc9bu);
    goto L_bbca7;
L_bbc9d:
    X86_TICK(c, 17);
    // 0bbc9d  dec esi
    X86_AT(c, 0xbbc9du);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0bbc9e  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xbbc9eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bbca1  inc edi
    X86_AT(c, 0xbbca1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0bbca2  jmp 0xbbc11
    X86_AT(c, 0xbbca2u);
    X86_POLL(c, 0xbbc11u); goto L_bbc11;
L_bbca7:
    X86_TICK(c, 33);
    // 0bbca7  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xbbca7u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bbcaa  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xbbcaau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0bbcad  mov byte ptr [eax], 0
    X86_AT(c, 0xbbcadu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0x0u);
    // 0bbcb0  mov eax, esi
    X86_AT(c, 0xbbcb0u);
    c.r[0] = c.r[6];
    // 0bbcb2  mov dx, word ptr [ebp - 8]
    X86_AT(c, 0xbbcb2u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))));
    // 0bbcb6  sub edx, eax
    X86_AT(c, 0xbbcb6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0bbcb8  mov word ptr [0x9c54c], dx
    X86_AT(c, 0xbbcb8u);
    wr16((c.sbase[3] + (uint32_t)(0x9C54Cu)), (c.r[2] & 0xFFFFu));
    // 0bbcbf  push 0x9c548
    X86_AT(c, 0xbbcbfu);
    { uint32_t v = 0x9C548u; push32(c, v); }
    // 0bbcc4  push 0x46208
    X86_AT(c, 0xbbcc4u);
    { uint32_t v = 0x46208u; push32(c, v); }
    // 0bbcc9  call 0xa7d
    X86_AT(c, 0xbbcc9u);
    push32(c, 0xbbcceu); x86_call_known(c, 0xa7du, f_00000a7d); X86_RET(c, 0xbbcceu);
    X86_TICK(c, 28);
    // 0bbcce  mov eax, dword ptr [ebx + 0x19]
    X86_AT(c, 0xbbcceu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)));
    // 0bbcd1  add eax, dword ptr [ebp - 8]
    X86_AT(c, 0xbbcd1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4); }
    // 0bbcd4  sub eax, esi
    X86_AT(c, 0xbbcd4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0bbcd6  mov dword ptr [ebx + 0x19], eax
    X86_AT(c, 0xbbcd6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), c.r[0]);
    // 0bbcd9  add esp, 8
    X86_AT(c, 0xbbcd9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0bbcdc  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0xbbcdcu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0bbce0  jne 0xbbbc2
    X86_AT(c, 0xbbce0u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xbbbc2u); goto L_bbbc2; }
    X86_TICK(c, 15);
    // 0bbce6  mov eax, dword ptr [ebx + 0x1d]
    X86_AT(c, 0xbbce6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)));
    // 0bbce9  cmp eax, dword ptr [ebx + 0x15]
    X86_AT(c, 0xbbce9u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x15u))), 0, 4);
    // 0bbcec  jne 0xbbd05
    X86_AT(c, 0xbbcecu);
    if (x86_cc(c, 5)) { goto L_bbd05; }
    X86_TICK(c, 12);
    // 0bbcee  push dword ptr [ebp + 8]
    X86_AT(c, 0xbbceeu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0bbcf1  call 0xbbabc
    X86_AT(c, 0xbbcf1u);
    push32(c, 0xbbcf6u); x86_call_known(c, 0xbbabcu, f_000bbabc); X86_RET(c, 0xbbcf6u);
    X86_TICK(c, 11);
    // 0bbcf6  mov dword ptr [ebx + 0x19], 0
    X86_AT(c, 0xbbcf6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x0u);
    // 0bbcfd  add esp, 4
    X86_AT(c, 0xbbcfdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0bbd00  jmp 0xbbbc2
    X86_AT(c, 0xbbd00u);
    X86_POLL(c, 0xbbbc2u); goto L_bbbc2;
L_bbd05:
    X86_TICK(c, 15);
    // 0bbd05  mov dword ptr [ebx + 0x19], 0
    X86_AT(c, 0xbbd05u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x0u);
    // 0bbd0c  inc dword ptr [ebx + 0x1d]
    X86_AT(c, 0xbbd0cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0bbd0f  jmp 0xbbbc2
    X86_AT(c, 0xbbd0fu);
    X86_POLL(c, 0xbbbc2u); goto L_bbbc2;
L_bbd14:
    X86_TICK(c, 28);
    // 0bbd14  pop edi
    X86_AT(c, 0xbbd14u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0bbd15  pop esi
    X86_AT(c, 0xbbd15u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0bbd16  pop ebx
    X86_AT(c, 0xbbd16u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0bbd17  leave 
    X86_AT(c, 0xbbd17u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0bbd18  ret 
    X86_AT(c, 0xbbd18u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbbbc2u, "ran off the end of a function");
}
}
