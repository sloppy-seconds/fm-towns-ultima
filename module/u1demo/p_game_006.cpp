#include "p_game_funcs.h"
namespace p_game {
void f_000955ea(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0955ea  mov ecx, dword ptr [0x8a484]
    X86_AT(c, 0x955eau);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A484u)));
    // 0955f0  call dword ptr [0x8a480]
    X86_AT(c, 0x955f0u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A480u))); push32(c, 0x955f6u); x86_call(c, t); X86_RET(c, 0x955f6u); }
    X86_TICK(c, 16);
    // 0955f6  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x955f6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0955f9  cmp byte ptr [eax - 9], 0
    X86_AT(c, 0x955f9u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 0955fd  jne 0x95613
    X86_AT(c, 0x955fdu);
    if (x86_cc(c, 5)) { goto L_95613; }
    X86_TICK(c, 11);
    // 0955ff  mov eax, dword ptr [0x8a474]
    X86_AT(c, 0x955ffu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A474u)));
    // 095604  and eax, eax
    X86_AT(c, 0x95604u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 095606  je 0x95613
    X86_AT(c, 0x95606u);
    if (x86_cc(c, 4)) { goto L_95613; }
    X86_TICK(c, 11);
    // 095608  push eax
    X86_AT(c, 0x95608u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095609  push 0x8a488
    X86_AT(c, 0x95609u);
    { uint32_t v = 0x8A488u; push32(c, v); }
    // 09560e  call 0x9382c
    X86_AT(c, 0x9560eu);
    push32(c, 0x95613u); x86_call_known(c, 0x9382cu, f_0009382c); X86_RET(c, 0x95613u);
L_95613:
    X86_TICK(c, 28);
    // 095613  pop edi
    X86_AT(c, 0x95613u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095614  pop esi
    X86_AT(c, 0x95614u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 095615  pop ebx
    X86_AT(c, 0x95615u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 095616  leave 
    X86_AT(c, 0x95616u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095617  ret 
    X86_AT(c, 0x95617u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x955eau, "ran off the end of a function");
}
void f_00095620(X86Cpu& c) {
    X86_TICK(c, 34);
    // 095620  push ebp
    X86_AT(c, 0x95620u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 095621  mov ebp, esp
    X86_AT(c, 0x95621u);
    c.r[5] = c.r[4];
    // 095623  push ecx
    X86_AT(c, 0x95623u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 095624  sub esp, 0xc
    X86_AT(c, 0x95624u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 095627  push ebx
    X86_AT(c, 0x95627u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 095628  push esi
    X86_AT(c, 0x95628u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095629  push edi
    X86_AT(c, 0x95629u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09562a  mov edi, 1
    X86_AT(c, 0x9562au);
    c.r[7] = 0x1u;
    // 09562f  mov al, byte ptr [0x8a880]
    X86_AT(c, 0x9562fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A880u))));
    // 095634  mov byte ptr [edi + 0x8a84b], al
    X86_AT(c, 0x95634u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8A84Bu)), g8(c, 0));
    // 09563a  cmp byte ptr [0x8a893], 0
    X86_AT(c, 0x9563au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A893u))), 0x0u, 0, 1);
    // 095641  je 0x95650
    X86_AT(c, 0x95641u);
    if (x86_cc(c, 4)) { goto L_95650; }
    X86_TICK(c, 10);
    // 095643  mov dword ptr [ebp - 0x10], edi
    X86_AT(c, 0x95643u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[7]);
    // 095646  add edi, dword ptr [ebp - 0x10]
    X86_AT(c, 0x95646u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0, 4); }
    // 095649  mov byte ptr [edi + 0x8a84b], 0x2e
    X86_AT(c, 0x95649u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8A84Bu)), 0x2Eu);
L_95650:
    X86_TICK(c, 13);
    // 095650  inc edi
    X86_AT(c, 0x95650u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 095651  mov eax, dword ptr [0x8a474]
    X86_AT(c, 0x95651u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A474u)));
    // 095656  and eax, eax
    X86_AT(c, 0x95656u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 095658  je 0x956da
    X86_AT(c, 0x95658u);
    if (x86_cc(c, 4)) { goto L_956da; }
    X86_TICK(c, 15);
    // 09565e  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x9565eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 095661  mov ecx, dword ptr [edx - 8]
    X86_AT(c, 0x95661u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF8u)));
    // 095664  cmp ecx, eax
    X86_AT(c, 0x95664u);
    (void)x86_sub(c, c.r[1], c.r[0], 0, 4);
    // 095666  jb 0x9566a
    X86_AT(c, 0x95666u);
    if (x86_cc(c, 2)) { goto L_9566a; }
    X86_TICK(c, 2);
    // 095668  mov ecx, eax
    X86_AT(c, 0x95668u);
    c.r[1] = c.r[0];
L_9566a:
    X86_TICK(c, 54);
    // 09566a  mov dword ptr [ebp - 8], ecx
    X86_AT(c, 0x9566au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[1]);
    // 09566d  mov esi, 0x8a881
    X86_AT(c, 0x9566du);
    c.r[6] = 0x8A881u;
    // 095672  lea ebx, [edi + 0x8a84b]
    X86_AT(c, 0x95672u);
    c.r[3] = (uint32_t)(c.r[7] + 0x8A84Bu);
    // 095678  push edi
    X86_AT(c, 0x95678u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095679  mov edi, ebx
    X86_AT(c, 0x95679u);
    c.r[7] = c.r[3];
    // 09567b  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x9567bu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 09567d  pop edi
    X86_AT(c, 0x9567du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09567e  add edi, dword ptr [ebp - 8]
    X86_AT(c, 0x9567eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4); }
    // 095681  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x95681u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 095684  sub dword ptr [0x8a474], eax
    X86_AT(c, 0x95684u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A474u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 09568a  lea eax, [edi - 1]
    X86_AT(c, 0x9568au);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFFFFu);
    // 09568d  mov dword ptr [edx - 0x10], eax
    X86_AT(c, 0x9568du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF0u)), c.r[0]);
    // 095690  cmp byte ptr [edx - 9], 0
    X86_AT(c, 0x95690u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 095694  je 0x956a0
    X86_AT(c, 0x95694u);
    if (x86_cc(c, 4)) { goto L_956a0; }
    X86_TICK(c, 13);
    // 095696  push 2
    X86_AT(c, 0x95696u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 095698  push edi
    X86_AT(c, 0x95698u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095699  mov ecx, edx
    X86_AT(c, 0x95699u);
    c.r[1] = c.r[2];
    // 09569b  call 0x952c0
    X86_AT(c, 0x9569bu);
    push32(c, 0x956a0u); x86_call_known(c, 0x952c0u, f_000952c0); X86_RET(c, 0x956a0u);
L_956a0:
    X86_TICK(c, 13);
    // 0956a0  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x956a0u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0956a3  mov ebx, ecx
    X86_AT(c, 0x956a3u);
    c.r[3] = c.r[1];
    // 0956a5  call 0x9532c
    X86_AT(c, 0x956a5u);
    push32(c, 0x956aau); x86_call_known(c, 0x9532cu, f_0009532c); X86_RET(c, 0x956aau);
    X86_TICK(c, 18);
    // 0956aa  push dword ptr [ebx - 0x10]
    X86_AT(c, 0x956aau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFF0u))); push32(c, v); }
    // 0956ad  push 0x8a84c
    X86_AT(c, 0x956adu);
    { uint32_t v = 0x8A84Cu; push32(c, v); }
    // 0956b2  mov ecx, dword ptr [0x8a484]
    X86_AT(c, 0x956b2u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A484u)));
    // 0956b8  call dword ptr [0x8a480]
    X86_AT(c, 0x956b8u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A480u))); push32(c, 0x956beu); x86_call(c, t); X86_RET(c, 0x956beu); }
    X86_TICK(c, 12);
    // 0956be  cmp byte ptr [ebx - 9], 0
    X86_AT(c, 0x956beu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 0956c2  jne 0x956f7
    X86_AT(c, 0x956c2u);
    if (x86_cc(c, 5)) { goto L_956f7; }
    X86_TICK(c, 11);
    // 0956c4  mov eax, dword ptr [0x8a474]
    X86_AT(c, 0x956c4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A474u)));
    // 0956c9  and eax, eax
    X86_AT(c, 0x956c9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0956cb  je 0x956f7
    X86_AT(c, 0x956cbu);
    if (x86_cc(c, 4)) { goto L_956f7; }
    X86_TICK(c, 11);
    // 0956cd  push eax
    X86_AT(c, 0x956cdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0956ce  push 0x8a488
    X86_AT(c, 0x956ceu);
    { uint32_t v = 0x8A488u; push32(c, v); }
    // 0956d3  call 0x9382c
    X86_AT(c, 0x956d3u);
    push32(c, 0x956d8u); x86_call_known(c, 0x9382cu, f_0009382c); X86_RET(c, 0x956d8u);
    X86_TICK(c, 7);
    // 0956d8  jmp 0x956f7
    X86_AT(c, 0x956d8u);
    goto L_956f7;
L_956da:
    X86_TICK(c, 11);
    // 0956da  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x956dau);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0956dd  call 0x9532c
    X86_AT(c, 0x956ddu);
    push32(c, 0x956e2u); x86_call_known(c, 0x9532cu, f_0009532c); X86_RET(c, 0x956e2u);
    X86_TICK(c, 17);
    // 0956e2  lea eax, [edi - 1]
    X86_AT(c, 0x956e2u);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFFFFu);
    // 0956e5  push eax
    X86_AT(c, 0x956e5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0956e6  push 0x8a84c
    X86_AT(c, 0x956e6u);
    { uint32_t v = 0x8A84Cu; push32(c, v); }
    // 0956eb  mov ecx, dword ptr [0x8a484]
    X86_AT(c, 0x956ebu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A484u)));
    // 0956f1  call dword ptr [0x8a480]
    X86_AT(c, 0x956f1u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A480u))); push32(c, 0x956f7u); x86_call(c, t); X86_RET(c, 0x956f7u); }
L_956f7:
    X86_TICK(c, 11);
    // 0956f7  mov eax, dword ptr [0x8a87c]
    X86_AT(c, 0x956f7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A87Cu)));
    // 0956fc  and eax, eax
    X86_AT(c, 0x956fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0956fe  jg 0x95712
    X86_AT(c, 0x956feu);
    if (x86_cc(c, 15)) { goto L_95712; }
    X86_TICK(c, 9);
    // 095700  mov byte ptr [ebp - 9], 0x2d
    X86_AT(c, 0x95700u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), 0x2Du);
    // 095704  and eax, eax
    X86_AT(c, 0x95704u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 095706  jge 0x9570a
    X86_AT(c, 0x95706u);
    if (x86_cc(c, 13)) { goto L_9570a; }
    X86_TICK(c, 2);
    // 095708  neg eax
    X86_AT(c, 0x95708u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_9570a:
    X86_TICK(c, 11);
    // 09570a  inc eax
    X86_AT(c, 0x9570au);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 09570b  mov dword ptr [0x8a87c], eax
    X86_AT(c, 0x9570bu);
    wr32((c.sbase[3] + (uint32_t)(0x8A87Cu)), c.r[0]);
    // 095710  jmp 0x9571c
    X86_AT(c, 0x95710u);
    goto L_9571c;
L_95712:
    X86_TICK(c, 8);
    // 095712  mov byte ptr [ebp - 9], 0x2b
    X86_AT(c, 0x95712u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), 0x2Bu);
    // 095716  dec dword ptr [0x8a87c]
    X86_AT(c, 0x95716u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A87Cu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_9571c:
    X86_TICK(c, 11);
    // 09571c  mov ebx, 0x1f
    X86_AT(c, 0x9571cu);
    c.r[3] = 0x1Fu;
    // 095721  sub esi, esi
    X86_AT(c, 0x95721u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 095723  jmp 0x95749
    X86_AT(c, 0x95723u);
    goto L_95749;
L_95725:
    X86_TICK(c, 55);
    // 095725  mov eax, dword ptr [0x8a87c]
    X86_AT(c, 0x95725u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A87Cu)));
    // 09572a  cdq 
    X86_AT(c, 0x9572au);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 09572b  mov ecx, 0xa
    X86_AT(c, 0x9572bu);
    c.r[1] = 0xAu;
    // 095730  idiv ecx
    X86_AT(c, 0x95730u);
    x86_idiv(c, c.r[1], 4, 0x95730u);
    // 095732  and edx, edx
    X86_AT(c, 0x95732u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 095734  jge 0x95738
    X86_AT(c, 0x95734u);
    if (x86_cc(c, 13)) { goto L_95738; }
    X86_TICK(c, 2);
    // 095736  add edx, ecx
    X86_AT(c, 0x95736u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[1], 0, 4); }
L_95738:
    X86_TICK(c, 10);
    // 095738  add dx, 0x30
    X86_AT(c, 0x95738u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x30u, 0, 2)); }
    // 09573c  mov byte ptr [ebx + 0x8a84b], dl
    X86_AT(c, 0x9573cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x8A84Bu)), g8(c, 2));
    // 095742  mov dword ptr [0x8a87c], eax
    X86_AT(c, 0x95742u);
    wr32((c.sbase[3] + (uint32_t)(0x8A87Cu)), c.r[0]);
    // 095747  dec ebx
    X86_AT(c, 0x95747u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 095748  inc esi
    X86_AT(c, 0x95748u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_95749:
    X86_TICK(c, 12);
    // 095749  cmp dword ptr [0x8a87c], 0
    X86_AT(c, 0x95749u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8A87Cu))), 0x0u, 0, 4);
    // 095750  jg 0x95725
    X86_AT(c, 0x95750u);
    if (x86_cc(c, 15)) { X86_POLL(c, 0x95725u); goto L_95725; }
    X86_TICK(c, 7);
    // 095752  cmp esi, 2
    X86_AT(c, 0x95752u);
    (void)x86_sub(c, c.r[6], 0x2u, 0, 4);
    // 095755  jl 0x95725
    X86_AT(c, 0x95755u);
    if (x86_cc(c, 12)) { X86_POLL(c, 0x95725u); goto L_95725; }
    X86_TICK(c, 35);
    // 095757  mov al, byte ptr [ebp - 9]
    X86_AT(c, 0x95757u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))));
    // 09575a  mov byte ptr [ebx + 0x8a84b], al
    X86_AT(c, 0x9575au);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x8A84Bu)), g8(c, 0));
    // 095760  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x95760u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 095763  mov al, byte ptr [eax + 8]
    X86_AT(c, 0x95763u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u))));
    // 095766  mov byte ptr [ebx + 0x8a84a], al
    X86_AT(c, 0x95766u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x8A84Au)), g8(c, 0));
    // 09576c  lea eax, [esi + 2]
    X86_AT(c, 0x9576cu);
    c.r[0] = (uint32_t)(c.r[6] + 0x2u);
    // 09576f  push eax
    X86_AT(c, 0x9576fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095770  lea eax, [ebx + 0x8a84a]
    X86_AT(c, 0x95770u);
    c.r[0] = (uint32_t)(c.r[3] + 0x8A84Au);
    // 095776  push eax
    X86_AT(c, 0x95776u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095777  mov ecx, dword ptr [0x8a484]
    X86_AT(c, 0x95777u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A484u)));
    // 09577d  call dword ptr [0x8a480]
    X86_AT(c, 0x9577du);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A480u))); push32(c, 0x95783u); x86_call(c, t); X86_RET(c, 0x95783u); }
    X86_TICK(c, 28);
    // 095783  pop edi
    X86_AT(c, 0x95783u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095784  pop esi
    X86_AT(c, 0x95784u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 095785  pop ebx
    X86_AT(c, 0x95785u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 095786  leave 
    X86_AT(c, 0x95786u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095787  ret 
    X86_AT(c, 0x95787u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x95620u, "ran off the end of a function");
}
void f_000957a0(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0957a0  push ebp
    X86_AT(c, 0x957a0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0957a1  mov ebp, esp
    X86_AT(c, 0x957a1u);
    c.r[5] = c.r[4];
    // 0957a3  push ecx
    X86_AT(c, 0x957a3u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0957a4  sub esp, 0xc
    X86_AT(c, 0x957a4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0957a7  mov byte ptr [ebp - 9], 0
    X86_AT(c, 0x957a7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), 0x0u);
    // 0957ab  cmp byte ptr [0x8a478], 3
    X86_AT(c, 0x957abu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A478u))), 0x3u, 0, 1);
    // 0957b2  jne 0x957bd
    X86_AT(c, 0x957b2u);
    if (x86_cc(c, 5)) { goto L_957bd; }
    X86_TICK(c, 9);
    // 0957b4  mov dword ptr [ebp - 8], 0x12
    X86_AT(c, 0x957b4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x12u);
    // 0957bb  jmp 0x957c4
    X86_AT(c, 0x957bbu);
    goto L_957c4;
L_957bd:
    X86_TICK(c, 2);
    // 0957bd  mov dword ptr [ebp - 8], 0x10
    X86_AT(c, 0x957bdu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x10u);
L_957c4:
    X86_TICK(c, 13);
    // 0957c4  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0x957c4u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0957c8  cmp eax, 0x45
    X86_AT(c, 0x957c8u);
    (void)x86_sub(c, c.r[0], 0x45u, 0, 4);
    // 0957cb  je 0x9581c
    X86_AT(c, 0x957cbu);
    if (x86_cc(c, 4)) { goto L_9581c; }
    X86_TICK(c, 7);
    // 0957cd  cmp eax, 0x47
    X86_AT(c, 0x957cdu);
    (void)x86_sub(c, c.r[0], 0x47u, 0, 4);
    // 0957d0  je 0x957e9
    X86_AT(c, 0x957d0u);
    if (x86_cc(c, 4)) { goto L_957e9; }
    X86_TICK(c, 7);
    // 0957d2  cmp eax, 0x65
    X86_AT(c, 0x957d2u);
    (void)x86_sub(c, c.r[0], 0x65u, 0, 4);
    // 0957d5  je 0x9581c
    X86_AT(c, 0x957d5u);
    if (x86_cc(c, 4)) { goto L_9581c; }
    X86_TICK(c, 7);
    // 0957d7  cmp eax, 0x66
    X86_AT(c, 0x957d7u);
    (void)x86_sub(c, c.r[0], 0x66u, 0, 4);
    // 0957da  je 0x9584b
    X86_AT(c, 0x957dau);
    if (x86_cc(c, 4)) { goto L_9584b; }
    X86_TICK(c, 7);
    // 0957e0  cmp eax, 0x67
    X86_AT(c, 0x957e0u);
    (void)x86_sub(c, c.r[0], 0x67u, 0, 4);
    // 0957e3  jne 0x95852
    X86_AT(c, 0x957e3u);
    if (x86_cc(c, 5)) { goto L_95852; }
L_957e9:
    X86_TICK(c, 12);
    // 0957e9  cmp dword ptr [0x8a474], 0
    X86_AT(c, 0x957e9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8A474u))), 0x0u, 0, 4);
    // 0957f0  je 0x95852
    X86_AT(c, 0x957f0u);
    if (x86_cc(c, 4)) { goto L_95852; }
    X86_TICK(c, 12);
    // 0957f2  test byte ptr [0x8a46c], 8
    X86_AT(c, 0x957f2u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A46Cu))) & 0x8u, 1);
    // 0957f9  jne 0x957ff
    X86_AT(c, 0x957f9u);
    if (x86_cc(c, 5)) { goto L_957ff; }
    X86_TICK(c, 2);
    // 0957fb  mov byte ptr [ebp - 9], 1
    X86_AT(c, 0x957fbu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), 0x1u);
L_957ff:
    X86_TICK(c, 13);
    // 0957ff  mov eax, dword ptr [0x8a87c]
    X86_AT(c, 0x957ffu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A87Cu)));
    // 095804  dec eax
    X86_AT(c, 0x95804u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 095805  cmp eax, 0xfffffffc
    X86_AT(c, 0x95805u);
    (void)x86_sub(c, c.r[0], 0xFFFFFFFCu, 0, 4);
    // 095808  jl 0x95812
    X86_AT(c, 0x95808u);
    if (x86_cc(c, 12)) { goto L_95812; }
    X86_TICK(c, 11);
    // 09580a  cmp eax, dword ptr [0x8a474]
    X86_AT(c, 0x9580au);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x8A474u))), 0, 4);
    // 095810  jle 0x95825
    X86_AT(c, 0x95810u);
    if (x86_cc(c, 14)) { goto L_95825; }
L_95812:
    X86_TICK(c, 13);
    // 095812  sub byte ptr [ebp + 8], 2
    X86_AT(c, 0x95812u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)); uint32_t v = rd8(ea); wr8(ea, x86_sub(c, v, 0x2u, 0, 1)); }
    // 095816  dec dword ptr [0x8a474]
    X86_AT(c, 0x95816u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A474u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_9581c:
    X86_TICK(c, 9);
    // 09581c  mov ecx, ebp
    X86_AT(c, 0x9581cu);
    c.r[1] = c.r[5];
    // 09581e  call 0x95620
    X86_AT(c, 0x9581eu);
    push32(c, 0x95823u); x86_call_known(c, 0x95620u, f_00095620); X86_RET(c, 0x95823u);
    X86_TICK(c, 7);
    // 095823  jmp 0x95852
    X86_AT(c, 0x95823u);
    goto L_95852;
L_95825:
    X86_TICK(c, 13);
    // 095825  mov byte ptr [ebp + 8], 0x66
    X86_AT(c, 0x95825u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)), 0x66u);
    // 095829  mov eax, dword ptr [0x8a87c]
    X86_AT(c, 0x95829u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A87Cu)));
    // 09582e  and eax, eax
    X86_AT(c, 0x9582eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 095830  jle 0x95845
    X86_AT(c, 0x95830u);
    if (x86_cc(c, 14)) { goto L_95845; }
    X86_TICK(c, 11);
    // 095832  mov edx, dword ptr [0x8a474]
    X86_AT(c, 0x95832u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A474u)));
    // 095838  cmp edx, eax
    X86_AT(c, 0x95838u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 09583a  jb 0x9583d
    X86_AT(c, 0x9583au);
    if (x86_cc(c, 2)) { goto L_9583d; }
    X86_TICK(c, 3);
    // 09583c  xchg edx, eax
    X86_AT(c, 0x9583cu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_9583d:
    X86_TICK(c, 14);
    // 09583d  sub dword ptr [0x8a474], edx
    X86_AT(c, 0x9583du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A474u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], 0, 4)); }
    // 095843  jmp 0x9584b
    X86_AT(c, 0x95843u);
    goto L_9584b;
