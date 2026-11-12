#include "p_game_funcs.h"
namespace p_game {
void f_0009578a(X86Cpu& c) {
    X86_TICK(c, 11);
    // 09578a  mov ecx, dword ptr [0x8a614]
    X86_AT(c, 0x9578au);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A614u)));
    // 095790  call dword ptr [0x8a610]
    X86_AT(c, 0x95790u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A610u))); push32(c, 0x95796u); x86_call(c, t); X86_RET(c, 0x95796u); }
    X86_TICK(c, 16);
    // 095796  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x95796u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 095799  cmp byte ptr [eax - 9], 0
    X86_AT(c, 0x95799u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 09579d  jne 0x957b3
    X86_AT(c, 0x9579du);
    if (x86_cc(c, 5)) { goto L_957b3; }
    X86_TICK(c, 11);
    // 09579f  mov eax, dword ptr [0x8a604]
    X86_AT(c, 0x9579fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A604u)));
    // 0957a4  and eax, eax
    X86_AT(c, 0x957a4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0957a6  je 0x957b3
    X86_AT(c, 0x957a6u);
    if (x86_cc(c, 4)) { goto L_957b3; }
    X86_TICK(c, 11);
    // 0957a8  push eax
    X86_AT(c, 0x957a8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0957a9  push 0x8a618
    X86_AT(c, 0x957a9u);
    { uint32_t v = 0x8A618u; push32(c, v); }
    // 0957ae  call 0x939cc
    X86_AT(c, 0x957aeu);
    push32(c, 0x957b3u); x86_call_known(c, 0x939ccu, f_000939cc); X86_RET(c, 0x957b3u);
L_957b3:
    X86_TICK(c, 28);
    // 0957b3  pop edi
    X86_AT(c, 0x957b3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0957b4  pop esi
    X86_AT(c, 0x957b4u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0957b5  pop ebx
    X86_AT(c, 0x957b5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0957b6  leave 
    X86_AT(c, 0x957b6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0957b7  ret 
    X86_AT(c, 0x957b7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9578au, "ran off the end of a function");
}
void f_000957c0(X86Cpu& c) {
    X86_TICK(c, 34);
    // 0957c0  push ebp
    X86_AT(c, 0x957c0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0957c1  mov ebp, esp
    X86_AT(c, 0x957c1u);
    c.r[5] = c.r[4];
    // 0957c3  push ecx
    X86_AT(c, 0x957c3u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0957c4  sub esp, 0xc
    X86_AT(c, 0x957c4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0957c7  push ebx
    X86_AT(c, 0x957c7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0957c8  push esi
    X86_AT(c, 0x957c8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0957c9  push edi
    X86_AT(c, 0x957c9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0957ca  mov edi, 1
    X86_AT(c, 0x957cau);
    c.r[7] = 0x1u;
    // 0957cf  mov al, byte ptr [0x8aa10]
    X86_AT(c, 0x957cfu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8AA10u))));
    // 0957d4  mov byte ptr [edi + 0x8a9db], al
    X86_AT(c, 0x957d4u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8A9DBu)), g8(c, 0));
    // 0957da  cmp byte ptr [0x8aa23], 0
    X86_AT(c, 0x957dau);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8AA23u))), 0x0u, 0, 1);
    // 0957e1  je 0x957f0
    X86_AT(c, 0x957e1u);
    if (x86_cc(c, 4)) { goto L_957f0; }
    X86_TICK(c, 10);
    // 0957e3  mov dword ptr [ebp - 0x10], edi
    X86_AT(c, 0x957e3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[7]);
    // 0957e6  add edi, dword ptr [ebp - 0x10]
    X86_AT(c, 0x957e6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0, 4); }
    // 0957e9  mov byte ptr [edi + 0x8a9db], 0x2e
    X86_AT(c, 0x957e9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8A9DBu)), 0x2Eu);
L_957f0:
    X86_TICK(c, 13);
    // 0957f0  inc edi
    X86_AT(c, 0x957f0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0957f1  mov eax, dword ptr [0x8a604]
    X86_AT(c, 0x957f1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A604u)));
    // 0957f6  and eax, eax
    X86_AT(c, 0x957f6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0957f8  je 0x9587a
    X86_AT(c, 0x957f8u);
    if (x86_cc(c, 4)) { goto L_9587a; }
    X86_TICK(c, 15);
    // 0957fe  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x957feu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 095801  mov ecx, dword ptr [edx - 8]
    X86_AT(c, 0x95801u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF8u)));
    // 095804  cmp ecx, eax
    X86_AT(c, 0x95804u);
    (void)x86_sub(c, c.r[1], c.r[0], 0, 4);
    // 095806  jb 0x9580a
    X86_AT(c, 0x95806u);
    if (x86_cc(c, 2)) { goto L_9580a; }
    X86_TICK(c, 2);
    // 095808  mov ecx, eax
    X86_AT(c, 0x95808u);
    c.r[1] = c.r[0];
L_9580a:
    X86_TICK(c, 54);
    // 09580a  mov dword ptr [ebp - 8], ecx
    X86_AT(c, 0x9580au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[1]);
    // 09580d  mov esi, 0x8aa11
    X86_AT(c, 0x9580du);
    c.r[6] = 0x8AA11u;
    // 095812  lea ebx, [edi + 0x8a9db]
    X86_AT(c, 0x95812u);
    c.r[3] = (uint32_t)(c.r[7] + 0x8A9DBu);
    // 095818  push edi
    X86_AT(c, 0x95818u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095819  mov edi, ebx
    X86_AT(c, 0x95819u);
    c.r[7] = c.r[3];
    // 09581b  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x9581bu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 09581d  pop edi
    X86_AT(c, 0x9581du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09581e  add edi, dword ptr [ebp - 8]
    X86_AT(c, 0x9581eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4); }
    // 095821  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x95821u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 095824  sub dword ptr [0x8a604], eax
    X86_AT(c, 0x95824u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A604u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 09582a  lea eax, [edi - 1]
    X86_AT(c, 0x9582au);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFFFFu);
    // 09582d  mov dword ptr [edx - 0x10], eax
    X86_AT(c, 0x9582du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF0u)), c.r[0]);
    // 095830  cmp byte ptr [edx - 9], 0
    X86_AT(c, 0x95830u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 095834  je 0x95840
    X86_AT(c, 0x95834u);
    if (x86_cc(c, 4)) { goto L_95840; }
    X86_TICK(c, 13);
    // 095836  push 2
    X86_AT(c, 0x95836u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 095838  push edi
    X86_AT(c, 0x95838u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095839  mov ecx, edx
    X86_AT(c, 0x95839u);
    c.r[1] = c.r[2];
    // 09583b  call 0x95460
    X86_AT(c, 0x9583bu);
    push32(c, 0x95840u); x86_call_known(c, 0x95460u, f_00095460); X86_RET(c, 0x95840u);
L_95840:
    X86_TICK(c, 13);
    // 095840  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x95840u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 095843  mov ebx, ecx
    X86_AT(c, 0x95843u);
    c.r[3] = c.r[1];
    // 095845  call 0x954cc
    X86_AT(c, 0x95845u);
    push32(c, 0x9584au); x86_call_known(c, 0x954ccu, f_000954cc); X86_RET(c, 0x9584au);
    X86_TICK(c, 18);
    // 09584a  push dword ptr [ebx - 0x10]
    X86_AT(c, 0x9584au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFF0u))); push32(c, v); }
    // 09584d  push 0x8a9dc
    X86_AT(c, 0x9584du);
    { uint32_t v = 0x8A9DCu; push32(c, v); }
    // 095852  mov ecx, dword ptr [0x8a614]
    X86_AT(c, 0x95852u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A614u)));
    // 095858  call dword ptr [0x8a610]
    X86_AT(c, 0x95858u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A610u))); push32(c, 0x9585eu); x86_call(c, t); X86_RET(c, 0x9585eu); }
    X86_TICK(c, 12);
    // 09585e  cmp byte ptr [ebx - 9], 0
    X86_AT(c, 0x9585eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 095862  jne 0x95897
    X86_AT(c, 0x95862u);
    if (x86_cc(c, 5)) { goto L_95897; }
    X86_TICK(c, 11);
    // 095864  mov eax, dword ptr [0x8a604]
    X86_AT(c, 0x95864u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A604u)));
    // 095869  and eax, eax
    X86_AT(c, 0x95869u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 09586b  je 0x95897
    X86_AT(c, 0x9586bu);
    if (x86_cc(c, 4)) { goto L_95897; }
    X86_TICK(c, 11);
    // 09586d  push eax
    X86_AT(c, 0x9586du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09586e  push 0x8a618
    X86_AT(c, 0x9586eu);
    { uint32_t v = 0x8A618u; push32(c, v); }
    // 095873  call 0x939cc
    X86_AT(c, 0x95873u);
    push32(c, 0x95878u); x86_call_known(c, 0x939ccu, f_000939cc); X86_RET(c, 0x95878u);
    X86_TICK(c, 7);
    // 095878  jmp 0x95897
    X86_AT(c, 0x95878u);
    goto L_95897;
L_9587a:
    X86_TICK(c, 11);
    // 09587a  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x9587au);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 09587d  call 0x954cc
    X86_AT(c, 0x9587du);
    push32(c, 0x95882u); x86_call_known(c, 0x954ccu, f_000954cc); X86_RET(c, 0x95882u);
    X86_TICK(c, 17);
    // 095882  lea eax, [edi - 1]
    X86_AT(c, 0x95882u);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFFFFu);
    // 095885  push eax
    X86_AT(c, 0x95885u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095886  push 0x8a9dc
    X86_AT(c, 0x95886u);
    { uint32_t v = 0x8A9DCu; push32(c, v); }
    // 09588b  mov ecx, dword ptr [0x8a614]
    X86_AT(c, 0x9588bu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A614u)));
    // 095891  call dword ptr [0x8a610]
    X86_AT(c, 0x95891u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A610u))); push32(c, 0x95897u); x86_call(c, t); X86_RET(c, 0x95897u); }
L_95897:
    X86_TICK(c, 11);
    // 095897  mov eax, dword ptr [0x8aa0c]
    X86_AT(c, 0x95897u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AA0Cu)));
    // 09589c  and eax, eax
    X86_AT(c, 0x9589cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 09589e  jg 0x958b2
    X86_AT(c, 0x9589eu);
    if (x86_cc(c, 15)) { goto L_958b2; }
    X86_TICK(c, 9);
    // 0958a0  mov byte ptr [ebp - 9], 0x2d
    X86_AT(c, 0x958a0u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), 0x2Du);
    // 0958a4  and eax, eax
    X86_AT(c, 0x958a4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0958a6  jge 0x958aa
    X86_AT(c, 0x958a6u);
    if (x86_cc(c, 13)) { goto L_958aa; }
    X86_TICK(c, 2);
    // 0958a8  neg eax
    X86_AT(c, 0x958a8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_958aa:
    X86_TICK(c, 11);
    // 0958aa  inc eax
    X86_AT(c, 0x958aau);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0958ab  mov dword ptr [0x8aa0c], eax
    X86_AT(c, 0x958abu);
    wr32((c.sbase[3] + (uint32_t)(0x8AA0Cu)), c.r[0]);
    // 0958b0  jmp 0x958bc
    X86_AT(c, 0x958b0u);
    goto L_958bc;
L_958b2:
    X86_TICK(c, 8);
    // 0958b2  mov byte ptr [ebp - 9], 0x2b
    X86_AT(c, 0x958b2u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), 0x2Bu);
    // 0958b6  dec dword ptr [0x8aa0c]
    X86_AT(c, 0x958b6u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AA0Cu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_958bc:
    X86_TICK(c, 11);
    // 0958bc  mov ebx, 0x1f
    X86_AT(c, 0x958bcu);
    c.r[3] = 0x1Fu;
    // 0958c1  sub esi, esi
    X86_AT(c, 0x958c1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0958c3  jmp 0x958e9
    X86_AT(c, 0x958c3u);
    goto L_958e9;
L_958c5:
    X86_TICK(c, 55);
    // 0958c5  mov eax, dword ptr [0x8aa0c]
    X86_AT(c, 0x958c5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AA0Cu)));
    // 0958ca  cdq 
    X86_AT(c, 0x958cau);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0958cb  mov ecx, 0xa
    X86_AT(c, 0x958cbu);
    c.r[1] = 0xAu;
    // 0958d0  idiv ecx
    X86_AT(c, 0x958d0u);
    x86_idiv(c, c.r[1], 4, 0x958d0u);
    // 0958d2  and edx, edx
    X86_AT(c, 0x958d2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0958d4  jge 0x958d8
    X86_AT(c, 0x958d4u);
    if (x86_cc(c, 13)) { goto L_958d8; }
    X86_TICK(c, 2);
    // 0958d6  add edx, ecx
    X86_AT(c, 0x958d6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[1], 0, 4); }
L_958d8:
    X86_TICK(c, 10);
    // 0958d8  add dx, 0x30
    X86_AT(c, 0x958d8u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x30u, 0, 2)); }
    // 0958dc  mov byte ptr [ebx + 0x8a9db], dl
    X86_AT(c, 0x958dcu);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x8A9DBu)), g8(c, 2));
    // 0958e2  mov dword ptr [0x8aa0c], eax
    X86_AT(c, 0x958e2u);
    wr32((c.sbase[3] + (uint32_t)(0x8AA0Cu)), c.r[0]);
    // 0958e7  dec ebx
    X86_AT(c, 0x958e7u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 0958e8  inc esi
    X86_AT(c, 0x958e8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_958e9:
    X86_TICK(c, 12);
    // 0958e9  cmp dword ptr [0x8aa0c], 0
    X86_AT(c, 0x958e9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8AA0Cu))), 0x0u, 0, 4);
    // 0958f0  jg 0x958c5
    X86_AT(c, 0x958f0u);
    if (x86_cc(c, 15)) { X86_POLL(c, 0x958c5u); goto L_958c5; }
    X86_TICK(c, 7);
    // 0958f2  cmp esi, 2
    X86_AT(c, 0x958f2u);
    (void)x86_sub(c, c.r[6], 0x2u, 0, 4);
    // 0958f5  jl 0x958c5
    X86_AT(c, 0x958f5u);
    if (x86_cc(c, 12)) { X86_POLL(c, 0x958c5u); goto L_958c5; }
    X86_TICK(c, 35);
    // 0958f7  mov al, byte ptr [ebp - 9]
    X86_AT(c, 0x958f7u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))));
    // 0958fa  mov byte ptr [ebx + 0x8a9db], al
    X86_AT(c, 0x958fau);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x8A9DBu)), g8(c, 0));
    // 095900  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x95900u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 095903  mov al, byte ptr [eax + 8]
    X86_AT(c, 0x95903u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u))));
    // 095906  mov byte ptr [ebx + 0x8a9da], al
    X86_AT(c, 0x95906u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x8A9DAu)), g8(c, 0));
    // 09590c  lea eax, [esi + 2]
    X86_AT(c, 0x9590cu);
    c.r[0] = (uint32_t)(c.r[6] + 0x2u);
    // 09590f  push eax
    X86_AT(c, 0x9590fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095910  lea eax, [ebx + 0x8a9da]
    X86_AT(c, 0x95910u);
    c.r[0] = (uint32_t)(c.r[3] + 0x8A9DAu);
    // 095916  push eax
    X86_AT(c, 0x95916u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095917  mov ecx, dword ptr [0x8a614]
    X86_AT(c, 0x95917u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A614u)));
    // 09591d  call dword ptr [0x8a610]
    X86_AT(c, 0x9591du);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A610u))); push32(c, 0x95923u); x86_call(c, t); X86_RET(c, 0x95923u); }
    X86_TICK(c, 28);
    // 095923  pop edi
    X86_AT(c, 0x95923u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095924  pop esi
    X86_AT(c, 0x95924u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 095925  pop ebx
    X86_AT(c, 0x95925u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 095926  leave 
    X86_AT(c, 0x95926u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095927  ret 
    X86_AT(c, 0x95927u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x957c0u, "ran off the end of a function");
}
void f_00095940(X86Cpu& c) {
    X86_TICK(c, 22);
    // 095940  push ebp
    X86_AT(c, 0x95940u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 095941  mov ebp, esp
    X86_AT(c, 0x95941u);
    c.r[5] = c.r[4];
    // 095943  push ecx
    X86_AT(c, 0x95943u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 095944  sub esp, 0xc
    X86_AT(c, 0x95944u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 095947  mov byte ptr [ebp - 9], 0
    X86_AT(c, 0x95947u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), 0x0u);
    // 09594b  cmp byte ptr [0x8a608], 3
    X86_AT(c, 0x9594bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A608u))), 0x3u, 0, 1);
    // 095952  jne 0x9595d
    X86_AT(c, 0x95952u);
    if (x86_cc(c, 5)) { goto L_9595d; }
    X86_TICK(c, 9);
    // 095954  mov dword ptr [ebp - 8], 0x12
    X86_AT(c, 0x95954u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x12u);
    // 09595b  jmp 0x95964
    X86_AT(c, 0x9595bu);
    goto L_95964;
L_9595d:
    X86_TICK(c, 2);
    // 09595d  mov dword ptr [ebp - 8], 0x10
    X86_AT(c, 0x9595du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x10u);
L_95964:
    X86_TICK(c, 13);
    // 095964  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0x95964u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 095968  cmp eax, 0x45
    X86_AT(c, 0x95968u);
    (void)x86_sub(c, c.r[0], 0x45u, 0, 4);
    // 09596b  je 0x959bc
    X86_AT(c, 0x9596bu);
    if (x86_cc(c, 4)) { goto L_959bc; }
    X86_TICK(c, 7);
    // 09596d  cmp eax, 0x47
    X86_AT(c, 0x9596du);
    (void)x86_sub(c, c.r[0], 0x47u, 0, 4);
    // 095970  je 0x95989
    X86_AT(c, 0x95970u);
    if (x86_cc(c, 4)) { goto L_95989; }
    X86_TICK(c, 7);
    // 095972  cmp eax, 0x65
    X86_AT(c, 0x95972u);
    (void)x86_sub(c, c.r[0], 0x65u, 0, 4);
    // 095975  je 0x959bc
    X86_AT(c, 0x95975u);
    if (x86_cc(c, 4)) { goto L_959bc; }
    X86_TICK(c, 7);
    // 095977  cmp eax, 0x66
    X86_AT(c, 0x95977u);
    (void)x86_sub(c, c.r[0], 0x66u, 0, 4);
    // 09597a  je 0x959eb
    X86_AT(c, 0x9597au);
    if (x86_cc(c, 4)) { goto L_959eb; }
    X86_TICK(c, 7);
    // 095980  cmp eax, 0x67
    X86_AT(c, 0x95980u);
    (void)x86_sub(c, c.r[0], 0x67u, 0, 4);
    // 095983  jne 0x959f2
    X86_AT(c, 0x95983u);
    if (x86_cc(c, 5)) { goto L_959f2; }
L_95989:
    X86_TICK(c, 12);
    // 095989  cmp dword ptr [0x8a604], 0
    X86_AT(c, 0x95989u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8A604u))), 0x0u, 0, 4);
    // 095990  je 0x959f2
    X86_AT(c, 0x95990u);
    if (x86_cc(c, 4)) { goto L_959f2; }
    X86_TICK(c, 12);
    // 095992  test byte ptr [0x8a5fc], 8
    X86_AT(c, 0x95992u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A5FCu))) & 0x8u, 1);
    // 095999  jne 0x9599f
    X86_AT(c, 0x95999u);
    if (x86_cc(c, 5)) { goto L_9599f; }
    X86_TICK(c, 2);
    // 09599b  mov byte ptr [ebp - 9], 1
    X86_AT(c, 0x9599bu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), 0x1u);
L_9599f:
    X86_TICK(c, 13);
    // 09599f  mov eax, dword ptr [0x8aa0c]
    X86_AT(c, 0x9599fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AA0Cu)));
    // 0959a4  dec eax
    X86_AT(c, 0x959a4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0959a5  cmp eax, 0xfffffffc
    X86_AT(c, 0x959a5u);
    (void)x86_sub(c, c.r[0], 0xFFFFFFFCu, 0, 4);
    // 0959a8  jl 0x959b2
    X86_AT(c, 0x959a8u);
    if (x86_cc(c, 12)) { goto L_959b2; }
    X86_TICK(c, 11);
    // 0959aa  cmp eax, dword ptr [0x8a604]
    X86_AT(c, 0x959aau);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x8A604u))), 0, 4);
    // 0959b0  jle 0x959c5
    X86_AT(c, 0x959b0u);
    if (x86_cc(c, 14)) { goto L_959c5; }
L_959b2:
    X86_TICK(c, 13);
    // 0959b2  sub byte ptr [ebp + 8], 2
    X86_AT(c, 0x959b2u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)); uint32_t v = rd8(ea); wr8(ea, x86_sub(c, v, 0x2u, 0, 1)); }
    // 0959b6  dec dword ptr [0x8a604]
    X86_AT(c, 0x959b6u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A604u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_959bc:
    X86_TICK(c, 9);
    // 0959bc  mov ecx, ebp
    X86_AT(c, 0x959bcu);
    c.r[1] = c.r[5];
    // 0959be  call 0x957c0
    X86_AT(c, 0x959beu);
    push32(c, 0x959c3u); x86_call_known(c, 0x957c0u, f_000957c0); X86_RET(c, 0x959c3u);
    X86_TICK(c, 7);
    // 0959c3  jmp 0x959f2
    X86_AT(c, 0x959c3u);
    goto L_959f2;
L_959c5:
    X86_TICK(c, 13);
    // 0959c5  mov byte ptr [ebp + 8], 0x66
    X86_AT(c, 0x959c5u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)), 0x66u);
    // 0959c9  mov eax, dword ptr [0x8aa0c]
    X86_AT(c, 0x959c9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AA0Cu)));
    // 0959ce  and eax, eax
    X86_AT(c, 0x959ceu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0959d0  jle 0x959e5
    X86_AT(c, 0x959d0u);
    if (x86_cc(c, 14)) { goto L_959e5; }
    X86_TICK(c, 11);
    // 0959d2  mov edx, dword ptr [0x8a604]
    X86_AT(c, 0x959d2u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A604u)));
    // 0959d8  cmp edx, eax
    X86_AT(c, 0x959d8u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0959da  jb 0x959dd
    X86_AT(c, 0x959dau);
    if (x86_cc(c, 2)) { goto L_959dd; }
    X86_TICK(c, 3);
    // 0959dc  xchg edx, eax
    X86_AT(c, 0x959dcu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_959dd:
    X86_TICK(c, 14);
    // 0959dd  sub dword ptr [0x8a604], edx
    X86_AT(c, 0x959ddu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A604u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], 0, 4)); }
    // 0959e3  jmp 0x959eb
    X86_AT(c, 0x959e3u);
    goto L_959eb;
