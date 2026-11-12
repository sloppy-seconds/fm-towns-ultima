#include "p_game_funcs.h"
namespace p_game {
void f_000b8e08(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0b8e08  push ebp
    X86_AT(c, 0xb8e08u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b8e09  mov ebp, esp
    X86_AT(c, 0xb8e09u);
    c.r[5] = c.r[4];
    // 0b8e0b  push esi
    X86_AT(c, 0xb8e0bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b8e0c  push edi
    X86_AT(c, 0xb8e0cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b8e0d  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xb8e0du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0b8e10  mov ecx, 0x460fc
    X86_AT(c, 0xb8e10u);
    c.r[1] = 0x460FCu;
L_b8e15:
    X86_TICK(c, 11);
    // 0b8e15  mov al, byte ptr [edi]
    X86_AT(c, 0xb8e15u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0b8e17  and al, al
    X86_AT(c, 0xb8e17u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0b8e19  je 0xb9070
    X86_AT(c, 0xb8e19u);
    if (x86_cc(c, 4)) { goto L_b9070; }
    X86_TICK(c, 12);
    // 0b8e1f  movzx edx, al
    X86_AT(c, 0xb8e1fu);
    c.r[2] = g8(c, 0);
    // 0b8e22  sub edx, 0x20
    X86_AT(c, 0xb8e22u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x20u, 0, 4); }
    // 0b8e25  cmp edx, 0x3a
    X86_AT(c, 0xb8e25u);
    (void)x86_sub(c, c.r[2], 0x3Au, 0, 4);
    // 0b8e28  ja 0xb9060
    X86_AT(c, 0xb8e28u);
    if (x86_cc(c, 7)) { goto L_b9060; }
    X86_TICK(c, 7);
    // 0b8e2e  jmp dword ptr cs:[edx*4 + 0xb8e36]
    X86_AT(c, 0xb8e2eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xB8E36u)));
      switch (t) {
      case 0xb8f22u: goto L_b8f22;
      case 0xb8f2bu: goto L_b8f2b;
      case 0xb8f34u: goto L_b8f34;
      case 0xb8f3du: goto L_b8f3d;
      case 0xb8f46u: goto L_b8f46;
      case 0xb8f4fu: goto L_b8f4f;
      case 0xb8f58u: goto L_b8f58;
      case 0xb8f61u: goto L_b8f61;
      case 0xb8f6au: goto L_b8f6a;
      case 0xb8f73u: goto L_b8f73;
      case 0xb8f7cu: goto L_b8f7c;
      case 0xb8f85u: goto L_b8f85;
      case 0xb8f8eu: goto L_b8f8e;
      case 0xb8f97u: goto L_b8f97;
      case 0xb8fa0u: goto L_b8fa0;
      case 0xb8fa9u: goto L_b8fa9;
      case 0xb8fb2u: goto L_b8fb2;
      case 0xb8fbbu: goto L_b8fbb;
      case 0xb8fc4u: goto L_b8fc4;
      case 0xb8fcdu: goto L_b8fcd;
      case 0xb8fd6u: goto L_b8fd6;
      case 0xb8fdfu: goto L_b8fdf;
      case 0xb8fe8u: goto L_b8fe8;
      case 0xb8ff1u: goto L_b8ff1;
      case 0xb8ffau: goto L_b8ffa;
      case 0xb9003u: goto L_b9003;
      case 0xb900cu: goto L_b900c;
      case 0xb9012u: goto L_b9012;
      case 0xb9018u: goto L_b9018;
      case 0xb901eu: goto L_b901e;
      case 0xb9024u: goto L_b9024;
      case 0xb902au: goto L_b902a;
      case 0xb9030u: goto L_b9030;
      case 0xb9036u: goto L_b9036;
      case 0xb903cu: goto L_b903c;
      case 0xb9042u: goto L_b9042;
      case 0xb9048u: goto L_b9048;
      case 0xb904eu: goto L_b904e;
      case 0xb9054u: goto L_b9054;
      case 0xb905au: goto L_b905a;
      case 0xb9060u: goto L_b9060;
      default: x86_jump(c, t); return; } }
L_b8f22:
    X86_TICK(c, 9);
    // 0b8f22  mov si, 0x4681
    X86_AT(c, 0xb8f22u);
    s16(c, 6, 0x4681u);
    // 0b8f26  jmp 0xb9064
    X86_AT(c, 0xb8f26u);
    goto L_b9064;
L_b8f2b:
    X86_TICK(c, 9);
    // 0b8f2b  mov si, 0x75eb
    X86_AT(c, 0xb8f2bu);
    s16(c, 6, 0x75EBu);
    // 0b8f2f  jmp 0xb9064
    X86_AT(c, 0xb8f2fu);
    goto L_b9064;
L_b8f34:
    X86_TICK(c, 9);
    // 0b8f34  mov si, 0x74eb
    X86_AT(c, 0xb8f34u);
    s16(c, 6, 0x74EBu);
    // 0b8f38  jmp 0xb9064
    X86_AT(c, 0xb8f38u);
    goto L_b9064;
L_b8f3d:
    X86_TICK(c, 9);
    // 0b8f3d  mov si, 0x5e81
    X86_AT(c, 0xb8f3du);
    s16(c, 6, 0x5E81u);
    // 0b8f41  jmp 0xb9064
    X86_AT(c, 0xb8f41u);
    goto L_b9064;
L_b8f46:
    X86_TICK(c, 9);
    // 0b8f46  mov si, 0x80eb
    X86_AT(c, 0xb8f46u);
    s16(c, 6, 0x80EBu);
    // 0b8f4a  jmp 0xb9064
    X86_AT(c, 0xb8f4au);
    goto L_b9064;
L_b8f4f:
    X86_TICK(c, 9);
    // 0b8f4f  mov si, 0x76eb
    X86_AT(c, 0xb8f4fu);
    s16(c, 6, 0x76EBu);
    // 0b8f53  jmp 0xb9064
    X86_AT(c, 0xb8f53u);
    goto L_b9064;
L_b8f58:
    X86_TICK(c, 9);
    // 0b8f58  mov si, 0x77eb
    X86_AT(c, 0xb8f58u);
    s16(c, 6, 0x77EBu);
    // 0b8f5c  jmp 0xb9064
    X86_AT(c, 0xb8f5cu);
    goto L_b9064;
L_b8f61:
    X86_TICK(c, 9);
    // 0b8f61  mov si, 0x78eb
    X86_AT(c, 0xb8f61u);
    s16(c, 6, 0x78EBu);
    // 0b8f65  jmp 0xb9064
    X86_AT(c, 0xb8f65u);
    goto L_b9064;
L_b8f6a:
    X86_TICK(c, 9);
    // 0b8f6a  mov si, 0x79eb
    X86_AT(c, 0xb8f6au);
    s16(c, 6, 0x79EBu);
    // 0b8f6e  jmp 0xb9064
    X86_AT(c, 0xb8f6eu);
    goto L_b9064;
L_b8f73:
    X86_TICK(c, 9);
    // 0b8f73  mov si, 0x7aeb
    X86_AT(c, 0xb8f73u);
    s16(c, 6, 0x7AEBu);
    // 0b8f77  jmp 0xb9064
    X86_AT(c, 0xb8f77u);
    goto L_b9064;
L_b8f7c:
    X86_TICK(c, 9);
    // 0b8f7c  mov si, 0x7beb
    X86_AT(c, 0xb8f7cu);
    s16(c, 6, 0x7BEBu);
    // 0b8f80  jmp 0xb9064
    X86_AT(c, 0xb8f80u);
    goto L_b9064;
L_b8f85:
    X86_TICK(c, 9);
    // 0b8f85  mov si, 0x7ceb
    X86_AT(c, 0xb8f85u);
    s16(c, 6, 0x7CEBu);
    // 0b8f89  jmp 0xb9064
    X86_AT(c, 0xb8f89u);
    goto L_b9064;
L_b8f8e:
    X86_TICK(c, 9);
    // 0b8f8e  mov si, 0x7deb
    X86_AT(c, 0xb8f8eu);
    s16(c, 6, 0x7DEBu);
    // 0b8f92  jmp 0xb9064
    X86_AT(c, 0xb8f92u);
    goto L_b9064;
L_b8f97:
    X86_TICK(c, 9);
    // 0b8f97  mov si, 0x7eeb
    X86_AT(c, 0xb8f97u);
    s16(c, 6, 0x7EEBu);
    // 0b8f9b  jmp 0xb9064
    X86_AT(c, 0xb8f9bu);
    goto L_b9064;
L_b8fa0:
    X86_TICK(c, 9);
    // 0b8fa0  mov si, 0x40eb
    X86_AT(c, 0xb8fa0u);
    s16(c, 6, 0x40EBu);
    // 0b8fa4  jmp 0xb9064
    X86_AT(c, 0xb8fa4u);
    goto L_b9064;
L_b8fa9:
    X86_TICK(c, 9);
    // 0b8fa9  mov si, 0x41eb
    X86_AT(c, 0xb8fa9u);
    s16(c, 6, 0x41EBu);
    // 0b8fad  jmp 0xb9064
    X86_AT(c, 0xb8fadu);
    goto L_b9064;
L_b8fb2:
    X86_TICK(c, 9);
    // 0b8fb2  mov si, 0x42eb
    X86_AT(c, 0xb8fb2u);
    s16(c, 6, 0x42EBu);
    // 0b8fb6  jmp 0xb9064
    X86_AT(c, 0xb8fb6u);
    goto L_b9064;
L_b8fbb:
    X86_TICK(c, 9);
    // 0b8fbb  mov si, 0x43eb
    X86_AT(c, 0xb8fbbu);
    s16(c, 6, 0x43EBu);
    // 0b8fbf  jmp 0xb9064
    X86_AT(c, 0xb8fbfu);
    goto L_b9064;
L_b8fc4:
    X86_TICK(c, 9);
    // 0b8fc4  mov si, 0x44eb
    X86_AT(c, 0xb8fc4u);
    s16(c, 6, 0x44EBu);
    // 0b8fc8  jmp 0xb9064
    X86_AT(c, 0xb8fc8u);
    goto L_b9064;
L_b8fcd:
    X86_TICK(c, 9);
    // 0b8fcd  mov si, 0x45eb
    X86_AT(c, 0xb8fcdu);
    s16(c, 6, 0x45EBu);
    // 0b8fd1  jmp 0xb9064
    X86_AT(c, 0xb8fd1u);
    goto L_b9064;
L_b8fd6:
    X86_TICK(c, 9);
    // 0b8fd6  mov si, 0x46eb
    X86_AT(c, 0xb8fd6u);
    s16(c, 6, 0x46EBu);
    // 0b8fda  jmp 0xb9064
    X86_AT(c, 0xb8fdau);
    goto L_b9064;
L_b8fdf:
    X86_TICK(c, 9);
    // 0b8fdf  mov si, 0x47eb
    X86_AT(c, 0xb8fdfu);
    s16(c, 6, 0x47EBu);
    // 0b8fe3  jmp 0xb9064
    X86_AT(c, 0xb8fe3u);
    goto L_b9064;
L_b8fe8:
    X86_TICK(c, 9);
    // 0b8fe8  mov si, 0x48eb
    X86_AT(c, 0xb8fe8u);
    s16(c, 6, 0x48EBu);
    // 0b8fec  jmp 0xb9064
    X86_AT(c, 0xb8fecu);
    goto L_b9064;
L_b8ff1:
    X86_TICK(c, 9);
    // 0b8ff1  mov si, 0x49eb
    X86_AT(c, 0xb8ff1u);
    s16(c, 6, 0x49EBu);
    // 0b8ff5  jmp 0xb9064
    X86_AT(c, 0xb8ff5u);
    goto L_b9064;
L_b8ffa:
    X86_TICK(c, 9);
    // 0b8ffa  mov si, 0x4aeb
    X86_AT(c, 0xb8ffau);
    s16(c, 6, 0x4AEBu);
    // 0b8ffe  jmp 0xb9064
    X86_AT(c, 0xb8ffeu);
    goto L_b9064;
L_b9003:
    X86_TICK(c, 9);
    // 0b9003  mov si, 0x4beb
    X86_AT(c, 0xb9003u);
    s16(c, 6, 0x4BEBu);
    // 0b9007  jmp 0xb9064
    X86_AT(c, 0xb9007u);
    goto L_b9064;
L_b900c:
    X86_TICK(c, 9);
    // 0b900c  mov si, 0x4ceb
    X86_AT(c, 0xb900cu);
    s16(c, 6, 0x4CEBu);
    // 0b9010  jmp 0xb9064
    X86_AT(c, 0xb9010u);
    goto L_b9064;
L_b9012:
    X86_TICK(c, 9);
    // 0b9012  mov si, 0x4deb
    X86_AT(c, 0xb9012u);
    s16(c, 6, 0x4DEBu);
    // 0b9016  jmp 0xb9064
    X86_AT(c, 0xb9016u);
    goto L_b9064;
L_b9018:
    X86_TICK(c, 9);
    // 0b9018  mov si, 0x4eeb
    X86_AT(c, 0xb9018u);
    s16(c, 6, 0x4EEBu);
    // 0b901c  jmp 0xb9064
    X86_AT(c, 0xb901cu);
    goto L_b9064;
L_b901e:
    X86_TICK(c, 9);
    // 0b901e  mov si, 0x4feb
    X86_AT(c, 0xb901eu);
    s16(c, 6, 0x4FEBu);
    // 0b9022  jmp 0xb9064
    X86_AT(c, 0xb9022u);
    goto L_b9064;
L_b9024:
    X86_TICK(c, 9);
    // 0b9024  mov si, 0x50eb
    X86_AT(c, 0xb9024u);
    s16(c, 6, 0x50EBu);
    // 0b9028  jmp 0xb9064
    X86_AT(c, 0xb9028u);
    goto L_b9064;
L_b902a:
    X86_TICK(c, 9);
    // 0b902a  mov si, 0x51eb
    X86_AT(c, 0xb902au);
    s16(c, 6, 0x51EBu);
    // 0b902e  jmp 0xb9064
    X86_AT(c, 0xb902eu);
    goto L_b9064;
L_b9030:
    X86_TICK(c, 9);
    // 0b9030  mov si, 0x52eb
    X86_AT(c, 0xb9030u);
    s16(c, 6, 0x52EBu);
    // 0b9034  jmp 0xb9064
    X86_AT(c, 0xb9034u);
    goto L_b9064;
L_b9036:
    X86_TICK(c, 9);
    // 0b9036  mov si, 0x53eb
    X86_AT(c, 0xb9036u);
    s16(c, 6, 0x53EBu);
    // 0b903a  jmp 0xb9064
    X86_AT(c, 0xb903au);
    goto L_b9064;
L_b903c:
    X86_TICK(c, 9);
    // 0b903c  mov si, 0x54eb
    X86_AT(c, 0xb903cu);
    s16(c, 6, 0x54EBu);
    // 0b9040  jmp 0xb9064
    X86_AT(c, 0xb9040u);
    goto L_b9064;
L_b9042:
    X86_TICK(c, 9);
    // 0b9042  mov si, 0x55eb
    X86_AT(c, 0xb9042u);
    s16(c, 6, 0x55EBu);
    // 0b9046  jmp 0xb9064
    X86_AT(c, 0xb9046u);
    goto L_b9064;
L_b9048:
    X86_TICK(c, 9);
    // 0b9048  mov si, 0x56eb
    X86_AT(c, 0xb9048u);
    s16(c, 6, 0x56EBu);
    // 0b904c  jmp 0xb9064
    X86_AT(c, 0xb904cu);
    goto L_b9064;
L_b904e:
    X86_TICK(c, 9);
    // 0b904e  mov si, 0x57eb
    X86_AT(c, 0xb904eu);
    s16(c, 6, 0x57EBu);
    // 0b9052  jmp 0xb9064
    X86_AT(c, 0xb9052u);
    goto L_b9064;
L_b9054:
    X86_TICK(c, 9);
    // 0b9054  mov si, 0x58eb
    X86_AT(c, 0xb9054u);
    s16(c, 6, 0x58EBu);
    // 0b9058  jmp 0xb9064
    X86_AT(c, 0xb9058u);
    goto L_b9064;
L_b905a:
    X86_TICK(c, 9);
    // 0b905a  mov si, 0x59eb
    X86_AT(c, 0xb905au);
    s16(c, 6, 0x59EBu);
    // 0b905e  jmp 0xb9064
    X86_AT(c, 0xb905eu);
    goto L_b9064;
L_b9060:
    X86_TICK(c, 2);
    // 0b9060  mov si, 0x4081
    X86_AT(c, 0xb9060u);
    s16(c, 6, 0x4081u);
L_b9064:
    X86_TICK(c, 13);
    // 0b9064  mov word ptr [ecx], si
    X86_AT(c, 0xb9064u);
    wr16((c.sbase[3] + (uint32_t)(c.r[1])), (c.r[6] & 0xFFFFu));
    // 0b9067  inc edi
    X86_AT(c, 0xb9067u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0b9068  add ecx, 2
    X86_AT(c, 0xb9068u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
    // 0b906b  jmp 0xb8e15
    X86_AT(c, 0xb906bu);
    X86_POLL(c, 0xb8e15u); goto L_b8e15;
L_b9070:
    X86_TICK(c, 28);
    // 0b9070  mov word ptr [ecx], 0
    X86_AT(c, 0xb9070u);
    wr16((c.sbase[3] + (uint32_t)(c.r[1])), 0x0u);
    // 0b9075  mov eax, 0x460fc
    X86_AT(c, 0xb9075u);
    c.r[0] = 0x460FCu;
    // 0b907a  pop edi
    X86_AT(c, 0xb907au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b907b  pop esi
    X86_AT(c, 0xb907bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b907c  leave 
    X86_AT(c, 0xb907cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b907d  ret 
    X86_AT(c, 0xb907du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb8e08u, "ran off the end of a function");
}
void f_000b9064(X86Cpu& c) {
    goto L_b9064;
L_b8e15:
    X86_TICK(c, 11);
    // 0b8e15  mov al, byte ptr [edi]
    X86_AT(c, 0xb8e15u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0b8e17  and al, al
    X86_AT(c, 0xb8e17u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0b8e19  je 0xb9070
    X86_AT(c, 0xb8e19u);
    if (x86_cc(c, 4)) { goto L_b9070; }
    X86_TICK(c, 12);
    // 0b8e1f  movzx edx, al
    X86_AT(c, 0xb8e1fu);
    c.r[2] = g8(c, 0);
    // 0b8e22  sub edx, 0x20
    X86_AT(c, 0xb8e22u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x20u, 0, 4); }
    // 0b8e25  cmp edx, 0x3a
    X86_AT(c, 0xb8e25u);
    (void)x86_sub(c, c.r[2], 0x3Au, 0, 4);
    // 0b8e28  ja 0xb9060
    X86_AT(c, 0xb8e28u);
    if (x86_cc(c, 7)) { goto L_b9060; }
    X86_TICK(c, 7);
    // 0b8e2e  jmp dword ptr cs:[edx*4 + 0xb8e36]
    X86_AT(c, 0xb8e2eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xB8E36u)));
      switch (t) {
      case 0xb8f22u: goto L_b8f22;
      case 0xb8f2bu: goto L_b8f2b;
      case 0xb8f34u: goto L_b8f34;
      case 0xb8f3du: goto L_b8f3d;
      case 0xb8f46u: goto L_b8f46;
      case 0xb8f4fu: goto L_b8f4f;
      case 0xb8f58u: goto L_b8f58;
      case 0xb8f61u: goto L_b8f61;
      case 0xb8f6au: goto L_b8f6a;
      case 0xb8f73u: goto L_b8f73;
      case 0xb8f7cu: goto L_b8f7c;
      case 0xb8f85u: goto L_b8f85;
      case 0xb8f8eu: goto L_b8f8e;
      case 0xb8f97u: goto L_b8f97;
      case 0xb8fa0u: goto L_b8fa0;
      case 0xb8fa9u: goto L_b8fa9;
      case 0xb8fb2u: goto L_b8fb2;
      case 0xb8fbbu: goto L_b8fbb;
      case 0xb8fc4u: goto L_b8fc4;
      case 0xb8fcdu: goto L_b8fcd;
      case 0xb8fd6u: goto L_b8fd6;
      case 0xb8fdfu: goto L_b8fdf;
      case 0xb8fe8u: goto L_b8fe8;
      case 0xb8ff1u: goto L_b8ff1;
      case 0xb8ffau: goto L_b8ffa;
      case 0xb9003u: goto L_b9003;
      case 0xb900cu: goto L_b900c;
      case 0xb9012u: goto L_b9012;
      case 0xb9018u: goto L_b9018;
      case 0xb901eu: goto L_b901e;
      case 0xb9024u: goto L_b9024;
      case 0xb902au: goto L_b902a;
      case 0xb9030u: goto L_b9030;
      case 0xb9036u: goto L_b9036;
      case 0xb903cu: goto L_b903c;
      case 0xb9042u: goto L_b9042;
      case 0xb9048u: goto L_b9048;
      case 0xb904eu: goto L_b904e;
      case 0xb9054u: goto L_b9054;
      case 0xb905au: goto L_b905a;
      case 0xb9060u: goto L_b9060;
      default: x86_jump(c, t); return; } }
L_b8f22:
    X86_TICK(c, 9);
    // 0b8f22  mov si, 0x4681
    X86_AT(c, 0xb8f22u);
    s16(c, 6, 0x4681u);
    // 0b8f26  jmp 0xb9064
    X86_AT(c, 0xb8f26u);
    goto L_b9064;
L_b8f2b:
    X86_TICK(c, 9);
    // 0b8f2b  mov si, 0x75eb
    X86_AT(c, 0xb8f2bu);
    s16(c, 6, 0x75EBu);
    // 0b8f2f  jmp 0xb9064
    X86_AT(c, 0xb8f2fu);
    goto L_b9064;
L_b8f34:
    X86_TICK(c, 9);
    // 0b8f34  mov si, 0x74eb
    X86_AT(c, 0xb8f34u);
    s16(c, 6, 0x74EBu);
    // 0b8f38  jmp 0xb9064
    X86_AT(c, 0xb8f38u);
    goto L_b9064;
L_b8f3d:
    X86_TICK(c, 9);
    // 0b8f3d  mov si, 0x5e81
    X86_AT(c, 0xb8f3du);
    s16(c, 6, 0x5E81u);
    // 0b8f41  jmp 0xb9064
    X86_AT(c, 0xb8f41u);
    goto L_b9064;
L_b8f46:
    X86_TICK(c, 9);
    // 0b8f46  mov si, 0x80eb
    X86_AT(c, 0xb8f46u);
    s16(c, 6, 0x80EBu);
    // 0b8f4a  jmp 0xb9064
    X86_AT(c, 0xb8f4au);
    goto L_b9064;
L_b8f4f:
    X86_TICK(c, 9);
    // 0b8f4f  mov si, 0x76eb
    X86_AT(c, 0xb8f4fu);
    s16(c, 6, 0x76EBu);
    // 0b8f53  jmp 0xb9064
    X86_AT(c, 0xb8f53u);
    goto L_b9064;
L_b8f58:
    X86_TICK(c, 9);
    // 0b8f58  mov si, 0x77eb
    X86_AT(c, 0xb8f58u);
    s16(c, 6, 0x77EBu);
    // 0b8f5c  jmp 0xb9064
    X86_AT(c, 0xb8f5cu);
    goto L_b9064;
L_b8f61:
    X86_TICK(c, 9);
    // 0b8f61  mov si, 0x78eb
    X86_AT(c, 0xb8f61u);
    s16(c, 6, 0x78EBu);
    // 0b8f65  jmp 0xb9064
    X86_AT(c, 0xb8f65u);
    goto L_b9064;
L_b8f6a:
    X86_TICK(c, 9);
    // 0b8f6a  mov si, 0x79eb
    X86_AT(c, 0xb8f6au);
    s16(c, 6, 0x79EBu);
    // 0b8f6e  jmp 0xb9064
    X86_AT(c, 0xb8f6eu);
    goto L_b9064;
L_b8f73:
    X86_TICK(c, 9);
    // 0b8f73  mov si, 0x7aeb
    X86_AT(c, 0xb8f73u);
    s16(c, 6, 0x7AEBu);
    // 0b8f77  jmp 0xb9064
    X86_AT(c, 0xb8f77u);
    goto L_b9064;
L_b8f7c:
    X86_TICK(c, 9);
    // 0b8f7c  mov si, 0x7beb
    X86_AT(c, 0xb8f7cu);
    s16(c, 6, 0x7BEBu);
    // 0b8f80  jmp 0xb9064
    X86_AT(c, 0xb8f80u);
    goto L_b9064;
L_b8f85:
    X86_TICK(c, 9);
    // 0b8f85  mov si, 0x7ceb
    X86_AT(c, 0xb8f85u);
    s16(c, 6, 0x7CEBu);
    // 0b8f89  jmp 0xb9064
    X86_AT(c, 0xb8f89u);
    goto L_b9064;
L_b8f8e:
    X86_TICK(c, 9);
    // 0b8f8e  mov si, 0x7deb
    X86_AT(c, 0xb8f8eu);
    s16(c, 6, 0x7DEBu);
    // 0b8f92  jmp 0xb9064
    X86_AT(c, 0xb8f92u);
    goto L_b9064;
L_b8f97:
    X86_TICK(c, 9);
    // 0b8f97  mov si, 0x7eeb
    X86_AT(c, 0xb8f97u);
    s16(c, 6, 0x7EEBu);
    // 0b8f9b  jmp 0xb9064
    X86_AT(c, 0xb8f9bu);
    goto L_b9064;
L_b8fa0:
    X86_TICK(c, 9);
    // 0b8fa0  mov si, 0x40eb
    X86_AT(c, 0xb8fa0u);
    s16(c, 6, 0x40EBu);
    // 0b8fa4  jmp 0xb9064
    X86_AT(c, 0xb8fa4u);
    goto L_b9064;
L_b8fa9:
    X86_TICK(c, 9);
    // 0b8fa9  mov si, 0x41eb
    X86_AT(c, 0xb8fa9u);
    s16(c, 6, 0x41EBu);
    // 0b8fad  jmp 0xb9064
    X86_AT(c, 0xb8fadu);
    goto L_b9064;
L_b8fb2:
    X86_TICK(c, 9);
    // 0b8fb2  mov si, 0x42eb
    X86_AT(c, 0xb8fb2u);
    s16(c, 6, 0x42EBu);
    // 0b8fb6  jmp 0xb9064
    X86_AT(c, 0xb8fb6u);
    goto L_b9064;
L_b8fbb:
    X86_TICK(c, 9);
    // 0b8fbb  mov si, 0x43eb
    X86_AT(c, 0xb8fbbu);
    s16(c, 6, 0x43EBu);
    // 0b8fbf  jmp 0xb9064
    X86_AT(c, 0xb8fbfu);
    goto L_b9064;
L_b8fc4:
    X86_TICK(c, 9);
    // 0b8fc4  mov si, 0x44eb
    X86_AT(c, 0xb8fc4u);
    s16(c, 6, 0x44EBu);
    // 0b8fc8  jmp 0xb9064
    X86_AT(c, 0xb8fc8u);
    goto L_b9064;
L_b8fcd:
    X86_TICK(c, 9);
    // 0b8fcd  mov si, 0x45eb
    X86_AT(c, 0xb8fcdu);
    s16(c, 6, 0x45EBu);
    // 0b8fd1  jmp 0xb9064
    X86_AT(c, 0xb8fd1u);
    goto L_b9064;
L_b8fd6:
    X86_TICK(c, 9);
    // 0b8fd6  mov si, 0x46eb
    X86_AT(c, 0xb8fd6u);
    s16(c, 6, 0x46EBu);
    // 0b8fda  jmp 0xb9064
    X86_AT(c, 0xb8fdau);
    goto L_b9064;
L_b8fdf:
    X86_TICK(c, 9);
    // 0b8fdf  mov si, 0x47eb
    X86_AT(c, 0xb8fdfu);
    s16(c, 6, 0x47EBu);
    // 0b8fe3  jmp 0xb9064
    X86_AT(c, 0xb8fe3u);
    goto L_b9064;
L_b8fe8:
    X86_TICK(c, 9);
    // 0b8fe8  mov si, 0x48eb
    X86_AT(c, 0xb8fe8u);
    s16(c, 6, 0x48EBu);
    // 0b8fec  jmp 0xb9064
    X86_AT(c, 0xb8fecu);
    goto L_b9064;
L_b8ff1:
    X86_TICK(c, 9);
    // 0b8ff1  mov si, 0x49eb
    X86_AT(c, 0xb8ff1u);
    s16(c, 6, 0x49EBu);
    // 0b8ff5  jmp 0xb9064
    X86_AT(c, 0xb8ff5u);
    goto L_b9064;
L_b8ffa:
    X86_TICK(c, 9);
    // 0b8ffa  mov si, 0x4aeb
    X86_AT(c, 0xb8ffau);
    s16(c, 6, 0x4AEBu);
    // 0b8ffe  jmp 0xb9064
    X86_AT(c, 0xb8ffeu);
    goto L_b9064;
L_b9003:
    X86_TICK(c, 9);
    // 0b9003  mov si, 0x4beb
    X86_AT(c, 0xb9003u);
    s16(c, 6, 0x4BEBu);
    // 0b9007  jmp 0xb9064
    X86_AT(c, 0xb9007u);
    goto L_b9064;
L_b900c:
    X86_TICK(c, 9);
    // 0b900c  mov si, 0x4ceb
    X86_AT(c, 0xb900cu);
    s16(c, 6, 0x4CEBu);
    // 0b9010  jmp 0xb9064
    X86_AT(c, 0xb9010u);
    goto L_b9064;
L_b9012:
    X86_TICK(c, 9);
    // 0b9012  mov si, 0x4deb
    X86_AT(c, 0xb9012u);
    s16(c, 6, 0x4DEBu);
    // 0b9016  jmp 0xb9064
    X86_AT(c, 0xb9016u);
    goto L_b9064;
L_b9018:
    X86_TICK(c, 9);
    // 0b9018  mov si, 0x4eeb
    X86_AT(c, 0xb9018u);
    s16(c, 6, 0x4EEBu);
    // 0b901c  jmp 0xb9064
    X86_AT(c, 0xb901cu);
    goto L_b9064;
L_b901e:
    X86_TICK(c, 9);
    // 0b901e  mov si, 0x4feb
    X86_AT(c, 0xb901eu);
    s16(c, 6, 0x4FEBu);
    // 0b9022  jmp 0xb9064
    X86_AT(c, 0xb9022u);
    goto L_b9064;
L_b9024:
    X86_TICK(c, 9);
    // 0b9024  mov si, 0x50eb
    X86_AT(c, 0xb9024u);
    s16(c, 6, 0x50EBu);
    // 0b9028  jmp 0xb9064
    X86_AT(c, 0xb9028u);
    goto L_b9064;
L_b902a:
    X86_TICK(c, 9);
    // 0b902a  mov si, 0x51eb
    X86_AT(c, 0xb902au);
    s16(c, 6, 0x51EBu);
    // 0b902e  jmp 0xb9064
    X86_AT(c, 0xb902eu);
    goto L_b9064;
L_b9030:
    X86_TICK(c, 9);
    // 0b9030  mov si, 0x52eb
    X86_AT(c, 0xb9030u);
    s16(c, 6, 0x52EBu);
    // 0b9034  jmp 0xb9064
    X86_AT(c, 0xb9034u);
    goto L_b9064;
L_b9036:
    X86_TICK(c, 9);
    // 0b9036  mov si, 0x53eb
    X86_AT(c, 0xb9036u);
    s16(c, 6, 0x53EBu);
    // 0b903a  jmp 0xb9064
    X86_AT(c, 0xb903au);
    goto L_b9064;
L_b903c:
    X86_TICK(c, 9);
    // 0b903c  mov si, 0x54eb
    X86_AT(c, 0xb903cu);
    s16(c, 6, 0x54EBu);
    // 0b9040  jmp 0xb9064
    X86_AT(c, 0xb9040u);
    goto L_b9064;
L_b9042:
    X86_TICK(c, 9);
    // 0b9042  mov si, 0x55eb
    X86_AT(c, 0xb9042u);
    s16(c, 6, 0x55EBu);
    // 0b9046  jmp 0xb9064
    X86_AT(c, 0xb9046u);
    goto L_b9064;
L_b9048:
    X86_TICK(c, 9);
    // 0b9048  mov si, 0x56eb
    X86_AT(c, 0xb9048u);
    s16(c, 6, 0x56EBu);
    // 0b904c  jmp 0xb9064
    X86_AT(c, 0xb904cu);
    goto L_b9064;
L_b904e:
    X86_TICK(c, 9);
    // 0b904e  mov si, 0x57eb
    X86_AT(c, 0xb904eu);
    s16(c, 6, 0x57EBu);
    // 0b9052  jmp 0xb9064
    X86_AT(c, 0xb9052u);
    goto L_b9064;
L_b9054:
    X86_TICK(c, 9);
    // 0b9054  mov si, 0x58eb
    X86_AT(c, 0xb9054u);
    s16(c, 6, 0x58EBu);
    // 0b9058  jmp 0xb9064
    X86_AT(c, 0xb9058u);
    goto L_b9064;
L_b905a:
    X86_TICK(c, 9);
    // 0b905a  mov si, 0x59eb
    X86_AT(c, 0xb905au);
    s16(c, 6, 0x59EBu);
    // 0b905e  jmp 0xb9064
    X86_AT(c, 0xb905eu);
    goto L_b9064;
L_b9060:
    X86_TICK(c, 2);
    // 0b9060  mov si, 0x4081
    X86_AT(c, 0xb9060u);
    s16(c, 6, 0x4081u);
L_b9064:
    X86_TICK(c, 13);
    // 0b9064  mov word ptr [ecx], si
    X86_AT(c, 0xb9064u);
    wr16((c.sbase[3] + (uint32_t)(c.r[1])), (c.r[6] & 0xFFFFu));
    // 0b9067  inc edi
    X86_AT(c, 0xb9067u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0b9068  add ecx, 2
    X86_AT(c, 0xb9068u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
    // 0b906b  jmp 0xb8e15
    X86_AT(c, 0xb906bu);
    X86_POLL(c, 0xb8e15u); goto L_b8e15;
L_b9070:
    X86_TICK(c, 28);
    // 0b9070  mov word ptr [ecx], 0
    X86_AT(c, 0xb9070u);
    wr16((c.sbase[3] + (uint32_t)(c.r[1])), 0x0u);
    // 0b9075  mov eax, 0x460fc
    X86_AT(c, 0xb9075u);
    c.r[0] = 0x460FCu;
    // 0b907a  pop edi
    X86_AT(c, 0xb907au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b907b  pop esi
    X86_AT(c, 0xb907bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b907c  leave 
    X86_AT(c, 0xb907cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b907d  ret 
    X86_AT(c, 0xb907du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb9064u, "ran off the end of a function");
}
void f_000b9080(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0b9080  push ebp
    X86_AT(c, 0xb9080u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b9081  mov ebp, esp
    X86_AT(c, 0xb9081u);
    c.r[5] = c.r[4];
    // 0b9083  push edi
    X86_AT(c, 0xb9083u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b9084  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xb9084u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0b9087  sub edx, edx
    X86_AT(c, 0xb9087u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0b9089  mov ecx, 1
    X86_AT(c, 0xb9089u);
    c.r[1] = 0x1u;
L_b908e:
    X86_TICK(c, 11);
    // 0b908e  mov al, byte ptr [edi]
    X86_AT(c, 0xb908eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0b9090  cmp al, 0x20
    X86_AT(c, 0xb9090u);
    (void)x86_sub(c, g8(c, 0), 0x20u, 0, 1);
    // 0b9092  je 0xb9098
    X86_AT(c, 0xb9092u);
    if (x86_cc(c, 4)) { goto L_b9098; }
    X86_TICK(c, 7);
    // 0b9094  cmp al, 9
    X86_AT(c, 0xb9094u);
    (void)x86_sub(c, g8(c, 0), 0x9u, 0, 1);
    // 0b9096  jne 0xb909b
    X86_AT(c, 0xb9096u);
    if (x86_cc(c, 5)) { goto L_b909b; }
L_b9098:
    X86_TICK(c, 9);
    // 0b9098  inc edi
    X86_AT(c, 0xb9098u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0b9099  jmp 0xb908e
    X86_AT(c, 0xb9099u);
    X86_POLL(c, 0xb908eu); goto L_b908e;
L_b909b:
    X86_TICK(c, 12);
    // 0b909b  cmp byte ptr [edi], 0x2d
    X86_AT(c, 0xb909bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x2Du, 0, 1);
    // 0b909e  jne 0xb90a6
    X86_AT(c, 0xb909eu);
    if (x86_cc(c, 5)) { goto L_b90a6; }
    X86_TICK(c, 2);
    // 0b90a0  mov ecx, 0xffffffff
    X86_AT(c, 0xb90a0u);
    c.r[1] = 0xFFFFFFFFu;
L_b90a5:
    X86_TICK(c, 2);
    // 0b90a5  inc edi
    X86_AT(c, 0xb90a5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_b90a6:
    X86_TICK(c, 11);
    // 0b90a6  mov al, byte ptr [edi]
    X86_AT(c, 0xb90a6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0b90a8  cmp al, 0x30
    X86_AT(c, 0xb90a8u);
    (void)x86_sub(c, g8(c, 0), 0x30u, 0, 1);
    // 0b90aa  jb 0xb90c0
    X86_AT(c, 0xb90aau);
    if (x86_cc(c, 2)) { goto L_b90c0; }
    X86_TICK(c, 7);
    // 0b90ac  cmp al, 0x39
    X86_AT(c, 0xb90acu);
    (void)x86_sub(c, g8(c, 0), 0x39u, 0, 1);
    // 0b90ae  ja 0xb90c0
    X86_AT(c, 0xb90aeu);
    if (x86_cc(c, 7)) { goto L_b90c0; }
    X86_TICK(c, 21);
    // 0b90b0  lea edx, [edx + edx*4]
    X86_AT(c, 0xb90b0u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0b90b3  add edx, edx
    X86_AT(c, 0xb90b3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[2], 0, 4); }
    // 0b90b5  movzx eax, al
    X86_AT(c, 0xb90b5u);
    c.r[0] = g8(c, 0);
    // 0b90b8  sub eax, 0x30
    X86_AT(c, 0xb90b8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x30u, 0, 4); }
    // 0b90bb  add eax, edx
    X86_AT(c, 0xb90bbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0b90bd  xchg edx, eax
    X86_AT(c, 0xb90bdu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0b90be  jmp 0xb90a5
    X86_AT(c, 0xb90beu);
    X86_POLL(c, 0xb90a5u); goto L_b90a5;
L_b90c0:
    X86_TICK(c, 44);
    // 0b90c0  mov eax, ecx
    X86_AT(c, 0xb90c0u);
    c.r[0] = c.r[1];
    // 0b90c2  imul eax, edx
    X86_AT(c, 0xb90c2u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[2], 4);
    // 0b90c5  pop edi
    X86_AT(c, 0xb90c5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b90c6  leave 
    X86_AT(c, 0xb90c6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b90c7  ret 
    X86_AT(c, 0xb90c7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb9080u, "ran off the end of a function");
}
void f_000b90c8(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0b90c8  call 9
    X86_AT(c, 0xb90c8u);
    push32(c, 0xb90cdu); x86_call_known(c, 0x9u, f_00000009); X86_RET(c, 0xb90cdu);
    X86_TICK(c, 9);
    // 0b90cd  push 1
    X86_AT(c, 0xb90cdu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b90cf  call 0x2b
    X86_AT(c, 0xb90cfu);
    push32(c, 0xb90d4u); x86_call_known(c, 0x2bu, f_0000002b); X86_RET(c, 0xb90d4u);
    X86_TICK(c, 9);
    // 0b90d4  push 0
    X86_AT(c, 0xb90d4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0b90d6  call 0x49
    X86_AT(c, 0xb90d6u);
    push32(c, 0xb90dbu); x86_call_known(c, 0x49u, f_00000049); X86_RET(c, 0xb90dbu);
    X86_TICK(c, 9);
    // 0b90db  push 0
    X86_AT(c, 0xb90dbu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0b90dd  call 0x69
    X86_AT(c, 0xb90ddu);
    push32(c, 0xb90e2u); x86_call_known(c, 0x69u, f_00000069); X86_RET(c, 0xb90e2u);
    X86_TICK(c, 12);
    // 0b90e2  add esp, 0xc
    X86_AT(c, 0xb90e2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0b90e5  ret 
    X86_AT(c, 0xb90e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb90c8u, "ran off the end of a function");
}
void f_000b90e8(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0b90e8  call 0x8b
    X86_AT(c, 0xb90e8u);
    push32(c, 0xb90edu); x86_call_known(c, 0x8bu, f_0000008b); X86_RET(c, 0xb90edu);
    X86_TICK(c, 10);
    // 0b90ed  ret 
    X86_AT(c, 0xb90edu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb90e8u, "ran off the end of a function");
}
void f_000b90f0(X86Cpu& c) {
    X86_TICK(c, 45);
    // 0b90f0  push ebp
    X86_AT(c, 0xb90f0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b90f1  mov ebp, esp
    X86_AT(c, 0xb90f1u);
    c.r[5] = c.r[4];
    // 0b90f3  sub esp, 0x14
    X86_AT(c, 0xb90f3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x14u, 0, 4); }
    // 0b90f6  push ebx
    X86_AT(c, 0xb90f6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b90f7  push esi
    X86_AT(c, 0xb90f7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b90f8  push edi
    X86_AT(c, 0xb90f8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b90f9  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xb90f9u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0b90fc  mov dword ptr [ebp - 0x14], 0
    X86_AT(c, 0xb90fcu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), 0x0u);
    // 0b9103  mov dword ptr [ebp - 0x10], 0
    X86_AT(c, 0xb9103u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), 0x0u);
    // 0b910a  sub eax, eax
    X86_AT(c, 0xb910au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0b910c  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xb910cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0b910f  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xb910fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0b9112  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xb9112u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0b9115  lea eax, [ebp - 0x10]
    X86_AT(c, 0xb9115u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0b9118  push eax
    X86_AT(c, 0xb9118u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b9119  lea eax, [ebp - 8]
    X86_AT(c, 0xb9119u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0b911c  push eax
    X86_AT(c, 0xb911cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b911d  push edi
    X86_AT(c, 0xb911du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b911e  call 0xbc454
    X86_AT(c, 0xb911eu);
    push32(c, 0xb9123u); x86_call_known(c, 0xbc454u, f_000bc454); X86_RET(c, 0xb9123u);
    X86_TICK(c, 17);
    // 0b9123  lea eax, [ebp - 0xc]
    X86_AT(c, 0xb9123u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0b9126  push eax
    X86_AT(c, 0xb9126u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b9127  lea eax, [ebp - 4]
    X86_AT(c, 0xb9127u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0b912a  push eax
    X86_AT(c, 0xb912au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b912b  push edi
    X86_AT(c, 0xb912bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b912c  call 0xbc428
    X86_AT(c, 0xb912cu);
    push32(c, 0xb9131u); x86_call_known(c, 0xbc428u, f_000bc428); X86_RET(c, 0xb9131u);
    X86_TICK(c, 23);
    // 0b9131  mov esi, 0xffffffff
    X86_AT(c, 0xb9131u);
    c.r[6] = 0xFFFFFFFFu;
    // 0b9136  sub ebx, ebx
    X86_AT(c, 0xb9136u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0b9138  add esp, 0x18
    X86_AT(c, 0xb9138u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0b913b  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xb913bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0b913e  sub eax, dword ptr [ebp - 4]
    X86_AT(c, 0xb913eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0b9141  cmp eax, 3
    X86_AT(c, 0xb9141u);
    (void)x86_sub(c, c.r[0], 0x3u, 0, 4);
    // 0b9144  jge 0xb914d
    X86_AT(c, 0xb9144u);
    if (x86_cc(c, 13)) { goto L_b914d; }
    X86_TICK(c, 7);
    // 0b9146  call 0x8b
    X86_AT(c, 0xb9146u);
    push32(c, 0xb914bu); x86_call_known(c, 0x8bu, f_0000008b); X86_RET(c, 0xb914bu);
    X86_TICK(c, 2);
    // 0b914b  mov esi, ebx
    X86_AT(c, 0xb914bu);
    c.r[6] = c.r[3];
L_b914d:
    X86_TICK(c, 9);
    // 0b914d  push edi
    X86_AT(c, 0xb914du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b914e  call 0xbc4b0
    X86_AT(c, 0xb914eu);
    push32(c, 0xb9153u); x86_call_known(c, 0xbc4b0u, f_000bc4b0); X86_RET(c, 0xb9153u);
    X86_TICK(c, 9);
    // 0b9153  add esp, 4
    X86_AT(c, 0xb9153u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b9156  and eax, eax
    X86_AT(c, 0xb9156u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0b9158  jne 0xb9163
    X86_AT(c, 0xb9158u);
    if (x86_cc(c, 5)) { goto L_b9163; }
    X86_TICK(c, 9);
    // 0b915a  push edi
    X86_AT(c, 0xb915au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b915b  call 0xbc0b0
    X86_AT(c, 0xb915bu);
    push32(c, 0xb9160u); x86_call_known(c, 0xbc0b0u, f_000bc0b0); X86_RET(c, 0xb9160u);
    X86_TICK(c, 2);
    // 0b9160  add esp, 4
    X86_AT(c, 0xb9160u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_b9163:
    X86_TICK(c, 12);
    // 0b9163  cmp word ptr [0x9c544], 0
    X86_AT(c, 0xb9163u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x9C544u))), 0x0u, 0, 2);
    // 0b916b  jne 0xb917d
    X86_AT(c, 0xb916bu);
    if (x86_cc(c, 5)) { goto L_b917d; }
    X86_TICK(c, 9);
    // 0b916d  push 0
    X86_AT(c, 0xb916du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0b916f  call 0xb61d4
    X86_AT(c, 0xb916fu);
    push32(c, 0xb9174u); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xb9174u);
    X86_TICK(c, 9);
    // 0b9174  push edi
    X86_AT(c, 0xb9174u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b9175  call 0xbb6b0
    X86_AT(c, 0xb9175u);
    push32(c, 0xb917au); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xb917au);
    X86_TICK(c, 2);
    // 0b917a  add esp, 8
    X86_AT(c, 0xb917au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_b917d:
    X86_TICK(c, 7);
    // 0b917d  call 0xb8d08
    X86_AT(c, 0xb917du);
    push32(c, 0xb9182u); x86_call_known(c, 0xb8d08u, f_000b8d08); X86_RET(c, 0xb9182u);
    X86_TICK(c, 7);
    // 0b9182  call 0xb5a74
    X86_AT(c, 0xb9182u);
    push32(c, 0xb9187u); x86_call_known(c, 0xb5a74u, f_000b5a74); X86_RET(c, 0xb9187u);
    X86_TICK(c, 13);
    // 0b9187  lea eax, [ebp - 0x14]
    X86_AT(c, 0xb9187u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFECu);
    // 0b918a  push eax
    X86_AT(c, 0xb918au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b918b  push 1
    X86_AT(c, 0xb918bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b918d  call 0xa9
    X86_AT(c, 0xb918du);
    push32(c, 0xb9192u); x86_call_known(c, 0xa9u, f_000000a9); X86_RET(c, 0xb9192u);
    X86_TICK(c, 15);
    // 0b9192  add esp, 8
    X86_AT(c, 0xb9192u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b9195  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xb9195u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0b9198  and eax, 0xff00
    X86_AT(c, 0xb9198u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFF00u, 4); }
    // 0b919d  cmp eax, 0xff00
    X86_AT(c, 0xb919du);
    (void)x86_sub(c, c.r[0], 0xFF00u, 0, 4);
    // 0b91a2  jne 0xb91ab
    X86_AT(c, 0xb91a2u);
    if (x86_cc(c, 5)) { goto L_b91ab; }
    X86_TICK(c, 9);
    // 0b91a4  sub eax, eax
    X86_AT(c, 0xb91a4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0b91a6  jmp 0xb950c
    X86_AT(c, 0xb91a6u);
    goto L_b950c;
L_b91ab:
    X86_TICK(c, 18);
    // 0b91ab  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xb91abu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0b91ae  shr eax, 8
    X86_AT(c, 0xb91aeu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0b91b1  and eax, 0xff
    X86_AT(c, 0xb91b1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFu, 4); }
    // 0b91b6  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xb91b6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0b91b9  cmp esi, 0xffffffff
    X86_AT(c, 0xb91b9u);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0b91bc  jne 0xb9449
    X86_AT(c, 0xb91bcu);
    if (x86_cc(c, 5)) { goto L_b9449; }
    X86_TICK(c, 12);
    // 0b91c2  xchg edx, eax
    X86_AT(c, 0xb91c2u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0b91c3  sub edx, 2
    X86_AT(c, 0xb91c3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0b91c6  cmp edx, 0x44
    X86_AT(c, 0xb91c6u);
    (void)x86_sub(c, c.r[2], 0x44u, 0, 4);
    // 0b91c9  ja 0xb9449
    X86_AT(c, 0xb91c9u);
    if (x86_cc(c, 7)) { goto L_b9449; }
    X86_TICK(c, 7);
    // 0b91cf  jmp dword ptr cs:[edx*4 + 0xb91d7]
    X86_AT(c, 0xb91cfu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xB91D7u)));
      switch (t) {
      case 0xb92ebu: goto L_b92eb;
      case 0xb92f5u: goto L_b92f5;
      case 0xb92ffu: goto L_b92ff;
      case 0xb9309u: goto L_b9309;
      case 0xb9313u: goto L_b9313;
      case 0xb931du: goto L_b931d;
      case 0xb9327u: goto L_b9327;
      case 0xb9331u: goto L_b9331;
      case 0xb933bu: goto L_b933b;
      case 0xb9345u: goto L_b9345;
      case 0xb934fu: goto L_b934f;
      case 0xb9359u: goto L_b9359;
      case 0xb9363u: goto L_b9363;
      case 0xb936du: goto L_b936d;
      case 0xb9377u: goto L_b9377;
      case 0xb9381u: goto L_b9381;
      case 0xb938bu: goto L_b938b;
      case 0xb9395u: goto L_b9395;
      case 0xb939fu: goto L_b939f;
      case 0xb93a9u: goto L_b93a9;
      case 0xb93b3u: goto L_b93b3;
      case 0xb93bdu: goto L_b93bd;
      case 0xb93c7u: goto L_b93c7;
      case 0xb93d1u: goto L_b93d1;
      case 0xb93dbu: goto L_b93db;
      case 0xb93e5u: goto L_b93e5;
      case 0xb93ecu: goto L_b93ec;
      case 0xb93f3u: goto L_b93f3;
      case 0xb93fau: goto L_b93fa;
      case 0xb9401u: goto L_b9401;
      case 0xb9408u: goto L_b9408;
      case 0xb940fu: goto L_b940f;
      case 0xb9416u: goto L_b9416;
      case 0xb941du: goto L_b941d;
      case 0xb9424u: goto L_b9424;
      case 0xb942bu: goto L_b942b;
      case 0xb9432u: goto L_b9432;
      case 0xb9444u: goto L_b9444;
      case 0xb9449u: goto L_b9449;
      default: x86_jump(c, t); return; } }
L_b92eb:
    X86_TICK(c, 9);
    // 0b92eb  mov ebx, 0x31
    X86_AT(c, 0xb92ebu);
    c.r[3] = 0x31u;
    // 0b92f0  jmp 0xb9449
    X86_AT(c, 0xb92f0u);
    goto L_b9449;
L_b92f5:
    X86_TICK(c, 9);
    // 0b92f5  mov ebx, 0x32
    X86_AT(c, 0xb92f5u);
    c.r[3] = 0x32u;
    // 0b92fa  jmp 0xb9449
    X86_AT(c, 0xb92fau);
    goto L_b9449;
L_b92ff:
    X86_TICK(c, 9);
    // 0b92ff  mov ebx, 0x33
    X86_AT(c, 0xb92ffu);
    c.r[3] = 0x33u;
    // 0b9304  jmp 0xb9449
    X86_AT(c, 0xb9304u);
    goto L_b9449;
L_b9309:
    X86_TICK(c, 9);
    // 0b9309  mov ebx, 0x34
    X86_AT(c, 0xb9309u);
    c.r[3] = 0x34u;
    // 0b930e  jmp 0xb9449
    X86_AT(c, 0xb930eu);
    goto L_b9449;
L_b9313:
    X86_TICK(c, 9);
    // 0b9313  mov ebx, 0x35
    X86_AT(c, 0xb9313u);
    c.r[3] = 0x35u;
    // 0b9318  jmp 0xb9449
    X86_AT(c, 0xb9318u);
    goto L_b9449;
L_b931d:
    X86_TICK(c, 9);
    // 0b931d  mov ebx, 0x36
    X86_AT(c, 0xb931du);
    c.r[3] = 0x36u;
    // 0b9322  jmp 0xb9449
    X86_AT(c, 0xb9322u);
    goto L_b9449;
L_b9327:
    X86_TICK(c, 9);
    // 0b9327  mov ebx, 0x37
    X86_AT(c, 0xb9327u);
    c.r[3] = 0x37u;
    // 0b932c  jmp 0xb9449
    X86_AT(c, 0xb932cu);
    goto L_b9449;
L_b9331:
    X86_TICK(c, 9);
    // 0b9331  mov ebx, 0x38
    X86_AT(c, 0xb9331u);
    c.r[3] = 0x38u;
    // 0b9336  jmp 0xb9449
    X86_AT(c, 0xb9336u);
    goto L_b9449;
L_b933b:
    X86_TICK(c, 9);
    // 0b933b  mov ebx, 0x39
    X86_AT(c, 0xb933bu);
    c.r[3] = 0x39u;
    // 0b9340  jmp 0xb9449
    X86_AT(c, 0xb9340u);
    goto L_b9449;
L_b9345:
    X86_TICK(c, 9);
    // 0b9345  mov ebx, 0x30
    X86_AT(c, 0xb9345u);
    c.r[3] = 0x30u;
    // 0b934a  jmp 0xb9449
    X86_AT(c, 0xb934au);
    goto L_b9449;
L_b934f:
    X86_TICK(c, 9);
    // 0b934f  mov ebx, 0x41
    X86_AT(c, 0xb934fu);
    c.r[3] = 0x41u;
    // 0b9354  jmp 0xb9449
    X86_AT(c, 0xb9354u);
    goto L_b9449;
L_b9359:
    X86_TICK(c, 9);
    // 0b9359  mov ebx, 0x42
    X86_AT(c, 0xb9359u);
    c.r[3] = 0x42u;
    // 0b935e  jmp 0xb9449
    X86_AT(c, 0xb935eu);
    goto L_b9449;
L_b9363:
    X86_TICK(c, 9);
    // 0b9363  mov ebx, 0x43
    X86_AT(c, 0xb9363u);
    c.r[3] = 0x43u;
    // 0b9368  jmp 0xb9449
    X86_AT(c, 0xb9368u);
    goto L_b9449;
L_b936d:
    X86_TICK(c, 9);
    // 0b936d  mov ebx, 0x44
    X86_AT(c, 0xb936du);
    c.r[3] = 0x44u;
    // 0b9372  jmp 0xb9449
    X86_AT(c, 0xb9372u);
    goto L_b9449;
L_b9377:
    X86_TICK(c, 9);
    // 0b9377  mov ebx, 0x45
    X86_AT(c, 0xb9377u);
    c.r[3] = 0x45u;
    // 0b937c  jmp 0xb9449
    X86_AT(c, 0xb937cu);
    goto L_b9449;
L_b9381:
    X86_TICK(c, 9);
    // 0b9381  mov ebx, 0x46
    X86_AT(c, 0xb9381u);
    c.r[3] = 0x46u;
    // 0b9386  jmp 0xb9449
    X86_AT(c, 0xb9386u);
    goto L_b9449;
L_b938b:
    X86_TICK(c, 9);
    // 0b938b  mov ebx, 0x47
    X86_AT(c, 0xb938bu);
    c.r[3] = 0x47u;
    // 0b9390  jmp 0xb9449
    X86_AT(c, 0xb9390u);
    goto L_b9449;
L_b9395:
    X86_TICK(c, 9);
    // 0b9395  mov ebx, 0x48
    X86_AT(c, 0xb9395u);
    c.r[3] = 0x48u;
    // 0b939a  jmp 0xb9449
    X86_AT(c, 0xb939au);
    goto L_b9449;
L_b939f:
    X86_TICK(c, 9);
    // 0b939f  mov ebx, 0x49
    X86_AT(c, 0xb939fu);
    c.r[3] = 0x49u;
    // 0b93a4  jmp 0xb9449
    X86_AT(c, 0xb93a4u);
    goto L_b9449;
L_b93a9:
    X86_TICK(c, 9);
    // 0b93a9  mov ebx, 0x4a
    X86_AT(c, 0xb93a9u);
    c.r[3] = 0x4Au;
    // 0b93ae  jmp 0xb9449
    X86_AT(c, 0xb93aeu);
    goto L_b9449;
L_b93b3:
    X86_TICK(c, 9);
    // 0b93b3  mov ebx, 0x4b
    X86_AT(c, 0xb93b3u);
    c.r[3] = 0x4Bu;
    // 0b93b8  jmp 0xb9449
    X86_AT(c, 0xb93b8u);
    goto L_b9449;
L_b93bd:
    X86_TICK(c, 9);
    // 0b93bd  mov ebx, 0x4c
    X86_AT(c, 0xb93bdu);
    c.r[3] = 0x4Cu;
    // 0b93c2  jmp 0xb9449
    X86_AT(c, 0xb93c2u);
    goto L_b9449;
L_b93c7:
    X86_TICK(c, 9);
    // 0b93c7  mov ebx, 0x4d
    X86_AT(c, 0xb93c7u);
    c.r[3] = 0x4Du;
    // 0b93cc  jmp 0xb9449
    X86_AT(c, 0xb93ccu);
    goto L_b9449;
L_b93d1:
    X86_TICK(c, 9);
    // 0b93d1  mov ebx, 0x4e
    X86_AT(c, 0xb93d1u);
    c.r[3] = 0x4Eu;
    // 0b93d6  jmp 0xb9449
    X86_AT(c, 0xb93d6u);
    goto L_b9449;
L_b93db:
    X86_TICK(c, 9);
    // 0b93db  mov ebx, 0x4f
    X86_AT(c, 0xb93dbu);
    c.r[3] = 0x4Fu;
    // 0b93e0  jmp 0xb9449
    X86_AT(c, 0xb93e0u);
    goto L_b9449;
L_b93e5:
    X86_TICK(c, 9);
    // 0b93e5  mov ebx, 0x50
    X86_AT(c, 0xb93e5u);
    c.r[3] = 0x50u;
    // 0b93ea  jmp 0xb9449
    X86_AT(c, 0xb93eau);
    goto L_b9449;
L_b93ec:
    X86_TICK(c, 9);
    // 0b93ec  mov ebx, 0x51
    X86_AT(c, 0xb93ecu);
    c.r[3] = 0x51u;
    // 0b93f1  jmp 0xb9449
    X86_AT(c, 0xb93f1u);
    goto L_b9449;
L_b93f3:
    X86_TICK(c, 9);
    // 0b93f3  mov ebx, 0x52
    X86_AT(c, 0xb93f3u);
    c.r[3] = 0x52u;
    // 0b93f8  jmp 0xb9449
    X86_AT(c, 0xb93f8u);
    goto L_b9449;
L_b93fa:
    X86_TICK(c, 9);
    // 0b93fa  mov ebx, 0x53
    X86_AT(c, 0xb93fau);
    c.r[3] = 0x53u;
    // 0b93ff  jmp 0xb9449
    X86_AT(c, 0xb93ffu);
    goto L_b9449;
L_b9401:
    X86_TICK(c, 9);
    // 0b9401  mov ebx, 0x54
    X86_AT(c, 0xb9401u);
    c.r[3] = 0x54u;
    // 0b9406  jmp 0xb9449
    X86_AT(c, 0xb9406u);
    goto L_b9449;
L_b9408:
    X86_TICK(c, 9);
    // 0b9408  mov ebx, 0x55
    X86_AT(c, 0xb9408u);
    c.r[3] = 0x55u;
    // 0b940d  jmp 0xb9449
    X86_AT(c, 0xb940du);
    goto L_b9449;
L_b940f:
    X86_TICK(c, 9);
    // 0b940f  mov ebx, 0x56
    X86_AT(c, 0xb940fu);
    c.r[3] = 0x56u;
    // 0b9414  jmp 0xb9449
    X86_AT(c, 0xb9414u);
    goto L_b9449;
L_b9416:
    X86_TICK(c, 9);
    // 0b9416  mov ebx, 0x57
    X86_AT(c, 0xb9416u);
    c.r[3] = 0x57u;
    // 0b941b  jmp 0xb9449
    X86_AT(c, 0xb941bu);
    goto L_b9449;
L_b941d:
    X86_TICK(c, 9);
    // 0b941d  mov ebx, 0x58
    X86_AT(c, 0xb941du);
    c.r[3] = 0x58u;
    // 0b9422  jmp 0xb9449
    X86_AT(c, 0xb9422u);
    goto L_b9449;
L_b9424:
    X86_TICK(c, 9);
    // 0b9424  mov ebx, 0x59
    X86_AT(c, 0xb9424u);
    c.r[3] = 0x59u;
    // 0b9429  jmp 0xb9449
    X86_AT(c, 0xb9429u);
    goto L_b9449;
L_b942b:
    X86_TICK(c, 9);
    // 0b942b  mov ebx, 0x5a
    X86_AT(c, 0xb942bu);
    c.r[3] = 0x5Au;
    // 0b9430  jmp 0xb9449
    X86_AT(c, 0xb9430u);
    goto L_b9449;
L_b9432:
    X86_TICK(c, 9);
    // 0b9432  sub ebx, ebx
    X86_AT(c, 0xb9432u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0b9434  call 0xb67d0
    X86_AT(c, 0xb9434u);
    push32(c, 0xb9439u); x86_call_known(c, 0xb67d0u, f_000b67d0); X86_RET(c, 0xb9439u);
    X86_TICK(c, 9);
    // 0b9439  push edi
    X86_AT(c, 0xb9439u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b943a  call 0xbb6b0
    X86_AT(c, 0xb943au);
    push32(c, 0xb943fu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xb943fu);
    X86_TICK(c, 9);
    // 0b943f  add esp, 4
    X86_AT(c, 0xb943fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b9442  jmp 0xb9449
    X86_AT(c, 0xb9442u);
    goto L_b9449;
L_b9444:
    X86_TICK(c, 2);
    // 0b9444  mov ebx, 0x20
    X86_AT(c, 0xb9444u);
    c.r[3] = 0x20u;
L_b9449:
    X86_TICK(c, 11);
    // 0b9449  mov edx, dword ptr [ebp - 0x14]
    X86_AT(c, 0xb9449u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0b944c  cmp edx, 0x50
    X86_AT(c, 0xb944cu);
    (void)x86_sub(c, c.r[2], 0x50u, 0, 4);
    // 0b944f  ja 0xb9478
    X86_AT(c, 0xb944fu);
    if (x86_cc(c, 7)) { goto L_b9478; }
    X86_TICK(c, 7);
    // 0b9451  cmp edx, 0x50
    X86_AT(c, 0xb9451u);
    (void)x86_sub(c, c.r[2], 0x50u, 0, 4);
    // 0b9454  je 0xb949a
    X86_AT(c, 0xb9454u);
    if (x86_cc(c, 4)) { goto L_b949a; }
    X86_TICK(c, 7);
    // 0b9456  cmp edx, 1
    X86_AT(c, 0xb9456u);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0b9459  je 0xb94af
    X86_AT(c, 0xb9459u);
    if (x86_cc(c, 4)) { goto L_b94af; }
    X86_TICK(c, 7);
    // 0b945f  cmp edx, 0xf
    X86_AT(c, 0xb945fu);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 0b9462  je 0xb94a1
    X86_AT(c, 0xb9462u);
    if (x86_cc(c, 4)) { goto L_b94a1; }
    X86_TICK(c, 7);
    // 0b9464  cmp edx, 0x1d
    X86_AT(c, 0xb9464u);
    (void)x86_sub(c, c.r[2], 0x1Du, 0, 4);
    // 0b9467  je 0xb94a8
    X86_AT(c, 0xb9467u);
    if (x86_cc(c, 4)) { goto L_b94a8; }
    X86_TICK(c, 7);
    // 0b9469  cmp edx, 0x4d
    X86_AT(c, 0xb9469u);
    (void)x86_sub(c, c.r[2], 0x4Du, 0, 4);
    // 0b946c  je 0xb9493
    X86_AT(c, 0xb946cu);
    if (x86_cc(c, 4)) { goto L_b9493; }
    X86_TICK(c, 7);
    // 0b946e  cmp edx, 0x4f
    X86_AT(c, 0xb946eu);
    (void)x86_sub(c, c.r[2], 0x4Fu, 0, 4);
    // 0b9471  je 0xb94a1
    X86_AT(c, 0xb9471u);
    if (x86_cc(c, 4)) { goto L_b94a1; }
    X86_TICK(c, 7);
    // 0b9473  jmp 0xb94d6
    X86_AT(c, 0xb9473u);
    goto L_b94d6;
L_b9478:
    X86_TICK(c, 7);
    // 0b9478  cmp edx, 0x51
    X86_AT(c, 0xb9478u);
    (void)x86_sub(c, c.r[2], 0x51u, 0, 4);
    // 0b947b  je 0xb94b6
    X86_AT(c, 0xb947bu);
    if (x86_cc(c, 4)) { goto L_b94b6; }
    X86_TICK(c, 7);
    // 0b947d  cmp edx, 0x5d
    X86_AT(c, 0xb947du);
    (void)x86_sub(c, c.r[2], 0x5Du, 0, 4);
    // 0b9480  je 0xb94bd
    X86_AT(c, 0xb9480u);
    if (x86_cc(c, 4)) { goto L_b94bd; }
    X86_TICK(c, 7);
    // 0b9482  cmp edx, 0x5e
    X86_AT(c, 0xb9482u);
    (void)x86_sub(c, c.r[2], 0x5Eu, 0, 4);
    // 0b9485  je 0xb94cf
    X86_AT(c, 0xb9485u);
    if (x86_cc(c, 4)) { goto L_b94cf; }
    X86_TICK(c, 7);
    // 0b9487  cmp edx, 0x72
    X86_AT(c, 0xb9487u);
    (void)x86_sub(c, c.r[2], 0x72u, 0, 4);
    // 0b948a  je 0xb94af
    X86_AT(c, 0xb948au);
    if (x86_cc(c, 4)) { goto L_b94af; }
    X86_TICK(c, 7);
    // 0b948c  cmp edx, 0x73
    X86_AT(c, 0xb948cu);
    (void)x86_sub(c, c.r[2], 0x73u, 0, 4);
    // 0b948f  je 0xb94a8
    X86_AT(c, 0xb948fu);
    if (x86_cc(c, 4)) { goto L_b94a8; }
    X86_TICK(c, 7);
    // 0b9491  jmp 0xb94d6
    X86_AT(c, 0xb9491u);
    goto L_b94d6;
L_b9493:
    X86_TICK(c, 9);
    // 0b9493  mov ebx, 5
    X86_AT(c, 0xb9493u);
    c.r[3] = 0x5u;
    // 0b9498  jmp 0xb94d6
    X86_AT(c, 0xb9498u);
    goto L_b94d6;
L_b949a:
    X86_TICK(c, 9);
    // 0b949a  mov ebx, 6
    X86_AT(c, 0xb949au);
    c.r[3] = 0x6u;
    // 0b949f  jmp 0xb94d6
    X86_AT(c, 0xb949fu);
    goto L_b94d6;
L_b94a1:
    X86_TICK(c, 9);
    // 0b94a1  mov ebx, 3
    X86_AT(c, 0xb94a1u);
    c.r[3] = 0x3u;
    // 0b94a6  jmp 0xb94d6
    X86_AT(c, 0xb94a6u);
    goto L_b94d6;
L_b94a8:
    X86_TICK(c, 9);
    // 0b94a8  mov ebx, 4
    X86_AT(c, 0xb94a8u);
    c.r[3] = 0x4u;
    // 0b94ad  jmp 0xb94d6
    X86_AT(c, 0xb94adu);
    goto L_b94d6;
L_b94af:
    X86_TICK(c, 9);
    // 0b94af  mov ebx, 1
    X86_AT(c, 0xb94afu);
    c.r[3] = 0x1u;
    // 0b94b4  jmp 0xb94d6
    X86_AT(c, 0xb94b4u);
    goto L_b94d6;
L_b94b6:
    X86_TICK(c, 9);
    // 0b94b6  mov ebx, 7
    X86_AT(c, 0xb94b6u);
    c.r[3] = 0x7u;
    // 0b94bb  jmp 0xb94d6
    X86_AT(c, 0xb94bbu);
    goto L_b94d6;
L_b94bd:
    X86_TICK(c, 9);
    // 0b94bd  sub ebx, ebx
    X86_AT(c, 0xb94bdu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0b94bf  call 0xba14c
    X86_AT(c, 0xb94bfu);
    push32(c, 0xb94c4u); x86_call_known(c, 0xba14cu, f_000ba14c); X86_RET(c, 0xb94c4u);
    X86_TICK(c, 9);
    // 0b94c4  push edi
    X86_AT(c, 0xb94c4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b94c5  call 0xbb6b0
    X86_AT(c, 0xb94c5u);
    push32(c, 0xb94cau); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xb94cau);
    X86_TICK(c, 9);
    // 0b94ca  add esp, 4
    X86_AT(c, 0xb94cau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b94cd  jmp 0xb94d6
    X86_AT(c, 0xb94cdu);
    goto L_b94d6;
L_b94cf:
    X86_TICK(c, 9);
    // 0b94cf  sub ebx, ebx
    X86_AT(c, 0xb94cfu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0b94d1  call 0xba180
    X86_AT(c, 0xb94d1u);
    push32(c, 0xb94d6u); x86_call_known(c, 0xba180u, f_000ba180); X86_RET(c, 0xb94d6u);
L_b94d6:
    X86_TICK(c, 7);
    // 0b94d6  cmp ebx, 0x20
    X86_AT(c, 0xb94d6u);
    (void)x86_sub(c, c.r[3], 0x20u, 0, 4);
    // 0b94d9  jl 0xb94f0
    X86_AT(c, 0xb94d9u);
    if (x86_cc(c, 12)) { goto L_b94f0; }
    X86_TICK(c, 13);
    // 0b94db  mov eax, ebx
    X86_AT(c, 0xb94dbu);
    c.r[0] = c.r[3];
    // 0b94dd  push eax
    X86_AT(c, 0xb94ddu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b94de  push edi
    X86_AT(c, 0xb94deu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b94df  call 0xbbd1c
    X86_AT(c, 0xb94dfu);
    push32(c, 0xb94e4u); x86_call_known(c, 0xbbd1cu, f_000bbd1c); X86_RET(c, 0xb94e4u);
    X86_TICK(c, 20);
    // 0b94e4  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xb94e4u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0b94e7  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xb94e7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0b94ea  add eax, 2
    X86_AT(c, 0xb94eau);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0b94ed  push eax
    X86_AT(c, 0xb94edu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b94ee  jmp 0xb9501
    X86_AT(c, 0xb94eeu);
    goto L_b9501;
L_b94f0:
    X86_TICK(c, 11);
    // 0b94f0  push 0x21a8
    X86_AT(c, 0xb94f0u);
    { uint32_t v = 0x21A8u; push32(c, v); }
    // 0b94f5  push edi
    X86_AT(c, 0xb94f5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b94f6  call 0xbbba4
    X86_AT(c, 0xb94f6u);
    push32(c, 0xb94fbu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb94fbu);
    X86_TICK(c, 10);
    // 0b94fb  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xb94fbu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0b94fe  push dword ptr [ebp - 4]
    X86_AT(c, 0xb94feu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
L_b9501:
    X86_TICK(c, 9);
    // 0b9501  push edi
    X86_AT(c, 0xb9501u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b9502  call 0xbc174
    X86_AT(c, 0xb9502u);
    push32(c, 0xb9507u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb9507u);
    X86_TICK(c, 4);
    // 0b9507  add esp, 0x14
    X86_AT(c, 0xb9507u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0b950a  mov eax, ebx
    X86_AT(c, 0xb950au);
    c.r[0] = c.r[3];
L_b950c:
    X86_TICK(c, 28);
    // 0b950c  pop edi
    X86_AT(c, 0xb950cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b950d  pop esi
    X86_AT(c, 0xb950du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b950e  pop ebx
    X86_AT(c, 0xb950eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0b950f  leave 
    X86_AT(c, 0xb950fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b9510  ret 
    X86_AT(c, 0xb9510u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb90f0u, "ran off the end of a function");
}
void f_000b9449(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0b9449  mov edx, dword ptr [ebp - 0x14]
    X86_AT(c, 0xb9449u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0b944c  cmp edx, 0x50
    X86_AT(c, 0xb944cu);
    (void)x86_sub(c, c.r[2], 0x50u, 0, 4);
    // 0b944f  ja 0xb9478
    X86_AT(c, 0xb944fu);
    if (x86_cc(c, 7)) { goto L_b9478; }
    X86_TICK(c, 7);
    // 0b9451  cmp edx, 0x50
    X86_AT(c, 0xb9451u);
    (void)x86_sub(c, c.r[2], 0x50u, 0, 4);
    // 0b9454  je 0xb949a
    X86_AT(c, 0xb9454u);
    if (x86_cc(c, 4)) { goto L_b949a; }
    X86_TICK(c, 7);
    // 0b9456  cmp edx, 1
    X86_AT(c, 0xb9456u);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0b9459  je 0xb94af
    X86_AT(c, 0xb9459u);
    if (x86_cc(c, 4)) { goto L_b94af; }
    X86_TICK(c, 7);
    // 0b945f  cmp edx, 0xf
    X86_AT(c, 0xb945fu);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 0b9462  je 0xb94a1
    X86_AT(c, 0xb9462u);
    if (x86_cc(c, 4)) { goto L_b94a1; }
    X86_TICK(c, 7);
    // 0b9464  cmp edx, 0x1d
    X86_AT(c, 0xb9464u);
    (void)x86_sub(c, c.r[2], 0x1Du, 0, 4);
    // 0b9467  je 0xb94a8
    X86_AT(c, 0xb9467u);
    if (x86_cc(c, 4)) { goto L_b94a8; }
    X86_TICK(c, 7);
    // 0b9469  cmp edx, 0x4d
    X86_AT(c, 0xb9469u);
    (void)x86_sub(c, c.r[2], 0x4Du, 0, 4);
    // 0b946c  je 0xb9493
    X86_AT(c, 0xb946cu);
    if (x86_cc(c, 4)) { goto L_b9493; }
    X86_TICK(c, 7);
    // 0b946e  cmp edx, 0x4f
    X86_AT(c, 0xb946eu);
    (void)x86_sub(c, c.r[2], 0x4Fu, 0, 4);
    // 0b9471  je 0xb94a1
    X86_AT(c, 0xb9471u);
    if (x86_cc(c, 4)) { goto L_b94a1; }
    X86_TICK(c, 7);
    // 0b9473  jmp 0xb94d6
    X86_AT(c, 0xb9473u);
    goto L_b94d6;
L_b9478:
    X86_TICK(c, 7);
    // 0b9478  cmp edx, 0x51
    X86_AT(c, 0xb9478u);
    (void)x86_sub(c, c.r[2], 0x51u, 0, 4);
    // 0b947b  je 0xb94b6
    X86_AT(c, 0xb947bu);
    if (x86_cc(c, 4)) { goto L_b94b6; }
    X86_TICK(c, 7);
    // 0b947d  cmp edx, 0x5d
    X86_AT(c, 0xb947du);
    (void)x86_sub(c, c.r[2], 0x5Du, 0, 4);
    // 0b9480  je 0xb94bd
    X86_AT(c, 0xb9480u);
    if (x86_cc(c, 4)) { goto L_b94bd; }
    X86_TICK(c, 7);
    // 0b9482  cmp edx, 0x5e
    X86_AT(c, 0xb9482u);
    (void)x86_sub(c, c.r[2], 0x5Eu, 0, 4);
    // 0b9485  je 0xb94cf
    X86_AT(c, 0xb9485u);
    if (x86_cc(c, 4)) { goto L_b94cf; }
    X86_TICK(c, 7);
    // 0b9487  cmp edx, 0x72
    X86_AT(c, 0xb9487u);
    (void)x86_sub(c, c.r[2], 0x72u, 0, 4);
    // 0b948a  je 0xb94af
    X86_AT(c, 0xb948au);
    if (x86_cc(c, 4)) { goto L_b94af; }
    X86_TICK(c, 7);
    // 0b948c  cmp edx, 0x73
    X86_AT(c, 0xb948cu);
    (void)x86_sub(c, c.r[2], 0x73u, 0, 4);
    // 0b948f  je 0xb94a8
    X86_AT(c, 0xb948fu);
    if (x86_cc(c, 4)) { goto L_b94a8; }
    X86_TICK(c, 7);
    // 0b9491  jmp 0xb94d6
    X86_AT(c, 0xb9491u);
    goto L_b94d6;
L_b9493:
    X86_TICK(c, 9);
    // 0b9493  mov ebx, 5
    X86_AT(c, 0xb9493u);
    c.r[3] = 0x5u;
    // 0b9498  jmp 0xb94d6
    X86_AT(c, 0xb9498u);
    goto L_b94d6;
L_b949a:
    X86_TICK(c, 9);
    // 0b949a  mov ebx, 6
    X86_AT(c, 0xb949au);
    c.r[3] = 0x6u;
    // 0b949f  jmp 0xb94d6
    X86_AT(c, 0xb949fu);
    goto L_b94d6;
L_b94a1:
    X86_TICK(c, 9);
    // 0b94a1  mov ebx, 3
    X86_AT(c, 0xb94a1u);
    c.r[3] = 0x3u;
    // 0b94a6  jmp 0xb94d6
    X86_AT(c, 0xb94a6u);
    goto L_b94d6;
L_b94a8:
    X86_TICK(c, 9);
    // 0b94a8  mov ebx, 4
    X86_AT(c, 0xb94a8u);
    c.r[3] = 0x4u;
    // 0b94ad  jmp 0xb94d6
    X86_AT(c, 0xb94adu);
    goto L_b94d6;
L_b94af:
    X86_TICK(c, 9);
    // 0b94af  mov ebx, 1
    X86_AT(c, 0xb94afu);
    c.r[3] = 0x1u;
    // 0b94b4  jmp 0xb94d6
    X86_AT(c, 0xb94b4u);
    goto L_b94d6;
L_b94b6:
    X86_TICK(c, 9);
    // 0b94b6  mov ebx, 7
    X86_AT(c, 0xb94b6u);
    c.r[3] = 0x7u;
    // 0b94bb  jmp 0xb94d6
    X86_AT(c, 0xb94bbu);
    goto L_b94d6;
L_b94bd:
    X86_TICK(c, 9);
    // 0b94bd  sub ebx, ebx
    X86_AT(c, 0xb94bdu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0b94bf  call 0xba14c
    X86_AT(c, 0xb94bfu);
    push32(c, 0xb94c4u); x86_call_known(c, 0xba14cu, f_000ba14c); X86_RET(c, 0xb94c4u);
    X86_TICK(c, 9);
    // 0b94c4  push edi
    X86_AT(c, 0xb94c4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b94c5  call 0xbb6b0
    X86_AT(c, 0xb94c5u);
    push32(c, 0xb94cau); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xb94cau);
    X86_TICK(c, 9);
    // 0b94ca  add esp, 4
    X86_AT(c, 0xb94cau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b94cd  jmp 0xb94d6
    X86_AT(c, 0xb94cdu);
    goto L_b94d6;
L_b94cf:
    X86_TICK(c, 9);
    // 0b94cf  sub ebx, ebx
    X86_AT(c, 0xb94cfu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0b94d1  call 0xba180
    X86_AT(c, 0xb94d1u);
    push32(c, 0xb94d6u); x86_call_known(c, 0xba180u, f_000ba180); X86_RET(c, 0xb94d6u);
L_b94d6:
    X86_TICK(c, 7);
    // 0b94d6  cmp ebx, 0x20
    X86_AT(c, 0xb94d6u);
    (void)x86_sub(c, c.r[3], 0x20u, 0, 4);
    // 0b94d9  jl 0xb94f0
    X86_AT(c, 0xb94d9u);
    if (x86_cc(c, 12)) { goto L_b94f0; }
    X86_TICK(c, 13);
    // 0b94db  mov eax, ebx
    X86_AT(c, 0xb94dbu);
    c.r[0] = c.r[3];
    // 0b94dd  push eax
    X86_AT(c, 0xb94ddu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b94de  push edi
    X86_AT(c, 0xb94deu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b94df  call 0xbbd1c
    X86_AT(c, 0xb94dfu);
    push32(c, 0xb94e4u); x86_call_known(c, 0xbbd1cu, f_000bbd1c); X86_RET(c, 0xb94e4u);
    X86_TICK(c, 20);
    // 0b94e4  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xb94e4u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0b94e7  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xb94e7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0b94ea  add eax, 2
    X86_AT(c, 0xb94eau);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0b94ed  push eax
    X86_AT(c, 0xb94edu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b94ee  jmp 0xb9501
    X86_AT(c, 0xb94eeu);
    goto L_b9501;
L_b94f0:
    X86_TICK(c, 11);
    // 0b94f0  push 0x21a8
    X86_AT(c, 0xb94f0u);
    { uint32_t v = 0x21A8u; push32(c, v); }
    // 0b94f5  push edi
    X86_AT(c, 0xb94f5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b94f6  call 0xbbba4
    X86_AT(c, 0xb94f6u);
    push32(c, 0xb94fbu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb94fbu);
    X86_TICK(c, 10);
    // 0b94fb  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xb94fbu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0b94fe  push dword ptr [ebp - 4]
    X86_AT(c, 0xb94feu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
L_b9501:
    X86_TICK(c, 9);
    // 0b9501  push edi
    X86_AT(c, 0xb9501u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b9502  call 0xbc174
    X86_AT(c, 0xb9502u);
    push32(c, 0xb9507u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb9507u);
    X86_TICK(c, 32);
    // 0b9507  add esp, 0x14
    X86_AT(c, 0xb9507u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0b950a  mov eax, ebx
    X86_AT(c, 0xb950au);
    c.r[0] = c.r[3];
    // 0b950c  pop edi
    X86_AT(c, 0xb950cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b950d  pop esi
    X86_AT(c, 0xb950du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b950e  pop ebx
    X86_AT(c, 0xb950eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0b950f  leave 
    X86_AT(c, 0xb950fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b9510  ret 
    X86_AT(c, 0xb9510u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb9449u, "ran off the end of a function");
}
void f_000b9514(X86Cpu& c) {
    X86_TICK(c, 45);
    // 0b9514  push ebp
    X86_AT(c, 0xb9514u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b9515  mov ebp, esp
    X86_AT(c, 0xb9515u);
    c.r[5] = c.r[4];
    // 0b9517  sub esp, 0x14
    X86_AT(c, 0xb9517u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x14u, 0, 4); }
    // 0b951a  push ebx
    X86_AT(c, 0xb951au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b951b  push esi
    X86_AT(c, 0xb951bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b951c  push edi
    X86_AT(c, 0xb951cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b951d  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xb951du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0b9520  mov dword ptr [ebp - 0x14], 0
    X86_AT(c, 0xb9520u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), 0x0u);
    // 0b9527  mov dword ptr [ebp - 0x10], 0
    X86_AT(c, 0xb9527u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), 0x0u);
    // 0b952e  sub eax, eax
    X86_AT(c, 0xb952eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0b9530  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xb9530u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0b9533  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xb9533u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0b9536  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xb9536u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0b9539  lea eax, [ebp - 0x10]
    X86_AT(c, 0xb9539u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0b953c  push eax
    X86_AT(c, 0xb953cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b953d  lea eax, [ebp - 8]
    X86_AT(c, 0xb953du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0b9540  push eax
    X86_AT(c, 0xb9540u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b9541  push edi
    X86_AT(c, 0xb9541u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b9542  call 0xbc454
    X86_AT(c, 0xb9542u);
    push32(c, 0xb9547u); x86_call_known(c, 0xbc454u, f_000bc454); X86_RET(c, 0xb9547u);
    X86_TICK(c, 17);
    // 0b9547  lea eax, [ebp - 0xc]
    X86_AT(c, 0xb9547u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0b954a  push eax
    X86_AT(c, 0xb954au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b954b  lea eax, [ebp - 4]
    X86_AT(c, 0xb954bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0b954e  push eax
    X86_AT(c, 0xb954eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b954f  push edi
    X86_AT(c, 0xb954fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b9550  call 0xbc428
    X86_AT(c, 0xb9550u);
    push32(c, 0xb9555u); x86_call_known(c, 0xbc428u, f_000bc428); X86_RET(c, 0xb9555u);
    X86_TICK(c, 23);
    // 0b9555  mov esi, 0xffffffff
    X86_AT(c, 0xb9555u);
    c.r[6] = 0xFFFFFFFFu;
    // 0b955a  sub ebx, ebx
    X86_AT(c, 0xb955au);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0b955c  add esp, 0x18
    X86_AT(c, 0xb955cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0b955f  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xb955fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0b9562  sub eax, dword ptr [ebp - 4]
    X86_AT(c, 0xb9562u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0b9565  cmp eax, 3
    X86_AT(c, 0xb9565u);
    (void)x86_sub(c, c.r[0], 0x3u, 0, 4);
    // 0b9568  jge 0xb9571
    X86_AT(c, 0xb9568u);
    if (x86_cc(c, 13)) { goto L_b9571; }
    X86_TICK(c, 7);
    // 0b956a  call 0x8b
    X86_AT(c, 0xb956au);
    push32(c, 0xb956fu); x86_call_known(c, 0x8bu, f_0000008b); X86_RET(c, 0xb956fu);
    X86_TICK(c, 2);
    // 0b956f  mov esi, ebx
    X86_AT(c, 0xb956fu);
    c.r[6] = c.r[3];
L_b9571:
    X86_TICK(c, 9);
    // 0b9571  push edi
    X86_AT(c, 0xb9571u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b9572  call 0xbc4b0
    X86_AT(c, 0xb9572u);
    push32(c, 0xb9577u); x86_call_known(c, 0xbc4b0u, f_000bc4b0); X86_RET(c, 0xb9577u);
    X86_TICK(c, 9);
    // 0b9577  add esp, 4
    X86_AT(c, 0xb9577u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b957a  and eax, eax
    X86_AT(c, 0xb957au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0b957c  jne 0xb9587
    X86_AT(c, 0xb957cu);
    if (x86_cc(c, 5)) { goto L_b9587; }
    X86_TICK(c, 9);
    // 0b957e  push edi
    X86_AT(c, 0xb957eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b957f  call 0xbc0b0
    X86_AT(c, 0xb957fu);
    push32(c, 0xb9584u); x86_call_known(c, 0xbc0b0u, f_000bc0b0); X86_RET(c, 0xb9584u);
    X86_TICK(c, 2);
    // 0b9584  add esp, 4
    X86_AT(c, 0xb9584u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_b9587:
    X86_TICK(c, 12);
    // 0b9587  cmp word ptr [0x9c544], 0
    X86_AT(c, 0xb9587u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x9C544u))), 0x0u, 0, 2);
    // 0b958f  jne 0xb95a1
    X86_AT(c, 0xb958fu);
    if (x86_cc(c, 5)) { goto L_b95a1; }
    X86_TICK(c, 9);
    // 0b9591  push 0
    X86_AT(c, 0xb9591u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0b9593  call 0xb61d4
    X86_AT(c, 0xb9593u);
    push32(c, 0xb9598u); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xb9598u);
    X86_TICK(c, 9);
    // 0b9598  push edi
    X86_AT(c, 0xb9598u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b9599  call 0xbb6b0
    X86_AT(c, 0xb9599u);
    push32(c, 0xb959eu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xb959eu);
    X86_TICK(c, 2);
    // 0b959e  add esp, 8
    X86_AT(c, 0xb959eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_b95a1:
    X86_TICK(c, 7);
    // 0b95a1  call 0xb8d08
    X86_AT(c, 0xb95a1u);
    push32(c, 0xb95a6u); x86_call_known(c, 0xb8d08u, f_000b8d08); X86_RET(c, 0xb95a6u);
    X86_TICK(c, 7);
    // 0b95a6  call 0xb5a74
    X86_AT(c, 0xb95a6u);
    push32(c, 0xb95abu); x86_call_known(c, 0xb5a74u, f_000b5a74); X86_RET(c, 0xb95abu);
    X86_TICK(c, 13);
    // 0b95ab  lea eax, [ebp - 0x14]
    X86_AT(c, 0xb95abu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFECu);
    // 0b95ae  push eax
    X86_AT(c, 0xb95aeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b95af  push 1
    X86_AT(c, 0xb95afu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b95b1  call 0xa9
    X86_AT(c, 0xb95b1u);
    push32(c, 0xb95b6u); x86_call_known(c, 0xa9u, f_000000a9); X86_RET(c, 0xb95b6u);
    X86_TICK(c, 15);
    // 0b95b6  add esp, 8
    X86_AT(c, 0xb95b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b95b9  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xb95b9u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0b95bc  and eax, 0xff00
    X86_AT(c, 0xb95bcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFF00u, 4); }
    // 0b95c1  cmp eax, 0xff00
    X86_AT(c, 0xb95c1u);
    (void)x86_sub(c, c.r[0], 0xFF00u, 0, 4);
    // 0b95c6  jne 0xb95cf
    X86_AT(c, 0xb95c6u);
    if (x86_cc(c, 5)) { goto L_b95cf; }
    X86_TICK(c, 9);
    // 0b95c8  sub eax, eax
    X86_AT(c, 0xb95c8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0b95ca  jmp 0xb9929
    X86_AT(c, 0xb95cau);
    goto L_b9929;
L_b95cf:
    X86_TICK(c, 18);
    // 0b95cf  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xb95cfu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0b95d2  shr eax, 8
    X86_AT(c, 0xb95d2u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0b95d5  and eax, 0xff
    X86_AT(c, 0xb95d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFu, 4); }
    // 0b95da  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xb95dau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0b95dd  cmp esi, 0xffffffff
    X86_AT(c, 0xb95ddu);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0b95e0  jne 0xb986d
    X86_AT(c, 0xb95e0u);
    if (x86_cc(c, 5)) { goto L_b986d; }
    X86_TICK(c, 12);
    // 0b95e6  xchg edx, eax
    X86_AT(c, 0xb95e6u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0b95e7  sub edx, 2
    X86_AT(c, 0xb95e7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0b95ea  cmp edx, 0x44
    X86_AT(c, 0xb95eau);
    (void)x86_sub(c, c.r[2], 0x44u, 0, 4);
    // 0b95ed  ja 0xb986d
    X86_AT(c, 0xb95edu);
    if (x86_cc(c, 7)) { goto L_b986d; }
    X86_TICK(c, 7);
    // 0b95f3  jmp dword ptr cs:[edx*4 + 0xb95fb]
    X86_AT(c, 0xb95f3u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xB95FBu)));
      switch (t) {
      case 0xb970fu: goto L_b970f;
      case 0xb9719u: goto L_b9719;
      case 0xb9723u: goto L_b9723;
      case 0xb972du: goto L_b972d;
      case 0xb9737u: goto L_b9737;
      case 0xb9741u: goto L_b9741;
      case 0xb974bu: goto L_b974b;
      case 0xb9755u: goto L_b9755;
      case 0xb975fu: goto L_b975f;
      case 0xb9769u: goto L_b9769;
      case 0xb9773u: goto L_b9773;
      case 0xb977du: goto L_b977d;
      case 0xb9787u: goto L_b9787;
      case 0xb9791u: goto L_b9791;
      case 0xb979bu: goto L_b979b;
      case 0xb97a5u: goto L_b97a5;
      case 0xb97afu: goto L_b97af;
      case 0xb97b9u: goto L_b97b9;
      case 0xb97c3u: goto L_b97c3;
      case 0xb97cdu: goto L_b97cd;
      case 0xb97d7u: goto L_b97d7;
      case 0xb97e1u: goto L_b97e1;
      case 0xb97ebu: goto L_b97eb;
      case 0xb97f5u: goto L_b97f5;
      case 0xb97ffu: goto L_b97ff;
      case 0xb9809u: goto L_b9809;
      case 0xb9810u: goto L_b9810;
      case 0xb9817u: goto L_b9817;
      case 0xb981eu: goto L_b981e;
      case 0xb9825u: goto L_b9825;
      case 0xb982cu: goto L_b982c;
      case 0xb9833u: goto L_b9833;
      case 0xb983au: goto L_b983a;
      case 0xb9841u: goto L_b9841;
      case 0xb9848u: goto L_b9848;
      case 0xb984fu: goto L_b984f;
      case 0xb9856u: goto L_b9856;
      case 0xb9868u: goto L_b9868;
      case 0xb986du: goto L_b986d;
      default: x86_jump(c, t); return; } }
L_b970f:
    X86_TICK(c, 9);
    // 0b970f  mov ebx, 0x31
    X86_AT(c, 0xb970fu);
    c.r[3] = 0x31u;
    // 0b9714  jmp 0xb986d
    X86_AT(c, 0xb9714u);
    goto L_b986d;
L_b9719:
    X86_TICK(c, 9);
    // 0b9719  mov ebx, 0x32
    X86_AT(c, 0xb9719u);
    c.r[3] = 0x32u;
    // 0b971e  jmp 0xb986d
    X86_AT(c, 0xb971eu);
    goto L_b986d;
L_b9723:
    X86_TICK(c, 9);
    // 0b9723  mov ebx, 0x33
    X86_AT(c, 0xb9723u);
    c.r[3] = 0x33u;
    // 0b9728  jmp 0xb986d
    X86_AT(c, 0xb9728u);
    goto L_b986d;
L_b972d:
    X86_TICK(c, 9);
    // 0b972d  mov ebx, 0x34
    X86_AT(c, 0xb972du);
    c.r[3] = 0x34u;
    // 0b9732  jmp 0xb986d
    X86_AT(c, 0xb9732u);
    goto L_b986d;
L_b9737:
    X86_TICK(c, 9);
    // 0b9737  mov ebx, 0x35
    X86_AT(c, 0xb9737u);
    c.r[3] = 0x35u;
    // 0b973c  jmp 0xb986d
    X86_AT(c, 0xb973cu);
    goto L_b986d;
L_b9741:
    X86_TICK(c, 9);
    // 0b9741  mov ebx, 0x36
    X86_AT(c, 0xb9741u);
    c.r[3] = 0x36u;
    // 0b9746  jmp 0xb986d
    X86_AT(c, 0xb9746u);
    goto L_b986d;
L_b974b:
    X86_TICK(c, 9);
    // 0b974b  mov ebx, 0x37
    X86_AT(c, 0xb974bu);
    c.r[3] = 0x37u;
    // 0b9750  jmp 0xb986d
    X86_AT(c, 0xb9750u);
    goto L_b986d;
L_b9755:
    X86_TICK(c, 9);
    // 0b9755  mov ebx, 0x38
    X86_AT(c, 0xb9755u);
    c.r[3] = 0x38u;
    // 0b975a  jmp 0xb986d
    X86_AT(c, 0xb975au);
    goto L_b986d;
L_b975f:
    X86_TICK(c, 9);
    // 0b975f  mov ebx, 0x39
    X86_AT(c, 0xb975fu);
    c.r[3] = 0x39u;
    // 0b9764  jmp 0xb986d
    X86_AT(c, 0xb9764u);
    goto L_b986d;
L_b9769:
    X86_TICK(c, 9);
    // 0b9769  mov ebx, 0x30
    X86_AT(c, 0xb9769u);
    c.r[3] = 0x30u;
    // 0b976e  jmp 0xb986d
    X86_AT(c, 0xb976eu);
    goto L_b986d;
L_b9773:
    X86_TICK(c, 9);
    // 0b9773  mov ebx, 0x41
    X86_AT(c, 0xb9773u);
    c.r[3] = 0x41u;
    // 0b9778  jmp 0xb986d
    X86_AT(c, 0xb9778u);
    goto L_b986d;
L_b977d:
    X86_TICK(c, 9);
    // 0b977d  mov ebx, 0x42
    X86_AT(c, 0xb977du);
    c.r[3] = 0x42u;
    // 0b9782  jmp 0xb986d
    X86_AT(c, 0xb9782u);
    goto L_b986d;
L_b9787:
    X86_TICK(c, 9);
    // 0b9787  mov ebx, 0x43
    X86_AT(c, 0xb9787u);
    c.r[3] = 0x43u;
    // 0b978c  jmp 0xb986d
    X86_AT(c, 0xb978cu);
    goto L_b986d;
L_b9791:
    X86_TICK(c, 9);
    // 0b9791  mov ebx, 0x44
    X86_AT(c, 0xb9791u);
    c.r[3] = 0x44u;
    // 0b9796  jmp 0xb986d
    X86_AT(c, 0xb9796u);
    goto L_b986d;
L_b979b:
    X86_TICK(c, 9);
    // 0b979b  mov ebx, 0x45
    X86_AT(c, 0xb979bu);
    c.r[3] = 0x45u;
    // 0b97a0  jmp 0xb986d
    X86_AT(c, 0xb97a0u);
    goto L_b986d;
L_b97a5:
    X86_TICK(c, 9);
    // 0b97a5  mov ebx, 0x46
    X86_AT(c, 0xb97a5u);
    c.r[3] = 0x46u;
    // 0b97aa  jmp 0xb986d
    X86_AT(c, 0xb97aau);
    goto L_b986d;
L_b97af:
    X86_TICK(c, 9);
    // 0b97af  mov ebx, 0x47
    X86_AT(c, 0xb97afu);
    c.r[3] = 0x47u;
    // 0b97b4  jmp 0xb986d
    X86_AT(c, 0xb97b4u);
    goto L_b986d;
L_b97b9:
    X86_TICK(c, 9);
    // 0b97b9  mov ebx, 0x48
    X86_AT(c, 0xb97b9u);
    c.r[3] = 0x48u;
    // 0b97be  jmp 0xb986d
    X86_AT(c, 0xb97beu);
    goto L_b986d;
L_b97c3:
    X86_TICK(c, 9);
    // 0b97c3  mov ebx, 0x49
    X86_AT(c, 0xb97c3u);
    c.r[3] = 0x49u;
    // 0b97c8  jmp 0xb986d
    X86_AT(c, 0xb97c8u);
    goto L_b986d;
L_b97cd:
    X86_TICK(c, 9);
    // 0b97cd  mov ebx, 0x4a
    X86_AT(c, 0xb97cdu);
    c.r[3] = 0x4Au;
    // 0b97d2  jmp 0xb986d
    X86_AT(c, 0xb97d2u);
    goto L_b986d;
L_b97d7:
    X86_TICK(c, 9);
    // 0b97d7  mov ebx, 0x4b
    X86_AT(c, 0xb97d7u);
    c.r[3] = 0x4Bu;
    // 0b97dc  jmp 0xb986d
    X86_AT(c, 0xb97dcu);
    goto L_b986d;
L_b97e1:
    X86_TICK(c, 9);
    // 0b97e1  mov ebx, 0x4c
    X86_AT(c, 0xb97e1u);
    c.r[3] = 0x4Cu;
    // 0b97e6  jmp 0xb986d
    X86_AT(c, 0xb97e6u);
    goto L_b986d;
L_b97eb:
    X86_TICK(c, 9);
    // 0b97eb  mov ebx, 0x4d
    X86_AT(c, 0xb97ebu);
    c.r[3] = 0x4Du;
    // 0b97f0  jmp 0xb986d
    X86_AT(c, 0xb97f0u);
    goto L_b986d;
L_b97f5:
    X86_TICK(c, 9);
    // 0b97f5  mov ebx, 0x4e
    X86_AT(c, 0xb97f5u);
    c.r[3] = 0x4Eu;
    // 0b97fa  jmp 0xb986d
    X86_AT(c, 0xb97fau);
    goto L_b986d;
L_b97ff:
    X86_TICK(c, 9);
    // 0b97ff  mov ebx, 0x4f
    X86_AT(c, 0xb97ffu);
    c.r[3] = 0x4Fu;
    // 0b9804  jmp 0xb986d
    X86_AT(c, 0xb9804u);
    goto L_b986d;
L_b9809:
    X86_TICK(c, 9);
    // 0b9809  mov ebx, 0x50
    X86_AT(c, 0xb9809u);
    c.r[3] = 0x50u;
    // 0b980e  jmp 0xb986d
    X86_AT(c, 0xb980eu);
    goto L_b986d;
L_b9810:
    X86_TICK(c, 9);
    // 0b9810  mov ebx, 0x51
    X86_AT(c, 0xb9810u);
    c.r[3] = 0x51u;
    // 0b9815  jmp 0xb986d
    X86_AT(c, 0xb9815u);
    goto L_b986d;
L_b9817:
    X86_TICK(c, 9);
    // 0b9817  mov ebx, 0x52
    X86_AT(c, 0xb9817u);
    c.r[3] = 0x52u;
    // 0b981c  jmp 0xb986d
    X86_AT(c, 0xb981cu);
    goto L_b986d;
L_b981e:
    X86_TICK(c, 9);
    // 0b981e  mov ebx, 0x53
    X86_AT(c, 0xb981eu);
    c.r[3] = 0x53u;
    // 0b9823  jmp 0xb986d
    X86_AT(c, 0xb9823u);
    goto L_b986d;
L_b9825:
    X86_TICK(c, 9);
    // 0b9825  mov ebx, 0x54
    X86_AT(c, 0xb9825u);
    c.r[3] = 0x54u;
    // 0b982a  jmp 0xb986d
    X86_AT(c, 0xb982au);
    goto L_b986d;
L_b982c:
    X86_TICK(c, 9);
    // 0b982c  mov ebx, 0x55
    X86_AT(c, 0xb982cu);
    c.r[3] = 0x55u;
    // 0b9831  jmp 0xb986d
    X86_AT(c, 0xb9831u);
    goto L_b986d;
L_b9833:
    X86_TICK(c, 9);
    // 0b9833  mov ebx, 0x56
    X86_AT(c, 0xb9833u);
    c.r[3] = 0x56u;
    // 0b9838  jmp 0xb986d
    X86_AT(c, 0xb9838u);
    goto L_b986d;
L_b983a:
    X86_TICK(c, 9);
    // 0b983a  mov ebx, 0x57
    X86_AT(c, 0xb983au);
    c.r[3] = 0x57u;
    // 0b983f  jmp 0xb986d
    X86_AT(c, 0xb983fu);
    goto L_b986d;
L_b9841:
    X86_TICK(c, 9);
    // 0b9841  mov ebx, 0x58
    X86_AT(c, 0xb9841u);
    c.r[3] = 0x58u;
    // 0b9846  jmp 0xb986d
    X86_AT(c, 0xb9846u);
    goto L_b986d;
L_b9848:
    X86_TICK(c, 9);
    // 0b9848  mov ebx, 0x59
    X86_AT(c, 0xb9848u);
    c.r[3] = 0x59u;
    // 0b984d  jmp 0xb986d
    X86_AT(c, 0xb984du);
    goto L_b986d;
L_b984f:
    X86_TICK(c, 9);
    // 0b984f  mov ebx, 0x5a
    X86_AT(c, 0xb984fu);
    c.r[3] = 0x5Au;
    // 0b9854  jmp 0xb986d
    X86_AT(c, 0xb9854u);
    goto L_b986d;
L_b9856:
    X86_TICK(c, 9);
    // 0b9856  sub ebx, ebx
    X86_AT(c, 0xb9856u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0b9858  call 0xb67d0
    X86_AT(c, 0xb9858u);
    push32(c, 0xb985du); x86_call_known(c, 0xb67d0u, f_000b67d0); X86_RET(c, 0xb985du);
    X86_TICK(c, 9);
    // 0b985d  push edi
    X86_AT(c, 0xb985du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b985e  call 0xbb6b0
    X86_AT(c, 0xb985eu);
    push32(c, 0xb9863u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xb9863u);
    X86_TICK(c, 9);
    // 0b9863  add esp, 4
    X86_AT(c, 0xb9863u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b9866  jmp 0xb986d
    X86_AT(c, 0xb9866u);
    goto L_b986d;
L_b9868:
    X86_TICK(c, 2);
    // 0b9868  mov ebx, 0x20
    X86_AT(c, 0xb9868u);
    c.r[3] = 0x20u;
L_b986d:
    X86_TICK(c, 11);
    // 0b986d  mov edx, dword ptr [ebp - 0x14]
    X86_AT(c, 0xb986du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0b9870  cmp edx, 0x50
    X86_AT(c, 0xb9870u);
    (void)x86_sub(c, c.r[2], 0x50u, 0, 4);
    // 0b9873  ja 0xb989c
    X86_AT(c, 0xb9873u);
    if (x86_cc(c, 7)) { goto L_b989c; }
    X86_TICK(c, 7);
    // 0b9875  cmp edx, 0x50
    X86_AT(c, 0xb9875u);
    (void)x86_sub(c, c.r[2], 0x50u, 0, 4);
    // 0b9878  je 0xb98be
    X86_AT(c, 0xb9878u);
    if (x86_cc(c, 4)) { goto L_b98be; }
    X86_TICK(c, 7);
    // 0b987a  cmp edx, 1
    X86_AT(c, 0xb987au);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0b987d  je 0xb98d3
    X86_AT(c, 0xb987du);
    if (x86_cc(c, 4)) { goto L_b98d3; }
    X86_TICK(c, 7);
    // 0b9883  cmp edx, 0xf
    X86_AT(c, 0xb9883u);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 0b9886  je 0xb98c5
    X86_AT(c, 0xb9886u);
    if (x86_cc(c, 4)) { goto L_b98c5; }
    X86_TICK(c, 7);
    // 0b9888  cmp edx, 0x1d
    X86_AT(c, 0xb9888u);
    (void)x86_sub(c, c.r[2], 0x1Du, 0, 4);
    // 0b988b  je 0xb98cc
    X86_AT(c, 0xb988bu);
    if (x86_cc(c, 4)) { goto L_b98cc; }
    X86_TICK(c, 7);
    // 0b988d  cmp edx, 0x4d
    X86_AT(c, 0xb988du);
    (void)x86_sub(c, c.r[2], 0x4Du, 0, 4);
    // 0b9890  je 0xb98b7
    X86_AT(c, 0xb9890u);
    if (x86_cc(c, 4)) { goto L_b98b7; }
    X86_TICK(c, 7);
    // 0b9892  cmp edx, 0x4f
    X86_AT(c, 0xb9892u);
    (void)x86_sub(c, c.r[2], 0x4Fu, 0, 4);
    // 0b9895  je 0xb98c5
    X86_AT(c, 0xb9895u);
    if (x86_cc(c, 4)) { goto L_b98c5; }
    X86_TICK(c, 7);
    // 0b9897  jmp 0xb98fa
    X86_AT(c, 0xb9897u);
    goto L_b98fa;
L_b989c:
    X86_TICK(c, 7);
    // 0b989c  cmp edx, 0x51
    X86_AT(c, 0xb989cu);
    (void)x86_sub(c, c.r[2], 0x51u, 0, 4);
    // 0b989f  je 0xb98da
    X86_AT(c, 0xb989fu);
    if (x86_cc(c, 4)) { goto L_b98da; }
    X86_TICK(c, 7);
    // 0b98a1  cmp edx, 0x5d
    X86_AT(c, 0xb98a1u);
    (void)x86_sub(c, c.r[2], 0x5Du, 0, 4);
    // 0b98a4  je 0xb98e1
    X86_AT(c, 0xb98a4u);
    if (x86_cc(c, 4)) { goto L_b98e1; }
    X86_TICK(c, 7);
    // 0b98a6  cmp edx, 0x5e
    X86_AT(c, 0xb98a6u);
    (void)x86_sub(c, c.r[2], 0x5Eu, 0, 4);
    // 0b98a9  je 0xb98f3
    X86_AT(c, 0xb98a9u);
    if (x86_cc(c, 4)) { goto L_b98f3; }
    X86_TICK(c, 7);
    // 0b98ab  cmp edx, 0x72
    X86_AT(c, 0xb98abu);
    (void)x86_sub(c, c.r[2], 0x72u, 0, 4);
    // 0b98ae  je 0xb98d3
    X86_AT(c, 0xb98aeu);
    if (x86_cc(c, 4)) { goto L_b98d3; }
    X86_TICK(c, 7);
    // 0b98b0  cmp edx, 0x73
    X86_AT(c, 0xb98b0u);
    (void)x86_sub(c, c.r[2], 0x73u, 0, 4);
    // 0b98b3  je 0xb98cc
    X86_AT(c, 0xb98b3u);
    if (x86_cc(c, 4)) { goto L_b98cc; }
    X86_TICK(c, 7);
    // 0b98b5  jmp 0xb98fa
    X86_AT(c, 0xb98b5u);
    goto L_b98fa;
L_b98b7:
    X86_TICK(c, 9);
    // 0b98b7  mov ebx, 5
    X86_AT(c, 0xb98b7u);
    c.r[3] = 0x5u;
    // 0b98bc  jmp 0xb98fa
    X86_AT(c, 0xb98bcu);
    goto L_b98fa;
L_b98be:
    X86_TICK(c, 9);
    // 0b98be  mov ebx, 6
    X86_AT(c, 0xb98beu);
    c.r[3] = 0x6u;
    // 0b98c3  jmp 0xb98fa
    X86_AT(c, 0xb98c3u);
    goto L_b98fa;
L_b98c5:
    X86_TICK(c, 9);
    // 0b98c5  mov ebx, 3
    X86_AT(c, 0xb98c5u);
    c.r[3] = 0x3u;
    // 0b98ca  jmp 0xb98fa
    X86_AT(c, 0xb98cau);
    goto L_b98fa;
L_b98cc:
    X86_TICK(c, 9);
    // 0b98cc  mov ebx, 4
    X86_AT(c, 0xb98ccu);
    c.r[3] = 0x4u;
    // 0b98d1  jmp 0xb98fa
    X86_AT(c, 0xb98d1u);
    goto L_b98fa;
L_b98d3:
    X86_TICK(c, 9);
    // 0b98d3  mov ebx, 1
    X86_AT(c, 0xb98d3u);
    c.r[3] = 0x1u;
    // 0b98d8  jmp 0xb98fa
    X86_AT(c, 0xb98d8u);
    goto L_b98fa;
L_b98da:
    X86_TICK(c, 9);
    // 0b98da  mov ebx, 7
    X86_AT(c, 0xb98dau);
    c.r[3] = 0x7u;
    // 0b98df  jmp 0xb98fa
    X86_AT(c, 0xb98dfu);
    goto L_b98fa;
L_b98e1:
    X86_TICK(c, 9);
    // 0b98e1  sub ebx, ebx
    X86_AT(c, 0xb98e1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0b98e3  call 0xba14c
    X86_AT(c, 0xb98e3u);
    push32(c, 0xb98e8u); x86_call_known(c, 0xba14cu, f_000ba14c); X86_RET(c, 0xb98e8u);
    X86_TICK(c, 9);
    // 0b98e8  push edi
    X86_AT(c, 0xb98e8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b98e9  call 0xbb6b0
    X86_AT(c, 0xb98e9u);
    push32(c, 0xb98eeu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xb98eeu);
    X86_TICK(c, 9);
    // 0b98ee  add esp, 4
    X86_AT(c, 0xb98eeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b98f1  jmp 0xb98fa
    X86_AT(c, 0xb98f1u);
    goto L_b98fa;
L_b98f3:
    X86_TICK(c, 9);
    // 0b98f3  sub ebx, ebx
    X86_AT(c, 0xb98f3u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0b98f5  call 0xba180
    X86_AT(c, 0xb98f5u);
    push32(c, 0xb98fau); x86_call_known(c, 0xba180u, f_000ba180); X86_RET(c, 0xb98fau);
L_b98fa:
    X86_TICK(c, 7);
    // 0b98fa  cmp ebx, 0x20
    X86_AT(c, 0xb98fau);
    (void)x86_sub(c, c.r[3], 0x20u, 0, 4);
    // 0b98fd  jl 0xb990a
    X86_AT(c, 0xb98fdu);
    if (x86_cc(c, 12)) { goto L_b990a; }
    X86_TICK(c, 13);
    // 0b98ff  mov eax, ebx
    X86_AT(c, 0xb98ffu);
    c.r[0] = c.r[3];
    // 0b9901  push eax
    X86_AT(c, 0xb9901u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b9902  push edi
    X86_AT(c, 0xb9902u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b9903  call 0xbbd1c
    X86_AT(c, 0xb9903u);
    push32(c, 0xb9908u); x86_call_known(c, 0xbbd1cu, f_000bbd1c); X86_RET(c, 0xb9908u);
    X86_TICK(c, 7);
    // 0b9908  jmp 0xb9915
    X86_AT(c, 0xb9908u);
    goto L_b9915;
L_b990a:
    X86_TICK(c, 11);
    // 0b990a  push 0x21ac
    X86_AT(c, 0xb990au);
    { uint32_t v = 0x21ACu; push32(c, v); }
    // 0b990f  push edi
    X86_AT(c, 0xb990fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b9910  call 0xbbba4
    X86_AT(c, 0xb9910u);
    push32(c, 0xb9915u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb9915u);
L_b9915:
    X86_TICK(c, 21);
    // 0b9915  add esp, 8
    X86_AT(c, 0xb9915u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b9918  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xb9918u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0b991b  push dword ptr [ebp - 4]
    X86_AT(c, 0xb991bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0b991e  push edi
    X86_AT(c, 0xb991eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b991f  call 0xbc174
    X86_AT(c, 0xb991fu);
    push32(c, 0xb9924u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb9924u);
    X86_TICK(c, 4);
    // 0b9924  mov eax, ebx
    X86_AT(c, 0xb9924u);
    c.r[0] = c.r[3];
    // 0b9926  add esp, 0xc
    X86_AT(c, 0xb9926u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_b9929:
    X86_TICK(c, 28);
    // 0b9929  pop edi
    X86_AT(c, 0xb9929u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b992a  pop esi
    X86_AT(c, 0xb992au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b992b  pop ebx
    X86_AT(c, 0xb992bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0b992c  leave 
    X86_AT(c, 0xb992cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b992d  ret 
    X86_AT(c, 0xb992du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb9514u, "ran off the end of a function");
}
void f_000b986d(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0b986d  mov edx, dword ptr [ebp - 0x14]
    X86_AT(c, 0xb986du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0b9870  cmp edx, 0x50
    X86_AT(c, 0xb9870u);
    (void)x86_sub(c, c.r[2], 0x50u, 0, 4);
    // 0b9873  ja 0xb989c
    X86_AT(c, 0xb9873u);
    if (x86_cc(c, 7)) { goto L_b989c; }
    X86_TICK(c, 7);
    // 0b9875  cmp edx, 0x50
    X86_AT(c, 0xb9875u);
    (void)x86_sub(c, c.r[2], 0x50u, 0, 4);
    // 0b9878  je 0xb98be
    X86_AT(c, 0xb9878u);
    if (x86_cc(c, 4)) { goto L_b98be; }
    X86_TICK(c, 7);
    // 0b987a  cmp edx, 1
    X86_AT(c, 0xb987au);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0b987d  je 0xb98d3
    X86_AT(c, 0xb987du);
    if (x86_cc(c, 4)) { goto L_b98d3; }
    X86_TICK(c, 7);
    // 0b9883  cmp edx, 0xf
    X86_AT(c, 0xb9883u);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 0b9886  je 0xb98c5
    X86_AT(c, 0xb9886u);
    if (x86_cc(c, 4)) { goto L_b98c5; }
    X86_TICK(c, 7);
    // 0b9888  cmp edx, 0x1d
    X86_AT(c, 0xb9888u);
    (void)x86_sub(c, c.r[2], 0x1Du, 0, 4);
    // 0b988b  je 0xb98cc
    X86_AT(c, 0xb988bu);
    if (x86_cc(c, 4)) { goto L_b98cc; }
    X86_TICK(c, 7);
    // 0b988d  cmp edx, 0x4d
    X86_AT(c, 0xb988du);
    (void)x86_sub(c, c.r[2], 0x4Du, 0, 4);
    // 0b9890  je 0xb98b7
    X86_AT(c, 0xb9890u);
    if (x86_cc(c, 4)) { goto L_b98b7; }
    X86_TICK(c, 7);
    // 0b9892  cmp edx, 0x4f
    X86_AT(c, 0xb9892u);
    (void)x86_sub(c, c.r[2], 0x4Fu, 0, 4);
    // 0b9895  je 0xb98c5
    X86_AT(c, 0xb9895u);
    if (x86_cc(c, 4)) { goto L_b98c5; }
    X86_TICK(c, 7);
    // 0b9897  jmp 0xb98fa
    X86_AT(c, 0xb9897u);
    goto L_b98fa;
L_b989c:
    X86_TICK(c, 7);
    // 0b989c  cmp edx, 0x51
    X86_AT(c, 0xb989cu);
    (void)x86_sub(c, c.r[2], 0x51u, 0, 4);
    // 0b989f  je 0xb98da
    X86_AT(c, 0xb989fu);
    if (x86_cc(c, 4)) { goto L_b98da; }
    X86_TICK(c, 7);
    // 0b98a1  cmp edx, 0x5d
    X86_AT(c, 0xb98a1u);
    (void)x86_sub(c, c.r[2], 0x5Du, 0, 4);
    // 0b98a4  je 0xb98e1
    X86_AT(c, 0xb98a4u);
    if (x86_cc(c, 4)) { goto L_b98e1; }
    X86_TICK(c, 7);
    // 0b98a6  cmp edx, 0x5e
    X86_AT(c, 0xb98a6u);
    (void)x86_sub(c, c.r[2], 0x5Eu, 0, 4);
    // 0b98a9  je 0xb98f3
    X86_AT(c, 0xb98a9u);
    if (x86_cc(c, 4)) { goto L_b98f3; }
    X86_TICK(c, 7);
    // 0b98ab  cmp edx, 0x72
    X86_AT(c, 0xb98abu);
    (void)x86_sub(c, c.r[2], 0x72u, 0, 4);
    // 0b98ae  je 0xb98d3
    X86_AT(c, 0xb98aeu);
    if (x86_cc(c, 4)) { goto L_b98d3; }
    X86_TICK(c, 7);
    // 0b98b0  cmp edx, 0x73
    X86_AT(c, 0xb98b0u);
    (void)x86_sub(c, c.r[2], 0x73u, 0, 4);
    // 0b98b3  je 0xb98cc
    X86_AT(c, 0xb98b3u);
    if (x86_cc(c, 4)) { goto L_b98cc; }
    X86_TICK(c, 7);
    // 0b98b5  jmp 0xb98fa
    X86_AT(c, 0xb98b5u);
    goto L_b98fa;
L_b98b7:
    X86_TICK(c, 9);
    // 0b98b7  mov ebx, 5
    X86_AT(c, 0xb98b7u);
    c.r[3] = 0x5u;
    // 0b98bc  jmp 0xb98fa
    X86_AT(c, 0xb98bcu);
    goto L_b98fa;
L_b98be:
    X86_TICK(c, 9);
    // 0b98be  mov ebx, 6
    X86_AT(c, 0xb98beu);
    c.r[3] = 0x6u;
    // 0b98c3  jmp 0xb98fa
    X86_AT(c, 0xb98c3u);
    goto L_b98fa;
L_b98c5:
    X86_TICK(c, 9);
    // 0b98c5  mov ebx, 3
    X86_AT(c, 0xb98c5u);
    c.r[3] = 0x3u;
    // 0b98ca  jmp 0xb98fa
    X86_AT(c, 0xb98cau);
    goto L_b98fa;
L_b98cc:
    X86_TICK(c, 9);
    // 0b98cc  mov ebx, 4
    X86_AT(c, 0xb98ccu);
    c.r[3] = 0x4u;
    // 0b98d1  jmp 0xb98fa
    X86_AT(c, 0xb98d1u);
    goto L_b98fa;
L_b98d3:
    X86_TICK(c, 9);
    // 0b98d3  mov ebx, 1
    X86_AT(c, 0xb98d3u);
    c.r[3] = 0x1u;
    // 0b98d8  jmp 0xb98fa
    X86_AT(c, 0xb98d8u);
    goto L_b98fa;
L_b98da:
    X86_TICK(c, 9);
    // 0b98da  mov ebx, 7
    X86_AT(c, 0xb98dau);
    c.r[3] = 0x7u;
    // 0b98df  jmp 0xb98fa
    X86_AT(c, 0xb98dfu);
    goto L_b98fa;
L_b98e1:
    X86_TICK(c, 9);
    // 0b98e1  sub ebx, ebx
    X86_AT(c, 0xb98e1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0b98e3  call 0xba14c
    X86_AT(c, 0xb98e3u);
    push32(c, 0xb98e8u); x86_call_known(c, 0xba14cu, f_000ba14c); X86_RET(c, 0xb98e8u);
    X86_TICK(c, 9);
    // 0b98e8  push edi
    X86_AT(c, 0xb98e8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b98e9  call 0xbb6b0
    X86_AT(c, 0xb98e9u);
    push32(c, 0xb98eeu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xb98eeu);
    X86_TICK(c, 9);
    // 0b98ee  add esp, 4
    X86_AT(c, 0xb98eeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b98f1  jmp 0xb98fa
    X86_AT(c, 0xb98f1u);
    goto L_b98fa;
L_b98f3:
    X86_TICK(c, 9);
    // 0b98f3  sub ebx, ebx
    X86_AT(c, 0xb98f3u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0b98f5  call 0xba180
    X86_AT(c, 0xb98f5u);
    push32(c, 0xb98fau); x86_call_known(c, 0xba180u, f_000ba180); X86_RET(c, 0xb98fau);
L_b98fa:
    X86_TICK(c, 7);
    // 0b98fa  cmp ebx, 0x20
    X86_AT(c, 0xb98fau);
    (void)x86_sub(c, c.r[3], 0x20u, 0, 4);
    // 0b98fd  jl 0xb990a
    X86_AT(c, 0xb98fdu);
    if (x86_cc(c, 12)) { goto L_b990a; }
    X86_TICK(c, 13);
    // 0b98ff  mov eax, ebx
    X86_AT(c, 0xb98ffu);
    c.r[0] = c.r[3];
    // 0b9901  push eax
    X86_AT(c, 0xb9901u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b9902  push edi
    X86_AT(c, 0xb9902u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b9903  call 0xbbd1c
    X86_AT(c, 0xb9903u);
    push32(c, 0xb9908u); x86_call_known(c, 0xbbd1cu, f_000bbd1c); X86_RET(c, 0xb9908u);
    X86_TICK(c, 7);
    // 0b9908  jmp 0xb9915
    X86_AT(c, 0xb9908u);
    goto L_b9915;
L_b990a:
    X86_TICK(c, 11);
    // 0b990a  push 0x21ac
    X86_AT(c, 0xb990au);
    { uint32_t v = 0x21ACu; push32(c, v); }
    // 0b990f  push edi
    X86_AT(c, 0xb990fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b9910  call 0xbbba4
    X86_AT(c, 0xb9910u);
    push32(c, 0xb9915u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xb9915u);
L_b9915:
    X86_TICK(c, 21);
    // 0b9915  add esp, 8
    X86_AT(c, 0xb9915u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b9918  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xb9918u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0b991b  push dword ptr [ebp - 4]
    X86_AT(c, 0xb991bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0b991e  push edi
    X86_AT(c, 0xb991eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b991f  call 0xbc174
    X86_AT(c, 0xb991fu);
    push32(c, 0xb9924u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb9924u);
    X86_TICK(c, 32);
    // 0b9924  mov eax, ebx
    X86_AT(c, 0xb9924u);
    c.r[0] = c.r[3];
    // 0b9926  add esp, 0xc
    X86_AT(c, 0xb9926u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0b9929  pop edi
    X86_AT(c, 0xb9929u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b992a  pop esi
    X86_AT(c, 0xb992au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b992b  pop ebx
    X86_AT(c, 0xb992bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0b992c  leave 
    X86_AT(c, 0xb992cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b992d  ret 
    X86_AT(c, 0xb992du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb986du, "ran off the end of a function");
}
void f_000b9930(X86Cpu& c) {
    X86_TICK(c, 34);
    // 0b9930  push ebp
    X86_AT(c, 0xb9930u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b9931  mov ebp, esp
    X86_AT(c, 0xb9931u);
    c.r[5] = c.r[4];
    // 0b9933  push eax
    X86_AT(c, 0xb9933u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b9934  push ebx
    X86_AT(c, 0xb9934u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b9935  push esi
    X86_AT(c, 0xb9935u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b9936  push edi
    X86_AT(c, 0xb9936u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b9937  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xb9937u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0b993a  sub eax, eax
    X86_AT(c, 0xb993au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0b993c  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xb993cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0b993f  xchg esi, eax
    X86_AT(c, 0xb993fu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0b9940  cmp si, word ptr [0x9c544]
    X86_AT(c, 0xb9940u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(0x9C544u))), 0, 2);
    // 0b9947  jne 0xb9958
    X86_AT(c, 0xb9947u);
    if (x86_cc(c, 5)) { goto L_b9958; }
    X86_TICK(c, 9);
    // 0b9949  push esi
    X86_AT(c, 0xb9949u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b994a  call 0xb61d4
    X86_AT(c, 0xb994au);
    push32(c, 0xb994fu); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xb994fu);
    X86_TICK(c, 9);
    // 0b994f  push edi
    X86_AT(c, 0xb994fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b9950  call 0xbb6b0
    X86_AT(c, 0xb9950u);
    push32(c, 0xb9955u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xb9955u);
    X86_TICK(c, 2);
    // 0b9955  add esp, 8
    X86_AT(c, 0xb9955u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_b9958:
    X86_TICK(c, 7);
    // 0b9958  call 0xb8d08
    X86_AT(c, 0xb9958u);
    push32(c, 0xb995du); x86_call_known(c, 0xb8d08u, f_000b8d08); X86_RET(c, 0xb995du);
    X86_TICK(c, 7);
    // 0b995d  call 0xb5a74
    X86_AT(c, 0xb995du);
    push32(c, 0xb9962u); x86_call_known(c, 0xb5a74u, f_000b5a74); X86_RET(c, 0xb9962u);
    X86_TICK(c, 13);
    // 0b9962  lea ebx, [ebp - 4]
    X86_AT(c, 0xb9962u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0b9965  push ebx
    X86_AT(c, 0xb9965u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b9966  push 1
    X86_AT(c, 0xb9966u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b9968  call 0xa9
    X86_AT(c, 0xb9968u);
    push32(c, 0xb996du); x86_call_known(c, 0xa9u, f_000000a9); X86_RET(c, 0xb996du);
    X86_TICK(c, 15);
    // 0b996d  add esp, 8
    X86_AT(c, 0xb996du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b9970  mov eax, dword ptr [ebx]
    X86_AT(c, 0xb9970u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0b9972  and eax, 0xff00
    X86_AT(c, 0xb9972u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFF00u, 4); }
    // 0b9977  cmp eax, 0xff00
    X86_AT(c, 0xb9977u);
    (void)x86_sub(c, c.r[0], 0xFF00u, 0, 4);
    // 0b997c  jne 0xb9985
    X86_AT(c, 0xb997cu);
    if (x86_cc(c, 5)) { goto L_b9985; }
    X86_TICK(c, 9);
    // 0b997e  sub eax, eax
    X86_AT(c, 0xb997eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0b9980  jmp 0xb9d29
    X86_AT(c, 0xb9980u);
    goto L_b9d29;
L_b9985:
    X86_TICK(c, 23);
    // 0b9985  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xb9985u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0b9988  shr eax, 8
    X86_AT(c, 0xb9988u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0b998b  and eax, 0xff
    X86_AT(c, 0xb998bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFu, 4); }
    // 0b9990  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xb9990u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0b9993  xchg edx, eax
    X86_AT(c, 0xb9993u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0b9994  dec edx
    X86_AT(c, 0xb9994u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0b9995  cmp edx, 0x72
    X86_AT(c, 0xb9995u);
    (void)x86_sub(c, c.r[2], 0x72u, 0, 4);
    // 0b9998  ja 0xb9d27
    X86_AT(c, 0xb9998u);
    if (x86_cc(c, 7)) { goto L_b9d27; }
    X86_TICK(c, 7);
    // 0b999e  jmp dword ptr cs:[edx*4 + 0xb99a6]
    X86_AT(c, 0xb999eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xB99A6u)));
      switch (t) {
      case 0xb9b72u: goto L_b9b72;
      case 0xb9b7cu: goto L_b9b7c;
      case 0xb9b86u: goto L_b9b86;
      case 0xb9b90u: goto L_b9b90;
      case 0xb9b9au: goto L_b9b9a;
      case 0xb9ba4u: goto L_b9ba4;
      case 0xb9baeu: goto L_b9bae;
      case 0xb9bb8u: goto L_b9bb8;
      case 0xb9bc2u: goto L_b9bc2;
      case 0xb9bccu: goto L_b9bcc;
      case 0xb9bd6u: goto L_b9bd6;
      case 0xb9be0u: goto L_b9be0;
      case 0xb9beau: goto L_b9bea;
      case 0xb9bf4u: goto L_b9bf4;
      case 0xb9bfeu: goto L_b9bfe;
      case 0xb9c08u: goto L_b9c08;
      case 0xb9c12u: goto L_b9c12;
      case 0xb9c1cu: goto L_b9c1c;
      case 0xb9c26u: goto L_b9c26;
      case 0xb9c30u: goto L_b9c30;
      case 0xb9c3au: goto L_b9c3a;
      case 0xb9c44u: goto L_b9c44;
      case 0xb9c4eu: goto L_b9c4e;
      case 0xb9c58u: goto L_b9c58;
      case 0xb9c62u: goto L_b9c62;
      case 0xb9c6cu: goto L_b9c6c;
      case 0xb9c76u: goto L_b9c76;
      case 0xb9c80u: goto L_b9c80;
      case 0xb9c8au: goto L_b9c8a;
      case 0xb9c94u: goto L_b9c94;
      case 0xb9c9eu: goto L_b9c9e;
      case 0xb9ca8u: goto L_b9ca8;
      case 0xb9cb2u: goto L_b9cb2;
      case 0xb9cbcu: goto L_b9cbc;
      case 0xb9cc6u: goto L_b9cc6;
      case 0xb9ccdu: goto L_b9ccd;
      case 0xb9cd4u: goto L_b9cd4;
      case 0xb9cddu: goto L_b9cdd;
      case 0xb9ce4u: goto L_b9ce4;
      case 0xb9cebu: goto L_b9ceb;
      case 0xb9cf2u: goto L_b9cf2;
      case 0xb9cf9u: goto L_b9cf9;
      case 0xb9d00u: goto L_b9d00;
      case 0xb9d07u: goto L_b9d07;
      case 0xb9d0eu: goto L_b9d0e;
      case 0xb9d20u: goto L_b9d20;
      case 0xb9d27u: goto L_b9d27;
      default: x86_jump(c, t); return; } }
L_b9b72:
    X86_TICK(c, 9);
    // 0b9b72  mov esi, 0x31
    X86_AT(c, 0xb9b72u);
    c.r[6] = 0x31u;
    // 0b9b77  jmp 0xb9d27
    X86_AT(c, 0xb9b77u);
    goto L_b9d27;
L_b9b7c:
    X86_TICK(c, 9);
    // 0b9b7c  mov esi, 0x32
    X86_AT(c, 0xb9b7cu);
    c.r[6] = 0x32u;
    // 0b9b81  jmp 0xb9d27
    X86_AT(c, 0xb9b81u);
    goto L_b9d27;
L_b9b86:
    X86_TICK(c, 9);
    // 0b9b86  mov esi, 0x33
    X86_AT(c, 0xb9b86u);
    c.r[6] = 0x33u;
    // 0b9b8b  jmp 0xb9d27
    X86_AT(c, 0xb9b8bu);
    goto L_b9d27;
L_b9b90:
    X86_TICK(c, 9);
    // 0b9b90  mov esi, 0x34
    X86_AT(c, 0xb9b90u);
    c.r[6] = 0x34u;
    // 0b9b95  jmp 0xb9d27
    X86_AT(c, 0xb9b95u);
    goto L_b9d27;
L_b9b9a:
    X86_TICK(c, 9);
    // 0b9b9a  mov esi, 0x35
    X86_AT(c, 0xb9b9au);
    c.r[6] = 0x35u;
    // 0b9b9f  jmp 0xb9d27
    X86_AT(c, 0xb9b9fu);
    goto L_b9d27;
L_b9ba4:
    X86_TICK(c, 9);
    // 0b9ba4  mov esi, 0x36
    X86_AT(c, 0xb9ba4u);
    c.r[6] = 0x36u;
    // 0b9ba9  jmp 0xb9d27
    X86_AT(c, 0xb9ba9u);
    goto L_b9d27;
L_b9bae:
    X86_TICK(c, 9);
    // 0b9bae  mov esi, 0x37
    X86_AT(c, 0xb9baeu);
    c.r[6] = 0x37u;
    // 0b9bb3  jmp 0xb9d27
    X86_AT(c, 0xb9bb3u);
    goto L_b9d27;
L_b9bb8:
    X86_TICK(c, 9);
    // 0b9bb8  mov esi, 0x38
    X86_AT(c, 0xb9bb8u);
    c.r[6] = 0x38u;
    // 0b9bbd  jmp 0xb9d27
    X86_AT(c, 0xb9bbdu);
    goto L_b9d27;
L_b9bc2:
    X86_TICK(c, 9);
    // 0b9bc2  mov esi, 0x39
    X86_AT(c, 0xb9bc2u);
    c.r[6] = 0x39u;
    // 0b9bc7  jmp 0xb9d27
    X86_AT(c, 0xb9bc7u);
    goto L_b9d27;
L_b9bcc:
    X86_TICK(c, 9);
    // 0b9bcc  mov esi, 0x30
    X86_AT(c, 0xb9bccu);
    c.r[6] = 0x30u;
    // 0b9bd1  jmp 0xb9d27
    X86_AT(c, 0xb9bd1u);
    goto L_b9d27;
L_b9bd6:
    X86_TICK(c, 9);
    // 0b9bd6  mov esi, 0x41
    X86_AT(c, 0xb9bd6u);
    c.r[6] = 0x41u;
    // 0b9bdb  jmp 0xb9d27
    X86_AT(c, 0xb9bdbu);
    goto L_b9d27;
L_b9be0:
    X86_TICK(c, 9);
    // 0b9be0  mov esi, 0x42
    X86_AT(c, 0xb9be0u);
    c.r[6] = 0x42u;
    // 0b9be5  jmp 0xb9d27
    X86_AT(c, 0xb9be5u);
    goto L_b9d27;
L_b9bea:
    X86_TICK(c, 9);
    // 0b9bea  mov esi, 0x43
    X86_AT(c, 0xb9beau);
    c.r[6] = 0x43u;
    // 0b9bef  jmp 0xb9d27
    X86_AT(c, 0xb9befu);
    goto L_b9d27;
L_b9bf4:
    X86_TICK(c, 9);
    // 0b9bf4  mov esi, 0x44
    X86_AT(c, 0xb9bf4u);
    c.r[6] = 0x44u;
    // 0b9bf9  jmp 0xb9d27
    X86_AT(c, 0xb9bf9u);
    goto L_b9d27;
L_b9bfe:
    X86_TICK(c, 9);
    // 0b9bfe  mov esi, 0x45
    X86_AT(c, 0xb9bfeu);
    c.r[6] = 0x45u;
    // 0b9c03  jmp 0xb9d27
    X86_AT(c, 0xb9c03u);
    goto L_b9d27;
L_b9c08:
    X86_TICK(c, 9);
    // 0b9c08  mov esi, 0x46
    X86_AT(c, 0xb9c08u);
    c.r[6] = 0x46u;
    // 0b9c0d  jmp 0xb9d27
    X86_AT(c, 0xb9c0du);
    goto L_b9d27;
L_b9c12:
    X86_TICK(c, 9);
    // 0b9c12  mov esi, 0x47
    X86_AT(c, 0xb9c12u);
    c.r[6] = 0x47u;
    // 0b9c17  jmp 0xb9d27
    X86_AT(c, 0xb9c17u);
    goto L_b9d27;
L_b9c1c:
    X86_TICK(c, 9);
    // 0b9c1c  mov esi, 0x48
    X86_AT(c, 0xb9c1cu);
    c.r[6] = 0x48u;
    // 0b9c21  jmp 0xb9d27
    X86_AT(c, 0xb9c21u);
    goto L_b9d27;
L_b9c26:
    X86_TICK(c, 9);
    // 0b9c26  mov esi, 0x49
    X86_AT(c, 0xb9c26u);
    c.r[6] = 0x49u;
    // 0b9c2b  jmp 0xb9d27
    X86_AT(c, 0xb9c2bu);
    goto L_b9d27;
L_b9c30:
    X86_TICK(c, 9);
    // 0b9c30  mov esi, 0x4a
    X86_AT(c, 0xb9c30u);
    c.r[6] = 0x4Au;
    // 0b9c35  jmp 0xb9d27
    X86_AT(c, 0xb9c35u);
    goto L_b9d27;
L_b9c3a:
    X86_TICK(c, 9);
    // 0b9c3a  mov esi, 0x4b
    X86_AT(c, 0xb9c3au);
    c.r[6] = 0x4Bu;
    // 0b9c3f  jmp 0xb9d27
    X86_AT(c, 0xb9c3fu);
    goto L_b9d27;
L_b9c44:
    X86_TICK(c, 9);
    // 0b9c44  mov esi, 0x4c
    X86_AT(c, 0xb9c44u);
    c.r[6] = 0x4Cu;
    // 0b9c49  jmp 0xb9d27
    X86_AT(c, 0xb9c49u);
    goto L_b9d27;
L_b9c4e:
    X86_TICK(c, 9);
    // 0b9c4e  mov esi, 0x4d
    X86_AT(c, 0xb9c4eu);
    c.r[6] = 0x4Du;
    // 0b9c53  jmp 0xb9d27
    X86_AT(c, 0xb9c53u);
    goto L_b9d27;
L_b9c58:
    X86_TICK(c, 9);
    // 0b9c58  mov esi, 0x4e
    X86_AT(c, 0xb9c58u);
    c.r[6] = 0x4Eu;
    // 0b9c5d  jmp 0xb9d27
    X86_AT(c, 0xb9c5du);
    goto L_b9d27;
L_b9c62:
    X86_TICK(c, 9);
    // 0b9c62  mov esi, 0x4f
    X86_AT(c, 0xb9c62u);
    c.r[6] = 0x4Fu;
    // 0b9c67  jmp 0xb9d27
    X86_AT(c, 0xb9c67u);
    goto L_b9d27;
L_b9c6c:
    X86_TICK(c, 9);
    // 0b9c6c  mov esi, 0x50
    X86_AT(c, 0xb9c6cu);
    c.r[6] = 0x50u;
    // 0b9c71  jmp 0xb9d27
    X86_AT(c, 0xb9c71u);
    goto L_b9d27;
L_b9c76:
    X86_TICK(c, 9);
    // 0b9c76  mov esi, 0x51
    X86_AT(c, 0xb9c76u);
    c.r[6] = 0x51u;
    // 0b9c7b  jmp 0xb9d27
    X86_AT(c, 0xb9c7bu);
    goto L_b9d27;
L_b9c80:
    X86_TICK(c, 9);
    // 0b9c80  mov esi, 0x52
    X86_AT(c, 0xb9c80u);
    c.r[6] = 0x52u;
    // 0b9c85  jmp 0xb9d27
    X86_AT(c, 0xb9c85u);
    goto L_b9d27;
L_b9c8a:
    X86_TICK(c, 9);
    // 0b9c8a  mov esi, 0x53
    X86_AT(c, 0xb9c8au);
    c.r[6] = 0x53u;
    // 0b9c8f  jmp 0xb9d27
    X86_AT(c, 0xb9c8fu);
    goto L_b9d27;
L_b9c94:
    X86_TICK(c, 9);
    // 0b9c94  mov esi, 0x54
    X86_AT(c, 0xb9c94u);
    c.r[6] = 0x54u;
    // 0b9c99  jmp 0xb9d27
    X86_AT(c, 0xb9c99u);
    goto L_b9d27;
L_b9c9e:
    X86_TICK(c, 9);
    // 0b9c9e  mov esi, 0x55
    X86_AT(c, 0xb9c9eu);
    c.r[6] = 0x55u;
    // 0b9ca3  jmp 0xb9d27
    X86_AT(c, 0xb9ca3u);
    goto L_b9d27;
L_b9ca8:
    X86_TICK(c, 9);
    // 0b9ca8  mov esi, 0x56
    X86_AT(c, 0xb9ca8u);
    c.r[6] = 0x56u;
    // 0b9cad  jmp 0xb9d27
    X86_AT(c, 0xb9cadu);
    goto L_b9d27;
L_b9cb2:
    X86_TICK(c, 9);
    // 0b9cb2  mov esi, 0x57
    X86_AT(c, 0xb9cb2u);
    c.r[6] = 0x57u;
    // 0b9cb7  jmp 0xb9d27
    X86_AT(c, 0xb9cb7u);
    goto L_b9d27;
L_b9cbc:
    X86_TICK(c, 9);
    // 0b9cbc  mov esi, 0x58
    X86_AT(c, 0xb9cbcu);
    c.r[6] = 0x58u;
    // 0b9cc1  jmp 0xb9d27
    X86_AT(c, 0xb9cc1u);
    goto L_b9d27;
L_b9cc6:
    X86_TICK(c, 9);
    // 0b9cc6  mov esi, 0x59
    X86_AT(c, 0xb9cc6u);
    c.r[6] = 0x59u;
    // 0b9ccb  jmp 0xb9d27
    X86_AT(c, 0xb9ccbu);
    goto L_b9d27;
L_b9ccd:
    X86_TICK(c, 9);
    // 0b9ccd  mov esi, 0x5a
    X86_AT(c, 0xb9ccdu);
    c.r[6] = 0x5Au;
    // 0b9cd2  jmp 0xb9d27
    X86_AT(c, 0xb9cd2u);
    goto L_b9d27;
L_b9cd4:
    X86_TICK(c, 9);
    // 0b9cd4  sub esi, esi
    X86_AT(c, 0xb9cd4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0b9cd6  call 0xb67d0
    X86_AT(c, 0xb9cd6u);
    push32(c, 0xb9cdbu); x86_call_known(c, 0xb67d0u, f_000b67d0); X86_RET(c, 0xb9cdbu);
    X86_TICK(c, 7);
    // 0b9cdb  jmp 0xb9d15
    X86_AT(c, 0xb9cdbu);
    goto L_b9d15;
L_b9cdd:
    X86_TICK(c, 9);
    // 0b9cdd  mov esi, 0x20
    X86_AT(c, 0xb9cddu);
    c.r[6] = 0x20u;
    // 0b9ce2  jmp 0xb9d27
    X86_AT(c, 0xb9ce2u);
    goto L_b9d27;
L_b9ce4:
    X86_TICK(c, 9);
    // 0b9ce4  mov esi, 3
    X86_AT(c, 0xb9ce4u);
    c.r[6] = 0x3u;
    // 0b9ce9  jmp 0xb9d27
    X86_AT(c, 0xb9ce9u);
    goto L_b9d27;
L_b9ceb:
    X86_TICK(c, 9);
    // 0b9ceb  mov esi, 4
    X86_AT(c, 0xb9cebu);
    c.r[6] = 0x4u;
    // 0b9cf0  jmp 0xb9d27
    X86_AT(c, 0xb9cf0u);
    goto L_b9d27;
L_b9cf2:
    X86_TICK(c, 9);
    // 0b9cf2  mov esi, 1
    X86_AT(c, 0xb9cf2u);
    c.r[6] = 0x1u;
    // 0b9cf7  jmp 0xb9d27
    X86_AT(c, 0xb9cf7u);
    goto L_b9d27;
L_b9cf9:
    X86_TICK(c, 9);
    // 0b9cf9  mov esi, 5
    X86_AT(c, 0xb9cf9u);
    c.r[6] = 0x5u;
    // 0b9cfe  jmp 0xb9d27
    X86_AT(c, 0xb9cfeu);
    goto L_b9d27;
L_b9d00:
    X86_TICK(c, 9);
    // 0b9d00  mov esi, 6
    X86_AT(c, 0xb9d00u);
    c.r[6] = 0x6u;
    // 0b9d05  jmp 0xb9d27
    X86_AT(c, 0xb9d05u);
    goto L_b9d27;
L_b9d07:
    X86_TICK(c, 9);
    // 0b9d07  mov esi, 7
    X86_AT(c, 0xb9d07u);
    c.r[6] = 0x7u;
    // 0b9d0c  jmp 0xb9d27
    X86_AT(c, 0xb9d0cu);
    goto L_b9d27;
L_b9d0e:
    X86_TICK(c, 9);
    // 0b9d0e  sub esi, esi
    X86_AT(c, 0xb9d0eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0b9d10  call 0xba14c
    X86_AT(c, 0xb9d10u);
    push32(c, 0xb9d15u); x86_call_known(c, 0xba14cu, f_000ba14c); X86_RET(c, 0xb9d15u);
L_b9d15:
    X86_TICK(c, 9);
    // 0b9d15  push edi
    X86_AT(c, 0xb9d15u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b9d16  call 0xbb6b0
    X86_AT(c, 0xb9d16u);
    push32(c, 0xb9d1bu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xb9d1bu);
    X86_TICK(c, 9);
    // 0b9d1b  add esp, 4
    X86_AT(c, 0xb9d1bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b9d1e  jmp 0xb9d27
    X86_AT(c, 0xb9d1eu);
    goto L_b9d27;
L_b9d20:
    X86_TICK(c, 9);
    // 0b9d20  sub esi, esi
    X86_AT(c, 0xb9d20u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0b9d22  call 0xba180
    X86_AT(c, 0xb9d22u);
    push32(c, 0xb9d27u); x86_call_known(c, 0xba180u, f_000ba180); X86_RET(c, 0xb9d27u);
L_b9d27:
    X86_TICK(c, 2);
    // 0b9d27  mov eax, esi
    X86_AT(c, 0xb9d27u);
    c.r[0] = c.r[6];
L_b9d29:
    X86_TICK(c, 28);
    // 0b9d29  pop edi
    X86_AT(c, 0xb9d29u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b9d2a  pop esi
    X86_AT(c, 0xb9d2au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b9d2b  pop ebx
    X86_AT(c, 0xb9d2bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0b9d2c  leave 
    X86_AT(c, 0xb9d2cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b9d2d  ret 
    X86_AT(c, 0xb9d2du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb9930u, "ran off the end of a function");
}
void f_000b9d27(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0b9d27  mov eax, esi
    X86_AT(c, 0xb9d27u);
    c.r[0] = c.r[6];
    // 0b9d29  pop edi
    X86_AT(c, 0xb9d29u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b9d2a  pop esi
    X86_AT(c, 0xb9d2au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b9d2b  pop ebx
    X86_AT(c, 0xb9d2bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0b9d2c  leave 
    X86_AT(c, 0xb9d2cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b9d2d  ret 
    X86_AT(c, 0xb9d2du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb9d27u, "ran off the end of a function");
}
void f_000b9d30(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0b9d30  push ebp
    X86_AT(c, 0xb9d30u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b9d31  mov ebp, esp
    X86_AT(c, 0xb9d31u);
    c.r[5] = c.r[4];
    // 0b9d33  sub esp, 0x60
    X86_AT(c, 0xb9d33u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x60u, 0, 4); }
    // 0b9d36  push ebx
    X86_AT(c, 0xb9d36u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b9d37  push esi
    X86_AT(c, 0xb9d37u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b9d38  push edi
    X86_AT(c, 0xb9d38u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b9d39  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xb9d39u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0b9d3c  push edi
    X86_AT(c, 0xb9d3cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b9d3d  call 0xbb6b0
    X86_AT(c, 0xb9d3du);
    push32(c, 0xb9d42u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xb9d42u);
    X86_TICK(c, 20);
    // 0b9d42  sub eax, eax
    X86_AT(c, 0xb9d42u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0b9d44  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xb9d44u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0b9d47  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xb9d47u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0b9d4a  add esp, 4
    X86_AT(c, 0xb9d4au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b9d4d  cmp dword ptr [ebp + 0x10], 0x50
    X86_AT(c, 0xb9d4du);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0x50u, 0, 4);
    // 0b9d51  jle 0xb9d5a
    X86_AT(c, 0xb9d51u);
    if (x86_cc(c, 14)) { goto L_b9d5a; }
    X86_TICK(c, 2);
    // 0b9d53  mov dword ptr [ebp + 0x10], 0x51
    X86_AT(c, 0xb9d53u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)), 0x51u);
L_b9d5a:
    X86_TICK(c, 2);
    // 0b9d5a  sub esi, esi
    X86_AT(c, 0xb9d5au);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_b9d5c:
    X86_TICK(c, 15);
    // 0b9d5c  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xb9d5cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0b9d5f  mov al, byte ptr [eax + esi*1]
    X86_AT(c, 0xb9d5fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6]))));
    // 0b9d62  and al, al
    X86_AT(c, 0xb9d62u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0b9d64  je 0xb9d72
    X86_AT(c, 0xb9d64u);
    if (x86_cc(c, 4)) { goto L_b9d72; }
    X86_TICK(c, 11);
    // 0b9d66  cmp esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xb9d66u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4);
    // 0b9d69  jge 0xb9d72
    X86_AT(c, 0xb9d69u);
    if (x86_cc(c, 13)) { goto L_b9d72; }
    X86_TICK(c, 11);
    // 0b9d6b  mov byte ptr [ebp + esi*1 - 0x60], al
    X86_AT(c, 0xb9d6bu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFFA0u)), g8(c, 0));
    // 0b9d6f  inc esi
    X86_AT(c, 0xb9d6fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0b9d70  jmp 0xb9d5c
    X86_AT(c, 0xb9d70u);
    X86_POLL(c, 0xb9d5cu); goto L_b9d5c;
L_b9d72:
    X86_TICK(c, 12);
    // 0b9d72  sub eax, eax
    X86_AT(c, 0xb9d72u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0b9d74  mov byte ptr [ebp + esi*1 - 0x60], al
    X86_AT(c, 0xb9d74u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFFA0u)), g8(c, 0));
    // 0b9d78  dec dword ptr [ebp + 0x10]
    X86_AT(c, 0xb9d78u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0b9d7b  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xb9d7bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_b9d7e:
    X86_TICK(c, 9);
    // 0b9d7e  push edi
    X86_AT(c, 0xb9d7eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b9d7f  call 0xb9514
    X86_AT(c, 0xb9d7fu);
    push32(c, 0xb9d84u); x86_call_known(c, 0xb9514u, f_000b9514); X86_RET(c, 0xb9d84u);
    X86_TICK(c, 12);
    // 0b9d84  xchg ebx, eax
    X86_AT(c, 0xb9d84u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0b9d85  add esp, 4
    X86_AT(c, 0xb9d85u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b9d88  cmp bl, 1
    X86_AT(c, 0xb9d88u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0b9d8b  jne 0xb9da1
    X86_AT(c, 0xb9d8bu);
    if (x86_cc(c, 5)) { goto L_b9da1; }
    X86_TICK(c, 7);
    // 0b9d8d  call 0x8b
    X86_AT(c, 0xb9d8du);
    push32(c, 0xb9d92u); x86_call_known(c, 0x8bu, f_0000008b); X86_RET(c, 0xb9d92u);
    X86_TICK(c, 11);
    // 0b9d92  push 0x20
    X86_AT(c, 0xb9d92u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0b9d94  push edi
    X86_AT(c, 0xb9d94u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b9d95  call 0xbbd1c
    X86_AT(c, 0xb9d95u);
    push32(c, 0xb9d9au); x86_call_known(c, 0xbbd1cu, f_000bbd1c); X86_RET(c, 0xb9d9au);
    X86_TICK(c, 9);
    // 0b9d9a  sub eax, eax
    X86_AT(c, 0xb9d9au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0b9d9c  jmp 0xb9e31
    X86_AT(c, 0xb9d9cu);
    goto L_b9e31;
L_b9da1:
    X86_TICK(c, 7);
    // 0b9da1  cmp bl, 4
    X86_AT(c, 0xb9da1u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0b9da4  jne 0xb9dd9
    X86_AT(c, 0xb9da4u);
    if (x86_cc(c, 5)) { goto L_b9dd9; }
    X86_TICK(c, 7);
    // 0b9da6  call 0x8b
    X86_AT(c, 0xb9da6u);
    push32(c, 0xb9dabu); x86_call_known(c, 0x8bu, f_0000008b); X86_RET(c, 0xb9dabu);
    X86_TICK(c, 11);
    // 0b9dab  push 0x20
    X86_AT(c, 0xb9dabu);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0b9dad  push edi
    X86_AT(c, 0xb9dadu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b9dae  call 0xbbd1c
    X86_AT(c, 0xb9daeu);
    push32(c, 0xb9db3u); x86_call_known(c, 0xbbd1cu, f_000bbd1c); X86_RET(c, 0xb9db3u);
    X86_TICK(c, 4);
    // 0b9db3  sub esi, esi
    X86_AT(c, 0xb9db3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0b9db5  add esp, 8
    X86_AT(c, 0xb9db5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_b9db8:
    X86_TICK(c, 11);
    // 0b9db8  cmp esi, dword ptr [ebp - 4]
    X86_AT(c, 0xb9db8u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4);
    // 0b9dbb  jge 0xb9dca
    X86_AT(c, 0xb9dbbu);
    if (x86_cc(c, 13)) { goto L_b9dca; }
    X86_TICK(c, 19);
    // 0b9dbd  mov al, byte ptr [ebp + esi*1 - 0x60]
    X86_AT(c, 0xb9dbdu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFFA0u))));
    // 0b9dc1  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xb9dc1u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0b9dc4  mov byte ptr [edx + esi*1], al
    X86_AT(c, 0xb9dc4u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + c.r[6])), g8(c, 0));
    // 0b9dc7  inc esi
    X86_AT(c, 0xb9dc7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0b9dc8  jmp 0xb9db8
    X86_AT(c, 0xb9dc8u);
    X86_POLL(c, 0xb9db8u); goto L_b9db8;
L_b9dca:
    X86_TICK(c, 17);
    // 0b9dca  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xb9dcau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0b9dcd  mov byte ptr [eax + esi*1], 0
    X86_AT(c, 0xb9dcdu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6])), 0x0u);
    // 0b9dd1  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xb9dd1u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0b9dd4  jmp 0xb9e95
    X86_AT(c, 0xb9dd4u);
    goto L_b9e95;
L_b9dd9:
    X86_TICK(c, 7);
    // 0b9dd9  cmp bl, 3
    X86_AT(c, 0xb9dd9u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0b9ddc  jne 0xb9e1a
    X86_AT(c, 0xb9ddcu);
    if (x86_cc(c, 5)) { goto L_b9e1a; }
    X86_TICK(c, 7);
    // 0b9dde  call 0x8b
    X86_AT(c, 0xb9ddeu);
    push32(c, 0xb9de3u); x86_call_known(c, 0x8bu, f_0000008b); X86_RET(c, 0xb9de3u);
    X86_TICK(c, 12);
    // 0b9de3  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0xb9de3u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0b9de7  jle 0xb9d7e
    X86_AT(c, 0xb9de7u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xb9d7eu); goto L_b9d7e; }
    X86_TICK(c, 11);
    // 0b9de9  push 0x20
    X86_AT(c, 0xb9de9u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0b9deb  push edi
    X86_AT(c, 0xb9debu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b9dec  call 0xbbd1c
    X86_AT(c, 0xb9decu);
    push32(c, 0xb9df1u); x86_call_known(c, 0xbbd1cu, f_000bbd1c); X86_RET(c, 0xb9df1u);
    X86_TICK(c, 17);
    // 0b9df1  lea eax, [ebp - 0xc]
    X86_AT(c, 0xb9df1u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0b9df4  push eax
    X86_AT(c, 0xb9df4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b9df5  lea ecx, [ebp - 8]
    X86_AT(c, 0xb9df5u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0b9df8  push ecx
    X86_AT(c, 0xb9df8u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0b9df9  push edi
    X86_AT(c, 0xb9df9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b9dfa  call 0xbc428
    X86_AT(c, 0xb9dfau);
    push32(c, 0xb9dffu); x86_call_known(c, 0xbc428u, f_000bc428); X86_RET(c, 0xb9dffu);
    X86_TICK(c, 22);
    // 0b9dff  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xb9dffu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0b9e02  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xb9e02u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0b9e05  sub eax, 2
    X86_AT(c, 0xb9e05u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0b9e08  push eax
    X86_AT(c, 0xb9e08u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b9e09  push edi
    X86_AT(c, 0xb9e09u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b9e0a  call 0xbc174
    X86_AT(c, 0xb9e0au);
    push32(c, 0xb9e0fu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb9e0fu);
    X86_TICK(c, 15);
    // 0b9e0f  dec dword ptr [ebp - 4]
    X86_AT(c, 0xb9e0fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0b9e12  add esp, 0x20
    X86_AT(c, 0xb9e12u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0b9e15  jmp 0xb9d7e
    X86_AT(c, 0xb9e15u);
    X86_POLL(c, 0xb9d7eu); goto L_b9d7e;
L_b9e1a:
    X86_TICK(c, 7);
    // 0b9e1a  cmp bl, 0x3f
    X86_AT(c, 0xb9e1au);
    (void)x86_sub(c, g8(c, 3), 0x3Fu, 0, 1);
    // 0b9e1d  jne 0xb9e36
    X86_AT(c, 0xb9e1du);
    if (x86_cc(c, 5)) { goto L_b9e36; }
    X86_TICK(c, 7);
    // 0b9e1f  call 0x8b
    X86_AT(c, 0xb9e1fu);
    push32(c, 0xb9e24u); x86_call_known(c, 0x8bu, f_0000008b); X86_RET(c, 0xb9e24u);
    X86_TICK(c, 11);
    // 0b9e24  push 0x20
    X86_AT(c, 0xb9e24u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0b9e26  push edi
    X86_AT(c, 0xb9e26u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b9e27  call 0xbbd1c
    X86_AT(c, 0xb9e27u);
    push32(c, 0xb9e2cu); x86_call_known(c, 0xbbd1cu, f_000bbd1c); X86_RET(c, 0xb9e2cu);
    X86_TICK(c, 2);
    // 0b9e2c  mov eax, 0xffffffff
    X86_AT(c, 0xb9e2cu);
    c.r[0] = 0xFFFFFFFFu;
L_b9e31:
    X86_TICK(c, 9);
    // 0b9e31  add esp, 8
    X86_AT(c, 0xb9e31u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b9e34  jmp 0xb9e95
    X86_AT(c, 0xb9e34u);
    goto L_b9e95;
L_b9e36:
    X86_TICK(c, 7);
    // 0b9e36  cmp bl, 5
    X86_AT(c, 0xb9e36u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0b9e39  je 0xb9e45
    X86_AT(c, 0xb9e39u);
    if (x86_cc(c, 4)) { goto L_b9e45; }
    X86_TICK(c, 7);
    // 0b9e3b  cmp bl, 6
    X86_AT(c, 0xb9e3bu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0b9e3e  je 0xb9e45
    X86_AT(c, 0xb9e3eu);
    if (x86_cc(c, 4)) { goto L_b9e45; }
    X86_TICK(c, 7);
    // 0b9e40  cmp bl, 7
    X86_AT(c, 0xb9e40u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0b9e43  jne 0xb9e54
    X86_AT(c, 0xb9e43u);
    if (x86_cc(c, 5)) { goto L_b9e54; }
L_b9e45:
    X86_TICK(c, 9);
    // 0b9e45  push 1
    X86_AT(c, 0xb9e45u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b9e47  call 0xb607c
    X86_AT(c, 0xb9e47u);
    push32(c, 0xb9e4cu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xb9e4cu);
    X86_TICK(c, 9);
    // 0b9e4c  add esp, 4
    X86_AT(c, 0xb9e4cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b9e4f  jmp 0xb9d7e
    X86_AT(c, 0xb9e4fu);
    X86_POLL(c, 0xb9d7eu); goto L_b9d7e;
L_b9e54:
    X86_TICK(c, 7);
    // 0b9e54  and bl, bl
    X86_AT(c, 0xb9e54u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0b9e56  je 0xb9d7e
    X86_AT(c, 0xb9e56u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xb9d7eu); goto L_b9d7e; }
    X86_TICK(c, 15);
    // 0b9e5c  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xb9e5cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0b9e5f  cmp eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xb9e5fu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4);
    // 0b9e62  jge 0xb9d7e
    X86_AT(c, 0xb9e62u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xb9d7eu); goto L_b9d7e; }
    X86_TICK(c, 25);
    // 0b9e68  mov byte ptr [ebp + eax*1 - 0x60], bl
    X86_AT(c, 0xb9e68u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFFA0u)), g8(c, 3));
    // 0b9e6c  inc dword ptr [ebp - 4]
    X86_AT(c, 0xb9e6cu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0b9e6f  lea eax, [ebp - 0xc]
    X86_AT(c, 0xb9e6fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0b9e72  push eax
    X86_AT(c, 0xb9e72u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b9e73  lea ecx, [ebp - 8]
    X86_AT(c, 0xb9e73u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0b9e76  push ecx
    X86_AT(c, 0xb9e76u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0b9e77  push edi
    X86_AT(c, 0xb9e77u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b9e78  call 0xbc428
    X86_AT(c, 0xb9e78u);
    push32(c, 0xb9e7du); x86_call_known(c, 0xbc428u, f_000bc428); X86_RET(c, 0xb9e7du);
    X86_TICK(c, 22);
    // 0b9e7d  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xb9e7du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0b9e80  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xb9e80u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0b9e83  add eax, 2
    X86_AT(c, 0xb9e83u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0b9e86  push eax
    X86_AT(c, 0xb9e86u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b9e87  push edi
    X86_AT(c, 0xb9e87u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b9e88  call 0xbc174
    X86_AT(c, 0xb9e88u);
    push32(c, 0xb9e8du); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb9e8du);
    X86_TICK(c, 9);
    // 0b9e8d  add esp, 0x18
    X86_AT(c, 0xb9e8du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0b9e90  jmp 0xb9d7e
    X86_AT(c, 0xb9e90u);
    X86_POLL(c, 0xb9d7eu); goto L_b9d7e;
L_b9e95:
    X86_TICK(c, 28);
    // 0b9e95  pop edi
    X86_AT(c, 0xb9e95u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b9e96  pop esi
    X86_AT(c, 0xb9e96u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b9e97  pop ebx
    X86_AT(c, 0xb9e97u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0b9e98  leave 
    X86_AT(c, 0xb9e98u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b9e99  ret 
    X86_AT(c, 0xb9e99u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb9d30u, "ran off the end of a function");
}
void f_000b9d7e(X86Cpu& c) {
L_b9d7e:
    X86_TICK(c, 9);
    // 0b9d7e  push edi
    X86_AT(c, 0xb9d7eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b9d7f  call 0xb9514
    X86_AT(c, 0xb9d7fu);
    push32(c, 0xb9d84u); x86_call_known(c, 0xb9514u, f_000b9514); X86_RET(c, 0xb9d84u);
    X86_TICK(c, 12);
    // 0b9d84  xchg ebx, eax
    X86_AT(c, 0xb9d84u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0b9d85  add esp, 4
    X86_AT(c, 0xb9d85u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b9d88  cmp bl, 1
    X86_AT(c, 0xb9d88u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0b9d8b  jne 0xb9da1
    X86_AT(c, 0xb9d8bu);
    if (x86_cc(c, 5)) { goto L_b9da1; }
    X86_TICK(c, 7);
    // 0b9d8d  call 0x8b
    X86_AT(c, 0xb9d8du);
    push32(c, 0xb9d92u); x86_call_known(c, 0x8bu, f_0000008b); X86_RET(c, 0xb9d92u);
    X86_TICK(c, 11);
    // 0b9d92  push 0x20
    X86_AT(c, 0xb9d92u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0b9d94  push edi
    X86_AT(c, 0xb9d94u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b9d95  call 0xbbd1c
    X86_AT(c, 0xb9d95u);
    push32(c, 0xb9d9au); x86_call_known(c, 0xbbd1cu, f_000bbd1c); X86_RET(c, 0xb9d9au);
    X86_TICK(c, 9);
    // 0b9d9a  sub eax, eax
    X86_AT(c, 0xb9d9au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0b9d9c  jmp 0xb9e31
    X86_AT(c, 0xb9d9cu);
    goto L_b9e31;
L_b9da1:
    X86_TICK(c, 7);
    // 0b9da1  cmp bl, 4
    X86_AT(c, 0xb9da1u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0b9da4  jne 0xb9dd9
    X86_AT(c, 0xb9da4u);
    if (x86_cc(c, 5)) { goto L_b9dd9; }
    X86_TICK(c, 7);
    // 0b9da6  call 0x8b
    X86_AT(c, 0xb9da6u);
    push32(c, 0xb9dabu); x86_call_known(c, 0x8bu, f_0000008b); X86_RET(c, 0xb9dabu);
    X86_TICK(c, 11);
    // 0b9dab  push 0x20
    X86_AT(c, 0xb9dabu);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0b9dad  push edi
    X86_AT(c, 0xb9dadu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b9dae  call 0xbbd1c
    X86_AT(c, 0xb9daeu);
    push32(c, 0xb9db3u); x86_call_known(c, 0xbbd1cu, f_000bbd1c); X86_RET(c, 0xb9db3u);
    X86_TICK(c, 4);
    // 0b9db3  sub esi, esi
    X86_AT(c, 0xb9db3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0b9db5  add esp, 8
    X86_AT(c, 0xb9db5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_b9db8:
    X86_TICK(c, 11);
    // 0b9db8  cmp esi, dword ptr [ebp - 4]
    X86_AT(c, 0xb9db8u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4);
    // 0b9dbb  jge 0xb9dca
    X86_AT(c, 0xb9dbbu);
    if (x86_cc(c, 13)) { goto L_b9dca; }
    X86_TICK(c, 19);
    // 0b9dbd  mov al, byte ptr [ebp + esi*1 - 0x60]
    X86_AT(c, 0xb9dbdu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFFA0u))));
    // 0b9dc1  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xb9dc1u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0b9dc4  mov byte ptr [edx + esi*1], al
    X86_AT(c, 0xb9dc4u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + c.r[6])), g8(c, 0));
    // 0b9dc7  inc esi
    X86_AT(c, 0xb9dc7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0b9dc8  jmp 0xb9db8
    X86_AT(c, 0xb9dc8u);
    X86_POLL(c, 0xb9db8u); goto L_b9db8;
L_b9dca:
    X86_TICK(c, 17);
    // 0b9dca  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xb9dcau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0b9dcd  mov byte ptr [eax + esi*1], 0
    X86_AT(c, 0xb9dcdu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6])), 0x0u);
    // 0b9dd1  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xb9dd1u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0b9dd4  jmp 0xb9e95
    X86_AT(c, 0xb9dd4u);
    goto L_b9e95;
L_b9dd9:
    X86_TICK(c, 7);
    // 0b9dd9  cmp bl, 3
    X86_AT(c, 0xb9dd9u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0b9ddc  jne 0xb9e1a
    X86_AT(c, 0xb9ddcu);
    if (x86_cc(c, 5)) { goto L_b9e1a; }
    X86_TICK(c, 7);
    // 0b9dde  call 0x8b
    X86_AT(c, 0xb9ddeu);
    push32(c, 0xb9de3u); x86_call_known(c, 0x8bu, f_0000008b); X86_RET(c, 0xb9de3u);
    X86_TICK(c, 12);
    // 0b9de3  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0xb9de3u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0b9de7  jle 0xb9d7e
    X86_AT(c, 0xb9de7u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xb9d7eu); goto L_b9d7e; }
    X86_TICK(c, 11);
    // 0b9de9  push 0x20
    X86_AT(c, 0xb9de9u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0b9deb  push edi
    X86_AT(c, 0xb9debu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b9dec  call 0xbbd1c
    X86_AT(c, 0xb9decu);
    push32(c, 0xb9df1u); x86_call_known(c, 0xbbd1cu, f_000bbd1c); X86_RET(c, 0xb9df1u);
    X86_TICK(c, 17);
    // 0b9df1  lea eax, [ebp - 0xc]
    X86_AT(c, 0xb9df1u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0b9df4  push eax
    X86_AT(c, 0xb9df4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b9df5  lea ecx, [ebp - 8]
    X86_AT(c, 0xb9df5u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0b9df8  push ecx
    X86_AT(c, 0xb9df8u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0b9df9  push edi
    X86_AT(c, 0xb9df9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b9dfa  call 0xbc428
    X86_AT(c, 0xb9dfau);
    push32(c, 0xb9dffu); x86_call_known(c, 0xbc428u, f_000bc428); X86_RET(c, 0xb9dffu);
    X86_TICK(c, 22);
    // 0b9dff  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xb9dffu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0b9e02  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xb9e02u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0b9e05  sub eax, 2
    X86_AT(c, 0xb9e05u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0b9e08  push eax
    X86_AT(c, 0xb9e08u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b9e09  push edi
    X86_AT(c, 0xb9e09u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b9e0a  call 0xbc174
    X86_AT(c, 0xb9e0au);
    push32(c, 0xb9e0fu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb9e0fu);
    X86_TICK(c, 15);
    // 0b9e0f  dec dword ptr [ebp - 4]
    X86_AT(c, 0xb9e0fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0b9e12  add esp, 0x20
    X86_AT(c, 0xb9e12u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0b9e15  jmp 0xb9d7e
    X86_AT(c, 0xb9e15u);
    X86_POLL(c, 0xb9d7eu); goto L_b9d7e;
L_b9e1a:
    X86_TICK(c, 7);
    // 0b9e1a  cmp bl, 0x3f
    X86_AT(c, 0xb9e1au);
    (void)x86_sub(c, g8(c, 3), 0x3Fu, 0, 1);
    // 0b9e1d  jne 0xb9e36
    X86_AT(c, 0xb9e1du);
    if (x86_cc(c, 5)) { goto L_b9e36; }
    X86_TICK(c, 7);
    // 0b9e1f  call 0x8b
    X86_AT(c, 0xb9e1fu);
    push32(c, 0xb9e24u); x86_call_known(c, 0x8bu, f_0000008b); X86_RET(c, 0xb9e24u);
    X86_TICK(c, 11);
    // 0b9e24  push 0x20
    X86_AT(c, 0xb9e24u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0b9e26  push edi
    X86_AT(c, 0xb9e26u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b9e27  call 0xbbd1c
    X86_AT(c, 0xb9e27u);
    push32(c, 0xb9e2cu); x86_call_known(c, 0xbbd1cu, f_000bbd1c); X86_RET(c, 0xb9e2cu);
    X86_TICK(c, 2);
    // 0b9e2c  mov eax, 0xffffffff
    X86_AT(c, 0xb9e2cu);
    c.r[0] = 0xFFFFFFFFu;
L_b9e31:
    X86_TICK(c, 9);
    // 0b9e31  add esp, 8
    X86_AT(c, 0xb9e31u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0b9e34  jmp 0xb9e95
    X86_AT(c, 0xb9e34u);
    goto L_b9e95;
L_b9e36:
    X86_TICK(c, 7);
    // 0b9e36  cmp bl, 5
    X86_AT(c, 0xb9e36u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0b9e39  je 0xb9e45
    X86_AT(c, 0xb9e39u);
    if (x86_cc(c, 4)) { goto L_b9e45; }
    X86_TICK(c, 7);
    // 0b9e3b  cmp bl, 6
    X86_AT(c, 0xb9e3bu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0b9e3e  je 0xb9e45
    X86_AT(c, 0xb9e3eu);
    if (x86_cc(c, 4)) { goto L_b9e45; }
    X86_TICK(c, 7);
    // 0b9e40  cmp bl, 7
    X86_AT(c, 0xb9e40u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0b9e43  jne 0xb9e54
    X86_AT(c, 0xb9e43u);
    if (x86_cc(c, 5)) { goto L_b9e54; }
L_b9e45:
    X86_TICK(c, 9);
    // 0b9e45  push 1
    X86_AT(c, 0xb9e45u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0b9e47  call 0xb607c
    X86_AT(c, 0xb9e47u);
    push32(c, 0xb9e4cu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xb9e4cu);
    X86_TICK(c, 9);
    // 0b9e4c  add esp, 4
    X86_AT(c, 0xb9e4cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0b9e4f  jmp 0xb9d7e
    X86_AT(c, 0xb9e4fu);
    X86_POLL(c, 0xb9d7eu); goto L_b9d7e;
L_b9e54:
    X86_TICK(c, 7);
    // 0b9e54  and bl, bl
    X86_AT(c, 0xb9e54u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0b9e56  je 0xb9d7e
    X86_AT(c, 0xb9e56u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xb9d7eu); goto L_b9d7e; }
    X86_TICK(c, 15);
    // 0b9e5c  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xb9e5cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0b9e5f  cmp eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xb9e5fu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4);
    // 0b9e62  jge 0xb9d7e
    X86_AT(c, 0xb9e62u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xb9d7eu); goto L_b9d7e; }
    X86_TICK(c, 25);
    // 0b9e68  mov byte ptr [ebp + eax*1 - 0x60], bl
    X86_AT(c, 0xb9e68u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFFA0u)), g8(c, 3));
    // 0b9e6c  inc dword ptr [ebp - 4]
    X86_AT(c, 0xb9e6cu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0b9e6f  lea eax, [ebp - 0xc]
    X86_AT(c, 0xb9e6fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0b9e72  push eax
    X86_AT(c, 0xb9e72u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b9e73  lea ecx, [ebp - 8]
    X86_AT(c, 0xb9e73u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0b9e76  push ecx
    X86_AT(c, 0xb9e76u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0b9e77  push edi
    X86_AT(c, 0xb9e77u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b9e78  call 0xbc428
    X86_AT(c, 0xb9e78u);
    push32(c, 0xb9e7du); x86_call_known(c, 0xbc428u, f_000bc428); X86_RET(c, 0xb9e7du);
    X86_TICK(c, 22);
    // 0b9e7d  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xb9e7du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0b9e80  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xb9e80u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0b9e83  add eax, 2
    X86_AT(c, 0xb9e83u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0b9e86  push eax
    X86_AT(c, 0xb9e86u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b9e87  push edi
    X86_AT(c, 0xb9e87u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b9e88  call 0xbc174
    X86_AT(c, 0xb9e88u);
    push32(c, 0xb9e8du); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xb9e8du);
    X86_TICK(c, 9);
    // 0b9e8d  add esp, 0x18
    X86_AT(c, 0xb9e8du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0b9e90  jmp 0xb9d7e
    X86_AT(c, 0xb9e90u);
    X86_POLL(c, 0xb9d7eu); goto L_b9d7e;
L_b9e95:
    X86_TICK(c, 28);
    // 0b9e95  pop edi
    X86_AT(c, 0xb9e95u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b9e96  pop esi
    X86_AT(c, 0xb9e96u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b9e97  pop ebx
    X86_AT(c, 0xb9e97u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0b9e98  leave 
    X86_AT(c, 0xb9e98u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b9e99  ret 
    X86_AT(c, 0xb9e99u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb9d7eu, "ran off the end of a function");
}
void f_000b9e9c(X86Cpu& c) {
    X86_TICK(c, 70);
    // 0b9e9c  push ebp
    X86_AT(c, 0xb9e9cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b9e9d  mov ebp, esp
    X86_AT(c, 0xb9e9du);
    c.r[5] = c.r[4];
    // 0b9e9f  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0xb9e9fu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0b9ea2  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xb9ea2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0b9ea5  mov dword ptr [ecx], eax
    X86_AT(c, 0xb9ea5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1])), c.r[0]);
    // 0b9ea7  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xb9ea7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0b9eaa  mov dword ptr [ecx + 4], eax
    X86_AT(c, 0xb9eaau);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0x4u)), c.r[0]);
    // 0b9ead  mov eax, dword ptr [ebp + 0x14]
    X86_AT(c, 0xb9eadu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0b9eb0  mov dword ptr [ecx + 8], eax
    X86_AT(c, 0xb9eb0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0x8u)), c.r[0]);
    // 0b9eb3  mov eax, dword ptr [ebp + 0x1c]
    X86_AT(c, 0xb9eb3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0b9eb6  mov dword ptr [ecx + 0xc], eax
    X86_AT(c, 0xb9eb6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCu)), c.r[0]);
    // 0b9eb9  mov eax, dword ptr [ebp + 0x20]
    X86_AT(c, 0xb9eb9u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)));
    // 0b9ebc  mov dword ptr [ecx + 0x10], eax
    X86_AT(c, 0xb9ebcu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0x10u)), c.r[0]);
    // 0b9ebf  mov eax, dword ptr [ebp + 0x18]
    X86_AT(c, 0xb9ebfu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0b9ec2  mov dword ptr [ecx + 0x14], eax
    X86_AT(c, 0xb9ec2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0x14u)), c.r[0]);
    // 0b9ec5  mov eax, dword ptr [ebp + 0x24]
    X86_AT(c, 0xb9ec5u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u)));
    // 0b9ec8  mov dword ptr [ecx + 0x1c], eax
    X86_AT(c, 0xb9ec8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0x1Cu)), c.r[0]);
    // 0b9ecb  mov dword ptr [ecx + 0x18], 0
    X86_AT(c, 0xb9ecbu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0x18u)), 0x0u);
    // 0b9ed2  mov eax, ecx
    X86_AT(c, 0xb9ed2u);
    c.r[0] = c.r[1];
    // 0b9ed4  leave 
    X86_AT(c, 0xb9ed4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b9ed5  ret 
    X86_AT(c, 0xb9ed5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb9e9cu, "ran off the end of a function");
}
void f_000b9ed8(X86Cpu& c) {
    X86_TICK(c, 32);
    // 0b9ed8  push ebp
    X86_AT(c, 0xb9ed8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b9ed9  mov ebp, esp
    X86_AT(c, 0xb9ed9u);
    c.r[5] = c.r[4];
    // 0b9edb  push ebx
    X86_AT(c, 0xb9edbu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0b9edc  push esi
    X86_AT(c, 0xb9edcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b9edd  push edi
    X86_AT(c, 0xb9eddu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b9ede  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xb9edeu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0b9ee1  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xb9ee1u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0b9ee4  lea eax, [esi*4]
    X86_AT(c, 0xb9ee4u);
    c.r[0] = (uint32_t)(c.r[6] * 4);
    // 0b9eeb  lea edx, [eax*8]
    X86_AT(c, 0xb9eebu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0b9ef2  lea edx, [eax + edx*4]
    X86_AT(c, 0xb9ef2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0b9ef5  mov al, byte ptr [ebp + 0x10]
    X86_AT(c, 0xb9ef5u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 0b9ef8  mov byte ptr [edi + edx*1], al
    X86_AT(c, 0xb9ef8u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2])), g8(c, 0));
    // 0b9efb  sub ebx, ebx
    X86_AT(c, 0xb9efbu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_b9efd:
    X86_TICK(c, 7);
    // 0b9efd  cmp ebx, 0x40
    X86_AT(c, 0xb9efdu);
    (void)x86_sub(c, c.r[3], 0x40u, 0, 4);
    // 0b9f00  jge 0xb9f26
    X86_AT(c, 0xb9f00u);
    if (x86_cc(c, 13)) { goto L_b9f26; }
    X86_TICK(c, 15);
    // 0b9f02  mov eax, dword ptr [ebp + 0x14]
    X86_AT(c, 0xb9f02u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0b9f05  mov al, byte ptr [eax + ebx*1]
    X86_AT(c, 0xb9f05u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[3]))));
    // 0b9f08  and al, al
    X86_AT(c, 0xb9f08u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0b9f0a  je 0xb9f26
    X86_AT(c, 0xb9f0au);
    if (x86_cc(c, 4)) { goto L_b9f26; }
    X86_TICK(c, 19);
    // 0b9f0c  lea edx, [esi*4]
    X86_AT(c, 0xb9f0cu);
    c.r[2] = (uint32_t)(c.r[6] * 4);
    // 0b9f13  lea ecx, [edx*8]
    X86_AT(c, 0xb9f13u);
    c.r[1] = (uint32_t)(c.r[2] * 8);
    // 0b9f1a  lea ecx, [edx + ecx*4]
    X86_AT(c, 0xb9f1au);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 4);
    // 0b9f1d  add ecx, ebx
    X86_AT(c, 0xb9f1du);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[3], 0, 4); }
    // 0b9f1f  mov byte ptr [edi + ecx*1 + 0x42], al
    X86_AT(c, 0xb9f1fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[1] + 0x42u)), g8(c, 0));
    // 0b9f23  inc ebx
    X86_AT(c, 0xb9f23u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0b9f24  jmp 0xb9efd
    X86_AT(c, 0xb9f24u);
    X86_POLL(c, 0xb9efdu); goto L_b9efd;
L_b9f26:
    X86_TICK(c, 14);
    // 0b9f26  lea eax, [esi*4]
    X86_AT(c, 0xb9f26u);
    c.r[0] = (uint32_t)(c.r[6] * 4);
    // 0b9f2d  lea edx, [eax*8]
    X86_AT(c, 0xb9f2du);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0b9f34  lea edx, [eax + edx*4]
    X86_AT(c, 0xb9f34u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0b9f37  lea eax, [ebx + edx*1]
    X86_AT(c, 0xb9f37u);
    c.r[0] = (uint32_t)(c.r[3] + c.r[2]);
    // 0b9f3a  sub edx, edx
    X86_AT(c, 0xb9f3au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0b9f3c  mov byte ptr [edi + eax*1 + 0x42], dl
    X86_AT(c, 0xb9f3cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[0] + 0x42u)), g8(c, 2));
    // 0b9f40  mov ebx, edx
    X86_AT(c, 0xb9f40u);
    c.r[3] = c.r[2];
L_b9f42:
    X86_TICK(c, 7);
    // 0b9f42  cmp ebx, 0x40
    X86_AT(c, 0xb9f42u);
    (void)x86_sub(c, c.r[3], 0x40u, 0, 4);
    // 0b9f45  jge 0xb9f6b
    X86_AT(c, 0xb9f45u);
    if (x86_cc(c, 13)) { goto L_b9f6b; }
    X86_TICK(c, 15);
    // 0b9f47  mov eax, dword ptr [ebp + 0x18]
    X86_AT(c, 0xb9f47u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0b9f4a  mov al, byte ptr [eax + ebx*1]
    X86_AT(c, 0xb9f4au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[3]))));
    // 0b9f4d  and al, al
    X86_AT(c, 0xb9f4du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0b9f4f  je 0xb9f6b
    X86_AT(c, 0xb9f4fu);
    if (x86_cc(c, 4)) { goto L_b9f6b; }
    X86_TICK(c, 19);
    // 0b9f51  lea edx, [esi*4]
    X86_AT(c, 0xb9f51u);
    c.r[2] = (uint32_t)(c.r[6] * 4);
    // 0b9f58  lea ecx, [edx*8]
    X86_AT(c, 0xb9f58u);
    c.r[1] = (uint32_t)(c.r[2] * 8);
    // 0b9f5f  lea ecx, [edx + ecx*4]
    X86_AT(c, 0xb9f5fu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 4);
    // 0b9f62  add ecx, ebx
    X86_AT(c, 0xb9f62u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[3], 0, 4); }
    // 0b9f64  mov byte ptr [edi + ecx*1 + 1], al
    X86_AT(c, 0xb9f64u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[1] + 0x1u)), g8(c, 0));
    // 0b9f68  inc ebx
    X86_AT(c, 0xb9f68u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0b9f69  jmp 0xb9f42
    X86_AT(c, 0xb9f69u);
    X86_POLL(c, 0xb9f42u); goto L_b9f42;
L_b9f6b:
    X86_TICK(c, 46);
    // 0b9f6b  lea eax, [esi*4]
    X86_AT(c, 0xb9f6bu);
    c.r[0] = (uint32_t)(c.r[6] * 4);
    // 0b9f72  lea edx, [eax*8]
    X86_AT(c, 0xb9f72u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0b9f79  lea edx, [eax + edx*4]
    X86_AT(c, 0xb9f79u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0b9f7c  lea eax, [ebx + edx*1]
    X86_AT(c, 0xb9f7cu);
    c.r[0] = (uint32_t)(c.r[3] + c.r[2]);
    // 0b9f7f  mov byte ptr [edi + eax*1 + 1], 0
    X86_AT(c, 0xb9f7fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[0] + 0x1u)), 0x0u);
    // 0b9f84  mov al, byte ptr [ebp + 0x1c]
    X86_AT(c, 0xb9f84u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu))));
    // 0b9f87  mov byte ptr [edi + edx*1 + 0x83], al
    X86_AT(c, 0xb9f87u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] + 0x83u)), g8(c, 0));
    // 0b9f8e  mov eax, edi
    X86_AT(c, 0xb9f8eu);
    c.r[0] = c.r[7];
    // 0b9f90  pop edi
    X86_AT(c, 0xb9f90u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b9f91  pop esi
    X86_AT(c, 0xb9f91u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b9f92  pop ebx
    X86_AT(c, 0xb9f92u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0b9f93  leave 
    X86_AT(c, 0xb9f93u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b9f94  ret 
    X86_AT(c, 0xb9f94u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb9ed8u, "ran off the end of a function");
}
void f_000b9f98(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0b9f98  push ebp
    X86_AT(c, 0xb9f98u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b9f99  mov ebp, esp
    X86_AT(c, 0xb9f99u);
    c.r[5] = c.r[4];
    // 0b9f9b  push esi
    X86_AT(c, 0xb9f9bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b9f9c  push edi
    X86_AT(c, 0xb9f9cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b9f9d  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xb9f9du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0b9fa0  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xb9fa0u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0b9fa3  mov eax, dword ptr [edi + 4]
    X86_AT(c, 0xb9fa3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)));
    // 0b9fa6  cmp esi, eax
    X86_AT(c, 0xb9fa6u);
    (void)x86_sub(c, c.r[6], c.r[0], 0, 4);
    // 0b9fa8  jle 0xb9fab
    X86_AT(c, 0xb9fa8u);
    if (x86_cc(c, 14)) { goto L_b9fab; }
    X86_TICK(c, 3);
    // 0b9faa  xchg esi, eax
    X86_AT(c, 0xb9faau);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_b9fab:
    X86_TICK(c, 65);
    // 0b9fab  mov eax, esi
    X86_AT(c, 0xb9fabu);
    c.r[0] = c.r[6];
    // 0b9fad  imul eax, dword ptr [edi + 0x14]
    X86_AT(c, 0xb9fadu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x14u))), 4);
    // 0b9fb1  add eax, dword ptr [edi + 0x10]
    X86_AT(c, 0xb9fb1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x10u))), 0, 4); }
    // 0b9fb4  push eax
    X86_AT(c, 0xb9fb4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b9fb5  mov edx, dword ptr [edi + 0xc]
    X86_AT(c, 0xb9fb5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)));
    // 0b9fb8  add edx, dword ptr [edi + 8]
    X86_AT(c, 0xb9fb8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 0, 4); }
    // 0b9fbb  dec edx
    X86_AT(c, 0xb9fbbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0b9fbc  push edx
    X86_AT(c, 0xb9fbcu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0b9fbd  push eax
    X86_AT(c, 0xb9fbdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b9fbe  push dword ptr [edi + 0xc]
    X86_AT(c, 0xb9fbeu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))); push32(c, v); }
    // 0b9fc1  push dword ptr [edi]
    X86_AT(c, 0xb9fc1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7]))); push32(c, v); }
    // 0b9fc3  call 0xbc1c0
    X86_AT(c, 0xb9fc3u);
    push32(c, 0xb9fc8u); x86_call_known(c, 0xbc1c0u, f_000bc1c0); X86_RET(c, 0xb9fc8u);
    X86_TICK(c, 13);
    // 0b9fc8  add esp, 0x14
    X86_AT(c, 0xb9fc8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0b9fcb  mov eax, dword ptr [edi + 0x18]
    X86_AT(c, 0xb9fcbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)));
    // 0b9fce  cmp esi, eax
    X86_AT(c, 0xb9fceu);
    (void)x86_sub(c, c.r[6], c.r[0], 0, 4);
    // 0b9fd0  je 0xb9ff3
    X86_AT(c, 0xb9fd0u);
    if (x86_cc(c, 4)) { goto L_b9ff3; }
    X86_TICK(c, 63);
    // 0b9fd2  imul eax, dword ptr [edi + 0x14]
    X86_AT(c, 0xb9fd2u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x14u))), 4);
    // 0b9fd6  add eax, dword ptr [edi + 0x10]
    X86_AT(c, 0xb9fd6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x10u))), 0, 4); }
    // 0b9fd9  push eax
    X86_AT(c, 0xb9fd9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b9fda  mov edx, dword ptr [edi + 0xc]
    X86_AT(c, 0xb9fdau);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)));
    // 0b9fdd  add edx, dword ptr [edi + 8]
    X86_AT(c, 0xb9fddu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 0, 4); }
    // 0b9fe0  dec edx
    X86_AT(c, 0xb9fe0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0b9fe1  push edx
    X86_AT(c, 0xb9fe1u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0b9fe2  push eax
    X86_AT(c, 0xb9fe2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0b9fe3  push dword ptr [edi + 0xc]
    X86_AT(c, 0xb9fe3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))); push32(c, v); }
    // 0b9fe6  push dword ptr [edi]
    X86_AT(c, 0xb9fe6u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7]))); push32(c, v); }
    // 0b9fe8  call 0xbc1c0
    X86_AT(c, 0xb9fe8u);
    push32(c, 0xb9fedu); x86_call_known(c, 0xbc1c0u, f_000bc1c0); X86_RET(c, 0xb9fedu);
    X86_TICK(c, 4);
    // 0b9fed  mov dword ptr [edi + 0x18], esi
    X86_AT(c, 0xb9fedu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)), c.r[6]);
    // 0b9ff0  add esp, 0x14
    X86_AT(c, 0xb9ff0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_b9ff3:
    X86_TICK(c, 24);
    // 0b9ff3  pop edi
    X86_AT(c, 0xb9ff3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0b9ff4  pop esi
    X86_AT(c, 0xb9ff4u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0b9ff5  leave 
    X86_AT(c, 0xb9ff5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0b9ff6  ret 
    X86_AT(c, 0xb9ff6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb9f98u, "ran off the end of a function");
}
void f_000b9ff8(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0b9ff8  push ebp
    X86_AT(c, 0xb9ff8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0b9ff9  mov ebp, esp
    X86_AT(c, 0xb9ff9u);
    c.r[5] = c.r[4];
    // 0b9ffb  push esi
    X86_AT(c, 0xb9ffbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0b9ffc  push edi
    X86_AT(c, 0xb9ffcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0b9ffd  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xb9ffdu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ba000  push dword ptr [edi]
    X86_AT(c, 0xba000u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7]))); push32(c, v); }
    // 0ba002  call 0xbb6b0
    X86_AT(c, 0xba002u);
    push32(c, 0xba007u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xba007u);
    X86_TICK(c, 4);
    // 0ba007  sub esi, esi
    X86_AT(c, 0xba007u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0ba009  add esp, 4
    X86_AT(c, 0xba009u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_ba00c:
    X86_TICK(c, 11);
    // 0ba00c  cmp esi, dword ptr [edi + 4]
    X86_AT(c, 0xba00cu);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0, 4);
    // 0ba00f  jge 0xba071
    X86_AT(c, 0xba00fu);
    if (x86_cc(c, 13)) { goto L_ba071; }
    X86_TICK(c, 49);
    // 0ba011  mov eax, esi
    X86_AT(c, 0xba011u);
    c.r[0] = c.r[6];
    // 0ba013  imul eax, dword ptr [edi + 0x14]
    X86_AT(c, 0xba013u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x14u))), 4);
    // 0ba017  add eax, dword ptr [edi + 0x10]
    X86_AT(c, 0xba017u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x10u))), 0, 4); }
    // 0ba01a  push eax
    X86_AT(c, 0xba01au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ba01b  push dword ptr [edi + 0xc]
    X86_AT(c, 0xba01bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))); push32(c, v); }
    // 0ba01e  push dword ptr [edi]
    X86_AT(c, 0xba01eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7]))); push32(c, v); }
    // 0ba020  call 0xbc174
    X86_AT(c, 0xba020u);
    push32(c, 0xba025u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xba025u);
    X86_TICK(c, 14);
    // 0ba025  add esp, 0xc
    X86_AT(c, 0xba025u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ba028  cmp dword ptr [0x460e4], 0
    X86_AT(c, 0xba028u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x460E4u))), 0x0u, 0, 4);
    // 0ba02f  jne 0xba04b
    X86_AT(c, 0xba02fu);
    if (x86_cc(c, 5)) { goto L_ba04b; }
    X86_TICK(c, 19);
    // 0ba031  lea eax, [esi*4]
    X86_AT(c, 0xba031u);
    c.r[0] = (uint32_t)(c.r[6] * 4);
    // 0ba038  lea edx, [eax*8]
    X86_AT(c, 0xba038u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0ba03f  lea edx, [eax + edx*4]
    X86_AT(c, 0xba03fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0ba042  mov eax, dword ptr [edi + 0x1c]
    X86_AT(c, 0xba042u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)));
    // 0ba045  lea eax, [eax + edx*1 + 1]
    X86_AT(c, 0xba045u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] + 0x1u);
    // 0ba049  jmp 0xba063
    X86_AT(c, 0xba049u);
    goto L_ba063;
L_ba04b:
    X86_TICK(c, 12);
    // 0ba04b  lea eax, [esi*4]
    X86_AT(c, 0xba04bu);
    c.r[0] = (uint32_t)(c.r[6] * 4);
    // 0ba052  lea edx, [eax*8]
    X86_AT(c, 0xba052u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0ba059  lea edx, [eax + edx*4]
    X86_AT(c, 0xba059u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0ba05c  mov eax, dword ptr [edi + 0x1c]
    X86_AT(c, 0xba05cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)));
    // 0ba05f  lea eax, [eax + edx*1 + 0x42]
    X86_AT(c, 0xba05fu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] + 0x42u);
L_ba063:
    X86_TICK(c, 14);
    // 0ba063  push eax
    X86_AT(c, 0xba063u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ba064  push dword ptr [edi]
    X86_AT(c, 0xba064u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7]))); push32(c, v); }
    // 0ba066  call 0xbbba4
    X86_AT(c, 0xba066u);
    push32(c, 0xba06bu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xba06bu);
    X86_TICK(c, 11);
    // 0ba06b  add esp, 8
    X86_AT(c, 0xba06bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ba06e  inc esi
    X86_AT(c, 0xba06eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0ba06f  jmp 0xba00c
    X86_AT(c, 0xba06fu);
    X86_POLL(c, 0xba00cu); goto L_ba00c;
L_ba071:
    X86_TICK(c, 26);
    // 0ba071  mov dword ptr [edi + 0x18], 0
    X86_AT(c, 0xba071u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)), 0x0u);
    // 0ba078  pop edi
    X86_AT(c, 0xba078u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ba079  pop esi
    X86_AT(c, 0xba079u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ba07a  leave 
    X86_AT(c, 0xba07au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ba07b  ret 
    X86_AT(c, 0xba07bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb9ff8u, "ran off the end of a function");
}
void f_000ba07c(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0ba07c  push ebp
    X86_AT(c, 0xba07cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ba07d  mov ebp, esp
    X86_AT(c, 0xba07du);
    c.r[5] = c.r[4];
    // 0ba07f  push esi
    X86_AT(c, 0xba07fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ba080  push edi
    X86_AT(c, 0xba080u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ba081  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xba081u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ba084  push dword ptr [edi]
    X86_AT(c, 0xba084u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7]))); push32(c, v); }
    // 0ba086  call 0xbb6b0
    X86_AT(c, 0xba086u);
    push32(c, 0xba08bu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xba08bu);
    X86_TICK(c, 4);
    // 0ba08b  sub esi, esi
    X86_AT(c, 0xba08bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0ba08d  add esp, 4
    X86_AT(c, 0xba08du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_ba090:
    X86_TICK(c, 11);
    // 0ba090  cmp esi, dword ptr [edi + 4]
    X86_AT(c, 0xba090u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0, 4);
    // 0ba093  jge 0xba0f5
    X86_AT(c, 0xba093u);
    if (x86_cc(c, 13)) { goto L_ba0f5; }
    X86_TICK(c, 49);
    // 0ba095  mov eax, esi
    X86_AT(c, 0xba095u);
    c.r[0] = c.r[6];
    // 0ba097  imul eax, dword ptr [edi + 0x14]
    X86_AT(c, 0xba097u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x14u))), 4);
    // 0ba09b  add eax, dword ptr [edi + 0x10]
    X86_AT(c, 0xba09bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x10u))), 0, 4); }
    // 0ba09e  push eax
    X86_AT(c, 0xba09eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ba09f  push dword ptr [edi + 0xc]
    X86_AT(c, 0xba09fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))); push32(c, v); }
    // 0ba0a2  push dword ptr [edi]
    X86_AT(c, 0xba0a2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7]))); push32(c, v); }
    // 0ba0a4  call 0xbc174
    X86_AT(c, 0xba0a4u);
    push32(c, 0xba0a9u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xba0a9u);
    X86_TICK(c, 14);
    // 0ba0a9  add esp, 0xc
    X86_AT(c, 0xba0a9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ba0ac  cmp dword ptr [0x460e4], 0
    X86_AT(c, 0xba0acu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x460E4u))), 0x0u, 0, 4);
    // 0ba0b3  jne 0xba0cf
    X86_AT(c, 0xba0b3u);
    if (x86_cc(c, 5)) { goto L_ba0cf; }
    X86_TICK(c, 19);
    // 0ba0b5  lea eax, [esi*4]
    X86_AT(c, 0xba0b5u);
    c.r[0] = (uint32_t)(c.r[6] * 4);
    // 0ba0bc  lea edx, [eax*8]
    X86_AT(c, 0xba0bcu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0ba0c3  lea edx, [eax + edx*4]
    X86_AT(c, 0xba0c3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0ba0c6  mov eax, dword ptr [edi + 0x1c]
    X86_AT(c, 0xba0c6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)));
    // 0ba0c9  lea eax, [eax + edx*1 + 1]
    X86_AT(c, 0xba0c9u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] + 0x1u);
    // 0ba0cd  jmp 0xba0e7
    X86_AT(c, 0xba0cdu);
    goto L_ba0e7;
L_ba0cf:
    X86_TICK(c, 12);
    // 0ba0cf  lea eax, [esi*4]
    X86_AT(c, 0xba0cfu);
    c.r[0] = (uint32_t)(c.r[6] * 4);
    // 0ba0d6  lea edx, [eax*8]
    X86_AT(c, 0xba0d6u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0ba0dd  lea edx, [eax + edx*4]
    X86_AT(c, 0xba0ddu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0ba0e0  mov eax, dword ptr [edi + 0x1c]
    X86_AT(c, 0xba0e0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)));
    // 0ba0e3  lea eax, [eax + edx*1 + 0x42]
    X86_AT(c, 0xba0e3u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] + 0x42u);
L_ba0e7:
    X86_TICK(c, 14);
    // 0ba0e7  push eax
    X86_AT(c, 0xba0e7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ba0e8  push dword ptr [edi]
    X86_AT(c, 0xba0e8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7]))); push32(c, v); }
    // 0ba0ea  call 0xbbfe0
    X86_AT(c, 0xba0eau);
    push32(c, 0xba0efu); x86_call_known(c, 0xbbfe0u, f_000bbfe0); X86_RET(c, 0xba0efu);
    X86_TICK(c, 11);
    // 0ba0ef  add esp, 8
    X86_AT(c, 0xba0efu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ba0f2  inc esi
    X86_AT(c, 0xba0f2u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0ba0f3  jmp 0xba090
    X86_AT(c, 0xba0f3u);
    X86_POLL(c, 0xba090u); goto L_ba090;
L_ba0f5:
    X86_TICK(c, 26);
    // 0ba0f5  mov dword ptr [edi + 0x18], 0
    X86_AT(c, 0xba0f5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)), 0x0u);
    // 0ba0fc  pop edi
    X86_AT(c, 0xba0fcu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ba0fd  pop esi
    X86_AT(c, 0xba0fdu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ba0fe  leave 
    X86_AT(c, 0xba0feu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ba0ff  ret 
    X86_AT(c, 0xba0ffu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xba07cu, "ran off the end of a function");
}
void f_000ba100(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0ba100  push ebp
    X86_AT(c, 0xba100u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ba101  mov ebp, esp
    X86_AT(c, 0xba101u);
    c.r[5] = c.r[4];
    // 0ba103  push ebx
    X86_AT(c, 0xba103u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ba104  push esi
    X86_AT(c, 0xba104u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ba105  push edi
    X86_AT(c, 0xba105u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ba106  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xba106u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ba109  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xba109u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0ba10c  sub ebx, ebx
    X86_AT(c, 0xba10cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_ba10e:
    X86_TICK(c, 11);
    // 0ba10e  cmp ebx, dword ptr [edi + 4]
    X86_AT(c, 0xba10eu);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0, 4);
    // 0ba111  jge 0xba13f
    X86_AT(c, 0xba111u);
    if (x86_cc(c, 13)) { goto L_ba13f; }
    X86_TICK(c, 25);
    // 0ba113  lea eax, [ebx*4]
    X86_AT(c, 0xba113u);
    c.r[0] = (uint32_t)(c.r[3] * 4);
    // 0ba11a  lea edx, [eax*8]
    X86_AT(c, 0xba11au);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0ba121  lea edx, [eax + edx*4]
    X86_AT(c, 0xba121u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0ba124  mov eax, dword ptr [edi + 0x1c]
    X86_AT(c, 0xba124u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)));
    // 0ba127  mov cl, byte ptr [eax + edx*1]
    X86_AT(c, 0xba127u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2]))));
    // 0ba12a  cmp cl, byte ptr [ebp + 0xc]
    X86_AT(c, 0xba12au);
    (void)x86_sub(c, g8(c, 1), rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 1);
    // 0ba12d  jne 0xba13c
    X86_AT(c, 0xba12du);
    if (x86_cc(c, 5)) { goto L_ba13c; }
    X86_TICK(c, 15);
    // 0ba12f  mov al, byte ptr [eax + edx*1 + 0x83]
    X86_AT(c, 0xba12fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x83u))));
    // 0ba136  mov byte ptr [esi], al
    X86_AT(c, 0xba136u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), g8(c, 0));
    // 0ba138  mov eax, ebx
    X86_AT(c, 0xba138u);
    c.r[0] = c.r[3];
    // 0ba13a  jmp 0xba147
    X86_AT(c, 0xba13au);
    goto L_ba147;
L_ba13c:
    X86_TICK(c, 9);
    // 0ba13c  inc ebx
    X86_AT(c, 0xba13cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0ba13d  jmp 0xba10e
    X86_AT(c, 0xba13du);
    X86_POLL(c, 0xba10eu); goto L_ba10e;
L_ba13f:
    X86_TICK(c, 4);
    // 0ba13f  mov byte ptr [esi], 0xff
    X86_AT(c, 0xba13fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), 0xFFu);
    // 0ba142  mov eax, 0xffffffff
    X86_AT(c, 0xba142u);
    c.r[0] = 0xFFFFFFFFu;
L_ba147:
    X86_TICK(c, 28);
    // 0ba147  pop edi
    X86_AT(c, 0xba147u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ba148  pop esi
    X86_AT(c, 0xba148u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ba149  pop ebx
    X86_AT(c, 0xba149u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ba14a  leave 
    X86_AT(c, 0xba14au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ba14b  ret 
    X86_AT(c, 0xba14bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xba100u, "ran off the end of a function");
}
void f_000ba14c(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0ba14c  cmp dword ptr [0x460e4], 0
    X86_AT(c, 0xba14cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x460E4u))), 0x0u, 0, 4);
    // 0ba153  jne 0xba16b
    X86_AT(c, 0xba153u);
    if (x86_cc(c, 5)) { goto L_ba16b; }
    X86_TICK(c, 11);
    // 0ba155  mov dword ptr [0x460e4], 0xffffffff
    X86_AT(c, 0xba155u);
    wr32((c.sbase[3] + (uint32_t)(0x460E4u)), 0xFFFFFFFFu);
    // 0ba15f  mov dword ptr [0x46da4], 0x46ca4
    X86_AT(c, 0xba15fu);
    wr32((c.sbase[3] + (uint32_t)(0x46DA4u)), 0x46CA4u);
    // 0ba169  jmp 0xba17f
    X86_AT(c, 0xba169u);
    goto L_ba17f;
L_ba16b:
    X86_TICK(c, 4);
    // 0ba16b  mov dword ptr [0x460e4], 0
    X86_AT(c, 0xba16bu);
    wr32((c.sbase[3] + (uint32_t)(0x460E4u)), 0x0u);
    // 0ba175  mov dword ptr [0x46da4], 0x46d24
    X86_AT(c, 0xba175u);
    wr32((c.sbase[3] + (uint32_t)(0x46DA4u)), 0x46D24u);
L_ba17f:
    X86_TICK(c, 10);
    // 0ba17f  ret 
    X86_AT(c, 0xba17fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xba14cu, "ran off the end of a function");
}
void f_000ba180(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0ba180  cmp dword ptr [0x461fc], 0xffffffff
    X86_AT(c, 0xba180u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x461FCu))), 0xFFFFFFFFu, 0, 4);
    // 0ba187  je 0xba19c
    X86_AT(c, 0xba187u);
    if (x86_cc(c, 4)) { goto L_ba19c; }
    X86_TICK(c, 9);
    // 0ba189  push 1
    X86_AT(c, 0xba189u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ba18b  call 0x69
    X86_AT(c, 0xba18bu);
    push32(c, 0xba190u); x86_call_known(c, 0x69u, f_00000069); X86_RET(c, 0xba190u);
    X86_TICK(c, 9);
    // 0ba190  mov dword ptr [0x461fc], 0xffffffff
    X86_AT(c, 0xba190u);
    wr32((c.sbase[3] + (uint32_t)(0x461FCu)), 0xFFFFFFFFu);
    // 0ba19a  jmp 0xba1ad
    X86_AT(c, 0xba19au);
    goto L_ba1ad;
L_ba19c:
    X86_TICK(c, 9);
    // 0ba19c  push 0
    X86_AT(c, 0xba19cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ba19e  call 0x69
    X86_AT(c, 0xba19eu);
    push32(c, 0xba1a3u); x86_call_known(c, 0x69u, f_00000069); X86_RET(c, 0xba1a3u);
    X86_TICK(c, 2);
    // 0ba1a3  mov dword ptr [0x461fc], 1
    X86_AT(c, 0xba1a3u);
    wr32((c.sbase[3] + (uint32_t)(0x461FCu)), 0x1u);
L_ba1ad:
    X86_TICK(c, 12);
    // 0ba1ad  add esp, 4
    X86_AT(c, 0xba1adu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ba1b0  ret 
    X86_AT(c, 0xba1b0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xba180u, "ran off the end of a function");
}
void f_000ba1b4(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0ba1b4  push ebp
    X86_AT(c, 0xba1b4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ba1b5  mov ebp, esp
    X86_AT(c, 0xba1b5u);
    c.r[5] = c.r[4];
    // 0ba1b7  push esi
    X86_AT(c, 0xba1b7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ba1b8  push edi
    X86_AT(c, 0xba1b8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ba1b9  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xba1b9u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ba1bc  mov esi, dword ptr [ebp + 0x14]
    X86_AT(c, 0xba1bcu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0ba1bf  sub ecx, ecx
    X86_AT(c, 0xba1bfu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
L_ba1c1:
    X86_TICK(c, 11);
    // 0ba1c1  cmp ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xba1c1u);
    (void)x86_sub(c, c.r[1], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4);
    // 0ba1c4  jge 0xba211
    X86_AT(c, 0xba1c4u);
    if (x86_cc(c, 13)) { goto L_ba211; }
    X86_TICK(c, 21);
    // 0ba1c6  lea eax, [ecx*4]
    X86_AT(c, 0xba1c6u);
    c.r[0] = (uint32_t)(c.r[1] * 4);
    // 0ba1cd  lea edx, [eax*8]
    X86_AT(c, 0xba1cdu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0ba1d4  lea edx, [eax + edx*4]
    X86_AT(c, 0xba1d4u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0ba1d7  mov al, byte ptr [edi + edx*1]
    X86_AT(c, 0xba1d7u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2]))));
    // 0ba1da  cmp al, byte ptr [ebp + 0x10]
    X86_AT(c, 0xba1dau);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 1);
    // 0ba1dd  jne 0xba20e
    X86_AT(c, 0xba1ddu);
    if (x86_cc(c, 5)) { goto L_ba20e; }
    X86_TICK(c, 18);
    // 0ba1df  mov al, byte ptr [edi + edx*1 + 0x83]
    X86_AT(c, 0xba1dfu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] + 0x83u))));
    // 0ba1e6  mov byte ptr [esi], al
    X86_AT(c, 0xba1e6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), g8(c, 0));
    // 0ba1e8  cmp dword ptr [0x460e4], 0
    X86_AT(c, 0xba1e8u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x460E4u))), 0x0u, 0, 4);
    // 0ba1ef  jne 0xba1f7
    X86_AT(c, 0xba1efu);
    if (x86_cc(c, 5)) { goto L_ba1f7; }
    X86_TICK(c, 9);
    // 0ba1f1  lea eax, [edi + edx*1 + 1]
    X86_AT(c, 0xba1f1u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[2] + 0x1u);
    // 0ba1f5  jmp 0xba216
    X86_AT(c, 0xba1f5u);
    goto L_ba216;
L_ba1f7:
    X86_TICK(c, 15);
    // 0ba1f7  lea eax, [ecx*4]
    X86_AT(c, 0xba1f7u);
    c.r[0] = (uint32_t)(c.r[1] * 4);
    // 0ba1fe  lea edx, [eax*8]
    X86_AT(c, 0xba1feu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0ba205  lea edx, [eax + edx*4]
    X86_AT(c, 0xba205u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0ba208  lea eax, [edi + edx*1 + 0x42]
    X86_AT(c, 0xba208u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[2] + 0x42u);
    // 0ba20c  jmp 0xba216
    X86_AT(c, 0xba20cu);
    goto L_ba216;
L_ba20e:
    X86_TICK(c, 9);
    // 0ba20e  inc ecx
    X86_AT(c, 0xba20eu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0ba20f  jmp 0xba1c1
    X86_AT(c, 0xba20fu);
    X86_POLL(c, 0xba1c1u); goto L_ba1c1;
L_ba211:
    X86_TICK(c, 4);
    // 0ba211  mov byte ptr [esi], 0xff
    X86_AT(c, 0xba211u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), 0xFFu);
    // 0ba214  sub eax, eax
    X86_AT(c, 0xba214u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_ba216:
    X86_TICK(c, 24);
    // 0ba216  pop edi
    X86_AT(c, 0xba216u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ba217  pop esi
    X86_AT(c, 0xba217u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ba218  leave 
    X86_AT(c, 0xba218u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ba219  ret 
    X86_AT(c, 0xba219u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xba1b4u, "ran off the end of a function");
}
void f_000ba21c(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0ba21c  push ebp
    X86_AT(c, 0xba21cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ba21d  mov ebp, esp
    X86_AT(c, 0xba21du);
    c.r[5] = c.r[4];
    // 0ba21f  sub esp, 8
    X86_AT(c, 0xba21fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0ba222  push ebx
    X86_AT(c, 0xba222u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ba223  push esi
    X86_AT(c, 0xba223u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ba224  push edi
    X86_AT(c, 0xba224u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ba225  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xba225u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0ba228  push edi
    X86_AT(c, 0xba228u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ba229  call 0xb9ff8
    X86_AT(c, 0xba229u);
    push32(c, 0xba22eu); x86_call_known(c, 0xb9ff8u, f_000b9ff8); X86_RET(c, 0xba22eu);
    X86_TICK(c, 9);
    // 0ba22e  sub ebx, ebx
    X86_AT(c, 0xba22eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0ba230  call 0xb90e8
    X86_AT(c, 0xba230u);
    push32(c, 0xba235u); x86_call_known(c, 0xb90e8u, f_000b90e8); X86_RET(c, 0xba235u);
    X86_TICK(c, 17);
    // 0ba235  sub ebx, ebx
    X86_AT(c, 0xba235u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0ba237  mov dword ptr [ebp - 4], ebx
    X86_AT(c, 0xba237u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[3]);
    // 0ba23a  mov esi, ebx
    X86_AT(c, 0xba23au);
    c.r[6] = c.r[3];
    // 0ba23c  push esi
    X86_AT(c, 0xba23cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ba23d  push edi
    X86_AT(c, 0xba23du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ba23e  call 0xb9f98
    X86_AT(c, 0xba23eu);
    push32(c, 0xba243u); x86_call_known(c, 0xb9f98u, f_000b9f98); X86_RET(c, 0xba243u);
    X86_TICK(c, 2);
    // 0ba243  add esp, 0xc
    X86_AT(c, 0xba243u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_ba246:
    X86_TICK(c, 12);
    // 0ba246  push dword ptr [ebp + 8]
    X86_AT(c, 0xba246u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0ba249  call 0xb9930
    X86_AT(c, 0xba249u);
    push32(c, 0xba24eu); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xba24eu);
    X86_TICK(c, 12);
    // 0ba24e  xchg ebx, eax
    X86_AT(c, 0xba24eu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0ba24f  add esp, 4
    X86_AT(c, 0xba24fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ba252  and bl, bl
    X86_AT(c, 0xba252u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0ba254  je 0xba246
    X86_AT(c, 0xba254u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xba246u); goto L_ba246; }
    X86_TICK(c, 7);
    // 0ba256  cmp bl, 4
    X86_AT(c, 0xba256u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0ba259  je 0xba2dc
    X86_AT(c, 0xba259u);
    if (x86_cc(c, 4)) { goto L_ba2dc; }
    X86_TICK(c, 7);
    // 0ba25f  cmp bl, 5
    X86_AT(c, 0xba25fu);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0ba262  jne 0xba26f
    X86_AT(c, 0xba262u);
    if (x86_cc(c, 5)) { goto L_ba26f; }
    X86_TICK(c, 9);
    // 0ba264  dec esi
    X86_AT(c, 0xba264u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0ba265  and esi, esi
    X86_AT(c, 0xba265u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0ba267  jge 0xba27c
    X86_AT(c, 0xba267u);
    if (x86_cc(c, 13)) { goto L_ba27c; }
    X86_TICK(c, 13);
    // 0ba269  mov esi, dword ptr [edi + 4]
    X86_AT(c, 0xba269u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)));
    // 0ba26c  dec esi
    X86_AT(c, 0xba26cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0ba26d  jmp 0xba27c
    X86_AT(c, 0xba26du);
    goto L_ba27c;
L_ba26f:
    X86_TICK(c, 7);
    // 0ba26f  cmp bl, 6
    X86_AT(c, 0xba26fu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0ba272  jne 0xba288
    X86_AT(c, 0xba272u);
    if (x86_cc(c, 5)) { goto L_ba288; }
    X86_TICK(c, 13);
    // 0ba274  inc esi
    X86_AT(c, 0xba274u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0ba275  cmp esi, dword ptr [edi + 4]
    X86_AT(c, 0xba275u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0, 4);
    // 0ba278  jl 0xba27c
    X86_AT(c, 0xba278u);
    if (x86_cc(c, 12)) { goto L_ba27c; }
    X86_TICK(c, 2);
    // 0ba27a  sub esi, esi
    X86_AT(c, 0xba27au);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_ba27c:
    X86_TICK(c, 11);
    // 0ba27c  push esi
    X86_AT(c, 0xba27cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ba27d  push edi
    X86_AT(c, 0xba27du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ba27e  call 0xb9f98
    X86_AT(c, 0xba27eu);
    push32(c, 0xba283u); x86_call_known(c, 0xb9f98u, f_000b9f98); X86_RET(c, 0xba283u);
    X86_TICK(c, 9);
    // 0ba283  add esp, 8
    X86_AT(c, 0xba283u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ba286  jmp 0xba246
    X86_AT(c, 0xba286u);
    X86_POLL(c, 0xba246u); goto L_ba246;
L_ba288:
    X86_TICK(c, 7);
    // 0ba288  cmp bl, 1
    X86_AT(c, 0xba288u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ba28b  jne 0xba2b7
    X86_AT(c, 0xba28bu);
    if (x86_cc(c, 5)) { goto L_ba2b7; }
    X86_TICK(c, 18);
    // 0ba28d  lea eax, [ebp - 5]
    X86_AT(c, 0xba28du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 0ba290  push eax
    X86_AT(c, 0xba290u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ba291  push dword ptr [ebp + 0x10]
    X86_AT(c, 0xba291u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 0ba294  push edi
    X86_AT(c, 0xba294u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ba295  call 0xba100
    X86_AT(c, 0xba295u);
    push32(c, 0xba29au); x86_call_known(c, 0xba100u, f_000ba100); X86_RET(c, 0xba29au);
    X86_TICK(c, 11);
    // 0ba29a  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xba29au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0ba29d  add esp, 0xc
    X86_AT(c, 0xba29du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ba2a0  inc eax
    X86_AT(c, 0xba2a0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0ba2a1  jne 0xba2b2
    X86_AT(c, 0xba2a1u);
    if (x86_cc(c, 5)) { goto L_ba2b2; }
    X86_TICK(c, 11);
    // 0ba2a3  push esi
    X86_AT(c, 0xba2a3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ba2a4  push edi
    X86_AT(c, 0xba2a4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ba2a5  call 0xb9f98
    X86_AT(c, 0xba2a5u);
    push32(c, 0xba2aau); x86_call_known(c, 0xb9f98u, f_000b9f98); X86_RET(c, 0xba2aau);
    X86_TICK(c, 13);
    // 0ba2aa  mov al, byte ptr [ebp + 0x10]
    X86_AT(c, 0xba2aau);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 0ba2ad  add esp, 8
    X86_AT(c, 0xba2adu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ba2b0  jmp 0xba308
    X86_AT(c, 0xba2b0u);
    goto L_ba308;
L_ba2b2:
    X86_TICK(c, 11);
    // 0ba2b2  mov esi, dword ptr [ebp - 4]
    X86_AT(c, 0xba2b2u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0ba2b5  jmp 0xba2d2
    X86_AT(c, 0xba2b5u);
    goto L_ba2d2;
L_ba2b7:
    X86_TICK(c, 15);
    // 0ba2b7  lea eax, [ebp - 5]
    X86_AT(c, 0xba2b7u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 0ba2ba  push eax
    X86_AT(c, 0xba2bau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ba2bb  push ebx
    X86_AT(c, 0xba2bbu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ba2bc  push edi
    X86_AT(c, 0xba2bcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ba2bd  call 0xba100
    X86_AT(c, 0xba2bdu);
    push32(c, 0xba2c2u); x86_call_known(c, 0xba100u, f_000ba100); X86_RET(c, 0xba2c2u);
    X86_TICK(c, 11);
    // 0ba2c2  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xba2c2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0ba2c5  add esp, 0xc
    X86_AT(c, 0xba2c5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ba2c8  cmp eax, 0xffffffff
    X86_AT(c, 0xba2c8u);
    (void)x86_sub(c, c.r[0], 0xFFFFFFFFu, 0, 4);
    // 0ba2cb  je 0xba246
    X86_AT(c, 0xba2cbu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xba246u); goto L_ba246; }
    X86_TICK(c, 3);
    // 0ba2d1  xchg esi, eax
    X86_AT(c, 0xba2d1u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_ba2d2:
    X86_TICK(c, 11);
    // 0ba2d2  push esi
    X86_AT(c, 0xba2d2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ba2d3  push edi
    X86_AT(c, 0xba2d3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ba2d4  call 0xb9f98
    X86_AT(c, 0xba2d4u);
    push32(c, 0xba2d9u); x86_call_known(c, 0xb9f98u, f_000b9f98); X86_RET(c, 0xba2d9u);
    X86_TICK(c, 2);
    // 0ba2d9  add esp, 8
    X86_AT(c, 0xba2d9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_ba2dc:
    X86_TICK(c, 9);
    // 0ba2dc  push 2
    X86_AT(c, 0xba2dcu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ba2de  call 0xbebbc
    X86_AT(c, 0xba2deu);
    push32(c, 0xba2e3u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xba2e3u);
    X86_TICK(c, 11);
    // 0ba2e3  push esi
    X86_AT(c, 0xba2e3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ba2e4  push edi
    X86_AT(c, 0xba2e4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ba2e5  call 0xb9f98
    X86_AT(c, 0xba2e5u);
    push32(c, 0xba2eau); x86_call_known(c, 0xb9f98u, f_000b9f98); X86_RET(c, 0xba2eau);
    X86_TICK(c, 16);
    // 0ba2ea  lea eax, [esi*4]
    X86_AT(c, 0xba2eau);
    c.r[0] = (uint32_t)(c.r[6] * 4);
    // 0ba2f1  lea edx, [eax*8]
    X86_AT(c, 0xba2f1u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0ba2f8  lea edx, [eax + edx*4]
    X86_AT(c, 0xba2f8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0ba2fb  mov eax, dword ptr [edi + 0x1c]
    X86_AT(c, 0xba2fbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)));
    // 0ba2fe  mov al, byte ptr [eax + edx*1 + 0x83]
    X86_AT(c, 0xba2feu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x83u))));
    // 0ba305  add esp, 0xc
    X86_AT(c, 0xba305u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_ba308:
    X86_TICK(c, 28);
    // 0ba308  pop edi
    X86_AT(c, 0xba308u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ba309  pop esi
    X86_AT(c, 0xba309u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ba30a  pop ebx
    X86_AT(c, 0xba30au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ba30b  leave 
    X86_AT(c, 0xba30bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ba30c  ret 
    X86_AT(c, 0xba30cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xba21cu, "ran off the end of a function");
}
}