L_95845:
    X86_TICK(c, 6);
    // 095845  dec dword ptr [0x8a474]
    X86_AT(c, 0x95845u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A474u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_9584b:
    X86_TICK(c, 9);
    // 09584b  mov ecx, ebp
    X86_AT(c, 0x9584bu);
    c.r[1] = c.r[5];
    // 09584d  call 0x95390
    X86_AT(c, 0x9584du);
    push32(c, 0x95852u); x86_call_known(c, 0x95390u, f_00095390); X86_RET(c, 0x95852u);
L_95852:
    X86_TICK(c, 16);
    // 095852  leave 
    X86_AT(c, 0x95852u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095853  ret 4
    X86_AT(c, 0x95853u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x957a0u, "ran off the end of a function");
}
void f_00095874(X86Cpu& c) {
    X86_TICK(c, 21);
    // 095874  push ebp
    X86_AT(c, 0x95874u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 095875  mov ebp, esp
    X86_AT(c, 0x95875u);
    c.r[5] = c.r[4];
    // 095877  push ecx
    X86_AT(c, 0x95877u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 095878  push esi
    X86_AT(c, 0x95878u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095879  push edi
    X86_AT(c, 0x95879u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09587a  mov esi, dword ptr [0x8a87c]
    X86_AT(c, 0x9587au);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x8A87Cu)));
    // 095880  and esi, esi
    X86_AT(c, 0x95880u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 095882  jge 0x95886
    X86_AT(c, 0x95882u);
    if (x86_cc(c, 13)) { goto L_95886; }
    X86_TICK(c, 2);
    // 095884  neg esi
    X86_AT(c, 0x95884u);
    { uint32_t v = c.r[6]; c.r[6] = x86_neg(c, v, 4); }
L_95886:
    X86_TICK(c, 9);
    // 095886  mov edi, 2
    X86_AT(c, 0x95886u);
    c.r[7] = 0x2u;
    // 09588b  jmp 0x95898
    X86_AT(c, 0x9588bu);
    goto L_95898;
L_9588d:
    X86_TICK(c, 52);
    // 09588d  xchg esi, eax
    X86_AT(c, 0x9588du);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 09588e  cdq 
    X86_AT(c, 0x9588eu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 09588f  mov ecx, 0xa
    X86_AT(c, 0x9588fu);
    c.r[1] = 0xAu;
    // 095894  idiv ecx
    X86_AT(c, 0x95894u);
    x86_idiv(c, c.r[1], 4, 0x95894u);
    // 095896  xchg esi, eax
    X86_AT(c, 0x95896u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 095897  inc edi
    X86_AT(c, 0x95897u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_95898:
    X86_TICK(c, 7);
    // 095898  cmp esi, 0x63
    X86_AT(c, 0x95898u);
    (void)x86_sub(c, c.r[6], 0x63u, 0, 4);
    // 09589b  jg 0x9588d
    X86_AT(c, 0x9589bu);
    if (x86_cc(c, 15)) { X86_POLL(c, 0x9588du); goto L_9588d; }
    X86_TICK(c, 46);
    // 09589d  mov al, byte ptr [0x8a893]
    X86_AT(c, 0x9589du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A893u))));
    // 0958a2  inc eax
    X86_AT(c, 0x958a2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0958a3  movzx eax, al
    X86_AT(c, 0x958a3u);
    c.r[0] = g8(c, 0);
    // 0958a6  add eax, dword ptr [0x8a474]
    X86_AT(c, 0x958a6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0x8A474u))), 0, 4); }
    // 0958ac  add eax, 2
    X86_AT(c, 0x958acu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0958af  lea edx, [edi + eax*1]
    X86_AT(c, 0x958afu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0958b2  xchg edx, eax
    X86_AT(c, 0x958b2u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0958b3  pop edi
    X86_AT(c, 0x958b3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0958b4  pop esi
    X86_AT(c, 0x958b4u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0958b5  leave 
    X86_AT(c, 0x958b5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0958b6  ret 
    X86_AT(c, 0x958b6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x95874u, "ran off the end of a function");
}
void f_000958c8(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0958c8  enter 0x30, 0
    X86_AT(c, 0x958c8u);
    x86_enter(c, 0x30u, 0x0u, 4);
    // 0958cc  push ebx
    X86_AT(c, 0x958ccu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0958cd  push esi
    X86_AT(c, 0x958cdu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0958ce  push edi
    X86_AT(c, 0x958ceu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0958cf  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0x958cfu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0958d2  mov ecx, ebp
    X86_AT(c, 0x958d2u);
    c.r[1] = c.r[5];
    // 0958d4  call 0x95228
    X86_AT(c, 0x958d4u);
    push32(c, 0x958d9u); x86_call_known(c, 0x95228u, f_00095228); X86_RET(c, 0x958d9u);
    X86_TICK(c, 12);
    // 0958d9  cmp dword ptr [0x8a474], 0xffff
    X86_AT(c, 0x958d9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8A474u))), 0xFFFFu, 0, 4);
    // 0958e3  jne 0x958ef
    X86_AT(c, 0x958e3u);
    if (x86_cc(c, 5)) { goto L_958ef; }
    X86_TICK(c, 2);
    // 0958e5  mov dword ptr [0x8a474], 6
    X86_AT(c, 0x958e5u);
    wr32((c.sbase[3] + (uint32_t)(0x8A474u)), 0x6u);
L_958ef:
    X86_TICK(c, 12);
    // 0958ef  cmp byte ptr [0x8a478], 3
    X86_AT(c, 0x958efu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A478u))), 0x3u, 0, 1);
    // 0958f6  jne 0x958ff
    X86_AT(c, 0x958f6u);
    if (x86_cc(c, 5)) { goto L_958ff; }
    X86_TICK(c, 9);
    // 0958f8  mov edi, 0x12
    X86_AT(c, 0x958f8u);
    c.r[7] = 0x12u;
    // 0958fd  jmp 0x95904
    X86_AT(c, 0x958fdu);
    goto L_95904;
L_958ff:
    X86_TICK(c, 2);
    // 0958ff  mov edi, 0x10
    X86_AT(c, 0x958ffu);
    c.r[7] = 0x10u;
L_95904:
    X86_TICK(c, 39);
    // 095904  lea esi, [ebp - 0x18]
    X86_AT(c, 0x95904u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFE8u);
    // 095907  push esi
    X86_AT(c, 0x95907u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095908  push edi
    X86_AT(c, 0x95908u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095909  push dword ptr [0x8a474]
    X86_AT(c, 0x95909u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A474u))); push32(c, v); }
    // 09590f  push ebx
    X86_AT(c, 0x9590fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 095910  push dword ptr [ebp + 0x10]
    X86_AT(c, 0x95910u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 095913  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x95913u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 095916  push dword ptr [ebp + 8]
    X86_AT(c, 0x95916u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 095919  lea eax, [ebp - 0x30]
    X86_AT(c, 0x95919u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD0u);
    // 09591c  push eax
    X86_AT(c, 0x9591cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09591d  call 0x94f94
    X86_AT(c, 0x9591du);
    push32(c, 0x95922u); x86_call_known(c, 0x94f94u, f_00094f94); X86_RET(c, 0x95922u);
    X86_TICK(c, 30);
    // 095922  lea esi, [ebp - 0x30]
    X86_AT(c, 0x95922u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFD0u);
    // 095925  push edi
    X86_AT(c, 0x95925u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095926  mov edi, 0x8a87c
    X86_AT(c, 0x95926u);
    c.r[7] = 0x8A87Cu;
    // 09592b  mov ecx, 0x17
    X86_AT(c, 0x9592bu);
    c.r[1] = 0x17u;
    // 095930  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x95930u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 095932  pop edi
    X86_AT(c, 0x95932u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095933  mov ax, word ptr [ebp - 0x18]
    X86_AT(c, 0x95933u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))));
    // 095937  and ax, ax
    X86_AT(c, 0x95937u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 09593a  je 0x9595f
    X86_AT(c, 0x9593au);
    if (x86_cc(c, 4)) { goto L_9595f; }
    X86_TICK(c, 12);
    // 09593c  movzx eax, ax
    X86_AT(c, 0x9593cu);
    c.r[0] = (c.r[0] & 0xFFFFu);
    // 09593f  push eax
    X86_AT(c, 0x9593fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095940  call 0x93874
    X86_AT(c, 0x95940u);
    push32(c, 0x95945u); x86_call_known(c, 0x93874u, f_00093874); X86_RET(c, 0x95945u);
    X86_TICK(c, 23);
    // 095945  movzx eax, word ptr [ebp - 0x18]
    X86_AT(c, 0x95945u);
    c.r[0] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 095949  push eax
    X86_AT(c, 0x95949u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09594a  lea eax, [ebp - 0x16]
    X86_AT(c, 0x9594au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFEAu);
    // 09594d  push eax
    X86_AT(c, 0x9594du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09594e  mov ecx, dword ptr [0x8a484]
    X86_AT(c, 0x9594eu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A484u)));
    // 095954  call dword ptr [0x8a480]
    X86_AT(c, 0x95954u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A480u))); push32(c, 0x9595au); x86_call(c, t); X86_RET(c, 0x9595au); }
    X86_TICK(c, 7);
    // 09595a  jmp 0x95a63
    X86_AT(c, 0x9595au);
    goto L_95a63;
L_9595f:
    X86_TICK(c, 12);
    // 09595f  cmp dword ptr [0x8a474], 0
    X86_AT(c, 0x9595fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8A474u))), 0x0u, 0, 4);
    // 095966  jne 0x95977
    X86_AT(c, 0x95966u);
    if (x86_cc(c, 5)) { goto L_95977; }
    X86_TICK(c, 12);
    // 095968  test byte ptr [0x8a46c], 8
    X86_AT(c, 0x95968u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A46Cu))) & 0x8u, 1);
    // 09596f  jne 0x95977
    X86_AT(c, 0x9596fu);
    if (x86_cc(c, 5)) { goto L_95977; }
    X86_TICK(c, 9);
    // 095971  mov byte ptr [ebp - 0x19], 0
    X86_AT(c, 0x95971u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE7u)), 0x0u);
    // 095975  jmp 0x9597b
    X86_AT(c, 0x95975u);
    goto L_9597b;
L_95977:
    X86_TICK(c, 2);
    // 095977  mov byte ptr [ebp - 0x19], 1
    X86_AT(c, 0x95977u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE7u)), 0x1u);
L_9597b:
    X86_TICK(c, 16);
    // 09597b  mov al, byte ptr [ebp - 0x19]
    X86_AT(c, 0x9597bu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE7u))));
    // 09597e  mov byte ptr [0x8a893], al
    X86_AT(c, 0x9597eu);
    wr8((c.sbase[3] + (uint32_t)(0x8A893u)), g8(c, 0));
    // 095983  movzx eax, bl
    X86_AT(c, 0x95983u);
    c.r[0] = g8(c, 3);
    // 095986  cmp eax, 0x45
    X86_AT(c, 0x95986u);
    (void)x86_sub(c, c.r[0], 0x45u, 0, 4);
    // 095989  je 0x959c5
    X86_AT(c, 0x95989u);
    if (x86_cc(c, 4)) { goto L_959c5; }
    X86_TICK(c, 7);
    // 09598b  cmp eax, 0x47
    X86_AT(c, 0x9598bu);
    (void)x86_sub(c, c.r[0], 0x47u, 0, 4);
    // 09598e  je 0x959ce
    X86_AT(c, 0x9598eu);
    if (x86_cc(c, 4)) { goto L_959ce; }
    X86_TICK(c, 7);
    // 095990  cmp eax, 0x65
    X86_AT(c, 0x95990u);
    (void)x86_sub(c, c.r[0], 0x65u, 0, 4);
    // 095993  je 0x959c5
    X86_AT(c, 0x95993u);
    if (x86_cc(c, 4)) { goto L_959c5; }
    X86_TICK(c, 7);
    // 095995  cmp eax, 0x66
    X86_AT(c, 0x95995u);
    (void)x86_sub(c, c.r[0], 0x66u, 0, 4);
    // 095998  je 0x959a4
    X86_AT(c, 0x95998u);
    if (x86_cc(c, 4)) { goto L_959a4; }
    X86_TICK(c, 7);
    // 09599a  cmp eax, 0x67
    X86_AT(c, 0x9599au);
    (void)x86_sub(c, c.r[0], 0x67u, 0, 4);
    // 09599d  je 0x959ce
    X86_AT(c, 0x9599du);
    if (x86_cc(c, 4)) { goto L_959ce; }
    X86_TICK(c, 7);
    // 09599f  jmp 0x95a44
    X86_AT(c, 0x9599fu);
    goto L_95a44;
L_959a4:
    X86_TICK(c, 13);
    // 0959a4  mov eax, 1
    X86_AT(c, 0x959a4u);
    c.r[0] = 0x1u;
    // 0959a9  mov edx, dword ptr [0x8a87c]
    X86_AT(c, 0x959a9u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A87Cu)));
    // 0959af  cmp eax, edx
    X86_AT(c, 0x959afu);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0959b1  jl 0x959b4
    X86_AT(c, 0x959b1u);
    if (x86_cc(c, 12)) { goto L_959b4; }
    X86_TICK(c, 3);
    // 0959b3  xchg edx, eax
    X86_AT(c, 0x959b3u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_959b4:
    X86_TICK(c, 21);
    // 0959b4  add edx, dword ptr [0x8a474]
    X86_AT(c, 0x959b4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0x8A474u))), 0, 4); }
    // 0959ba  movzx eax, byte ptr [0x8a893]
    X86_AT(c, 0x959bau);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0x8A893u)));
    // 0959c1  add eax, edx
    X86_AT(c, 0x959c1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0959c3  jmp 0x959fe
    X86_AT(c, 0x959c3u);
    goto L_959fe;
L_959c5:
    X86_TICK(c, 9);
    // 0959c5  mov ecx, ebp
    X86_AT(c, 0x959c5u);
    c.r[1] = c.r[5];
    // 0959c7  call 0x95874
    X86_AT(c, 0x959c7u);
    push32(c, 0x959ccu); x86_call_known(c, 0x95874u, f_00095874); X86_RET(c, 0x959ccu);
    X86_TICK(c, 7);
    // 0959cc  jmp 0x959fe
    X86_AT(c, 0x959ccu);
    goto L_959fe;
L_959ce:
    X86_TICK(c, 12);
    // 0959ce  cmp dword ptr [0x8a474], 0
    X86_AT(c, 0x959ceu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8A474u))), 0x0u, 0, 4);
    // 0959d5  jne 0x959e3
    X86_AT(c, 0x959d5u);
    if (x86_cc(c, 5)) { goto L_959e3; }
    X86_TICK(c, 9);
    // 0959d7  mov dword ptr [0x8a878], 0
    X86_AT(c, 0x959d7u);
    wr32((c.sbase[3] + (uint32_t)(0x8A878u)), 0x0u);
    // 0959e1  jmp 0x95a44
    X86_AT(c, 0x959e1u);
    goto L_95a44;
L_959e3:
    X86_TICK(c, 13);
    // 0959e3  mov eax, dword ptr [0x8a87c]
    X86_AT(c, 0x959e3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A87Cu)));
    // 0959e8  dec eax
    X86_AT(c, 0x959e8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0959e9  cmp eax, 0xfffffffc
    X86_AT(c, 0x959e9u);
    (void)x86_sub(c, c.r[0], 0xFFFFFFFCu, 0, 4);
    // 0959ec  jl 0x959f6
    X86_AT(c, 0x959ecu);
    if (x86_cc(c, 12)) { goto L_959f6; }
    X86_TICK(c, 11);
    // 0959ee  cmp eax, dword ptr [0x8a474]
    X86_AT(c, 0x959eeu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x8A474u))), 0, 4);
    // 0959f4  jle 0x95a05
    X86_AT(c, 0x959f4u);
    if (x86_cc(c, 14)) { goto L_95a05; }
L_959f6:
    X86_TICK(c, 9);
    // 0959f6  mov ecx, ebp
    X86_AT(c, 0x959f6u);
    c.r[1] = c.r[5];
    // 0959f8  call 0x95874
    X86_AT(c, 0x959f8u);
    push32(c, 0x959fdu); x86_call_known(c, 0x95874u, f_00095874); X86_RET(c, 0x959fdu);
    X86_TICK(c, 2);
    // 0959fd  dec eax
    X86_AT(c, 0x959fdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
L_959fe:
    X86_TICK(c, 9);
    // 0959fe  mov dword ptr [0x8a878], eax
    X86_AT(c, 0x959feu);
    wr32((c.sbase[3] + (uint32_t)(0x8A878u)), c.r[0]);
    // 095a03  jmp 0x95a3e
    X86_AT(c, 0x95a03u);
    goto L_95a3e;
L_95a05:
    X86_TICK(c, 42);
    // 095a05  movzx eax, byte ptr [0x8a893]
    X86_AT(c, 0x95a05u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0x8A893u)));
    // 095a0c  add eax, dword ptr [0x8a474]
    X86_AT(c, 0x95a0cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0x8A474u))), 0, 4); }
    // 095a12  mov edx, dword ptr [0x8a87c]
    X86_AT(c, 0x95a12u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A87Cu)));
    // 095a18  dec edx
    X86_AT(c, 0x95a18u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 095a19  mov ecx, dword ptr [0x8a474]
    X86_AT(c, 0x95a19u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A474u)));
    // 095a1f  cmp edx, ecx
    X86_AT(c, 0x95a1fu);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 095a21  sete dl
    X86_AT(c, 0x95a21u);
    s8(c, 2, x86_cc(c, 4) ? 1u : 0u);
    // 095a24  movzx edx, dl
    X86_AT(c, 0x95a24u);
    c.r[2] = g8(c, 2);
    // 095a27  add edx, eax
    X86_AT(c, 0x95a27u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 095a29  mov dword ptr [0x8a878], edx
    X86_AT(c, 0x95a29u);
    wr32((c.sbase[3] + (uint32_t)(0x8A878u)), c.r[2]);
    // 095a2f  and ecx, ecx
    X86_AT(c, 0x95a2fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[1], 4); }
    // 095a31  jne 0x95a39
    X86_AT(c, 0x95a31u);
    if (x86_cc(c, 5)) { goto L_95a39; }
    X86_TICK(c, 6);
    // 095a33  inc dword ptr [0x8a878]
    X86_AT(c, 0x95a33u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A878u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_95a39:
    X86_TICK(c, 4);
    // 095a39  mov eax, dword ptr [0x8a878]
    X86_AT(c, 0x95a39u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A878u)));
L_95a3e:
    X86_TICK(c, 7);
    // 095a3e  add dword ptr [0x8a47c], eax
    X86_AT(c, 0x95a3eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A47Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
L_95a44:
    X86_TICK(c, 13);
    // 095a44  mov byte ptr [0x8a870], 0
    X86_AT(c, 0x95a44u);
    wr8((c.sbase[3] + (uint32_t)(0x8A870u)), 0x0u);
    // 095a4b  push ebx
    X86_AT(c, 0x95a4bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 095a4c  mov ecx, ebp
    X86_AT(c, 0x95a4cu);
    c.r[1] = c.r[5];
    // 095a4e  call 0x957a0
    X86_AT(c, 0x95a4eu);
    push32(c, 0x95a53u); x86_call_known(c, 0x957a0u, f_000957a0); X86_RET(c, 0x95a53u);
    X86_TICK(c, 12);
    // 095a53  cmp byte ptr [0x8a870], 0
    X86_AT(c, 0x95a53u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A870u))), 0x0u, 0, 1);
    // 095a5a  jne 0x95a63
    X86_AT(c, 0x95a5au);
    if (x86_cc(c, 5)) { goto L_95a63; }
    X86_TICK(c, 9);
    // 095a5c  mov ecx, ebp
    X86_AT(c, 0x95a5cu);
    c.r[1] = c.r[5];
    // 095a5e  call 0x951c4
    X86_AT(c, 0x95a5eu);
    push32(c, 0x95a63u); x86_call_known(c, 0x951c4u, f_000951c4); X86_RET(c, 0x95a63u);