L_959e5:
    X86_TICK(c, 6);
    // 0959e5  dec dword ptr [0x8a604]
    X86_AT(c, 0x959e5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A604u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_959eb:
    X86_TICK(c, 9);
    // 0959eb  mov ecx, ebp
    X86_AT(c, 0x959ebu);
    c.r[1] = c.r[5];
    // 0959ed  call 0x95530
    X86_AT(c, 0x959edu);
    push32(c, 0x959f2u); x86_call_known(c, 0x95530u, f_00095530); X86_RET(c, 0x959f2u);
L_959f2:
    X86_TICK(c, 16);
    // 0959f2  leave 
    X86_AT(c, 0x959f2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0959f3  ret 4
    X86_AT(c, 0x959f3u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x95940u, "ran off the end of a function");
}
void f_00095a14(X86Cpu& c) {
    X86_TICK(c, 21);
    // 095a14  push ebp
    X86_AT(c, 0x95a14u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 095a15  mov ebp, esp
    X86_AT(c, 0x95a15u);
    c.r[5] = c.r[4];
    // 095a17  push ecx
    X86_AT(c, 0x95a17u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 095a18  push esi
    X86_AT(c, 0x95a18u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095a19  push edi
    X86_AT(c, 0x95a19u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095a1a  mov esi, dword ptr [0x8aa0c]
    X86_AT(c, 0x95a1au);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x8AA0Cu)));
    // 095a20  and esi, esi
    X86_AT(c, 0x95a20u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 095a22  jge 0x95a26
    X86_AT(c, 0x95a22u);
    if (x86_cc(c, 13)) { goto L_95a26; }
    X86_TICK(c, 2);
    // 095a24  neg esi
    X86_AT(c, 0x95a24u);
    { uint32_t v = c.r[6]; c.r[6] = x86_neg(c, v, 4); }
L_95a26:
    X86_TICK(c, 9);
    // 095a26  mov edi, 2
    X86_AT(c, 0x95a26u);
    c.r[7] = 0x2u;
    // 095a2b  jmp 0x95a38
    X86_AT(c, 0x95a2bu);
    goto L_95a38;
L_95a2d:
    X86_TICK(c, 52);
    // 095a2d  xchg esi, eax
    X86_AT(c, 0x95a2du);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 095a2e  cdq 
    X86_AT(c, 0x95a2eu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 095a2f  mov ecx, 0xa
    X86_AT(c, 0x95a2fu);
    c.r[1] = 0xAu;
    // 095a34  idiv ecx
    X86_AT(c, 0x95a34u);
    x86_idiv(c, c.r[1], 4, 0x95a34u);
    // 095a36  xchg esi, eax
    X86_AT(c, 0x95a36u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 095a37  inc edi
    X86_AT(c, 0x95a37u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_95a38:
    X86_TICK(c, 7);
    // 095a38  cmp esi, 0x63
    X86_AT(c, 0x95a38u);
    (void)x86_sub(c, c.r[6], 0x63u, 0, 4);
    // 095a3b  jg 0x95a2d
    X86_AT(c, 0x95a3bu);
    if (x86_cc(c, 15)) { X86_POLL(c, 0x95a2du); goto L_95a2d; }
    X86_TICK(c, 46);
    // 095a3d  mov al, byte ptr [0x8aa23]
    X86_AT(c, 0x95a3du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8AA23u))));
    // 095a42  inc eax
    X86_AT(c, 0x95a42u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 095a43  movzx eax, al
    X86_AT(c, 0x95a43u);
    c.r[0] = g8(c, 0);
    // 095a46  add eax, dword ptr [0x8a604]
    X86_AT(c, 0x95a46u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0x8A604u))), 0, 4); }
    // 095a4c  add eax, 2
    X86_AT(c, 0x95a4cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 095a4f  lea edx, [edi + eax*1]
    X86_AT(c, 0x95a4fu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 095a52  xchg edx, eax
    X86_AT(c, 0x95a52u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 095a53  pop edi
    X86_AT(c, 0x95a53u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095a54  pop esi
    X86_AT(c, 0x95a54u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 095a55  leave 
    X86_AT(c, 0x95a55u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095a56  ret 
    X86_AT(c, 0x95a56u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x95a14u, "ran off the end of a function");
}
void f_00095a68(X86Cpu& c) {
    X86_TICK(c, 25);
    // 095a68  enter 0x30, 0
    X86_AT(c, 0x95a68u);
    x86_enter(c, 0x30u, 0x0u, 4);
    // 095a6c  push ebx
    X86_AT(c, 0x95a6cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 095a6d  push esi
    X86_AT(c, 0x95a6du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095a6e  push edi
    X86_AT(c, 0x95a6eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095a6f  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0x95a6fu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 095a72  mov ecx, ebp
    X86_AT(c, 0x95a72u);
    c.r[1] = c.r[5];
    // 095a74  call 0x953c8
    X86_AT(c, 0x95a74u);
    push32(c, 0x95a79u); x86_call_known(c, 0x953c8u, f_000953c8); X86_RET(c, 0x95a79u);
    X86_TICK(c, 12);
    // 095a79  cmp dword ptr [0x8a604], 0xffff
    X86_AT(c, 0x95a79u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8A604u))), 0xFFFFu, 0, 4);
    // 095a83  jne 0x95a8f
    X86_AT(c, 0x95a83u);
    if (x86_cc(c, 5)) { goto L_95a8f; }
    X86_TICK(c, 2);
    // 095a85  mov dword ptr [0x8a604], 6
    X86_AT(c, 0x95a85u);
    wr32((c.sbase[3] + (uint32_t)(0x8A604u)), 0x6u);
L_95a8f:
    X86_TICK(c, 12);
    // 095a8f  cmp byte ptr [0x8a608], 3
    X86_AT(c, 0x95a8fu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A608u))), 0x3u, 0, 1);
    // 095a96  jne 0x95a9f
    X86_AT(c, 0x95a96u);
    if (x86_cc(c, 5)) { goto L_95a9f; }
    X86_TICK(c, 9);
    // 095a98  mov edi, 0x12
    X86_AT(c, 0x95a98u);
    c.r[7] = 0x12u;
    // 095a9d  jmp 0x95aa4
    X86_AT(c, 0x95a9du);
    goto L_95aa4;
L_95a9f:
    X86_TICK(c, 2);
    // 095a9f  mov edi, 0x10
    X86_AT(c, 0x95a9fu);
    c.r[7] = 0x10u;
L_95aa4:
    X86_TICK(c, 39);
    // 095aa4  lea esi, [ebp - 0x18]
    X86_AT(c, 0x95aa4u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFE8u);
    // 095aa7  push esi
    X86_AT(c, 0x95aa7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095aa8  push edi
    X86_AT(c, 0x95aa8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095aa9  push dword ptr [0x8a604]
    X86_AT(c, 0x95aa9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A604u))); push32(c, v); }
    // 095aaf  push ebx
    X86_AT(c, 0x95aafu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 095ab0  push dword ptr [ebp + 0x10]
    X86_AT(c, 0x95ab0u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 095ab3  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x95ab3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 095ab6  push dword ptr [ebp + 8]
    X86_AT(c, 0x95ab6u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 095ab9  lea eax, [ebp - 0x30]
    X86_AT(c, 0x95ab9u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD0u);
    // 095abc  push eax
    X86_AT(c, 0x95abcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095abd  call 0x95134
    X86_AT(c, 0x95abdu);
    push32(c, 0x95ac2u); x86_call_known(c, 0x95134u, f_00095134); X86_RET(c, 0x95ac2u);
    X86_TICK(c, 30);
    // 095ac2  lea esi, [ebp - 0x30]
    X86_AT(c, 0x95ac2u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFD0u);
    // 095ac5  push edi
    X86_AT(c, 0x95ac5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095ac6  mov edi, 0x8aa0c
    X86_AT(c, 0x95ac6u);
    c.r[7] = 0x8AA0Cu;
    // 095acb  mov ecx, 0x17
    X86_AT(c, 0x95acbu);
    c.r[1] = 0x17u;
    // 095ad0  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x95ad0u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 095ad2  pop edi
    X86_AT(c, 0x95ad2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095ad3  mov ax, word ptr [ebp - 0x18]
    X86_AT(c, 0x95ad3u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))));
    // 095ad7  and ax, ax
    X86_AT(c, 0x95ad7u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 095ada  je 0x95aff
    X86_AT(c, 0x95adau);
    if (x86_cc(c, 4)) { goto L_95aff; }
    X86_TICK(c, 12);
    // 095adc  movzx eax, ax
    X86_AT(c, 0x95adcu);
    c.r[0] = (c.r[0] & 0xFFFFu);
    // 095adf  push eax
    X86_AT(c, 0x95adfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095ae0  call 0x93a14
    X86_AT(c, 0x95ae0u);
    push32(c, 0x95ae5u); x86_call_known(c, 0x93a14u, f_00093a14); X86_RET(c, 0x95ae5u);
    X86_TICK(c, 23);
    // 095ae5  movzx eax, word ptr [ebp - 0x18]
    X86_AT(c, 0x95ae5u);
    c.r[0] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 095ae9  push eax
    X86_AT(c, 0x95ae9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095aea  lea eax, [ebp - 0x16]
    X86_AT(c, 0x95aeau);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFEAu);
    // 095aed  push eax
    X86_AT(c, 0x95aedu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095aee  mov ecx, dword ptr [0x8a614]
    X86_AT(c, 0x95aeeu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A614u)));
    // 095af4  call dword ptr [0x8a610]
    X86_AT(c, 0x95af4u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A610u))); push32(c, 0x95afau); x86_call(c, t); X86_RET(c, 0x95afau); }
    X86_TICK(c, 7);
    // 095afa  jmp 0x95c03
    X86_AT(c, 0x95afau);
    goto L_95c03;
L_95aff:
    X86_TICK(c, 12);
    // 095aff  cmp dword ptr [0x8a604], 0
    X86_AT(c, 0x95affu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8A604u))), 0x0u, 0, 4);
    // 095b06  jne 0x95b17
    X86_AT(c, 0x95b06u);
    if (x86_cc(c, 5)) { goto L_95b17; }
    X86_TICK(c, 12);
    // 095b08  test byte ptr [0x8a5fc], 8
    X86_AT(c, 0x95b08u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A5FCu))) & 0x8u, 1);
    // 095b0f  jne 0x95b17
    X86_AT(c, 0x95b0fu);
    if (x86_cc(c, 5)) { goto L_95b17; }
    X86_TICK(c, 9);
    // 095b11  mov byte ptr [ebp - 0x19], 0
    X86_AT(c, 0x95b11u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE7u)), 0x0u);
    // 095b15  jmp 0x95b1b
    X86_AT(c, 0x95b15u);
    goto L_95b1b;
L_95b17:
    X86_TICK(c, 2);
    // 095b17  mov byte ptr [ebp - 0x19], 1
    X86_AT(c, 0x95b17u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE7u)), 0x1u);
L_95b1b:
    X86_TICK(c, 16);
    // 095b1b  mov al, byte ptr [ebp - 0x19]
    X86_AT(c, 0x95b1bu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE7u))));
    // 095b1e  mov byte ptr [0x8aa23], al
    X86_AT(c, 0x95b1eu);
    wr8((c.sbase[3] + (uint32_t)(0x8AA23u)), g8(c, 0));
    // 095b23  movzx eax, bl
    X86_AT(c, 0x95b23u);
    c.r[0] = g8(c, 3);
    // 095b26  cmp eax, 0x45
    X86_AT(c, 0x95b26u);
    (void)x86_sub(c, c.r[0], 0x45u, 0, 4);
    // 095b29  je 0x95b65
    X86_AT(c, 0x95b29u);
    if (x86_cc(c, 4)) { goto L_95b65; }
    X86_TICK(c, 7);
    // 095b2b  cmp eax, 0x47
    X86_AT(c, 0x95b2bu);
    (void)x86_sub(c, c.r[0], 0x47u, 0, 4);
    // 095b2e  je 0x95b6e
    X86_AT(c, 0x95b2eu);
    if (x86_cc(c, 4)) { goto L_95b6e; }
    X86_TICK(c, 7);
    // 095b30  cmp eax, 0x65
    X86_AT(c, 0x95b30u);
    (void)x86_sub(c, c.r[0], 0x65u, 0, 4);
    // 095b33  je 0x95b65
    X86_AT(c, 0x95b33u);
    if (x86_cc(c, 4)) { goto L_95b65; }
    X86_TICK(c, 7);
    // 095b35  cmp eax, 0x66
    X86_AT(c, 0x95b35u);
    (void)x86_sub(c, c.r[0], 0x66u, 0, 4);
    // 095b38  je 0x95b44
    X86_AT(c, 0x95b38u);
    if (x86_cc(c, 4)) { goto L_95b44; }
    X86_TICK(c, 7);
    // 095b3a  cmp eax, 0x67
    X86_AT(c, 0x95b3au);
    (void)x86_sub(c, c.r[0], 0x67u, 0, 4);
    // 095b3d  je 0x95b6e
    X86_AT(c, 0x95b3du);
    if (x86_cc(c, 4)) { goto L_95b6e; }
    X86_TICK(c, 7);
    // 095b3f  jmp 0x95be4
    X86_AT(c, 0x95b3fu);
    goto L_95be4;
L_95b44:
    X86_TICK(c, 13);
    // 095b44  mov eax, 1
    X86_AT(c, 0x95b44u);
    c.r[0] = 0x1u;
    // 095b49  mov edx, dword ptr [0x8aa0c]
    X86_AT(c, 0x95b49u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8AA0Cu)));
    // 095b4f  cmp eax, edx
    X86_AT(c, 0x95b4fu);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 095b51  jl 0x95b54
    X86_AT(c, 0x95b51u);
    if (x86_cc(c, 12)) { goto L_95b54; }
    X86_TICK(c, 3);
    // 095b53  xchg edx, eax
    X86_AT(c, 0x95b53u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_95b54:
    X86_TICK(c, 21);
    // 095b54  add edx, dword ptr [0x8a604]
    X86_AT(c, 0x95b54u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0x8A604u))), 0, 4); }
    // 095b5a  movzx eax, byte ptr [0x8aa23]
    X86_AT(c, 0x95b5au);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0x8AA23u)));
    // 095b61  add eax, edx
    X86_AT(c, 0x95b61u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 095b63  jmp 0x95b9e
    X86_AT(c, 0x95b63u);
    goto L_95b9e;
L_95b65:
    X86_TICK(c, 9);
    // 095b65  mov ecx, ebp
    X86_AT(c, 0x95b65u);
    c.r[1] = c.r[5];
    // 095b67  call 0x95a14
    X86_AT(c, 0x95b67u);
    push32(c, 0x95b6cu); x86_call_known(c, 0x95a14u, f_00095a14); X86_RET(c, 0x95b6cu);
    X86_TICK(c, 7);
    // 095b6c  jmp 0x95b9e
    X86_AT(c, 0x95b6cu);
    goto L_95b9e;
L_95b6e:
    X86_TICK(c, 12);
    // 095b6e  cmp dword ptr [0x8a604], 0
    X86_AT(c, 0x95b6eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8A604u))), 0x0u, 0, 4);
    // 095b75  jne 0x95b83
    X86_AT(c, 0x95b75u);
    if (x86_cc(c, 5)) { goto L_95b83; }
    X86_TICK(c, 9);
    // 095b77  mov dword ptr [0x8aa08], 0
    X86_AT(c, 0x95b77u);
    wr32((c.sbase[3] + (uint32_t)(0x8AA08u)), 0x0u);
    // 095b81  jmp 0x95be4
    X86_AT(c, 0x95b81u);
    goto L_95be4;
L_95b83:
    X86_TICK(c, 13);
    // 095b83  mov eax, dword ptr [0x8aa0c]
    X86_AT(c, 0x95b83u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AA0Cu)));
    // 095b88  dec eax
    X86_AT(c, 0x95b88u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 095b89  cmp eax, 0xfffffffc
    X86_AT(c, 0x95b89u);
    (void)x86_sub(c, c.r[0], 0xFFFFFFFCu, 0, 4);
    // 095b8c  jl 0x95b96
    X86_AT(c, 0x95b8cu);
    if (x86_cc(c, 12)) { goto L_95b96; }
    X86_TICK(c, 11);
    // 095b8e  cmp eax, dword ptr [0x8a604]
    X86_AT(c, 0x95b8eu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x8A604u))), 0, 4);
    // 095b94  jle 0x95ba5
    X86_AT(c, 0x95b94u);
    if (x86_cc(c, 14)) { goto L_95ba5; }
L_95b96:
    X86_TICK(c, 9);
    // 095b96  mov ecx, ebp
    X86_AT(c, 0x95b96u);
    c.r[1] = c.r[5];
    // 095b98  call 0x95a14
    X86_AT(c, 0x95b98u);
    push32(c, 0x95b9du); x86_call_known(c, 0x95a14u, f_00095a14); X86_RET(c, 0x95b9du);
    X86_TICK(c, 2);
    // 095b9d  dec eax
    X86_AT(c, 0x95b9du);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
L_95b9e:
    X86_TICK(c, 9);
    // 095b9e  mov dword ptr [0x8aa08], eax
    X86_AT(c, 0x95b9eu);
    wr32((c.sbase[3] + (uint32_t)(0x8AA08u)), c.r[0]);
    // 095ba3  jmp 0x95bde
    X86_AT(c, 0x95ba3u);
    goto L_95bde;
L_95ba5:
    X86_TICK(c, 42);
    // 095ba5  movzx eax, byte ptr [0x8aa23]
    X86_AT(c, 0x95ba5u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0x8AA23u)));
    // 095bac  add eax, dword ptr [0x8a604]
    X86_AT(c, 0x95bacu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0x8A604u))), 0, 4); }
    // 095bb2  mov edx, dword ptr [0x8aa0c]
    X86_AT(c, 0x95bb2u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8AA0Cu)));
    // 095bb8  dec edx
    X86_AT(c, 0x95bb8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 095bb9  mov ecx, dword ptr [0x8a604]
    X86_AT(c, 0x95bb9u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A604u)));
    // 095bbf  cmp edx, ecx
    X86_AT(c, 0x95bbfu);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 095bc1  sete dl
    X86_AT(c, 0x95bc1u);
    s8(c, 2, x86_cc(c, 4) ? 1u : 0u);
    // 095bc4  movzx edx, dl
    X86_AT(c, 0x95bc4u);
    c.r[2] = g8(c, 2);
    // 095bc7  add edx, eax
    X86_AT(c, 0x95bc7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 095bc9  mov dword ptr [0x8aa08], edx
    X86_AT(c, 0x95bc9u);
    wr32((c.sbase[3] + (uint32_t)(0x8AA08u)), c.r[2]);
    // 095bcf  and ecx, ecx
    X86_AT(c, 0x95bcfu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[1], 4); }
    // 095bd1  jne 0x95bd9
    X86_AT(c, 0x95bd1u);
    if (x86_cc(c, 5)) { goto L_95bd9; }
    X86_TICK(c, 6);
    // 095bd3  inc dword ptr [0x8aa08]
    X86_AT(c, 0x95bd3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AA08u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_95bd9:
    X86_TICK(c, 4);
    // 095bd9  mov eax, dword ptr [0x8aa08]
    X86_AT(c, 0x95bd9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AA08u)));
L_95bde:
    X86_TICK(c, 7);
    // 095bde  add dword ptr [0x8a60c], eax
    X86_AT(c, 0x95bdeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A60Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
L_95be4:
    X86_TICK(c, 13);
    // 095be4  mov byte ptr [0x8aa00], 0
    X86_AT(c, 0x95be4u);
    wr8((c.sbase[3] + (uint32_t)(0x8AA00u)), 0x0u);
    // 095beb  push ebx
    X86_AT(c, 0x95bebu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 095bec  mov ecx, ebp
    X86_AT(c, 0x95becu);
    c.r[1] = c.r[5];
    // 095bee  call 0x95940
    X86_AT(c, 0x95beeu);
    push32(c, 0x95bf3u); x86_call_known(c, 0x95940u, f_00095940); X86_RET(c, 0x95bf3u);
    X86_TICK(c, 12);
    // 095bf3  cmp byte ptr [0x8aa00], 0
    X86_AT(c, 0x95bf3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8AA00u))), 0x0u, 0, 1);
    // 095bfa  jne 0x95c03
    X86_AT(c, 0x95bfau);
    if (x86_cc(c, 5)) { goto L_95c03; }
    X86_TICK(c, 9);
    // 095bfc  mov ecx, ebp
    X86_AT(c, 0x95bfcu);
    c.r[1] = c.r[5];
    // 095bfe  call 0x95364
    X86_AT(c, 0x95bfeu);
    push32(c, 0x95c03u); x86_call_known(c, 0x95364u, f_00095364); X86_RET(c, 0x95c03u);
L_95c03:
    X86_TICK(c, 28);
    // 095c03  pop edi
    X86_AT(c, 0x95c03u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095c04  pop esi
    X86_AT(c, 0x95c04u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 095c05  pop ebx
    X86_AT(c, 0x95c05u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 095c06  leave 
    X86_AT(c, 0x95c06u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095c07  ret 0x10
    X86_AT(c, 0x95c07u);
    c.eip = pop32(c); c.r[4] += 0x10u; return;
    x86_fault(c, 0x95a68u, "ran off the end of a function");
}
void f_00095c28(X86Cpu& c) {
L_95c28:
    X86_TICK(c, 13);
    // 095c28  mov eax, dword ptr [0x8aa24]
    X86_AT(c, 0x95c28u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AA24u)));
    // 095c2d  mov edx, 0x95c0c
    X86_AT(c, 0x95c2du);
    c.r[2] = 0x95C0Cu;
    // 095c32  cmp edx, eax
    X86_AT(c, 0x95c32u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 095c34  je 0x95c3f
    X86_AT(c, 0x95c34u);
    if (x86_cc(c, 4)) { goto L_95c3f; }
    X86_TICK(c, 7);
    // 095c36  call eax
    X86_AT(c, 0x95c36u);
    { uint32_t t = c.r[0]; push32(c, 0x95c38u); x86_call(c, t); X86_RET(c, 0x95c38u); }
    X86_TICK(c, 9);
    // 095c38  mov dword ptr [0x8aa24], eax
    X86_AT(c, 0x95c38u);
    wr32((c.sbase[3] + (uint32_t)(0x8AA24u)), c.r[0]);
    // 095c3d  jmp 0x95c28
    X86_AT(c, 0x95c3du);
    X86_POLL(c, 0x95c28u); goto L_95c28;
L_95c3f:
    X86_TICK(c, 10);
    // 095c3f  ret 
    X86_AT(c, 0x95c3fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x95c28u, "ran off the end of a function");
}
void f_00095c50(X86Cpu& c) {
    X86_TICK(c, 23);
    // 095c50  enter 4, 0
    X86_AT(c, 0x95c50u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 095c54  mov al, byte ptr [ebp + 8]
    X86_AT(c, 0x95c54u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 095c57  add al, 0x30
    X86_AT(c, 0x95c57u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x30u, 0, 1)); }
    // 095c59  mov byte ptr [ebp - 2], al
    X86_AT(c, 0x95c59u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 095c5c  push 0x1a84
    X86_AT(c, 0x95c5cu);
    { uint32_t v = 0x1A84u; push32(c, v); }
    // 095c61  call 0x95d68
    X86_AT(c, 0x95c61u);
    push32(c, 0x95c66u); x86_call_known(c, 0x95d68u, f_00095d68); X86_RET(c, 0x95c66u);
    X86_TICK(c, 11);
    // 095c66  lea eax, [ebp - 4]
    X86_AT(c, 0x95c66u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 095c69  push eax
    X86_AT(c, 0x95c69u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095c6a  call 0x95d68
    X86_AT(c, 0x95c6au);
    push32(c, 0x95c6fu); x86_call_known(c, 0x95d68u, f_00095d68); X86_RET(c, 0x95c6fu);
    X86_TICK(c, 7);
    // 095c6f  call 0x95d84
    X86_AT(c, 0x95c6fu);
    push32(c, 0x95c74u); x86_call_known(c, 0x95d84u, f_00095d84); X86_RET(c, 0x95c74u);
    X86_TICK(c, 13);
    // 095c74  mov ax, word ptr [0x8aa2c]
    X86_AT(c, 0x95c74u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8AA2Cu))));
    // 095c7a  push eax
    X86_AT(c, 0x95c7au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095c7b  call 0x95d54
    X86_AT(c, 0x95c7bu);
    push32(c, 0x95c80u); x86_call_known(c, 0x95d54u, f_00095d54); X86_RET(c, 0x95c80u);
    X86_TICK(c, 9);
    // 095c80  push 0x1aa0
    X86_AT(c, 0x95c80u);
    { uint32_t v = 0x1AA0u; push32(c, v); }
    // 095c85  call 0x95d68
    X86_AT(c, 0x95c85u);
    push32(c, 0x95c8au); x86_call_known(c, 0x95d68u, f_00095d68); X86_RET(c, 0x95c8au);
    X86_TICK(c, 7);
    // 095c8a  call 0x95d84
    X86_AT(c, 0x95c8au);
    push32(c, 0x95c8fu); x86_call_known(c, 0x95d84u, f_00095d84); X86_RET(c, 0x95c8fu);
    X86_TICK(c, 9);
    // 095c8f  push 0xffffffff
    X86_AT(c, 0x95c8fu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 095c91  call 0x94dec
    X86_AT(c, 0x95c91u);
    push32(c, 0x95c96u); x86_call_known(c, 0x94decu, f_00094dec); X86_RET(c, 0x95c96u);
    X86_TICK(c, 16);
    // 095c96  leave 
    X86_AT(c, 0x95c96u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095c97  ret 8
    X86_AT(c, 0x95c97u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x95c50u, "ran off the end of a function");
}
void f_00095cb8(X86Cpu& c) {
    X86_TICK(c, 95);
    // 095cb8  push esi
    X86_AT(c, 0x95cb8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095cb9  push edi
    X86_AT(c, 0x95cb9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095cba  push ebx
    X86_AT(c, 0x95cbau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 095cbb  push ebp
    X86_AT(c, 0x95cbbu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 095cbc  push ds
    X86_AT(c, 0x95cbcu);
    push32(c, c.sreg[3]);
    // 095cbd  push es
    X86_AT(c, 0x95cbdu);
    push32(c, c.sreg[0]);
    // 095cbe  mov eax, dword ptr [0x8a974]
    X86_AT(c, 0x95cbeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A974u)));
    // 095cc3  mov ebx, dword ptr [0x8a978]
    X86_AT(c, 0x95cc3u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0x8A978u)));
    // 095cc9  mov ecx, dword ptr [0x8a97c]
    X86_AT(c, 0x95cc9u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A97Cu)));
    // 095ccf  mov edx, dword ptr [0x8a980]
    X86_AT(c, 0x95ccfu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A980u)));
    // 095cd5  mov esi, dword ptr [0x8a984]
    X86_AT(c, 0x95cd5u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x8A984u)));
    // 095cdb  mov edi, dword ptr [0x8a988]
    X86_AT(c, 0x95cdbu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0x8A988u)));
    // 095ce1  push dword ptr [0x8a990]
    X86_AT(c, 0x95ce1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A990u))); push32(c, v); }
    // 095ce7  pop es
    X86_AT(c, 0x95ce7u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 095ce8  push ds
    X86_AT(c, 0x95ce8u);
    push32(c, c.sreg[3]);
    // 095ce9  push dword ptr [0x8a98c]
    X86_AT(c, 0x95ce9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A98Cu))); push32(c, v); }
    // 095cef  pop ds
    X86_AT(c, 0x95cefu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 095cf0  clc 
    X86_AT(c, 0x95cf0u);
    c.fl &= ~X86_CF;
    // 095cf1  int 0x21
    X86_AT(c, 0x95cf1u);
    x86_int(c, 0x21, 0x95cf3u);
    X86_TICK(c, 77);
    // 095cf3  pop ebp
    X86_AT(c, 0x95cf3u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 095cf4  push ds
    X86_AT(c, 0x95cf4u);
    push32(c, c.sreg[3]);
    // 095cf5  mov ds, ebp
    X86_AT(c, 0x95cf5u);
    x86_load_seg(c, 3, (c.r[5] & 0xFFFFu) & 0xFFFFu);
    // 095cf7  pop dword ptr [0x8a98c]
    X86_AT(c, 0x95cf7u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0x8A98Cu)), v); }
    // 095cfd  push es
    X86_AT(c, 0x95cfdu);
    push32(c, c.sreg[0]);
    // 095cfe  pop dword ptr [0x8a990]
    X86_AT(c, 0x95cfeu);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0x8A990u)), v); }
    // 095d04  mov dword ptr [0x8a974], eax
    X86_AT(c, 0x95d04u);
    wr32((c.sbase[3] + (uint32_t)(0x8A974u)), c.r[0]);
    // 095d09  mov dword ptr [0x8a978], ebx
    X86_AT(c, 0x95d09u);
    wr32((c.sbase[3] + (uint32_t)(0x8A978u)), c.r[3]);
    // 095d0f  mov dword ptr [0x8a97c], ecx
    X86_AT(c, 0x95d0fu);
    wr32((c.sbase[3] + (uint32_t)(0x8A97Cu)), c.r[1]);
    // 095d15  mov dword ptr [0x8a980], edx
    X86_AT(c, 0x95d15u);
    wr32((c.sbase[3] + (uint32_t)(0x8A980u)), c.r[2]);
    // 095d1b  mov dword ptr [0x8a984], esi
    X86_AT(c, 0x95d1bu);
    wr32((c.sbase[3] + (uint32_t)(0x8A984u)), c.r[6]);
    // 095d21  mov dword ptr [0x8a988], edi
    X86_AT(c, 0x95d21u);
    wr32((c.sbase[3] + (uint32_t)(0x8A988u)), c.r[7]);
    // 095d27  pushf 
    X86_AT(c, 0x95d27u);
    push16(c, c.fl & 0xFFFFu);
    // 095d29  pop word ptr [0x8a994]
    X86_AT(c, 0x95d29u);
    { uint32_t v = pop16(c); wr16((c.sbase[3] + (uint32_t)(0x8A994u)), v); }
    // 095d30  pop es
    X86_AT(c, 0x95d30u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 095d31  pop ds
    X86_AT(c, 0x95d31u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 095d32  pop ebp
    X86_AT(c, 0x95d32u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 095d33  pop ebx
    X86_AT(c, 0x95d33u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 095d34  pop edi
    X86_AT(c, 0x95d34u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095d35  pop esi
    X86_AT(c, 0x95d35u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 095d36  ret 
    X86_AT(c, 0x95d36u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x95cb8u, "ran off the end of a function");
}
void f_00095d54(X86Cpu& c) {
    X86_TICK(c, 9);
    // 095d54  push 0x1adc
    X86_AT(c, 0x95d54u);
    { uint32_t v = 0x1ADCu; push32(c, v); }
    // 095d59  call 0x95d68
    X86_AT(c, 0x95d59u);
    push32(c, 0x95d5eu); x86_call_known(c, 0x95d68u, f_00095d68); X86_RET(c, 0x95d5eu);
    X86_TICK(c, 7);
    // 095d5e  call 0x95d84
    X86_AT(c, 0x95d5eu);
    push32(c, 0x95d63u); x86_call_known(c, 0x95d84u, f_00095d84); X86_RET(c, 0x95d63u);
    X86_TICK(c, 10);
    // 095d63  ret 4
    X86_AT(c, 0x95d63u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x95d54u, "ran off the end of a function");
}
void f_00095d68(X86Cpu& c) {
    X86_TICK(c, 31);
    // 095d68  push ebp
    X86_AT(c, 0x95d68u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 095d69  mov ebp, esp
    X86_AT(c, 0x95d69u);
    c.r[5] = c.r[4];
    // 095d6b  push edi
    X86_AT(c, 0x95d6bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095d6c  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x95d6cu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 095d6f  movzx eax, word ptr [edi]
    X86_AT(c, 0x95d6fu);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(c.r[7])));
    // 095d72  push eax
    X86_AT(c, 0x95d72u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095d73  lea eax, [edi + 2]
    X86_AT(c, 0x95d73u);
    c.r[0] = (uint32_t)(c.r[7] + 0x2u);
    // 095d76  push eax
    X86_AT(c, 0x95d76u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095d77  push 2
    X86_AT(c, 0x95d77u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 095d79  call 0x94e4c
    X86_AT(c, 0x95d79u);
    push32(c, 0x95d7eu); x86_call_known(c, 0x94e4cu, f_00094e4c); X86_RET(c, 0x95d7eu);
    X86_TICK(c, 20);
    // 095d7e  pop edi
    X86_AT(c, 0x95d7eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095d7f  leave 
    X86_AT(c, 0x95d7fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095d80  ret 4
    X86_AT(c, 0x95d80u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x95d68u, "ran off the end of a function");
}
void f_00095d84(X86Cpu& c) {
    X86_TICK(c, 19);
    // 095d84  movzx eax, word ptr [0x8a5dc]
    X86_AT(c, 0x95d84u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0x8A5DCu)));
    // 095d8b  push eax
    X86_AT(c, 0x95d8bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095d8c  push 0x8a5de
    X86_AT(c, 0x95d8cu);
    { uint32_t v = 0x8A5DEu; push32(c, v); }
    // 095d91  push 2
    X86_AT(c, 0x95d91u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 095d93  call 0x94e4c
    X86_AT(c, 0x95d93u);
    push32(c, 0x95d98u); x86_call_known(c, 0x94e4cu, f_00094e4c); X86_RET(c, 0x95d98u);
    X86_TICK(c, 10);
    // 095d98  ret 
    X86_AT(c, 0x95d98u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x95d84u, "ran off the end of a function");
}
void f_00095d9c(X86Cpu& c) {
    X86_TICK(c, 55);
    // 095d9c  enter 0xc, 0
    X86_AT(c, 0x95d9cu);
    x86_enter(c, 0xCu, 0x0u, 4);
    // 095da0  push ebx
    X86_AT(c, 0x95da0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 095da1  push esi
    X86_AT(c, 0x95da1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095da2  push edi
    X86_AT(c, 0x95da2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095da3  mov di, word ptr [ebp + 0xc]
    X86_AT(c, 0x95da3u);
    s16(c, 7, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 095da7  sub esi, esi
    X86_AT(c, 0x95da7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 095da9  push esi
    X86_AT(c, 0x95da9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095daa  mov esi, 0x1b04
    X86_AT(c, 0x95daau);
    c.r[6] = 0x1B04u;
    // 095daf  push edi
    X86_AT(c, 0x95dafu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095db0  lea edi, [ebp - 0xc]
    X86_AT(c, 0x95db0u);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 095db3  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x95db3u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 095db4  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x95db4u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 095db5  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0x95db5u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 095db7  pop edi
    X86_AT(c, 0x95db7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095db8  pop esi
    X86_AT(c, 0x95db8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_95db9:
    X86_TICK(c, 10);
    // 095db9  mov eax, edi
    X86_AT(c, 0x95db9u);
    c.r[0] = c.r[7];
    // 095dbb  rcr ax, 1
    X86_AT(c, 0x95dbbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 095dbe  jae 0x95dfa
    X86_AT(c, 0x95dbeu);
    if (x86_cc(c, 3)) { goto L_95dfa; }
    X86_TICK(c, 23);
    // 095dc0  movzx eax, si
    X86_AT(c, 0x95dc0u);
    c.r[0] = (c.r[6] & 0xFFFFu);
    // 095dc3  lea eax, [eax*4]
    X86_AT(c, 0x95dc3u);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 095dca  lea eax, [eax + eax*2]
    X86_AT(c, 0x95dcau);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 095dcd  movsx eax, ax
    X86_AT(c, 0x95dcdu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 095dd0  lea edx, [ebp - 0xc]
    X86_AT(c, 0x95dd0u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 095dd3  push edx
    X86_AT(c, 0x95dd3u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 095dd4  mov ebx, eax
    X86_AT(c, 0x95dd4u);
    c.r[3] = c.r[0];
    // 095dd6  call 0x960c0
    X86_AT(c, 0x95dd6u);
    push32(c, 0x95ddbu); x86_call_known(c, 0x960c0u, f_000960c0); X86_RET(c, 0x95ddbu);
    X86_TICK(c, 13);
    // 095ddb  lea eax, [ebx*1 + 0x8aa3c]
    X86_AT(c, 0x95ddbu);
    c.r[0] = (uint32_t)(c.r[3] + 0x8AA3Cu);
    // 095de2  push eax
    X86_AT(c, 0x95de2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095de3  mov ebx, eax
    X86_AT(c, 0x95de3u);
    c.r[3] = c.r[0];
    // 095de5  call 0x960c0
    X86_AT(c, 0x95de5u);
    push32(c, 0x95deau); x86_call_known(c, 0x960c0u, f_000960c0); X86_RET(c, 0x95deau);
    X86_TICK(c, 7);
    // 095dea  call 0x96230
    X86_AT(c, 0x95deau);
    push32(c, 0x95defu); x86_call_known(c, 0x96230u, f_00096230); X86_RET(c, 0x95defu);
    X86_TICK(c, 13);
    // 095def  lea eax, [ebp - 0xc]
    X86_AT(c, 0x95defu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 095df2  push eax
    X86_AT(c, 0x95df2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095df3  mov ebx, eax
    X86_AT(c, 0x95df3u);
    c.r[3] = c.r[0];
    // 095df5  call 0x96120
    X86_AT(c, 0x95df5u);
    push32(c, 0x95dfau); x86_call_known(c, 0x96120u, f_00096120); X86_RET(c, 0x95dfau);
L_95dfa:
    X86_TICK(c, 12);
    // 095dfa  shr di, 1
    X86_AT(c, 0x95dfau);
    { uint32_t v = (c.r[7] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 7, r); }
    // 095dfd  inc esi
    X86_AT(c, 0x95dfdu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 095dfe  and di, di
    X86_AT(c, 0x95dfeu);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_logic(c, v & (c.r[7] & 0xFFFFu), 2)); }
    // 095e01  jne 0x95db9
    X86_AT(c, 0x95e01u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x95db9u); goto L_95db9; }
    X86_TICK(c, 71);
    // 095e03  lea eax, [ebp - 0xc]
    X86_AT(c, 0x95e03u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 095e06  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x95e06u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 095e09  push esi
    X86_AT(c, 0x95e09u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095e0a  push edi
    X86_AT(c, 0x95e0au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095e0b  mov esi, eax
    X86_AT(c, 0x95e0bu);
    c.r[6] = c.r[0];
    // 095e0d  mov edi, edx
    X86_AT(c, 0x95e0du);
    c.r[7] = c.r[2];
    // 095e0f  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x95e0fu);
    x86_string(c, 0, 4, 0, 4, 3);
    // 095e10  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x95e10u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 095e11  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0x95e11u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 095e13  pop edi
    X86_AT(c, 0x95e13u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095e14  pop esi
    X86_AT(c, 0x95e14u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 095e15  pop edi
    X86_AT(c, 0x95e15u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095e16  pop esi
    X86_AT(c, 0x95e16u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 095e17  pop ebx
    X86_AT(c, 0x95e17u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 095e18  leave 
    X86_AT(c, 0x95e18u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095e19  ret 8
    X86_AT(c, 0x95e19u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x95d9cu, "ran off the end of a function");
}
void f_00095e1c(X86Cpu& c) {
    X86_TICK(c, 20);
    // 095e1c  push ebp
    X86_AT(c, 0x95e1cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 095e1d  mov ebp, esp
    X86_AT(c, 0x95e1du);
    c.r[5] = c.r[4];
    // 095e1f  push esi
    X86_AT(c, 0x95e1fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095e20  push edi
    X86_AT(c, 0x95e20u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095e21  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x95e21u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 095e24  call 0x960c0
    X86_AT(c, 0x95e24u);
    push32(c, 0x95e29u); x86_call_known(c, 0x960c0u, f_000960c0); X86_RET(c, 0x95e29u);
    X86_TICK(c, 7);
    // 095e29  call 0x96a9c
    X86_AT(c, 0x95e29u);
    push32(c, 0x95e2eu); x86_call_known(c, 0x96a9cu, f_00096a9c); X86_RET(c, 0x95e2eu);
    X86_TICK(c, 15);
    // 095e2e  xchg edi, eax
    X86_AT(c, 0x95e2eu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 095e2f  and di, 0x4700
    X86_AT(c, 0x95e2fu);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_logic(c, v & 0x4700u, 2)); }
    // 095e34  shr di, 8
    X86_AT(c, 0x95e34u);
    { uint32_t v = (c.r[7] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 7, r); }
    // 095e38  call 0x96a0c
    X86_AT(c, 0x95e38u);
    push32(c, 0x95e3du); x86_call_known(c, 0x96a0cu, f_00096a0c); X86_RET(c, 0x95e3du);
    X86_TICK(c, 7);
    // 095e3d  cmp di, 0x10
    X86_AT(c, 0x95e3du);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x10u, 0, 2);
    // 095e41  jbe 0x95e4d
    X86_AT(c, 0x95e41u);
    if (x86_cc(c, 6)) { goto L_95e4d; }
    X86_TICK(c, 4);
    // 095e43  and di, 7
    X86_AT(c, 0x95e43u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_logic(c, v & 0x7u, 2)); }
    // 095e48  or di, 8
    X86_AT(c, 0x95e48u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_logic(c, v | 0x8u, 2)); }
L_95e4d:
    X86_TICK(c, 10);
    // 095e4d  movzx eax, di
    X86_AT(c, 0x95e4du);
    c.r[0] = (c.r[7] & 0xFFFFu);
    // 095e50  cmp eax, 0xe
    X86_AT(c, 0x95e50u);
    (void)x86_sub(c, c.r[0], 0xEu, 0, 4);
    // 095e53  ja 0x95ecc
    X86_AT(c, 0x95e53u);
    if (x86_cc(c, 7)) { goto L_95ecc; }
    X86_TICK(c, 7);
    // 095e59  jmp dword ptr cs:[eax*4 + 0x95e61]
    X86_AT(c, 0x95e59u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x95E61u)));
      switch (t) {
      case 0x95e9du: goto L_95e9d;
      case 0x95ea4u: goto L_95ea4;
      case 0x95eb3u: goto L_95eb3;
      case 0x95ebau: goto L_95eba;
      case 0x95eccu: goto L_95ecc;
      default: x86_jump(c, t); return; } }
L_95e9d:
    X86_TICK(c, 9);
    // 095e9d  mov esi, 0x1b10
    X86_AT(c, 0x95e9du);
    c.r[6] = 0x1B10u;
    // 095ea2  jmp 0x95ebf
    X86_AT(c, 0x95ea2u);
    goto L_95ebf;
L_95ea4:
    X86_TICK(c, 15);
    // 095ea4  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x95ea4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 095ea7  mov dword ptr [eax], 0x414e0003
    X86_AT(c, 0x95ea7u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), 0x414E0003u);
    // 095ead  mov byte ptr [eax + 4], 0x4e
    X86_AT(c, 0x95eadu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)), 0x4Eu);
    // 095eb1  jmp 0x95ed4
    X86_AT(c, 0x95eb1u);
    goto L_95ed4;
L_95eb3:
    X86_TICK(c, 9);
    // 095eb3  mov esi, 0x1b1c
    X86_AT(c, 0x95eb3u);
    c.r[6] = 0x1B1Cu;
    // 095eb8  jmp 0x95ebf
    X86_AT(c, 0x95eb8u);
    goto L_95ebf;
L_95eba:
    X86_TICK(c, 2);
    // 095eba  mov esi, 0x1b28
    X86_AT(c, 0x95ebau);
    c.r[6] = 0x1B28u;
L_95ebf:
    X86_TICK(c, 40);
    // 095ebf  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x95ebfu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 095ec2  push edi
    X86_AT(c, 0x95ec2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095ec3  mov edi, eax
    X86_AT(c, 0x95ec3u);
    c.r[7] = c.r[0];
    // 095ec5  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x95ec5u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 095ec6  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x95ec6u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 095ec7  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0x95ec7u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 095ec9  pop edi
    X86_AT(c, 0x95ec9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095eca  jmp 0x95ed4
    X86_AT(c, 0x95ecau);
    goto L_95ed4;
L_95ecc:
    X86_TICK(c, 6);
    // 095ecc  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x95eccu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 095ecf  mov word ptr [eax], 0
    X86_AT(c, 0x95ecfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0])), 0x0u);
L_95ed4:
    X86_TICK(c, 24);
    // 095ed4  pop edi
    X86_AT(c, 0x95ed4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095ed5  pop esi
    X86_AT(c, 0x95ed5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 095ed6  leave 
    X86_AT(c, 0x95ed6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095ed7  ret 8
    X86_AT(c, 0x95ed7u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x95e1cu, "ran off the end of a function");
}
void f_00095edc(X86Cpu& c) {
    X86_TICK(c, 21);
    // 095edc  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0x95edcu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 095ee0  mov edx, dword ptr [eax]
    X86_AT(c, 0x95ee0u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 095ee2  or edx, dword ptr [eax + 4]
    X86_AT(c, 0x95ee2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))), 4); }
    // 095ee5  and edx, edx
    X86_AT(c, 0x95ee5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 095ee7  jne 0x95eed
    X86_AT(c, 0x95ee7u);
    if (x86_cc(c, 5)) { goto L_95eed; }
    X86_TICK(c, 9);
    // 095ee9  sub eax, eax
    X86_AT(c, 0x95ee9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 095eeb  jmp 0x95efc
    X86_AT(c, 0x95eebu);
    goto L_95efc;
L_95eed:
    X86_TICK(c, 12);
    // 095eed  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0x95eedu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 095ef1  mov ax, word ptr [eax + 8]
    X86_AT(c, 0x95ef1u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u))));
    // 095ef5  and ah, 0x7f
    X86_AT(c, 0x95ef5u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & 0x7Fu, 1)); }
    // 095ef8  sub ax, 0x3fff
    X86_AT(c, 0x95ef8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x3FFFu, 0, 2)); }
L_95efc:
    X86_TICK(c, 10);
    // 095efc  ret 4
    X86_AT(c, 0x95efcu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x95edcu, "ran off the end of a function");
}
void f_00095f00(X86Cpu& c) {
    X86_TICK(c, 16);
    // 095f00  push ebp
    X86_AT(c, 0x95f00u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 095f01  mov ebp, esp
    X86_AT(c, 0x95f01u);
    c.r[5] = c.r[4];
    // 095f03  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x95f03u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 095f06  call 0x960c0
    X86_AT(c, 0x95f06u);
    push32(c, 0x95f0bu); x86_call_known(c, 0x960c0u, f_000960c0); X86_RET(c, 0x95f0bu);
    X86_TICK(c, 12);
    // 095f0b  push dword ptr [ebp + 8]
    X86_AT(c, 0x95f0bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 095f0e  call 0x96c54
    X86_AT(c, 0x95f0eu);
    push32(c, 0x95f13u); x86_call_known(c, 0x96c54u, f_00096c54); X86_RET(c, 0x95f13u);
    X86_TICK(c, 16);
    // 095f13  leave 
    X86_AT(c, 0x95f13u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095f14  ret 8
    X86_AT(c, 0x95f14u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x95f00u, "ran off the end of a function");
}
void f_00095f30(X86Cpu& c) {
    X86_TICK(c, 24);
    // 095f30  enter 8, 0
    X86_AT(c, 0x95f30u);
    x86_enter(c, 0x8u, 0x0u, 4);
    // 095f34  push ebx
    X86_AT(c, 0x95f34u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 095f35  push esi
    X86_AT(c, 0x95f35u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095f36  push edi
    X86_AT(c, 0x95f36u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095f37  cmp byte ptr [0x8a6e3], 0
    X86_AT(c, 0x95f37u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A6E3u))), 0x0u, 0, 1);
    // 095f3e  je 0x95f56
    X86_AT(c, 0x95f3eu);
    if (x86_cc(c, 4)) { goto L_95f56; }
    X86_TICK(c, 20);
    // 095f40  push dword ptr [0x8ab74]
    X86_AT(c, 0x95f40u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8AB74u))); push32(c, v); }
    // 095f46  mov eax, dword ptr [0x8ab74]
    X86_AT(c, 0x95f46u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB74u)));
    // 095f4b  sub eax, 0xc
    X86_AT(c, 0x95f4bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xCu, 0, 4); }
    // 095f4e  push eax
    X86_AT(c, 0x95f4eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095f4f  call 0x965cd
    X86_AT(c, 0x95f4fu);
    push32(c, 0x95f54u); x86_call_known(c, 0x965cdu, f_000965cd); X86_RET(c, 0x95f54u);
    X86_TICK(c, 7);
    // 095f54  jmp 0x95faa
    X86_AT(c, 0x95f54u);
    goto L_95faa;
L_95f56:
    X86_TICK(c, 33);
    // 095f56  mov eax, dword ptr [0x8ab74]
    X86_AT(c, 0x95f56u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB74u)));
    // 095f5b  lea esi, [eax - 0xc]
    X86_AT(c, 0x95f5bu);
    c.r[6] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 095f5e  xchg edi, eax
    X86_AT(c, 0x95f5eu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 095f5f  mov ax, word ptr [edi + 8]
    X86_AT(c, 0x95f5fu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))));
    // 095f63  cmp ax, word ptr [esi + 8]
    X86_AT(c, 0x95f63u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u))), 0, 2);
    // 095f67  setb al
    X86_AT(c, 0x95f67u);
    s8(c, 0, x86_cc(c, 2) ? 1u : 0u);
    // 095f6a  xchg ebx, eax
    X86_AT(c, 0x95f6au);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 095f6b  and bl, bl
    X86_AT(c, 0x95f6bu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 095f6d  je 0x95f77
    X86_AT(c, 0x95f6du);
    if (x86_cc(c, 4)) { goto L_95f77; }
    X86_TICK(c, 8);
    // 095f6f  mov dword ptr [ebp - 8], esi
    X86_AT(c, 0x95f6fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[6]);
    // 095f72  mov esi, edi
    X86_AT(c, 0x95f72u);
    c.r[6] = c.r[7];
    // 095f74  mov edi, dword ptr [ebp - 8]
    X86_AT(c, 0x95f74u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
L_95f77:
    X86_TICK(c, 19);
    // 095f77  mov ax, word ptr [edi + 8]
    X86_AT(c, 0x95f77u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))));
    // 095f7b  sub ax, word ptr [esi + 8]
    X86_AT(c, 0x95f7bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u))), 0, 2)); }
    // 095f7f  mov word ptr [ebp - 2], ax
    X86_AT(c, 0x95f7fu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), (c.r[0] & 0xFFFFu));
    // 095f83  cmp ax, 0x40
    X86_AT(c, 0x95f83u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x40u, 0, 2);
    // 095f87  jg 0x95f8f
    X86_AT(c, 0x95f87u);
    if (x86_cc(c, 15)) { goto L_95f8f; }
    X86_TICK(c, 12);
    // 095f89  cmp byte ptr [esi + 0xb], 0
    X86_AT(c, 0x95f89u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xBu))), 0x0u, 0, 1);
    // 095f8d  je 0x95fb6
    X86_AT(c, 0x95f8du);
    if (x86_cc(c, 4)) { goto L_95fb6; }
L_95f8f:
    X86_TICK(c, 7);
    // 095f8f  and bl, bl
    X86_AT(c, 0x95f8fu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 095f91  jne 0x95faa
    X86_AT(c, 0x95f91u);
    if (x86_cc(c, 5)) { goto L_95faa; }
    X86_TICK(c, 31);
    // 095f93  mov eax, dword ptr [0x8ab74]
    X86_AT(c, 0x95f93u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB74u)));
    // 095f98  lea edx, [eax - 0xc]
    X86_AT(c, 0x95f98u);
    c.r[2] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 095f9b  push esi
    X86_AT(c, 0x95f9bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095f9c  push edi
    X86_AT(c, 0x95f9cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095f9d  mov esi, eax
    X86_AT(c, 0x95f9du);
    c.r[6] = c.r[0];
    // 095f9f  mov edi, edx
    X86_AT(c, 0x95f9fu);
    c.r[7] = c.r[2];
    // 095fa1  mov ecx, 3
    X86_AT(c, 0x95fa1u);
    c.r[1] = 0x3u;
    // 095fa6  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x95fa6u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 095fa8  pop edi
    X86_AT(c, 0x95fa8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095fa9  pop esi
    X86_AT(c, 0x95fa9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_95faa:
    X86_TICK(c, 14);
    // 095faa  add dword ptr [0x8ab74], 0xfffffff4
    X86_AT(c, 0x95faau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AB74u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 095fb1  jmp 0x96042
    X86_AT(c, 0x95fb1u);
    goto L_96042;
L_95fb6:
    X86_TICK(c, 11);
    // 095fb6  mov ax, word ptr [ebp - 2]
    X86_AT(c, 0x95fb6u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))));
    // 095fba  and ax, ax
    X86_AT(c, 0x95fbau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 095fbd  je 0x95fc6
    X86_AT(c, 0x95fbdu);
    if (x86_cc(c, 4)) { goto L_95fc6; }
    X86_TICK(c, 11);
    // 095fbf  push eax
    X86_AT(c, 0x95fbfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095fc0  push esi
    X86_AT(c, 0x95fc0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095fc1  call 0x96978
    X86_AT(c, 0x95fc1u);
    push32(c, 0x95fc6u); x86_call_known(c, 0x96978u, f_00096978); X86_RET(c, 0x95fc6u);
L_95fc6:
    X86_TICK(c, 15);
    // 095fc6  mov al, byte ptr [edi + 0xa]
    X86_AT(c, 0x95fc6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu))));
    // 095fc9  cmp al, byte ptr [esi + 0xa]
    X86_AT(c, 0x95fc9u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu))), 0, 1);
    // 095fcc  jne 0x95fed
    X86_AT(c, 0x95fccu);
    if (x86_cc(c, 5)) { goto L_95fed; }
    X86_TICK(c, 13);
    // 095fce  push 4
    X86_AT(c, 0x95fceu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 095fd0  push esi
    X86_AT(c, 0x95fd0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095fd1  push edi
    X86_AT(c, 0x95fd1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095fd2  call 0x96884
    X86_AT(c, 0x95fd2u);
    push32(c, 0x95fd7u); x86_call_known(c, 0x96884u, f_00096884); X86_RET(c, 0x95fd7u);
    X86_TICK(c, 7);
    // 095fd7  and al, al
    X86_AT(c, 0x95fd7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 095fd9  je 0x96018
    X86_AT(c, 0x95fd9u);
    if (x86_cc(c, 4)) { goto L_96018; }
    X86_TICK(c, 11);
    // 095fdb  push 1
    X86_AT(c, 0x95fdbu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 095fdd  push edi
    X86_AT(c, 0x95fddu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095fde  call 0x96978
    X86_AT(c, 0x95fdeu);
    push32(c, 0x95fe3u); x86_call_known(c, 0x96978u, f_00096978); X86_RET(c, 0x95fe3u);
    X86_TICK(c, 20);
    // 095fe3  or byte ptr [edi + 7], 0x80
    X86_AT(c, 0x95fe3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x7u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
    // 095fe7  inc word ptr [edi + 8]
    X86_AT(c, 0x95fe7u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 095feb  jmp 0x96018
    X86_AT(c, 0x95febu);
    goto L_96018;
L_95fed:
    X86_TICK(c, 12);
    // 095fed  cmp byte ptr [edi + 0xa], 0
    X86_AT(c, 0x95fedu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu))), 0x0u, 0, 1);
    // 095ff1  je 0x95ffe
    X86_AT(c, 0x95ff1u);
    if (x86_cc(c, 4)) { goto L_95ffe; }
    X86_TICK(c, 13);
    // 095ff3  push 4
    X86_AT(c, 0x95ff3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 095ff5  push esi
    X86_AT(c, 0x95ff5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095ff6  push edi
    X86_AT(c, 0x95ff6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095ff7  call 0x968d6
    X86_AT(c, 0x95ff7u);
    push32(c, 0x95ffcu); x86_call_known(c, 0x968d6u, f_000968d6); X86_RET(c, 0x95ffcu);
    X86_TICK(c, 7);
    // 095ffc  jmp 0x96007
    X86_AT(c, 0x95ffcu);
    goto L_96007;
L_95ffe:
    X86_TICK(c, 13);
    // 095ffe  push 4
    X86_AT(c, 0x95ffeu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 096000  push esi
    X86_AT(c, 0x96000u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096001  push edi
    X86_AT(c, 0x96001u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096002  call 0x968ad
    X86_AT(c, 0x96002u);
    push32(c, 0x96007u); x86_call_known(c, 0x968adu, f_000968ad); X86_RET(c, 0x96007u);
L_96007:
    X86_TICK(c, 14);
    // 096007  mov byte ptr [edi + 0xa], al
    X86_AT(c, 0x96007u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu)), g8(c, 0));
    // 09600a  cmp byte ptr [edi + 0xa], 0
    X86_AT(c, 0x9600au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu))), 0x0u, 0, 1);
    // 09600e  je 0x96018
    X86_AT(c, 0x9600eu);
    if (x86_cc(c, 4)) { goto L_96018; }
    X86_TICK(c, 11);
    // 096010  push 4
    X86_AT(c, 0x96010u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 096012  push edi
    X86_AT(c, 0x96012u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096013  call 0x96902
    X86_AT(c, 0x96013u);
    push32(c, 0x96018u); x86_call_known(c, 0x96902u, f_00096902); X86_RET(c, 0x96018u);
L_96018:
    X86_TICK(c, 14);
    // 096018  add dword ptr [0x8ab74], 0xfffffff4
    X86_AT(c, 0x96018u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AB74u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 09601f  and bl, bl
    X86_AT(c, 0x9601fu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 096021  jne 0x96037
    X86_AT(c, 0x96021u);
    if (x86_cc(c, 5)) { goto L_96037; }
    X86_TICK(c, 29);
    // 096023  mov eax, dword ptr [0x8ab74]
    X86_AT(c, 0x96023u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB74u)));
    // 096028  push esi
    X86_AT(c, 0x96028u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096029  push edi
    X86_AT(c, 0x96029u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09602a  mov esi, edi
    X86_AT(c, 0x9602au);
    c.r[6] = c.r[7];
    // 09602c  mov edi, eax
    X86_AT(c, 0x9602cu);
    c.r[7] = c.r[0];
    // 09602e  mov ecx, 3
    X86_AT(c, 0x9602eu);
    c.r[1] = 0x3u;
    // 096033  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x96033u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 096035  pop edi
    X86_AT(c, 0x96035u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096036  pop esi
    X86_AT(c, 0x96036u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_96037:
    X86_TICK(c, 12);
    // 096037  push dword ptr [0x8ab74]
    X86_AT(c, 0x96037u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8AB74u))); push32(c, v); }
    // 09603d  call 0x96a14
    X86_AT(c, 0x9603du);
    push32(c, 0x96042u); x86_call_known(c, 0x96a14u, f_00096a14); X86_RET(c, 0x96042u);
L_96042:
    X86_TICK(c, 28);
    // 096042  pop edi
    X86_AT(c, 0x96042u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096043  pop esi
    X86_AT(c, 0x96043u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 096044  pop ebx
    X86_AT(c, 0x96044u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 096045  leave 
    X86_AT(c, 0x96045u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 096046  ret 
    X86_AT(c, 0x96046u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x95f30u, "ran off the end of a function");
}
void f_00096048(X86Cpu& c) {
    X86_TICK(c, 13);
    // 096048  enter 0x14, 0
    X86_AT(c, 0x96048u);
    x86_enter(c, 0x14u, 0x0u, 4);
    // 09604c  call 0x969f0
    X86_AT(c, 0x9604cu);
    push32(c, 0x96051u); x86_call_known(c, 0x969f0u, f_000969f0); X86_RET(c, 0x96051u);
    X86_TICK(c, 12);
    // 096051  cmp byte ptr [0x8a6e3], 0
    X86_AT(c, 0x96051u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A6E3u))), 0x0u, 0, 1);
    // 096058  je 0x9606f
    X86_AT(c, 0x96058u);
    if (x86_cc(c, 4)) { goto L_9606f; }
    X86_TICK(c, 12);
    // 09605a  push dword ptr [ebp + 8]
    X86_AT(c, 0x9605au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 09605d  call 0x96633
    X86_AT(c, 0x9605du);
    push32(c, 0x96062u); x86_call_known(c, 0x96633u, f_00096633); X86_RET(c, 0x96062u);
    X86_TICK(c, 12);
    // 096062  push dword ptr [0x8ab74]
    X86_AT(c, 0x96062u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8AB74u))); push32(c, v); }
    // 096068  call 0x96654
    X86_AT(c, 0x96068u);
    push32(c, 0x9606du); x86_call_known(c, 0x96654u, f_00096654); X86_RET(c, 0x9606du);
    X86_TICK(c, 7);
    // 09606d  jmp 0x9607d
    X86_AT(c, 0x9606du);
    goto L_9607d;
L_9606f:
    X86_TICK(c, 17);
    // 09606f  push dword ptr [ebp + 8]
    X86_AT(c, 0x9606fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 096072  push dword ptr [0x8ab74]
    X86_AT(c, 0x96072u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8AB74u))); push32(c, v); }
    // 096078  call 0x967bc
    X86_AT(c, 0x96078u);
    push32(c, 0x9607du); x86_call_known(c, 0x967bcu, f_000967bc); X86_RET(c, 0x9607du);
L_9607d:
    X86_TICK(c, 16);
    // 09607d  leave 
    X86_AT(c, 0x9607du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09607e  ret 4
    X86_AT(c, 0x9607eu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x96048u, "ran off the end of a function");
}
void f_00096084(X86Cpu& c) {
    X86_TICK(c, 11);
    // 096084  push ebp
    X86_AT(c, 0x96084u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 096085  mov ebp, esp
    X86_AT(c, 0x96085u);
    c.r[5] = c.r[4];
    // 096087  call 0x969f0
    X86_AT(c, 0x96087u);
    push32(c, 0x9608cu); x86_call_known(c, 0x969f0u, f_000969f0); X86_RET(c, 0x9608cu);
    X86_TICK(c, 12);
    // 09608c  cmp byte ptr [0x8a6e3], 0
    X86_AT(c, 0x9608cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A6E3u))), 0x0u, 0, 1);
    // 096093  je 0x960ad
    X86_AT(c, 0x96093u);
    if (x86_cc(c, 4)) { goto L_960ad; }
    X86_TICK(c, 17);
    // 096095  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x96095u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 096098  push dword ptr [ebp + 8]
    X86_AT(c, 0x96098u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 09609b  call 0x9664d
    X86_AT(c, 0x9609bu);
    push32(c, 0x960a0u); x86_call_known(c, 0x9664du, f_0009664d); X86_RET(c, 0x960a0u);
    X86_TICK(c, 12);
    // 0960a0  push dword ptr [0x8ab74]
    X86_AT(c, 0x960a0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8AB74u))); push32(c, v); }
    // 0960a6  call 0x96654
    X86_AT(c, 0x960a6u);
    push32(c, 0x960abu); x86_call_known(c, 0x96654u, f_00096654); X86_RET(c, 0x960abu);
    X86_TICK(c, 7);
    // 0960ab  jmp 0x960bc
    X86_AT(c, 0x960abu);
    goto L_960bc;
L_960ad:
    X86_TICK(c, 16);
    // 0960ad  lea eax, [ebp + 8]
    X86_AT(c, 0x960adu);
    c.r[0] = (uint32_t)(c.r[5] + 0x8u);
    // 0960b0  push eax
    X86_AT(c, 0x960b0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0960b1  push dword ptr [0x8ab74]
    X86_AT(c, 0x960b1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8AB74u))); push32(c, v); }
    // 0960b7  call 0x966c4
    X86_AT(c, 0x960b7u);
    push32(c, 0x960bcu); x86_call_known(c, 0x966c4u, f_000966c4); X86_RET(c, 0x960bcu);
L_960bc:
    X86_TICK(c, 16);
    // 0960bc  leave 
    X86_AT(c, 0x960bcu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0960bd  ret 8
    X86_AT(c, 0x960bdu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x96084u, "ran off the end of a function");
}
void f_000960c0(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0960c0  push ebp
    X86_AT(c, 0x960c0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0960c1  mov ebp, esp
    X86_AT(c, 0x960c1u);
    c.r[5] = c.r[4];
    // 0960c3  push esi
    X86_AT(c, 0x960c3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0960c4  push edi
    X86_AT(c, 0x960c4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0960c5  call 0x969f0
    X86_AT(c, 0x960c5u);
    push32(c, 0x960cau); x86_call_known(c, 0x969f0u, f_000969f0); X86_RET(c, 0x960cau);
    X86_TICK(c, 41);
    // 0960ca  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x960cau);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0960cd  mov edi, dword ptr [0x8ab74]
    X86_AT(c, 0x960cdu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0x8AB74u)));
    // 0960d3  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x960d3u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 0960d4  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x960d4u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 0960d5  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0x960d5u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 0960d7  cmp byte ptr [0x8a6e3], 0
    X86_AT(c, 0x960d7u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A6E3u))), 0x0u, 0, 1);
    // 0960de  jne 0x96118
    X86_AT(c, 0x960deu);
    if (x86_cc(c, 5)) { goto L_96118; }
    X86_TICK(c, 24);
    // 0960e0  mov edi, dword ptr [0x8ab74]
    X86_AT(c, 0x960e0u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0x8AB74u)));
    // 0960e6  test byte ptr [edi + 9], 0x80
    X86_AT(c, 0x960e6u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))) & 0x80u, 1);
    // 0960ea  setne al
    X86_AT(c, 0x960eau);
    s8(c, 0, x86_cc(c, 5) ? 1u : 0u);
    // 0960ed  mov byte ptr [edi + 0xa], al
    X86_AT(c, 0x960edu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu)), g8(c, 0));
    // 0960f0  and al, al
    X86_AT(c, 0x960f0u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0960f2  je 0x960f8
    X86_AT(c, 0x960f2u);
    if (x86_cc(c, 4)) { goto L_960f8; }
    X86_TICK(c, 7);
    // 0960f4  and byte ptr [edi + 9], 0x7f
    X86_AT(c, 0x960f4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x9u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
L_960f8:
    X86_TICK(c, 37);
    // 0960f8  mov ax, word ptr [edi]
    X86_AT(c, 0x960f8u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0960fb  or ax, word ptr [edi + 2]
    X86_AT(c, 0x960fbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))), 2)); }
    // 0960ff  or ax, word ptr [edi + 4]
    X86_AT(c, 0x960ffu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 2)); }
    // 096103  or ax, word ptr [edi + 6]
    X86_AT(c, 0x96103u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))), 2)); }
    // 096107  and ax, ax
    X86_AT(c, 0x96107u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 09610a  sete al
    X86_AT(c, 0x9610au);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 09610d  mov byte ptr [edi + 0xb], al
    X86_AT(c, 0x9610du);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xBu)), g8(c, 0));
    // 096110  and al, al
    X86_AT(c, 0x96110u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 096112  je 0x96118
    X86_AT(c, 0x96112u);
    if (x86_cc(c, 4)) { goto L_96118; }
    X86_TICK(c, 2);
    // 096114  mov byte ptr [edi + 0xa], 0
    X86_AT(c, 0x96114u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu)), 0x0u);