L_95a63:
    X86_TICK(c, 28);
    // 095a63  pop edi
    X86_AT(c, 0x95a63u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095a64  pop esi
    X86_AT(c, 0x95a64u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 095a65  pop ebx
    X86_AT(c, 0x95a65u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 095a66  leave 
    X86_AT(c, 0x95a66u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095a67  ret 0x10
    X86_AT(c, 0x95a67u);
    c.eip = pop32(c); c.r[4] += 0x10u; return;
    x86_fault(c, 0x958c8u, "ran off the end of a function");
}
void f_00095a88(X86Cpu& c) {
L_95a88:
    X86_TICK(c, 13);
    // 095a88  mov eax, dword ptr [0x8a894]
    X86_AT(c, 0x95a88u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A894u)));
    // 095a8d  mov edx, 0x95a6c
    X86_AT(c, 0x95a8du);
    c.r[2] = 0x95A6Cu;
    // 095a92  cmp edx, eax
    X86_AT(c, 0x95a92u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 095a94  je 0x95a9f
    X86_AT(c, 0x95a94u);
    if (x86_cc(c, 4)) { goto L_95a9f; }
    X86_TICK(c, 7);
    // 095a96  call eax
    X86_AT(c, 0x95a96u);
    { uint32_t t = c.r[0]; push32(c, 0x95a98u); x86_call(c, t); X86_RET(c, 0x95a98u); }
    X86_TICK(c, 9);
    // 095a98  mov dword ptr [0x8a894], eax
    X86_AT(c, 0x95a98u);
    wr32((c.sbase[3] + (uint32_t)(0x8A894u)), c.r[0]);
    // 095a9d  jmp 0x95a88
    X86_AT(c, 0x95a9du);
    X86_POLL(c, 0x95a88u); goto L_95a88;
L_95a9f:
    X86_TICK(c, 10);
    // 095a9f  ret 
    X86_AT(c, 0x95a9fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x95a88u, "ran off the end of a function");
}
void f_00095ab0(X86Cpu& c) {
    X86_TICK(c, 23);
    // 095ab0  enter 4, 0
    X86_AT(c, 0x95ab0u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 095ab4  mov al, byte ptr [ebp + 8]
    X86_AT(c, 0x95ab4u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 095ab7  add al, 0x30
    X86_AT(c, 0x95ab7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x30u, 0, 1)); }
    // 095ab9  mov byte ptr [ebp - 2], al
    X86_AT(c, 0x95ab9u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 095abc  push 0x18f0
    X86_AT(c, 0x95abcu);
    { uint32_t v = 0x18F0u; push32(c, v); }
    // 095ac1  call 0x95bc8
    X86_AT(c, 0x95ac1u);
    push32(c, 0x95ac6u); x86_call_known(c, 0x95bc8u, f_00095bc8); X86_RET(c, 0x95ac6u);
    X86_TICK(c, 11);
    // 095ac6  lea eax, [ebp - 4]
    X86_AT(c, 0x95ac6u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 095ac9  push eax
    X86_AT(c, 0x95ac9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095aca  call 0x95bc8
    X86_AT(c, 0x95acau);
    push32(c, 0x95acfu); x86_call_known(c, 0x95bc8u, f_00095bc8); X86_RET(c, 0x95acfu);
    X86_TICK(c, 7);
    // 095acf  call 0x95be4
    X86_AT(c, 0x95acfu);
    push32(c, 0x95ad4u); x86_call_known(c, 0x95be4u, f_00095be4); X86_RET(c, 0x95ad4u);
    X86_TICK(c, 13);
    // 095ad4  mov ax, word ptr [0x8a89c]
    X86_AT(c, 0x95ad4u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8A89Cu))));
    // 095ada  push eax
    X86_AT(c, 0x95adau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095adb  call 0x95bb4
    X86_AT(c, 0x95adbu);
    push32(c, 0x95ae0u); x86_call_known(c, 0x95bb4u, f_00095bb4); X86_RET(c, 0x95ae0u);
    X86_TICK(c, 9);
    // 095ae0  push 0x190c
    X86_AT(c, 0x95ae0u);
    { uint32_t v = 0x190Cu; push32(c, v); }
    // 095ae5  call 0x95bc8
    X86_AT(c, 0x95ae5u);
    push32(c, 0x95aeau); x86_call_known(c, 0x95bc8u, f_00095bc8); X86_RET(c, 0x95aeau);
    X86_TICK(c, 7);
    // 095aea  call 0x95be4
    X86_AT(c, 0x95aeau);
    push32(c, 0x95aefu); x86_call_known(c, 0x95be4u, f_00095be4); X86_RET(c, 0x95aefu);
    X86_TICK(c, 9);
    // 095aef  push 0xffffffff
    X86_AT(c, 0x95aefu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 095af1  call 0x94c4c
    X86_AT(c, 0x95af1u);
    push32(c, 0x95af6u); x86_call_known(c, 0x94c4cu, f_00094c4c); X86_RET(c, 0x95af6u);
    X86_TICK(c, 16);
    // 095af6  leave 
    X86_AT(c, 0x95af6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095af7  ret 8
    X86_AT(c, 0x95af7u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x95ab0u, "ran off the end of a function");
}
void f_00095b18(X86Cpu& c) {
    X86_TICK(c, 95);
    // 095b18  push esi
    X86_AT(c, 0x95b18u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095b19  push edi
    X86_AT(c, 0x95b19u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095b1a  push ebx
    X86_AT(c, 0x95b1au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 095b1b  push ebp
    X86_AT(c, 0x95b1bu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 095b1c  push ds
    X86_AT(c, 0x95b1cu);
    push32(c, c.sreg[3]);
    // 095b1d  push es
    X86_AT(c, 0x95b1du);
    push32(c, c.sreg[0]);
    // 095b1e  mov eax, dword ptr [0x8a7e4]
    X86_AT(c, 0x95b1eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A7E4u)));
    // 095b23  mov ebx, dword ptr [0x8a7e8]
    X86_AT(c, 0x95b23u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0x8A7E8u)));
    // 095b29  mov ecx, dword ptr [0x8a7ec]
    X86_AT(c, 0x95b29u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A7ECu)));
    // 095b2f  mov edx, dword ptr [0x8a7f0]
    X86_AT(c, 0x95b2fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A7F0u)));
    // 095b35  mov esi, dword ptr [0x8a7f4]
    X86_AT(c, 0x95b35u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x8A7F4u)));
    // 095b3b  mov edi, dword ptr [0x8a7f8]
    X86_AT(c, 0x95b3bu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0x8A7F8u)));
    // 095b41  push dword ptr [0x8a800]
    X86_AT(c, 0x95b41u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A800u))); push32(c, v); }
    // 095b47  pop es
    X86_AT(c, 0x95b47u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 095b48  push ds
    X86_AT(c, 0x95b48u);
    push32(c, c.sreg[3]);
    // 095b49  push dword ptr [0x8a7fc]
    X86_AT(c, 0x95b49u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A7FCu))); push32(c, v); }
    // 095b4f  pop ds
    X86_AT(c, 0x95b4fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 095b50  clc 
    X86_AT(c, 0x95b50u);
    c.fl &= ~X86_CF;
    // 095b51  int 0x21
    X86_AT(c, 0x95b51u);
    x86_int(c, 0x21, 0x95b53u);
    X86_TICK(c, 77);
    // 095b53  pop ebp
    X86_AT(c, 0x95b53u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 095b54  push ds
    X86_AT(c, 0x95b54u);
    push32(c, c.sreg[3]);
    // 095b55  mov ds, ebp
    X86_AT(c, 0x95b55u);
    x86_load_seg(c, 3, (c.r[5] & 0xFFFFu) & 0xFFFFu);
    // 095b57  pop dword ptr [0x8a7fc]
    X86_AT(c, 0x95b57u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0x8A7FCu)), v); }
    // 095b5d  push es
    X86_AT(c, 0x95b5du);
    push32(c, c.sreg[0]);
    // 095b5e  pop dword ptr [0x8a800]
    X86_AT(c, 0x95b5eu);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0x8A800u)), v); }
    // 095b64  mov dword ptr [0x8a7e4], eax
    X86_AT(c, 0x95b64u);
    wr32((c.sbase[3] + (uint32_t)(0x8A7E4u)), c.r[0]);
    // 095b69  mov dword ptr [0x8a7e8], ebx
    X86_AT(c, 0x95b69u);
    wr32((c.sbase[3] + (uint32_t)(0x8A7E8u)), c.r[3]);
    // 095b6f  mov dword ptr [0x8a7ec], ecx
    X86_AT(c, 0x95b6fu);
    wr32((c.sbase[3] + (uint32_t)(0x8A7ECu)), c.r[1]);
    // 095b75  mov dword ptr [0x8a7f0], edx
    X86_AT(c, 0x95b75u);
    wr32((c.sbase[3] + (uint32_t)(0x8A7F0u)), c.r[2]);
    // 095b7b  mov dword ptr [0x8a7f4], esi
    X86_AT(c, 0x95b7bu);
    wr32((c.sbase[3] + (uint32_t)(0x8A7F4u)), c.r[6]);
    // 095b81  mov dword ptr [0x8a7f8], edi
    X86_AT(c, 0x95b81u);
    wr32((c.sbase[3] + (uint32_t)(0x8A7F8u)), c.r[7]);
    // 095b87  pushf 
    X86_AT(c, 0x95b87u);
    push16(c, c.fl & 0xFFFFu);
    // 095b89  pop word ptr [0x8a804]
    X86_AT(c, 0x95b89u);
    { uint32_t v = pop16(c); wr16((c.sbase[3] + (uint32_t)(0x8A804u)), v); }
    // 095b90  pop es
    X86_AT(c, 0x95b90u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 095b91  pop ds
    X86_AT(c, 0x95b91u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 095b92  pop ebp
    X86_AT(c, 0x95b92u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 095b93  pop ebx
    X86_AT(c, 0x95b93u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 095b94  pop edi
    X86_AT(c, 0x95b94u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095b95  pop esi
    X86_AT(c, 0x95b95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 095b96  ret 
    X86_AT(c, 0x95b96u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x95b18u, "ran off the end of a function");
}
void f_00095bb4(X86Cpu& c) {
    X86_TICK(c, 9);
    // 095bb4  push 0x1948
    X86_AT(c, 0x95bb4u);
    { uint32_t v = 0x1948u; push32(c, v); }
    // 095bb9  call 0x95bc8
    X86_AT(c, 0x95bb9u);
    push32(c, 0x95bbeu); x86_call_known(c, 0x95bc8u, f_00095bc8); X86_RET(c, 0x95bbeu);
    X86_TICK(c, 7);
    // 095bbe  call 0x95be4
    X86_AT(c, 0x95bbeu);
    push32(c, 0x95bc3u); x86_call_known(c, 0x95be4u, f_00095be4); X86_RET(c, 0x95bc3u);
    X86_TICK(c, 10);
    // 095bc3  ret 4
    X86_AT(c, 0x95bc3u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x95bb4u, "ran off the end of a function");
}
void f_00095bc8(X86Cpu& c) {
    X86_TICK(c, 31);
    // 095bc8  push ebp
    X86_AT(c, 0x95bc8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 095bc9  mov ebp, esp
    X86_AT(c, 0x95bc9u);
    c.r[5] = c.r[4];
    // 095bcb  push edi
    X86_AT(c, 0x95bcbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095bcc  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x95bccu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 095bcf  movzx eax, word ptr [edi]
    X86_AT(c, 0x95bcfu);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(c.r[7])));
    // 095bd2  push eax
    X86_AT(c, 0x95bd2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095bd3  lea eax, [edi + 2]
    X86_AT(c, 0x95bd3u);
    c.r[0] = (uint32_t)(c.r[7] + 0x2u);
    // 095bd6  push eax
    X86_AT(c, 0x95bd6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095bd7  push 2
    X86_AT(c, 0x95bd7u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 095bd9  call 0x94cac
    X86_AT(c, 0x95bd9u);
    push32(c, 0x95bdeu); x86_call_known(c, 0x94cacu, f_00094cac); X86_RET(c, 0x95bdeu);
    X86_TICK(c, 20);
    // 095bde  pop edi
    X86_AT(c, 0x95bdeu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095bdf  leave 
    X86_AT(c, 0x95bdfu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095be0  ret 4
    X86_AT(c, 0x95be0u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x95bc8u, "ran off the end of a function");
}
void f_00095be4(X86Cpu& c) {
    X86_TICK(c, 19);
    // 095be4  movzx eax, word ptr [0x8a44c]
    X86_AT(c, 0x95be4u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0x8A44Cu)));
    // 095beb  push eax
    X86_AT(c, 0x95bebu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095bec  push 0x8a44e
    X86_AT(c, 0x95becu);
    { uint32_t v = 0x8A44Eu; push32(c, v); }
    // 095bf1  push 2
    X86_AT(c, 0x95bf1u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 095bf3  call 0x94cac
    X86_AT(c, 0x95bf3u);
    push32(c, 0x95bf8u); x86_call_known(c, 0x94cacu, f_00094cac); X86_RET(c, 0x95bf8u);
    X86_TICK(c, 10);
    // 095bf8  ret 
    X86_AT(c, 0x95bf8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x95be4u, "ran off the end of a function");
}
void f_00095bfc(X86Cpu& c) {
    X86_TICK(c, 55);
    // 095bfc  enter 0xc, 0
    X86_AT(c, 0x95bfcu);
    x86_enter(c, 0xCu, 0x0u, 4);
    // 095c00  push ebx
    X86_AT(c, 0x95c00u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 095c01  push esi
    X86_AT(c, 0x95c01u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095c02  push edi
    X86_AT(c, 0x95c02u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095c03  mov di, word ptr [ebp + 0xc]
    X86_AT(c, 0x95c03u);
    s16(c, 7, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 095c07  sub esi, esi
    X86_AT(c, 0x95c07u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 095c09  push esi
    X86_AT(c, 0x95c09u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095c0a  mov esi, 0x1970
    X86_AT(c, 0x95c0au);
    c.r[6] = 0x1970u;
    // 095c0f  push edi
    X86_AT(c, 0x95c0fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095c10  lea edi, [ebp - 0xc]
    X86_AT(c, 0x95c10u);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 095c13  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x95c13u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 095c14  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x95c14u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 095c15  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0x95c15u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 095c17  pop edi
    X86_AT(c, 0x95c17u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095c18  pop esi
    X86_AT(c, 0x95c18u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_95c19:
    X86_TICK(c, 10);
    // 095c19  mov eax, edi
    X86_AT(c, 0x95c19u);
    c.r[0] = c.r[7];
    // 095c1b  rcr ax, 1
    X86_AT(c, 0x95c1bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 095c1e  jae 0x95c5a
    X86_AT(c, 0x95c1eu);
    if (x86_cc(c, 3)) { goto L_95c5a; }
    X86_TICK(c, 23);
    // 095c20  movzx eax, si
    X86_AT(c, 0x95c20u);
    c.r[0] = (c.r[6] & 0xFFFFu);
    // 095c23  lea eax, [eax*4]
    X86_AT(c, 0x95c23u);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 095c2a  lea eax, [eax + eax*2]
    X86_AT(c, 0x95c2au);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 095c2d  movsx eax, ax
    X86_AT(c, 0x95c2du);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 095c30  lea edx, [ebp - 0xc]
    X86_AT(c, 0x95c30u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 095c33  push edx
    X86_AT(c, 0x95c33u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 095c34  mov ebx, eax
    X86_AT(c, 0x95c34u);
    c.r[3] = c.r[0];
    // 095c36  call 0x95f20
    X86_AT(c, 0x95c36u);
    push32(c, 0x95c3bu); x86_call_known(c, 0x95f20u, f_00095f20); X86_RET(c, 0x95c3bu);
    X86_TICK(c, 13);
    // 095c3b  lea eax, [ebx*1 + 0x8a8ac]
    X86_AT(c, 0x95c3bu);
    c.r[0] = (uint32_t)(c.r[3] + 0x8A8ACu);
    // 095c42  push eax
    X86_AT(c, 0x95c42u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095c43  mov ebx, eax
    X86_AT(c, 0x95c43u);
    c.r[3] = c.r[0];
    // 095c45  call 0x95f20
    X86_AT(c, 0x95c45u);
    push32(c, 0x95c4au); x86_call_known(c, 0x95f20u, f_00095f20); X86_RET(c, 0x95c4au);
    X86_TICK(c, 7);
    // 095c4a  call 0x96090
    X86_AT(c, 0x95c4au);
    push32(c, 0x95c4fu); x86_call_known(c, 0x96090u, f_00096090); X86_RET(c, 0x95c4fu);
    X86_TICK(c, 13);
    // 095c4f  lea eax, [ebp - 0xc]
    X86_AT(c, 0x95c4fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 095c52  push eax
    X86_AT(c, 0x95c52u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095c53  mov ebx, eax
    X86_AT(c, 0x95c53u);
    c.r[3] = c.r[0];
    // 095c55  call 0x95f80
    X86_AT(c, 0x95c55u);
    push32(c, 0x95c5au); x86_call_known(c, 0x95f80u, f_00095f80); X86_RET(c, 0x95c5au);
L_95c5a:
    X86_TICK(c, 12);
    // 095c5a  shr di, 1
    X86_AT(c, 0x95c5au);
    { uint32_t v = (c.r[7] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 7, r); }
    // 095c5d  inc esi
    X86_AT(c, 0x95c5du);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 095c5e  and di, di
    X86_AT(c, 0x95c5eu);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_logic(c, v & (c.r[7] & 0xFFFFu), 2)); }
    // 095c61  jne 0x95c19
    X86_AT(c, 0x95c61u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x95c19u); goto L_95c19; }
    X86_TICK(c, 71);
    // 095c63  lea eax, [ebp - 0xc]
    X86_AT(c, 0x95c63u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 095c66  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x95c66u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 095c69  push esi
    X86_AT(c, 0x95c69u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095c6a  push edi
    X86_AT(c, 0x95c6au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095c6b  mov esi, eax
    X86_AT(c, 0x95c6bu);
    c.r[6] = c.r[0];
    // 095c6d  mov edi, edx
    X86_AT(c, 0x95c6du);
    c.r[7] = c.r[2];
    // 095c6f  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x95c6fu);
    x86_string(c, 0, 4, 0, 4, 3);
    // 095c70  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x95c70u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 095c71  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0x95c71u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 095c73  pop edi
    X86_AT(c, 0x95c73u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095c74  pop esi
    X86_AT(c, 0x95c74u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 095c75  pop edi
    X86_AT(c, 0x95c75u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095c76  pop esi
    X86_AT(c, 0x95c76u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 095c77  pop ebx
    X86_AT(c, 0x95c77u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 095c78  leave 
    X86_AT(c, 0x95c78u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095c79  ret 8
    X86_AT(c, 0x95c79u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x95bfcu, "ran off the end of a function");
}
void f_00095c7c(X86Cpu& c) {
    X86_TICK(c, 20);
    // 095c7c  push ebp
    X86_AT(c, 0x95c7cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 095c7d  mov ebp, esp
    X86_AT(c, 0x95c7du);
    c.r[5] = c.r[4];
    // 095c7f  push esi
    X86_AT(c, 0x95c7fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095c80  push edi
    X86_AT(c, 0x95c80u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095c81  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x95c81u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 095c84  call 0x95f20
    X86_AT(c, 0x95c84u);
    push32(c, 0x95c89u); x86_call_known(c, 0x95f20u, f_00095f20); X86_RET(c, 0x95c89u);
    X86_TICK(c, 7);
    // 095c89  call 0x968fc
    X86_AT(c, 0x95c89u);
    push32(c, 0x95c8eu); x86_call_known(c, 0x968fcu, f_000968fc); X86_RET(c, 0x95c8eu);
    X86_TICK(c, 15);
    // 095c8e  xchg edi, eax
    X86_AT(c, 0x95c8eu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 095c8f  and di, 0x4700
    X86_AT(c, 0x95c8fu);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_logic(c, v & 0x4700u, 2)); }
    // 095c94  shr di, 8
    X86_AT(c, 0x95c94u);
    { uint32_t v = (c.r[7] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 7, r); }
    // 095c98  call 0x9686c
    X86_AT(c, 0x95c98u);
    push32(c, 0x95c9du); x86_call_known(c, 0x9686cu, f_0009686c); X86_RET(c, 0x95c9du);
    X86_TICK(c, 7);
    // 095c9d  cmp di, 0x10
    X86_AT(c, 0x95c9du);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x10u, 0, 2);
    // 095ca1  jbe 0x95cad
    X86_AT(c, 0x95ca1u);
    if (x86_cc(c, 6)) { goto L_95cad; }
    X86_TICK(c, 4);
    // 095ca3  and di, 7
    X86_AT(c, 0x95ca3u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_logic(c, v & 0x7u, 2)); }
    // 095ca8  or di, 8
    X86_AT(c, 0x95ca8u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_logic(c, v | 0x8u, 2)); }
L_95cad:
    X86_TICK(c, 10);
    // 095cad  movzx eax, di
    X86_AT(c, 0x95cadu);
    c.r[0] = (c.r[7] & 0xFFFFu);
    // 095cb0  cmp eax, 0xe
    X86_AT(c, 0x95cb0u);
    (void)x86_sub(c, c.r[0], 0xEu, 0, 4);
    // 095cb3  ja 0x95d2c
    X86_AT(c, 0x95cb3u);
    if (x86_cc(c, 7)) { goto L_95d2c; }
    X86_TICK(c, 7);
    // 095cb9  jmp dword ptr cs:[eax*4 + 0x95cc1]
    X86_AT(c, 0x95cb9u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x95CC1u)));
      switch (t) {
      case 0x95cfdu: goto L_95cfd;
      case 0x95d04u: goto L_95d04;
      case 0x95d13u: goto L_95d13;
      case 0x95d1au: goto L_95d1a;
      case 0x95d2cu: goto L_95d2c;
      default: x86_jump(c, t); return; } }
L_95cfd:
    X86_TICK(c, 9);
    // 095cfd  mov esi, 0x197c
    X86_AT(c, 0x95cfdu);
    c.r[6] = 0x197Cu;
    // 095d02  jmp 0x95d1f
    X86_AT(c, 0x95d02u);
    goto L_95d1f;
L_95d04:
    X86_TICK(c, 15);
    // 095d04  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x95d04u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 095d07  mov dword ptr [eax], 0x414e0003
    X86_AT(c, 0x95d07u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), 0x414E0003u);
    // 095d0d  mov byte ptr [eax + 4], 0x4e
    X86_AT(c, 0x95d0du);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)), 0x4Eu);
    // 095d11  jmp 0x95d34
    X86_AT(c, 0x95d11u);
    goto L_95d34;
L_95d13:
    X86_TICK(c, 9);
    // 095d13  mov esi, 0x1988
    X86_AT(c, 0x95d13u);
    c.r[6] = 0x1988u;
    // 095d18  jmp 0x95d1f
    X86_AT(c, 0x95d18u);
    goto L_95d1f;
L_95d1a:
    X86_TICK(c, 2);
    // 095d1a  mov esi, 0x1994
    X86_AT(c, 0x95d1au);
    c.r[6] = 0x1994u;
L_95d1f:
    X86_TICK(c, 40);
    // 095d1f  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x95d1fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 095d22  push edi
    X86_AT(c, 0x95d22u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095d23  mov edi, eax
    X86_AT(c, 0x95d23u);
    c.r[7] = c.r[0];
    // 095d25  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x95d25u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 095d26  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x95d26u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 095d27  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0x95d27u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 095d29  pop edi
    X86_AT(c, 0x95d29u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095d2a  jmp 0x95d34
    X86_AT(c, 0x95d2au);
    goto L_95d34;
L_95d2c:
    X86_TICK(c, 6);
    // 095d2c  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x95d2cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 095d2f  mov word ptr [eax], 0
    X86_AT(c, 0x95d2fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0])), 0x0u);
L_95d34:
    X86_TICK(c, 24);
    // 095d34  pop edi
    X86_AT(c, 0x95d34u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095d35  pop esi
    X86_AT(c, 0x95d35u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 095d36  leave 
    X86_AT(c, 0x95d36u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095d37  ret 8
    X86_AT(c, 0x95d37u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x95c7cu, "ran off the end of a function");
}
void f_00095d3c(X86Cpu& c) {
    X86_TICK(c, 21);
    // 095d3c  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0x95d3cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 095d40  mov edx, dword ptr [eax]
    X86_AT(c, 0x95d40u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 095d42  or edx, dword ptr [eax + 4]
    X86_AT(c, 0x95d42u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))), 4); }
    // 095d45  and edx, edx
    X86_AT(c, 0x95d45u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 095d47  jne 0x95d4d
    X86_AT(c, 0x95d47u);
    if (x86_cc(c, 5)) { goto L_95d4d; }
    X86_TICK(c, 9);
    // 095d49  sub eax, eax
    X86_AT(c, 0x95d49u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 095d4b  jmp 0x95d5c
    X86_AT(c, 0x95d4bu);
    goto L_95d5c;
L_95d4d:
    X86_TICK(c, 12);
    // 095d4d  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0x95d4du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 095d51  mov ax, word ptr [eax + 8]
    X86_AT(c, 0x95d51u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u))));
    // 095d55  and ah, 0x7f
    X86_AT(c, 0x95d55u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & 0x7Fu, 1)); }
    // 095d58  sub ax, 0x3fff
    X86_AT(c, 0x95d58u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x3FFFu, 0, 2)); }
L_95d5c:
    X86_TICK(c, 10);
    // 095d5c  ret 4
    X86_AT(c, 0x95d5cu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x95d3cu, "ran off the end of a function");
}
void f_00095d60(X86Cpu& c) {
    X86_TICK(c, 16);
    // 095d60  push ebp
    X86_AT(c, 0x95d60u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 095d61  mov ebp, esp
    X86_AT(c, 0x95d61u);
    c.r[5] = c.r[4];
    // 095d63  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x95d63u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 095d66  call 0x95f20
    X86_AT(c, 0x95d66u);
    push32(c, 0x95d6bu); x86_call_known(c, 0x95f20u, f_00095f20); X86_RET(c, 0x95d6bu);
    X86_TICK(c, 12);
    // 095d6b  push dword ptr [ebp + 8]
    X86_AT(c, 0x95d6bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 095d6e  call 0x96ab4
    X86_AT(c, 0x95d6eu);
    push32(c, 0x95d73u); x86_call_known(c, 0x96ab4u, f_00096ab4); X86_RET(c, 0x95d73u);
    X86_TICK(c, 16);
    // 095d73  leave 
    X86_AT(c, 0x95d73u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095d74  ret 8
    X86_AT(c, 0x95d74u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x95d60u, "ran off the end of a function");
}
void f_00095d90(X86Cpu& c) {
    X86_TICK(c, 24);
    // 095d90  enter 8, 0
    X86_AT(c, 0x95d90u);
    x86_enter(c, 0x8u, 0x0u, 4);
    // 095d94  push ebx
    X86_AT(c, 0x95d94u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 095d95  push esi
    X86_AT(c, 0x95d95u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095d96  push edi
    X86_AT(c, 0x95d96u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095d97  cmp byte ptr [0x8a553], 0
    X86_AT(c, 0x95d97u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A553u))), 0x0u, 0, 1);
    // 095d9e  je 0x95db6
    X86_AT(c, 0x95d9eu);
    if (x86_cc(c, 4)) { goto L_95db6; }
    X86_TICK(c, 20);
    // 095da0  push dword ptr [0x8a9e4]
    X86_AT(c, 0x95da0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u))); push32(c, v); }
    // 095da6  mov eax, dword ptr [0x8a9e4]
    X86_AT(c, 0x95da6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u)));
    // 095dab  sub eax, 0xc
    X86_AT(c, 0x95dabu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xCu, 0, 4); }
    // 095dae  push eax
    X86_AT(c, 0x95daeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095daf  call 0x9642d
    X86_AT(c, 0x95dafu);
    push32(c, 0x95db4u); x86_call_known(c, 0x9642du, f_0009642d); X86_RET(c, 0x95db4u);
    X86_TICK(c, 7);
    // 095db4  jmp 0x95e0a
    X86_AT(c, 0x95db4u);
    goto L_95e0a;
L_95db6:
    X86_TICK(c, 33);
    // 095db6  mov eax, dword ptr [0x8a9e4]
    X86_AT(c, 0x95db6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u)));
    // 095dbb  lea esi, [eax - 0xc]
    X86_AT(c, 0x95dbbu);
    c.r[6] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 095dbe  xchg edi, eax
    X86_AT(c, 0x95dbeu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 095dbf  mov ax, word ptr [edi + 8]
    X86_AT(c, 0x95dbfu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))));
    // 095dc3  cmp ax, word ptr [esi + 8]
    X86_AT(c, 0x95dc3u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u))), 0, 2);
    // 095dc7  setb al
    X86_AT(c, 0x95dc7u);
    s8(c, 0, x86_cc(c, 2) ? 1u : 0u);
    // 095dca  xchg ebx, eax
    X86_AT(c, 0x95dcau);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 095dcb  and bl, bl
    X86_AT(c, 0x95dcbu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 095dcd  je 0x95dd7
    X86_AT(c, 0x95dcdu);
    if (x86_cc(c, 4)) { goto L_95dd7; }
    X86_TICK(c, 8);
    // 095dcf  mov dword ptr [ebp - 8], esi
    X86_AT(c, 0x95dcfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[6]);
    // 095dd2  mov esi, edi
    X86_AT(c, 0x95dd2u);
    c.r[6] = c.r[7];
    // 095dd4  mov edi, dword ptr [ebp - 8]
    X86_AT(c, 0x95dd4u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
L_95dd7:
    X86_TICK(c, 19);
    // 095dd7  mov ax, word ptr [edi + 8]
    X86_AT(c, 0x95dd7u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))));
    // 095ddb  sub ax, word ptr [esi + 8]
    X86_AT(c, 0x95ddbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u))), 0, 2)); }
    // 095ddf  mov word ptr [ebp - 2], ax
    X86_AT(c, 0x95ddfu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), (c.r[0] & 0xFFFFu));
    // 095de3  cmp ax, 0x40
    X86_AT(c, 0x95de3u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x40u, 0, 2);
    // 095de7  jg 0x95def
    X86_AT(c, 0x95de7u);
    if (x86_cc(c, 15)) { goto L_95def; }
    X86_TICK(c, 12);
    // 095de9  cmp byte ptr [esi + 0xb], 0
    X86_AT(c, 0x95de9u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xBu))), 0x0u, 0, 1);
    // 095ded  je 0x95e16
    X86_AT(c, 0x95dedu);
    if (x86_cc(c, 4)) { goto L_95e16; }