L_96118:
    X86_TICK(c, 24);
    // 096118  pop edi
    X86_AT(c, 0x96118u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096119  pop esi
    X86_AT(c, 0x96119u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 09611a  leave 
    X86_AT(c, 0x9611au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09611b  ret 4
    X86_AT(c, 0x9611bu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x960c0u, "ran off the end of a function");
}
void f_00096120(X86Cpu& c) {
    X86_TICK(c, 49);
    // 096120  push ebp
    X86_AT(c, 0x96120u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 096121  mov ebp, esp
    X86_AT(c, 0x96121u);
    c.r[5] = c.r[4];
    // 096123  push esi
    X86_AT(c, 0x96123u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096124  push edi
    X86_AT(c, 0x96124u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096125  mov esi, dword ptr [0x8ab74]
    X86_AT(c, 0x96125u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x8AB74u)));
    // 09612b  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x9612bu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 09612e  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x9612eu);
    x86_string(c, 0, 4, 0, 4, 3);
    // 09612f  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x9612fu);
    x86_string(c, 0, 4, 0, 4, 3);
    // 096130  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0x96130u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 096132  cmp byte ptr [0x8a6e3], 0
    X86_AT(c, 0x96132u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A6E3u))), 0x0u, 0, 1);
    // 096139  jne 0x96153
    X86_AT(c, 0x96139u);
    if (x86_cc(c, 5)) { goto L_96153; }
    X86_TICK(c, 16);
    // 09613b  mov eax, dword ptr [0x8ab74]
    X86_AT(c, 0x9613bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB74u)));
    // 096140  cmp byte ptr [eax + 0xa], 0
    X86_AT(c, 0x96140u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu))), 0x0u, 0, 1);
    // 096144  je 0x96153
    X86_AT(c, 0x96144u);
    if (x86_cc(c, 4)) { goto L_96153; }
    X86_TICK(c, 12);
    // 096146  cmp byte ptr [eax + 0xb], 0
    X86_AT(c, 0x96146u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu))), 0x0u, 0, 1);
    // 09614a  jne 0x96153
    X86_AT(c, 0x9614au);
    if (x86_cc(c, 5)) { goto L_96153; }
    X86_TICK(c, 11);
    // 09614c  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x9614cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 09614f  or byte ptr [eax + 9], 0x80
    X86_AT(c, 0x9614fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x9u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
L_96153:
    X86_TICK(c, 31);
    // 096153  add dword ptr [0x8ab74], 0xfffffff4
    X86_AT(c, 0x96153u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AB74u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 09615a  pop edi
    X86_AT(c, 0x9615au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09615b  pop esi
    X86_AT(c, 0x9615bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 09615c  leave 
    X86_AT(c, 0x9615cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09615d  ret 4
    X86_AT(c, 0x9615du);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x96120u, "ran off the end of a function");
}
void f_00096160(X86Cpu& c) {
    X86_TICK(c, 83);
    // 096160  enter 0xc, 0
    X86_AT(c, 0x96160u);
    x86_enter(c, 0xCu, 0x0u, 4);
    // 096164  push esi
    X86_AT(c, 0x96164u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096165  push edi
    X86_AT(c, 0x96165u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096166  mov eax, dword ptr [0x8ab74]
    X86_AT(c, 0x96166u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB74u)));
    // 09616b  lea esi, [eax - 0xc]
    X86_AT(c, 0x9616bu);
    c.r[6] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 09616e  lea edi, [ebp - 0xc]
    X86_AT(c, 0x9616eu);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 096171  mov ecx, 3
    X86_AT(c, 0x96171u);
    c.r[1] = 0x3u;
    // 096176  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x96176u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 096178  xchg esi, eax
    X86_AT(c, 0x96178u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 096179  mov eax, dword ptr [0x8ab74]
    X86_AT(c, 0x96179u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB74u)));
    // 09617e  lea edi, [eax - 0xc]
    X86_AT(c, 0x9617eu);
    c.r[7] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 096181  mov ecx, 3
    X86_AT(c, 0x96181u);
    c.r[1] = 0x3u;
    // 096186  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x96186u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 096188  lea esi, [ebp - 0xc]
    X86_AT(c, 0x96188u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 09618b  xchg edi, eax
    X86_AT(c, 0x9618bu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 09618c  mov ecx, 3
    X86_AT(c, 0x9618cu);
    c.r[1] = 0x3u;
    // 096191  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x96191u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 096193  pop edi
    X86_AT(c, 0x96193u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096194  pop esi
    X86_AT(c, 0x96194u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 096195  leave 
    X86_AT(c, 0x96195u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 096196  ret 
    X86_AT(c, 0x96196u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x96160u, "ran off the end of a function");
}
void f_00096198(X86Cpu& c) {
    X86_TICK(c, 12);
    // 096198  cmp byte ptr [0x8a6e3], 0
    X86_AT(c, 0x96198u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A6E3u))), 0x0u, 0, 1);
    // 09619f  je 0x961ac
    X86_AT(c, 0x9619fu);
    if (x86_cc(c, 4)) { goto L_961ac; }
    X86_TICK(c, 18);
    // 0961a1  mov eax, dword ptr [0x8ab74]
    X86_AT(c, 0x961a1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB74u)));
    // 0961a6  xor byte ptr [eax + 9], 0x80
    X86_AT(c, 0x961a6u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x9u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x80u, 1)); }
    // 0961aa  jmp 0x961bb
    X86_AT(c, 0x961aau);
    goto L_961bb;
L_961ac:
    X86_TICK(c, 16);
    // 0961ac  mov eax, dword ptr [0x8ab74]
    X86_AT(c, 0x961acu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB74u)));
    // 0961b1  cmp byte ptr [eax + 0xb], 0
    X86_AT(c, 0x961b1u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu))), 0x0u, 0, 1);
    // 0961b5  jne 0x961bb
    X86_AT(c, 0x961b5u);
    if (x86_cc(c, 5)) { goto L_961bb; }
    X86_TICK(c, 7);
    // 0961b7  xor byte ptr [eax + 0xa], 1
    X86_AT(c, 0x961b7u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x1u, 1)); }
L_961bb:
    X86_TICK(c, 10);
    // 0961bb  ret 
    X86_AT(c, 0x961bbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x96198u, "ran off the end of a function");
}
void f_00096230(X86Cpu& c) {
    X86_TICK(c, 22);
    // 096230  enter 0x24, 0
    X86_AT(c, 0x96230u);
    x86_enter(c, 0x24u, 0x0u, 4);
    // 096234  push esi
    X86_AT(c, 0x96234u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096235  push edi
    X86_AT(c, 0x96235u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096236  cmp byte ptr [0x8a6e3], 0
    X86_AT(c, 0x96236u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A6E3u))), 0x0u, 0, 1);
    // 09623d  je 0x9625f
    X86_AT(c, 0x9623du);
    if (x86_cc(c, 4)) { goto L_9625f; }
    X86_TICK(c, 20);
    // 09623f  push dword ptr [0x8ab74]
    X86_AT(c, 0x9623fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8AB74u))); push32(c, v); }
    // 096245  mov eax, dword ptr [0x8ab74]
    X86_AT(c, 0x96245u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB74u)));
    // 09624a  sub eax, 0xc
    X86_AT(c, 0x9624au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xCu, 0, 4); }
    // 09624d  push eax
    X86_AT(c, 0x9624du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09624e  call 0x965e9
    X86_AT(c, 0x9624eu);
    push32(c, 0x96253u); x86_call_known(c, 0x965e9u, f_000965e9); X86_RET(c, 0x96253u);
    X86_TICK(c, 14);
    // 096253  add dword ptr [0x8ab74], 0xfffffff4
    X86_AT(c, 0x96253u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AB74u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 09625a  jmp 0x9634e
    X86_AT(c, 0x9625au);
    goto L_9634e;
L_9625f:
    X86_TICK(c, 48);
    // 09625f  mov eax, dword ptr [0x8ab74]
    X86_AT(c, 0x9625fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB74u)));
    // 096264  lea edx, [ebp - 0x14]
    X86_AT(c, 0x96264u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFECu);
    // 096267  push esi
    X86_AT(c, 0x96267u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096268  push edi
    X86_AT(c, 0x96268u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096269  mov esi, eax
    X86_AT(c, 0x96269u);
    c.r[6] = c.r[0];
    // 09626b  mov edi, edx
    X86_AT(c, 0x9626bu);
    c.r[7] = c.r[2];
    // 09626d  mov ecx, 3
    X86_AT(c, 0x9626du);
    c.r[1] = 0x3u;
    // 096272  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x96272u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 096274  pop edi
    X86_AT(c, 0x96274u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096275  pop esi
    X86_AT(c, 0x96275u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 096276  xchg esi, eax
    X86_AT(c, 0x96276u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 096277  sub esi, 0xc
    X86_AT(c, 0x96277u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0xCu, 0, 4); }
    // 09627a  cmp byte ptr [ebp - 9], 0
    X86_AT(c, 0x9627au);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 09627e  jne 0x96286
    X86_AT(c, 0x9627eu);
    if (x86_cc(c, 5)) { goto L_96286; }
    X86_TICK(c, 12);
    // 096280  cmp byte ptr [esi + 0xb], 0
    X86_AT(c, 0x96280u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xBu))), 0x0u, 0, 1);
    // 096284  je 0x962ac
    X86_AT(c, 0x96284u);
    if (x86_cc(c, 4)) { goto L_962ac; }
L_96286:
    X86_TICK(c, 45);
    // 096286  add dword ptr [0x8ab74], 0xfffffff4
    X86_AT(c, 0x96286u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AB74u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 09628d  mov eax, 0x8ab84
    X86_AT(c, 0x9628du);
    c.r[0] = 0x8AB84u;
    // 096292  mov edx, dword ptr [0x8ab74]
    X86_AT(c, 0x96292u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8AB74u)));
    // 096298  push esi
    X86_AT(c, 0x96298u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096299  push edi
    X86_AT(c, 0x96299u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09629a  mov esi, eax
    X86_AT(c, 0x9629au);
    c.r[6] = c.r[0];
    // 09629c  mov edi, edx
    X86_AT(c, 0x9629cu);
    c.r[7] = c.r[2];
    // 09629e  mov ecx, 3
    X86_AT(c, 0x9629eu);
    c.r[1] = 0x3u;
    // 0962a3  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x962a3u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0962a5  pop edi
    X86_AT(c, 0x962a5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0962a6  pop esi
    X86_AT(c, 0x962a6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0962a7  jmp 0x9634e
    X86_AT(c, 0x962a7u);
    goto L_9634e;
L_962ac:
    X86_TICK(c, 69);
    // 0962ac  add dword ptr [0x8ab74], 0xfffffff4
    X86_AT(c, 0x962acu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AB74u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 0962b3  mov al, byte ptr [ebp - 0xa]
    X86_AT(c, 0x962b3u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u))));
    // 0962b6  cmp al, byte ptr [esi + 0xa]
    X86_AT(c, 0x962b6u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu))), 0, 1);
    // 0962b9  setne byte ptr [ebp - 0xa]
    X86_AT(c, 0x962b9u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u)), x86_cc(c, 5) ? 1u : 0u);
    // 0962bd  mov ax, word ptr [ebp - 0xc]
    X86_AT(c, 0x962bdu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))));
    // 0962c1  sub ax, 0x3fff
    X86_AT(c, 0x962c1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x3FFFu, 0, 2)); }
    // 0962c5  add ax, word ptr [esi + 8]
    X86_AT(c, 0x962c5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u))), 0, 2)); }
    // 0962c9  inc eax
    X86_AT(c, 0x962c9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0962ca  mov word ptr [ebp - 0xc], ax
    X86_AT(c, 0x962cau);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), (c.r[0] & 0xFFFFu));
    // 0962ce  push dword ptr [esi + 4]
    X86_AT(c, 0x962ceu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u))); push32(c, v); }
    // 0962d1  push dword ptr [esi]
    X86_AT(c, 0x962d1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6]))); push32(c, v); }
    // 0962d3  push dword ptr [ebp - 0x10]
    X86_AT(c, 0x962d3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0962d6  push dword ptr [ebp - 0x14]
    X86_AT(c, 0x962d6u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0962d9  lea eax, [ebp - 0x24]
    X86_AT(c, 0x962d9u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFDCu);
    // 0962dc  push eax
    X86_AT(c, 0x962dcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0962dd  call 0x96dec
    X86_AT(c, 0x962ddu);
    push32(c, 0x962e2u); x86_call_known(c, 0x96decu, f_00096dec); X86_RET(c, 0x962e2u);
    X86_TICK(c, 9);
    // 0962e2  mov di, 0x80
    X86_AT(c, 0x962e2u);
    s16(c, 7, 0x80u);
    // 0962e6  jmp 0x962f6
    X86_AT(c, 0x962e6u);
    goto L_962f6;
L_962e8:
    X86_TICK(c, 19);
    // 0962e8  dec word ptr [ebp - 0xc]
    X86_AT(c, 0x962e8u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0962ec  dec edi
    X86_AT(c, 0x962ecu);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0962ed  lea eax, [ebp - 0x24]
    X86_AT(c, 0x962edu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFDCu);
    // 0962f0  push eax
    X86_AT(c, 0x962f0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0962f1  call 0x969bb
    X86_AT(c, 0x962f1u);
    push32(c, 0x962f6u); x86_call_known(c, 0x969bbu, f_000969bb); X86_RET(c, 0x962f6u);
L_962f6:
    X86_TICK(c, 12);
    // 0962f6  cmp byte ptr [ebp - 0x15], 0x80
    X86_AT(c, 0x962f6u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEBu))), 0x80u, 0, 1);
    // 0962fa  jae 0x96301
    X86_AT(c, 0x962fau);
    if (x86_cc(c, 3)) { goto L_96301; }
    X86_TICK(c, 7);
    // 0962fc  and di, di
    X86_AT(c, 0x962fcu);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_logic(c, v & (c.r[7] & 0xFFFFu), 2)); }
    // 0962ff  ja 0x962e8
    X86_AT(c, 0x962ffu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x962e8u); goto L_962e8; }
L_96301:
    X86_TICK(c, 24);
    // 096301  mov eax, dword ptr [ebp - 0x1c]
    X86_AT(c, 0x96301u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 096304  mov edx, dword ptr [ebp - 0x18]
    X86_AT(c, 0x96304u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 096307  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0x96307u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 09630a  mov dword ptr [ebp - 0x10], edx
    X86_AT(c, 0x9630au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[2]);
    // 09630d  cmp byte ptr [ebp - 0x1d], 0x80
    X86_AT(c, 0x9630du);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE3u))), 0x80u, 0, 1);
    // 096311  jb 0x96330
    X86_AT(c, 0x96311u);
    if (x86_cc(c, 2)) { goto L_96330; }
    X86_TICK(c, 21);
    // 096313  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x96313u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 09631a  mov dword ptr [ebp - 8], 1
    X86_AT(c, 0x9631au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x1u);
    // 096321  push 4
    X86_AT(c, 0x96321u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 096323  lea eax, [ebp - 8]
    X86_AT(c, 0x96323u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 096326  push eax
    X86_AT(c, 0x96326u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 096327  lea eax, [ebp - 0x14]
    X86_AT(c, 0x96327u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFECu);
    // 09632a  push eax
    X86_AT(c, 0x9632au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09632b  call 0x96884
    X86_AT(c, 0x9632bu);
    push32(c, 0x96330u); x86_call_known(c, 0x96884u, f_00096884); X86_RET(c, 0x96330u);
L_96330:
    X86_TICK(c, 40);
    // 096330  lea eax, [ebp - 0x14]
    X86_AT(c, 0x96330u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFECu);
    // 096333  mov edx, dword ptr [0x8ab74]
    X86_AT(c, 0x96333u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8AB74u)));
    // 096339  push esi
    X86_AT(c, 0x96339u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09633a  push edi
    X86_AT(c, 0x9633au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09633b  mov esi, eax
    X86_AT(c, 0x9633bu);
    c.r[6] = c.r[0];
    // 09633d  mov edi, edx
    X86_AT(c, 0x9633du);
    c.r[7] = c.r[2];
    // 09633f  mov ecx, 3
    X86_AT(c, 0x9633fu);
    c.r[1] = 0x3u;
    // 096344  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x96344u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 096346  pop edi
    X86_AT(c, 0x96346u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096347  pop esi
    X86_AT(c, 0x96347u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 096348  push edx
    X86_AT(c, 0x96348u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 096349  call 0x96a14
    X86_AT(c, 0x96349u);
    push32(c, 0x9634eu); x86_call_known(c, 0x96a14u, f_00096a14); X86_RET(c, 0x9634eu);
L_9634e:
    X86_TICK(c, 24);
    // 09634e  pop edi
    X86_AT(c, 0x9634eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09634f  pop esi
    X86_AT(c, 0x9634fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 096350  leave 
    X86_AT(c, 0x96350u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 096351  ret 
    X86_AT(c, 0x96351u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x96230u, "ran off the end of a function");
}
void f_0009634e(X86Cpu& c) {
    X86_TICK(c, 24);
    // 09634e  pop edi
    X86_AT(c, 0x9634eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09634f  pop esi
    X86_AT(c, 0x9634fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 096350  leave 
    X86_AT(c, 0x96350u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 096351  ret 
    X86_AT(c, 0x96351u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9634eu, "ran off the end of a function");
}
void f_00096354(X86Cpu& c) {
    X86_TICK(c, 7);
    // 096354  call 0x96160
    X86_AT(c, 0x96354u);
    push32(c, 0x96359u); x86_call_known(c, 0x96160u, f_00096160); X86_RET(c, 0x96359u);
    X86_TICK(c, 7);
    // 096359  call 0x96360
    X86_AT(c, 0x96359u);
    push32(c, 0x9635eu); x86_call_known(c, 0x96360u, f_00096360); X86_RET(c, 0x9635eu);
    X86_TICK(c, 10);
    // 09635e  ret 
    X86_AT(c, 0x9635eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x96354u, "ran off the end of a function");
}
void f_00096360(X86Cpu& c) {
    X86_TICK(c, 18);
    // 096360  push ebx
    X86_AT(c, 0x96360u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 096361  push esi
    X86_AT(c, 0x96361u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096362  push edi
    X86_AT(c, 0x96362u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096363  cmp byte ptr [0x8a6e3], 0
    X86_AT(c, 0x96363u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A6E3u))), 0x0u, 0, 1);
    // 09636a  je 0x96382
    X86_AT(c, 0x9636au);
    if (x86_cc(c, 4)) { goto L_96382; }
    X86_TICK(c, 20);
    // 09636c  push dword ptr [0x8ab74]
    X86_AT(c, 0x9636cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8AB74u))); push32(c, v); }
    // 096372  mov eax, dword ptr [0x8ab74]
    X86_AT(c, 0x96372u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB74u)));
    // 096377  sub eax, 0xc
    X86_AT(c, 0x96377u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xCu, 0, 4); }
    // 09637a  push eax
    X86_AT(c, 0x9637au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09637b  call 0x965f0
    X86_AT(c, 0x9637bu);
    push32(c, 0x96380u); x86_call_known(c, 0x965f0u, f_000965f0); X86_RET(c, 0x96380u);
    X86_TICK(c, 7);
    // 096380  jmp 0x963d3
    X86_AT(c, 0x96380u);
    goto L_963d3;
L_96382:
    X86_TICK(c, 35);
    // 096382  mov eax, dword ptr [0x8ab74]
    X86_AT(c, 0x96382u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB74u)));
    // 096387  mov dl, byte ptr [eax + 0xa]
    X86_AT(c, 0x96387u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu))));
    // 09638a  cmp dl, byte ptr [eax - 2]
    X86_AT(c, 0x9638au);
    (void)x86_sub(c, g8(c, 2), rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFEu))), 0, 1);
    // 09638d  setne byte ptr [eax - 2]
    X86_AT(c, 0x9638du);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFEu)), x86_cc(c, 5) ? 1u : 0u);
    // 096391  mov eax, dword ptr [0x8ab74]
    X86_AT(c, 0x96391u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB74u)));
    // 096396  cmp byte ptr [eax + 0xb], 0
    X86_AT(c, 0x96396u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu))), 0x0u, 0, 1);
    // 09639a  je 0x963c8
    X86_AT(c, 0x9639au);
    if (x86_cc(c, 4)) { goto L_963c8; }
    X86_TICK(c, 36);
    // 09639c  add dword ptr [0x8ab74], 0xfffffff4
    X86_AT(c, 0x9639cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AB74u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 0963a3  mov ax, word ptr [0x8aba4]
    X86_AT(c, 0x963a3u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8ABA4u))));
    // 0963a9  mov edx, dword ptr [0x8ab74]
    X86_AT(c, 0x963a9u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8AB74u)));
    // 0963af  mov word ptr [edx + 8], ax
    X86_AT(c, 0x963afu);
    wr16((c.sbase[3] + (uint32_t)(c.r[2] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 0963b3  mov eax, dword ptr [0x8ab9c]
    X86_AT(c, 0x963b3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB9Cu)));
    // 0963b8  mov ecx, dword ptr [0x8aba0]
    X86_AT(c, 0x963b8u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8ABA0u)));
    // 0963be  mov dword ptr [edx], eax
    X86_AT(c, 0x963beu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0963c0  mov dword ptr [edx + 4], ecx
    X86_AT(c, 0x963c0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)), c.r[1]);
    // 0963c3  jmp 0x964aa
    X86_AT(c, 0x963c3u);
    goto L_964aa;
L_963c8:
    X86_TICK(c, 16);
    // 0963c8  mov eax, dword ptr [0x8ab74]
    X86_AT(c, 0x963c8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB74u)));
    // 0963cd  cmp byte ptr [eax - 1], 0
    X86_AT(c, 0x963cdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 0963d1  je 0x963f6
    X86_AT(c, 0x963d1u);
    if (x86_cc(c, 4)) { goto L_963f6; }
L_963d3:
    X86_TICK(c, 14);
    // 0963d3  add dword ptr [0x8ab74], 0xfffffff4
    X86_AT(c, 0x963d3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AB74u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 0963da  jmp 0x964aa
    X86_AT(c, 0x963dau);
    goto L_964aa;
L_963df:
    X86_TICK(c, 15);
    // 0963df  mov eax, dword ptr [0x8ab74]
    X86_AT(c, 0x963dfu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB74u)));
    // 0963e4  sub eax, 0xc
    X86_AT(c, 0x963e4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0963e7  push eax
    X86_AT(c, 0x963e7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0963e8  call 0x9695c
    X86_AT(c, 0x963e8u);
    push32(c, 0x963edu); x86_call_known(c, 0x9695cu, f_0009695c); X86_RET(c, 0x963edu);
    X86_TICK(c, 10);
    // 0963ed  mov eax, dword ptr [0x8ab74]
    X86_AT(c, 0x963edu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB74u)));
    // 0963f2  dec word ptr [eax - 4]
    X86_AT(c, 0x963f2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_963f6:
    X86_TICK(c, 16);
    // 0963f6  mov eax, dword ptr [0x8ab74]
    X86_AT(c, 0x963f6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB74u)));
    // 0963fb  cmp byte ptr [eax - 5], 0x80
    X86_AT(c, 0x963fbu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFBu))), 0x80u, 0, 1);
    // 0963ff  jb 0x963df
    X86_AT(c, 0x963ffu);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x963dfu); goto L_963df; }
    X86_TICK(c, 7);
    // 096401  jmp 0x96417
    X86_AT(c, 0x96401u);
    goto L_96417;
L_96403:
    X86_TICK(c, 12);
    // 096403  push dword ptr [0x8ab74]
    X86_AT(c, 0x96403u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8AB74u))); push32(c, v); }
    // 096409  call 0x9695c
    X86_AT(c, 0x96409u);
    push32(c, 0x9640eu); x86_call_known(c, 0x9695cu, f_0009695c); X86_RET(c, 0x9640eu);
    X86_TICK(c, 10);
    // 09640e  mov eax, dword ptr [0x8ab74]
    X86_AT(c, 0x9640eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB74u)));
    // 096413  dec word ptr [eax + 8]
    X86_AT(c, 0x96413u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_96417:
    X86_TICK(c, 16);
    // 096417  mov eax, dword ptr [0x8ab74]
    X86_AT(c, 0x96417u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB74u)));
    // 09641c  cmp byte ptr [eax + 7], 0x80
    X86_AT(c, 0x9641cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x7u))), 0x80u, 0, 1);
    // 096420  jb 0x96403
    X86_AT(c, 0x96420u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x96403u); goto L_96403; }
    X86_TICK(c, 35);
    // 096422  push dword ptr [eax + 4]
    X86_AT(c, 0x96422u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))); push32(c, v); }
    // 096425  push dword ptr [eax]
    X86_AT(c, 0x96425u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0]))); push32(c, v); }
    // 096427  push dword ptr [eax - 8]
    X86_AT(c, 0x96427u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF8u))); push32(c, v); }
    // 09642a  push dword ptr [eax - 0xc]
    X86_AT(c, 0x9642au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF4u))); push32(c, v); }
    // 09642d  lea edx, [eax - 0xc]
    X86_AT(c, 0x9642du);
    c.r[2] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 096430  push edx
    X86_AT(c, 0x96430u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 096431  mov ebx, eax
    X86_AT(c, 0x96431u);
    c.r[3] = c.r[0];
    // 096433  mov esi, edx
    X86_AT(c, 0x96433u);
    c.r[6] = c.r[2];
    // 096435  call 0x96e38
    X86_AT(c, 0x96435u);
    push32(c, 0x9643au); x86_call_known(c, 0x96e38u, f_00096e38); X86_RET(c, 0x9643au);
    X86_TICK(c, 35);
    // 09643a  movzx eax, ax
    X86_AT(c, 0x9643au);
    c.r[0] = (c.r[0] & 0xFFFFu);
    // 09643d  movzx edx, word ptr [ebx + 8]
    X86_AT(c, 0x9643du);
    c.r[2] = rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 096441  movzx edi, word ptr [esi + 8]
    X86_AT(c, 0x96441u);
    c.r[7] = rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 096445  sub edi, edx
    X86_AT(c, 0x96445u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[2], 0, 4); }
    // 096447  add edi, 0x403e
    X86_AT(c, 0x96447u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x403Eu, 0, 4); }
    // 09644d  sub edi, eax
    X86_AT(c, 0x9644du);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
    // 09644f  add dword ptr [0x8ab74], 0xfffffff4
    X86_AT(c, 0x9644fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AB74u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 096456  and edi, edi
    X86_AT(c, 0x96456u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 096458  jge 0x96493
    X86_AT(c, 0x96458u);
    if (x86_cc(c, 13)) { goto L_96493; }
    X86_TICK(c, 7);
    // 09645a  cmp edi, 0xffffffc1
    X86_AT(c, 0x9645au);
    (void)x86_sub(c, c.r[7], 0xFFFFFFC1u, 0, 4);
    // 09645d  jl 0x9647c
    X86_AT(c, 0x9645du);
    if (x86_cc(c, 12)) { goto L_9647c; }
    X86_TICK(c, 18);
    // 09645f  mov eax, edi
    X86_AT(c, 0x9645fu);
    c.r[0] = c.r[7];
    // 096461  neg eax
    X86_AT(c, 0x96461u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 096463  push eax
    X86_AT(c, 0x96463u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 096464  push dword ptr [0x8ab74]
    X86_AT(c, 0x96464u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8AB74u))); push32(c, v); }
    // 09646a  call 0x96978
    X86_AT(c, 0x9646au);
    push32(c, 0x9646fu); x86_call_known(c, 0x96978u, f_00096978); X86_RET(c, 0x9646fu);
    X86_TICK(c, 13);
    // 09646f  mov eax, dword ptr [0x8ab74]
    X86_AT(c, 0x9646fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB74u)));
    // 096474  mov word ptr [eax + 8], 0
    X86_AT(c, 0x96474u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)), 0x0u);
    // 09647a  jmp 0x9649f
    X86_AT(c, 0x9647au);
    goto L_9649f;
L_9647c:
    X86_TICK(c, 30);
    // 09647c  mov esi, 0x8ab84
    X86_AT(c, 0x9647cu);
    c.r[6] = 0x8AB84u;
    // 096481  mov eax, dword ptr [0x8ab74]
    X86_AT(c, 0x96481u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB74u)));
    // 096486  push edi
    X86_AT(c, 0x96486u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096487  mov edi, eax
    X86_AT(c, 0x96487u);
    c.r[7] = c.r[0];
    // 096489  mov ecx, 3
    X86_AT(c, 0x96489u);
    c.r[1] = 0x3u;
    // 09648e  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x9648eu);
    x86_string(c, 0, 4, 243, 4, 3);
    // 096490  pop edi
    X86_AT(c, 0x96490u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096491  jmp 0x9649f
    X86_AT(c, 0x96491u);
    goto L_9649f;
L_96493:
    X86_TICK(c, 8);
    // 096493  mov eax, edi
    X86_AT(c, 0x96493u);
    c.r[0] = c.r[7];
    // 096495  mov edx, dword ptr [0x8ab74]
    X86_AT(c, 0x96495u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8AB74u)));
    // 09649b  mov word ptr [edx + 8], ax
    X86_AT(c, 0x9649bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[2] + 0x8u)), (c.r[0] & 0xFFFFu));
L_9649f:
    X86_TICK(c, 12);
    // 09649f  push dword ptr [0x8ab74]
    X86_AT(c, 0x9649fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8AB74u))); push32(c, v); }
    // 0964a5  call 0x96a14
    X86_AT(c, 0x964a5u);
    push32(c, 0x964aau); x86_call_known(c, 0x96a14u, f_00096a14); X86_RET(c, 0x964aau);
L_964aa:
    X86_TICK(c, 22);
    // 0964aa  pop edi
    X86_AT(c, 0x964aau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0964ab  pop esi
    X86_AT(c, 0x964abu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0964ac  pop ebx
    X86_AT(c, 0x964acu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0964ad  ret 
    X86_AT(c, 0x964adu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x96360u, "ran off the end of a function");
}
void f_000964aa(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0964aa  pop edi
    X86_AT(c, 0x964aau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0964ab  pop esi
    X86_AT(c, 0x964abu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0964ac  pop ebx
    X86_AT(c, 0x964acu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0964ad  ret 
    X86_AT(c, 0x964adu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x964aau, "ran off the end of a function");
}
void f_000964b0(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0964b0  enter 0x10, 0
    X86_AT(c, 0x964b0u);
    x86_enter(c, 0x10u, 0x0u, 4);
    // 0964b4  push ebx
    X86_AT(c, 0x964b4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0964b5  push esi
    X86_AT(c, 0x964b5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0964b6  push edi
    X86_AT(c, 0x964b6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0964b7  cmp byte ptr [0x8a6e3], 0
    X86_AT(c, 0x964b7u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A6E3u))), 0x0u, 0, 1);
    // 0964be  je 0x964d9
    X86_AT(c, 0x964beu);
    if (x86_cc(c, 4)) { goto L_964d9; }
    X86_TICK(c, 20);
    // 0964c0  push dword ptr [0x8ab74]
    X86_AT(c, 0x964c0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8AB74u))); push32(c, v); }
    // 0964c6  mov eax, dword ptr [0x8ab74]
    X86_AT(c, 0x964c6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB74u)));
    // 0964cb  sub eax, 0xc
    X86_AT(c, 0x964cbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0964ce  push eax
    X86_AT(c, 0x964ceu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0964cf  call 0x965f7
    X86_AT(c, 0x964cfu);
    push32(c, 0x964d4u); x86_call_known(c, 0x965f7u, f_000965f7); X86_RET(c, 0x964d4u);
    X86_TICK(c, 7);
    // 0964d4  jmp 0x96546
    X86_AT(c, 0x964d4u);
    goto L_96546;
L_964d9:
    X86_TICK(c, 16);
    // 0964d9  mov eax, dword ptr [0x8ab74]
    X86_AT(c, 0x964d9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB74u)));
    // 0964de  cmp byte ptr [eax + 0xb], 0
    X86_AT(c, 0x964deu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu))), 0x0u, 0, 1);
    // 0964e2  je 0x964ea
    X86_AT(c, 0x964e2u);
    if (x86_cc(c, 4)) { goto L_964ea; }
    X86_TICK(c, 12);
    // 0964e4  cmp byte ptr [eax - 1], 0
    X86_AT(c, 0x964e4u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 0964e8  jne 0x96502
    X86_AT(c, 0x964e8u);
    if (x86_cc(c, 5)) { goto L_96502; }
L_964ea:
    X86_TICK(c, 24);
    // 0964ea  mov esi, dword ptr [0x8ab74]
    X86_AT(c, 0x964eau);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x8AB74u)));
    // 0964f0  mov edi, dword ptr [0x8ab74]
    X86_AT(c, 0x964f0u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0x8AB74u)));
    // 0964f6  sub edi, 0xc
    X86_AT(c, 0x964f6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0964f9  mov ecx, 0xc
    X86_AT(c, 0x964f9u);
    c.r[1] = 0xCu;
    // 0964fe  cmpsb byte ptr [esi], byte ptr es:[edi]
    X86_AT(c, 0x964feu);
    x86_string(c, 1, 1, 243, 4, 3);
    // 096500  jne 0x96506
    X86_AT(c, 0x96500u);
    if (x86_cc(c, 5)) { goto L_96506; }
L_96502:
    X86_TICK(c, 9);
    // 096502  sub eax, eax
    X86_AT(c, 0x96502u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 096504  jmp 0x96546
    X86_AT(c, 0x96504u);
    goto L_96546;
L_96506:
    X86_TICK(c, 21);
    // 096506  mov eax, dword ptr [0x8ab74]
    X86_AT(c, 0x96506u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB74u)));
    // 09650b  mov dl, byte ptr [eax + 0xa]
    X86_AT(c, 0x9650bu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu))));
    // 09650e  mov byte ptr [ebp - 0xd], dl
    X86_AT(c, 0x9650eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), g8(c, 2));
    // 096511  mov bl, byte ptr [eax - 2]
    X86_AT(c, 0x96511u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFEu))));
    // 096514  cmp dl, bl
    X86_AT(c, 0x96514u);
    (void)x86_sub(c, g8(c, 2), g8(c, 3), 0, 1);
    // 096516  jne 0x96539
    X86_AT(c, 0x96516u);
    if (x86_cc(c, 5)) { goto L_96539; }
    X86_TICK(c, 28);
    // 096518  lea esi, [eax - 0xc]
    X86_AT(c, 0x96518u);
    c.r[6] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 09651b  lea edi, [ebp - 0xc]
    X86_AT(c, 0x9651bu);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 09651e  mov ecx, 3
    X86_AT(c, 0x9651eu);
    c.r[1] = 0x3u;
    // 096523  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x96523u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 096525  push 5
    X86_AT(c, 0x96525u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 096527  push eax
    X86_AT(c, 0x96527u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 096528  lea eax, [ebp - 0xc]
    X86_AT(c, 0x96528u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 09652b  push eax
    X86_AT(c, 0x9652bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09652c  call 0x968ad
    X86_AT(c, 0x9652cu);
    push32(c, 0x96531u); x86_call_known(c, 0x968adu, f_000968ad); X86_RET(c, 0x96531u);
    X86_TICK(c, 14);
    // 096531  cmp al, bl
    X86_AT(c, 0x96531u);
    (void)x86_sub(c, g8(c, 0), g8(c, 3), 0, 1);
    // 096533  setne byte ptr [ebp - 0xe]
    X86_AT(c, 0x96533u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)), x86_cc(c, 5) ? 1u : 0u);
    // 096537  jmp 0x9653c
    X86_AT(c, 0x96537u);
    goto L_9653c;
L_96539:
    X86_TICK(c, 2);
    // 096539  mov byte ptr [ebp - 0xe], bl
    X86_AT(c, 0x96539u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)), g8(c, 3));