L_95def:
    X86_TICK(c, 7);
    // 095def  and bl, bl
    X86_AT(c, 0x95defu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 095df1  jne 0x95e0a
    X86_AT(c, 0x95df1u);
    if (x86_cc(c, 5)) { goto L_95e0a; }
    X86_TICK(c, 31);
    // 095df3  mov eax, dword ptr [0x8a9e4]
    X86_AT(c, 0x95df3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u)));
    // 095df8  lea edx, [eax - 0xc]
    X86_AT(c, 0x95df8u);
    c.r[2] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 095dfb  push esi
    X86_AT(c, 0x95dfbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095dfc  push edi
    X86_AT(c, 0x95dfcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095dfd  mov esi, eax
    X86_AT(c, 0x95dfdu);
    c.r[6] = c.r[0];
    // 095dff  mov edi, edx
    X86_AT(c, 0x95dffu);
    c.r[7] = c.r[2];
    // 095e01  mov ecx, 3
    X86_AT(c, 0x95e01u);
    c.r[1] = 0x3u;
    // 095e06  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x95e06u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 095e08  pop edi
    X86_AT(c, 0x95e08u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095e09  pop esi
    X86_AT(c, 0x95e09u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_95e0a:
    X86_TICK(c, 14);
    // 095e0a  add dword ptr [0x8a9e4], 0xfffffff4
    X86_AT(c, 0x95e0au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A9E4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 095e11  jmp 0x95ea2
    X86_AT(c, 0x95e11u);
    goto L_95ea2;
L_95e16:
    X86_TICK(c, 11);
    // 095e16  mov ax, word ptr [ebp - 2]
    X86_AT(c, 0x95e16u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))));
    // 095e1a  and ax, ax
    X86_AT(c, 0x95e1au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 095e1d  je 0x95e26
    X86_AT(c, 0x95e1du);
    if (x86_cc(c, 4)) { goto L_95e26; }
    X86_TICK(c, 11);
    // 095e1f  push eax
    X86_AT(c, 0x95e1fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095e20  push esi
    X86_AT(c, 0x95e20u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095e21  call 0x967d8
    X86_AT(c, 0x95e21u);
    push32(c, 0x95e26u); x86_call_known(c, 0x967d8u, f_000967d8); X86_RET(c, 0x95e26u);
L_95e26:
    X86_TICK(c, 15);
    // 095e26  mov al, byte ptr [edi + 0xa]
    X86_AT(c, 0x95e26u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu))));
    // 095e29  cmp al, byte ptr [esi + 0xa]
    X86_AT(c, 0x95e29u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu))), 0, 1);
    // 095e2c  jne 0x95e4d
    X86_AT(c, 0x95e2cu);
    if (x86_cc(c, 5)) { goto L_95e4d; }
    X86_TICK(c, 13);
    // 095e2e  push 4
    X86_AT(c, 0x95e2eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 095e30  push esi
    X86_AT(c, 0x95e30u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095e31  push edi
    X86_AT(c, 0x95e31u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095e32  call 0x966e4
    X86_AT(c, 0x95e32u);
    push32(c, 0x95e37u); x86_call_known(c, 0x966e4u, f_000966e4); X86_RET(c, 0x95e37u);
    X86_TICK(c, 7);
    // 095e37  and al, al
    X86_AT(c, 0x95e37u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 095e39  je 0x95e78
    X86_AT(c, 0x95e39u);
    if (x86_cc(c, 4)) { goto L_95e78; }
    X86_TICK(c, 11);
    // 095e3b  push 1
    X86_AT(c, 0x95e3bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 095e3d  push edi
    X86_AT(c, 0x95e3du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095e3e  call 0x967d8
    X86_AT(c, 0x95e3eu);
    push32(c, 0x95e43u); x86_call_known(c, 0x967d8u, f_000967d8); X86_RET(c, 0x95e43u);
    X86_TICK(c, 20);
    // 095e43  or byte ptr [edi + 7], 0x80
    X86_AT(c, 0x95e43u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x7u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
    // 095e47  inc word ptr [edi + 8]
    X86_AT(c, 0x95e47u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 095e4b  jmp 0x95e78
    X86_AT(c, 0x95e4bu);
    goto L_95e78;
L_95e4d:
    X86_TICK(c, 12);
    // 095e4d  cmp byte ptr [edi + 0xa], 0
    X86_AT(c, 0x95e4du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu))), 0x0u, 0, 1);
    // 095e51  je 0x95e5e
    X86_AT(c, 0x95e51u);
    if (x86_cc(c, 4)) { goto L_95e5e; }
    X86_TICK(c, 13);
    // 095e53  push 4
    X86_AT(c, 0x95e53u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 095e55  push esi
    X86_AT(c, 0x95e55u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095e56  push edi
    X86_AT(c, 0x95e56u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095e57  call 0x96736
    X86_AT(c, 0x95e57u);
    push32(c, 0x95e5cu); x86_call_known(c, 0x96736u, f_00096736); X86_RET(c, 0x95e5cu);
    X86_TICK(c, 7);
    // 095e5c  jmp 0x95e67
    X86_AT(c, 0x95e5cu);
    goto L_95e67;
L_95e5e:
    X86_TICK(c, 13);
    // 095e5e  push 4
    X86_AT(c, 0x95e5eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 095e60  push esi
    X86_AT(c, 0x95e60u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095e61  push edi
    X86_AT(c, 0x95e61u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095e62  call 0x9670d
    X86_AT(c, 0x95e62u);
    push32(c, 0x95e67u); x86_call_known(c, 0x9670du, f_0009670d); X86_RET(c, 0x95e67u);
L_95e67:
    X86_TICK(c, 14);
    // 095e67  mov byte ptr [edi + 0xa], al
    X86_AT(c, 0x95e67u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu)), g8(c, 0));
    // 095e6a  cmp byte ptr [edi + 0xa], 0
    X86_AT(c, 0x95e6au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu))), 0x0u, 0, 1);
    // 095e6e  je 0x95e78
    X86_AT(c, 0x95e6eu);
    if (x86_cc(c, 4)) { goto L_95e78; }
    X86_TICK(c, 11);
    // 095e70  push 4
    X86_AT(c, 0x95e70u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 095e72  push edi
    X86_AT(c, 0x95e72u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095e73  call 0x96762
    X86_AT(c, 0x95e73u);
    push32(c, 0x95e78u); x86_call_known(c, 0x96762u, f_00096762); X86_RET(c, 0x95e78u);
L_95e78:
    X86_TICK(c, 14);
    // 095e78  add dword ptr [0x8a9e4], 0xfffffff4
    X86_AT(c, 0x95e78u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A9E4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 095e7f  and bl, bl
    X86_AT(c, 0x95e7fu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 095e81  jne 0x95e97
    X86_AT(c, 0x95e81u);
    if (x86_cc(c, 5)) { goto L_95e97; }
    X86_TICK(c, 29);
    // 095e83  mov eax, dword ptr [0x8a9e4]
    X86_AT(c, 0x95e83u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u)));
    // 095e88  push esi
    X86_AT(c, 0x95e88u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095e89  push edi
    X86_AT(c, 0x95e89u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095e8a  mov esi, edi
    X86_AT(c, 0x95e8au);
    c.r[6] = c.r[7];
    // 095e8c  mov edi, eax
    X86_AT(c, 0x95e8cu);
    c.r[7] = c.r[0];
    // 095e8e  mov ecx, 3
    X86_AT(c, 0x95e8eu);
    c.r[1] = 0x3u;
    // 095e93  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x95e93u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 095e95  pop edi
    X86_AT(c, 0x95e95u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095e96  pop esi
    X86_AT(c, 0x95e96u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_95e97:
    X86_TICK(c, 12);
    // 095e97  push dword ptr [0x8a9e4]
    X86_AT(c, 0x95e97u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u))); push32(c, v); }
    // 095e9d  call 0x96874
    X86_AT(c, 0x95e9du);
    push32(c, 0x95ea2u); x86_call_known(c, 0x96874u, f_00096874); X86_RET(c, 0x95ea2u);
L_95ea2:
    X86_TICK(c, 28);
    // 095ea2  pop edi
    X86_AT(c, 0x95ea2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095ea3  pop esi
    X86_AT(c, 0x95ea3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 095ea4  pop ebx
    X86_AT(c, 0x95ea4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 095ea5  leave 
    X86_AT(c, 0x95ea5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095ea6  ret 
    X86_AT(c, 0x95ea6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x95d90u, "ran off the end of a function");
}
void f_00095ea8(X86Cpu& c) {
    X86_TICK(c, 13);
    // 095ea8  enter 0x14, 0
    X86_AT(c, 0x95ea8u);
    x86_enter(c, 0x14u, 0x0u, 4);
    // 095eac  call 0x96850
    X86_AT(c, 0x95eacu);
    push32(c, 0x95eb1u); x86_call_known(c, 0x96850u, f_00096850); X86_RET(c, 0x95eb1u);
    X86_TICK(c, 12);
    // 095eb1  cmp byte ptr [0x8a553], 0
    X86_AT(c, 0x95eb1u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A553u))), 0x0u, 0, 1);
    // 095eb8  je 0x95ecf
    X86_AT(c, 0x95eb8u);
    if (x86_cc(c, 4)) { goto L_95ecf; }
    X86_TICK(c, 12);
    // 095eba  push dword ptr [ebp + 8]
    X86_AT(c, 0x95ebau);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 095ebd  call 0x96493
    X86_AT(c, 0x95ebdu);
    push32(c, 0x95ec2u); x86_call_known(c, 0x96493u, f_00096493); X86_RET(c, 0x95ec2u);
    X86_TICK(c, 12);
    // 095ec2  push dword ptr [0x8a9e4]
    X86_AT(c, 0x95ec2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u))); push32(c, v); }
    // 095ec8  call 0x964b4
    X86_AT(c, 0x95ec8u);
    push32(c, 0x95ecdu); x86_call_known(c, 0x964b4u, f_000964b4); X86_RET(c, 0x95ecdu);
    X86_TICK(c, 7);
    // 095ecd  jmp 0x95edd
    X86_AT(c, 0x95ecdu);
    goto L_95edd;
L_95ecf:
    X86_TICK(c, 17);
    // 095ecf  push dword ptr [ebp + 8]
    X86_AT(c, 0x95ecfu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 095ed2  push dword ptr [0x8a9e4]
    X86_AT(c, 0x95ed2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u))); push32(c, v); }
    // 095ed8  call 0x9661c
    X86_AT(c, 0x95ed8u);
    push32(c, 0x95eddu); x86_call_known(c, 0x9661cu, f_0009661c); X86_RET(c, 0x95eddu);
L_95edd:
    X86_TICK(c, 16);
    // 095edd  leave 
    X86_AT(c, 0x95eddu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095ede  ret 4
    X86_AT(c, 0x95edeu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x95ea8u, "ran off the end of a function");
}
void f_00095ee4(X86Cpu& c) {
    X86_TICK(c, 11);
    // 095ee4  push ebp
    X86_AT(c, 0x95ee4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 095ee5  mov ebp, esp
    X86_AT(c, 0x95ee5u);
    c.r[5] = c.r[4];
    // 095ee7  call 0x96850
    X86_AT(c, 0x95ee7u);
    push32(c, 0x95eecu); x86_call_known(c, 0x96850u, f_00096850); X86_RET(c, 0x95eecu);
    X86_TICK(c, 12);
    // 095eec  cmp byte ptr [0x8a553], 0
    X86_AT(c, 0x95eecu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A553u))), 0x0u, 0, 1);
    // 095ef3  je 0x95f0d
    X86_AT(c, 0x95ef3u);
    if (x86_cc(c, 4)) { goto L_95f0d; }
    X86_TICK(c, 17);
    // 095ef5  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x95ef5u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 095ef8  push dword ptr [ebp + 8]
    X86_AT(c, 0x95ef8u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 095efb  call 0x964ad
    X86_AT(c, 0x95efbu);
    push32(c, 0x95f00u); x86_call_known(c, 0x964adu, f_000964ad); X86_RET(c, 0x95f00u);
    X86_TICK(c, 12);
    // 095f00  push dword ptr [0x8a9e4]
    X86_AT(c, 0x95f00u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u))); push32(c, v); }
    // 095f06  call 0x964b4
    X86_AT(c, 0x95f06u);
    push32(c, 0x95f0bu); x86_call_known(c, 0x964b4u, f_000964b4); X86_RET(c, 0x95f0bu);
    X86_TICK(c, 7);
    // 095f0b  jmp 0x95f1c
    X86_AT(c, 0x95f0bu);
    goto L_95f1c;
L_95f0d:
    X86_TICK(c, 16);
    // 095f0d  lea eax, [ebp + 8]
    X86_AT(c, 0x95f0du);
    c.r[0] = (uint32_t)(c.r[5] + 0x8u);
    // 095f10  push eax
    X86_AT(c, 0x95f10u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095f11  push dword ptr [0x8a9e4]
    X86_AT(c, 0x95f11u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u))); push32(c, v); }
    // 095f17  call 0x96524
    X86_AT(c, 0x95f17u);
    push32(c, 0x95f1cu); x86_call_known(c, 0x96524u, f_00096524); X86_RET(c, 0x95f1cu);
L_95f1c:
    X86_TICK(c, 16);
    // 095f1c  leave 
    X86_AT(c, 0x95f1cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095f1d  ret 8
    X86_AT(c, 0x95f1du);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x95ee4u, "ran off the end of a function");
}
void f_00095f20(X86Cpu& c) {
    X86_TICK(c, 15);
    // 095f20  push ebp
    X86_AT(c, 0x95f20u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 095f21  mov ebp, esp
    X86_AT(c, 0x95f21u);
    c.r[5] = c.r[4];
    // 095f23  push esi
    X86_AT(c, 0x95f23u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095f24  push edi
    X86_AT(c, 0x95f24u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095f25  call 0x96850
    X86_AT(c, 0x95f25u);
    push32(c, 0x95f2au); x86_call_known(c, 0x96850u, f_00096850); X86_RET(c, 0x95f2au);
    X86_TICK(c, 41);
    // 095f2a  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x95f2au);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 095f2d  mov edi, dword ptr [0x8a9e4]
    X86_AT(c, 0x95f2du);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u)));
    // 095f33  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x95f33u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 095f34  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x95f34u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 095f35  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0x95f35u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 095f37  cmp byte ptr [0x8a553], 0
    X86_AT(c, 0x95f37u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A553u))), 0x0u, 0, 1);
    // 095f3e  jne 0x95f78
    X86_AT(c, 0x95f3eu);
    if (x86_cc(c, 5)) { goto L_95f78; }
    X86_TICK(c, 24);
    // 095f40  mov edi, dword ptr [0x8a9e4]
    X86_AT(c, 0x95f40u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u)));
    // 095f46  test byte ptr [edi + 9], 0x80
    X86_AT(c, 0x95f46u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))) & 0x80u, 1);
    // 095f4a  setne al
    X86_AT(c, 0x95f4au);
    s8(c, 0, x86_cc(c, 5) ? 1u : 0u);
    // 095f4d  mov byte ptr [edi + 0xa], al
    X86_AT(c, 0x95f4du);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu)), g8(c, 0));
    // 095f50  and al, al
    X86_AT(c, 0x95f50u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 095f52  je 0x95f58
    X86_AT(c, 0x95f52u);
    if (x86_cc(c, 4)) { goto L_95f58; }
    X86_TICK(c, 7);
    // 095f54  and byte ptr [edi + 9], 0x7f
    X86_AT(c, 0x95f54u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x9u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
L_95f58:
    X86_TICK(c, 37);
    // 095f58  mov ax, word ptr [edi]
    X86_AT(c, 0x95f58u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 095f5b  or ax, word ptr [edi + 2]
    X86_AT(c, 0x95f5bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))), 2)); }
    // 095f5f  or ax, word ptr [edi + 4]
    X86_AT(c, 0x95f5fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 2)); }
    // 095f63  or ax, word ptr [edi + 6]
    X86_AT(c, 0x95f63u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))), 2)); }
    // 095f67  and ax, ax
    X86_AT(c, 0x95f67u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 095f6a  sete al
    X86_AT(c, 0x95f6au);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 095f6d  mov byte ptr [edi + 0xb], al
    X86_AT(c, 0x95f6du);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xBu)), g8(c, 0));
    // 095f70  and al, al
    X86_AT(c, 0x95f70u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 095f72  je 0x95f78
    X86_AT(c, 0x95f72u);
    if (x86_cc(c, 4)) { goto L_95f78; }
    X86_TICK(c, 2);
    // 095f74  mov byte ptr [edi + 0xa], 0
    X86_AT(c, 0x95f74u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu)), 0x0u);
L_95f78:
    X86_TICK(c, 24);
    // 095f78  pop edi
    X86_AT(c, 0x95f78u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095f79  pop esi
    X86_AT(c, 0x95f79u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 095f7a  leave 
    X86_AT(c, 0x95f7au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095f7b  ret 4
    X86_AT(c, 0x95f7bu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x95f20u, "ran off the end of a function");
}
void f_00095f80(X86Cpu& c) {
    X86_TICK(c, 49);
    // 095f80  push ebp
    X86_AT(c, 0x95f80u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 095f81  mov ebp, esp
    X86_AT(c, 0x95f81u);
    c.r[5] = c.r[4];
    // 095f83  push esi
    X86_AT(c, 0x95f83u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095f84  push edi
    X86_AT(c, 0x95f84u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095f85  mov esi, dword ptr [0x8a9e4]
    X86_AT(c, 0x95f85u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u)));
    // 095f8b  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x95f8bu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 095f8e  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x95f8eu);
    x86_string(c, 0, 4, 0, 4, 3);
    // 095f8f  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x95f8fu);
    x86_string(c, 0, 4, 0, 4, 3);
    // 095f90  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0x95f90u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 095f92  cmp byte ptr [0x8a553], 0
    X86_AT(c, 0x95f92u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A553u))), 0x0u, 0, 1);
    // 095f99  jne 0x95fb3
    X86_AT(c, 0x95f99u);
    if (x86_cc(c, 5)) { goto L_95fb3; }
    X86_TICK(c, 16);
    // 095f9b  mov eax, dword ptr [0x8a9e4]
    X86_AT(c, 0x95f9bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u)));
    // 095fa0  cmp byte ptr [eax + 0xa], 0
    X86_AT(c, 0x95fa0u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu))), 0x0u, 0, 1);
    // 095fa4  je 0x95fb3
    X86_AT(c, 0x95fa4u);
    if (x86_cc(c, 4)) { goto L_95fb3; }
    X86_TICK(c, 12);
    // 095fa6  cmp byte ptr [eax + 0xb], 0
    X86_AT(c, 0x95fa6u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu))), 0x0u, 0, 1);
    // 095faa  jne 0x95fb3
    X86_AT(c, 0x95faau);
    if (x86_cc(c, 5)) { goto L_95fb3; }
    X86_TICK(c, 11);
    // 095fac  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x95facu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 095faf  or byte ptr [eax + 9], 0x80
    X86_AT(c, 0x95fafu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x9u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
L_95fb3:
    X86_TICK(c, 31);
    // 095fb3  add dword ptr [0x8a9e4], 0xfffffff4
    X86_AT(c, 0x95fb3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A9E4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 095fba  pop edi
    X86_AT(c, 0x95fbau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095fbb  pop esi
    X86_AT(c, 0x95fbbu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 095fbc  leave 
    X86_AT(c, 0x95fbcu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095fbd  ret 4
    X86_AT(c, 0x95fbdu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x95f80u, "ran off the end of a function");
}
void f_00095fc0(X86Cpu& c) {
    X86_TICK(c, 83);
    // 095fc0  enter 0xc, 0
    X86_AT(c, 0x95fc0u);
    x86_enter(c, 0xCu, 0x0u, 4);
    // 095fc4  push esi
    X86_AT(c, 0x95fc4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095fc5  push edi
    X86_AT(c, 0x95fc5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095fc6  mov eax, dword ptr [0x8a9e4]
    X86_AT(c, 0x95fc6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u)));
    // 095fcb  lea esi, [eax - 0xc]
    X86_AT(c, 0x95fcbu);
    c.r[6] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 095fce  lea edi, [ebp - 0xc]
    X86_AT(c, 0x95fceu);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 095fd1  mov ecx, 3
    X86_AT(c, 0x95fd1u);
    c.r[1] = 0x3u;
    // 095fd6  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x95fd6u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 095fd8  xchg esi, eax
    X86_AT(c, 0x95fd8u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 095fd9  mov eax, dword ptr [0x8a9e4]
    X86_AT(c, 0x95fd9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u)));
    // 095fde  lea edi, [eax - 0xc]
    X86_AT(c, 0x95fdeu);
    c.r[7] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 095fe1  mov ecx, 3
    X86_AT(c, 0x95fe1u);
    c.r[1] = 0x3u;
    // 095fe6  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x95fe6u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 095fe8  lea esi, [ebp - 0xc]
    X86_AT(c, 0x95fe8u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 095feb  xchg edi, eax
    X86_AT(c, 0x95febu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 095fec  mov ecx, 3
    X86_AT(c, 0x95fecu);
    c.r[1] = 0x3u;
    // 095ff1  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x95ff1u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 095ff3  pop edi
    X86_AT(c, 0x95ff3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095ff4  pop esi
    X86_AT(c, 0x95ff4u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 095ff5  leave 
    X86_AT(c, 0x95ff5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095ff6  ret 
    X86_AT(c, 0x95ff6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x95fc0u, "ran off the end of a function");
}
void f_00095ff8(X86Cpu& c) {
    X86_TICK(c, 12);
    // 095ff8  cmp byte ptr [0x8a553], 0
    X86_AT(c, 0x95ff8u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A553u))), 0x0u, 0, 1);
    // 095fff  je 0x9600c
    X86_AT(c, 0x95fffu);
    if (x86_cc(c, 4)) { goto L_9600c; }
    X86_TICK(c, 18);
    // 096001  mov eax, dword ptr [0x8a9e4]
    X86_AT(c, 0x96001u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u)));
    // 096006  xor byte ptr [eax + 9], 0x80
    X86_AT(c, 0x96006u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x9u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x80u, 1)); }
    // 09600a  jmp 0x9601b
    X86_AT(c, 0x9600au);
    goto L_9601b;
L_9600c:
    X86_TICK(c, 16);
    // 09600c  mov eax, dword ptr [0x8a9e4]
    X86_AT(c, 0x9600cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u)));
    // 096011  cmp byte ptr [eax + 0xb], 0
    X86_AT(c, 0x96011u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu))), 0x0u, 0, 1);
    // 096015  jne 0x9601b
    X86_AT(c, 0x96015u);
    if (x86_cc(c, 5)) { goto L_9601b; }
    X86_TICK(c, 7);
    // 096017  xor byte ptr [eax + 0xa], 1
    X86_AT(c, 0x96017u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x1u, 1)); }
L_9601b:
    X86_TICK(c, 10);
    // 09601b  ret 
    X86_AT(c, 0x9601bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x95ff8u, "ran off the end of a function");
}
void f_00096090(X86Cpu& c) {
    X86_TICK(c, 22);
    // 096090  enter 0x24, 0
    X86_AT(c, 0x96090u);
    x86_enter(c, 0x24u, 0x0u, 4);
    // 096094  push esi
    X86_AT(c, 0x96094u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096095  push edi
    X86_AT(c, 0x96095u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096096  cmp byte ptr [0x8a553], 0
    X86_AT(c, 0x96096u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A553u))), 0x0u, 0, 1);
    // 09609d  je 0x960bf
    X86_AT(c, 0x9609du);
    if (x86_cc(c, 4)) { goto L_960bf; }
    X86_TICK(c, 20);
    // 09609f  push dword ptr [0x8a9e4]
    X86_AT(c, 0x9609fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u))); push32(c, v); }
    // 0960a5  mov eax, dword ptr [0x8a9e4]
    X86_AT(c, 0x960a5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u)));
    // 0960aa  sub eax, 0xc
    X86_AT(c, 0x960aau);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0960ad  push eax
    X86_AT(c, 0x960adu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0960ae  call 0x96449
    X86_AT(c, 0x960aeu);
    push32(c, 0x960b3u); x86_call_known(c, 0x96449u, f_00096449); X86_RET(c, 0x960b3u);
    X86_TICK(c, 14);
    // 0960b3  add dword ptr [0x8a9e4], 0xfffffff4
    X86_AT(c, 0x960b3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A9E4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 0960ba  jmp 0x961ae
    X86_AT(c, 0x960bau);
    goto L_961ae;
L_960bf:
    X86_TICK(c, 48);
    // 0960bf  mov eax, dword ptr [0x8a9e4]
    X86_AT(c, 0x960bfu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u)));
    // 0960c4  lea edx, [ebp - 0x14]
    X86_AT(c, 0x960c4u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFECu);
    // 0960c7  push esi
    X86_AT(c, 0x960c7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0960c8  push edi
    X86_AT(c, 0x960c8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0960c9  mov esi, eax
    X86_AT(c, 0x960c9u);
    c.r[6] = c.r[0];
    // 0960cb  mov edi, edx
    X86_AT(c, 0x960cbu);
    c.r[7] = c.r[2];
    // 0960cd  mov ecx, 3
    X86_AT(c, 0x960cdu);
    c.r[1] = 0x3u;
    // 0960d2  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x960d2u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0960d4  pop edi
    X86_AT(c, 0x960d4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0960d5  pop esi
    X86_AT(c, 0x960d5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0960d6  xchg esi, eax
    X86_AT(c, 0x960d6u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0960d7  sub esi, 0xc
    X86_AT(c, 0x960d7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0960da  cmp byte ptr [ebp - 9], 0
    X86_AT(c, 0x960dau);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 0960de  jne 0x960e6
    X86_AT(c, 0x960deu);
    if (x86_cc(c, 5)) { goto L_960e6; }
    X86_TICK(c, 12);
    // 0960e0  cmp byte ptr [esi + 0xb], 0
    X86_AT(c, 0x960e0u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xBu))), 0x0u, 0, 1);
    // 0960e4  je 0x9610c
    X86_AT(c, 0x960e4u);
    if (x86_cc(c, 4)) { goto L_9610c; }
L_960e6:
    X86_TICK(c, 45);
    // 0960e6  add dword ptr [0x8a9e4], 0xfffffff4
    X86_AT(c, 0x960e6u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A9E4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 0960ed  mov eax, 0x8a9f4
    X86_AT(c, 0x960edu);
    c.r[0] = 0x8A9F4u;
    // 0960f2  mov edx, dword ptr [0x8a9e4]
    X86_AT(c, 0x960f2u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u)));
    // 0960f8  push esi
    X86_AT(c, 0x960f8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0960f9  push edi
    X86_AT(c, 0x960f9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0960fa  mov esi, eax
    X86_AT(c, 0x960fau);
    c.r[6] = c.r[0];
    // 0960fc  mov edi, edx
    X86_AT(c, 0x960fcu);
    c.r[7] = c.r[2];
    // 0960fe  mov ecx, 3
    X86_AT(c, 0x960feu);
    c.r[1] = 0x3u;
    // 096103  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x96103u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 096105  pop edi
    X86_AT(c, 0x96105u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096106  pop esi
    X86_AT(c, 0x96106u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 096107  jmp 0x961ae
    X86_AT(c, 0x96107u);
    goto L_961ae;
L_9610c:
    X86_TICK(c, 69);
    // 09610c  add dword ptr [0x8a9e4], 0xfffffff4
    X86_AT(c, 0x9610cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A9E4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 096113  mov al, byte ptr [ebp - 0xa]
    X86_AT(c, 0x96113u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u))));
    // 096116  cmp al, byte ptr [esi + 0xa]
    X86_AT(c, 0x96116u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu))), 0, 1);
    // 096119  setne byte ptr [ebp - 0xa]
    X86_AT(c, 0x96119u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u)), x86_cc(c, 5) ? 1u : 0u);
    // 09611d  mov ax, word ptr [ebp - 0xc]
    X86_AT(c, 0x9611du);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))));
    // 096121  sub ax, 0x3fff
    X86_AT(c, 0x96121u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x3FFFu, 0, 2)); }
    // 096125  add ax, word ptr [esi + 8]
    X86_AT(c, 0x96125u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u))), 0, 2)); }
    // 096129  inc eax
    X86_AT(c, 0x96129u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 09612a  mov word ptr [ebp - 0xc], ax
    X86_AT(c, 0x9612au);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), (c.r[0] & 0xFFFFu));
    // 09612e  push dword ptr [esi + 4]
    X86_AT(c, 0x9612eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u))); push32(c, v); }
    // 096131  push dword ptr [esi]
    X86_AT(c, 0x96131u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6]))); push32(c, v); }
    // 096133  push dword ptr [ebp - 0x10]
    X86_AT(c, 0x96133u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 096136  push dword ptr [ebp - 0x14]
    X86_AT(c, 0x96136u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 096139  lea eax, [ebp - 0x24]
    X86_AT(c, 0x96139u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFDCu);
    // 09613c  push eax
    X86_AT(c, 0x9613cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09613d  call 0x96c4c
    X86_AT(c, 0x9613du);
    push32(c, 0x96142u); x86_call_known(c, 0x96c4cu, f_00096c4c); X86_RET(c, 0x96142u);
    X86_TICK(c, 9);
    // 096142  mov di, 0x80
    X86_AT(c, 0x96142u);
    s16(c, 7, 0x80u);
    // 096146  jmp 0x96156
    X86_AT(c, 0x96146u);
    goto L_96156;
L_96148:
    X86_TICK(c, 19);
    // 096148  dec word ptr [ebp - 0xc]
    X86_AT(c, 0x96148u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 09614c  dec edi
    X86_AT(c, 0x9614cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 09614d  lea eax, [ebp - 0x24]
    X86_AT(c, 0x9614du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFDCu);
    // 096150  push eax
    X86_AT(c, 0x96150u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 096151  call 0x9681b
    X86_AT(c, 0x96151u);
    push32(c, 0x96156u); x86_call_known(c, 0x9681bu, f_0009681b); X86_RET(c, 0x96156u);
L_96156:
    X86_TICK(c, 12);
    // 096156  cmp byte ptr [ebp - 0x15], 0x80
    X86_AT(c, 0x96156u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEBu))), 0x80u, 0, 1);
    // 09615a  jae 0x96161
    X86_AT(c, 0x9615au);
    if (x86_cc(c, 3)) { goto L_96161; }
    X86_TICK(c, 7);
    // 09615c  and di, di
    X86_AT(c, 0x9615cu);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_logic(c, v & (c.r[7] & 0xFFFFu), 2)); }
    // 09615f  ja 0x96148
    X86_AT(c, 0x9615fu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x96148u); goto L_96148; }