L_9653c:
    X86_TICK(c, 12);
    // 09653c  mov al, byte ptr [ebp - 0xe]
    X86_AT(c, 0x9653cu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))));
    // 09653f  add eax, eax
    X86_AT(c, 0x9653fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 096541  sub ah, ah
    X86_AT(c, 0x96541u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 096543  neg eax
    X86_AT(c, 0x96543u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 096545  inc eax
    X86_AT(c, 0x96545u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
L_96546:
    X86_TICK(c, 28);
    // 096546  pop edi
    X86_AT(c, 0x96546u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096547  pop esi
    X86_AT(c, 0x96547u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 096548  pop ebx
    X86_AT(c, 0x96548u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 096549  leave 
    X86_AT(c, 0x96549u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09654a  ret 
    X86_AT(c, 0x9654au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x964b0u, "ran off the end of a function");
}
void f_0009654c(X86Cpu& c) {
    X86_TICK(c, 13);
    // 09654c  enter 4, 0
    X86_AT(c, 0x9654cu);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 096550  call 0x964b0
    X86_AT(c, 0x96550u);
    push32(c, 0x96555u); x86_call_known(c, 0x964b0u, f_000964b0); X86_RET(c, 0x96555u);
    X86_TICK(c, 25);
    // 096555  mov word ptr [ebp - 2], ax
    X86_AT(c, 0x96555u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), (c.r[0] & 0xFFFFu));
    // 096559  add dword ptr [0x8ab74], 0xffffffe8
    X86_AT(c, 0x96559u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AB74u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFE8u, 0, 4)); }
    // 096560  leave 
    X86_AT(c, 0x96560u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 096561  ret 
    X86_AT(c, 0x96561u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9654cu, "ran off the end of a function");
}
void f_00096564(X86Cpu& c) {
    X86_TICK(c, 19);
    // 096564  enter 4, 0
    X86_AT(c, 0x96564u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 096568  push esi
    X86_AT(c, 0x96568u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096569  push edi
    X86_AT(c, 0x96569u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09656a  mov si, 1
    X86_AT(c, 0x9656au);
    s16(c, 6, 0x1u);
    // 09656e  call 0x9654c
    X86_AT(c, 0x9656eu);
    push32(c, 0x96573u); x86_call_known(c, 0x9654cu, f_0009654c); X86_RET(c, 0x96573u);
    X86_TICK(c, 9);
    // 096573  lea edi, [esi + eax*1]
    X86_AT(c, 0x96573u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 096576  cmp di, si
    X86_AT(c, 0x96576u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 096579  jle 0x9657f
    X86_AT(c, 0x96579u);
    if (x86_cc(c, 14)) { goto L_9657f; }
    X86_TICK(c, 2);
    // 09657b  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0x9657bu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
L_9657f:
    X86_TICK(c, 24);
    // 09657f  pop edi
    X86_AT(c, 0x9657fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096580  pop esi
    X86_AT(c, 0x96580u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 096581  leave 
    X86_AT(c, 0x96581u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 096582  ret 
    X86_AT(c, 0x96582u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x96564u, "ran off the end of a function");
}
void f_00096584(X86Cpu& c) {
    X86_TICK(c, 32);
    // 096584  esc 0xf, byte ptr [0x8abd8]
    X86_AT(c, 0x96584u);
    // 09658a  wait 
    X86_AT(c, 0x9658au);
    // 09658b  mov ax, word ptr [0x8abd8]
    X86_AT(c, 0x9658bu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8ABD8u))));
    // 096591  and ax, 0xf3ff
    X86_AT(c, 0x96591u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xF3FFu, 2)); }
    // 096595  or eax, ecx
    X86_AT(c, 0x96595u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[1], 4); }
    // 096597  mov word ptr [0x8abd6], ax
    X86_AT(c, 0x96597u);
    wr16((c.sbase[3] + (uint32_t)(0x8ABD6u)), (c.r[0] & 0xFFFFu));
    // 09659d  esc 0xd, byte ptr [0x8abd6]
    X86_AT(c, 0x9659du);
    // 0965a3  ret 
    X86_AT(c, 0x965a3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x96584u, "ran off the end of a function");
}
void f_000965a4(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0965a4  push eax
    X86_AT(c, 0x965a4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0965a5  esc 0x3c, al
    X86_AT(c, 0x965a5u);
    // 0965a7  wait 
    X86_AT(c, 0x965a7u);
    // 0965a8  and ax, 0x4100
    X86_AT(c, 0x965a8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x4100u, 2)); }
    // 0965ac  cmp ax, 0x4000
    X86_AT(c, 0x965acu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x4000u, 0, 2);
    // 0965b0  je 0x965b6
    X86_AT(c, 0x965b0u);
    if (x86_cc(c, 4)) { goto L_965b6; }
    X86_TICK(c, 2);
    // 0965b2  cmp ax, 1
    X86_AT(c, 0x965b2u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x1u, 0, 2);
L_965b6:
    X86_TICK(c, 14);
    // 0965b6  pop eax
    X86_AT(c, 0x965b6u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0965b7  ret 
    X86_AT(c, 0x965b7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x965a4u, "ran off the end of a function");
}
void f_000965cd(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0965cd  xor edx, edx
    X86_AT(c, 0x965cdu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 0965cf  mov ecx, dword ptr [esp + 8]
    X86_AT(c, 0x965cfu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0965d3  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0x965d3u);
    // 0965d5  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0x965d5u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0965d9  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0x965d9u);
    // 0965db  mov eax, dword ptr cs:[edx + 0x965c1]
    X86_AT(c, 0x965dbu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[2] + 0x965C1u)));
    // 0965e2  call eax
    X86_AT(c, 0x965e2u);
    { uint32_t t = c.r[0]; push32(c, 0x965e4u); x86_call(c, t); X86_RET(c, 0x965e4u); }
    X86_TICK(c, 13);
    // 0965e4  esc 0x1f, byte ptr [ecx]
    X86_AT(c, 0x965e4u);
    // 0965e6  ret 8
    X86_AT(c, 0x965e6u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x965cdu, "ran off the end of a function");
}
void f_000965e9(X86Cpu& c) {
    goto L_965e9;
L_965cf:
    X86_TICK(c, 25);
    // 0965cf  mov ecx, dword ptr [esp + 8]
    X86_AT(c, 0x965cfu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0965d3  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0x965d3u);
    // 0965d5  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0x965d5u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0965d9  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0x965d9u);
    // 0965db  mov eax, dword ptr cs:[edx + 0x965c1]
    X86_AT(c, 0x965dbu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[2] + 0x965C1u)));
    // 0965e2  call eax
    X86_AT(c, 0x965e2u);
    { uint32_t t = c.r[0]; push32(c, 0x965e4u); x86_call(c, t); X86_RET(c, 0x965e4u); }
    X86_TICK(c, 13);
    // 0965e4  esc 0x1f, byte ptr [ecx]
    X86_AT(c, 0x965e4u);
    // 0965e6  ret 8
    X86_AT(c, 0x965e6u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
L_965e9:
    X86_TICK(c, 9);
    // 0965e9  mov edx, 4
    X86_AT(c, 0x965e9u);
    c.r[2] = 0x4u;
    // 0965ee  jmp 0x965cf
    X86_AT(c, 0x965eeu);
    X86_POLL(c, 0x965cfu); goto L_965cf;
    x86_fault(c, 0x965e9u, "ran off the end of a function");
}
void f_000965f0(X86Cpu& c) {
    goto L_965f0;
L_965cf:
    X86_TICK(c, 25);
    // 0965cf  mov ecx, dword ptr [esp + 8]
    X86_AT(c, 0x965cfu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0965d3  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0x965d3u);
    // 0965d5  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0x965d5u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0965d9  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0x965d9u);
    // 0965db  mov eax, dword ptr cs:[edx + 0x965c1]
    X86_AT(c, 0x965dbu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[2] + 0x965C1u)));
    // 0965e2  call eax
    X86_AT(c, 0x965e2u);
    { uint32_t t = c.r[0]; push32(c, 0x965e4u); x86_call(c, t); X86_RET(c, 0x965e4u); }
    X86_TICK(c, 13);
    // 0965e4  esc 0x1f, byte ptr [ecx]
    X86_AT(c, 0x965e4u);
    // 0965e6  ret 8
    X86_AT(c, 0x965e6u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
L_965f0:
    X86_TICK(c, 9);
    // 0965f0  mov edx, 8
    X86_AT(c, 0x965f0u);
    c.r[2] = 0x8u;
    // 0965f5  jmp 0x965cf
    X86_AT(c, 0x965f5u);
    X86_POLL(c, 0x965cfu); goto L_965cf;
    x86_fault(c, 0x965f0u, "ran off the end of a function");
}
void f_000965f7(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0965f7  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0x965f7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0965fb  esc 0x1d, byte ptr [eax]
    X86_AT(c, 0x965fbu);
    // 0965fd  mov eax, dword ptr [esp + 8]
    X86_AT(c, 0x965fdu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 096601  esc 0x1d, byte ptr [eax]
    X86_AT(c, 0x96601u);
    // 096603  esc 0x33, cl
    X86_AT(c, 0x96603u);
    // 096605  call 0x9666a
    X86_AT(c, 0x96605u);
    push32(c, 0x9660au); x86_call_known(c, 0x9666au, f_0009666a); X86_RET(c, 0x9660au);
    X86_TICK(c, 10);
    // 09660a  ret 8
    X86_AT(c, 0x9660au);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x965f7u, "ran off the end of a function");
}
void f_00096633(X86Cpu& c) {
    X86_TICK(c, 13);
    // 096633  esc 8, byte ptr [esp + 4]
    X86_AT(c, 0x96633u);
    // 096637  ret 4
    X86_AT(c, 0x96637u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x96633u, "ran off the end of a function");
}
void f_0009664d(X86Cpu& c) {
    X86_TICK(c, 13);
    // 09664d  esc 0x28, byte ptr [esp + 4]
    X86_AT(c, 0x9664du);
    // 096651  ret 8
    X86_AT(c, 0x96651u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x9664du, "ran off the end of a function");
}
void f_00096654(X86Cpu& c) {
    X86_TICK(c, 23);
    // 096654  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0x96654u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 096658  esc 0x1f, byte ptr [eax]
    X86_AT(c, 0x96658u);
    // 09665a  wait 
    X86_AT(c, 0x9665au);
    // 09665b  ret 4
    X86_AT(c, 0x9665bu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x96654u, "ran off the end of a function");
}
void f_0009665e(X86Cpu& c) {
    X86_TICK(c, 17);
    // 09665e  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0x9665eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 096662  esc 0x1d, byte ptr [eax]
    X86_AT(c, 0x96662u);
    // 096664  ret 4
    X86_AT(c, 0x96664u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x9665eu, "ran off the end of a function");
}
void f_00096667(X86Cpu& c) {
    X86_TICK(c, 13);
    // 096667  esc 0x2b, al
    X86_AT(c, 0x96667u);
    // 096669  ret 
    X86_AT(c, 0x96669u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x96667u, "ran off the end of a function");
}
void f_0009666a(X86Cpu& c) {
    X86_TICK(c, 9);
    // 09666a  xor eax, eax
    X86_AT(c, 0x9666au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 09666c  call 0x965a4
    X86_AT(c, 0x9666cu);
    push32(c, 0x96671u); x86_call_known(c, 0x965a4u, f_000965a4); X86_RET(c, 0x96671u);
    X86_TICK(c, 5);
    // 096671  je 0x96678
    X86_AT(c, 0x96671u);
    if (x86_cc(c, 4)) { goto L_96678; }
    X86_TICK(c, 5);
    // 096673  jb 0x96677
    X86_AT(c, 0x96673u);
    if (x86_cc(c, 2)) { goto L_96677; }
    X86_TICK(c, 12);
    // 096675  inc eax
    X86_AT(c, 0x96675u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 096676  ret 
    X86_AT(c, 0x96676u);
    c.eip = pop32(c); return;
L_96677:
    X86_TICK(c, 2);
    // 096677  dec eax
    X86_AT(c, 0x96677u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
L_96678:
    X86_TICK(c, 10);
    // 096678  ret 
    X86_AT(c, 0x96678u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9666au, "ran off the end of a function");
}
void f_000966a7(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0966a7  esc 0xc, ch
    X86_AT(c, 0x966a7u);
    // 0966a9  xor eax, eax
    X86_AT(c, 0x966a9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0966ab  esc 0x3c, al
    X86_AT(c, 0x966abu);
    // 0966ad  wait 
    X86_AT(c, 0x966adu);
    // 0966ae  ret 
    X86_AT(c, 0x966aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x966a7u, "ran off the end of a function");
}
void f_000966af(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0966af  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0x966afu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0966b3  esc 0x3e, byte ptr [eax]
    X86_AT(c, 0x966b3u);
    // 0966b5  wait 
    X86_AT(c, 0x966b5u);
    // 0966b6  ret 4
    X86_AT(c, 0x966b6u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x966afu, "ran off the end of a function");
}
void f_000966c4(X86Cpu& c) {
    X86_TICK(c, 36);
    // 0966c4  push ebp
    X86_AT(c, 0x966c4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0966c5  mov ebp, esp
    X86_AT(c, 0x966c5u);
    c.r[5] = c.r[4];
    // 0966c7  push esi
    X86_AT(c, 0x966c7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0966c8  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x966c8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0966cb  mov edx, dword ptr [eax + 4]
    X86_AT(c, 0x966cbu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)));
    // 0966ce  mov esi, edx
    X86_AT(c, 0x966ceu);
    c.r[6] = c.r[2];
    // 0966d0  shr esi, 0x14
    X86_AT(c, 0x966d0u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 5, v, 0x14u, 4, w); if (w) c.r[6] = r; }
    // 0966d3  mov ecx, dword ptr [eax]
    X86_AT(c, 0x966d3u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0966d5  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x966d5u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0966d8  and si, 0x7ff
    X86_AT(c, 0x966d8u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & 0x7FFu, 2)); }
    // 0966dd  cmp si, 0x7ff
    X86_AT(c, 0x966ddu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x7FFu, 0, 2);
    // 0966e2  je 0x96729
    X86_AT(c, 0x966e2u);
    if (x86_cc(c, 4)) { goto L_96729; }
    X86_TICK(c, 7);
    // 0966e4  and si, si
    X86_AT(c, 0x966e4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & (c.r[6] & 0xFFFFu), 2)); }
    // 0966e7  je 0x96733
    X86_AT(c, 0x966e7u);
    if (x86_cc(c, 4)) { goto L_96733; }
    X86_TICK(c, 6);
    // 0966e9  mov byte ptr [eax + 0xb], 0
    X86_AT(c, 0x966e9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu)), 0x0u);
    // 0966ed  sub si, 0x3ff
    X86_AT(c, 0x966edu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_sub(c, v, 0x3FFu, 0, 2)); }
    // 0966f2  add si, 0x3fff
    X86_AT(c, 0x966f2u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x3FFFu, 0, 2)); }
L_966f7:
    X86_TICK(c, 9);
    // 0966f7  mov word ptr [eax + 8], si
    X86_AT(c, 0x966f7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)), (c.r[6] & 0xFFFFu));
    // 0966fb  test edx, 0x80000000
    X86_AT(c, 0x966fbu);
    (void)x86_logic(c, c.r[2] & 0x80000000u, 4);
    // 096701  je 0x96709
    X86_AT(c, 0x96701u);
    if (x86_cc(c, 4)) { goto L_96709; }
    X86_TICK(c, 9);
    // 096703  mov byte ptr [eax + 0xa], 1
    X86_AT(c, 0x96703u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu)), 0x1u);
    // 096707  jmp 0x9670d
    X86_AT(c, 0x96707u);
    goto L_9670d;
L_96709:
    X86_TICK(c, 2);
    // 096709  mov byte ptr [eax + 0xa], 0
    X86_AT(c, 0x96709u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu)), 0x0u);
L_9670d:
    X86_TICK(c, 13);
    // 09670d  shld edx, ecx, 0xb
    X86_AT(c, 0x9670du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0xBu, 4, w); if (w) c.r[2] = r; }
    // 096711  shl ecx, 0xb
    X86_AT(c, 0x96711u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xBu, 4, w); if (w) c.r[1] = r; }
    // 096714  and si, si
    X86_AT(c, 0x96714u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & (c.r[6] & 0xFFFFu), 2)); }
    // 096717  je 0x9671f
    X86_AT(c, 0x96717u);
    if (x86_cc(c, 4)) { goto L_9671f; }
    X86_TICK(c, 2);
    // 096719  or edx, 0x80000000
    X86_AT(c, 0x96719u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | 0x80000000u, 4); }
L_9671f:
    X86_TICK(c, 22);
    // 09671f  mov dword ptr [eax + 4], edx
    X86_AT(c, 0x9671fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)), c.r[2]);
    // 096722  mov dword ptr [eax], ecx
    X86_AT(c, 0x96722u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), c.r[1]);
    // 096724  pop esi
    X86_AT(c, 0x96724u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 096725  pop ebp
    X86_AT(c, 0x96725u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 096726  ret 8
    X86_AT(c, 0x96726u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
L_96729:
    X86_TICK(c, 11);
    // 096729  mov si, 0x7fff
    X86_AT(c, 0x96729u);
    s16(c, 6, 0x7FFFu);
    // 09672d  mov byte ptr [eax + 0xb], 0
    X86_AT(c, 0x9672du);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu)), 0x0u);
    // 096731  jmp 0x966f7
    X86_AT(c, 0x96731u);
    X86_POLL(c, 0x966f7u); goto L_966f7;
L_96733:
    X86_TICK(c, 9);
    // 096733  mov byte ptr [eax + 0xb], 1
    X86_AT(c, 0x96733u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu)), 0x1u);
    // 096737  jmp 0x966f7
    X86_AT(c, 0x96737u);
    X86_POLL(c, 0x966f7u); goto L_966f7;
    x86_fault(c, 0x966c4u, "ran off the end of a function");
}
void f_000967bc(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0967bc  push ebp
    X86_AT(c, 0x967bcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0967bd  mov ebp, esp
    X86_AT(c, 0x967bdu);
    c.r[5] = c.r[4];
    // 0967bf  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x967bfu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0967c2  mov ecx, eax
    X86_AT(c, 0x967c2u);
    c.r[1] = c.r[0];
    // 0967c4  shl ecx, 1
    X86_AT(c, 0x967c4u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 0967c6  shr ecx, 0x18
    X86_AT(c, 0x967c6u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x18u, 4, w); if (w) c.r[1] = r; }
    // 0967c9  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x967c9u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0967cc  cmp cl, 0xff
    X86_AT(c, 0x967ccu);
    (void)x86_sub(c, g8(c, 1), 0xFFu, 0, 1);
    // 0967cf  je 0x96811
    X86_AT(c, 0x967cfu);
    if (x86_cc(c, 4)) { goto L_96811; }
    X86_TICK(c, 7);
    // 0967d1  and cl, cl
    X86_AT(c, 0x967d1u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & g8(c, 1), 1)); }
    // 0967d3  je 0x9681b
    X86_AT(c, 0x967d3u);
    if (x86_cc(c, 4)) { goto L_9681b; }
    X86_TICK(c, 6);
    // 0967d5  mov byte ptr [edx + 0xb], 0
    X86_AT(c, 0x967d5u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xBu)), 0x0u);
    // 0967d9  sub cx, 0x7f
    X86_AT(c, 0x967d9u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, 0x7Fu, 0, 2)); }
    // 0967dd  add cx, 0x3fff
    X86_AT(c, 0x967ddu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x3FFFu, 0, 2)); }
L_967e2:
    X86_TICK(c, 9);
    // 0967e2  mov word ptr [edx + 8], cx
    X86_AT(c, 0x967e2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[2] + 0x8u)), (c.r[1] & 0xFFFFu));
    // 0967e6  test eax, 0x80000000
    X86_AT(c, 0x967e6u);
    (void)x86_logic(c, c.r[0] & 0x80000000u, 4);
    // 0967eb  je 0x967f3
    X86_AT(c, 0x967ebu);
    if (x86_cc(c, 4)) { goto L_967f3; }
    X86_TICK(c, 9);
    // 0967ed  mov byte ptr [edx + 0xa], 1
    X86_AT(c, 0x967edu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xAu)), 0x1u);
    // 0967f1  jmp 0x967f7
    X86_AT(c, 0x967f1u);
    goto L_967f7;
L_967f3:
    X86_TICK(c, 2);
    // 0967f3  mov byte ptr [edx + 0xa], 0
    X86_AT(c, 0x967f3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xAu)), 0x0u);
L_967f7:
    X86_TICK(c, 10);
    // 0967f7  shl eax, 8
    X86_AT(c, 0x967f7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0967fa  and cx, cx
    X86_AT(c, 0x967fau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & (c.r[1] & 0xFFFFu), 2)); }
    // 0967fd  je 0x96804
    X86_AT(c, 0x967fdu);
    if (x86_cc(c, 4)) { goto L_96804; }
    X86_TICK(c, 2);
    // 0967ff  or eax, 0x80000000
    X86_AT(c, 0x967ffu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | 0x80000000u, 4); }
L_96804:
    X86_TICK(c, 18);
    // 096804  mov dword ptr [edx + 4], eax
    X86_AT(c, 0x96804u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)), c.r[0]);
    // 096807  mov dword ptr [edx], 0
    X86_AT(c, 0x96807u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), 0x0u);
    // 09680d  pop ebp
    X86_AT(c, 0x9680du);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 09680e  ret 8
    X86_AT(c, 0x9680eu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
L_96811:
    X86_TICK(c, 11);
    // 096811  mov cx, 0x7fff
    X86_AT(c, 0x96811u);
    s16(c, 1, 0x7FFFu);
    // 096815  mov byte ptr [edx + 0xb], 0
    X86_AT(c, 0x96815u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xBu)), 0x0u);
    // 096819  jmp 0x967e2
    X86_AT(c, 0x96819u);
    X86_POLL(c, 0x967e2u); goto L_967e2;
L_9681b:
    X86_TICK(c, 9);
    // 09681b  mov byte ptr [edx + 0xb], 1
    X86_AT(c, 0x9681bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xBu)), 0x1u);
    // 09681f  jmp 0x967e2
    X86_AT(c, 0x9681fu);
    X86_POLL(c, 0x967e2u); goto L_967e2;
    x86_fault(c, 0x967bcu, "ran off the end of a function");
}
void f_00096884(X86Cpu& c) {
    X86_TICK(c, 31);
    // 096884  push ebp
    X86_AT(c, 0x96884u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 096885  mov ebp, esp
    X86_AT(c, 0x96885u);
    c.r[5] = c.r[4];
    // 096887  push esi
    X86_AT(c, 0x96887u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096888  push edi
    X86_AT(c, 0x96888u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096889  push ebx
    X86_AT(c, 0x96889u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 09688a  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x9688au);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 09688d  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x9688du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 096890  xor edx, edx
    X86_AT(c, 0x96890u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 096892  movzx ecx, word ptr [ebp + 0x10]
    X86_AT(c, 0x96892u);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 096896  shr ecx, 1
    X86_AT(c, 0x96896u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 096898  clc 
    X86_AT(c, 0x96898u);
    c.fl &= ~X86_CF;
L_96899:
    X86_TICK(c, 24);
    // 096899  mov eax, dword ptr [edi + edx*4]
    X86_AT(c, 0x96899u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] * 4)));
    // 09689c  adc dword ptr [esi + edx*4], eax
    X86_AT(c, 0x9689cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 4)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], c.fl & 1, 4)); }
    // 09689f  inc edx
    X86_AT(c, 0x9689fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0968a0  loop 0x96899
    X86_AT(c, 0x968a0u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x96899u); goto L_96899; }
    X86_TICK(c, 31);
    // 0968a2  mov al, 0
    X86_AT(c, 0x968a2u);
    s8(c, 0, 0x0u);
    // 0968a4  rcl al, 1
    X86_AT(c, 0x968a4u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 0968a6  pop ebx
    X86_AT(c, 0x968a6u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0968a7  pop edi
    X86_AT(c, 0x968a7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0968a8  pop esi
    X86_AT(c, 0x968a8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0968a9  pop ebp
    X86_AT(c, 0x968a9u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0968aa  ret 0xc
    X86_AT(c, 0x968aau);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x96884u, "ran off the end of a function");
}
void f_000968ad(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0968ad  push ebp
    X86_AT(c, 0x968adu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0968ae  mov ebp, esp
    X86_AT(c, 0x968aeu);
    c.r[5] = c.r[4];
    // 0968b0  push esi
    X86_AT(c, 0x968b0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0968b1  push edi
    X86_AT(c, 0x968b1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0968b2  push ebx
    X86_AT(c, 0x968b2u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0968b3  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x968b3u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0968b6  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x968b6u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0968b9  xor edx, edx
    X86_AT(c, 0x968b9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 0968bb  movzx ecx, word ptr [ebp + 0x10]
    X86_AT(c, 0x968bbu);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0968bf  clc 
    X86_AT(c, 0x968bfu);
    c.fl &= ~X86_CF;
L_968c0:
    X86_TICK(c, 24);
    // 0968c0  mov ax, word ptr [edi + edx*2]
    X86_AT(c, 0x968c0u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] * 2))));
    // 0968c4  sbb word ptr [esi + edx*2], ax
    X86_AT(c, 0x968c4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 2)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), c.fl & 1, 2)); }
    // 0968c8  inc edx
    X86_AT(c, 0x968c8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0968c9  loop 0x968c0
    X86_AT(c, 0x968c9u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x968c0u); goto L_968c0; }
    X86_TICK(c, 31);
    // 0968cb  mov al, 0
    X86_AT(c, 0x968cbu);
    s8(c, 0, 0x0u);
    // 0968cd  rcl al, 1
    X86_AT(c, 0x968cdu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 0968cf  pop ebx
    X86_AT(c, 0x968cfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0968d0  pop edi
    X86_AT(c, 0x968d0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0968d1  pop esi
    X86_AT(c, 0x968d1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0968d2  pop ebp
    X86_AT(c, 0x968d2u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0968d3  ret 0xc
    X86_AT(c, 0x968d3u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x968adu, "ran off the end of a function");
}
void f_000968d6(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0968d6  push ebp
    X86_AT(c, 0x968d6u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0968d7  mov ebp, esp
    X86_AT(c, 0x968d7u);
    c.r[5] = c.r[4];
    // 0968d9  push esi
    X86_AT(c, 0x968d9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0968da  push edi
    X86_AT(c, 0x968dau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0968db  push ebx
    X86_AT(c, 0x968dbu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0968dc  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x968dcu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0968df  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x968dfu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0968e2  xor edx, edx
    X86_AT(c, 0x968e2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 0968e4  movzx ecx, word ptr [ebp + 0x10]
    X86_AT(c, 0x968e4u);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0968e8  shr ecx, 1
    X86_AT(c, 0x968e8u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 0968ea  clc 
    X86_AT(c, 0x968eau);
    c.fl &= ~X86_CF;
L_968eb:
    X86_TICK(c, 25);
    // 0968eb  mov eax, dword ptr [edi + edx*4]
    X86_AT(c, 0x968ebu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] * 4)));
    // 0968ee  sbb eax, dword ptr [esi + edx*4]
    X86_AT(c, 0x968eeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 4))), c.fl & 1, 4); }
    // 0968f1  mov dword ptr [esi + edx*4], eax
    X86_AT(c, 0x968f1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 4)), c.r[0]);
    // 0968f4  inc edx
    X86_AT(c, 0x968f4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0968f5  loop 0x968eb
    X86_AT(c, 0x968f5u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x968ebu); goto L_968eb; }
    X86_TICK(c, 31);
    // 0968f7  mov al, 0
    X86_AT(c, 0x968f7u);
    s8(c, 0, 0x0u);
    // 0968f9  rcl al, 1
    X86_AT(c, 0x968f9u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 0968fb  pop ebx
    X86_AT(c, 0x968fbu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0968fc  pop edi
    X86_AT(c, 0x968fcu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0968fd  pop esi
    X86_AT(c, 0x968fdu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0968fe  pop ebp
    X86_AT(c, 0x968feu);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0968ff  ret 0xc
    X86_AT(c, 0x968ffu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x968d6u, "ran off the end of a function");
}
void f_00096902(X86Cpu& c) {
    X86_TICK(c, 19);
    // 096902  push esi
    X86_AT(c, 0x96902u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096903  mov esi, dword ptr [esp + 8]
    X86_AT(c, 0x96903u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 096907  movzx ecx, word ptr [esp + 0xc]
    X86_AT(c, 0x96907u);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 09690c  shr ecx, 1
    X86_AT(c, 0x9690cu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 09690e  xor edx, edx
    X86_AT(c, 0x9690eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 096910  clc 
    X86_AT(c, 0x96910u);
    c.fl &= ~X86_CF;
L_96911:
    X86_TICK(c, 23);
    // 096911  mov eax, 0
    X86_AT(c, 0x96911u);
    c.r[0] = 0x0u;
    // 096916  sbb eax, dword ptr [esi + edx*4]
    X86_AT(c, 0x96916u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 4))), c.fl & 1, 4); }
    // 096919  mov dword ptr [esi + edx*4], eax
    X86_AT(c, 0x96919u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 4)), c.r[0]);
    // 09691c  inc edx
    X86_AT(c, 0x9691cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 09691d  loop 0x96911
    X86_AT(c, 0x9691du);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x96911u); goto L_96911; }
    X86_TICK(c, 19);
    // 09691f  mov al, 0
    X86_AT(c, 0x9691fu);
    s8(c, 0, 0x0u);
    // 096921  rcl al, 1
    X86_AT(c, 0x96921u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 096923  pop esi
    X86_AT(c, 0x96923u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 096924  ret 8
    X86_AT(c, 0x96924u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x96902u, "ran off the end of a function");
}
void f_00096927(X86Cpu& c) {
    X86_TICK(c, 18);
    // 096927  push edi
    X86_AT(c, 0x96927u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096928  push ebx
    X86_AT(c, 0x96928u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 096929  mov edi, dword ptr [esp + 0xc]
    X86_AT(c, 0x96929u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 09692d  xor eax, eax
    X86_AT(c, 0x9692du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 09692f  mov ebx, dword ptr [edi + 4]
    X86_AT(c, 0x9692fu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)));
    // 096932  mov edx, dword ptr [edi]
    X86_AT(c, 0x96932u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
L_96934:
    X86_TICK(c, 7);
    // 096934  and ebx, ebx
    X86_AT(c, 0x96934u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 096936  jne 0x96943
    X86_AT(c, 0x96936u);
    if (x86_cc(c, 5)) { goto L_96943; }
    X86_TICK(c, 13);
    // 096938  mov ebx, edx
    X86_AT(c, 0x96938u);
    c.r[3] = c.r[2];
    // 09693a  xor edx, edx
    X86_AT(c, 0x9693au);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 09693c  add eax, 0x20
    X86_AT(c, 0x9693cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x20u, 0, 4); }
    // 096941  jmp 0x96934
    X86_AT(c, 0x96941u);
    X86_POLL(c, 0x96934u); goto L_96934;
L_96943:
    X86_TICK(c, 44);
    // 096943  bsr ecx, ebx
    X86_AT(c, 0x96943u);
    c.r[1] = x86_bsr(c, c.r[3], c.r[1]);
    // 096946  sub ecx, 0x1f
    X86_AT(c, 0x96946u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x1Fu, 0, 4); }
    // 096949  neg ecx
    X86_AT(c, 0x96949u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
    // 09694b  shld ebx, edx, cl
    X86_AT(c, 0x9694bu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[3] = r; }
    // 09694e  shl edx, cl
    X86_AT(c, 0x9694eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 096950  add eax, ecx
    X86_AT(c, 0x96950u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[1], 0, 4); }
    // 096952  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0x96952u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 096955  mov dword ptr [edi], edx
    X86_AT(c, 0x96955u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[2]);
    // 096957  pop ebx
    X86_AT(c, 0x96957u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 096958  pop edi
    X86_AT(c, 0x96958u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096959  ret 4
    X86_AT(c, 0x96959u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x96927u, "ran off the end of a function");
}
void f_0009695c(X86Cpu& c) {
    X86_TICK(c, 33);
    // 09695c  mov edx, dword ptr [esp + 4]
    X86_AT(c, 0x9695cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 096960  shl dword ptr [edx], 1
    X86_AT(c, 0x96960u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2])); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 096962  rcl dword ptr [edx + 4], 1
    X86_AT(c, 0x96962u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 096965  mov al, 0
    X86_AT(c, 0x96965u);
    s8(c, 0, 0x0u);
    // 096967  rcl al, 1
    X86_AT(c, 0x96967u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 096969  ret 4
    X86_AT(c, 0x96969u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x9695cu, "ran off the end of a function");
}
void f_00096978(X86Cpu& c) {
    X86_TICK(c, 15);
    // 096978  mov edx, dword ptr [esp + 4]
    X86_AT(c, 0x96978u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 09697c  movzx ecx, word ptr [esp + 8]
    X86_AT(c, 0x9697cu);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 096981  jecxz 0x969b8
    X86_AT(c, 0x96981u);
    if (c.r[1] == 0) { goto L_969b8; }
    X86_TICK(c, 7);
    // 096983  cmp ecx, 0x20
    X86_AT(c, 0x96983u);
    (void)x86_sub(c, c.r[1], 0x20u, 0, 4);
    // 096986  jl 0x9699f
    X86_AT(c, 0x96986u);
    if (x86_cc(c, 12)) { goto L_9699f; }
    X86_TICK(c, 14);
    // 096988  mov eax, dword ptr [edx + 4]
    X86_AT(c, 0x96988u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)));
    // 09698b  clc 
    X86_AT(c, 0x9698bu);
    c.fl &= ~X86_CF;
    // 09698c  shr eax, cl
    X86_AT(c, 0x9698cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 09698e  jae 0x96991
    X86_AT(c, 0x9698eu);
    if (x86_cc(c, 3)) { goto L_96991; }
    X86_TICK(c, 2);
    // 096990  inc eax
    X86_AT(c, 0x96990u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
L_96991:
    X86_TICK(c, 11);
    // 096991  mov dword ptr [edx], eax
    X86_AT(c, 0x96991u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 096993  mov dword ptr [edx + 4], 0
    X86_AT(c, 0x96993u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)), 0x0u);
    // 09699a  jmp 0x969b8
    X86_AT(c, 0x9699au);
    goto L_969b8;
L_9699f:
    X86_TICK(c, 31);
    // 09699f  mov eax, dword ptr [edx + 4]
    X86_AT(c, 0x9699fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)));
    // 0969a2  shrd dword ptr [edx], eax, cl
    X86_AT(c, 0x969a2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2])); uint32_t v = rd32(ea); bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) wr32(ea, r); }
    // 0969a5  pushf 
    X86_AT(c, 0x969a5u);
    push16(c, c.fl & 0xFFFFu);
    // 0969a7  shr eax, cl
    X86_AT(c, 0x969a7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 0969a9  popf 
    X86_AT(c, 0x969a9u);
    x86_popfd(c, 2);
    // 0969ab  jae 0x969b5
    X86_AT(c, 0x969abu);
    if (x86_cc(c, 3)) { goto L_969b5; }
    X86_TICK(c, 9);
    // 0969ad  add dword ptr [edx], 1
    X86_AT(c, 0x969adu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x1u, 0, 4)); }
    // 0969b0  adc eax, 0
    X86_AT(c, 0x969b0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
L_969b5:
    X86_TICK(c, 2);
    // 0969b5  mov dword ptr [edx + 4], eax
    X86_AT(c, 0x969b5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)), c.r[0]);
L_969b8:
    X86_TICK(c, 10);
    // 0969b8  ret 8
    X86_AT(c, 0x969b8u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x96978u, "ran off the end of a function");
}
void f_000969bb(X86Cpu& c) {
    X86_TICK(c, 42);
    // 0969bb  mov edx, dword ptr [esp + 4]
    X86_AT(c, 0x969bbu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0969bf  shl dword ptr [edx], 1
    X86_AT(c, 0x969bfu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2])); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 0969c1  rcl dword ptr [edx + 4], 1
    X86_AT(c, 0x969c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 0969c4  rcl dword ptr [edx + 8], 1
    X86_AT(c, 0x969c4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0x8u)); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 0969c7  rcl dword ptr [edx + 0xc], 1
    X86_AT(c, 0x969c7u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCu)); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 0969ca  ret 4
    X86_AT(c, 0x969cau);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x969bbu, "ran off the end of a function");
}
void f_000969d0(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0969d0  push 0x1b34
    X86_AT(c, 0x969d0u);
    { uint32_t v = 0x1B34u; push32(c, v); }
    // 0969d5  call 0x96ed0
    X86_AT(c, 0x969d5u);
    push32(c, 0x969dau); x86_call_known(c, 0x96ed0u, f_00096ed0); X86_RET(c, 0x969dau);
    X86_TICK(c, 13);
    // 0969da  mov ax, word ptr [0x8aa2c]
    X86_AT(c, 0x969dau);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8AA2Cu))));
    // 0969e0  push eax
    X86_AT(c, 0x969e0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0969e1  call 0x95d54
    X86_AT(c, 0x969e1u);
    push32(c, 0x969e6u); x86_call_known(c, 0x95d54u, f_00095d54); X86_RET(c, 0x969e6u);
    X86_TICK(c, 9);
    // 0969e6  push 1
    X86_AT(c, 0x969e6u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0969e8  call 0x94dec
    X86_AT(c, 0x969e8u);
    push32(c, 0x969edu); x86_call_known(c, 0x94decu, f_00094dec); X86_RET(c, 0x969edu);
    X86_TICK(c, 10);
    // 0969ed  ret 
    X86_AT(c, 0x969edu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x969d0u, "ran off the end of a function");
}
void f_000969f0(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0969f0  mov eax, 0x8ab68
    X86_AT(c, 0x969f0u);
    c.r[0] = 0x8AB68u;
    // 0969f5  cmp eax, dword ptr [0x8ab74]
    X86_AT(c, 0x969f5u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x8AB74u))), 0, 4);
    // 0969fb  ja 0x96a02
    X86_AT(c, 0x969fbu);
    if (x86_cc(c, 7)) { goto L_96a02; }
    X86_TICK(c, 7);
    // 0969fd  call 0x969d0
    X86_AT(c, 0x969fdu);
    push32(c, 0x96a02u); x86_call_known(c, 0x969d0u, f_000969d0); X86_RET(c, 0x96a02u);