L_96161:
    X86_TICK(c, 24);
    // 096161  mov eax, dword ptr [ebp - 0x1c]
    X86_AT(c, 0x96161u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 096164  mov edx, dword ptr [ebp - 0x18]
    X86_AT(c, 0x96164u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 096167  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0x96167u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 09616a  mov dword ptr [ebp - 0x10], edx
    X86_AT(c, 0x9616au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[2]);
    // 09616d  cmp byte ptr [ebp - 0x1d], 0x80
    X86_AT(c, 0x9616du);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE3u))), 0x80u, 0, 1);
    // 096171  jb 0x96190
    X86_AT(c, 0x96171u);
    if (x86_cc(c, 2)) { goto L_96190; }
    X86_TICK(c, 21);
    // 096173  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x96173u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 09617a  mov dword ptr [ebp - 8], 1
    X86_AT(c, 0x9617au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x1u);
    // 096181  push 4
    X86_AT(c, 0x96181u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 096183  lea eax, [ebp - 8]
    X86_AT(c, 0x96183u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 096186  push eax
    X86_AT(c, 0x96186u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 096187  lea eax, [ebp - 0x14]
    X86_AT(c, 0x96187u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFECu);
    // 09618a  push eax
    X86_AT(c, 0x9618au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09618b  call 0x966e4
    X86_AT(c, 0x9618bu);
    push32(c, 0x96190u); x86_call_known(c, 0x966e4u, f_000966e4); X86_RET(c, 0x96190u);
L_96190:
    X86_TICK(c, 40);
    // 096190  lea eax, [ebp - 0x14]
    X86_AT(c, 0x96190u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFECu);
    // 096193  mov edx, dword ptr [0x8a9e4]
    X86_AT(c, 0x96193u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u)));
    // 096199  push esi
    X86_AT(c, 0x96199u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09619a  push edi
    X86_AT(c, 0x9619au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09619b  mov esi, eax
    X86_AT(c, 0x9619bu);
    c.r[6] = c.r[0];
    // 09619d  mov edi, edx
    X86_AT(c, 0x9619du);
    c.r[7] = c.r[2];
    // 09619f  mov ecx, 3
    X86_AT(c, 0x9619fu);
    c.r[1] = 0x3u;
    // 0961a4  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x961a4u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0961a6  pop edi
    X86_AT(c, 0x961a6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0961a7  pop esi
    X86_AT(c, 0x961a7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0961a8  push edx
    X86_AT(c, 0x961a8u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0961a9  call 0x96874
    X86_AT(c, 0x961a9u);
    push32(c, 0x961aeu); x86_call_known(c, 0x96874u, f_00096874); X86_RET(c, 0x961aeu);
L_961ae:
    X86_TICK(c, 24);
    // 0961ae  pop edi
    X86_AT(c, 0x961aeu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0961af  pop esi
    X86_AT(c, 0x961afu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0961b0  leave 
    X86_AT(c, 0x961b0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0961b1  ret 
    X86_AT(c, 0x961b1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x96090u, "ran off the end of a function");
}
void f_000961ae(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0961ae  pop edi
    X86_AT(c, 0x961aeu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0961af  pop esi
    X86_AT(c, 0x961afu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0961b0  leave 
    X86_AT(c, 0x961b0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0961b1  ret 
    X86_AT(c, 0x961b1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x961aeu, "ran off the end of a function");
}
void f_000961b4(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0961b4  call 0x95fc0
    X86_AT(c, 0x961b4u);
    push32(c, 0x961b9u); x86_call_known(c, 0x95fc0u, f_00095fc0); X86_RET(c, 0x961b9u);
    X86_TICK(c, 7);
    // 0961b9  call 0x961c0
    X86_AT(c, 0x961b9u);
    push32(c, 0x961beu); x86_call_known(c, 0x961c0u, f_000961c0); X86_RET(c, 0x961beu);
    X86_TICK(c, 10);
    // 0961be  ret 
    X86_AT(c, 0x961beu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x961b4u, "ran off the end of a function");
}
void f_000961c0(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0961c0  push ebx
    X86_AT(c, 0x961c0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0961c1  push esi
    X86_AT(c, 0x961c1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0961c2  push edi
    X86_AT(c, 0x961c2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0961c3  cmp byte ptr [0x8a553], 0
    X86_AT(c, 0x961c3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A553u))), 0x0u, 0, 1);
    // 0961ca  je 0x961e2
    X86_AT(c, 0x961cau);
    if (x86_cc(c, 4)) { goto L_961e2; }
    X86_TICK(c, 20);
    // 0961cc  push dword ptr [0x8a9e4]
    X86_AT(c, 0x961ccu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u))); push32(c, v); }
    // 0961d2  mov eax, dword ptr [0x8a9e4]
    X86_AT(c, 0x961d2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u)));
    // 0961d7  sub eax, 0xc
    X86_AT(c, 0x961d7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0961da  push eax
    X86_AT(c, 0x961dau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0961db  call 0x96450
    X86_AT(c, 0x961dbu);
    push32(c, 0x961e0u); x86_call_known(c, 0x96450u, f_00096450); X86_RET(c, 0x961e0u);
    X86_TICK(c, 7);
    // 0961e0  jmp 0x96233
    X86_AT(c, 0x961e0u);
    goto L_96233;
L_961e2:
    X86_TICK(c, 35);
    // 0961e2  mov eax, dword ptr [0x8a9e4]
    X86_AT(c, 0x961e2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u)));
    // 0961e7  mov dl, byte ptr [eax + 0xa]
    X86_AT(c, 0x961e7u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu))));
    // 0961ea  cmp dl, byte ptr [eax - 2]
    X86_AT(c, 0x961eau);
    (void)x86_sub(c, g8(c, 2), rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFEu))), 0, 1);
    // 0961ed  setne byte ptr [eax - 2]
    X86_AT(c, 0x961edu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFEu)), x86_cc(c, 5) ? 1u : 0u);
    // 0961f1  mov eax, dword ptr [0x8a9e4]
    X86_AT(c, 0x961f1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u)));
    // 0961f6  cmp byte ptr [eax + 0xb], 0
    X86_AT(c, 0x961f6u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu))), 0x0u, 0, 1);
    // 0961fa  je 0x96228
    X86_AT(c, 0x961fau);
    if (x86_cc(c, 4)) { goto L_96228; }
    X86_TICK(c, 36);
    // 0961fc  add dword ptr [0x8a9e4], 0xfffffff4
    X86_AT(c, 0x961fcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A9E4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 096203  mov ax, word ptr [0x8aa14]
    X86_AT(c, 0x96203u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8AA14u))));
    // 096209  mov edx, dword ptr [0x8a9e4]
    X86_AT(c, 0x96209u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u)));
    // 09620f  mov word ptr [edx + 8], ax
    X86_AT(c, 0x9620fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[2] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 096213  mov eax, dword ptr [0x8aa0c]
    X86_AT(c, 0x96213u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AA0Cu)));
    // 096218  mov ecx, dword ptr [0x8aa10]
    X86_AT(c, 0x96218u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8AA10u)));
    // 09621e  mov dword ptr [edx], eax
    X86_AT(c, 0x9621eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 096220  mov dword ptr [edx + 4], ecx
    X86_AT(c, 0x96220u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)), c.r[1]);
    // 096223  jmp 0x9630a
    X86_AT(c, 0x96223u);
    goto L_9630a;
L_96228:
    X86_TICK(c, 16);
    // 096228  mov eax, dword ptr [0x8a9e4]
    X86_AT(c, 0x96228u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u)));
    // 09622d  cmp byte ptr [eax - 1], 0
    X86_AT(c, 0x9622du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 096231  je 0x96256
    X86_AT(c, 0x96231u);
    if (x86_cc(c, 4)) { goto L_96256; }
L_96233:
    X86_TICK(c, 14);
    // 096233  add dword ptr [0x8a9e4], 0xfffffff4
    X86_AT(c, 0x96233u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A9E4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 09623a  jmp 0x9630a
    X86_AT(c, 0x9623au);
    goto L_9630a;
L_9623f:
    X86_TICK(c, 15);
    // 09623f  mov eax, dword ptr [0x8a9e4]
    X86_AT(c, 0x9623fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u)));
    // 096244  sub eax, 0xc
    X86_AT(c, 0x96244u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xCu, 0, 4); }
    // 096247  push eax
    X86_AT(c, 0x96247u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 096248  call 0x967bc
    X86_AT(c, 0x96248u);
    push32(c, 0x9624du); x86_call_known(c, 0x967bcu, f_000967bc); X86_RET(c, 0x9624du);
    X86_TICK(c, 10);
    // 09624d  mov eax, dword ptr [0x8a9e4]
    X86_AT(c, 0x9624du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u)));
    // 096252  dec word ptr [eax - 4]
    X86_AT(c, 0x96252u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_96256:
    X86_TICK(c, 16);
    // 096256  mov eax, dword ptr [0x8a9e4]
    X86_AT(c, 0x96256u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u)));
    // 09625b  cmp byte ptr [eax - 5], 0x80
    X86_AT(c, 0x9625bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFBu))), 0x80u, 0, 1);
    // 09625f  jb 0x9623f
    X86_AT(c, 0x9625fu);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x9623fu); goto L_9623f; }
    X86_TICK(c, 7);
    // 096261  jmp 0x96277
    X86_AT(c, 0x96261u);
    goto L_96277;
L_96263:
    X86_TICK(c, 12);
    // 096263  push dword ptr [0x8a9e4]
    X86_AT(c, 0x96263u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u))); push32(c, v); }
    // 096269  call 0x967bc
    X86_AT(c, 0x96269u);
    push32(c, 0x9626eu); x86_call_known(c, 0x967bcu, f_000967bc); X86_RET(c, 0x9626eu);
    X86_TICK(c, 10);
    // 09626e  mov eax, dword ptr [0x8a9e4]
    X86_AT(c, 0x9626eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u)));
    // 096273  dec word ptr [eax + 8]
    X86_AT(c, 0x96273u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_96277:
    X86_TICK(c, 16);
    // 096277  mov eax, dword ptr [0x8a9e4]
    X86_AT(c, 0x96277u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u)));
    // 09627c  cmp byte ptr [eax + 7], 0x80
    X86_AT(c, 0x9627cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x7u))), 0x80u, 0, 1);
    // 096280  jb 0x96263
    X86_AT(c, 0x96280u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x96263u); goto L_96263; }
    X86_TICK(c, 35);
    // 096282  push dword ptr [eax + 4]
    X86_AT(c, 0x96282u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))); push32(c, v); }
    // 096285  push dword ptr [eax]
    X86_AT(c, 0x96285u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0]))); push32(c, v); }
    // 096287  push dword ptr [eax - 8]
    X86_AT(c, 0x96287u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF8u))); push32(c, v); }
    // 09628a  push dword ptr [eax - 0xc]
    X86_AT(c, 0x9628au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF4u))); push32(c, v); }
    // 09628d  lea edx, [eax - 0xc]
    X86_AT(c, 0x9628du);
    c.r[2] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 096290  push edx
    X86_AT(c, 0x96290u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 096291  mov ebx, eax
    X86_AT(c, 0x96291u);
    c.r[3] = c.r[0];
    // 096293  mov esi, edx
    X86_AT(c, 0x96293u);
    c.r[6] = c.r[2];
    // 096295  call 0x96c98
    X86_AT(c, 0x96295u);
    push32(c, 0x9629au); x86_call_known(c, 0x96c98u, f_00096c98); X86_RET(c, 0x9629au);
    X86_TICK(c, 35);
    // 09629a  movzx eax, ax
    X86_AT(c, 0x9629au);
    c.r[0] = (c.r[0] & 0xFFFFu);
    // 09629d  movzx edx, word ptr [ebx + 8]
    X86_AT(c, 0x9629du);
    c.r[2] = rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0962a1  movzx edi, word ptr [esi + 8]
    X86_AT(c, 0x962a1u);
    c.r[7] = rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 0962a5  sub edi, edx
    X86_AT(c, 0x962a5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0962a7  add edi, 0x403e
    X86_AT(c, 0x962a7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x403Eu, 0, 4); }
    // 0962ad  sub edi, eax
    X86_AT(c, 0x962adu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0962af  add dword ptr [0x8a9e4], 0xfffffff4
    X86_AT(c, 0x962afu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A9E4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 0962b6  and edi, edi
    X86_AT(c, 0x962b6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0962b8  jge 0x962f3
    X86_AT(c, 0x962b8u);
    if (x86_cc(c, 13)) { goto L_962f3; }
    X86_TICK(c, 7);
    // 0962ba  cmp edi, 0xffffffc1
    X86_AT(c, 0x962bau);
    (void)x86_sub(c, c.r[7], 0xFFFFFFC1u, 0, 4);
    // 0962bd  jl 0x962dc
    X86_AT(c, 0x962bdu);
    if (x86_cc(c, 12)) { goto L_962dc; }
    X86_TICK(c, 18);
    // 0962bf  mov eax, edi
    X86_AT(c, 0x962bfu);
    c.r[0] = c.r[7];
    // 0962c1  neg eax
    X86_AT(c, 0x962c1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0962c3  push eax
    X86_AT(c, 0x962c3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0962c4  push dword ptr [0x8a9e4]
    X86_AT(c, 0x962c4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u))); push32(c, v); }
    // 0962ca  call 0x967d8
    X86_AT(c, 0x962cau);
    push32(c, 0x962cfu); x86_call_known(c, 0x967d8u, f_000967d8); X86_RET(c, 0x962cfu);
    X86_TICK(c, 13);
    // 0962cf  mov eax, dword ptr [0x8a9e4]
    X86_AT(c, 0x962cfu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u)));
    // 0962d4  mov word ptr [eax + 8], 0
    X86_AT(c, 0x962d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)), 0x0u);
    // 0962da  jmp 0x962ff
    X86_AT(c, 0x962dau);
    goto L_962ff;
L_962dc:
    X86_TICK(c, 30);
    // 0962dc  mov esi, 0x8a9f4
    X86_AT(c, 0x962dcu);
    c.r[6] = 0x8A9F4u;
    // 0962e1  mov eax, dword ptr [0x8a9e4]
    X86_AT(c, 0x962e1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u)));
    // 0962e6  push edi
    X86_AT(c, 0x962e6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0962e7  mov edi, eax
    X86_AT(c, 0x962e7u);
    c.r[7] = c.r[0];
    // 0962e9  mov ecx, 3
    X86_AT(c, 0x962e9u);
    c.r[1] = 0x3u;
    // 0962ee  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x962eeu);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0962f0  pop edi
    X86_AT(c, 0x962f0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0962f1  jmp 0x962ff
    X86_AT(c, 0x962f1u);
    goto L_962ff;
L_962f3:
    X86_TICK(c, 8);
    // 0962f3  mov eax, edi
    X86_AT(c, 0x962f3u);
    c.r[0] = c.r[7];
    // 0962f5  mov edx, dword ptr [0x8a9e4]
    X86_AT(c, 0x962f5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u)));
    // 0962fb  mov word ptr [edx + 8], ax
    X86_AT(c, 0x962fbu);
    wr16((c.sbase[3] + (uint32_t)(c.r[2] + 0x8u)), (c.r[0] & 0xFFFFu));
L_962ff:
    X86_TICK(c, 12);
    // 0962ff  push dword ptr [0x8a9e4]
    X86_AT(c, 0x962ffu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u))); push32(c, v); }
    // 096305  call 0x96874
    X86_AT(c, 0x96305u);
    push32(c, 0x9630au); x86_call_known(c, 0x96874u, f_00096874); X86_RET(c, 0x9630au);
L_9630a:
    X86_TICK(c, 22);
    // 09630a  pop edi
    X86_AT(c, 0x9630au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09630b  pop esi
    X86_AT(c, 0x9630bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 09630c  pop ebx
    X86_AT(c, 0x9630cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 09630d  ret 
    X86_AT(c, 0x9630du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x961c0u, "ran off the end of a function");
}
void f_0009630a(X86Cpu& c) {
    X86_TICK(c, 22);
    // 09630a  pop edi
    X86_AT(c, 0x9630au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09630b  pop esi
    X86_AT(c, 0x9630bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 09630c  pop ebx
    X86_AT(c, 0x9630cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 09630d  ret 
    X86_AT(c, 0x9630du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9630au, "ran off the end of a function");
}
void f_00096310(X86Cpu& c) {
    X86_TICK(c, 24);
    // 096310  enter 0x10, 0
    X86_AT(c, 0x96310u);
    x86_enter(c, 0x10u, 0x0u, 4);
    // 096314  push ebx
    X86_AT(c, 0x96314u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 096315  push esi
    X86_AT(c, 0x96315u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096316  push edi
    X86_AT(c, 0x96316u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096317  cmp byte ptr [0x8a553], 0
    X86_AT(c, 0x96317u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A553u))), 0x0u, 0, 1);
    // 09631e  je 0x96339
    X86_AT(c, 0x9631eu);
    if (x86_cc(c, 4)) { goto L_96339; }
    X86_TICK(c, 20);
    // 096320  push dword ptr [0x8a9e4]
    X86_AT(c, 0x96320u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u))); push32(c, v); }
    // 096326  mov eax, dword ptr [0x8a9e4]
    X86_AT(c, 0x96326u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u)));
    // 09632b  sub eax, 0xc
    X86_AT(c, 0x9632bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xCu, 0, 4); }
    // 09632e  push eax
    X86_AT(c, 0x9632eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09632f  call 0x96457
    X86_AT(c, 0x9632fu);
    push32(c, 0x96334u); x86_call_known(c, 0x96457u, f_00096457); X86_RET(c, 0x96334u);
    X86_TICK(c, 7);
    // 096334  jmp 0x963a6
    X86_AT(c, 0x96334u);
    goto L_963a6;
L_96339:
    X86_TICK(c, 16);
    // 096339  mov eax, dword ptr [0x8a9e4]
    X86_AT(c, 0x96339u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u)));
    // 09633e  cmp byte ptr [eax + 0xb], 0
    X86_AT(c, 0x9633eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu))), 0x0u, 0, 1);
    // 096342  je 0x9634a
    X86_AT(c, 0x96342u);
    if (x86_cc(c, 4)) { goto L_9634a; }
    X86_TICK(c, 12);
    // 096344  cmp byte ptr [eax - 1], 0
    X86_AT(c, 0x96344u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 096348  jne 0x96362
    X86_AT(c, 0x96348u);
    if (x86_cc(c, 5)) { goto L_96362; }
L_9634a:
    X86_TICK(c, 24);
    // 09634a  mov esi, dword ptr [0x8a9e4]
    X86_AT(c, 0x9634au);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u)));
    // 096350  mov edi, dword ptr [0x8a9e4]
    X86_AT(c, 0x96350u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u)));
    // 096356  sub edi, 0xc
    X86_AT(c, 0x96356u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, 0xCu, 0, 4); }
    // 096359  mov ecx, 0xc
    X86_AT(c, 0x96359u);
    c.r[1] = 0xCu;
    // 09635e  cmpsb byte ptr [esi], byte ptr es:[edi]
    X86_AT(c, 0x9635eu);
    x86_string(c, 1, 1, 243, 4, 3);
    // 096360  jne 0x96366
    X86_AT(c, 0x96360u);
    if (x86_cc(c, 5)) { goto L_96366; }
L_96362:
    X86_TICK(c, 9);
    // 096362  sub eax, eax
    X86_AT(c, 0x96362u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 096364  jmp 0x963a6
    X86_AT(c, 0x96364u);
    goto L_963a6;
L_96366:
    X86_TICK(c, 21);
    // 096366  mov eax, dword ptr [0x8a9e4]
    X86_AT(c, 0x96366u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u)));
    // 09636b  mov dl, byte ptr [eax + 0xa]
    X86_AT(c, 0x9636bu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu))));
    // 09636e  mov byte ptr [ebp - 0xd], dl
    X86_AT(c, 0x9636eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), g8(c, 2));
    // 096371  mov bl, byte ptr [eax - 2]
    X86_AT(c, 0x96371u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFEu))));
    // 096374  cmp dl, bl
    X86_AT(c, 0x96374u);
    (void)x86_sub(c, g8(c, 2), g8(c, 3), 0, 1);
    // 096376  jne 0x96399
    X86_AT(c, 0x96376u);
    if (x86_cc(c, 5)) { goto L_96399; }
    X86_TICK(c, 28);
    // 096378  lea esi, [eax - 0xc]
    X86_AT(c, 0x96378u);
    c.r[6] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 09637b  lea edi, [ebp - 0xc]
    X86_AT(c, 0x9637bu);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 09637e  mov ecx, 3
    X86_AT(c, 0x9637eu);
    c.r[1] = 0x3u;
    // 096383  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x96383u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 096385  push 5
    X86_AT(c, 0x96385u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 096387  push eax
    X86_AT(c, 0x96387u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 096388  lea eax, [ebp - 0xc]
    X86_AT(c, 0x96388u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 09638b  push eax
    X86_AT(c, 0x9638bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09638c  call 0x9670d
    X86_AT(c, 0x9638cu);
    push32(c, 0x96391u); x86_call_known(c, 0x9670du, f_0009670d); X86_RET(c, 0x96391u);
    X86_TICK(c, 14);
    // 096391  cmp al, bl
    X86_AT(c, 0x96391u);
    (void)x86_sub(c, g8(c, 0), g8(c, 3), 0, 1);
    // 096393  setne byte ptr [ebp - 0xe]
    X86_AT(c, 0x96393u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)), x86_cc(c, 5) ? 1u : 0u);
    // 096397  jmp 0x9639c
    X86_AT(c, 0x96397u);
    goto L_9639c;
L_96399:
    X86_TICK(c, 2);
    // 096399  mov byte ptr [ebp - 0xe], bl
    X86_AT(c, 0x96399u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)), g8(c, 3));
L_9639c:
    X86_TICK(c, 12);
    // 09639c  mov al, byte ptr [ebp - 0xe]
    X86_AT(c, 0x9639cu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))));
    // 09639f  add eax, eax
    X86_AT(c, 0x9639fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 0963a1  sub ah, ah
    X86_AT(c, 0x963a1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 0963a3  neg eax
    X86_AT(c, 0x963a3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0963a5  inc eax
    X86_AT(c, 0x963a5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
L_963a6:
    X86_TICK(c, 28);
    // 0963a6  pop edi
    X86_AT(c, 0x963a6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0963a7  pop esi
    X86_AT(c, 0x963a7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0963a8  pop ebx
    X86_AT(c, 0x963a8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0963a9  leave 
    X86_AT(c, 0x963a9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0963aa  ret 
    X86_AT(c, 0x963aau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x96310u, "ran off the end of a function");
}
void f_000963ac(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0963ac  enter 4, 0
    X86_AT(c, 0x963acu);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0963b0  call 0x96310
    X86_AT(c, 0x963b0u);
    push32(c, 0x963b5u); x86_call_known(c, 0x96310u, f_00096310); X86_RET(c, 0x963b5u);
    X86_TICK(c, 25);
    // 0963b5  mov word ptr [ebp - 2], ax
    X86_AT(c, 0x963b5u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), (c.r[0] & 0xFFFFu));
    // 0963b9  add dword ptr [0x8a9e4], 0xffffffe8
    X86_AT(c, 0x963b9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A9E4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFE8u, 0, 4)); }
    // 0963c0  leave 
    X86_AT(c, 0x963c0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0963c1  ret 
    X86_AT(c, 0x963c1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x963acu, "ran off the end of a function");
}
void f_000963c4(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0963c4  enter 4, 0
    X86_AT(c, 0x963c4u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0963c8  push esi
    X86_AT(c, 0x963c8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0963c9  push edi
    X86_AT(c, 0x963c9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0963ca  mov si, 1
    X86_AT(c, 0x963cau);
    s16(c, 6, 0x1u);
    // 0963ce  call 0x963ac
    X86_AT(c, 0x963ceu);
    push32(c, 0x963d3u); x86_call_known(c, 0x963acu, f_000963ac); X86_RET(c, 0x963d3u);
    X86_TICK(c, 9);
    // 0963d3  lea edi, [esi + eax*1]
    X86_AT(c, 0x963d3u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 0963d6  cmp di, si
    X86_AT(c, 0x963d6u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 0963d9  jle 0x963df
    X86_AT(c, 0x963d9u);
    if (x86_cc(c, 14)) { goto L_963df; }
    X86_TICK(c, 2);
    // 0963db  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0x963dbu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
L_963df:
    X86_TICK(c, 24);
    // 0963df  pop edi
    X86_AT(c, 0x963dfu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0963e0  pop esi
    X86_AT(c, 0x963e0u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0963e1  leave 
    X86_AT(c, 0x963e1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0963e2  ret 
    X86_AT(c, 0x963e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x963c4u, "ran off the end of a function");
}
void f_000963e4(X86Cpu& c) {
    X86_TICK(c, 32);
    // 0963e4  esc 0xf, byte ptr [0x8aa48]
    X86_AT(c, 0x963e4u);
    // 0963ea  wait 
    X86_AT(c, 0x963eau);
    // 0963eb  mov ax, word ptr [0x8aa48]
    X86_AT(c, 0x963ebu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8AA48u))));
    // 0963f1  and ax, 0xf3ff
    X86_AT(c, 0x963f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xF3FFu, 2)); }
    // 0963f5  or eax, ecx
    X86_AT(c, 0x963f5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[1], 4); }
    // 0963f7  mov word ptr [0x8aa46], ax
    X86_AT(c, 0x963f7u);
    wr16((c.sbase[3] + (uint32_t)(0x8AA46u)), (c.r[0] & 0xFFFFu));
    // 0963fd  esc 0xd, byte ptr [0x8aa46]
    X86_AT(c, 0x963fdu);
    // 096403  ret 
    X86_AT(c, 0x96403u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x963e4u, "ran off the end of a function");
}
void f_00096404(X86Cpu& c) {
    X86_TICK(c, 20);
    // 096404  push eax
    X86_AT(c, 0x96404u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 096405  esc 0x3c, al
    X86_AT(c, 0x96405u);
    // 096407  wait 
    X86_AT(c, 0x96407u);
    // 096408  and ax, 0x4100
    X86_AT(c, 0x96408u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x4100u, 2)); }
    // 09640c  cmp ax, 0x4000
    X86_AT(c, 0x9640cu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x4000u, 0, 2);
    // 096410  je 0x96416
    X86_AT(c, 0x96410u);
    if (x86_cc(c, 4)) { goto L_96416; }
    X86_TICK(c, 2);
    // 096412  cmp ax, 1
    X86_AT(c, 0x96412u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x1u, 0, 2);
L_96416:
    X86_TICK(c, 14);
    // 096416  pop eax
    X86_AT(c, 0x96416u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 096417  ret 
    X86_AT(c, 0x96417u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x96404u, "ran off the end of a function");
}
void f_0009642d(X86Cpu& c) {
    X86_TICK(c, 27);
    // 09642d  xor edx, edx
    X86_AT(c, 0x9642du);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 09642f  mov ecx, dword ptr [esp + 8]
    X86_AT(c, 0x9642fu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 096433  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0x96433u);
    // 096435  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0x96435u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 096439  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0x96439u);
    // 09643b  mov eax, dword ptr cs:[edx + 0x96421]
    X86_AT(c, 0x9643bu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[2] + 0x96421u)));
    // 096442  call eax
    X86_AT(c, 0x96442u);
    { uint32_t t = c.r[0]; push32(c, 0x96444u); x86_call(c, t); X86_RET(c, 0x96444u); }
    X86_TICK(c, 13);
    // 096444  esc 0x1f, byte ptr [ecx]
    X86_AT(c, 0x96444u);
    // 096446  ret 8
    X86_AT(c, 0x96446u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x9642du, "ran off the end of a function");
}
void f_00096449(X86Cpu& c) {
    goto L_96449;
L_9642f:
    X86_TICK(c, 25);
    // 09642f  mov ecx, dword ptr [esp + 8]
    X86_AT(c, 0x9642fu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 096433  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0x96433u);
    // 096435  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0x96435u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 096439  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0x96439u);
    // 09643b  mov eax, dword ptr cs:[edx + 0x96421]
    X86_AT(c, 0x9643bu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[2] + 0x96421u)));
    // 096442  call eax
    X86_AT(c, 0x96442u);
    { uint32_t t = c.r[0]; push32(c, 0x96444u); x86_call(c, t); X86_RET(c, 0x96444u); }
    X86_TICK(c, 13);
    // 096444  esc 0x1f, byte ptr [ecx]
    X86_AT(c, 0x96444u);
    // 096446  ret 8
    X86_AT(c, 0x96446u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
L_96449:
    X86_TICK(c, 9);
    // 096449  mov edx, 4
    X86_AT(c, 0x96449u);
    c.r[2] = 0x4u;
    // 09644e  jmp 0x9642f
    X86_AT(c, 0x9644eu);
    X86_POLL(c, 0x9642fu); goto L_9642f;
    x86_fault(c, 0x96449u, "ran off the end of a function");
}
void f_00096450(X86Cpu& c) {
    goto L_96450;
L_9642f:
    X86_TICK(c, 25);
    // 09642f  mov ecx, dword ptr [esp + 8]
    X86_AT(c, 0x9642fu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 096433  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0x96433u);
    // 096435  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0x96435u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 096439  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0x96439u);
    // 09643b  mov eax, dword ptr cs:[edx + 0x96421]
    X86_AT(c, 0x9643bu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[2] + 0x96421u)));
    // 096442  call eax
    X86_AT(c, 0x96442u);
    { uint32_t t = c.r[0]; push32(c, 0x96444u); x86_call(c, t); X86_RET(c, 0x96444u); }
    X86_TICK(c, 13);
    // 096444  esc 0x1f, byte ptr [ecx]
    X86_AT(c, 0x96444u);
    // 096446  ret 8
    X86_AT(c, 0x96446u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
L_96450:
    X86_TICK(c, 9);
    // 096450  mov edx, 8
    X86_AT(c, 0x96450u);
    c.r[2] = 0x8u;
    // 096455  jmp 0x9642f
    X86_AT(c, 0x96455u);
    X86_POLL(c, 0x9642fu); goto L_9642f;
    x86_fault(c, 0x96450u, "ran off the end of a function");
}
void f_00096457(X86Cpu& c) {
    X86_TICK(c, 24);
    // 096457  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0x96457u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 09645b  esc 0x1d, byte ptr [eax]
    X86_AT(c, 0x9645bu);
    // 09645d  mov eax, dword ptr [esp + 8]
    X86_AT(c, 0x9645du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 096461  esc 0x1d, byte ptr [eax]
    X86_AT(c, 0x96461u);
    // 096463  esc 0x33, cl
    X86_AT(c, 0x96463u);
    // 096465  call 0x964ca
    X86_AT(c, 0x96465u);
    push32(c, 0x9646au); x86_call_known(c, 0x964cau, f_000964ca); X86_RET(c, 0x9646au);
    X86_TICK(c, 10);
    // 09646a  ret 8
    X86_AT(c, 0x9646au);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x96457u, "ran off the end of a function");
}
void f_00096493(X86Cpu& c) {
    X86_TICK(c, 13);
    // 096493  esc 8, byte ptr [esp + 4]
    X86_AT(c, 0x96493u);
    // 096497  ret 4
    X86_AT(c, 0x96497u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x96493u, "ran off the end of a function");
}
void f_000964ad(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0964ad  esc 0x28, byte ptr [esp + 4]
    X86_AT(c, 0x964adu);
    // 0964b1  ret 8
    X86_AT(c, 0x964b1u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x964adu, "ran off the end of a function");
}
void f_000964b4(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0964b4  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0x964b4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0964b8  esc 0x1f, byte ptr [eax]
    X86_AT(c, 0x964b8u);
    // 0964ba  wait 
    X86_AT(c, 0x964bau);
    // 0964bb  ret 4
    X86_AT(c, 0x964bbu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x964b4u, "ran off the end of a function");
}
void f_000964be(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0964be  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0x964beu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0964c2  esc 0x1d, byte ptr [eax]
    X86_AT(c, 0x964c2u);
    // 0964c4  ret 4
    X86_AT(c, 0x964c4u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x964beu, "ran off the end of a function");
}
void f_000964c7(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0964c7  esc 0x2b, al
    X86_AT(c, 0x964c7u);
    // 0964c9  ret 
    X86_AT(c, 0x964c9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x964c7u, "ran off the end of a function");
}
void f_000964ca(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0964ca  xor eax, eax
    X86_AT(c, 0x964cau);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0964cc  call 0x96404
    X86_AT(c, 0x964ccu);
    push32(c, 0x964d1u); x86_call_known(c, 0x96404u, f_00096404); X86_RET(c, 0x964d1u);
    X86_TICK(c, 5);
    // 0964d1  je 0x964d8
    X86_AT(c, 0x964d1u);
    if (x86_cc(c, 4)) { goto L_964d8; }
    X86_TICK(c, 5);
    // 0964d3  jb 0x964d7
    X86_AT(c, 0x964d3u);
    if (x86_cc(c, 2)) { goto L_964d7; }
    X86_TICK(c, 12);
    // 0964d5  inc eax
    X86_AT(c, 0x964d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0964d6  ret 
    X86_AT(c, 0x964d6u);
    c.eip = pop32(c); return;
L_964d7:
    X86_TICK(c, 2);
    // 0964d7  dec eax
    X86_AT(c, 0x964d7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
L_964d8:
    X86_TICK(c, 10);
    // 0964d8  ret 
    X86_AT(c, 0x964d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x964cau, "ran off the end of a function");
}
void f_00096507(X86Cpu& c) {
    X86_TICK(c, 24);
    // 096507  esc 0xc, ch
    X86_AT(c, 0x96507u);
    // 096509  xor eax, eax
    X86_AT(c, 0x96509u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 09650b  esc 0x3c, al
    X86_AT(c, 0x9650bu);
    // 09650d  wait 
    X86_AT(c, 0x9650du);
    // 09650e  ret 
    X86_AT(c, 0x9650eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x96507u, "ran off the end of a function");
}
void f_0009650f(X86Cpu& c) {
    X86_TICK(c, 23);
    // 09650f  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0x9650fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 096513  esc 0x3e, byte ptr [eax]
    X86_AT(c, 0x96513u);
    // 096515  wait 
    X86_AT(c, 0x96515u);
    // 096516  ret 4
    X86_AT(c, 0x96516u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x9650fu, "ran off the end of a function");
}
void f_00096524(X86Cpu& c) {
    X86_TICK(c, 36);
    // 096524  push ebp
    X86_AT(c, 0x96524u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 096525  mov ebp, esp
    X86_AT(c, 0x96525u);
    c.r[5] = c.r[4];
    // 096527  push esi
    X86_AT(c, 0x96527u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096528  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x96528u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 09652b  mov edx, dword ptr [eax + 4]
    X86_AT(c, 0x9652bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)));
    // 09652e  mov esi, edx
    X86_AT(c, 0x9652eu);
    c.r[6] = c.r[2];
    // 096530  shr esi, 0x14
    X86_AT(c, 0x96530u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 5, v, 0x14u, 4, w); if (w) c.r[6] = r; }
    // 096533  mov ecx, dword ptr [eax]
    X86_AT(c, 0x96533u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 096535  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x96535u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 096538  and si, 0x7ff
    X86_AT(c, 0x96538u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & 0x7FFu, 2)); }
    // 09653d  cmp si, 0x7ff
    X86_AT(c, 0x9653du);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x7FFu, 0, 2);
    // 096542  je 0x96589
    X86_AT(c, 0x96542u);
    if (x86_cc(c, 4)) { goto L_96589; }
    X86_TICK(c, 7);
    // 096544  and si, si
    X86_AT(c, 0x96544u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & (c.r[6] & 0xFFFFu), 2)); }
    // 096547  je 0x96593
    X86_AT(c, 0x96547u);
    if (x86_cc(c, 4)) { goto L_96593; }
    X86_TICK(c, 6);
    // 096549  mov byte ptr [eax + 0xb], 0
    X86_AT(c, 0x96549u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu)), 0x0u);
    // 09654d  sub si, 0x3ff
    X86_AT(c, 0x9654du);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_sub(c, v, 0x3FFu, 0, 2)); }
    // 096552  add si, 0x3fff
    X86_AT(c, 0x96552u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x3FFFu, 0, 2)); }
L_96557:
    X86_TICK(c, 9);
    // 096557  mov word ptr [eax + 8], si
    X86_AT(c, 0x96557u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)), (c.r[6] & 0xFFFFu));
    // 09655b  test edx, 0x80000000
    X86_AT(c, 0x9655bu);
    (void)x86_logic(c, c.r[2] & 0x80000000u, 4);
    // 096561  je 0x96569
    X86_AT(c, 0x96561u);
    if (x86_cc(c, 4)) { goto L_96569; }
    X86_TICK(c, 9);
    // 096563  mov byte ptr [eax + 0xa], 1
    X86_AT(c, 0x96563u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu)), 0x1u);
    // 096567  jmp 0x9656d
    X86_AT(c, 0x96567u);
    goto L_9656d;
L_96569:
    X86_TICK(c, 2);
    // 096569  mov byte ptr [eax + 0xa], 0
    X86_AT(c, 0x96569u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu)), 0x0u);
L_9656d:
    X86_TICK(c, 13);
    // 09656d  shld edx, ecx, 0xb
    X86_AT(c, 0x9656du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0xBu, 4, w); if (w) c.r[2] = r; }
    // 096571  shl ecx, 0xb
    X86_AT(c, 0x96571u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xBu, 4, w); if (w) c.r[1] = r; }
    // 096574  and si, si
    X86_AT(c, 0x96574u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & (c.r[6] & 0xFFFFu), 2)); }
    // 096577  je 0x9657f
    X86_AT(c, 0x96577u);
    if (x86_cc(c, 4)) { goto L_9657f; }
    X86_TICK(c, 2);
    // 096579  or edx, 0x80000000
    X86_AT(c, 0x96579u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | 0x80000000u, 4); }
L_9657f:
    X86_TICK(c, 22);
    // 09657f  mov dword ptr [eax + 4], edx
    X86_AT(c, 0x9657fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)), c.r[2]);
    // 096582  mov dword ptr [eax], ecx
    X86_AT(c, 0x96582u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), c.r[1]);
    // 096584  pop esi
    X86_AT(c, 0x96584u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 096585  pop ebp
    X86_AT(c, 0x96585u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 096586  ret 8
    X86_AT(c, 0x96586u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
L_96589:
    X86_TICK(c, 11);
    // 096589  mov si, 0x7fff
    X86_AT(c, 0x96589u);
    s16(c, 6, 0x7FFFu);
    // 09658d  mov byte ptr [eax + 0xb], 0
    X86_AT(c, 0x9658du);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu)), 0x0u);
    // 096591  jmp 0x96557
    X86_AT(c, 0x96591u);
    X86_POLL(c, 0x96557u); goto L_96557;
L_96593:
    X86_TICK(c, 9);
    // 096593  mov byte ptr [eax + 0xb], 1
    X86_AT(c, 0x96593u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu)), 0x1u);
    // 096597  jmp 0x96557
    X86_AT(c, 0x96597u);
    X86_POLL(c, 0x96557u); goto L_96557;
    x86_fault(c, 0x96524u, "ran off the end of a function");
}
void f_0009661c(X86Cpu& c) {
    X86_TICK(c, 27);
    // 09661c  push ebp
    X86_AT(c, 0x9661cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 09661d  mov ebp, esp
    X86_AT(c, 0x9661du);
    c.r[5] = c.r[4];
    // 09661f  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x9661fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 096622  mov ecx, eax
    X86_AT(c, 0x96622u);
    c.r[1] = c.r[0];
    // 096624  shl ecx, 1
    X86_AT(c, 0x96624u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 096626  shr ecx, 0x18
    X86_AT(c, 0x96626u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x18u, 4, w); if (w) c.r[1] = r; }
    // 096629  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x96629u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 09662c  cmp cl, 0xff
    X86_AT(c, 0x9662cu);
    (void)x86_sub(c, g8(c, 1), 0xFFu, 0, 1);
    // 09662f  je 0x96671
    X86_AT(c, 0x9662fu);
    if (x86_cc(c, 4)) { goto L_96671; }
    X86_TICK(c, 7);
    // 096631  and cl, cl
    X86_AT(c, 0x96631u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & g8(c, 1), 1)); }
    // 096633  je 0x9667b
    X86_AT(c, 0x96633u);
    if (x86_cc(c, 4)) { goto L_9667b; }
    X86_TICK(c, 6);
    // 096635  mov byte ptr [edx + 0xb], 0
    X86_AT(c, 0x96635u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xBu)), 0x0u);
    // 096639  sub cx, 0x7f
    X86_AT(c, 0x96639u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, 0x7Fu, 0, 2)); }
    // 09663d  add cx, 0x3fff
    X86_AT(c, 0x9663du);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x3FFFu, 0, 2)); }
L_96642:
    X86_TICK(c, 9);
    // 096642  mov word ptr [edx + 8], cx
    X86_AT(c, 0x96642u);
    wr16((c.sbase[3] + (uint32_t)(c.r[2] + 0x8u)), (c.r[1] & 0xFFFFu));
    // 096646  test eax, 0x80000000
    X86_AT(c, 0x96646u);
    (void)x86_logic(c, c.r[0] & 0x80000000u, 4);
    // 09664b  je 0x96653
    X86_AT(c, 0x9664bu);
    if (x86_cc(c, 4)) { goto L_96653; }
    X86_TICK(c, 9);
    // 09664d  mov byte ptr [edx + 0xa], 1
    X86_AT(c, 0x9664du);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xAu)), 0x1u);
    // 096651  jmp 0x96657
    X86_AT(c, 0x96651u);
    goto L_96657;
L_96653:
    X86_TICK(c, 2);
    // 096653  mov byte ptr [edx + 0xa], 0
    X86_AT(c, 0x96653u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xAu)), 0x0u);
L_96657:
    X86_TICK(c, 10);
    // 096657  shl eax, 8
    X86_AT(c, 0x96657u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 09665a  and cx, cx
    X86_AT(c, 0x9665au);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & (c.r[1] & 0xFFFFu), 2)); }
    // 09665d  je 0x96664
    X86_AT(c, 0x9665du);
    if (x86_cc(c, 4)) { goto L_96664; }
    X86_TICK(c, 2);
    // 09665f  or eax, 0x80000000
    X86_AT(c, 0x9665fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | 0x80000000u, 4); }
L_96664:
    X86_TICK(c, 18);
    // 096664  mov dword ptr [edx + 4], eax
    X86_AT(c, 0x96664u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)), c.r[0]);
    // 096667  mov dword ptr [edx], 0
    X86_AT(c, 0x96667u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), 0x0u);
    // 09666d  pop ebp
    X86_AT(c, 0x9666du);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 09666e  ret 8
    X86_AT(c, 0x9666eu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
L_96671:
    X86_TICK(c, 11);
    // 096671  mov cx, 0x7fff
    X86_AT(c, 0x96671u);
    s16(c, 1, 0x7FFFu);
    // 096675  mov byte ptr [edx + 0xb], 0
    X86_AT(c, 0x96675u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xBu)), 0x0u);
    // 096679  jmp 0x96642
    X86_AT(c, 0x96679u);
    X86_POLL(c, 0x96642u); goto L_96642;
L_9667b:
    X86_TICK(c, 9);
    // 09667b  mov byte ptr [edx + 0xb], 1
    X86_AT(c, 0x9667bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xBu)), 0x1u);
    // 09667f  jmp 0x96642
    X86_AT(c, 0x9667fu);
    X86_POLL(c, 0x96642u); goto L_96642;
    x86_fault(c, 0x9661cu, "ran off the end of a function");
}
void f_000966e4(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0966e4  push ebp
    X86_AT(c, 0x966e4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0966e5  mov ebp, esp
    X86_AT(c, 0x966e5u);
    c.r[5] = c.r[4];
    // 0966e7  push esi
    X86_AT(c, 0x966e7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0966e8  push edi
    X86_AT(c, 0x966e8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0966e9  push ebx
    X86_AT(c, 0x966e9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0966ea  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x966eau);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0966ed  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x966edu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0966f0  xor edx, edx
    X86_AT(c, 0x966f0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 0966f2  movzx ecx, word ptr [ebp + 0x10]
    X86_AT(c, 0x966f2u);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0966f6  shr ecx, 1
    X86_AT(c, 0x966f6u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 0966f8  clc 
    X86_AT(c, 0x966f8u);
    c.fl &= ~X86_CF;
L_966f9:
    X86_TICK(c, 24);
    // 0966f9  mov eax, dword ptr [edi + edx*4]
    X86_AT(c, 0x966f9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] * 4)));
    // 0966fc  adc dword ptr [esi + edx*4], eax
    X86_AT(c, 0x966fcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 4)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], c.fl & 1, 4)); }
    // 0966ff  inc edx
    X86_AT(c, 0x966ffu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 096700  loop 0x966f9
    X86_AT(c, 0x96700u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x966f9u); goto L_966f9; }
    X86_TICK(c, 31);
    // 096702  mov al, 0
    X86_AT(c, 0x96702u);
    s8(c, 0, 0x0u);
    // 096704  rcl al, 1
    X86_AT(c, 0x96704u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 096706  pop ebx
    X86_AT(c, 0x96706u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 096707  pop edi
    X86_AT(c, 0x96707u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096708  pop esi
    X86_AT(c, 0x96708u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 096709  pop ebp
    X86_AT(c, 0x96709u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 09670a  ret 0xc
    X86_AT(c, 0x9670au);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x966e4u, "ran off the end of a function");
}
void f_0009670d(X86Cpu& c) {
    X86_TICK(c, 28);
    // 09670d  push ebp
    X86_AT(c, 0x9670du);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 09670e  mov ebp, esp
    X86_AT(c, 0x9670eu);
    c.r[5] = c.r[4];
    // 096710  push esi
    X86_AT(c, 0x96710u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096711  push edi
    X86_AT(c, 0x96711u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096712  push ebx
    X86_AT(c, 0x96712u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 096713  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x96713u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 096716  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x96716u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 096719  xor edx, edx
    X86_AT(c, 0x96719u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 09671b  movzx ecx, word ptr [ebp + 0x10]
    X86_AT(c, 0x9671bu);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 09671f  clc 
    X86_AT(c, 0x9671fu);
    c.fl &= ~X86_CF;
L_96720:
    X86_TICK(c, 24);
    // 096720  mov ax, word ptr [edi + edx*2]
    X86_AT(c, 0x96720u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] * 2))));
    // 096724  sbb word ptr [esi + edx*2], ax
    X86_AT(c, 0x96724u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 2)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), c.fl & 1, 2)); }
    // 096728  inc edx
    X86_AT(c, 0x96728u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 096729  loop 0x96720
    X86_AT(c, 0x96729u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x96720u); goto L_96720; }
    X86_TICK(c, 31);
    // 09672b  mov al, 0
    X86_AT(c, 0x9672bu);
    s8(c, 0, 0x0u);
    // 09672d  rcl al, 1
    X86_AT(c, 0x9672du);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 09672f  pop ebx
    X86_AT(c, 0x9672fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 096730  pop edi
    X86_AT(c, 0x96730u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096731  pop esi
    X86_AT(c, 0x96731u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 096732  pop ebp
    X86_AT(c, 0x96732u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 096733  ret 0xc
    X86_AT(c, 0x96733u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x9670du, "ran off the end of a function");
}
void f_00096736(X86Cpu& c) {
    X86_TICK(c, 31);
    // 096736  push ebp
    X86_AT(c, 0x96736u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 096737  mov ebp, esp
    X86_AT(c, 0x96737u);
    c.r[5] = c.r[4];
    // 096739  push esi
    X86_AT(c, 0x96739u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09673a  push edi
    X86_AT(c, 0x9673au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09673b  push ebx
    X86_AT(c, 0x9673bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 09673c  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x9673cu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 09673f  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x9673fu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 096742  xor edx, edx
    X86_AT(c, 0x96742u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 096744  movzx ecx, word ptr [ebp + 0x10]
    X86_AT(c, 0x96744u);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 096748  shr ecx, 1
    X86_AT(c, 0x96748u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 09674a  clc 
    X86_AT(c, 0x9674au);
    c.fl &= ~X86_CF;
L_9674b:
    X86_TICK(c, 25);
    // 09674b  mov eax, dword ptr [edi + edx*4]
    X86_AT(c, 0x9674bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] * 4)));
    // 09674e  sbb eax, dword ptr [esi + edx*4]
    X86_AT(c, 0x9674eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 4))), c.fl & 1, 4); }
    // 096751  mov dword ptr [esi + edx*4], eax
    X86_AT(c, 0x96751u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 4)), c.r[0]);
    // 096754  inc edx
    X86_AT(c, 0x96754u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 096755  loop 0x9674b
    X86_AT(c, 0x96755u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x9674bu); goto L_9674b; }
    X86_TICK(c, 31);
    // 096757  mov al, 0
    X86_AT(c, 0x96757u);
    s8(c, 0, 0x0u);
    // 096759  rcl al, 1
    X86_AT(c, 0x96759u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 09675b  pop ebx
    X86_AT(c, 0x9675bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 09675c  pop edi
    X86_AT(c, 0x9675cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09675d  pop esi
    X86_AT(c, 0x9675du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 09675e  pop ebp
    X86_AT(c, 0x9675eu);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 09675f  ret 0xc
    X86_AT(c, 0x9675fu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x96736u, "ran off the end of a function");
}
void f_00096762(X86Cpu& c) {
    X86_TICK(c, 19);
    // 096762  push esi
    X86_AT(c, 0x96762u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096763  mov esi, dword ptr [esp + 8]
    X86_AT(c, 0x96763u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 096767  movzx ecx, word ptr [esp + 0xc]
    X86_AT(c, 0x96767u);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 09676c  shr ecx, 1
    X86_AT(c, 0x9676cu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 09676e  xor edx, edx
    X86_AT(c, 0x9676eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 096770  clc 
    X86_AT(c, 0x96770u);
    c.fl &= ~X86_CF;
L_96771:
    X86_TICK(c, 23);
    // 096771  mov eax, 0
    X86_AT(c, 0x96771u);
    c.r[0] = 0x0u;
    // 096776  sbb eax, dword ptr [esi + edx*4]
    X86_AT(c, 0x96776u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 4))), c.fl & 1, 4); }
    // 096779  mov dword ptr [esi + edx*4], eax
    X86_AT(c, 0x96779u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 4)), c.r[0]);
    // 09677c  inc edx
    X86_AT(c, 0x9677cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 09677d  loop 0x96771
    X86_AT(c, 0x9677du);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x96771u); goto L_96771; }
    X86_TICK(c, 19);
    // 09677f  mov al, 0
    X86_AT(c, 0x9677fu);
    s8(c, 0, 0x0u);
    // 096781  rcl al, 1
    X86_AT(c, 0x96781u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 096783  pop esi
    X86_AT(c, 0x96783u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 096784  ret 8
    X86_AT(c, 0x96784u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x96762u, "ran off the end of a function");
}
void f_00096787(X86Cpu& c) {
    X86_TICK(c, 18);
    // 096787  push edi
    X86_AT(c, 0x96787u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096788  push ebx
    X86_AT(c, 0x96788u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 096789  mov edi, dword ptr [esp + 0xc]
    X86_AT(c, 0x96789u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 09678d  xor eax, eax
    X86_AT(c, 0x9678du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 09678f  mov ebx, dword ptr [edi + 4]
    X86_AT(c, 0x9678fu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)));
    // 096792  mov edx, dword ptr [edi]
    X86_AT(c, 0x96792u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
L_96794:
    X86_TICK(c, 7);
    // 096794  and ebx, ebx
    X86_AT(c, 0x96794u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 096796  jne 0x967a3
    X86_AT(c, 0x96796u);
    if (x86_cc(c, 5)) { goto L_967a3; }
    X86_TICK(c, 13);
    // 096798  mov ebx, edx
    X86_AT(c, 0x96798u);
    c.r[3] = c.r[2];
    // 09679a  xor edx, edx
    X86_AT(c, 0x9679au);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 09679c  add eax, 0x20
    X86_AT(c, 0x9679cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x20u, 0, 4); }
    // 0967a1  jmp 0x96794
    X86_AT(c, 0x967a1u);
    X86_POLL(c, 0x96794u); goto L_96794;
L_967a3:
    X86_TICK(c, 44);
    // 0967a3  bsr ecx, ebx
    X86_AT(c, 0x967a3u);
    c.r[1] = x86_bsr(c, c.r[3], c.r[1]);
    // 0967a6  sub ecx, 0x1f
    X86_AT(c, 0x967a6u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x1Fu, 0, 4); }
    // 0967a9  neg ecx
    X86_AT(c, 0x967a9u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
    // 0967ab  shld ebx, edx, cl
    X86_AT(c, 0x967abu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[3] = r; }
    // 0967ae  shl edx, cl
    X86_AT(c, 0x967aeu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 0967b0  add eax, ecx
    X86_AT(c, 0x967b0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[1], 0, 4); }
    // 0967b2  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0x967b2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 0967b5  mov dword ptr [edi], edx
    X86_AT(c, 0x967b5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[2]);
    // 0967b7  pop ebx
    X86_AT(c, 0x967b7u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0967b8  pop edi
    X86_AT(c, 0x967b8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0967b9  ret 4
    X86_AT(c, 0x967b9u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x96787u, "ran off the end of a function");
}
void f_000967bc(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0967bc  mov edx, dword ptr [esp + 4]
    X86_AT(c, 0x967bcu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0967c0  shl dword ptr [edx], 1
    X86_AT(c, 0x967c0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2])); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 0967c2  rcl dword ptr [edx + 4], 1
    X86_AT(c, 0x967c2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 0967c5  mov al, 0
    X86_AT(c, 0x967c5u);
    s8(c, 0, 0x0u);
    // 0967c7  rcl al, 1
    X86_AT(c, 0x967c7u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 0967c9  ret 4
    X86_AT(c, 0x967c9u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x967bcu, "ran off the end of a function");
}
void f_000967d8(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0967d8  mov edx, dword ptr [esp + 4]
    X86_AT(c, 0x967d8u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0967dc  movzx ecx, word ptr [esp + 8]
    X86_AT(c, 0x967dcu);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0967e1  jecxz 0x96818
    X86_AT(c, 0x967e1u);
    if (c.r[1] == 0) { goto L_96818; }
    X86_TICK(c, 7);
    // 0967e3  cmp ecx, 0x20
    X86_AT(c, 0x967e3u);
    (void)x86_sub(c, c.r[1], 0x20u, 0, 4);
    // 0967e6  jl 0x967ff
    X86_AT(c, 0x967e6u);
    if (x86_cc(c, 12)) { goto L_967ff; }
    X86_TICK(c, 14);
    // 0967e8  mov eax, dword ptr [edx + 4]
    X86_AT(c, 0x967e8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)));
    // 0967eb  clc 
    X86_AT(c, 0x967ebu);
    c.fl &= ~X86_CF;
    // 0967ec  shr eax, cl
    X86_AT(c, 0x967ecu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 0967ee  jae 0x967f1
    X86_AT(c, 0x967eeu);
    if (x86_cc(c, 3)) { goto L_967f1; }
    X86_TICK(c, 2);
    // 0967f0  inc eax
    X86_AT(c, 0x967f0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
L_967f1:
    X86_TICK(c, 11);
    // 0967f1  mov dword ptr [edx], eax
    X86_AT(c, 0x967f1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0967f3  mov dword ptr [edx + 4], 0
    X86_AT(c, 0x967f3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)), 0x0u);
    // 0967fa  jmp 0x96818
    X86_AT(c, 0x967fau);
    goto L_96818;
L_967ff:
    X86_TICK(c, 31);
    // 0967ff  mov eax, dword ptr [edx + 4]
    X86_AT(c, 0x967ffu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)));
    // 096802  shrd dword ptr [edx], eax, cl
    X86_AT(c, 0x96802u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2])); uint32_t v = rd32(ea); bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) wr32(ea, r); }
    // 096805  pushf 
    X86_AT(c, 0x96805u);
    push16(c, c.fl & 0xFFFFu);
    // 096807  shr eax, cl
    X86_AT(c, 0x96807u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 096809  popf 
    X86_AT(c, 0x96809u);
    x86_popfd(c, 2);
    // 09680b  jae 0x96815
    X86_AT(c, 0x9680bu);
    if (x86_cc(c, 3)) { goto L_96815; }
    X86_TICK(c, 9);
    // 09680d  add dword ptr [edx], 1
    X86_AT(c, 0x9680du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x1u, 0, 4)); }
    // 096810  adc eax, 0
    X86_AT(c, 0x96810u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
L_96815:
    X86_TICK(c, 2);
    // 096815  mov dword ptr [edx + 4], eax
    X86_AT(c, 0x96815u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)), c.r[0]);
L_96818:
    X86_TICK(c, 10);
    // 096818  ret 8
    X86_AT(c, 0x96818u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x967d8u, "ran off the end of a function");
}
void f_0009681b(X86Cpu& c) {
    X86_TICK(c, 42);
    // 09681b  mov edx, dword ptr [esp + 4]
    X86_AT(c, 0x9681bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 09681f  shl dword ptr [edx], 1
    X86_AT(c, 0x9681fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2])); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 096821  rcl dword ptr [edx + 4], 1
    X86_AT(c, 0x96821u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 096824  rcl dword ptr [edx + 8], 1
    X86_AT(c, 0x96824u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0x8u)); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 096827  rcl dword ptr [edx + 0xc], 1
    X86_AT(c, 0x96827u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCu)); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 09682a  ret 4
    X86_AT(c, 0x9682au);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x9681bu, "ran off the end of a function");
}
void f_00096830(X86Cpu& c) {
    X86_TICK(c, 9);
    // 096830  push 0x19a0
    X86_AT(c, 0x96830u);
    { uint32_t v = 0x19A0u; push32(c, v); }
    // 096835  call 0x96d30
    X86_AT(c, 0x96835u);
    push32(c, 0x9683au); x86_call_known(c, 0x96d30u, f_00096d30); X86_RET(c, 0x9683au);
    X86_TICK(c, 13);
    // 09683a  mov ax, word ptr [0x8a89c]
    X86_AT(c, 0x9683au);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8A89Cu))));
    // 096840  push eax
    X86_AT(c, 0x96840u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 096841  call 0x95bb4
    X86_AT(c, 0x96841u);
    push32(c, 0x96846u); x86_call_known(c, 0x95bb4u, f_00095bb4); X86_RET(c, 0x96846u);
    X86_TICK(c, 9);
    // 096846  push 1
    X86_AT(c, 0x96846u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 096848  call 0x94c4c
    X86_AT(c, 0x96848u);
    push32(c, 0x9684du); x86_call_known(c, 0x94c4cu, f_00094c4c); X86_RET(c, 0x9684du);
    X86_TICK(c, 10);
    // 09684d  ret 
    X86_AT(c, 0x9684du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x96830u, "ran off the end of a function");
}
void f_00096850(X86Cpu& c) {
    X86_TICK(c, 13);
    // 096850  mov eax, 0x8a9d8
    X86_AT(c, 0x96850u);
    c.r[0] = 0x8A9D8u;
    // 096855  cmp eax, dword ptr [0x8a9e4]
    X86_AT(c, 0x96855u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x8A9E4u))), 0, 4);
    // 09685b  ja 0x96862
    X86_AT(c, 0x9685bu);
    if (x86_cc(c, 7)) { goto L_96862; }
    X86_TICK(c, 7);
    // 09685d  call 0x96830
    X86_AT(c, 0x9685du);
    push32(c, 0x96862u); x86_call_known(c, 0x96830u, f_00096830); X86_RET(c, 0x96862u);