L_96a02:
    X86_TICK(c, 17);
    // 096a02  add dword ptr [0x8ab74], 0xc
    X86_AT(c, 0x96a02u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AB74u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xCu, 0, 4)); }
    // 096a09  ret 
    X86_AT(c, 0x96a09u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x969f0u, "ran off the end of a function");
}
void f_00096a0c(X86Cpu& c) {
    X86_TICK(c, 17);
    // 096a0c  add dword ptr [0x8ab74], 0xfffffff4
    X86_AT(c, 0x96a0cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AB74u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 096a13  ret 
    X86_AT(c, 0x96a13u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x96a0cu, "ran off the end of a function");
}
void f_00096a14(X86Cpu& c) {
    X86_TICK(c, 41);
    // 096a14  push ebp
    X86_AT(c, 0x96a14u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 096a15  mov ebp, esp
    X86_AT(c, 0x96a15u);
    c.r[5] = c.r[4];
    // 096a17  push esi
    X86_AT(c, 0x96a17u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096a18  push edi
    X86_AT(c, 0x96a18u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096a19  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x96a19u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 096a1c  mov ax, word ptr [edi]
    X86_AT(c, 0x96a1cu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 096a1f  or ax, word ptr [edi + 2]
    X86_AT(c, 0x96a1fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))), 2)); }
    // 096a23  or ax, word ptr [edi + 4]
    X86_AT(c, 0x96a23u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 2)); }
    // 096a27  or ax, word ptr [edi + 6]
    X86_AT(c, 0x96a27u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))), 2)); }
    // 096a2b  and ax, ax
    X86_AT(c, 0x96a2bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 096a2e  jne 0x96a3f
    X86_AT(c, 0x96a2eu);
    if (x86_cc(c, 5)) { goto L_96a3f; }
    X86_TICK(c, 15);
    // 096a30  sub eax, eax
    X86_AT(c, 0x96a30u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 096a32  mov word ptr [edi + 8], ax
    X86_AT(c, 0x96a32u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 096a36  mov byte ptr [edi + 0xb], 1
    X86_AT(c, 0x96a36u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xBu)), 0x1u);
    // 096a3a  mov byte ptr [edi + 0xa], al
    X86_AT(c, 0x96a3au);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu)), g8(c, 0));
    // 096a3d  jmp 0x96a94
    X86_AT(c, 0x96a3du);
    goto L_96a94;
L_96a3f:
    X86_TICK(c, 12);
    // 096a3f  cmp word ptr [edi + 8], 0x7fff
    X86_AT(c, 0x96a3fu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 0x7FFFu, 0, 2);
    // 096a45  jb 0x96a63
    X86_AT(c, 0x96a45u);
    if (x86_cc(c, 2)) { goto L_96a63; }
    X86_TICK(c, 25);
    // 096a47  mov ax, word ptr [0x8aba4]
    X86_AT(c, 0x96a47u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8ABA4u))));
    // 096a4d  mov word ptr [edi + 8], ax
    X86_AT(c, 0x96a4du);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 096a51  mov eax, dword ptr [0x8ab9c]
    X86_AT(c, 0x96a51u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB9Cu)));
    // 096a56  mov edx, dword ptr [0x8aba0]
    X86_AT(c, 0x96a56u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8ABA0u)));
    // 096a5c  mov dword ptr [edi], eax
    X86_AT(c, 0x96a5cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 096a5e  mov dword ptr [edi + 4], edx
    X86_AT(c, 0x96a5eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[2]);
    // 096a61  jmp 0x96a94
    X86_AT(c, 0x96a61u);
    goto L_96a94;
L_96a63:
    X86_TICK(c, 12);
    // 096a63  cmp byte ptr [edi + 7], 0x80
    X86_AT(c, 0x96a63u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x7u))), 0x80u, 0, 1);
    // 096a67  jae 0x96a94
    X86_AT(c, 0x96a67u);
    if (x86_cc(c, 3)) { goto L_96a94; }
    X86_TICK(c, 9);
    // 096a69  push edi
    X86_AT(c, 0x96a69u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096a6a  call 0x96927
    X86_AT(c, 0x96a6au);
    push32(c, 0x96a6fu); x86_call_known(c, 0x96927u, f_00096927); X86_RET(c, 0x96a6fu);
    X86_TICK(c, 19);
    // 096a6f  xchg esi, eax
    X86_AT(c, 0x96a6fu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 096a70  movsx eax, si
    X86_AT(c, 0x96a70u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[6] & 0xFFFFu);
    // 096a73  movzx edx, word ptr [edi + 8]
    X86_AT(c, 0x96a73u);
    c.r[2] = rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)));
    // 096a77  cmp edx, eax
    X86_AT(c, 0x96a77u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 096a79  jl 0x96a81
    X86_AT(c, 0x96a79u);
    if (x86_cc(c, 12)) { goto L_96a81; }
    X86_TICK(c, 14);
    // 096a7b  sub word ptr [edi + 8], si
    X86_AT(c, 0x96a7bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 096a7f  jmp 0x96a94
    X86_AT(c, 0x96a7fu);
    goto L_96a94;
L_96a81:
    X86_TICK(c, 19);
    // 096a81  mov eax, esi
    X86_AT(c, 0x96a81u);
    c.r[0] = c.r[6];
    // 096a83  sub ax, word ptr [edi + 8]
    X86_AT(c, 0x96a83u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 0, 2)); }
    // 096a87  push eax
    X86_AT(c, 0x96a87u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 096a88  push edi
    X86_AT(c, 0x96a88u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096a89  call 0x96978
    X86_AT(c, 0x96a89u);
    push32(c, 0x96a8eu); x86_call_known(c, 0x96978u, f_00096978); X86_RET(c, 0x96a8eu);
    X86_TICK(c, 2);
    // 096a8e  mov word ptr [edi + 8], 0
    X86_AT(c, 0x96a8eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), 0x0u);
L_96a94:
    X86_TICK(c, 24);
    // 096a94  pop edi
    X86_AT(c, 0x96a94u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096a95  pop esi
    X86_AT(c, 0x96a95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 096a96  leave 
    X86_AT(c, 0x96a96u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 096a97  ret 4
    X86_AT(c, 0x96a97u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x96a14u, "ran off the end of a function");
}
void f_00096a9c(X86Cpu& c) {
    X86_TICK(c, 24);
    // 096a9c  enter 0x10, 0
    X86_AT(c, 0x96a9cu);
    x86_enter(c, 0x10u, 0x0u, 4);
    // 096aa0  push ebx
    X86_AT(c, 0x96aa0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 096aa1  push esi
    X86_AT(c, 0x96aa1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096aa2  push edi
    X86_AT(c, 0x96aa2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096aa3  cmp byte ptr [0x8a6e3], 0
    X86_AT(c, 0x96aa3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A6E3u))), 0x0u, 0, 1);
    // 096aaa  je 0x96aca
    X86_AT(c, 0x96aaau);
    if (x86_cc(c, 4)) { goto L_96aca; }
    X86_TICK(c, 12);
    // 096aac  push dword ptr [0x8ab74]
    X86_AT(c, 0x96aacu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8AB74u))); push32(c, v); }
    // 096ab2  call 0x9665e
    X86_AT(c, 0x96ab2u);
    push32(c, 0x96ab7u); x86_call_known(c, 0x9665eu, f_0009665e); X86_RET(c, 0x96ab7u);
    X86_TICK(c, 7);
    // 096ab7  call 0x966a7
    X86_AT(c, 0x96ab7u);
    push32(c, 0x96abcu); x86_call_known(c, 0x966a7u, f_000966a7); X86_RET(c, 0x96abcu);
    X86_TICK(c, 9);
    // 096abc  mov word ptr [ebp - 2], ax
    X86_AT(c, 0x96abcu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), (c.r[0] & 0xFFFFu));
    // 096ac0  call 0x96667
    X86_AT(c, 0x96ac0u);
    push32(c, 0x96ac5u); x86_call_known(c, 0x96667u, f_00096667); X86_RET(c, 0x96ac5u);
    X86_TICK(c, 7);
    // 096ac5  jmp 0x96b51
    X86_AT(c, 0x96ac5u);
    goto L_96b51;
L_96aca:
    X86_TICK(c, 13);
    // 096aca  mov eax, 0x8aad8
    X86_AT(c, 0x96acau);
    c.r[0] = 0x8AAD8u;
    // 096acf  cmp eax, dword ptr [0x8ab74]
    X86_AT(c, 0x96acfu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x8AB74u))), 0, 4);
    // 096ad5  jne 0x96adb
    X86_AT(c, 0x96ad5u);
    if (x86_cc(c, 5)) { goto L_96adb; }
    X86_TICK(c, 9);
    // 096ad7  mov bl, 0x41
    X86_AT(c, 0x96ad7u);
    s8(c, 3, 0x41u);
    // 096ad9  jmp 0x96b33
    X86_AT(c, 0x96ad9u);
    goto L_96b33;
L_96adb:
    X86_TICK(c, 33);
    // 096adb  mov esi, dword ptr [0x8ab74]
    X86_AT(c, 0x96adbu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x8AB74u)));
    // 096ae1  lea edi, [ebp - 0x10]
    X86_AT(c, 0x96ae1u);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 096ae4  mov ecx, 3
    X86_AT(c, 0x96ae4u);
    c.r[1] = 0x3u;
    // 096ae9  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x96ae9u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 096aeb  mov bl, byte ptr [ebp - 6]
    X86_AT(c, 0x96aebu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu))));
    // 096aee  add ebx, ebx
    X86_AT(c, 0x96aeeu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[3], 0, 4); }
    // 096af0  cmp byte ptr [ebp - 5], 0
    X86_AT(c, 0x96af0u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu))), 0x0u, 0, 1);
    // 096af4  je 0x96afb
    X86_AT(c, 0x96af4u);
    if (x86_cc(c, 4)) { goto L_96afb; }
    X86_TICK(c, 9);
    // 096af6  or bl, 0x40
    X86_AT(c, 0x96af6u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0x40u, 1)); }
    // 096af9  jmp 0x96b33
    X86_AT(c, 0x96af9u);
    goto L_96b33;
L_96afb:
    X86_TICK(c, 12);
    // 096afb  cmp word ptr [ebp - 8], 0x7fff
    X86_AT(c, 0x96afbu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x7FFFu, 0, 2);
    // 096b01  jne 0x96b1e
    X86_AT(c, 0x96b01u);
    if (x86_cc(c, 5)) { goto L_96b1e; }
    X86_TICK(c, 18);
    // 096b03  lea esi, [ebp - 0x10]
    X86_AT(c, 0x96b03u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 096b06  mov edi, 0x8ab9c
    X86_AT(c, 0x96b06u);
    c.r[7] = 0x8AB9Cu;
    // 096b0b  mov ecx, 8
    X86_AT(c, 0x96b0bu);
    c.r[1] = 0x8u;
    // 096b10  cmpsb byte ptr [esi], byte ptr es:[edi]
    X86_AT(c, 0x96b10u);
    x86_string(c, 1, 1, 243, 4, 3);
    // 096b12  jne 0x96b19
    X86_AT(c, 0x96b12u);
    if (x86_cc(c, 5)) { goto L_96b19; }
    X86_TICK(c, 9);
    // 096b14  or bl, 5
    X86_AT(c, 0x96b14u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0x5u, 1)); }
    // 096b17  jmp 0x96b33
    X86_AT(c, 0x96b17u);
    goto L_96b33;
L_96b19:
    X86_TICK(c, 9);
    // 096b19  or bl, 1
    X86_AT(c, 0x96b19u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0x1u, 1)); }
    // 096b1c  jmp 0x96b33
    X86_AT(c, 0x96b1cu);
    goto L_96b33;
L_96b1e:
    X86_TICK(c, 12);
    // 096b1e  cmp word ptr [ebp - 8], 0
    X86_AT(c, 0x96b1eu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x0u, 0, 2);
    // 096b23  jne 0x96b2a
    X86_AT(c, 0x96b23u);
    if (x86_cc(c, 5)) { goto L_96b2a; }
    X86_TICK(c, 9);
    // 096b25  or bl, 0x44
    X86_AT(c, 0x96b25u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0x44u, 1)); }
    // 096b28  jmp 0x96b33
    X86_AT(c, 0x96b28u);
    goto L_96b33;
L_96b2a:
    X86_TICK(c, 12);
    // 096b2a  cmp byte ptr [ebp - 9], 0x80
    X86_AT(c, 0x96b2au);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))), 0x80u, 0, 1);
    // 096b2e  jb 0x96b33
    X86_AT(c, 0x96b2eu);
    if (x86_cc(c, 2)) { goto L_96b33; }
    X86_TICK(c, 2);
    // 096b30  or bl, 4
    X86_AT(c, 0x96b30u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0x4u, 1)); }
L_96b33:
    X86_TICK(c, 27);
    // 096b33  mov ax, word ptr [0x8ab78]
    X86_AT(c, 0x96b33u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8AB78u))));
    // 096b39  and ax, 0xb800
    X86_AT(c, 0x96b39u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xB800u, 2)); }
    // 096b3d  sub bh, bh
    X86_AT(c, 0x96b3du);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_sub(c, v, g8(c, 7), 0, 1)); }
    // 096b3f  mov edx, ebx
    X86_AT(c, 0x96b3fu);
    c.r[2] = c.r[3];
    // 096b41  shl edx, 8
    X86_AT(c, 0x96b41u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[2] = r; }
    // 096b44  or dx, ax
    X86_AT(c, 0x96b44u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v | (c.r[0] & 0xFFFFu), 2)); }
    // 096b47  mov word ptr [0x8ab78], dx
    X86_AT(c, 0x96b47u);
    wr16((c.sbase[3] + (uint32_t)(0x8AB78u)), (c.r[2] & 0xFFFFu));
    // 096b4e  xchg edx, eax
    X86_AT(c, 0x96b4eu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 096b4f  jmp 0x96b55
    X86_AT(c, 0x96b4fu);
    goto L_96b55;
L_96b51:
    X86_TICK(c, 4);
    // 096b51  mov ax, word ptr [ebp - 2]
    X86_AT(c, 0x96b51u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))));
L_96b55:
    X86_TICK(c, 28);
    // 096b55  pop edi
    X86_AT(c, 0x96b55u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096b56  pop esi
    X86_AT(c, 0x96b56u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 096b57  pop ebx
    X86_AT(c, 0x96b57u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 096b58  leave 
    X86_AT(c, 0x96b58u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 096b59  ret 
    X86_AT(c, 0x96b59u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x96a9cu, "ran off the end of a function");
}
void f_00096c54(X86Cpu& c) {
    X86_TICK(c, 24);
    // 096c54  enter 0x2c, 0
    X86_AT(c, 0x96c54u);
    x86_enter(c, 0x2Cu, 0x0u, 4);
    // 096c58  push ebx
    X86_AT(c, 0x96c58u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 096c59  push esi
    X86_AT(c, 0x96c59u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096c5a  push edi
    X86_AT(c, 0x96c5au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096c5b  cmp byte ptr [0x8a6e3], 0
    X86_AT(c, 0x96c5bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A6E3u))), 0x0u, 0, 1);
    // 096c62  je 0x96c7c
    X86_AT(c, 0x96c62u);
    if (x86_cc(c, 4)) { goto L_96c7c; }
    X86_TICK(c, 12);
    // 096c64  push dword ptr [0x8ab74]
    X86_AT(c, 0x96c64u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8AB74u))); push32(c, v); }
    // 096c6a  call 0x9665e
    X86_AT(c, 0x96c6au);
    push32(c, 0x96c6fu); x86_call_known(c, 0x9665eu, f_0009665e); X86_RET(c, 0x96c6fu);
    X86_TICK(c, 12);
    // 096c6f  push dword ptr [ebp + 8]
    X86_AT(c, 0x96c6fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 096c72  call 0x966af
    X86_AT(c, 0x96c72u);
    push32(c, 0x96c77u); x86_call_known(c, 0x966afu, f_000966af); X86_RET(c, 0x96c77u);
    X86_TICK(c, 7);
    // 096c77  jmp 0x96ddd
    X86_AT(c, 0x96c77u);
    goto L_96ddd;
L_96c7c:
    X86_TICK(c, 35);
    // 096c7c  mov esi, dword ptr [0x8ab74]
    X86_AT(c, 0x96c7cu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x8AB74u)));
    // 096c82  lea edi, [ebp - 0xc]
    X86_AT(c, 0x96c82u);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 096c85  mov ecx, 3
    X86_AT(c, 0x96c85u);
    c.r[1] = 0x3u;
    // 096c8a  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x96c8au);
    x86_string(c, 0, 4, 243, 4, 3);
    // 096c8c  mov ax, word ptr [ebp - 4]
    X86_AT(c, 0x96c8cu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))));
    // 096c90  sub ax, 0x3fff
    X86_AT(c, 0x96c90u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x3FFFu, 0, 2)); }
    // 096c94  mov word ptr [ebp - 0x10], ax
    X86_AT(c, 0x96c94u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), (c.r[0] & 0xFFFFu));
    // 096c98  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0x96c98u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 096c9c  je 0x96ca7
    X86_AT(c, 0x96c9cu);
    if (x86_cc(c, 4)) { goto L_96ca7; }
    X86_TICK(c, 13);
    // 096c9e  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x96c9eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 096ca1  mov byte ptr [eax + 9], 0x80
    X86_AT(c, 0x96ca1u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x9u)), 0x80u);
    // 096ca5  jmp 0x96cae
    X86_AT(c, 0x96ca5u);
    goto L_96cae;
L_96ca7:
    X86_TICK(c, 6);
    // 096ca7  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x96ca7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 096caa  mov byte ptr [eax + 9], 0
    X86_AT(c, 0x96caau);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x9u)), 0x0u);
L_96cae:
    X86_TICK(c, 12);
    // 096cae  cmp word ptr [ebp - 0x10], 0x3f
    X86_AT(c, 0x96caeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0x3Fu, 0, 2);
    // 096cb3  jle 0x96cbb
    X86_AT(c, 0x96cb3u);
    if (x86_cc(c, 14)) { goto L_96cbb; }
    X86_TICK(c, 9);
    // 096cb5  mov byte ptr [ebp - 0xd], 0x99
    X86_AT(c, 0x96cb5u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), 0x99u);
    // 096cb9  jmp 0x96cbf
    X86_AT(c, 0x96cb9u);
    goto L_96cbf;
L_96cbb:
    X86_TICK(c, 2);
    // 096cbb  mov byte ptr [ebp - 0xd], 0
    X86_AT(c, 0x96cbbu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), 0x0u);
L_96cbf:
    X86_TICK(c, 2);
    // 096cbf  mov word ptr [ebp - 0x12], 1
    X86_AT(c, 0x96cbfu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEEu)), 0x1u);