L_96862:
    X86_TICK(c, 17);
    // 096862  add dword ptr [0x8a9e4], 0xc
    X86_AT(c, 0x96862u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A9E4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xCu, 0, 4)); }
    // 096869  ret 
    X86_AT(c, 0x96869u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x96850u, "ran off the end of a function");
}
void f_0009686c(X86Cpu& c) {
    X86_TICK(c, 17);
    // 09686c  add dword ptr [0x8a9e4], 0xfffffff4
    X86_AT(c, 0x9686cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A9E4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 096873  ret 
    X86_AT(c, 0x96873u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9686cu, "ran off the end of a function");
}
void f_00096874(X86Cpu& c) {
    X86_TICK(c, 41);
    // 096874  push ebp
    X86_AT(c, 0x96874u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 096875  mov ebp, esp
    X86_AT(c, 0x96875u);
    c.r[5] = c.r[4];
    // 096877  push esi
    X86_AT(c, 0x96877u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096878  push edi
    X86_AT(c, 0x96878u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096879  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x96879u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 09687c  mov ax, word ptr [edi]
    X86_AT(c, 0x9687cu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 09687f  or ax, word ptr [edi + 2]
    X86_AT(c, 0x9687fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))), 2)); }
    // 096883  or ax, word ptr [edi + 4]
    X86_AT(c, 0x96883u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 2)); }
    // 096887  or ax, word ptr [edi + 6]
    X86_AT(c, 0x96887u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))), 2)); }
    // 09688b  and ax, ax
    X86_AT(c, 0x9688bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 09688e  jne 0x9689f
    X86_AT(c, 0x9688eu);
    if (x86_cc(c, 5)) { goto L_9689f; }
    X86_TICK(c, 15);
    // 096890  sub eax, eax
    X86_AT(c, 0x96890u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 096892  mov word ptr [edi + 8], ax
    X86_AT(c, 0x96892u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 096896  mov byte ptr [edi + 0xb], 1
    X86_AT(c, 0x96896u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xBu)), 0x1u);
    // 09689a  mov byte ptr [edi + 0xa], al
    X86_AT(c, 0x9689au);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu)), g8(c, 0));
    // 09689d  jmp 0x968f4
    X86_AT(c, 0x9689du);
    goto L_968f4;
L_9689f:
    X86_TICK(c, 12);
    // 09689f  cmp word ptr [edi + 8], 0x7fff
    X86_AT(c, 0x9689fu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 0x7FFFu, 0, 2);
    // 0968a5  jb 0x968c3
    X86_AT(c, 0x968a5u);
    if (x86_cc(c, 2)) { goto L_968c3; }
    X86_TICK(c, 25);
    // 0968a7  mov ax, word ptr [0x8aa14]
    X86_AT(c, 0x968a7u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8AA14u))));
    // 0968ad  mov word ptr [edi + 8], ax
    X86_AT(c, 0x968adu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 0968b1  mov eax, dword ptr [0x8aa0c]
    X86_AT(c, 0x968b1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AA0Cu)));
    // 0968b6  mov edx, dword ptr [0x8aa10]
    X86_AT(c, 0x968b6u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8AA10u)));
    // 0968bc  mov dword ptr [edi], eax
    X86_AT(c, 0x968bcu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 0968be  mov dword ptr [edi + 4], edx
    X86_AT(c, 0x968beu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[2]);
    // 0968c1  jmp 0x968f4
    X86_AT(c, 0x968c1u);
    goto L_968f4;
L_968c3:
    X86_TICK(c, 12);
    // 0968c3  cmp byte ptr [edi + 7], 0x80
    X86_AT(c, 0x968c3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x7u))), 0x80u, 0, 1);
    // 0968c7  jae 0x968f4
    X86_AT(c, 0x968c7u);
    if (x86_cc(c, 3)) { goto L_968f4; }
    X86_TICK(c, 9);
    // 0968c9  push edi
    X86_AT(c, 0x968c9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0968ca  call 0x96787
    X86_AT(c, 0x968cau);
    push32(c, 0x968cfu); x86_call_known(c, 0x96787u, f_00096787); X86_RET(c, 0x968cfu);
    X86_TICK(c, 19);
    // 0968cf  xchg esi, eax
    X86_AT(c, 0x968cfu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0968d0  movsx eax, si
    X86_AT(c, 0x968d0u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[6] & 0xFFFFu);
    // 0968d3  movzx edx, word ptr [edi + 8]
    X86_AT(c, 0x968d3u);
    c.r[2] = rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)));
    // 0968d7  cmp edx, eax
    X86_AT(c, 0x968d7u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0968d9  jl 0x968e1
    X86_AT(c, 0x968d9u);
    if (x86_cc(c, 12)) { goto L_968e1; }
    X86_TICK(c, 14);
    // 0968db  sub word ptr [edi + 8], si
    X86_AT(c, 0x968dbu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 0968df  jmp 0x968f4
    X86_AT(c, 0x968dfu);
    goto L_968f4;
L_968e1:
    X86_TICK(c, 19);
    // 0968e1  mov eax, esi
    X86_AT(c, 0x968e1u);
    c.r[0] = c.r[6];
    // 0968e3  sub ax, word ptr [edi + 8]
    X86_AT(c, 0x968e3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 0, 2)); }
    // 0968e7  push eax
    X86_AT(c, 0x968e7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0968e8  push edi
    X86_AT(c, 0x968e8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0968e9  call 0x967d8
    X86_AT(c, 0x968e9u);
    push32(c, 0x968eeu); x86_call_known(c, 0x967d8u, f_000967d8); X86_RET(c, 0x968eeu);
    X86_TICK(c, 2);
    // 0968ee  mov word ptr [edi + 8], 0
    X86_AT(c, 0x968eeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), 0x0u);
L_968f4:
    X86_TICK(c, 24);
    // 0968f4  pop edi
    X86_AT(c, 0x968f4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0968f5  pop esi
    X86_AT(c, 0x968f5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0968f6  leave 
    X86_AT(c, 0x968f6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0968f7  ret 4
    X86_AT(c, 0x968f7u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x96874u, "ran off the end of a function");
}
void f_000968fc(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0968fc  enter 0x10, 0
    X86_AT(c, 0x968fcu);
    x86_enter(c, 0x10u, 0x0u, 4);
    // 096900  push ebx
    X86_AT(c, 0x96900u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 096901  push esi
    X86_AT(c, 0x96901u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096902  push edi
    X86_AT(c, 0x96902u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096903  cmp byte ptr [0x8a553], 0
    X86_AT(c, 0x96903u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A553u))), 0x0u, 0, 1);
    // 09690a  je 0x9692a
    X86_AT(c, 0x9690au);
    if (x86_cc(c, 4)) { goto L_9692a; }
    X86_TICK(c, 12);
    // 09690c  push dword ptr [0x8a9e4]
    X86_AT(c, 0x9690cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u))); push32(c, v); }
    // 096912  call 0x964be
    X86_AT(c, 0x96912u);
    push32(c, 0x96917u); x86_call_known(c, 0x964beu, f_000964be); X86_RET(c, 0x96917u);
    X86_TICK(c, 7);
    // 096917  call 0x96507
    X86_AT(c, 0x96917u);
    push32(c, 0x9691cu); x86_call_known(c, 0x96507u, f_00096507); X86_RET(c, 0x9691cu);
    X86_TICK(c, 9);
    // 09691c  mov word ptr [ebp - 2], ax
    X86_AT(c, 0x9691cu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), (c.r[0] & 0xFFFFu));
    // 096920  call 0x964c7
    X86_AT(c, 0x96920u);
    push32(c, 0x96925u); x86_call_known(c, 0x964c7u, f_000964c7); X86_RET(c, 0x96925u);
    X86_TICK(c, 7);
    // 096925  jmp 0x969b1
    X86_AT(c, 0x96925u);
    goto L_969b1;
L_9692a:
    X86_TICK(c, 13);
    // 09692a  mov eax, 0x8a948
    X86_AT(c, 0x9692au);
    c.r[0] = 0x8A948u;
    // 09692f  cmp eax, dword ptr [0x8a9e4]
    X86_AT(c, 0x9692fu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x8A9E4u))), 0, 4);
    // 096935  jne 0x9693b
    X86_AT(c, 0x96935u);
    if (x86_cc(c, 5)) { goto L_9693b; }
    X86_TICK(c, 9);
    // 096937  mov bl, 0x41
    X86_AT(c, 0x96937u);
    s8(c, 3, 0x41u);
    // 096939  jmp 0x96993
    X86_AT(c, 0x96939u);
    goto L_96993;
L_9693b:
    X86_TICK(c, 33);
    // 09693b  mov esi, dword ptr [0x8a9e4]
    X86_AT(c, 0x9693bu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u)));
    // 096941  lea edi, [ebp - 0x10]
    X86_AT(c, 0x96941u);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 096944  mov ecx, 3
    X86_AT(c, 0x96944u);
    c.r[1] = 0x3u;
    // 096949  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x96949u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 09694b  mov bl, byte ptr [ebp - 6]
    X86_AT(c, 0x9694bu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu))));
    // 09694e  add ebx, ebx
    X86_AT(c, 0x9694eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[3], 0, 4); }
    // 096950  cmp byte ptr [ebp - 5], 0
    X86_AT(c, 0x96950u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu))), 0x0u, 0, 1);
    // 096954  je 0x9695b
    X86_AT(c, 0x96954u);
    if (x86_cc(c, 4)) { goto L_9695b; }
    X86_TICK(c, 9);
    // 096956  or bl, 0x40
    X86_AT(c, 0x96956u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0x40u, 1)); }
    // 096959  jmp 0x96993
    X86_AT(c, 0x96959u);
    goto L_96993;
L_9695b:
    X86_TICK(c, 12);
    // 09695b  cmp word ptr [ebp - 8], 0x7fff
    X86_AT(c, 0x9695bu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x7FFFu, 0, 2);
    // 096961  jne 0x9697e
    X86_AT(c, 0x96961u);
    if (x86_cc(c, 5)) { goto L_9697e; }
    X86_TICK(c, 18);
    // 096963  lea esi, [ebp - 0x10]
    X86_AT(c, 0x96963u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 096966  mov edi, 0x8aa0c
    X86_AT(c, 0x96966u);
    c.r[7] = 0x8AA0Cu;
    // 09696b  mov ecx, 8
    X86_AT(c, 0x9696bu);
    c.r[1] = 0x8u;
    // 096970  cmpsb byte ptr [esi], byte ptr es:[edi]
    X86_AT(c, 0x96970u);
    x86_string(c, 1, 1, 243, 4, 3);
    // 096972  jne 0x96979
    X86_AT(c, 0x96972u);
    if (x86_cc(c, 5)) { goto L_96979; }
    X86_TICK(c, 9);
    // 096974  or bl, 5
    X86_AT(c, 0x96974u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0x5u, 1)); }
    // 096977  jmp 0x96993
    X86_AT(c, 0x96977u);
    goto L_96993;
L_96979:
    X86_TICK(c, 9);
    // 096979  or bl, 1
    X86_AT(c, 0x96979u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0x1u, 1)); }
    // 09697c  jmp 0x96993
    X86_AT(c, 0x9697cu);
    goto L_96993;
L_9697e:
    X86_TICK(c, 12);
    // 09697e  cmp word ptr [ebp - 8], 0
    X86_AT(c, 0x9697eu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x0u, 0, 2);
    // 096983  jne 0x9698a
    X86_AT(c, 0x96983u);
    if (x86_cc(c, 5)) { goto L_9698a; }
    X86_TICK(c, 9);
    // 096985  or bl, 0x44
    X86_AT(c, 0x96985u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0x44u, 1)); }
    // 096988  jmp 0x96993
    X86_AT(c, 0x96988u);
    goto L_96993;
L_9698a:
    X86_TICK(c, 12);
    // 09698a  cmp byte ptr [ebp - 9], 0x80
    X86_AT(c, 0x9698au);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))), 0x80u, 0, 1);
    // 09698e  jb 0x96993
    X86_AT(c, 0x9698eu);
    if (x86_cc(c, 2)) { goto L_96993; }
    X86_TICK(c, 2);
    // 096990  or bl, 4
    X86_AT(c, 0x96990u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0x4u, 1)); }
L_96993:
    X86_TICK(c, 27);
    // 096993  mov ax, word ptr [0x8a9e8]
    X86_AT(c, 0x96993u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8A9E8u))));
    // 096999  and ax, 0xb800
    X86_AT(c, 0x96999u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xB800u, 2)); }
    // 09699d  sub bh, bh
    X86_AT(c, 0x9699du);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_sub(c, v, g8(c, 7), 0, 1)); }
    // 09699f  mov edx, ebx
    X86_AT(c, 0x9699fu);
    c.r[2] = c.r[3];
    // 0969a1  shl edx, 8
    X86_AT(c, 0x969a1u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[2] = r; }
    // 0969a4  or dx, ax
    X86_AT(c, 0x969a4u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v | (c.r[0] & 0xFFFFu), 2)); }
    // 0969a7  mov word ptr [0x8a9e8], dx
    X86_AT(c, 0x969a7u);
    wr16((c.sbase[3] + (uint32_t)(0x8A9E8u)), (c.r[2] & 0xFFFFu));
    // 0969ae  xchg edx, eax
    X86_AT(c, 0x969aeu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0969af  jmp 0x969b5
    X86_AT(c, 0x969afu);
    goto L_969b5;
L_969b1:
    X86_TICK(c, 4);
    // 0969b1  mov ax, word ptr [ebp - 2]
    X86_AT(c, 0x969b1u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))));
L_969b5:
    X86_TICK(c, 28);
    // 0969b5  pop edi
    X86_AT(c, 0x969b5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0969b6  pop esi
    X86_AT(c, 0x969b6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0969b7  pop ebx
    X86_AT(c, 0x969b7u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0969b8  leave 
    X86_AT(c, 0x969b8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0969b9  ret 
    X86_AT(c, 0x969b9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x968fcu, "ran off the end of a function");
}
void f_00096ab4(X86Cpu& c) {
    X86_TICK(c, 24);
    // 096ab4  enter 0x2c, 0
    X86_AT(c, 0x96ab4u);
    x86_enter(c, 0x2Cu, 0x0u, 4);
    // 096ab8  push ebx
    X86_AT(c, 0x96ab8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 096ab9  push esi
    X86_AT(c, 0x96ab9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096aba  push edi
    X86_AT(c, 0x96abau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096abb  cmp byte ptr [0x8a553], 0
    X86_AT(c, 0x96abbu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A553u))), 0x0u, 0, 1);
    // 096ac2  je 0x96adc
    X86_AT(c, 0x96ac2u);
    if (x86_cc(c, 4)) { goto L_96adc; }
    X86_TICK(c, 12);
    // 096ac4  push dword ptr [0x8a9e4]
    X86_AT(c, 0x96ac4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u))); push32(c, v); }
    // 096aca  call 0x964be
    X86_AT(c, 0x96acau);
    push32(c, 0x96acfu); x86_call_known(c, 0x964beu, f_000964be); X86_RET(c, 0x96acfu);
    X86_TICK(c, 12);
    // 096acf  push dword ptr [ebp + 8]
    X86_AT(c, 0x96acfu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 096ad2  call 0x9650f
    X86_AT(c, 0x96ad2u);
    push32(c, 0x96ad7u); x86_call_known(c, 0x9650fu, f_0009650f); X86_RET(c, 0x96ad7u);
    X86_TICK(c, 7);
    // 096ad7  jmp 0x96c3d
    X86_AT(c, 0x96ad7u);
    goto L_96c3d;
L_96adc:
    X86_TICK(c, 35);
    // 096adc  mov esi, dword ptr [0x8a9e4]
    X86_AT(c, 0x96adcu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x8A9E4u)));
    // 096ae2  lea edi, [ebp - 0xc]
    X86_AT(c, 0x96ae2u);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 096ae5  mov ecx, 3
    X86_AT(c, 0x96ae5u);
    c.r[1] = 0x3u;
    // 096aea  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x96aeau);
    x86_string(c, 0, 4, 243, 4, 3);
    // 096aec  mov ax, word ptr [ebp - 4]
    X86_AT(c, 0x96aecu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))));
    // 096af0  sub ax, 0x3fff
    X86_AT(c, 0x96af0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x3FFFu, 0, 2)); }
    // 096af4  mov word ptr [ebp - 0x10], ax
    X86_AT(c, 0x96af4u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), (c.r[0] & 0xFFFFu));
    // 096af8  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0x96af8u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 096afc  je 0x96b07
    X86_AT(c, 0x96afcu);
    if (x86_cc(c, 4)) { goto L_96b07; }
    X86_TICK(c, 13);
    // 096afe  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x96afeu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 096b01  mov byte ptr [eax + 9], 0x80
    X86_AT(c, 0x96b01u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x9u)), 0x80u);
    // 096b05  jmp 0x96b0e
    X86_AT(c, 0x96b05u);
    goto L_96b0e;
L_96b07:
    X86_TICK(c, 6);
    // 096b07  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x96b07u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 096b0a  mov byte ptr [eax + 9], 0
    X86_AT(c, 0x96b0au);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x9u)), 0x0u);
L_96b0e:
    X86_TICK(c, 12);
    // 096b0e  cmp word ptr [ebp - 0x10], 0x3f
    X86_AT(c, 0x96b0eu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0x3Fu, 0, 2);
    // 096b13  jle 0x96b1b
    X86_AT(c, 0x96b13u);
    if (x86_cc(c, 14)) { goto L_96b1b; }
    X86_TICK(c, 9);
    // 096b15  mov byte ptr [ebp - 0xd], 0x99
    X86_AT(c, 0x96b15u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), 0x99u);
    // 096b19  jmp 0x96b1f
    X86_AT(c, 0x96b19u);
    goto L_96b1f;
L_96b1b:
    X86_TICK(c, 2);
    // 096b1b  mov byte ptr [ebp - 0xd], 0
    X86_AT(c, 0x96b1bu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), 0x0u);
L_96b1f:
    X86_TICK(c, 2);
    // 096b1f  mov word ptr [ebp - 0x12], 1
    X86_AT(c, 0x96b1fu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEEu)), 0x1u);
L_96b25:
    X86_TICK(c, 23);
    // 096b25  movzx eax, word ptr [ebp - 0x12]
    X86_AT(c, 0x96b25u);
    c.r[0] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEEu)));
    // 096b29  mov dl, byte ptr [ebp - 0xd]
    X86_AT(c, 0x96b29u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))));
    // 096b2c  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x96b2cu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 096b2f  mov byte ptr [ecx + eax*1 - 1], dl
    X86_AT(c, 0x96b2fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + c.r[0] + 0xFFFFFFFFu)), g8(c, 2));
    // 096b33  cmp ax, 9
    X86_AT(c, 0x96b33u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x9u, 0, 2);
    // 096b37  jae 0x96b3f
    X86_AT(c, 0x96b37u);
    if (x86_cc(c, 3)) { goto L_96b3f; }
    X86_TICK(c, 13);
    // 096b39  inc word ptr [ebp - 0x12]
    X86_AT(c, 0x96b39u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEEu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 096b3d  jmp 0x96b25
    X86_AT(c, 0x96b3du);
    X86_POLL(c, 0x96b25u); goto L_96b25;
L_96b3f:
    X86_TICK(c, 11);
    // 096b3f  mov ax, word ptr [ebp - 0x10]
    X86_AT(c, 0x96b3fu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))));
    // 096b43  and ax, ax
    X86_AT(c, 0x96b43u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 096b46  jl 0x96c3d
    X86_AT(c, 0x96b46u);
    if (x86_cc(c, 12)) { goto L_96c3d; }
    X86_TICK(c, 7);
    // 096b4c  cmp ax, 0x3f
    X86_AT(c, 0x96b4cu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x3Fu, 0, 2);
    // 096b50  jg 0x96c3d
    X86_AT(c, 0x96b50u);
    if (x86_cc(c, 15)) { goto L_96c3d; }
    X86_TICK(c, 17);
    // 096b56  mov dx, 0x3f
    X86_AT(c, 0x96b56u);
    s16(c, 2, 0x3Fu);
    // 096b5a  sub edx, eax
    X86_AT(c, 0x96b5au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 096b5c  push edx
    X86_AT(c, 0x96b5cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 096b5d  lea eax, [ebp - 0xc]
    X86_AT(c, 0x96b5du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 096b60  push eax
    X86_AT(c, 0x96b60u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 096b61  call 0x967d8
    X86_AT(c, 0x96b61u);
    push32(c, 0x96b66u); x86_call_known(c, 0x967d8u, f_000967d8); X86_RET(c, 0x96b66u);
    X86_TICK(c, 26);
    // 096b66  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0x96b66u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 096b69  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0x96b69u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 096b6c  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0x96b6cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 096b6f  mov dword ptr [ebp - 0x18], edx
    X86_AT(c, 0x96b6fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[2]);
    // 096b72  cmp dword ptr [ebp - 0x18], 0
    X86_AT(c, 0x96b72u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))), 0x0u, 0, 4);
    // 096b76  sete byte ptr [ebp - 0x26]
    X86_AT(c, 0x96b76u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDAu)), x86_cc(c, 4) ? 1u : 0u);
    // 096b7a  mov byte ptr [ebp - 0x25], 0
    X86_AT(c, 0x96b7au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu)), 0x0u);
L_96b7e:
    X86_TICK(c, 12);
    // 096b7e  cmp byte ptr [ebp - 0x26], 0
    X86_AT(c, 0x96b7eu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDAu))), 0x0u, 0, 1);
    // 096b82  je 0x96ba4
    X86_AT(c, 0x96b82u);
    if (x86_cc(c, 4)) { goto L_96ba4; }
    X86_TICK(c, 12);
    // 096b84  cmp dword ptr [ebp - 0x1c], 0
    X86_AT(c, 0x96b84u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))), 0x0u, 0, 4);
    // 096b88  je 0x96c3d
    X86_AT(c, 0x96b88u);
    if (x86_cc(c, 4)) { goto L_96c3d; }
    X86_TICK(c, 61);
    // 096b8e  mov eax, dword ptr [ebp - 0x1c]
    X86_AT(c, 0x96b8eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 096b91  sub edx, edx
    X86_AT(c, 0x96b91u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 096b93  mov ecx, 0xa
    X86_AT(c, 0x96b93u);
    c.r[1] = 0xAu;
    // 096b98  div ecx
    X86_AT(c, 0x96b98u);
    x86_div(c, c.r[1], 4, 0x96b98u);
    // 096b9a  mov dword ptr [ebp - 0x2c], eax
    X86_AT(c, 0x96b9au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), c.r[0]);
    // 096b9d  mov ebx, edx
    X86_AT(c, 0x96b9du);
    c.r[3] = c.r[2];
    // 096b9f  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0x96b9fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 096ba2  jmp 0x96c04
    X86_AT(c, 0x96ba2u);
    goto L_96c04;
L_96ba4:
    X86_TICK(c, 17);
    // 096ba4  mov eax, dword ptr [ebp - 0x1c]
    X86_AT(c, 0x96ba4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 096ba7  or eax, dword ptr [ebp - 0x18]
    X86_AT(c, 0x96ba7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))), 4); }
    // 096baa  and eax, eax
    X86_AT(c, 0x96baau);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 096bac  je 0x96c3d
    X86_AT(c, 0x96bacu);
    if (x86_cc(c, 4)) { goto L_96c3d; }
    X86_TICK(c, 4);
    // 096bb2  sub edi, edi
    X86_AT(c, 0x96bb2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 096bb4  mov si, 3
    X86_AT(c, 0x96bb4u);
    s16(c, 6, 0x3u);
L_96bb8:
    X86_TICK(c, 24);
    // 096bb8  movzx esi, si
    X86_AT(c, 0x96bb8u);
    c.r[6] = (c.r[6] & 0xFFFFu);
    // 096bbb  shl edi, 0x10
    X86_AT(c, 0x96bbbu);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[7] = r; }
    // 096bbe  movzx eax, word ptr [ebp + esi*2 - 0x1c]
    X86_AT(c, 0x96bbeu);
    c.r[0] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] * 2 + 0xFFFFFFE4u)));
    // 096bc3  or eax, edi
    X86_AT(c, 0x96bc3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[7], 4); }
    // 096bc5  xchg edi, eax
    X86_AT(c, 0x96bc5u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 096bc6  and edi, edi
    X86_AT(c, 0x96bc6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 096bc8  jne 0x96bd6
    X86_AT(c, 0x96bc8u);
    if (x86_cc(c, 5)) { goto L_96bd6; }
    X86_TICK(c, 13);
    // 096bca  sub ebx, ebx
    X86_AT(c, 0x96bcau);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 096bcc  sub bx, bx
    X86_AT(c, 0x96bccu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 096bcf  mov word ptr [ebp + esi*2 - 0x24], bx
    X86_AT(c, 0x96bcfu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] * 2 + 0xFFFFFFDCu)), (c.r[3] & 0xFFFFu));
    // 096bd4  jmp 0x96bf0
    X86_AT(c, 0x96bd4u);
    goto L_96bf0;
L_96bd6:
    X86_TICK(c, 57);
    // 096bd6  movzx esi, si
    X86_AT(c, 0x96bd6u);
    c.r[6] = (c.r[6] & 0xFFFFu);
    // 096bd9  mov eax, edi
    X86_AT(c, 0x96bd9u);
    c.r[0] = c.r[7];
    // 096bdb  sub edx, edx
    X86_AT(c, 0x96bdbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 096bdd  mov ecx, 0xa
    X86_AT(c, 0x96bddu);
    c.r[1] = 0xAu;
    // 096be2  div ecx
    X86_AT(c, 0x96be2u);
    x86_div(c, c.r[1], 4, 0x96be2u);
    // 096be4  mov dword ptr [ebp - 0x2c], eax
    X86_AT(c, 0x96be4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), c.r[0]);
    // 096be7  mov word ptr [ebp + esi*2 - 0x24], ax
    X86_AT(c, 0x96be7u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] * 2 + 0xFFFFFFDCu)), (c.r[0] & 0xFFFFu));
    // 096bec  mov edi, edx
    X86_AT(c, 0x96becu);
    c.r[7] = c.r[2];
    // 096bee  mov ebx, edi
    X86_AT(c, 0x96beeu);
    c.r[3] = c.r[7];
L_96bf0:
    X86_TICK(c, 7);
    // 096bf0  and si, si
    X86_AT(c, 0x96bf0u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & (c.r[6] & 0xFFFFu), 2)); }
    // 096bf3  jbe 0x96bf8
    X86_AT(c, 0x96bf3u);
    if (x86_cc(c, 6)) { goto L_96bf8; }
    X86_TICK(c, 9);
    // 096bf5  dec esi
    X86_AT(c, 0x96bf5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 096bf6  jmp 0x96bb8
    X86_AT(c, 0x96bf6u);
    X86_POLL(c, 0x96bb8u); goto L_96bb8;
L_96bf8:
    X86_TICK(c, 12);
    // 096bf8  mov eax, dword ptr [ebp - 0x24]
    X86_AT(c, 0x96bf8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)));
    // 096bfb  mov edx, dword ptr [ebp - 0x20]
    X86_AT(c, 0x96bfbu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)));
    // 096bfe  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0x96bfeu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 096c01  mov dword ptr [ebp - 0x18], edx
    X86_AT(c, 0x96c01u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[2]);
L_96c04:
    X86_TICK(c, 12);
    // 096c04  mov al, byte ptr [ebp - 0x25]
    X86_AT(c, 0x96c04u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu))));
    // 096c07  rcr al, 1
    X86_AT(c, 0x96c07u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 096c09  jb 0x96c1b
    X86_AT(c, 0x96c09u);
    if (x86_cc(c, 2)) { goto L_96c1b; }
    X86_TICK(c, 23);
    // 096c0b  mov al, byte ptr [ebp - 0x25]
    X86_AT(c, 0x96c0bu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu))));
    // 096c0e  shr al, 1
    X86_AT(c, 0x96c0eu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 096c10  movzx eax, al
    X86_AT(c, 0x96c10u);
    c.r[0] = g8(c, 0);
    // 096c13  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x96c13u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 096c16  mov byte ptr [edx + eax*1], bl
    X86_AT(c, 0x96c16u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + c.r[0])), g8(c, 3));
    // 096c19  jmp 0x96c2e
    X86_AT(c, 0x96c19u);
    goto L_96c2e;
L_96c1b:
    X86_TICK(c, 26);
    // 096c1b  mov al, byte ptr [ebp - 0x25]
    X86_AT(c, 0x96c1bu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu))));
    // 096c1e  shr al, 1
    X86_AT(c, 0x96c1eu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 096c20  movzx eax, al
    X86_AT(c, 0x96c20u);
    c.r[0] = g8(c, 0);
    // 096c23  mov edx, ebx
    X86_AT(c, 0x96c23u);
    c.r[2] = c.r[3];
    // 096c25  shl dl, 4
    X86_AT(c, 0x96c25u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 2, r); }
    // 096c28  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x96c28u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 096c2b  add byte ptr [ecx + eax*1], dl
    X86_AT(c, 0x96c2bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[1] + c.r[0])); uint32_t v = rd8(ea); wr8(ea, x86_add(c, v, g8(c, 2), 0, 1)); }
L_96c2e:
    X86_TICK(c, 11);
    // 096c2e  mov al, byte ptr [ebp - 0x25]
    X86_AT(c, 0x96c2eu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu))));
    // 096c31  cmp al, 0x11
    X86_AT(c, 0x96c31u);
    (void)x86_sub(c, g8(c, 0), 0x11u, 0, 1);
    // 096c33  jae 0x96c3d
    X86_AT(c, 0x96c33u);
    if (x86_cc(c, 3)) { goto L_96c3d; }
    X86_TICK(c, 13);
    // 096c35  inc byte ptr [ebp - 0x25]
    X86_AT(c, 0x96c35u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 096c38  jmp 0x96b7e
    X86_AT(c, 0x96c38u);
    X86_POLL(c, 0x96b7eu); goto L_96b7e;
L_96c3d:
    X86_TICK(c, 35);
    // 096c3d  add dword ptr [0x8a9e4], 0xfffffff4
    X86_AT(c, 0x96c3du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A9E4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 096c44  pop edi
    X86_AT(c, 0x96c44u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096c45  pop esi
    X86_AT(c, 0x96c45u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 096c46  pop ebx
    X86_AT(c, 0x96c46u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 096c47  leave 
    X86_AT(c, 0x96c47u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 096c48  ret 4
    X86_AT(c, 0x96c48u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x96ab4u, "ran off the end of a function");
}
void f_00096c4c(X86Cpu& c) {
    X86_TICK(c, 173);
    // 096c4c  push ebp
    X86_AT(c, 0x96c4cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 096c4d  mov ebp, esp
    X86_AT(c, 0x96c4du);
    c.r[5] = c.r[4];
    // 096c4f  push edi
    X86_AT(c, 0x96c4fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096c50  push ebx
    X86_AT(c, 0x96c50u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 096c51  xor ecx, ecx
    X86_AT(c, 0x96c51u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v ^ c.r[1], 4); }
    // 096c53  mov ebx, ecx
    X86_AT(c, 0x96c53u);
    c.r[3] = c.r[1];
    // 096c55  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x96c55u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 096c58  mul dword ptr [ebp + 0x14]
    X86_AT(c, 0x96c58u);
    x86_mul(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 4);
    // 096c5b  push eax
    X86_AT(c, 0x96c5bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 096c5c  mov edi, edx
    X86_AT(c, 0x96c5cu);
    c.r[7] = c.r[2];
    // 096c5e  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x96c5eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 096c61  mul dword ptr [ebp + 0x18]
    X86_AT(c, 0x96c61u);
    x86_mul(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 4);
    // 096c64  add edi, eax
    X86_AT(c, 0x96c64u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 096c66  adc ecx, edx
    X86_AT(c, 0x96c66u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[2], c.fl & 1, 4); }
    // 096c68  adc ebx, 0
    X86_AT(c, 0x96c68u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 096c6b  mov eax, dword ptr [ebp + 0x14]
    X86_AT(c, 0x96c6bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 096c6e  mul dword ptr [ebp + 0x10]
    X86_AT(c, 0x96c6eu);
    x86_mul(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 4);
    // 096c71  add edi, eax
    X86_AT(c, 0x96c71u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 096c73  adc ecx, edx
    X86_AT(c, 0x96c73u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[2], c.fl & 1, 4); }
    // 096c75  adc ebx, 0
    X86_AT(c, 0x96c75u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 096c78  mov eax, dword ptr [ebp + 0x18]
    X86_AT(c, 0x96c78u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 096c7b  mul dword ptr [ebp + 0x10]
    X86_AT(c, 0x96c7bu);
    x86_mul(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 4);
    // 096c7e  add ecx, eax
    X86_AT(c, 0x96c7eu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[0], 0, 4); }
    // 096c80  adc ebx, edx
    X86_AT(c, 0x96c80u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[2], c.fl & 1, 4); }
    // 096c82  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x96c82u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 096c85  mov dword ptr [edx + 0xc], ebx
    X86_AT(c, 0x96c85u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCu)), c.r[3]);
    // 096c88  mov dword ptr [edx + 8], ecx
    X86_AT(c, 0x96c88u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x8u)), c.r[1]);
    // 096c8b  mov dword ptr [edx + 4], edi
    X86_AT(c, 0x96c8bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)), c.r[7]);
    // 096c8e  pop dword ptr [edx]
    X86_AT(c, 0x96c8eu);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(c.r[2])), v); }
    // 096c90  pop ebx
    X86_AT(c, 0x96c90u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 096c91  pop edi
    X86_AT(c, 0x96c91u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096c92  pop ebp
    X86_AT(c, 0x96c92u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 096c93  ret 0x14
    X86_AT(c, 0x96c93u);
    c.eip = pop32(c); c.r[4] += 0x14u; return;
    x86_fault(c, 0x96c4cu, "ran off the end of a function");
}
void f_00096c98(X86Cpu& c) {
    X86_TICK(c, 34);
    // 096c98  push ebp
    X86_AT(c, 0x96c98u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 096c99  mov ebp, esp
    X86_AT(c, 0x96c99u);
    c.r[5] = c.r[4];
    // 096c9b  push esi
    X86_AT(c, 0x96c9bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 096c9c  push edi
    X86_AT(c, 0x96c9cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096c9d  push ebx
    X86_AT(c, 0x96c9du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 096c9e  sub ebx, ebx
    X86_AT(c, 0x96c9eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 096ca0  mov eax, ebx
    X86_AT(c, 0x96ca0u);
    c.r[0] = c.r[3];
    // 096ca2  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0x96ca2u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 096ca5  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x96ca5u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 096ca8  mov ecx, dword ptr [ebp + 0x18]
    X86_AT(c, 0x96ca8u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 096cab  mov edi, dword ptr [ebp + 0x14]
    X86_AT(c, 0x96cabu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 096cae  push ebp
    X86_AT(c, 0x96caeu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 096caf  xor ebp, ebp
    X86_AT(c, 0x96cafu);
    { uint32_t v = c.r[5]; c.r[5] = x86_logic(c, v ^ c.r[5], 4); }
L_96cb1:
    X86_TICK(c, 7);
    // 096cb1  cmp edx, ecx
    X86_AT(c, 0x96cb1u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 096cb3  ja 0x96cbb
    X86_AT(c, 0x96cb3u);
    if (x86_cc(c, 7)) { goto L_96cbb; }
    X86_TICK(c, 5);
    // 096cb5  jb 0x96cc6
    X86_AT(c, 0x96cb5u);
    if (x86_cc(c, 2)) { goto L_96cc6; }
    X86_TICK(c, 7);
    // 096cb7  cmp esi, edi
    X86_AT(c, 0x96cb7u);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 096cb9  jb 0x96cc6
    X86_AT(c, 0x96cb9u);
    if (x86_cc(c, 2)) { goto L_96cc6; }
L_96cbb:
    X86_TICK(c, 19);
    // 096cbb  sub esi, edi
    X86_AT(c, 0x96cbbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[7], 0, 4); }
    // 096cbd  sbb edx, ecx
    X86_AT(c, 0x96cbdu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], c.fl & 1, 4); }
    // 096cbf  stc 
    X86_AT(c, 0x96cbfu);
    c.fl |= X86_CF;
    // 096cc0  rcl eax, 1
    X86_AT(c, 0x96cc0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 096cc2  rcl ebx, 1
    X86_AT(c, 0x96cc2u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) c.r[3] = r; }
    // 096cc4  jmp 0x96cca
    X86_AT(c, 0x96cc4u);
    goto L_96cca;
L_96cc6:
    X86_TICK(c, 6);
    // 096cc6  shl eax, 1
    X86_AT(c, 0x96cc6u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 096cc8  rcl ebx, 1
    X86_AT(c, 0x96cc8u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) c.r[3] = r; }
L_96cca:
    X86_TICK(c, 7);
    // 096cca  test ebx, 0x80000000
    X86_AT(c, 0x96ccau);
    (void)x86_logic(c, c.r[3] & 0x80000000u, 4);
    // 096cd0  jne 0x96cdc
    X86_AT(c, 0x96cd0u);
    if (x86_cc(c, 5)) { goto L_96cdc; }
    X86_TICK(c, 7);
    // 096cd2  and edx, edx
    X86_AT(c, 0x96cd2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 096cd4  jne 0x96cf6
    X86_AT(c, 0x96cd4u);
    if (x86_cc(c, 5)) { goto L_96cf6; }
    X86_TICK(c, 7);
    // 096cd6  and esi, esi
    X86_AT(c, 0x96cd6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 096cd8  jne 0x96cf6
    X86_AT(c, 0x96cd8u);
    if (x86_cc(c, 5)) { goto L_96cf6; }
    X86_TICK(c, 7);
    // 096cda  jmp 0x96cff
    X86_AT(c, 0x96cdau);
    goto L_96cff;
L_96cdc:
    X86_TICK(c, 11);
    // 096cdc  shl esi, 1
    X86_AT(c, 0x96cdcu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 096cde  rcl edx, 1
    X86_AT(c, 0x96cdeu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) c.r[2] = r; }
    // 096ce0  jb 0x96cec
    X86_AT(c, 0x96ce0u);
    if (x86_cc(c, 2)) { goto L_96cec; }
    X86_TICK(c, 7);
    // 096ce2  cmp edx, ecx
    X86_AT(c, 0x96ce2u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 096ce4  ja 0x96cec
    X86_AT(c, 0x96ce4u);
    if (x86_cc(c, 7)) { goto L_96cec; }
    X86_TICK(c, 5);
    // 096ce6  jb 0x96d1b
    X86_AT(c, 0x96ce6u);
    if (x86_cc(c, 2)) { goto L_96d1b; }
    X86_TICK(c, 7);
    // 096ce8  cmp esi, edi
    X86_AT(c, 0x96ce8u);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 096cea  jb 0x96d1b
    X86_AT(c, 0x96ceau);
    if (x86_cc(c, 2)) { goto L_96d1b; }
L_96cec:
    X86_TICK(c, 11);
    // 096cec  add eax, 1
    X86_AT(c, 0x96cecu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x1u, 0, 4); }
    // 096cf1  adc ebx, 0
    X86_AT(c, 0x96cf1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 096cf4  jmp 0x96d1b
    X86_AT(c, 0x96cf4u);
    goto L_96d1b;
L_96cf6:
    X86_TICK(c, 13);
    // 096cf6  inc ebp
    X86_AT(c, 0x96cf6u);
    { uint32_t v = c.r[5]; c.r[5] = x86_inc(c, v, 4); }
    // 096cf7  shl esi, 1
    X86_AT(c, 0x96cf7u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 096cf9  rcl edx, 1
    X86_AT(c, 0x96cf9u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) c.r[2] = r; }
    // 096cfb  jb 0x96cbb
    X86_AT(c, 0x96cfbu);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x96cbbu); goto L_96cbb; }
    X86_TICK(c, 7);
    // 096cfd  jmp 0x96cb1
    X86_AT(c, 0x96cfdu);
    X86_POLL(c, 0x96cb1u); goto L_96cb1;
L_96cff:
    X86_TICK(c, 7);
    // 096cff  and ebx, ebx
    X86_AT(c, 0x96cffu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 096d01  jne 0x96d0c
    X86_AT(c, 0x96d01u);
    if (x86_cc(c, 5)) { goto L_96d0c; }
    X86_TICK(c, 13);
    // 096d03  add ebp, 0x20
    X86_AT(c, 0x96d03u);
    { uint32_t v = c.r[5]; c.r[5] = x86_add(c, v, 0x20u, 0, 4); }
    // 096d06  mov ebx, eax
    X86_AT(c, 0x96d06u);
    c.r[3] = c.r[0];
    // 096d08  xor eax, eax
    X86_AT(c, 0x96d08u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 096d0a  jmp 0x96cff
    X86_AT(c, 0x96d0au);
    X86_POLL(c, 0x96cffu); goto L_96cff;
L_96d0c:
    X86_TICK(c, 22);
    // 096d0c  bsr ecx, ebx
    X86_AT(c, 0x96d0cu);
    c.r[1] = x86_bsr(c, c.r[3], c.r[1]);
    // 096d0f  sub ecx, 0x1f
    X86_AT(c, 0x96d0fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x1Fu, 0, 4); }
    // 096d12  neg ecx
    X86_AT(c, 0x96d12u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
    // 096d14  shld ebx, eax, cl
    X86_AT(c, 0x96d14u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[3] = r; }
    // 096d17  shl eax, cl
    X86_AT(c, 0x96d17u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 096d19  add ebp, ecx
    X86_AT(c, 0x96d19u);
    { uint32_t v = c.r[5]; c.r[5] = x86_add(c, v, c.r[1], 0, 4); }
L_96d1b:
    X86_TICK(c, 44);
    // 096d1b  pop ecx
    X86_AT(c, 0x96d1bu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 096d1c  xchg ebp, ecx
    X86_AT(c, 0x96d1cu);
    { uint32_t t = c.r[5]; c.r[5] = c.r[1]; c.r[1] = t; }
    // 096d1e  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x96d1eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 096d21  mov dword ptr [edi], eax
    X86_AT(c, 0x96d21u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 096d23  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0x96d23u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 096d26  xchg ecx, eax
    X86_AT(c, 0x96d26u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 096d27  pop ebx
    X86_AT(c, 0x96d27u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 096d28  pop edi
    X86_AT(c, 0x96d28u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096d29  pop esi
    X86_AT(c, 0x96d29u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 096d2a  pop ebp
    X86_AT(c, 0x96d2au);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 096d2b  ret 0x14
    X86_AT(c, 0x96d2bu);
    c.eip = pop32(c); c.r[4] += 0x14u; return;
    x86_fault(c, 0x96c98u, "ran off the end of a function");
}
void f_00096d30(X86Cpu& c) {
    X86_TICK(c, 31);
    // 096d30  push ebp
    X86_AT(c, 0x96d30u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 096d31  mov ebp, esp
    X86_AT(c, 0x96d31u);
    c.r[5] = c.r[4];
    // 096d33  push edi
    X86_AT(c, 0x96d33u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 096d34  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x96d34u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 096d37  movzx eax, word ptr [edi]
    X86_AT(c, 0x96d37u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(c.r[7])));
    // 096d3a  push eax
    X86_AT(c, 0x96d3au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 096d3b  lea eax, [edi + 2]
    X86_AT(c, 0x96d3bu);
    c.r[0] = (uint32_t)(c.r[7] + 0x2u);
    // 096d3e  push eax
    X86_AT(c, 0x96d3eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 096d3f  push 2
    X86_AT(c, 0x96d3fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 096d41  call 0x94cac
    X86_AT(c, 0x96d41u);
    push32(c, 0x96d46u); x86_call_known(c, 0x94cacu, f_00094cac); X86_RET(c, 0x96d46u);
    X86_TICK(c, 19);
    // 096d46  movzx eax, word ptr [0x8a44c]
    X86_AT(c, 0x96d46u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0x8A44Cu)));
    // 096d4d  push eax
    X86_AT(c, 0x96d4du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 096d4e  push 0x8a44e
    X86_AT(c, 0x96d4eu);
    { uint32_t v = 0x8A44Eu; push32(c, v); }
    // 096d53  push 2
    X86_AT(c, 0x96d53u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 096d55  call 0x94cac
    X86_AT(c, 0x96d55u);
    push32(c, 0x96d5au); x86_call_known(c, 0x94cacu, f_00094cac); X86_RET(c, 0x96d5au);
    X86_TICK(c, 20);
    // 096d5a  pop edi
    X86_AT(c, 0x96d5au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 096d5b  leave 
    X86_AT(c, 0x96d5bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 096d5c  ret 4
    X86_AT(c, 0x96d5cu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x96d30u, "ran off the end of a function");
}
}