L_96cc5:
    X86_TICK(c, 23);
    // 096cc5  movzx eax, word ptr [ebp - 0x12]
    X86_AT(c, 0x96cc5u);
    c.r[0] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEEu)));
    // 096cc9  mov dl, byte ptr [ebp - 0xd]
    X86_AT(c, 0x96cc9u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))));
    // 096ccc  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x96cccu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 096ccf  mov byte ptr [ecx + eax*1 - 1], dl
    X86_AT(c, 0x96ccfu);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + c.r[0] + 0xFFFFFFFFu)), g8(c, 2));
    // 096cd3  cmp ax, 9
    X86_AT(c, 0x96cd3u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x9u, 0, 2);
    // 096cd7  jae 0x96cdf
    X86_AT(c, 0x96cd7u);
    if (x86_cc(c, 3)) { goto L_96cdf; }
    X86_TICK(c, 13);
    // 096cd9  inc word ptr [ebp - 0x12]
    X86_AT(c, 0x96cd9u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEEu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 096cdd  jmp 0x96cc5
    X86_AT(c, 0x96cddu);
    X86_POLL(c, 0x96cc5u); goto L_96cc5;
L_96cdf:
    X86_TICK(c, 11);
    // 096cdf  mov ax, word ptr [ebp - 0x10]
    X86_AT(c, 0x96cdfu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))));
    // 096ce3  and ax, ax
    X86_AT(c, 0x96ce3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 096ce6  jl 0x96ddd
    X86_AT(c, 0x96ce6u);
    if (x86_cc(c, 12)) { goto L_96ddd; }
    X86_TICK(c, 7);
    // 096cec  cmp ax, 0x3f
    X86_AT(c, 0x96cecu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x3Fu, 0, 2);
    // 096cf0  jg 0x96ddd
    X86_AT(c, 0x96cf0u);
    if (x86_cc(c, 15)) { goto L_96ddd; }
    X86_TICK(c, 17);
    // 096cf6  mov dx, 0x3f
    X86_AT(c, 0x96cf6u);
    s16(c, 2, 0x3Fu);
    // 096cfa  sub edx, eax
    X86_AT(c, 0x96cfau);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 096cfc  push edx
    X86_AT(c, 0x96cfcu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 096cfd  lea eax, [ebp - 0xc]
    X86_AT(c, 0x96cfdu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 096d00  push eax
    X86_AT(c, 0x96d00u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 096d01  call 0x96978
    X86_AT(c, 0x96d01u);
    push32(c, 0x96d06u); x86_call_known(c, 0x96978u, f_00096978); X86_RET(c, 0x96d06u);
    X86_TICK(c, 26);
    // 096d06  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0x96d06u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 096d09  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0x96d09u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 096d0c  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0x96d0cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 096d0f  mov dword ptr [ebp - 0x18], edx
    X86_AT(c, 0x96d0fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[2]);
    // 096d12  cmp dword ptr [ebp - 0x18], 0
    X86_AT(c, 0x96d12u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))), 0x0u, 0, 4);
    // 096d16  sete byte ptr [ebp - 0x26]
    X86_AT(c, 0x96d16u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDAu)), x86_cc(c, 4) ? 1u : 0u);
    // 096d1a  mov byte ptr [ebp - 0x25], 0
    X86_AT(c, 0x96d1au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu)), 0x0u);
L_96d1e:
    X86_TICK(c, 12);
    // 096d1e  cmp byte ptr [ebp - 0x26], 0
    X86_AT(c, 0x96d1eu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDAu))), 0x0u, 0, 1);
    // 096d22  je 0x96d44
    X86_AT(c, 0x96d22u);
    if (x86_cc(c, 4)) { goto L_96d44; }
    X86_TICK(c, 12);
    // 096d24  cmp dword ptr [ebp - 0x1c], 0
    X86_AT(c, 0x96d24u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))), 0x0u, 0, 4);
    // 096d28  je 0x96ddd
    X86_AT(c, 0x96d28u);
    if (x86_cc(c, 4)) { goto L_96ddd; }
    X86_TICK(c, 61);
    // 096d2e  mov eax, dword ptr [ebp - 0x1c]
    X86_AT(c, 0x96d2eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 096d31  sub edx, edx
    X86_AT(c, 0x96d31u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 096d33  mov ecx, 0xa
    X86_AT(c, 0x96d33u);
    c.r[1] = 0xAu;
    // 096d38  div ecx
    X86_AT(c, 0x96d38u);
    x86_div(c, c.r[1], 4, 0x96d38u);
    // 096d3a  mov dword ptr [ebp - 0x2c], eax
    X86_AT(c, 0x96d3au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), c.r[0]);
    // 096d3d  mov ebx, edx
    X86_AT(c, 0x96d3du);
    c.r[3] = c.r[2];
    // 096d3f  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0x96d3fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 096d42  jmp 0x96da4
    X86_AT(c, 0x96d42u);
    goto L_96da4;
L_96d44:
    X86_TICK(c, 17);
    // 096d44  mov eax, dword ptr [ebp - 0x1c]
    X86_AT(c, 0x96d44u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 096d47  or eax, dword ptr [ebp - 0x18]
    X86_AT(c, 0x96d47u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))), 4); }
    // 096d4a  and eax, eax
    X86_AT(c, 0x96d4au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 096d4c  je 0x96ddd
    X86_AT(c, 0x96d4cu);
    if (x86_cc(c, 4)) { goto L_96ddd; }
    X86_TICK(c, 4);
    // 096d52  sub edi, edi
    X86_AT(c, 0x96d52u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 096d54  mov si, 3
    X86_AT(c, 0x96d54u);
    s16(c, 6, 0x3u);
L_96d58:
    X86_TICK(c, 24);
    // 096d58  movzx esi, si
    X86_AT(c, 0x96d58u);
    c.r[6] = (c.r[6] & 0xFFFFu);
    // 096d5b  shl edi, 0x10
    X86_AT(c, 0x96d5bu);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[7] = r; }
    // 096d5e  movzx eax, word ptr [ebp + esi*2 - 0x1c]
    X86_AT(c, 0x96d5eu);
    c.r[0] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] * 2 + 0xFFFFFFE4u)));
    // 096d63  or eax, edi
    X86_AT(c, 0x96d63u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[7], 4); }
    // 096d65  xchg edi, eax
    X86_AT(c, 0x96d65u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 096d66  and edi, edi
    X86_AT(c, 0x96d66u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 096d68  jne 0x96d76
    X86_AT(c, 0x96d68u);
    if (x86_cc(c, 5)) { goto L_96d76; }
    X86_TICK(c, 13);
    // 096d6a  sub ebx, ebx
    X86_AT(c, 0x96d6au);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 096d6c  sub bx, bx
    X86_AT(c, 0x96d6cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 096d6f  mov word ptr [ebp + esi*2 - 0x24], bx
    X86_AT(c, 0x96d6fu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] * 2 + 0xFFFFFFDCu)), (c.r[3] & 0xFFFFu));
    // 096d74  jmp 0x96d90
    X86_AT(c, 0x96d74u);
    goto L_96d90;
L_96d76:
    X86_TICK(c, 57);
    // 096d76  movzx esi, si
    X86_AT(c, 0x96d76u);
    c.r[6] = (c.r[6] & 0xFFFFu);
    // 096d79  mov eax, edi
    X86_AT(c, 0x96d79u);
    c.r[0] = c.r[7];
    // 096d7b  sub edx, edx
    X86_AT(c, 0x96d7bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 096d7d  mov ecx, 0xa
    X86_AT(c, 0x96d7du);
    c.r[1] = 0xAu;
    // 096d82  div ecx
    X86_AT(c, 0x96d82u);
    x86_div(c, c.r[1], 4, 0x96d82u);
    // 096d84  mov dword ptr [ebp - 0x2c], eax
    X86_AT(c, 0x96d84u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), c.r[0]);
    // 096d87  mov word ptr [ebp + esi*2 - 0x24], ax
    X86_AT(c, 0x96d87u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] * 2 + 0xFFFFFFDCu)), (c.r[0] & 0xFFFFu));
    // 096d8c  mov edi, edx
    X86_AT(c, 0x96d8cu);
    c.r[7] = c.r[2];
    // 096d8e  mov ebx, edi
    X86_AT(c, 0x96d8eu);
    c.r[3] = c.r[7];
L_96d90:
    X86_TICK(c, 7);
    // 096d90  and si, si
    X86_AT(c, 0x96d90u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & (c.r[6] & 0xFFFFu), 2)); }
    // 096d93  jbe 0x96d98
    X86_AT(c, 0x96d93u);
    if (x86_cc(c, 6)) { goto L_96d98; }
    X86_TICK(c, 9);
    // 096d95  dec esi
    X86_AT(c, 0x96d95u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 096d96  jmp 0x96d58
    X86_AT(c, 0x96d96u);
    X86_POLL(c, 0x96d58u); goto L_96d58;
L_96d98:
    X86_TICK(c, 12);
    // 096d98  mov eax, dword ptr [ebp - 0x24]
    X86_AT(c, 0x96d98u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)));
    // 096d9b  mov edx, dword ptr [ebp - 0x20]
    X86_AT(c, 0x96d9bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)));
    // 096d9e  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0x96d9eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 096da1  mov dword ptr [ebp - 0x18], edx
    X86_AT(c, 0x96da1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[2]);
L_96da4:
    X86_TICK(c, 12);
    // 096da4  mov al, byte ptr [ebp - 0x25]
    X86_AT(c, 0x96da4u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu))));
    // 096da7  rcr al, 1
    X86_AT(c, 0x96da7u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 096da9  jb 0x96dbb
    X86_AT(c, 0x96da9u);
    if (x86_cc(c, 2)) { goto L_96dbb; }
    X86_TICK(c, 23);
    // 096dab  mov al, byte ptr [ebp - 0x25]
    X86_AT(c, 0x96dabu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu))));
    // 096dae  shr al, 1
    X86_AT(c, 0x96daeu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 096db0  movzx eax, al
    X86_AT(c, 0x96db0u);
    c.r[0] = g8(c, 0);
    // 096db3  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x96db3u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 096db6  mov byte ptr [edx + eax*1], bl
    X86_AT(c, 0x96db6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + c.r[0])), g8(c, 3));
    // 096db9  jmp 0x96dce
    X86_AT(c, 0x96db9u);
    goto L_96dce;
L_96dbb:
    X86_TICK(c, 26);
    // 096dbb  mov al, byte ptr [ebp - 0x25]
    X86_AT(c, 0x96dbbu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu))));
    // 096dbe  shr al, 1
    X86_AT(c, 0x96dbeu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 096dc0  movzx eax, al
    X86_AT(c, 0x96dc0u);
    c.r[0] = g8(c, 0);
    // 096dc3  mov edx, ebx
    X86_AT(c, 0x96dc3u);
    c.r[2] = c.r[3];
    // 096dc5  shl dl, 4
    X86_AT(c, 0x96dc5u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 2, r); }
    // 096dc8  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x96dc8u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 096dcb  add byte ptr [ecx + eax*1], dl
    X86_AT(c, 0x96dcbu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[1] + c.r[0])); uint32_t v = rd8(ea); wr8(ea, x86_add(c, v, g8(c, 2), 0, 1)); }
L_96dce:
    X86_TICK(c, 11);
    // 096dce  mov al, byte ptr [ebp - 0x25]
    X86_AT(c, 0x96dceu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu))));
    // 096dd1  cmp al, 0x11
    X86_AT(c, 0x96dd1u);
    (void)x86_sub(c, g8(c, 0), 0x11u, 0, 1);
    // 096dd3  jae 0x96ddd
    X86_AT(c, 0x96dd3u);
    if (x86_cc(c, 3)) { goto L_96ddd; }
    X86_TICK(c, 13);
    // 096dd5  inc byte ptr [ebp - 0x25]
    X86_AT(c, 0x96dd5u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 096dd8  jmp 0x96d1e
    X86_AT(c, 0x96dd8u);
    X86_POLL(c, 0x96d1eu); goto L_96d1e;
L_96ddd:
    X86_TICK(c, 35);
    // 096ddd  add dword ptr [0x8ab74], 0xfffffff4
    X86_AT(c, 0x96dddu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AB74u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 096de4  pop edi
    X86_AT(c, 0x96de4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096de5  pop esi
    X86_AT(c, 0x96de5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 096de6  pop ebx
    X86_AT(c, 0x96de6u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 096de7  leave 
    X86_AT(c, 0x96de7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 096de8  ret 4
    X86_AT(c, 0x96de8u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x96c54u, "ran off the end of a function");
}
void f_00096dec(X86Cpu& c) {
    X86_TICK(c, 173);
    // 096dec  push ebp
    X86_AT(c, 0x96decu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 096ded  mov ebp, esp
    X86_AT(c, 0x96dedu);
    c.r[5] = c.r[4];
    // 096def  push edi
    X86_AT(c, 0x96defu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096df0  push ebx
    X86_AT(c, 0x96df0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 096df1  xor ecx, ecx
    X86_AT(c, 0x96df1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v ^ c.r[1], 4); }
    // 096df3  mov ebx, ecx
    X86_AT(c, 0x96df3u);
    c.r[3] = c.r[1];
    // 096df5  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x96df5u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 096df8  mul dword ptr [ebp + 0x14]
    X86_AT(c, 0x96df8u);
    x86_mul(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 4);
    // 096dfb  push eax
    X86_AT(c, 0x96dfbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 096dfc  mov edi, edx
    X86_AT(c, 0x96dfcu);
    c.r[7] = c.r[2];
    // 096dfe  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x96dfeu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 096e01  mul dword ptr [ebp + 0x18]
    X86_AT(c, 0x96e01u);
    x86_mul(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 4);
    // 096e04  add edi, eax
    X86_AT(c, 0x96e04u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 096e06  adc ecx, edx
    X86_AT(c, 0x96e06u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[2], c.fl & 1, 4); }
    // 096e08  adc ebx, 0
    X86_AT(c, 0x96e08u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 096e0b  mov eax, dword ptr [ebp + 0x14]
    X86_AT(c, 0x96e0bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 096e0e  mul dword ptr [ebp + 0x10]
    X86_AT(c, 0x96e0eu);
    x86_mul(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 4);
    // 096e11  add edi, eax
    X86_AT(c, 0x96e11u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 096e13  adc ecx, edx
    X86_AT(c, 0x96e13u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[2], c.fl & 1, 4); }
    // 096e15  adc ebx, 0
    X86_AT(c, 0x96e15u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 096e18  mov eax, dword ptr [ebp + 0x18]
    X86_AT(c, 0x96e18u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 096e1b  mul dword ptr [ebp + 0x10]
    X86_AT(c, 0x96e1bu);
    x86_mul(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 4);
    // 096e1e  add ecx, eax
    X86_AT(c, 0x96e1eu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[0], 0, 4); }
    // 096e20  adc ebx, edx
    X86_AT(c, 0x96e20u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[2], c.fl & 1, 4); }
    // 096e22  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x96e22u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 096e25  mov dword ptr [edx + 0xc], ebx
    X86_AT(c, 0x96e25u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCu)), c.r[3]);
    // 096e28  mov dword ptr [edx + 8], ecx
    X86_AT(c, 0x96e28u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x8u)), c.r[1]);
    // 096e2b  mov dword ptr [edx + 4], edi
    X86_AT(c, 0x96e2bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)), c.r[7]);
    // 096e2e  pop dword ptr [edx]
    X86_AT(c, 0x96e2eu);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(c.r[2])), v); }
    // 096e30  pop ebx
    X86_AT(c, 0x96e30u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 096e31  pop edi
    X86_AT(c, 0x96e31u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096e32  pop ebp
    X86_AT(c, 0x96e32u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 096e33  ret 0x14
    X86_AT(c, 0x96e33u);
    c.eip = pop32(c); c.r[4] += 0x14u; return;
    x86_fault(c, 0x96decu, "ran off the end of a function");
}
void f_00096e38(X86Cpu& c) {
    X86_TICK(c, 34);
    // 096e38  push ebp
    X86_AT(c, 0x96e38u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 096e39  mov ebp, esp
    X86_AT(c, 0x96e39u);
    c.r[5] = c.r[4];
    // 096e3b  push esi
    X86_AT(c, 0x96e3bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096e3c  push edi
    X86_AT(c, 0x96e3cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096e3d  push ebx
    X86_AT(c, 0x96e3du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 096e3e  sub ebx, ebx
    X86_AT(c, 0x96e3eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 096e40  mov eax, ebx
    X86_AT(c, 0x96e40u);
    c.r[0] = c.r[3];
    // 096e42  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0x96e42u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 096e45  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x96e45u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 096e48  mov ecx, dword ptr [ebp + 0x18]
    X86_AT(c, 0x96e48u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 096e4b  mov edi, dword ptr [ebp + 0x14]
    X86_AT(c, 0x96e4bu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 096e4e  push ebp
    X86_AT(c, 0x96e4eu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 096e4f  xor ebp, ebp
    X86_AT(c, 0x96e4fu);
    { uint32_t v = c.r[5]; c.r[5] = x86_logic(c, v ^ c.r[5], 4); }
L_96e51:
    X86_TICK(c, 7);
    // 096e51  cmp edx, ecx
    X86_AT(c, 0x96e51u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 096e53  ja 0x96e5b
    X86_AT(c, 0x96e53u);
    if (x86_cc(c, 7)) { goto L_96e5b; }
    X86_TICK(c, 5);
    // 096e55  jb 0x96e66
    X86_AT(c, 0x96e55u);
    if (x86_cc(c, 2)) { goto L_96e66; }
    X86_TICK(c, 7);
    // 096e57  cmp esi, edi
    X86_AT(c, 0x96e57u);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 096e59  jb 0x96e66
    X86_AT(c, 0x96e59u);
    if (x86_cc(c, 2)) { goto L_96e66; }
L_96e5b:
    X86_TICK(c, 19);
    // 096e5b  sub esi, edi
    X86_AT(c, 0x96e5bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[7], 0, 4); }
    // 096e5d  sbb edx, ecx
    X86_AT(c, 0x96e5du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], c.fl & 1, 4); }
    // 096e5f  stc 
    X86_AT(c, 0x96e5fu);
    c.fl |= X86_CF;
    // 096e60  rcl eax, 1
    X86_AT(c, 0x96e60u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 096e62  rcl ebx, 1
    X86_AT(c, 0x96e62u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) c.r[3] = r; }
    // 096e64  jmp 0x96e6a
    X86_AT(c, 0x96e64u);
    goto L_96e6a;
L_96e66:
    X86_TICK(c, 6);
    // 096e66  shl eax, 1
    X86_AT(c, 0x96e66u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 096e68  rcl ebx, 1
    X86_AT(c, 0x96e68u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) c.r[3] = r; }
L_96e6a:
    X86_TICK(c, 7);
    // 096e6a  test ebx, 0x80000000
    X86_AT(c, 0x96e6au);
    (void)x86_logic(c, c.r[3] & 0x80000000u, 4);
    // 096e70  jne 0x96e7c
    X86_AT(c, 0x96e70u);
    if (x86_cc(c, 5)) { goto L_96e7c; }
    X86_TICK(c, 7);
    // 096e72  and edx, edx
    X86_AT(c, 0x96e72u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 096e74  jne 0x96e96
    X86_AT(c, 0x96e74u);
    if (x86_cc(c, 5)) { goto L_96e96; }
    X86_TICK(c, 7);
    // 096e76  and esi, esi
    X86_AT(c, 0x96e76u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 096e78  jne 0x96e96
    X86_AT(c, 0x96e78u);
    if (x86_cc(c, 5)) { goto L_96e96; }
    X86_TICK(c, 7);
    // 096e7a  jmp 0x96e9f
    X86_AT(c, 0x96e7au);
    goto L_96e9f;
L_96e7c:
    X86_TICK(c, 11);
    // 096e7c  shl esi, 1
    X86_AT(c, 0x96e7cu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 096e7e  rcl edx, 1
    X86_AT(c, 0x96e7eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) c.r[2] = r; }
    // 096e80  jb 0x96e8c
    X86_AT(c, 0x96e80u);
    if (x86_cc(c, 2)) { goto L_96e8c; }
    X86_TICK(c, 7);
    // 096e82  cmp edx, ecx
    X86_AT(c, 0x96e82u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 096e84  ja 0x96e8c
    X86_AT(c, 0x96e84u);
    if (x86_cc(c, 7)) { goto L_96e8c; }
    X86_TICK(c, 5);
    // 096e86  jb 0x96ebb
    X86_AT(c, 0x96e86u);
    if (x86_cc(c, 2)) { goto L_96ebb; }
    X86_TICK(c, 7);
    // 096e88  cmp esi, edi
    X86_AT(c, 0x96e88u);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 096e8a  jb 0x96ebb
    X86_AT(c, 0x96e8au);
    if (x86_cc(c, 2)) { goto L_96ebb; }
L_96e8c:
    X86_TICK(c, 11);
    // 096e8c  add eax, 1
    X86_AT(c, 0x96e8cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x1u, 0, 4); }
    // 096e91  adc ebx, 0
    X86_AT(c, 0x96e91u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 096e94  jmp 0x96ebb
    X86_AT(c, 0x96e94u);
    goto L_96ebb;
L_96e96:
    X86_TICK(c, 13);
    // 096e96  inc ebp
    X86_AT(c, 0x96e96u);
    { uint32_t v = c.r[5]; c.r[5] = x86_inc(c, v, 4); }
    // 096e97  shl esi, 1
    X86_AT(c, 0x96e97u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 096e99  rcl edx, 1
    X86_AT(c, 0x96e99u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) c.r[2] = r; }
    // 096e9b  jb 0x96e5b
    X86_AT(c, 0x96e9bu);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x96e5bu); goto L_96e5b; }
    X86_TICK(c, 7);
    // 096e9d  jmp 0x96e51
    X86_AT(c, 0x96e9du);
    X86_POLL(c, 0x96e51u); goto L_96e51;
L_96e9f:
    X86_TICK(c, 7);
    // 096e9f  and ebx, ebx
    X86_AT(c, 0x96e9fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 096ea1  jne 0x96eac
    X86_AT(c, 0x96ea1u);
    if (x86_cc(c, 5)) { goto L_96eac; }
    X86_TICK(c, 13);
    // 096ea3  add ebp, 0x20
    X86_AT(c, 0x96ea3u);
    { uint32_t v = c.r[5]; c.r[5] = x86_add(c, v, 0x20u, 0, 4); }
    // 096ea6  mov ebx, eax
    X86_AT(c, 0x96ea6u);
    c.r[3] = c.r[0];
    // 096ea8  xor eax, eax
    X86_AT(c, 0x96ea8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 096eaa  jmp 0x96e9f
    X86_AT(c, 0x96eaau);
    X86_POLL(c, 0x96e9fu); goto L_96e9f;
L_96eac:
    X86_TICK(c, 22);
    // 096eac  bsr ecx, ebx
    X86_AT(c, 0x96eacu);
    c.r[1] = x86_bsr(c, c.r[3], c.r[1]);
    // 096eaf  sub ecx, 0x1f
    X86_AT(c, 0x96eafu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x1Fu, 0, 4); }
    // 096eb2  neg ecx
    X86_AT(c, 0x96eb2u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
    // 096eb4  shld ebx, eax, cl
    X86_AT(c, 0x96eb4u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[3] = r; }
    // 096eb7  shl eax, cl
    X86_AT(c, 0x96eb7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 096eb9  add ebp, ecx
    X86_AT(c, 0x96eb9u);
    { uint32_t v = c.r[5]; c.r[5] = x86_add(c, v, c.r[1], 0, 4); }
L_96ebb:
    X86_TICK(c, 44);
    // 096ebb  pop ecx
    X86_AT(c, 0x96ebbu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 096ebc  xchg ebp, ecx
    X86_AT(c, 0x96ebcu);
    { uint32_t t = c.r[5]; c.r[5] = c.r[1]; c.r[1] = t; }
    // 096ebe  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x96ebeu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 096ec1  mov dword ptr [edi], eax
    X86_AT(c, 0x96ec1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 096ec3  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0x96ec3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 096ec6  xchg ecx, eax
    X86_AT(c, 0x96ec6u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 096ec7  pop ebx
    X86_AT(c, 0x96ec7u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 096ec8  pop edi
    X86_AT(c, 0x96ec8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096ec9  pop esi
    X86_AT(c, 0x96ec9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 096eca  pop ebp
    X86_AT(c, 0x96ecau);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 096ecb  ret 0x14
    X86_AT(c, 0x96ecbu);
    c.eip = pop32(c); c.r[4] += 0x14u; return;
    x86_fault(c, 0x96e38u, "ran off the end of a function");
}
void f_00096ed0(X86Cpu& c) {
    X86_TICK(c, 31);
    // 096ed0  push ebp
    X86_AT(c, 0x96ed0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 096ed1  mov ebp, esp
    X86_AT(c, 0x96ed1u);
    c.r[5] = c.r[4];
    // 096ed3  push edi
    X86_AT(c, 0x96ed3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096ed4  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x96ed4u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 096ed7  movzx eax, word ptr [edi]
    X86_AT(c, 0x96ed7u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(c.r[7])));
    // 096eda  push eax
    X86_AT(c, 0x96edau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 096edb  lea eax, [edi + 2]
    X86_AT(c, 0x96edbu);
    c.r[0] = (uint32_t)(c.r[7] + 0x2u);
    // 096ede  push eax
    X86_AT(c, 0x96edeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 096edf  push 2
    X86_AT(c, 0x96edfu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 096ee1  call 0x94e4c
    X86_AT(c, 0x96ee1u);
    push32(c, 0x96ee6u); x86_call_known(c, 0x94e4cu, f_00094e4c); X86_RET(c, 0x96ee6u);
    X86_TICK(c, 19);
    // 096ee6  movzx eax, word ptr [0x8a5dc]
    X86_AT(c, 0x96ee6u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0x8A5DCu)));
    // 096eed  push eax
    X86_AT(c, 0x96eedu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 096eee  push 0x8a5de
    X86_AT(c, 0x96eeeu);
    { uint32_t v = 0x8A5DEu; push32(c, v); }
    // 096ef3  push 2
    X86_AT(c, 0x96ef3u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 096ef5  call 0x94e4c
    X86_AT(c, 0x96ef5u);
    push32(c, 0x96efau); x86_call_known(c, 0x94e4cu, f_00094e4c); X86_RET(c, 0x96efau);
    X86_TICK(c, 20);
    // 096efa  pop edi
    X86_AT(c, 0x96efau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096efb  leave 
    X86_AT(c, 0x96efbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 096efc  ret 4
    X86_AT(c, 0x96efcu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x96ed0u, "ran off the end of a function");
}
}
