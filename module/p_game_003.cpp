#include "p_game_funcs.h"
namespace p_game {
void f_000e3ff0(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0e3ff0  push ebp
    X86_AT(c, 0xe3ff0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e3ff1  mov ebp, esp
    X86_AT(c, 0xe3ff1u);
    c.r[5] = c.r[4];
    // 0e3ff3  push ebx
    X86_AT(c, 0xe3ff3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e3ff4  push esi
    X86_AT(c, 0xe3ff4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e3ff5  push edi
    X86_AT(c, 0xe3ff5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e3ff6  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe3ff6u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e3ff9  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe3ff9u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e3ffc  and edi, edi
    X86_AT(c, 0xe3ffcu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e3ffe  jne 0xe4018
    X86_AT(c, 0xe3ffeu);
    if (x86_cc(c, 5)) { goto L_e4018; }
    X86_TICK(c, 4);
    // 0e4000  mov byte ptr [0x7a6ca], 0x30
    X86_AT(c, 0xe4000u);
    wr8((c.sbase[3] + (uint32_t)(0x7A6CAu)), 0x30u);
    // 0e4007  mov ebx, 0x7a6ca
    X86_AT(c, 0xe4007u);
    c.r[3] = 0x7A6CAu;
L_e400c:
    X86_TICK(c, 7);
    // 0e400c  cmp esi, 1
    X86_AT(c, 0xe400cu);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0e400f  jle 0xe404f
    X86_AT(c, 0xe400fu);
    if (x86_cc(c, 14)) { goto L_e404f; }
    X86_TICK(c, 13);
    // 0e4011  dec ebx
    X86_AT(c, 0xe4011u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 0e4012  mov byte ptr [ebx], 0x20
    X86_AT(c, 0xe4012u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3])), 0x20u);
    // 0e4015  dec esi
    X86_AT(c, 0xe4015u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0e4016  jmp 0xe400c
    X86_AT(c, 0xe4016u);
    X86_POLL(c, 0xe400cu); goto L_e400c;
L_e4018:
    X86_TICK(c, 2);
    // 0e4018  mov ebx, 0x7a6ca
    X86_AT(c, 0xe4018u);
    c.r[3] = 0x7A6CAu;
L_e401d:
    X86_TICK(c, 7);
    // 0e401d  and edi, edi
    X86_AT(c, 0xe401du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e401f  jle 0xe4043
    X86_AT(c, 0xe401fu);
    if (x86_cc(c, 14)) { goto L_e4043; }
    X86_TICK(c, 59);
    // 0e4021  mov eax, edi
    X86_AT(c, 0xe4021u);
    c.r[0] = c.r[7];
    // 0e4023  cdq 
    X86_AT(c, 0xe4023u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e4024  mov ecx, 0xa
    X86_AT(c, 0xe4024u);
    c.r[1] = 0xAu;
    // 0e4029  idiv ecx
    X86_AT(c, 0xe4029u);
    x86_idiv(c, c.r[1], 4, 0xe4029u);
    // 0e402b  add dl, 0x30
    X86_AT(c, 0xe402bu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x30u, 0, 1)); }
    // 0e402e  mov byte ptr [ebx], dl
    X86_AT(c, 0xe402eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[3])), g8(c, 2));
    // 0e4030  dec esi
    X86_AT(c, 0xe4030u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0e4031  cmp esi, 1
    X86_AT(c, 0xe4031u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0e4034  jl 0xe404f
    X86_AT(c, 0xe4034u);
    if (x86_cc(c, 12)) { goto L_e404f; }
    X86_TICK(c, 59);
    // 0e4036  xchg edi, eax
    X86_AT(c, 0xe4036u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0e4037  cdq 
    X86_AT(c, 0xe4037u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e4038  mov ecx, 0xa
    X86_AT(c, 0xe4038u);
    c.r[1] = 0xAu;
    // 0e403d  idiv ecx
    X86_AT(c, 0xe403du);
    x86_idiv(c, c.r[1], 4, 0xe403du);
    // 0e403f  xchg edi, eax
    X86_AT(c, 0xe403fu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0e4040  dec ebx
    X86_AT(c, 0xe4040u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 0e4041  jmp 0xe401d
    X86_AT(c, 0xe4041u);
    X86_POLL(c, 0xe401du); goto L_e401d;
L_e4043:
    X86_TICK(c, 7);
    // 0e4043  and esi, esi
    X86_AT(c, 0xe4043u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e4045  jle 0xe404e
    X86_AT(c, 0xe4045u);
    if (x86_cc(c, 14)) { goto L_e404e; }
    X86_TICK(c, 13);
    // 0e4047  mov byte ptr [ebx], 0x20
    X86_AT(c, 0xe4047u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3])), 0x20u);
    // 0e404a  dec ebx
    X86_AT(c, 0xe404au);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 0e404b  dec esi
    X86_AT(c, 0xe404bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0e404c  jmp 0xe4043
    X86_AT(c, 0xe404cu);
    X86_POLL(c, 0xe4043u); goto L_e4043;
L_e404e:
    X86_TICK(c, 2);
    // 0e404e  inc ebx
    X86_AT(c, 0xe404eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
L_e404f:
    X86_TICK(c, 30);
    // 0e404f  mov eax, ebx
    X86_AT(c, 0xe404fu);
    c.r[0] = c.r[3];
    // 0e4051  pop edi
    X86_AT(c, 0xe4051u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e4052  pop esi
    X86_AT(c, 0xe4052u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e4053  pop ebx
    X86_AT(c, 0xe4053u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e4054  leave 
    X86_AT(c, 0xe4054u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e4055  ret 
    X86_AT(c, 0xe4055u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3ff0u, "ran off the end of a function");
}
void f_000e4058(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0e4058  push ebp
    X86_AT(c, 0xe4058u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e4059  mov ebp, esp
    X86_AT(c, 0xe4059u);
    c.r[5] = c.r[4];
    // 0e405b  push esi
    X86_AT(c, 0xe405bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e405c  push edi
    X86_AT(c, 0xe405cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e405d  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe405du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e4060  mov ecx, 0x7a6cc
    X86_AT(c, 0xe4060u);
    c.r[1] = 0x7A6CCu;
L_e4065:
    X86_TICK(c, 11);
    // 0e4065  mov al, byte ptr [edi]
    X86_AT(c, 0xe4065u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0e4067  and al, al
    X86_AT(c, 0xe4067u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0e4069  je 0xe42c0
    X86_AT(c, 0xe4069u);
    if (x86_cc(c, 4)) { goto L_e42c0; }
    X86_TICK(c, 12);
    // 0e406f  movzx edx, al
    X86_AT(c, 0xe406fu);
    c.r[2] = g8(c, 0);
    // 0e4072  sub edx, 0x20
    X86_AT(c, 0xe4072u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x20u, 0, 4); }
    // 0e4075  cmp edx, 0x3a
    X86_AT(c, 0xe4075u);
    (void)x86_sub(c, c.r[2], 0x3Au, 0, 4);
    // 0e4078  ja 0xe42b0
    X86_AT(c, 0xe4078u);
    if (x86_cc(c, 7)) { goto L_e42b0; }
    X86_TICK(c, 7);
    // 0e407e  jmp dword ptr cs:[edx*4 + 0xe4086]
    X86_AT(c, 0xe407eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xE4086u)));
      switch (t) {
      case 0xe4172u: goto L_e4172;
      case 0xe417bu: goto L_e417b;
      case 0xe4184u: goto L_e4184;
      case 0xe418du: goto L_e418d;
      case 0xe4196u: goto L_e4196;
      case 0xe419fu: goto L_e419f;
      case 0xe41a8u: goto L_e41a8;
      case 0xe41b1u: goto L_e41b1;
      case 0xe41bau: goto L_e41ba;
      case 0xe41c3u: goto L_e41c3;
      case 0xe41ccu: goto L_e41cc;
      case 0xe41d5u: goto L_e41d5;
      case 0xe41deu: goto L_e41de;
      case 0xe41e7u: goto L_e41e7;
      case 0xe41f0u: goto L_e41f0;
      case 0xe41f9u: goto L_e41f9;
      case 0xe4202u: goto L_e4202;
      case 0xe420bu: goto L_e420b;
      case 0xe4214u: goto L_e4214;
      case 0xe421du: goto L_e421d;
      case 0xe4226u: goto L_e4226;
      case 0xe422fu: goto L_e422f;
      case 0xe4238u: goto L_e4238;
      case 0xe4241u: goto L_e4241;
      case 0xe424au: goto L_e424a;
      case 0xe4253u: goto L_e4253;
      case 0xe425cu: goto L_e425c;
      case 0xe4262u: goto L_e4262;
      case 0xe4268u: goto L_e4268;
      case 0xe426eu: goto L_e426e;
      case 0xe4274u: goto L_e4274;
      case 0xe427au: goto L_e427a;
      case 0xe4280u: goto L_e4280;
      case 0xe4286u: goto L_e4286;
      case 0xe428cu: goto L_e428c;
      case 0xe4292u: goto L_e4292;
      case 0xe4298u: goto L_e4298;
      case 0xe429eu: goto L_e429e;
      case 0xe42a4u: goto L_e42a4;
      case 0xe42aau: goto L_e42aa;
      case 0xe42b0u: goto L_e42b0;
      default: x86_jump(c, t); return; } }
L_e4172:
    X86_TICK(c, 9);
    // 0e4172  mov si, 0x4681
    X86_AT(c, 0xe4172u);
    s16(c, 6, 0x4681u);
    // 0e4176  jmp 0xe42b4
    X86_AT(c, 0xe4176u);
    goto L_e42b4;
L_e417b:
    X86_TICK(c, 9);
    // 0e417b  mov si, 0x75eb
    X86_AT(c, 0xe417bu);
    s16(c, 6, 0x75EBu);
    // 0e417f  jmp 0xe42b4
    X86_AT(c, 0xe417fu);
    goto L_e42b4;
L_e4184:
    X86_TICK(c, 9);
    // 0e4184  mov si, 0x74eb
    X86_AT(c, 0xe4184u);
    s16(c, 6, 0x74EBu);
    // 0e4188  jmp 0xe42b4
    X86_AT(c, 0xe4188u);
    goto L_e42b4;
L_e418d:
    X86_TICK(c, 9);
    // 0e418d  mov si, 0x5e81
    X86_AT(c, 0xe418du);
    s16(c, 6, 0x5E81u);
    // 0e4191  jmp 0xe42b4
    X86_AT(c, 0xe4191u);
    goto L_e42b4;
L_e4196:
    X86_TICK(c, 9);
    // 0e4196  mov si, 0x80eb
    X86_AT(c, 0xe4196u);
    s16(c, 6, 0x80EBu);
    // 0e419a  jmp 0xe42b4
    X86_AT(c, 0xe419au);
    goto L_e42b4;
L_e419f:
    X86_TICK(c, 9);
    // 0e419f  mov si, 0x76eb
    X86_AT(c, 0xe419fu);
    s16(c, 6, 0x76EBu);
    // 0e41a3  jmp 0xe42b4
    X86_AT(c, 0xe41a3u);
    goto L_e42b4;
L_e41a8:
    X86_TICK(c, 9);
    // 0e41a8  mov si, 0x77eb
    X86_AT(c, 0xe41a8u);
    s16(c, 6, 0x77EBu);
    // 0e41ac  jmp 0xe42b4
    X86_AT(c, 0xe41acu);
    goto L_e42b4;
L_e41b1:
    X86_TICK(c, 9);
    // 0e41b1  mov si, 0x78eb
    X86_AT(c, 0xe41b1u);
    s16(c, 6, 0x78EBu);
    // 0e41b5  jmp 0xe42b4
    X86_AT(c, 0xe41b5u);
    goto L_e42b4;
L_e41ba:
    X86_TICK(c, 9);
    // 0e41ba  mov si, 0x79eb
    X86_AT(c, 0xe41bau);
    s16(c, 6, 0x79EBu);
    // 0e41be  jmp 0xe42b4
    X86_AT(c, 0xe41beu);
    goto L_e42b4;
L_e41c3:
    X86_TICK(c, 9);
    // 0e41c3  mov si, 0x7aeb
    X86_AT(c, 0xe41c3u);
    s16(c, 6, 0x7AEBu);
    // 0e41c7  jmp 0xe42b4
    X86_AT(c, 0xe41c7u);
    goto L_e42b4;
L_e41cc:
    X86_TICK(c, 9);
    // 0e41cc  mov si, 0x7beb
    X86_AT(c, 0xe41ccu);
    s16(c, 6, 0x7BEBu);
    // 0e41d0  jmp 0xe42b4
    X86_AT(c, 0xe41d0u);
    goto L_e42b4;
L_e41d5:
    X86_TICK(c, 9);
    // 0e41d5  mov si, 0x7ceb
    X86_AT(c, 0xe41d5u);
    s16(c, 6, 0x7CEBu);
    // 0e41d9  jmp 0xe42b4
    X86_AT(c, 0xe41d9u);
    goto L_e42b4;
L_e41de:
    X86_TICK(c, 9);
    // 0e41de  mov si, 0x7deb
    X86_AT(c, 0xe41deu);
    s16(c, 6, 0x7DEBu);
    // 0e41e2  jmp 0xe42b4
    X86_AT(c, 0xe41e2u);
    goto L_e42b4;
L_e41e7:
    X86_TICK(c, 9);
    // 0e41e7  mov si, 0x7eeb
    X86_AT(c, 0xe41e7u);
    s16(c, 6, 0x7EEBu);
    // 0e41eb  jmp 0xe42b4
    X86_AT(c, 0xe41ebu);
    goto L_e42b4;
L_e41f0:
    X86_TICK(c, 9);
    // 0e41f0  mov si, 0x40eb
    X86_AT(c, 0xe41f0u);
    s16(c, 6, 0x40EBu);
    // 0e41f4  jmp 0xe42b4
    X86_AT(c, 0xe41f4u);
    goto L_e42b4;
L_e41f9:
    X86_TICK(c, 9);
    // 0e41f9  mov si, 0x41eb
    X86_AT(c, 0xe41f9u);
    s16(c, 6, 0x41EBu);
    // 0e41fd  jmp 0xe42b4
    X86_AT(c, 0xe41fdu);
    goto L_e42b4;
L_e4202:
    X86_TICK(c, 9);
    // 0e4202  mov si, 0x42eb
    X86_AT(c, 0xe4202u);
    s16(c, 6, 0x42EBu);
    // 0e4206  jmp 0xe42b4
    X86_AT(c, 0xe4206u);
    goto L_e42b4;
L_e420b:
    X86_TICK(c, 9);
    // 0e420b  mov si, 0x43eb
    X86_AT(c, 0xe420bu);
    s16(c, 6, 0x43EBu);
    // 0e420f  jmp 0xe42b4
    X86_AT(c, 0xe420fu);
    goto L_e42b4;
L_e4214:
    X86_TICK(c, 9);
    // 0e4214  mov si, 0x44eb
    X86_AT(c, 0xe4214u);
    s16(c, 6, 0x44EBu);
    // 0e4218  jmp 0xe42b4
    X86_AT(c, 0xe4218u);
    goto L_e42b4;
L_e421d:
    X86_TICK(c, 9);
    // 0e421d  mov si, 0x45eb
    X86_AT(c, 0xe421du);
    s16(c, 6, 0x45EBu);
    // 0e4221  jmp 0xe42b4
    X86_AT(c, 0xe4221u);
    goto L_e42b4;
L_e4226:
    X86_TICK(c, 9);
    // 0e4226  mov si, 0x46eb
    X86_AT(c, 0xe4226u);
    s16(c, 6, 0x46EBu);
    // 0e422a  jmp 0xe42b4
    X86_AT(c, 0xe422au);
    goto L_e42b4;
L_e422f:
    X86_TICK(c, 9);
    // 0e422f  mov si, 0x47eb
    X86_AT(c, 0xe422fu);
    s16(c, 6, 0x47EBu);
    // 0e4233  jmp 0xe42b4
    X86_AT(c, 0xe4233u);
    goto L_e42b4;
L_e4238:
    X86_TICK(c, 9);
    // 0e4238  mov si, 0x48eb
    X86_AT(c, 0xe4238u);
    s16(c, 6, 0x48EBu);
    // 0e423c  jmp 0xe42b4
    X86_AT(c, 0xe423cu);
    goto L_e42b4;
L_e4241:
    X86_TICK(c, 9);
    // 0e4241  mov si, 0x49eb
    X86_AT(c, 0xe4241u);
    s16(c, 6, 0x49EBu);
    // 0e4245  jmp 0xe42b4
    X86_AT(c, 0xe4245u);
    goto L_e42b4;
L_e424a:
    X86_TICK(c, 9);
    // 0e424a  mov si, 0x4aeb
    X86_AT(c, 0xe424au);
    s16(c, 6, 0x4AEBu);
    // 0e424e  jmp 0xe42b4
    X86_AT(c, 0xe424eu);
    goto L_e42b4;
L_e4253:
    X86_TICK(c, 9);
    // 0e4253  mov si, 0x4beb
    X86_AT(c, 0xe4253u);
    s16(c, 6, 0x4BEBu);
    // 0e4257  jmp 0xe42b4
    X86_AT(c, 0xe4257u);
    goto L_e42b4;
L_e425c:
    X86_TICK(c, 9);
    // 0e425c  mov si, 0x4ceb
    X86_AT(c, 0xe425cu);
    s16(c, 6, 0x4CEBu);
    // 0e4260  jmp 0xe42b4
    X86_AT(c, 0xe4260u);
    goto L_e42b4;
L_e4262:
    X86_TICK(c, 9);
    // 0e4262  mov si, 0x4deb
    X86_AT(c, 0xe4262u);
    s16(c, 6, 0x4DEBu);
    // 0e4266  jmp 0xe42b4
    X86_AT(c, 0xe4266u);
    goto L_e42b4;
L_e4268:
    X86_TICK(c, 9);
    // 0e4268  mov si, 0x4eeb
    X86_AT(c, 0xe4268u);
    s16(c, 6, 0x4EEBu);
    // 0e426c  jmp 0xe42b4
    X86_AT(c, 0xe426cu);
    goto L_e42b4;
L_e426e:
    X86_TICK(c, 9);
    // 0e426e  mov si, 0x4feb
    X86_AT(c, 0xe426eu);
    s16(c, 6, 0x4FEBu);
    // 0e4272  jmp 0xe42b4
    X86_AT(c, 0xe4272u);
    goto L_e42b4;
L_e4274:
    X86_TICK(c, 9);
    // 0e4274  mov si, 0x50eb
    X86_AT(c, 0xe4274u);
    s16(c, 6, 0x50EBu);
    // 0e4278  jmp 0xe42b4
    X86_AT(c, 0xe4278u);
    goto L_e42b4;
L_e427a:
    X86_TICK(c, 9);
    // 0e427a  mov si, 0x51eb
    X86_AT(c, 0xe427au);
    s16(c, 6, 0x51EBu);
    // 0e427e  jmp 0xe42b4
    X86_AT(c, 0xe427eu);
    goto L_e42b4;
L_e4280:
    X86_TICK(c, 9);
    // 0e4280  mov si, 0x52eb
    X86_AT(c, 0xe4280u);
    s16(c, 6, 0x52EBu);
    // 0e4284  jmp 0xe42b4
    X86_AT(c, 0xe4284u);
    goto L_e42b4;
L_e4286:
    X86_TICK(c, 9);
    // 0e4286  mov si, 0x53eb
    X86_AT(c, 0xe4286u);
    s16(c, 6, 0x53EBu);
    // 0e428a  jmp 0xe42b4
    X86_AT(c, 0xe428au);
    goto L_e42b4;
L_e428c:
    X86_TICK(c, 9);
    // 0e428c  mov si, 0x54eb
    X86_AT(c, 0xe428cu);
    s16(c, 6, 0x54EBu);
    // 0e4290  jmp 0xe42b4
    X86_AT(c, 0xe4290u);
    goto L_e42b4;
L_e4292:
    X86_TICK(c, 9);
    // 0e4292  mov si, 0x55eb
    X86_AT(c, 0xe4292u);
    s16(c, 6, 0x55EBu);
    // 0e4296  jmp 0xe42b4
    X86_AT(c, 0xe4296u);
    goto L_e42b4;
L_e4298:
    X86_TICK(c, 9);
    // 0e4298  mov si, 0x56eb
    X86_AT(c, 0xe4298u);
    s16(c, 6, 0x56EBu);
    // 0e429c  jmp 0xe42b4
    X86_AT(c, 0xe429cu);
    goto L_e42b4;
L_e429e:
    X86_TICK(c, 9);
    // 0e429e  mov si, 0x57eb
    X86_AT(c, 0xe429eu);
    s16(c, 6, 0x57EBu);
    // 0e42a2  jmp 0xe42b4
    X86_AT(c, 0xe42a2u);
    goto L_e42b4;
L_e42a4:
    X86_TICK(c, 9);
    // 0e42a4  mov si, 0x58eb
    X86_AT(c, 0xe42a4u);
    s16(c, 6, 0x58EBu);
    // 0e42a8  jmp 0xe42b4
    X86_AT(c, 0xe42a8u);
    goto L_e42b4;
L_e42aa:
    X86_TICK(c, 9);
    // 0e42aa  mov si, 0x59eb
    X86_AT(c, 0xe42aau);
    s16(c, 6, 0x59EBu);
    // 0e42ae  jmp 0xe42b4
    X86_AT(c, 0xe42aeu);
    goto L_e42b4;
L_e42b0:
    X86_TICK(c, 2);
    // 0e42b0  mov si, 0x4081
    X86_AT(c, 0xe42b0u);
    s16(c, 6, 0x4081u);
L_e42b4:
    X86_TICK(c, 13);
    // 0e42b4  mov word ptr [ecx], si
    X86_AT(c, 0xe42b4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[1])), (c.r[6] & 0xFFFFu));
    // 0e42b7  inc edi
    X86_AT(c, 0xe42b7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e42b8  add ecx, 2
    X86_AT(c, 0xe42b8u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
    // 0e42bb  jmp 0xe4065
    X86_AT(c, 0xe42bbu);
    X86_POLL(c, 0xe4065u); goto L_e4065;
L_e42c0:
    X86_TICK(c, 28);
    // 0e42c0  mov word ptr [ecx], 0
    X86_AT(c, 0xe42c0u);
    wr16((c.sbase[3] + (uint32_t)(c.r[1])), 0x0u);
    // 0e42c5  mov eax, 0x7a6cc
    X86_AT(c, 0xe42c5u);
    c.r[0] = 0x7A6CCu;
    // 0e42ca  pop edi
    X86_AT(c, 0xe42cau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e42cb  pop esi
    X86_AT(c, 0xe42cbu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e42cc  leave 
    X86_AT(c, 0xe42ccu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e42cd  ret 
    X86_AT(c, 0xe42cdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4058u, "ran off the end of a function");
}
void f_000e42b4(X86Cpu& c) {
    goto L_e42b4;
L_e4065:
    X86_TICK(c, 11);
    // 0e4065  mov al, byte ptr [edi]
    X86_AT(c, 0xe4065u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0e4067  and al, al
    X86_AT(c, 0xe4067u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0e4069  je 0xe42c0
    X86_AT(c, 0xe4069u);
    if (x86_cc(c, 4)) { goto L_e42c0; }
    X86_TICK(c, 12);
    // 0e406f  movzx edx, al
    X86_AT(c, 0xe406fu);
    c.r[2] = g8(c, 0);
    // 0e4072  sub edx, 0x20
    X86_AT(c, 0xe4072u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x20u, 0, 4); }
    // 0e4075  cmp edx, 0x3a
    X86_AT(c, 0xe4075u);
    (void)x86_sub(c, c.r[2], 0x3Au, 0, 4);
    // 0e4078  ja 0xe42b0
    X86_AT(c, 0xe4078u);
    if (x86_cc(c, 7)) { goto L_e42b0; }
    X86_TICK(c, 7);
    // 0e407e  jmp dword ptr cs:[edx*4 + 0xe4086]
    X86_AT(c, 0xe407eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xE4086u)));
      switch (t) {
      case 0xe4172u: goto L_e4172;
      case 0xe417bu: goto L_e417b;
      case 0xe4184u: goto L_e4184;
      case 0xe418du: goto L_e418d;
      case 0xe4196u: goto L_e4196;
      case 0xe419fu: goto L_e419f;
      case 0xe41a8u: goto L_e41a8;
      case 0xe41b1u: goto L_e41b1;
      case 0xe41bau: goto L_e41ba;
      case 0xe41c3u: goto L_e41c3;
      case 0xe41ccu: goto L_e41cc;
      case 0xe41d5u: goto L_e41d5;
      case 0xe41deu: goto L_e41de;
      case 0xe41e7u: goto L_e41e7;
      case 0xe41f0u: goto L_e41f0;
      case 0xe41f9u: goto L_e41f9;
      case 0xe4202u: goto L_e4202;
      case 0xe420bu: goto L_e420b;
      case 0xe4214u: goto L_e4214;
      case 0xe421du: goto L_e421d;
      case 0xe4226u: goto L_e4226;
      case 0xe422fu: goto L_e422f;
      case 0xe4238u: goto L_e4238;
      case 0xe4241u: goto L_e4241;
      case 0xe424au: goto L_e424a;
      case 0xe4253u: goto L_e4253;
      case 0xe425cu: goto L_e425c;
      case 0xe4262u: goto L_e4262;
      case 0xe4268u: goto L_e4268;
      case 0xe426eu: goto L_e426e;
      case 0xe4274u: goto L_e4274;
      case 0xe427au: goto L_e427a;
      case 0xe4280u: goto L_e4280;
      case 0xe4286u: goto L_e4286;
      case 0xe428cu: goto L_e428c;
      case 0xe4292u: goto L_e4292;
      case 0xe4298u: goto L_e4298;
      case 0xe429eu: goto L_e429e;
      case 0xe42a4u: goto L_e42a4;
      case 0xe42aau: goto L_e42aa;
      case 0xe42b0u: goto L_e42b0;
      default: x86_jump(c, t); return; } }
L_e4172:
    X86_TICK(c, 9);
    // 0e4172  mov si, 0x4681
    X86_AT(c, 0xe4172u);
    s16(c, 6, 0x4681u);
    // 0e4176  jmp 0xe42b4
    X86_AT(c, 0xe4176u);
    goto L_e42b4;
L_e417b:
    X86_TICK(c, 9);
    // 0e417b  mov si, 0x75eb
    X86_AT(c, 0xe417bu);
    s16(c, 6, 0x75EBu);
    // 0e417f  jmp 0xe42b4
    X86_AT(c, 0xe417fu);
    goto L_e42b4;
L_e4184:
    X86_TICK(c, 9);
    // 0e4184  mov si, 0x74eb
    X86_AT(c, 0xe4184u);
    s16(c, 6, 0x74EBu);
    // 0e4188  jmp 0xe42b4
    X86_AT(c, 0xe4188u);
    goto L_e42b4;
L_e418d:
    X86_TICK(c, 9);
    // 0e418d  mov si, 0x5e81
    X86_AT(c, 0xe418du);
    s16(c, 6, 0x5E81u);
    // 0e4191  jmp 0xe42b4
    X86_AT(c, 0xe4191u);
    goto L_e42b4;
L_e4196:
    X86_TICK(c, 9);
    // 0e4196  mov si, 0x80eb
    X86_AT(c, 0xe4196u);
    s16(c, 6, 0x80EBu);
    // 0e419a  jmp 0xe42b4
    X86_AT(c, 0xe419au);
    goto L_e42b4;
L_e419f:
    X86_TICK(c, 9);
    // 0e419f  mov si, 0x76eb
    X86_AT(c, 0xe419fu);
    s16(c, 6, 0x76EBu);
    // 0e41a3  jmp 0xe42b4
    X86_AT(c, 0xe41a3u);
    goto L_e42b4;
L_e41a8:
    X86_TICK(c, 9);
    // 0e41a8  mov si, 0x77eb
    X86_AT(c, 0xe41a8u);
    s16(c, 6, 0x77EBu);
    // 0e41ac  jmp 0xe42b4
    X86_AT(c, 0xe41acu);
    goto L_e42b4;
L_e41b1:
    X86_TICK(c, 9);
    // 0e41b1  mov si, 0x78eb
    X86_AT(c, 0xe41b1u);
    s16(c, 6, 0x78EBu);
    // 0e41b5  jmp 0xe42b4
    X86_AT(c, 0xe41b5u);
    goto L_e42b4;
L_e41ba:
    X86_TICK(c, 9);
    // 0e41ba  mov si, 0x79eb
    X86_AT(c, 0xe41bau);
    s16(c, 6, 0x79EBu);
    // 0e41be  jmp 0xe42b4
    X86_AT(c, 0xe41beu);
    goto L_e42b4;
L_e41c3:
    X86_TICK(c, 9);
    // 0e41c3  mov si, 0x7aeb
    X86_AT(c, 0xe41c3u);
    s16(c, 6, 0x7AEBu);
    // 0e41c7  jmp 0xe42b4
    X86_AT(c, 0xe41c7u);
    goto L_e42b4;
L_e41cc:
    X86_TICK(c, 9);
    // 0e41cc  mov si, 0x7beb
    X86_AT(c, 0xe41ccu);
    s16(c, 6, 0x7BEBu);
    // 0e41d0  jmp 0xe42b4
    X86_AT(c, 0xe41d0u);
    goto L_e42b4;
L_e41d5:
    X86_TICK(c, 9);
    // 0e41d5  mov si, 0x7ceb
    X86_AT(c, 0xe41d5u);
    s16(c, 6, 0x7CEBu);
    // 0e41d9  jmp 0xe42b4
    X86_AT(c, 0xe41d9u);
    goto L_e42b4;
L_e41de:
    X86_TICK(c, 9);
    // 0e41de  mov si, 0x7deb
    X86_AT(c, 0xe41deu);
    s16(c, 6, 0x7DEBu);
    // 0e41e2  jmp 0xe42b4
    X86_AT(c, 0xe41e2u);
    goto L_e42b4;
L_e41e7:
    X86_TICK(c, 9);
    // 0e41e7  mov si, 0x7eeb
    X86_AT(c, 0xe41e7u);
    s16(c, 6, 0x7EEBu);
    // 0e41eb  jmp 0xe42b4
    X86_AT(c, 0xe41ebu);
    goto L_e42b4;
L_e41f0:
    X86_TICK(c, 9);
    // 0e41f0  mov si, 0x40eb
    X86_AT(c, 0xe41f0u);
    s16(c, 6, 0x40EBu);
    // 0e41f4  jmp 0xe42b4
    X86_AT(c, 0xe41f4u);
    goto L_e42b4;
L_e41f9:
    X86_TICK(c, 9);
    // 0e41f9  mov si, 0x41eb
    X86_AT(c, 0xe41f9u);
    s16(c, 6, 0x41EBu);
    // 0e41fd  jmp 0xe42b4
    X86_AT(c, 0xe41fdu);
    goto L_e42b4;
L_e4202:
    X86_TICK(c, 9);
    // 0e4202  mov si, 0x42eb
    X86_AT(c, 0xe4202u);
    s16(c, 6, 0x42EBu);
    // 0e4206  jmp 0xe42b4
    X86_AT(c, 0xe4206u);
    goto L_e42b4;
L_e420b:
    X86_TICK(c, 9);
    // 0e420b  mov si, 0x43eb
    X86_AT(c, 0xe420bu);
    s16(c, 6, 0x43EBu);
    // 0e420f  jmp 0xe42b4
    X86_AT(c, 0xe420fu);
    goto L_e42b4;
L_e4214:
    X86_TICK(c, 9);
    // 0e4214  mov si, 0x44eb
    X86_AT(c, 0xe4214u);
    s16(c, 6, 0x44EBu);
    // 0e4218  jmp 0xe42b4
    X86_AT(c, 0xe4218u);
    goto L_e42b4;
L_e421d:
    X86_TICK(c, 9);
    // 0e421d  mov si, 0x45eb
    X86_AT(c, 0xe421du);
    s16(c, 6, 0x45EBu);
    // 0e4221  jmp 0xe42b4
    X86_AT(c, 0xe4221u);
    goto L_e42b4;
L_e4226:
    X86_TICK(c, 9);
    // 0e4226  mov si, 0x46eb
    X86_AT(c, 0xe4226u);
    s16(c, 6, 0x46EBu);
    // 0e422a  jmp 0xe42b4
    X86_AT(c, 0xe422au);
    goto L_e42b4;
L_e422f:
    X86_TICK(c, 9);
    // 0e422f  mov si, 0x47eb
    X86_AT(c, 0xe422fu);
    s16(c, 6, 0x47EBu);
    // 0e4233  jmp 0xe42b4
    X86_AT(c, 0xe4233u);
    goto L_e42b4;
L_e4238:
    X86_TICK(c, 9);
    // 0e4238  mov si, 0x48eb
    X86_AT(c, 0xe4238u);
    s16(c, 6, 0x48EBu);
    // 0e423c  jmp 0xe42b4
    X86_AT(c, 0xe423cu);
    goto L_e42b4;
L_e4241:
    X86_TICK(c, 9);
    // 0e4241  mov si, 0x49eb
    X86_AT(c, 0xe4241u);
    s16(c, 6, 0x49EBu);
    // 0e4245  jmp 0xe42b4
    X86_AT(c, 0xe4245u);
    goto L_e42b4;
L_e424a:
    X86_TICK(c, 9);
    // 0e424a  mov si, 0x4aeb
    X86_AT(c, 0xe424au);
    s16(c, 6, 0x4AEBu);
    // 0e424e  jmp 0xe42b4
    X86_AT(c, 0xe424eu);
    goto L_e42b4;
L_e4253:
    X86_TICK(c, 9);
    // 0e4253  mov si, 0x4beb
    X86_AT(c, 0xe4253u);
    s16(c, 6, 0x4BEBu);
    // 0e4257  jmp 0xe42b4
    X86_AT(c, 0xe4257u);
    goto L_e42b4;
L_e425c:
    X86_TICK(c, 9);
    // 0e425c  mov si, 0x4ceb
    X86_AT(c, 0xe425cu);
    s16(c, 6, 0x4CEBu);
    // 0e4260  jmp 0xe42b4
    X86_AT(c, 0xe4260u);
    goto L_e42b4;
L_e4262:
    X86_TICK(c, 9);
    // 0e4262  mov si, 0x4deb
    X86_AT(c, 0xe4262u);
    s16(c, 6, 0x4DEBu);
    // 0e4266  jmp 0xe42b4
    X86_AT(c, 0xe4266u);
    goto L_e42b4;
L_e4268:
    X86_TICK(c, 9);
    // 0e4268  mov si, 0x4eeb
    X86_AT(c, 0xe4268u);
    s16(c, 6, 0x4EEBu);
    // 0e426c  jmp 0xe42b4
    X86_AT(c, 0xe426cu);
    goto L_e42b4;
L_e426e:
    X86_TICK(c, 9);
    // 0e426e  mov si, 0x4feb
    X86_AT(c, 0xe426eu);
    s16(c, 6, 0x4FEBu);
    // 0e4272  jmp 0xe42b4
    X86_AT(c, 0xe4272u);
    goto L_e42b4;
L_e4274:
    X86_TICK(c, 9);
    // 0e4274  mov si, 0x50eb
    X86_AT(c, 0xe4274u);
    s16(c, 6, 0x50EBu);
    // 0e4278  jmp 0xe42b4
    X86_AT(c, 0xe4278u);
    goto L_e42b4;
L_e427a:
    X86_TICK(c, 9);
    // 0e427a  mov si, 0x51eb
    X86_AT(c, 0xe427au);
    s16(c, 6, 0x51EBu);
    // 0e427e  jmp 0xe42b4
    X86_AT(c, 0xe427eu);
    goto L_e42b4;
L_e4280:
    X86_TICK(c, 9);
    // 0e4280  mov si, 0x52eb
    X86_AT(c, 0xe4280u);
    s16(c, 6, 0x52EBu);
    // 0e4284  jmp 0xe42b4
    X86_AT(c, 0xe4284u);
    goto L_e42b4;
L_e4286:
    X86_TICK(c, 9);
    // 0e4286  mov si, 0x53eb
    X86_AT(c, 0xe4286u);
    s16(c, 6, 0x53EBu);
    // 0e428a  jmp 0xe42b4
    X86_AT(c, 0xe428au);
    goto L_e42b4;
L_e428c:
    X86_TICK(c, 9);
    // 0e428c  mov si, 0x54eb
    X86_AT(c, 0xe428cu);
    s16(c, 6, 0x54EBu);
    // 0e4290  jmp 0xe42b4
    X86_AT(c, 0xe4290u);
    goto L_e42b4;
L_e4292:
    X86_TICK(c, 9);
    // 0e4292  mov si, 0x55eb
    X86_AT(c, 0xe4292u);
    s16(c, 6, 0x55EBu);
    // 0e4296  jmp 0xe42b4
    X86_AT(c, 0xe4296u);
    goto L_e42b4;
L_e4298:
    X86_TICK(c, 9);
    // 0e4298  mov si, 0x56eb
    X86_AT(c, 0xe4298u);
    s16(c, 6, 0x56EBu);
    // 0e429c  jmp 0xe42b4
    X86_AT(c, 0xe429cu);
    goto L_e42b4;
L_e429e:
    X86_TICK(c, 9);
    // 0e429e  mov si, 0x57eb
    X86_AT(c, 0xe429eu);
    s16(c, 6, 0x57EBu);
    // 0e42a2  jmp 0xe42b4
    X86_AT(c, 0xe42a2u);
    goto L_e42b4;
L_e42a4:
    X86_TICK(c, 9);
    // 0e42a4  mov si, 0x58eb
    X86_AT(c, 0xe42a4u);
    s16(c, 6, 0x58EBu);
    // 0e42a8  jmp 0xe42b4
    X86_AT(c, 0xe42a8u);
    goto L_e42b4;
L_e42aa:
    X86_TICK(c, 9);
    // 0e42aa  mov si, 0x59eb
    X86_AT(c, 0xe42aau);
    s16(c, 6, 0x59EBu);
    // 0e42ae  jmp 0xe42b4
    X86_AT(c, 0xe42aeu);
    goto L_e42b4;
L_e42b0:
    X86_TICK(c, 2);
    // 0e42b0  mov si, 0x4081
    X86_AT(c, 0xe42b0u);
    s16(c, 6, 0x4081u);
L_e42b4:
    X86_TICK(c, 13);
    // 0e42b4  mov word ptr [ecx], si
    X86_AT(c, 0xe42b4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[1])), (c.r[6] & 0xFFFFu));
    // 0e42b7  inc edi
    X86_AT(c, 0xe42b7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e42b8  add ecx, 2
    X86_AT(c, 0xe42b8u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
    // 0e42bb  jmp 0xe4065
    X86_AT(c, 0xe42bbu);
    X86_POLL(c, 0xe4065u); goto L_e4065;
L_e42c0:
    X86_TICK(c, 28);
    // 0e42c0  mov word ptr [ecx], 0
    X86_AT(c, 0xe42c0u);
    wr16((c.sbase[3] + (uint32_t)(c.r[1])), 0x0u);
    // 0e42c5  mov eax, 0x7a6cc
    X86_AT(c, 0xe42c5u);
    c.r[0] = 0x7A6CCu;
    // 0e42ca  pop edi
    X86_AT(c, 0xe42cau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e42cb  pop esi
    X86_AT(c, 0xe42cbu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e42cc  leave 
    X86_AT(c, 0xe42ccu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e42cd  ret 
    X86_AT(c, 0xe42cdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe42b4u, "ran off the end of a function");
}
void f_000e42d0(X86Cpu& c) {
    X86_TICK(c, 6);
    // 0e42d0  mov edx, dword ptr [esp + 4]
    X86_AT(c, 0xe42d0u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0e42d4  sub ecx, ecx
    X86_AT(c, 0xe42d4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
L_e42d6:
    X86_TICK(c, 11);
    // 0e42d6  mov al, byte ptr [edx]
    X86_AT(c, 0xe42d6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2]))));
    // 0e42d8  cmp al, 0x20
    X86_AT(c, 0xe42d8u);
    (void)x86_sub(c, g8(c, 0), 0x20u, 0, 1);
    // 0e42da  je 0xe42e0
    X86_AT(c, 0xe42dau);
    if (x86_cc(c, 4)) { goto L_e42e0; }
    X86_TICK(c, 7);
    // 0e42dc  cmp al, 9
    X86_AT(c, 0xe42dcu);
    (void)x86_sub(c, g8(c, 0), 0x9u, 0, 1);
    // 0e42de  jne 0xe42e3
    X86_AT(c, 0xe42deu);
    if (x86_cc(c, 5)) { goto L_e42e3; }
L_e42e0:
    X86_TICK(c, 9);
    // 0e42e0  inc edx
    X86_AT(c, 0xe42e0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0e42e1  jmp 0xe42d6
    X86_AT(c, 0xe42e1u);
    X86_POLL(c, 0xe42d6u); goto L_e42d6;
L_e42e3:
    X86_TICK(c, 11);
    // 0e42e3  mov al, byte ptr [edx]
    X86_AT(c, 0xe42e3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2]))));
    // 0e42e5  cmp al, 0x30
    X86_AT(c, 0xe42e5u);
    (void)x86_sub(c, g8(c, 0), 0x30u, 0, 1);
    // 0e42e7  jb 0xe42fe
    X86_AT(c, 0xe42e7u);
    if (x86_cc(c, 2)) { goto L_e42fe; }
    X86_TICK(c, 7);
    // 0e42e9  cmp al, 0x39
    X86_AT(c, 0xe42e9u);
    (void)x86_sub(c, g8(c, 0), 0x39u, 0, 1);
    // 0e42eb  ja 0xe42fe
    X86_AT(c, 0xe42ebu);
    if (x86_cc(c, 7)) { goto L_e42fe; }
    X86_TICK(c, 23);
    // 0e42ed  lea ecx, [ecx + ecx*4]
    X86_AT(c, 0xe42edu);
    c.r[1] = (uint32_t)(c.r[1] + c.r[1] * 4);
    // 0e42f0  add ecx, ecx
    X86_AT(c, 0xe42f0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[1], 0, 4); }
    // 0e42f2  movzx eax, al
    X86_AT(c, 0xe42f2u);
    c.r[0] = g8(c, 0);
    // 0e42f5  sub eax, 0x30
    X86_AT(c, 0xe42f5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x30u, 0, 4); }
    // 0e42f8  add eax, ecx
    X86_AT(c, 0xe42f8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[1], 0, 4); }
    // 0e42fa  xchg ecx, eax
    X86_AT(c, 0xe42fau);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 0e42fb  inc edx
    X86_AT(c, 0xe42fbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0e42fc  jmp 0xe42e3
    X86_AT(c, 0xe42fcu);
    X86_POLL(c, 0xe42e3u); goto L_e42e3;
L_e42fe:
    X86_TICK(c, 12);
    // 0e42fe  mov eax, ecx
    X86_AT(c, 0xe42feu);
    c.r[0] = c.r[1];
    // 0e4300  ret 
    X86_AT(c, 0xe4300u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe42d0u, "ran off the end of a function");
}
void f_000e4304(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0e4304  call 9
    X86_AT(c, 0xe4304u);
    push32(c, 0xe4309u); f_00000009(c); X86_RET(c, 0xe4309u);
    X86_TICK(c, 9);
    // 0e4309  push 1
    X86_AT(c, 0xe4309u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e430b  call 0x2b
    X86_AT(c, 0xe430bu);
    push32(c, 0xe4310u); f_0000002b(c); X86_RET(c, 0xe4310u);
    X86_TICK(c, 9);
    // 0e4310  push 0
    X86_AT(c, 0xe4310u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e4312  call 0x49
    X86_AT(c, 0xe4312u);
    push32(c, 0xe4317u); f_00000049(c); X86_RET(c, 0xe4317u);
    X86_TICK(c, 9);
    // 0e4317  push 0
    X86_AT(c, 0xe4317u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e4319  call 0x69
    X86_AT(c, 0xe4319u);
    push32(c, 0xe431eu); f_00000069(c); X86_RET(c, 0xe431eu);
    X86_TICK(c, 12);
    // 0e431e  add esp, 0xc
    X86_AT(c, 0xe431eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e4321  ret 
    X86_AT(c, 0xe4321u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4304u, "ran off the end of a function");
}
void f_000e4324(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0e4324  call 0x8b
    X86_AT(c, 0xe4324u);
    push32(c, 0xe4329u); f_0000008b(c); X86_RET(c, 0xe4329u);
    X86_TICK(c, 10);
    // 0e4329  ret 
    X86_AT(c, 0xe4329u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4324u, "ran off the end of a function");
}
void f_000e432c(X86Cpu& c) {
    X86_TICK(c, 45);
    // 0e432c  push ebp
    X86_AT(c, 0xe432cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e432d  mov ebp, esp
    X86_AT(c, 0xe432du);
    c.r[5] = c.r[4];
    // 0e432f  sub esp, 0x14
    X86_AT(c, 0xe432fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x14u, 0, 4); }
    // 0e4332  push ebx
    X86_AT(c, 0xe4332u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e4333  push esi
    X86_AT(c, 0xe4333u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e4334  push edi
    X86_AT(c, 0xe4334u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e4335  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe4335u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e4338  mov dword ptr [ebp - 0x14], 0
    X86_AT(c, 0xe4338u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), 0x0u);
    // 0e433f  mov dword ptr [ebp - 0x10], 0
    X86_AT(c, 0xe433fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), 0x0u);
    // 0e4346  sub eax, eax
    X86_AT(c, 0xe4346u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e4348  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xe4348u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0e434b  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xe434bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0e434e  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe434eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e4351  lea eax, [ebp - 0x10]
    X86_AT(c, 0xe4351u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0e4354  push eax
    X86_AT(c, 0xe4354u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e4355  lea eax, [ebp - 8]
    X86_AT(c, 0xe4355u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0e4358  push eax
    X86_AT(c, 0xe4358u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e4359  push edi
    X86_AT(c, 0xe4359u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e435a  call 0xe7540
    X86_AT(c, 0xe435au);
    push32(c, 0xe435fu); f_000e7540(c); X86_RET(c, 0xe435fu);
    X86_TICK(c, 17);
    // 0e435f  lea eax, [ebp - 0xc]
    X86_AT(c, 0xe435fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0e4362  push eax
    X86_AT(c, 0xe4362u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e4363  lea eax, [ebp - 4]
    X86_AT(c, 0xe4363u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0e4366  push eax
    X86_AT(c, 0xe4366u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e4367  push edi
    X86_AT(c, 0xe4367u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e4368  call 0xe7514
    X86_AT(c, 0xe4368u);
    push32(c, 0xe436du); f_000e7514(c); X86_RET(c, 0xe436du);
    X86_TICK(c, 23);
    // 0e436d  mov esi, 0xffffffff
    X86_AT(c, 0xe436du);
    c.r[6] = 0xFFFFFFFFu;
    // 0e4372  sub ebx, ebx
    X86_AT(c, 0xe4372u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0e4374  add esp, 0x18
    X86_AT(c, 0xe4374u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0e4377  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xe4377u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0e437a  sub eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe437au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0e437d  cmp eax, 3
    X86_AT(c, 0xe437du);
    (void)x86_sub(c, c.r[0], 0x3u, 0, 4);
    // 0e4380  jge 0xe4389
    X86_AT(c, 0xe4380u);
    if (x86_cc(c, 13)) { goto L_e4389; }
    X86_TICK(c, 7);
    // 0e4382  call 0x8b
    X86_AT(c, 0xe4382u);
    push32(c, 0xe4387u); f_0000008b(c); X86_RET(c, 0xe4387u);
    X86_TICK(c, 2);
    // 0e4387  mov esi, ebx
    X86_AT(c, 0xe4387u);
    c.r[6] = c.r[3];
L_e4389:
    X86_TICK(c, 9);
    // 0e4389  push edi
    X86_AT(c, 0xe4389u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e438a  call 0xe759c
    X86_AT(c, 0xe438au);
    push32(c, 0xe438fu); f_000e759c(c); X86_RET(c, 0xe438fu);
    X86_TICK(c, 9);
    // 0e438f  add esp, 4
    X86_AT(c, 0xe438fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e4392  and eax, eax
    X86_AT(c, 0xe4392u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e4394  jne 0xe439f
    X86_AT(c, 0xe4394u);
    if (x86_cc(c, 5)) { goto L_e439f; }
    X86_TICK(c, 9);
    // 0e4396  push edi
    X86_AT(c, 0xe4396u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e4397  call 0xe71bc
    X86_AT(c, 0xe4397u);
    push32(c, 0xe439cu); f_000e71bc(c); X86_RET(c, 0xe439cu);
    X86_TICK(c, 2);
    // 0e439c  add esp, 4
    X86_AT(c, 0xe439cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e439f:
    X86_TICK(c, 12);
    // 0e439f  cmp word ptr [0xcda74], 0
    X86_AT(c, 0xe439fu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xCDA74u))), 0x0u, 0, 2);
    // 0e43a7  jne 0xe43b9
    X86_AT(c, 0xe43a7u);
    if (x86_cc(c, 5)) { goto L_e43b9; }
    X86_TICK(c, 9);
    // 0e43a9  push 0
    X86_AT(c, 0xe43a9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e43ab  call 0xe1a9c
    X86_AT(c, 0xe43abu);
    push32(c, 0xe43b0u); f_000e1a9c(c); X86_RET(c, 0xe43b0u);
    X86_TICK(c, 9);
    // 0e43b0  push edi
    X86_AT(c, 0xe43b0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e43b1  call 0xe693c
    X86_AT(c, 0xe43b1u);
    push32(c, 0xe43b6u); f_000e693c(c); X86_RET(c, 0xe43b6u);
    X86_TICK(c, 2);
    // 0e43b6  add esp, 8
    X86_AT(c, 0xe43b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_e43b9:
    X86_TICK(c, 7);
    // 0e43b9  call 0xe1344
    X86_AT(c, 0xe43b9u);
    push32(c, 0xe43beu); f_000e1344(c); X86_RET(c, 0xe43beu);
    X86_TICK(c, 13);
    // 0e43be  lea eax, [ebp - 0x14]
    X86_AT(c, 0xe43beu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFECu);
    // 0e43c1  push eax
    X86_AT(c, 0xe43c1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e43c2  push 1
    X86_AT(c, 0xe43c2u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e43c4  call 0xa9
    X86_AT(c, 0xe43c4u);
    push32(c, 0xe43c9u); f_000000a9(c); X86_RET(c, 0xe43c9u);
    X86_TICK(c, 15);
    // 0e43c9  add esp, 8
    X86_AT(c, 0xe43c9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e43cc  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xe43ccu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0e43cf  and eax, 0xff00
    X86_AT(c, 0xe43cfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFF00u, 4); }
    // 0e43d4  cmp eax, 0xff00
    X86_AT(c, 0xe43d4u);
    (void)x86_sub(c, c.r[0], 0xFF00u, 0, 4);
    // 0e43d9  jne 0xe43e2
    X86_AT(c, 0xe43d9u);
    if (x86_cc(c, 5)) { goto L_e43e2; }
    X86_TICK(c, 9);
    // 0e43db  sub eax, eax
    X86_AT(c, 0xe43dbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e43dd  jmp 0xe4743
    X86_AT(c, 0xe43ddu);
    goto L_e4743;
L_e43e2:
    X86_TICK(c, 18);
    // 0e43e2  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xe43e2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0e43e5  shr eax, 8
    X86_AT(c, 0xe43e5u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0e43e8  and eax, 0xff
    X86_AT(c, 0xe43e8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFu, 4); }
    // 0e43ed  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xe43edu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0e43f0  cmp esi, 0xffffffff
    X86_AT(c, 0xe43f0u);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0e43f3  jne 0xe4680
    X86_AT(c, 0xe43f3u);
    if (x86_cc(c, 5)) { goto L_e4680; }
    X86_TICK(c, 12);
    // 0e43f9  xchg edx, eax
    X86_AT(c, 0xe43f9u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0e43fa  sub edx, 2
    X86_AT(c, 0xe43fau);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0e43fd  cmp edx, 0x44
    X86_AT(c, 0xe43fdu);
    (void)x86_sub(c, c.r[2], 0x44u, 0, 4);
    // 0e4400  ja 0xe4680
    X86_AT(c, 0xe4400u);
    if (x86_cc(c, 7)) { goto L_e4680; }
    X86_TICK(c, 7);
    // 0e4406  jmp dword ptr cs:[edx*4 + 0xe440e]
    X86_AT(c, 0xe4406u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xE440Eu)));
      switch (t) {
      case 0xe4522u: goto L_e4522;
      case 0xe452cu: goto L_e452c;
      case 0xe4536u: goto L_e4536;
      case 0xe4540u: goto L_e4540;
      case 0xe454au: goto L_e454a;
      case 0xe4554u: goto L_e4554;
      case 0xe455eu: goto L_e455e;
      case 0xe4568u: goto L_e4568;
      case 0xe4572u: goto L_e4572;
      case 0xe457cu: goto L_e457c;
      case 0xe4586u: goto L_e4586;
      case 0xe4590u: goto L_e4590;
      case 0xe459au: goto L_e459a;
      case 0xe45a4u: goto L_e45a4;
      case 0xe45aeu: goto L_e45ae;
      case 0xe45b8u: goto L_e45b8;
      case 0xe45c2u: goto L_e45c2;
      case 0xe45ccu: goto L_e45cc;
      case 0xe45d6u: goto L_e45d6;
      case 0xe45e0u: goto L_e45e0;
      case 0xe45eau: goto L_e45ea;
      case 0xe45f4u: goto L_e45f4;
      case 0xe45feu: goto L_e45fe;
      case 0xe4608u: goto L_e4608;
      case 0xe4612u: goto L_e4612;
      case 0xe461cu: goto L_e461c;
      case 0xe4623u: goto L_e4623;
      case 0xe462au: goto L_e462a;
      case 0xe4631u: goto L_e4631;
      case 0xe4638u: goto L_e4638;
      case 0xe463fu: goto L_e463f;
      case 0xe4646u: goto L_e4646;
      case 0xe464du: goto L_e464d;
      case 0xe4654u: goto L_e4654;
      case 0xe465bu: goto L_e465b;
      case 0xe4662u: goto L_e4662;
      case 0xe4669u: goto L_e4669;
      case 0xe467bu: goto L_e467b;
      case 0xe4680u: goto L_e4680;
      default: x86_jump(c, t); return; } }
L_e4522:
    X86_TICK(c, 9);
    // 0e4522  mov ebx, 0x31
    X86_AT(c, 0xe4522u);
    c.r[3] = 0x31u;
    // 0e4527  jmp 0xe4680
    X86_AT(c, 0xe4527u);
    goto L_e4680;
L_e452c:
    X86_TICK(c, 9);
    // 0e452c  mov ebx, 0x32
    X86_AT(c, 0xe452cu);
    c.r[3] = 0x32u;
    // 0e4531  jmp 0xe4680
    X86_AT(c, 0xe4531u);
    goto L_e4680;
L_e4536:
    X86_TICK(c, 9);
    // 0e4536  mov ebx, 0x33
    X86_AT(c, 0xe4536u);
    c.r[3] = 0x33u;
    // 0e453b  jmp 0xe4680
    X86_AT(c, 0xe453bu);
    goto L_e4680;
L_e4540:
    X86_TICK(c, 9);
    // 0e4540  mov ebx, 0x34
    X86_AT(c, 0xe4540u);
    c.r[3] = 0x34u;
    // 0e4545  jmp 0xe4680
    X86_AT(c, 0xe4545u);
    goto L_e4680;
L_e454a:
    X86_TICK(c, 9);
    // 0e454a  mov ebx, 0x35
    X86_AT(c, 0xe454au);
    c.r[3] = 0x35u;
    // 0e454f  jmp 0xe4680
    X86_AT(c, 0xe454fu);
    goto L_e4680;
L_e4554:
    X86_TICK(c, 9);
    // 0e4554  mov ebx, 0x36
    X86_AT(c, 0xe4554u);
    c.r[3] = 0x36u;
    // 0e4559  jmp 0xe4680
    X86_AT(c, 0xe4559u);
    goto L_e4680;
L_e455e:
    X86_TICK(c, 9);
    // 0e455e  mov ebx, 0x37
    X86_AT(c, 0xe455eu);
    c.r[3] = 0x37u;
    // 0e4563  jmp 0xe4680
    X86_AT(c, 0xe4563u);
    goto L_e4680;
L_e4568:
    X86_TICK(c, 9);
    // 0e4568  mov ebx, 0x38
    X86_AT(c, 0xe4568u);
    c.r[3] = 0x38u;
    // 0e456d  jmp 0xe4680
    X86_AT(c, 0xe456du);
    goto L_e4680;
L_e4572:
    X86_TICK(c, 9);
    // 0e4572  mov ebx, 0x39
    X86_AT(c, 0xe4572u);
    c.r[3] = 0x39u;
    // 0e4577  jmp 0xe4680
    X86_AT(c, 0xe4577u);
    goto L_e4680;
L_e457c:
    X86_TICK(c, 9);
    // 0e457c  mov ebx, 0x30
    X86_AT(c, 0xe457cu);
    c.r[3] = 0x30u;
    // 0e4581  jmp 0xe4680
    X86_AT(c, 0xe4581u);
    goto L_e4680;
L_e4586:
    X86_TICK(c, 9);
    // 0e4586  mov ebx, 0x41
    X86_AT(c, 0xe4586u);
    c.r[3] = 0x41u;
    // 0e458b  jmp 0xe4680
    X86_AT(c, 0xe458bu);
    goto L_e4680;
L_e4590:
    X86_TICK(c, 9);
    // 0e4590  mov ebx, 0x42
    X86_AT(c, 0xe4590u);
    c.r[3] = 0x42u;
    // 0e4595  jmp 0xe4680
    X86_AT(c, 0xe4595u);
    goto L_e4680;
L_e459a:
    X86_TICK(c, 9);
    // 0e459a  mov ebx, 0x43
    X86_AT(c, 0xe459au);
    c.r[3] = 0x43u;
    // 0e459f  jmp 0xe4680
    X86_AT(c, 0xe459fu);
    goto L_e4680;
L_e45a4:
    X86_TICK(c, 9);
    // 0e45a4  mov ebx, 0x44
    X86_AT(c, 0xe45a4u);
    c.r[3] = 0x44u;
    // 0e45a9  jmp 0xe4680
    X86_AT(c, 0xe45a9u);
    goto L_e4680;
L_e45ae:
    X86_TICK(c, 9);
    // 0e45ae  mov ebx, 0x45
    X86_AT(c, 0xe45aeu);
    c.r[3] = 0x45u;
    // 0e45b3  jmp 0xe4680
    X86_AT(c, 0xe45b3u);
    goto L_e4680;
L_e45b8:
    X86_TICK(c, 9);
    // 0e45b8  mov ebx, 0x46
    X86_AT(c, 0xe45b8u);
    c.r[3] = 0x46u;
    // 0e45bd  jmp 0xe4680
    X86_AT(c, 0xe45bdu);
    goto L_e4680;
L_e45c2:
    X86_TICK(c, 9);
    // 0e45c2  mov ebx, 0x47
    X86_AT(c, 0xe45c2u);
    c.r[3] = 0x47u;
    // 0e45c7  jmp 0xe4680
    X86_AT(c, 0xe45c7u);
    goto L_e4680;
L_e45cc:
    X86_TICK(c, 9);
    // 0e45cc  mov ebx, 0x48
    X86_AT(c, 0xe45ccu);
    c.r[3] = 0x48u;
    // 0e45d1  jmp 0xe4680
    X86_AT(c, 0xe45d1u);
    goto L_e4680;
L_e45d6:
    X86_TICK(c, 9);
    // 0e45d6  mov ebx, 0x49
    X86_AT(c, 0xe45d6u);
    c.r[3] = 0x49u;
    // 0e45db  jmp 0xe4680
    X86_AT(c, 0xe45dbu);
    goto L_e4680;
L_e45e0:
    X86_TICK(c, 9);
    // 0e45e0  mov ebx, 0x4a
    X86_AT(c, 0xe45e0u);
    c.r[3] = 0x4Au;
    // 0e45e5  jmp 0xe4680
    X86_AT(c, 0xe45e5u);
    goto L_e4680;
L_e45ea:
    X86_TICK(c, 9);
    // 0e45ea  mov ebx, 0x4b
    X86_AT(c, 0xe45eau);
    c.r[3] = 0x4Bu;
    // 0e45ef  jmp 0xe4680
    X86_AT(c, 0xe45efu);
    goto L_e4680;
L_e45f4:
    X86_TICK(c, 9);
    // 0e45f4  mov ebx, 0x4c
    X86_AT(c, 0xe45f4u);
    c.r[3] = 0x4Cu;
    // 0e45f9  jmp 0xe4680
    X86_AT(c, 0xe45f9u);
    goto L_e4680;
L_e45fe:
    X86_TICK(c, 9);
    // 0e45fe  mov ebx, 0x4d
    X86_AT(c, 0xe45feu);
    c.r[3] = 0x4Du;
    // 0e4603  jmp 0xe4680
    X86_AT(c, 0xe4603u);
    goto L_e4680;
L_e4608:
    X86_TICK(c, 9);
    // 0e4608  mov ebx, 0x4e
    X86_AT(c, 0xe4608u);
    c.r[3] = 0x4Eu;
    // 0e460d  jmp 0xe4680
    X86_AT(c, 0xe460du);
    goto L_e4680;
L_e4612:
    X86_TICK(c, 9);
    // 0e4612  mov ebx, 0x4f
    X86_AT(c, 0xe4612u);
    c.r[3] = 0x4Fu;
    // 0e4617  jmp 0xe4680
    X86_AT(c, 0xe4617u);
    goto L_e4680;
L_e461c:
    X86_TICK(c, 9);
    // 0e461c  mov ebx, 0x50
    X86_AT(c, 0xe461cu);
    c.r[3] = 0x50u;
    // 0e4621  jmp 0xe4680
    X86_AT(c, 0xe4621u);
    goto L_e4680;
L_e4623:
    X86_TICK(c, 9);
    // 0e4623  mov ebx, 0x51
    X86_AT(c, 0xe4623u);
    c.r[3] = 0x51u;
    // 0e4628  jmp 0xe4680
    X86_AT(c, 0xe4628u);
    goto L_e4680;
L_e462a:
    X86_TICK(c, 9);
    // 0e462a  mov ebx, 0x52
    X86_AT(c, 0xe462au);
    c.r[3] = 0x52u;
    // 0e462f  jmp 0xe4680
    X86_AT(c, 0xe462fu);
    goto L_e4680;
L_e4631:
    X86_TICK(c, 9);
    // 0e4631  mov ebx, 0x53
    X86_AT(c, 0xe4631u);
    c.r[3] = 0x53u;
    // 0e4636  jmp 0xe4680
    X86_AT(c, 0xe4636u);
    goto L_e4680;
L_e4638:
    X86_TICK(c, 9);
    // 0e4638  mov ebx, 0x54
    X86_AT(c, 0xe4638u);
    c.r[3] = 0x54u;
    // 0e463d  jmp 0xe4680
    X86_AT(c, 0xe463du);
    goto L_e4680;
L_e463f:
    X86_TICK(c, 9);
    // 0e463f  mov ebx, 0x55
    X86_AT(c, 0xe463fu);
    c.r[3] = 0x55u;
    // 0e4644  jmp 0xe4680
    X86_AT(c, 0xe4644u);
    goto L_e4680;
L_e4646:
    X86_TICK(c, 9);
    // 0e4646  mov ebx, 0x56
    X86_AT(c, 0xe4646u);
    c.r[3] = 0x56u;
    // 0e464b  jmp 0xe4680
    X86_AT(c, 0xe464bu);
    goto L_e4680;
L_e464d:
    X86_TICK(c, 9);
    // 0e464d  mov ebx, 0x57
    X86_AT(c, 0xe464du);
    c.r[3] = 0x57u;
    // 0e4652  jmp 0xe4680
    X86_AT(c, 0xe4652u);
    goto L_e4680;
L_e4654:
    X86_TICK(c, 9);
    // 0e4654  mov ebx, 0x58
    X86_AT(c, 0xe4654u);
    c.r[3] = 0x58u;
    // 0e4659  jmp 0xe4680
    X86_AT(c, 0xe4659u);
    goto L_e4680;
L_e465b:
    X86_TICK(c, 9);
    // 0e465b  mov ebx, 0x59
    X86_AT(c, 0xe465bu);
    c.r[3] = 0x59u;
    // 0e4660  jmp 0xe4680
    X86_AT(c, 0xe4660u);
    goto L_e4680;
L_e4662:
    X86_TICK(c, 9);
    // 0e4662  mov ebx, 0x5a
    X86_AT(c, 0xe4662u);
    c.r[3] = 0x5Au;
    // 0e4667  jmp 0xe4680
    X86_AT(c, 0xe4667u);
    goto L_e4680;
L_e4669:
    X86_TICK(c, 9);
    // 0e4669  sub ebx, ebx
    X86_AT(c, 0xe4669u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0e466b  call 0xe20f4
    X86_AT(c, 0xe466bu);
    push32(c, 0xe4670u); f_000e20f4(c); X86_RET(c, 0xe4670u);
    X86_TICK(c, 9);
    // 0e4670  push edi
    X86_AT(c, 0xe4670u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e4671  call 0xe693c
    X86_AT(c, 0xe4671u);
    push32(c, 0xe4676u); f_000e693c(c); X86_RET(c, 0xe4676u);
    X86_TICK(c, 9);
    // 0e4676  add esp, 4
    X86_AT(c, 0xe4676u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e4679  jmp 0xe4680
    X86_AT(c, 0xe4679u);
    goto L_e4680;
L_e467b:
    X86_TICK(c, 2);
    // 0e467b  mov ebx, 0x20
    X86_AT(c, 0xe467bu);
    c.r[3] = 0x20u;
L_e4680:
    X86_TICK(c, 11);
    // 0e4680  mov edx, dword ptr [ebp - 0x14]
    X86_AT(c, 0xe4680u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0e4683  cmp edx, 0x50
    X86_AT(c, 0xe4683u);
    (void)x86_sub(c, c.r[2], 0x50u, 0, 4);
    // 0e4686  ja 0xe46af
    X86_AT(c, 0xe4686u);
    if (x86_cc(c, 7)) { goto L_e46af; }
    X86_TICK(c, 7);
    // 0e4688  cmp edx, 0x50
    X86_AT(c, 0xe4688u);
    (void)x86_sub(c, c.r[2], 0x50u, 0, 4);
    // 0e468b  je 0xe46d1
    X86_AT(c, 0xe468bu);
    if (x86_cc(c, 4)) { goto L_e46d1; }
    X86_TICK(c, 7);
    // 0e468d  cmp edx, 1
    X86_AT(c, 0xe468du);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0e4690  je 0xe46e6
    X86_AT(c, 0xe4690u);
    if (x86_cc(c, 4)) { goto L_e46e6; }
    X86_TICK(c, 7);
    // 0e4696  cmp edx, 0xf
    X86_AT(c, 0xe4696u);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 0e4699  je 0xe46d8
    X86_AT(c, 0xe4699u);
    if (x86_cc(c, 4)) { goto L_e46d8; }
    X86_TICK(c, 7);
    // 0e469b  cmp edx, 0x1d
    X86_AT(c, 0xe469bu);
    (void)x86_sub(c, c.r[2], 0x1Du, 0, 4);
    // 0e469e  je 0xe46df
    X86_AT(c, 0xe469eu);
    if (x86_cc(c, 4)) { goto L_e46df; }
    X86_TICK(c, 7);
    // 0e46a0  cmp edx, 0x4d
    X86_AT(c, 0xe46a0u);
    (void)x86_sub(c, c.r[2], 0x4Du, 0, 4);
    // 0e46a3  je 0xe46ca
    X86_AT(c, 0xe46a3u);
    if (x86_cc(c, 4)) { goto L_e46ca; }
    X86_TICK(c, 7);
    // 0e46a5  cmp edx, 0x4f
    X86_AT(c, 0xe46a5u);
    (void)x86_sub(c, c.r[2], 0x4Fu, 0, 4);
    // 0e46a8  je 0xe46d8
    X86_AT(c, 0xe46a8u);
    if (x86_cc(c, 4)) { goto L_e46d8; }
    X86_TICK(c, 7);
    // 0e46aa  jmp 0xe470d
    X86_AT(c, 0xe46aau);
    goto L_e470d;
L_e46af:
    X86_TICK(c, 7);
    // 0e46af  cmp edx, 0x51
    X86_AT(c, 0xe46afu);
    (void)x86_sub(c, c.r[2], 0x51u, 0, 4);
    // 0e46b2  je 0xe46ed
    X86_AT(c, 0xe46b2u);
    if (x86_cc(c, 4)) { goto L_e46ed; }
    X86_TICK(c, 7);
    // 0e46b4  cmp edx, 0x5d
    X86_AT(c, 0xe46b4u);
    (void)x86_sub(c, c.r[2], 0x5Du, 0, 4);
    // 0e46b7  je 0xe46f4
    X86_AT(c, 0xe46b7u);
    if (x86_cc(c, 4)) { goto L_e46f4; }
    X86_TICK(c, 7);
    // 0e46b9  cmp edx, 0x5e
    X86_AT(c, 0xe46b9u);
    (void)x86_sub(c, c.r[2], 0x5Eu, 0, 4);
    // 0e46bc  je 0xe4706
    X86_AT(c, 0xe46bcu);
    if (x86_cc(c, 4)) { goto L_e4706; }
    X86_TICK(c, 7);
    // 0e46be  cmp edx, 0x72
    X86_AT(c, 0xe46beu);
    (void)x86_sub(c, c.r[2], 0x72u, 0, 4);
    // 0e46c1  je 0xe46e6
    X86_AT(c, 0xe46c1u);
    if (x86_cc(c, 4)) { goto L_e46e6; }
    X86_TICK(c, 7);
    // 0e46c3  cmp edx, 0x73
    X86_AT(c, 0xe46c3u);
    (void)x86_sub(c, c.r[2], 0x73u, 0, 4);
    // 0e46c6  je 0xe46df
    X86_AT(c, 0xe46c6u);
    if (x86_cc(c, 4)) { goto L_e46df; }
    X86_TICK(c, 7);
    // 0e46c8  jmp 0xe470d
    X86_AT(c, 0xe46c8u);
    goto L_e470d;
L_e46ca:
    X86_TICK(c, 9);
    // 0e46ca  mov ebx, 5
    X86_AT(c, 0xe46cau);
    c.r[3] = 0x5u;
    // 0e46cf  jmp 0xe470d
    X86_AT(c, 0xe46cfu);
    goto L_e470d;
L_e46d1:
    X86_TICK(c, 9);
    // 0e46d1  mov ebx, 6
    X86_AT(c, 0xe46d1u);
    c.r[3] = 0x6u;
    // 0e46d6  jmp 0xe470d
    X86_AT(c, 0xe46d6u);
    goto L_e470d;
L_e46d8:
    X86_TICK(c, 9);
    // 0e46d8  mov ebx, 3
    X86_AT(c, 0xe46d8u);
    c.r[3] = 0x3u;
    // 0e46dd  jmp 0xe470d
    X86_AT(c, 0xe46ddu);
    goto L_e470d;
L_e46df:
    X86_TICK(c, 9);
    // 0e46df  mov ebx, 4
    X86_AT(c, 0xe46dfu);
    c.r[3] = 0x4u;
    // 0e46e4  jmp 0xe470d
    X86_AT(c, 0xe46e4u);
    goto L_e470d;
L_e46e6:
    X86_TICK(c, 9);
    // 0e46e6  mov ebx, 1
    X86_AT(c, 0xe46e6u);
    c.r[3] = 0x1u;
    // 0e46eb  jmp 0xe470d
    X86_AT(c, 0xe46ebu);
    goto L_e470d;
L_e46ed:
    X86_TICK(c, 9);
    // 0e46ed  mov ebx, 7
    X86_AT(c, 0xe46edu);
    c.r[3] = 0x7u;
    // 0e46f2  jmp 0xe470d
    X86_AT(c, 0xe46f2u);
    goto L_e470d;
L_e46f4:
    X86_TICK(c, 9);
    // 0e46f4  sub ebx, ebx
    X86_AT(c, 0xe46f4u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0e46f6  call 0xe5378
    X86_AT(c, 0xe46f6u);
    push32(c, 0xe46fbu); f_000e5378(c); X86_RET(c, 0xe46fbu);
    X86_TICK(c, 9);
    // 0e46fb  push edi
    X86_AT(c, 0xe46fbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e46fc  call 0xe693c
    X86_AT(c, 0xe46fcu);
    push32(c, 0xe4701u); f_000e693c(c); X86_RET(c, 0xe4701u);
    X86_TICK(c, 9);
    // 0e4701  add esp, 4
    X86_AT(c, 0xe4701u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e4704  jmp 0xe470d
    X86_AT(c, 0xe4704u);
    goto L_e470d;
L_e4706:
    X86_TICK(c, 9);
    // 0e4706  sub ebx, ebx
    X86_AT(c, 0xe4706u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0e4708  call 0xe53ac
    X86_AT(c, 0xe4708u);
    push32(c, 0xe470du); f_000e53ac(c); X86_RET(c, 0xe470du);
L_e470d:
    X86_TICK(c, 7);
    // 0e470d  cmp ebx, 0x20
    X86_AT(c, 0xe470du);
    (void)x86_sub(c, c.r[3], 0x20u, 0, 4);
    // 0e4710  jl 0xe4727
    X86_AT(c, 0xe4710u);
    if (x86_cc(c, 12)) { goto L_e4727; }
    X86_TICK(c, 13);
    // 0e4712  mov eax, ebx
    X86_AT(c, 0xe4712u);
    c.r[0] = c.r[3];
    // 0e4714  push eax
    X86_AT(c, 0xe4714u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e4715  push edi
    X86_AT(c, 0xe4715u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e4716  call 0xe6e28
    X86_AT(c, 0xe4716u);
    push32(c, 0xe471bu); f_000e6e28(c); X86_RET(c, 0xe471bu);
    X86_TICK(c, 20);
    // 0e471b  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xe471bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0e471e  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe471eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e4721  add eax, 2
    X86_AT(c, 0xe4721u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0e4724  push eax
    X86_AT(c, 0xe4724u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e4725  jmp 0xe4738
    X86_AT(c, 0xe4725u);
    goto L_e4738;
L_e4727:
    X86_TICK(c, 11);
    // 0e4727  push 0x2068
    X86_AT(c, 0xe4727u);
    { uint32_t v = 0x2068u; push32(c, v); }
    // 0e472c  push edi
    X86_AT(c, 0xe472cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e472d  call 0xe6cb0
    X86_AT(c, 0xe472du);
    push32(c, 0xe4732u); f_000e6cb0(c); X86_RET(c, 0xe4732u);
    X86_TICK(c, 10);
    // 0e4732  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xe4732u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0e4735  push dword ptr [ebp - 4]
    X86_AT(c, 0xe4735u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
L_e4738:
    X86_TICK(c, 9);
    // 0e4738  push edi
    X86_AT(c, 0xe4738u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e4739  call 0xe7260
    X86_AT(c, 0xe4739u);
    push32(c, 0xe473eu); f_000e7260(c); X86_RET(c, 0xe473eu);
    X86_TICK(c, 4);
    // 0e473e  add esp, 0x14
    X86_AT(c, 0xe473eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0e4741  mov eax, ebx
    X86_AT(c, 0xe4741u);
    c.r[0] = c.r[3];
L_e4743:
    X86_TICK(c, 28);
    // 0e4743  pop edi
    X86_AT(c, 0xe4743u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e4744  pop esi
    X86_AT(c, 0xe4744u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e4745  pop ebx
    X86_AT(c, 0xe4745u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e4746  leave 
    X86_AT(c, 0xe4746u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e4747  ret 
    X86_AT(c, 0xe4747u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe432cu, "ran off the end of a function");
}
void f_000e4680(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0e4680  mov edx, dword ptr [ebp - 0x14]
    X86_AT(c, 0xe4680u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0e4683  cmp edx, 0x50
    X86_AT(c, 0xe4683u);
    (void)x86_sub(c, c.r[2], 0x50u, 0, 4);
    // 0e4686  ja 0xe46af
    X86_AT(c, 0xe4686u);
    if (x86_cc(c, 7)) { goto L_e46af; }
    X86_TICK(c, 7);
    // 0e4688  cmp edx, 0x50
    X86_AT(c, 0xe4688u);
    (void)x86_sub(c, c.r[2], 0x50u, 0, 4);
    // 0e468b  je 0xe46d1
    X86_AT(c, 0xe468bu);
    if (x86_cc(c, 4)) { goto L_e46d1; }
    X86_TICK(c, 7);
    // 0e468d  cmp edx, 1
    X86_AT(c, 0xe468du);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0e4690  je 0xe46e6
    X86_AT(c, 0xe4690u);
    if (x86_cc(c, 4)) { goto L_e46e6; }
    X86_TICK(c, 7);
    // 0e4696  cmp edx, 0xf
    X86_AT(c, 0xe4696u);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 0e4699  je 0xe46d8
    X86_AT(c, 0xe4699u);
    if (x86_cc(c, 4)) { goto L_e46d8; }
    X86_TICK(c, 7);
    // 0e469b  cmp edx, 0x1d
    X86_AT(c, 0xe469bu);
    (void)x86_sub(c, c.r[2], 0x1Du, 0, 4);
    // 0e469e  je 0xe46df
    X86_AT(c, 0xe469eu);
    if (x86_cc(c, 4)) { goto L_e46df; }
    X86_TICK(c, 7);
    // 0e46a0  cmp edx, 0x4d
    X86_AT(c, 0xe46a0u);
    (void)x86_sub(c, c.r[2], 0x4Du, 0, 4);
    // 0e46a3  je 0xe46ca
    X86_AT(c, 0xe46a3u);
    if (x86_cc(c, 4)) { goto L_e46ca; }
    X86_TICK(c, 7);
    // 0e46a5  cmp edx, 0x4f
    X86_AT(c, 0xe46a5u);
    (void)x86_sub(c, c.r[2], 0x4Fu, 0, 4);
    // 0e46a8  je 0xe46d8
    X86_AT(c, 0xe46a8u);
    if (x86_cc(c, 4)) { goto L_e46d8; }
    X86_TICK(c, 7);
    // 0e46aa  jmp 0xe470d
    X86_AT(c, 0xe46aau);
    goto L_e470d;
L_e46af:
    X86_TICK(c, 7);
    // 0e46af  cmp edx, 0x51
    X86_AT(c, 0xe46afu);
    (void)x86_sub(c, c.r[2], 0x51u, 0, 4);
    // 0e46b2  je 0xe46ed
    X86_AT(c, 0xe46b2u);
    if (x86_cc(c, 4)) { goto L_e46ed; }
    X86_TICK(c, 7);
    // 0e46b4  cmp edx, 0x5d
    X86_AT(c, 0xe46b4u);
    (void)x86_sub(c, c.r[2], 0x5Du, 0, 4);
    // 0e46b7  je 0xe46f4
    X86_AT(c, 0xe46b7u);
    if (x86_cc(c, 4)) { goto L_e46f4; }
    X86_TICK(c, 7);
    // 0e46b9  cmp edx, 0x5e
    X86_AT(c, 0xe46b9u);
    (void)x86_sub(c, c.r[2], 0x5Eu, 0, 4);
    // 0e46bc  je 0xe4706
    X86_AT(c, 0xe46bcu);
    if (x86_cc(c, 4)) { goto L_e4706; }
    X86_TICK(c, 7);
    // 0e46be  cmp edx, 0x72
    X86_AT(c, 0xe46beu);
    (void)x86_sub(c, c.r[2], 0x72u, 0, 4);
    // 0e46c1  je 0xe46e6
    X86_AT(c, 0xe46c1u);
    if (x86_cc(c, 4)) { goto L_e46e6; }
    X86_TICK(c, 7);
    // 0e46c3  cmp edx, 0x73
    X86_AT(c, 0xe46c3u);
    (void)x86_sub(c, c.r[2], 0x73u, 0, 4);
    // 0e46c6  je 0xe46df
    X86_AT(c, 0xe46c6u);
    if (x86_cc(c, 4)) { goto L_e46df; }
    X86_TICK(c, 7);
    // 0e46c8  jmp 0xe470d
    X86_AT(c, 0xe46c8u);
    goto L_e470d;
L_e46ca:
    X86_TICK(c, 9);
    // 0e46ca  mov ebx, 5
    X86_AT(c, 0xe46cau);
    c.r[3] = 0x5u;
    // 0e46cf  jmp 0xe470d
    X86_AT(c, 0xe46cfu);
    goto L_e470d;
L_e46d1:
    X86_TICK(c, 9);
    // 0e46d1  mov ebx, 6
    X86_AT(c, 0xe46d1u);
    c.r[3] = 0x6u;
    // 0e46d6  jmp 0xe470d
    X86_AT(c, 0xe46d6u);
    goto L_e470d;
L_e46d8:
    X86_TICK(c, 9);
    // 0e46d8  mov ebx, 3
    X86_AT(c, 0xe46d8u);
    c.r[3] = 0x3u;
    // 0e46dd  jmp 0xe470d
    X86_AT(c, 0xe46ddu);
    goto L_e470d;
L_e46df:
    X86_TICK(c, 9);
    // 0e46df  mov ebx, 4
    X86_AT(c, 0xe46dfu);
    c.r[3] = 0x4u;
    // 0e46e4  jmp 0xe470d
    X86_AT(c, 0xe46e4u);
    goto L_e470d;
L_e46e6:
    X86_TICK(c, 9);
    // 0e46e6  mov ebx, 1
    X86_AT(c, 0xe46e6u);
    c.r[3] = 0x1u;
    // 0e46eb  jmp 0xe470d
    X86_AT(c, 0xe46ebu);
    goto L_e470d;
L_e46ed:
    X86_TICK(c, 9);
    // 0e46ed  mov ebx, 7
    X86_AT(c, 0xe46edu);
    c.r[3] = 0x7u;
    // 0e46f2  jmp 0xe470d
    X86_AT(c, 0xe46f2u);
    goto L_e470d;
L_e46f4:
    X86_TICK(c, 9);
    // 0e46f4  sub ebx, ebx
    X86_AT(c, 0xe46f4u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0e46f6  call 0xe5378
    X86_AT(c, 0xe46f6u);
    push32(c, 0xe46fbu); f_000e5378(c); X86_RET(c, 0xe46fbu);
    X86_TICK(c, 9);
    // 0e46fb  push edi
    X86_AT(c, 0xe46fbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e46fc  call 0xe693c
    X86_AT(c, 0xe46fcu);
    push32(c, 0xe4701u); f_000e693c(c); X86_RET(c, 0xe4701u);
    X86_TICK(c, 9);
    // 0e4701  add esp, 4
    X86_AT(c, 0xe4701u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e4704  jmp 0xe470d
    X86_AT(c, 0xe4704u);
    goto L_e470d;
L_e4706:
    X86_TICK(c, 9);
    // 0e4706  sub ebx, ebx
    X86_AT(c, 0xe4706u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0e4708  call 0xe53ac
    X86_AT(c, 0xe4708u);
    push32(c, 0xe470du); f_000e53ac(c); X86_RET(c, 0xe470du);
L_e470d:
    X86_TICK(c, 7);
    // 0e470d  cmp ebx, 0x20
    X86_AT(c, 0xe470du);
    (void)x86_sub(c, c.r[3], 0x20u, 0, 4);
    // 0e4710  jl 0xe4727
    X86_AT(c, 0xe4710u);
    if (x86_cc(c, 12)) { goto L_e4727; }
    X86_TICK(c, 13);
    // 0e4712  mov eax, ebx
    X86_AT(c, 0xe4712u);
    c.r[0] = c.r[3];
    // 0e4714  push eax
    X86_AT(c, 0xe4714u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e4715  push edi
    X86_AT(c, 0xe4715u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e4716  call 0xe6e28
    X86_AT(c, 0xe4716u);
    push32(c, 0xe471bu); f_000e6e28(c); X86_RET(c, 0xe471bu);
    X86_TICK(c, 20);
    // 0e471b  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xe471bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0e471e  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe471eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e4721  add eax, 2
    X86_AT(c, 0xe4721u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0e4724  push eax
    X86_AT(c, 0xe4724u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e4725  jmp 0xe4738
    X86_AT(c, 0xe4725u);
    goto L_e4738;
L_e4727:
    X86_TICK(c, 11);
    // 0e4727  push 0x2068
    X86_AT(c, 0xe4727u);
    { uint32_t v = 0x2068u; push32(c, v); }
    // 0e472c  push edi
    X86_AT(c, 0xe472cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e472d  call 0xe6cb0
    X86_AT(c, 0xe472du);
    push32(c, 0xe4732u); f_000e6cb0(c); X86_RET(c, 0xe4732u);
    X86_TICK(c, 10);
    // 0e4732  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xe4732u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0e4735  push dword ptr [ebp - 4]
    X86_AT(c, 0xe4735u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
L_e4738:
    X86_TICK(c, 9);
    // 0e4738  push edi
    X86_AT(c, 0xe4738u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e4739  call 0xe7260
    X86_AT(c, 0xe4739u);
    push32(c, 0xe473eu); f_000e7260(c); X86_RET(c, 0xe473eu);
    X86_TICK(c, 32);
    // 0e473e  add esp, 0x14
    X86_AT(c, 0xe473eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0e4741  mov eax, ebx
    X86_AT(c, 0xe4741u);
    c.r[0] = c.r[3];
    // 0e4743  pop edi
    X86_AT(c, 0xe4743u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e4744  pop esi
    X86_AT(c, 0xe4744u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e4745  pop ebx
    X86_AT(c, 0xe4745u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e4746  leave 
    X86_AT(c, 0xe4746u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e4747  ret 
    X86_AT(c, 0xe4747u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4680u, "ran off the end of a function");
}
void f_000e4748(X86Cpu& c) {
    X86_TICK(c, 45);
    // 0e4748  push ebp
    X86_AT(c, 0xe4748u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e4749  mov ebp, esp
    X86_AT(c, 0xe4749u);
    c.r[5] = c.r[4];
    // 0e474b  sub esp, 0x14
    X86_AT(c, 0xe474bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x14u, 0, 4); }
    // 0e474e  push ebx
    X86_AT(c, 0xe474eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e474f  push esi
    X86_AT(c, 0xe474fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e4750  push edi
    X86_AT(c, 0xe4750u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e4751  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe4751u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e4754  mov dword ptr [ebp - 0x14], 0
    X86_AT(c, 0xe4754u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), 0x0u);
    // 0e475b  mov dword ptr [ebp - 0x10], 0
    X86_AT(c, 0xe475bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), 0x0u);
    // 0e4762  sub eax, eax
    X86_AT(c, 0xe4762u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e4764  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xe4764u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0e4767  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xe4767u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0e476a  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe476au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e476d  lea eax, [ebp - 0x10]
    X86_AT(c, 0xe476du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0e4770  push eax
    X86_AT(c, 0xe4770u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e4771  lea eax, [ebp - 8]
    X86_AT(c, 0xe4771u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0e4774  push eax
    X86_AT(c, 0xe4774u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e4775  push edi
    X86_AT(c, 0xe4775u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e4776  call 0xe7540
    X86_AT(c, 0xe4776u);
    push32(c, 0xe477bu); f_000e7540(c); X86_RET(c, 0xe477bu);
    X86_TICK(c, 17);
    // 0e477b  lea eax, [ebp - 0xc]
    X86_AT(c, 0xe477bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0e477e  push eax
    X86_AT(c, 0xe477eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e477f  lea eax, [ebp - 4]
    X86_AT(c, 0xe477fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0e4782  push eax
    X86_AT(c, 0xe4782u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e4783  push edi
    X86_AT(c, 0xe4783u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e4784  call 0xe7514
    X86_AT(c, 0xe4784u);
    push32(c, 0xe4789u); f_000e7514(c); X86_RET(c, 0xe4789u);
    X86_TICK(c, 23);
    // 0e4789  mov esi, 0xffffffff
    X86_AT(c, 0xe4789u);
    c.r[6] = 0xFFFFFFFFu;
    // 0e478e  sub ebx, ebx
    X86_AT(c, 0xe478eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0e4790  add esp, 0x18
    X86_AT(c, 0xe4790u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0e4793  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xe4793u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0e4796  sub eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe4796u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0e4799  cmp eax, 3
    X86_AT(c, 0xe4799u);
    (void)x86_sub(c, c.r[0], 0x3u, 0, 4);
    // 0e479c  jge 0xe47a5
    X86_AT(c, 0xe479cu);
    if (x86_cc(c, 13)) { goto L_e47a5; }
    X86_TICK(c, 7);
    // 0e479e  call 0x8b
    X86_AT(c, 0xe479eu);
    push32(c, 0xe47a3u); f_0000008b(c); X86_RET(c, 0xe47a3u);
    X86_TICK(c, 2);
    // 0e47a3  mov esi, ebx
    X86_AT(c, 0xe47a3u);
    c.r[6] = c.r[3];
L_e47a5:
    X86_TICK(c, 9);
    // 0e47a5  push edi
    X86_AT(c, 0xe47a5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e47a6  call 0xe759c
    X86_AT(c, 0xe47a6u);
    push32(c, 0xe47abu); f_000e759c(c); X86_RET(c, 0xe47abu);
    X86_TICK(c, 9);
    // 0e47ab  add esp, 4
    X86_AT(c, 0xe47abu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e47ae  and eax, eax
    X86_AT(c, 0xe47aeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e47b0  jne 0xe47bb
    X86_AT(c, 0xe47b0u);
    if (x86_cc(c, 5)) { goto L_e47bb; }
    X86_TICK(c, 9);
    // 0e47b2  push edi
    X86_AT(c, 0xe47b2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e47b3  call 0xe71bc
    X86_AT(c, 0xe47b3u);
    push32(c, 0xe47b8u); f_000e71bc(c); X86_RET(c, 0xe47b8u);
    X86_TICK(c, 2);
    // 0e47b8  add esp, 4
    X86_AT(c, 0xe47b8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e47bb:
    X86_TICK(c, 12);
    // 0e47bb  cmp word ptr [0xcda74], 0
    X86_AT(c, 0xe47bbu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xCDA74u))), 0x0u, 0, 2);
    // 0e47c3  jne 0xe47d5
    X86_AT(c, 0xe47c3u);
    if (x86_cc(c, 5)) { goto L_e47d5; }
    X86_TICK(c, 9);
    // 0e47c5  push 0
    X86_AT(c, 0xe47c5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e47c7  call 0xe1a9c
    X86_AT(c, 0xe47c7u);
    push32(c, 0xe47ccu); f_000e1a9c(c); X86_RET(c, 0xe47ccu);
    X86_TICK(c, 9);
    // 0e47cc  push edi
    X86_AT(c, 0xe47ccu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e47cd  call 0xe693c
    X86_AT(c, 0xe47cdu);
    push32(c, 0xe47d2u); f_000e693c(c); X86_RET(c, 0xe47d2u);
    X86_TICK(c, 2);
    // 0e47d2  add esp, 8
    X86_AT(c, 0xe47d2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_e47d5:
    X86_TICK(c, 7);
    // 0e47d5  call 0xe1344
    X86_AT(c, 0xe47d5u);
    push32(c, 0xe47dau); f_000e1344(c); X86_RET(c, 0xe47dau);
    X86_TICK(c, 13);
    // 0e47da  lea eax, [ebp - 0x14]
    X86_AT(c, 0xe47dau);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFECu);
    // 0e47dd  push eax
    X86_AT(c, 0xe47ddu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e47de  push 1
    X86_AT(c, 0xe47deu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e47e0  call 0xa9
    X86_AT(c, 0xe47e0u);
    push32(c, 0xe47e5u); f_000000a9(c); X86_RET(c, 0xe47e5u);
    X86_TICK(c, 15);
    // 0e47e5  add esp, 8
    X86_AT(c, 0xe47e5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e47e8  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xe47e8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0e47eb  and eax, 0xff00
    X86_AT(c, 0xe47ebu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFF00u, 4); }
    // 0e47f0  cmp eax, 0xff00
    X86_AT(c, 0xe47f0u);
    (void)x86_sub(c, c.r[0], 0xFF00u, 0, 4);
    // 0e47f5  jne 0xe47fe
    X86_AT(c, 0xe47f5u);
    if (x86_cc(c, 5)) { goto L_e47fe; }
    X86_TICK(c, 9);
    // 0e47f7  sub eax, eax
    X86_AT(c, 0xe47f7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e47f9  jmp 0xe4b58
    X86_AT(c, 0xe47f9u);
    goto L_e4b58;
L_e47fe:
    X86_TICK(c, 18);
    // 0e47fe  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xe47feu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0e4801  shr eax, 8
    X86_AT(c, 0xe4801u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0e4804  and eax, 0xff
    X86_AT(c, 0xe4804u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFu, 4); }
    // 0e4809  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xe4809u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0e480c  cmp esi, 0xffffffff
    X86_AT(c, 0xe480cu);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0e480f  jne 0xe4a9c
    X86_AT(c, 0xe480fu);
    if (x86_cc(c, 5)) { goto L_e4a9c; }
    X86_TICK(c, 12);
    // 0e4815  xchg edx, eax
    X86_AT(c, 0xe4815u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0e4816  sub edx, 2
    X86_AT(c, 0xe4816u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0e4819  cmp edx, 0x44
    X86_AT(c, 0xe4819u);
    (void)x86_sub(c, c.r[2], 0x44u, 0, 4);
    // 0e481c  ja 0xe4a9c
    X86_AT(c, 0xe481cu);
    if (x86_cc(c, 7)) { goto L_e4a9c; }
    X86_TICK(c, 7);
    // 0e4822  jmp dword ptr cs:[edx*4 + 0xe482a]
    X86_AT(c, 0xe4822u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xE482Au)));
      switch (t) {
      case 0xe493eu: goto L_e493e;
      case 0xe4948u: goto L_e4948;
      case 0xe4952u: goto L_e4952;
      case 0xe495cu: goto L_e495c;
      case 0xe4966u: goto L_e4966;
      case 0xe4970u: goto L_e4970;
      case 0xe497au: goto L_e497a;
      case 0xe4984u: goto L_e4984;
      case 0xe498eu: goto L_e498e;
      case 0xe4998u: goto L_e4998;
      case 0xe49a2u: goto L_e49a2;
      case 0xe49acu: goto L_e49ac;
      case 0xe49b6u: goto L_e49b6;
      case 0xe49c0u: goto L_e49c0;
      case 0xe49cau: goto L_e49ca;
      case 0xe49d4u: goto L_e49d4;
      case 0xe49deu: goto L_e49de;
      case 0xe49e8u: goto L_e49e8;
      case 0xe49f2u: goto L_e49f2;
      case 0xe49fcu: goto L_e49fc;
      case 0xe4a06u: goto L_e4a06;
      case 0xe4a10u: goto L_e4a10;
      case 0xe4a1au: goto L_e4a1a;
      case 0xe4a24u: goto L_e4a24;
      case 0xe4a2eu: goto L_e4a2e;
      case 0xe4a38u: goto L_e4a38;
      case 0xe4a3fu: goto L_e4a3f;
      case 0xe4a46u: goto L_e4a46;
      case 0xe4a4du: goto L_e4a4d;
      case 0xe4a54u: goto L_e4a54;
      case 0xe4a5bu: goto L_e4a5b;
      case 0xe4a62u: goto L_e4a62;
      case 0xe4a69u: goto L_e4a69;
      case 0xe4a70u: goto L_e4a70;
      case 0xe4a77u: goto L_e4a77;
      case 0xe4a7eu: goto L_e4a7e;
      case 0xe4a85u: goto L_e4a85;
      case 0xe4a97u: goto L_e4a97;
      case 0xe4a9cu: goto L_e4a9c;
      default: x86_jump(c, t); return; } }
L_e493e:
    X86_TICK(c, 9);
    // 0e493e  mov ebx, 0x31
    X86_AT(c, 0xe493eu);
    c.r[3] = 0x31u;
    // 0e4943  jmp 0xe4a9c
    X86_AT(c, 0xe4943u);
    goto L_e4a9c;
L_e4948:
    X86_TICK(c, 9);
    // 0e4948  mov ebx, 0x32
    X86_AT(c, 0xe4948u);
    c.r[3] = 0x32u;
    // 0e494d  jmp 0xe4a9c
    X86_AT(c, 0xe494du);
    goto L_e4a9c;
L_e4952:
    X86_TICK(c, 9);
    // 0e4952  mov ebx, 0x33
    X86_AT(c, 0xe4952u);
    c.r[3] = 0x33u;
    // 0e4957  jmp 0xe4a9c
    X86_AT(c, 0xe4957u);
    goto L_e4a9c;
L_e495c:
    X86_TICK(c, 9);
    // 0e495c  mov ebx, 0x34
    X86_AT(c, 0xe495cu);
    c.r[3] = 0x34u;
    // 0e4961  jmp 0xe4a9c
    X86_AT(c, 0xe4961u);
    goto L_e4a9c;
L_e4966:
    X86_TICK(c, 9);
    // 0e4966  mov ebx, 0x35
    X86_AT(c, 0xe4966u);
    c.r[3] = 0x35u;
    // 0e496b  jmp 0xe4a9c
    X86_AT(c, 0xe496bu);
    goto L_e4a9c;
L_e4970:
    X86_TICK(c, 9);
    // 0e4970  mov ebx, 0x36
    X86_AT(c, 0xe4970u);
    c.r[3] = 0x36u;
    // 0e4975  jmp 0xe4a9c
    X86_AT(c, 0xe4975u);
    goto L_e4a9c;
L_e497a:
    X86_TICK(c, 9);
    // 0e497a  mov ebx, 0x37
    X86_AT(c, 0xe497au);
    c.r[3] = 0x37u;
    // 0e497f  jmp 0xe4a9c
    X86_AT(c, 0xe497fu);
    goto L_e4a9c;
L_e4984:
    X86_TICK(c, 9);
    // 0e4984  mov ebx, 0x38
    X86_AT(c, 0xe4984u);
    c.r[3] = 0x38u;
    // 0e4989  jmp 0xe4a9c
    X86_AT(c, 0xe4989u);
    goto L_e4a9c;
L_e498e:
    X86_TICK(c, 9);
    // 0e498e  mov ebx, 0x39
    X86_AT(c, 0xe498eu);
    c.r[3] = 0x39u;
    // 0e4993  jmp 0xe4a9c
    X86_AT(c, 0xe4993u);
    goto L_e4a9c;
L_e4998:
    X86_TICK(c, 9);
    // 0e4998  mov ebx, 0x30
    X86_AT(c, 0xe4998u);
    c.r[3] = 0x30u;
    // 0e499d  jmp 0xe4a9c
    X86_AT(c, 0xe499du);
    goto L_e4a9c;
L_e49a2:
    X86_TICK(c, 9);
    // 0e49a2  mov ebx, 0x41
    X86_AT(c, 0xe49a2u);
    c.r[3] = 0x41u;
    // 0e49a7  jmp 0xe4a9c
    X86_AT(c, 0xe49a7u);
    goto L_e4a9c;
L_e49ac:
    X86_TICK(c, 9);
    // 0e49ac  mov ebx, 0x42
    X86_AT(c, 0xe49acu);
    c.r[3] = 0x42u;
    // 0e49b1  jmp 0xe4a9c
    X86_AT(c, 0xe49b1u);
    goto L_e4a9c;
L_e49b6:
    X86_TICK(c, 9);
    // 0e49b6  mov ebx, 0x43
    X86_AT(c, 0xe49b6u);
    c.r[3] = 0x43u;
    // 0e49bb  jmp 0xe4a9c
    X86_AT(c, 0xe49bbu);
    goto L_e4a9c;
L_e49c0:
    X86_TICK(c, 9);
    // 0e49c0  mov ebx, 0x44
    X86_AT(c, 0xe49c0u);
    c.r[3] = 0x44u;
    // 0e49c5  jmp 0xe4a9c
    X86_AT(c, 0xe49c5u);
    goto L_e4a9c;
L_e49ca:
    X86_TICK(c, 9);
    // 0e49ca  mov ebx, 0x45
    X86_AT(c, 0xe49cau);
    c.r[3] = 0x45u;
    // 0e49cf  jmp 0xe4a9c
    X86_AT(c, 0xe49cfu);
    goto L_e4a9c;
L_e49d4:
    X86_TICK(c, 9);
    // 0e49d4  mov ebx, 0x46
    X86_AT(c, 0xe49d4u);
    c.r[3] = 0x46u;
    // 0e49d9  jmp 0xe4a9c
    X86_AT(c, 0xe49d9u);
    goto L_e4a9c;
L_e49de:
    X86_TICK(c, 9);
    // 0e49de  mov ebx, 0x47
    X86_AT(c, 0xe49deu);
    c.r[3] = 0x47u;
    // 0e49e3  jmp 0xe4a9c
    X86_AT(c, 0xe49e3u);
    goto L_e4a9c;
L_e49e8:
    X86_TICK(c, 9);
    // 0e49e8  mov ebx, 0x48
    X86_AT(c, 0xe49e8u);
    c.r[3] = 0x48u;
    // 0e49ed  jmp 0xe4a9c
    X86_AT(c, 0xe49edu);
    goto L_e4a9c;
L_e49f2:
    X86_TICK(c, 9);
    // 0e49f2  mov ebx, 0x49
    X86_AT(c, 0xe49f2u);
    c.r[3] = 0x49u;
    // 0e49f7  jmp 0xe4a9c
    X86_AT(c, 0xe49f7u);
    goto L_e4a9c;
L_e49fc:
    X86_TICK(c, 9);
    // 0e49fc  mov ebx, 0x4a
    X86_AT(c, 0xe49fcu);
    c.r[3] = 0x4Au;
    // 0e4a01  jmp 0xe4a9c
    X86_AT(c, 0xe4a01u);
    goto L_e4a9c;
L_e4a06:
    X86_TICK(c, 9);
    // 0e4a06  mov ebx, 0x4b
    X86_AT(c, 0xe4a06u);
    c.r[3] = 0x4Bu;
    // 0e4a0b  jmp 0xe4a9c
    X86_AT(c, 0xe4a0bu);
    goto L_e4a9c;
L_e4a10:
    X86_TICK(c, 9);
    // 0e4a10  mov ebx, 0x4c
    X86_AT(c, 0xe4a10u);
    c.r[3] = 0x4Cu;
    // 0e4a15  jmp 0xe4a9c
    X86_AT(c, 0xe4a15u);
    goto L_e4a9c;
L_e4a1a:
    X86_TICK(c, 9);
    // 0e4a1a  mov ebx, 0x4d
    X86_AT(c, 0xe4a1au);
    c.r[3] = 0x4Du;
    // 0e4a1f  jmp 0xe4a9c
    X86_AT(c, 0xe4a1fu);
    goto L_e4a9c;
L_e4a24:
    X86_TICK(c, 9);
    // 0e4a24  mov ebx, 0x4e
    X86_AT(c, 0xe4a24u);
    c.r[3] = 0x4Eu;
    // 0e4a29  jmp 0xe4a9c
    X86_AT(c, 0xe4a29u);
    goto L_e4a9c;
L_e4a2e:
    X86_TICK(c, 9);
    // 0e4a2e  mov ebx, 0x4f
    X86_AT(c, 0xe4a2eu);
    c.r[3] = 0x4Fu;
    // 0e4a33  jmp 0xe4a9c
    X86_AT(c, 0xe4a33u);
    goto L_e4a9c;
L_e4a38:
    X86_TICK(c, 9);
    // 0e4a38  mov ebx, 0x50
    X86_AT(c, 0xe4a38u);
    c.r[3] = 0x50u;
    // 0e4a3d  jmp 0xe4a9c
    X86_AT(c, 0xe4a3du);
    goto L_e4a9c;
L_e4a3f:
    X86_TICK(c, 9);
    // 0e4a3f  mov ebx, 0x51
    X86_AT(c, 0xe4a3fu);
    c.r[3] = 0x51u;
    // 0e4a44  jmp 0xe4a9c
    X86_AT(c, 0xe4a44u);
    goto L_e4a9c;
L_e4a46:
    X86_TICK(c, 9);
    // 0e4a46  mov ebx, 0x52
    X86_AT(c, 0xe4a46u);
    c.r[3] = 0x52u;
    // 0e4a4b  jmp 0xe4a9c
    X86_AT(c, 0xe4a4bu);
    goto L_e4a9c;
L_e4a4d:
    X86_TICK(c, 9);
    // 0e4a4d  mov ebx, 0x53
    X86_AT(c, 0xe4a4du);
    c.r[3] = 0x53u;
    // 0e4a52  jmp 0xe4a9c
    X86_AT(c, 0xe4a52u);
    goto L_e4a9c;
L_e4a54:
    X86_TICK(c, 9);
    // 0e4a54  mov ebx, 0x54
    X86_AT(c, 0xe4a54u);
    c.r[3] = 0x54u;
    // 0e4a59  jmp 0xe4a9c
    X86_AT(c, 0xe4a59u);
    goto L_e4a9c;
L_e4a5b:
    X86_TICK(c, 9);
    // 0e4a5b  mov ebx, 0x55
    X86_AT(c, 0xe4a5bu);
    c.r[3] = 0x55u;
    // 0e4a60  jmp 0xe4a9c
    X86_AT(c, 0xe4a60u);
    goto L_e4a9c;
L_e4a62:
    X86_TICK(c, 9);
    // 0e4a62  mov ebx, 0x56
    X86_AT(c, 0xe4a62u);
    c.r[3] = 0x56u;
    // 0e4a67  jmp 0xe4a9c
    X86_AT(c, 0xe4a67u);
    goto L_e4a9c;
L_e4a69:
    X86_TICK(c, 9);
    // 0e4a69  mov ebx, 0x57
    X86_AT(c, 0xe4a69u);
    c.r[3] = 0x57u;
    // 0e4a6e  jmp 0xe4a9c
    X86_AT(c, 0xe4a6eu);
    goto L_e4a9c;
L_e4a70:
    X86_TICK(c, 9);
    // 0e4a70  mov ebx, 0x58
    X86_AT(c, 0xe4a70u);
    c.r[3] = 0x58u;
    // 0e4a75  jmp 0xe4a9c
    X86_AT(c, 0xe4a75u);
    goto L_e4a9c;
L_e4a77:
    X86_TICK(c, 9);
    // 0e4a77  mov ebx, 0x59
    X86_AT(c, 0xe4a77u);
    c.r[3] = 0x59u;
    // 0e4a7c  jmp 0xe4a9c
    X86_AT(c, 0xe4a7cu);
    goto L_e4a9c;
L_e4a7e:
    X86_TICK(c, 9);
    // 0e4a7e  mov ebx, 0x5a
    X86_AT(c, 0xe4a7eu);
    c.r[3] = 0x5Au;
    // 0e4a83  jmp 0xe4a9c
    X86_AT(c, 0xe4a83u);
    goto L_e4a9c;
L_e4a85:
    X86_TICK(c, 9);
    // 0e4a85  sub ebx, ebx
    X86_AT(c, 0xe4a85u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0e4a87  call 0xe20f4
    X86_AT(c, 0xe4a87u);
    push32(c, 0xe4a8cu); f_000e20f4(c); X86_RET(c, 0xe4a8cu);
    X86_TICK(c, 9);
    // 0e4a8c  push edi
    X86_AT(c, 0xe4a8cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e4a8d  call 0xe693c
    X86_AT(c, 0xe4a8du);
    push32(c, 0xe4a92u); f_000e693c(c); X86_RET(c, 0xe4a92u);
    X86_TICK(c, 9);
    // 0e4a92  add esp, 4
    X86_AT(c, 0xe4a92u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e4a95  jmp 0xe4a9c
    X86_AT(c, 0xe4a95u);
    goto L_e4a9c;
L_e4a97:
    X86_TICK(c, 2);
    // 0e4a97  mov ebx, 0x20
    X86_AT(c, 0xe4a97u);
    c.r[3] = 0x20u;
L_e4a9c:
    X86_TICK(c, 11);
    // 0e4a9c  mov edx, dword ptr [ebp - 0x14]
    X86_AT(c, 0xe4a9cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0e4a9f  cmp edx, 0x50
    X86_AT(c, 0xe4a9fu);
    (void)x86_sub(c, c.r[2], 0x50u, 0, 4);
    // 0e4aa2  ja 0xe4acb
    X86_AT(c, 0xe4aa2u);
    if (x86_cc(c, 7)) { goto L_e4acb; }
    X86_TICK(c, 7);
    // 0e4aa4  cmp edx, 0x50
    X86_AT(c, 0xe4aa4u);
    (void)x86_sub(c, c.r[2], 0x50u, 0, 4);
    // 0e4aa7  je 0xe4aed
    X86_AT(c, 0xe4aa7u);
    if (x86_cc(c, 4)) { goto L_e4aed; }
    X86_TICK(c, 7);
    // 0e4aa9  cmp edx, 1
    X86_AT(c, 0xe4aa9u);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0e4aac  je 0xe4b02
    X86_AT(c, 0xe4aacu);
    if (x86_cc(c, 4)) { goto L_e4b02; }
    X86_TICK(c, 7);
    // 0e4ab2  cmp edx, 0xf
    X86_AT(c, 0xe4ab2u);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 0e4ab5  je 0xe4af4
    X86_AT(c, 0xe4ab5u);
    if (x86_cc(c, 4)) { goto L_e4af4; }
    X86_TICK(c, 7);
    // 0e4ab7  cmp edx, 0x1d
    X86_AT(c, 0xe4ab7u);
    (void)x86_sub(c, c.r[2], 0x1Du, 0, 4);
    // 0e4aba  je 0xe4afb
    X86_AT(c, 0xe4abau);
    if (x86_cc(c, 4)) { goto L_e4afb; }
    X86_TICK(c, 7);
    // 0e4abc  cmp edx, 0x4d
    X86_AT(c, 0xe4abcu);
    (void)x86_sub(c, c.r[2], 0x4Du, 0, 4);
    // 0e4abf  je 0xe4ae6
    X86_AT(c, 0xe4abfu);
    if (x86_cc(c, 4)) { goto L_e4ae6; }
    X86_TICK(c, 7);
    // 0e4ac1  cmp edx, 0x4f
    X86_AT(c, 0xe4ac1u);
    (void)x86_sub(c, c.r[2], 0x4Fu, 0, 4);
    // 0e4ac4  je 0xe4af4
    X86_AT(c, 0xe4ac4u);
    if (x86_cc(c, 4)) { goto L_e4af4; }
    X86_TICK(c, 7);
    // 0e4ac6  jmp 0xe4b29
    X86_AT(c, 0xe4ac6u);
    goto L_e4b29;
L_e4acb:
    X86_TICK(c, 7);
    // 0e4acb  cmp edx, 0x51
    X86_AT(c, 0xe4acbu);
    (void)x86_sub(c, c.r[2], 0x51u, 0, 4);
    // 0e4ace  je 0xe4b09
    X86_AT(c, 0xe4aceu);
    if (x86_cc(c, 4)) { goto L_e4b09; }
    X86_TICK(c, 7);
    // 0e4ad0  cmp edx, 0x5d
    X86_AT(c, 0xe4ad0u);
    (void)x86_sub(c, c.r[2], 0x5Du, 0, 4);
    // 0e4ad3  je 0xe4b10
    X86_AT(c, 0xe4ad3u);
    if (x86_cc(c, 4)) { goto L_e4b10; }
    X86_TICK(c, 7);
    // 0e4ad5  cmp edx, 0x5e
    X86_AT(c, 0xe4ad5u);
    (void)x86_sub(c, c.r[2], 0x5Eu, 0, 4);
    // 0e4ad8  je 0xe4b22
    X86_AT(c, 0xe4ad8u);
    if (x86_cc(c, 4)) { goto L_e4b22; }
    X86_TICK(c, 7);
    // 0e4ada  cmp edx, 0x72
    X86_AT(c, 0xe4adau);
    (void)x86_sub(c, c.r[2], 0x72u, 0, 4);
    // 0e4add  je 0xe4b02
    X86_AT(c, 0xe4addu);
    if (x86_cc(c, 4)) { goto L_e4b02; }
    X86_TICK(c, 7);
    // 0e4adf  cmp edx, 0x73
    X86_AT(c, 0xe4adfu);
    (void)x86_sub(c, c.r[2], 0x73u, 0, 4);
    // 0e4ae2  je 0xe4afb
    X86_AT(c, 0xe4ae2u);
    if (x86_cc(c, 4)) { goto L_e4afb; }
    X86_TICK(c, 7);
    // 0e4ae4  jmp 0xe4b29
    X86_AT(c, 0xe4ae4u);
    goto L_e4b29;
L_e4ae6:
    X86_TICK(c, 9);
    // 0e4ae6  mov ebx, 5
    X86_AT(c, 0xe4ae6u);
    c.r[3] = 0x5u;
    // 0e4aeb  jmp 0xe4b29
    X86_AT(c, 0xe4aebu);
    goto L_e4b29;
L_e4aed:
    X86_TICK(c, 9);
    // 0e4aed  mov ebx, 6
    X86_AT(c, 0xe4aedu);
    c.r[3] = 0x6u;
    // 0e4af2  jmp 0xe4b29
    X86_AT(c, 0xe4af2u);
    goto L_e4b29;
L_e4af4:
    X86_TICK(c, 9);
    // 0e4af4  mov ebx, 3
    X86_AT(c, 0xe4af4u);
    c.r[3] = 0x3u;
    // 0e4af9  jmp 0xe4b29
    X86_AT(c, 0xe4af9u);
    goto L_e4b29;
L_e4afb:
    X86_TICK(c, 9);
    // 0e4afb  mov ebx, 4
    X86_AT(c, 0xe4afbu);
    c.r[3] = 0x4u;
    // 0e4b00  jmp 0xe4b29
    X86_AT(c, 0xe4b00u);
    goto L_e4b29;
L_e4b02:
    X86_TICK(c, 9);
    // 0e4b02  mov ebx, 1
    X86_AT(c, 0xe4b02u);
    c.r[3] = 0x1u;
    // 0e4b07  jmp 0xe4b29
    X86_AT(c, 0xe4b07u);
    goto L_e4b29;
L_e4b09:
    X86_TICK(c, 9);
    // 0e4b09  mov ebx, 7
    X86_AT(c, 0xe4b09u);
    c.r[3] = 0x7u;
    // 0e4b0e  jmp 0xe4b29
    X86_AT(c, 0xe4b0eu);
    goto L_e4b29;
L_e4b10:
    X86_TICK(c, 9);
    // 0e4b10  sub ebx, ebx
    X86_AT(c, 0xe4b10u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0e4b12  call 0xe5378
    X86_AT(c, 0xe4b12u);
    push32(c, 0xe4b17u); f_000e5378(c); X86_RET(c, 0xe4b17u);
    X86_TICK(c, 9);
    // 0e4b17  push edi
    X86_AT(c, 0xe4b17u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e4b18  call 0xe693c
    X86_AT(c, 0xe4b18u);
    push32(c, 0xe4b1du); f_000e693c(c); X86_RET(c, 0xe4b1du);
    X86_TICK(c, 9);
    // 0e4b1d  add esp, 4
    X86_AT(c, 0xe4b1du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e4b20  jmp 0xe4b29
    X86_AT(c, 0xe4b20u);
    goto L_e4b29;
L_e4b22:
    X86_TICK(c, 9);
    // 0e4b22  sub ebx, ebx
    X86_AT(c, 0xe4b22u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0e4b24  call 0xe53ac
    X86_AT(c, 0xe4b24u);
    push32(c, 0xe4b29u); f_000e53ac(c); X86_RET(c, 0xe4b29u);
L_e4b29:
    X86_TICK(c, 7);
    // 0e4b29  cmp ebx, 0x20
    X86_AT(c, 0xe4b29u);
    (void)x86_sub(c, c.r[3], 0x20u, 0, 4);
    // 0e4b2c  jl 0xe4b39
    X86_AT(c, 0xe4b2cu);
    if (x86_cc(c, 12)) { goto L_e4b39; }
    X86_TICK(c, 13);
    // 0e4b2e  mov eax, ebx
    X86_AT(c, 0xe4b2eu);
    c.r[0] = c.r[3];
    // 0e4b30  push eax
    X86_AT(c, 0xe4b30u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e4b31  push edi
    X86_AT(c, 0xe4b31u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e4b32  call 0xe6e28
    X86_AT(c, 0xe4b32u);
    push32(c, 0xe4b37u); f_000e6e28(c); X86_RET(c, 0xe4b37u);
    X86_TICK(c, 7);
    // 0e4b37  jmp 0xe4b44
    X86_AT(c, 0xe4b37u);
    goto L_e4b44;
L_e4b39:
    X86_TICK(c, 11);
    // 0e4b39  push 0x206c
    X86_AT(c, 0xe4b39u);
    { uint32_t v = 0x206Cu; push32(c, v); }
    // 0e4b3e  push edi
    X86_AT(c, 0xe4b3eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e4b3f  call 0xe6cb0
    X86_AT(c, 0xe4b3fu);
    push32(c, 0xe4b44u); f_000e6cb0(c); X86_RET(c, 0xe4b44u);
L_e4b44:
    X86_TICK(c, 21);
    // 0e4b44  add esp, 8
    X86_AT(c, 0xe4b44u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e4b47  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xe4b47u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0e4b4a  push dword ptr [ebp - 4]
    X86_AT(c, 0xe4b4au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0e4b4d  push edi
    X86_AT(c, 0xe4b4du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e4b4e  call 0xe7260
    X86_AT(c, 0xe4b4eu);
    push32(c, 0xe4b53u); f_000e7260(c); X86_RET(c, 0xe4b53u);
    X86_TICK(c, 4);
    // 0e4b53  mov eax, ebx
    X86_AT(c, 0xe4b53u);
    c.r[0] = c.r[3];
    // 0e4b55  add esp, 0xc
    X86_AT(c, 0xe4b55u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_e4b58:
    X86_TICK(c, 28);
    // 0e4b58  pop edi
    X86_AT(c, 0xe4b58u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e4b59  pop esi
    X86_AT(c, 0xe4b59u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e4b5a  pop ebx
    X86_AT(c, 0xe4b5au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e4b5b  leave 
    X86_AT(c, 0xe4b5bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e4b5c  ret 
    X86_AT(c, 0xe4b5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4748u, "ran off the end of a function");
}
void f_000e4a9c(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0e4a9c  mov edx, dword ptr [ebp - 0x14]
    X86_AT(c, 0xe4a9cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0e4a9f  cmp edx, 0x50
    X86_AT(c, 0xe4a9fu);
    (void)x86_sub(c, c.r[2], 0x50u, 0, 4);
    // 0e4aa2  ja 0xe4acb
    X86_AT(c, 0xe4aa2u);
    if (x86_cc(c, 7)) { goto L_e4acb; }
    X86_TICK(c, 7);
    // 0e4aa4  cmp edx, 0x50
    X86_AT(c, 0xe4aa4u);
    (void)x86_sub(c, c.r[2], 0x50u, 0, 4);
    // 0e4aa7  je 0xe4aed
    X86_AT(c, 0xe4aa7u);
    if (x86_cc(c, 4)) { goto L_e4aed; }
    X86_TICK(c, 7);
    // 0e4aa9  cmp edx, 1
    X86_AT(c, 0xe4aa9u);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0e4aac  je 0xe4b02
    X86_AT(c, 0xe4aacu);
    if (x86_cc(c, 4)) { goto L_e4b02; }
    X86_TICK(c, 7);
    // 0e4ab2  cmp edx, 0xf
    X86_AT(c, 0xe4ab2u);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 0e4ab5  je 0xe4af4
    X86_AT(c, 0xe4ab5u);
    if (x86_cc(c, 4)) { goto L_e4af4; }
    X86_TICK(c, 7);
    // 0e4ab7  cmp edx, 0x1d
    X86_AT(c, 0xe4ab7u);
    (void)x86_sub(c, c.r[2], 0x1Du, 0, 4);
    // 0e4aba  je 0xe4afb
    X86_AT(c, 0xe4abau);
    if (x86_cc(c, 4)) { goto L_e4afb; }
    X86_TICK(c, 7);
    // 0e4abc  cmp edx, 0x4d
    X86_AT(c, 0xe4abcu);
    (void)x86_sub(c, c.r[2], 0x4Du, 0, 4);
    // 0e4abf  je 0xe4ae6
    X86_AT(c, 0xe4abfu);
    if (x86_cc(c, 4)) { goto L_e4ae6; }
    X86_TICK(c, 7);
    // 0e4ac1  cmp edx, 0x4f
    X86_AT(c, 0xe4ac1u);
    (void)x86_sub(c, c.r[2], 0x4Fu, 0, 4);
    // 0e4ac4  je 0xe4af4
    X86_AT(c, 0xe4ac4u);
    if (x86_cc(c, 4)) { goto L_e4af4; }
    X86_TICK(c, 7);
    // 0e4ac6  jmp 0xe4b29
    X86_AT(c, 0xe4ac6u);
    goto L_e4b29;
L_e4acb:
    X86_TICK(c, 7);
    // 0e4acb  cmp edx, 0x51
    X86_AT(c, 0xe4acbu);
    (void)x86_sub(c, c.r[2], 0x51u, 0, 4);
    // 0e4ace  je 0xe4b09
    X86_AT(c, 0xe4aceu);
    if (x86_cc(c, 4)) { goto L_e4b09; }
    X86_TICK(c, 7);
    // 0e4ad0  cmp edx, 0x5d
    X86_AT(c, 0xe4ad0u);
    (void)x86_sub(c, c.r[2], 0x5Du, 0, 4);
    // 0e4ad3  je 0xe4b10
    X86_AT(c, 0xe4ad3u);
    if (x86_cc(c, 4)) { goto L_e4b10; }
    X86_TICK(c, 7);
    // 0e4ad5  cmp edx, 0x5e
    X86_AT(c, 0xe4ad5u);
    (void)x86_sub(c, c.r[2], 0x5Eu, 0, 4);
    // 0e4ad8  je 0xe4b22
    X86_AT(c, 0xe4ad8u);
    if (x86_cc(c, 4)) { goto L_e4b22; }
    X86_TICK(c, 7);
    // 0e4ada  cmp edx, 0x72
    X86_AT(c, 0xe4adau);
    (void)x86_sub(c, c.r[2], 0x72u, 0, 4);
    // 0e4add  je 0xe4b02
    X86_AT(c, 0xe4addu);
    if (x86_cc(c, 4)) { goto L_e4b02; }
    X86_TICK(c, 7);
    // 0e4adf  cmp edx, 0x73
    X86_AT(c, 0xe4adfu);
    (void)x86_sub(c, c.r[2], 0x73u, 0, 4);
    // 0e4ae2  je 0xe4afb
    X86_AT(c, 0xe4ae2u);
    if (x86_cc(c, 4)) { goto L_e4afb; }
    X86_TICK(c, 7);
    // 0e4ae4  jmp 0xe4b29
    X86_AT(c, 0xe4ae4u);
    goto L_e4b29;
L_e4ae6:
    X86_TICK(c, 9);
    // 0e4ae6  mov ebx, 5
    X86_AT(c, 0xe4ae6u);
    c.r[3] = 0x5u;
    // 0e4aeb  jmp 0xe4b29
    X86_AT(c, 0xe4aebu);
    goto L_e4b29;
L_e4aed:
    X86_TICK(c, 9);
    // 0e4aed  mov ebx, 6
    X86_AT(c, 0xe4aedu);
    c.r[3] = 0x6u;
    // 0e4af2  jmp 0xe4b29
    X86_AT(c, 0xe4af2u);
    goto L_e4b29;
L_e4af4:
    X86_TICK(c, 9);
    // 0e4af4  mov ebx, 3
    X86_AT(c, 0xe4af4u);
    c.r[3] = 0x3u;
    // 0e4af9  jmp 0xe4b29
    X86_AT(c, 0xe4af9u);
    goto L_e4b29;
L_e4afb:
    X86_TICK(c, 9);
    // 0e4afb  mov ebx, 4
    X86_AT(c, 0xe4afbu);
    c.r[3] = 0x4u;
    // 0e4b00  jmp 0xe4b29
    X86_AT(c, 0xe4b00u);
    goto L_e4b29;
L_e4b02:
    X86_TICK(c, 9);
    // 0e4b02  mov ebx, 1
    X86_AT(c, 0xe4b02u);
    c.r[3] = 0x1u;
    // 0e4b07  jmp 0xe4b29
    X86_AT(c, 0xe4b07u);
    goto L_e4b29;
L_e4b09:
    X86_TICK(c, 9);
    // 0e4b09  mov ebx, 7
    X86_AT(c, 0xe4b09u);
    c.r[3] = 0x7u;
    // 0e4b0e  jmp 0xe4b29
    X86_AT(c, 0xe4b0eu);
    goto L_e4b29;
L_e4b10:
    X86_TICK(c, 9);
    // 0e4b10  sub ebx, ebx
    X86_AT(c, 0xe4b10u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0e4b12  call 0xe5378
    X86_AT(c, 0xe4b12u);
    push32(c, 0xe4b17u); f_000e5378(c); X86_RET(c, 0xe4b17u);
    X86_TICK(c, 9);
    // 0e4b17  push edi
    X86_AT(c, 0xe4b17u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e4b18  call 0xe693c
    X86_AT(c, 0xe4b18u);
    push32(c, 0xe4b1du); f_000e693c(c); X86_RET(c, 0xe4b1du);
    X86_TICK(c, 9);
    // 0e4b1d  add esp, 4
    X86_AT(c, 0xe4b1du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e4b20  jmp 0xe4b29
    X86_AT(c, 0xe4b20u);
    goto L_e4b29;
L_e4b22:
    X86_TICK(c, 9);
    // 0e4b22  sub ebx, ebx
    X86_AT(c, 0xe4b22u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0e4b24  call 0xe53ac
    X86_AT(c, 0xe4b24u);
    push32(c, 0xe4b29u); f_000e53ac(c); X86_RET(c, 0xe4b29u);
L_e4b29:
    X86_TICK(c, 7);
    // 0e4b29  cmp ebx, 0x20
    X86_AT(c, 0xe4b29u);
    (void)x86_sub(c, c.r[3], 0x20u, 0, 4);
    // 0e4b2c  jl 0xe4b39
    X86_AT(c, 0xe4b2cu);
    if (x86_cc(c, 12)) { goto L_e4b39; }
    X86_TICK(c, 13);
    // 0e4b2e  mov eax, ebx
    X86_AT(c, 0xe4b2eu);
    c.r[0] = c.r[3];
    // 0e4b30  push eax
    X86_AT(c, 0xe4b30u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e4b31  push edi
    X86_AT(c, 0xe4b31u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e4b32  call 0xe6e28
    X86_AT(c, 0xe4b32u);
    push32(c, 0xe4b37u); f_000e6e28(c); X86_RET(c, 0xe4b37u);
    X86_TICK(c, 7);
    // 0e4b37  jmp 0xe4b44
    X86_AT(c, 0xe4b37u);
    goto L_e4b44;
L_e4b39:
    X86_TICK(c, 11);
    // 0e4b39  push 0x206c
    X86_AT(c, 0xe4b39u);
    { uint32_t v = 0x206Cu; push32(c, v); }
    // 0e4b3e  push edi
    X86_AT(c, 0xe4b3eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e4b3f  call 0xe6cb0
    X86_AT(c, 0xe4b3fu);
    push32(c, 0xe4b44u); f_000e6cb0(c); X86_RET(c, 0xe4b44u);
L_e4b44:
    X86_TICK(c, 21);
    // 0e4b44  add esp, 8
    X86_AT(c, 0xe4b44u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e4b47  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xe4b47u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0e4b4a  push dword ptr [ebp - 4]
    X86_AT(c, 0xe4b4au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0e4b4d  push edi
    X86_AT(c, 0xe4b4du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e4b4e  call 0xe7260
    X86_AT(c, 0xe4b4eu);
    push32(c, 0xe4b53u); f_000e7260(c); X86_RET(c, 0xe4b53u);
    X86_TICK(c, 32);
    // 0e4b53  mov eax, ebx
    X86_AT(c, 0xe4b53u);
    c.r[0] = c.r[3];
    // 0e4b55  add esp, 0xc
    X86_AT(c, 0xe4b55u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e4b58  pop edi
    X86_AT(c, 0xe4b58u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e4b59  pop esi
    X86_AT(c, 0xe4b59u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e4b5a  pop ebx
    X86_AT(c, 0xe4b5au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e4b5b  leave 
    X86_AT(c, 0xe4b5bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e4b5c  ret 
    X86_AT(c, 0xe4b5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4a9cu, "ran off the end of a function");
}
void f_000e4b60(X86Cpu& c) {
    X86_TICK(c, 34);
    // 0e4b60  push ebp
    X86_AT(c, 0xe4b60u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e4b61  mov ebp, esp
    X86_AT(c, 0xe4b61u);
    c.r[5] = c.r[4];
    // 0e4b63  push eax
    X86_AT(c, 0xe4b63u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e4b64  push ebx
    X86_AT(c, 0xe4b64u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e4b65  push esi
    X86_AT(c, 0xe4b65u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e4b66  push edi
    X86_AT(c, 0xe4b66u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e4b67  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe4b67u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e4b6a  sub eax, eax
    X86_AT(c, 0xe4b6au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e4b6c  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe4b6cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e4b6f  xchg esi, eax
    X86_AT(c, 0xe4b6fu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0e4b70  cmp si, word ptr [0xcda74]
    X86_AT(c, 0xe4b70u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(0xCDA74u))), 0, 2);
    // 0e4b77  jne 0xe4b88
    X86_AT(c, 0xe4b77u);
    if (x86_cc(c, 5)) { goto L_e4b88; }
    X86_TICK(c, 9);
    // 0e4b79  push esi
    X86_AT(c, 0xe4b79u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e4b7a  call 0xe1a9c
    X86_AT(c, 0xe4b7au);
    push32(c, 0xe4b7fu); f_000e1a9c(c); X86_RET(c, 0xe4b7fu);
    X86_TICK(c, 9);
    // 0e4b7f  push edi
    X86_AT(c, 0xe4b7fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e4b80  call 0xe693c
    X86_AT(c, 0xe4b80u);
    push32(c, 0xe4b85u); f_000e693c(c); X86_RET(c, 0xe4b85u);
    X86_TICK(c, 2);
    // 0e4b85  add esp, 8
    X86_AT(c, 0xe4b85u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_e4b88:
    X86_TICK(c, 7);
    // 0e4b88  call 0xe1344
    X86_AT(c, 0xe4b88u);
    push32(c, 0xe4b8du); f_000e1344(c); X86_RET(c, 0xe4b8du);
    X86_TICK(c, 13);
    // 0e4b8d  lea ebx, [ebp - 4]
    X86_AT(c, 0xe4b8du);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0e4b90  push ebx
    X86_AT(c, 0xe4b90u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e4b91  push 1
    X86_AT(c, 0xe4b91u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e4b93  call 0xa9
    X86_AT(c, 0xe4b93u);
    push32(c, 0xe4b98u); f_000000a9(c); X86_RET(c, 0xe4b98u);
    X86_TICK(c, 15);
    // 0e4b98  add esp, 8
    X86_AT(c, 0xe4b98u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e4b9b  mov eax, dword ptr [ebx]
    X86_AT(c, 0xe4b9bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0e4b9d  and eax, 0xff00
    X86_AT(c, 0xe4b9du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFF00u, 4); }
    // 0e4ba2  cmp eax, 0xff00
    X86_AT(c, 0xe4ba2u);
    (void)x86_sub(c, c.r[0], 0xFF00u, 0, 4);
    // 0e4ba7  jne 0xe4bb0
    X86_AT(c, 0xe4ba7u);
    if (x86_cc(c, 5)) { goto L_e4bb0; }
    X86_TICK(c, 9);
    // 0e4ba9  sub eax, eax
    X86_AT(c, 0xe4ba9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e4bab  jmp 0xe4f54
    X86_AT(c, 0xe4babu);
    goto L_e4f54;
L_e4bb0:
    X86_TICK(c, 23);
    // 0e4bb0  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe4bb0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e4bb3  shr eax, 8
    X86_AT(c, 0xe4bb3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0e4bb6  and eax, 0xff
    X86_AT(c, 0xe4bb6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFu, 4); }
    // 0e4bbb  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe4bbbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e4bbe  xchg edx, eax
    X86_AT(c, 0xe4bbeu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0e4bbf  dec edx
    X86_AT(c, 0xe4bbfu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0e4bc0  cmp edx, 0x72
    X86_AT(c, 0xe4bc0u);
    (void)x86_sub(c, c.r[2], 0x72u, 0, 4);
    // 0e4bc3  ja 0xe4f52
    X86_AT(c, 0xe4bc3u);
    if (x86_cc(c, 7)) { goto L_e4f52; }
    X86_TICK(c, 7);
    // 0e4bc9  jmp dword ptr cs:[edx*4 + 0xe4bd1]
    X86_AT(c, 0xe4bc9u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xE4BD1u)));
      switch (t) {
      case 0xe4d9du: goto L_e4d9d;
      case 0xe4da7u: goto L_e4da7;
      case 0xe4db1u: goto L_e4db1;
      case 0xe4dbbu: goto L_e4dbb;
      case 0xe4dc5u: goto L_e4dc5;
      case 0xe4dcfu: goto L_e4dcf;
      case 0xe4dd9u: goto L_e4dd9;
      case 0xe4de3u: goto L_e4de3;
      case 0xe4dedu: goto L_e4ded;
      case 0xe4df7u: goto L_e4df7;
      case 0xe4e01u: goto L_e4e01;
      case 0xe4e0bu: goto L_e4e0b;
      case 0xe4e15u: goto L_e4e15;
      case 0xe4e1fu: goto L_e4e1f;
      case 0xe4e29u: goto L_e4e29;
      case 0xe4e33u: goto L_e4e33;
      case 0xe4e3du: goto L_e4e3d;
      case 0xe4e47u: goto L_e4e47;
      case 0xe4e51u: goto L_e4e51;
      case 0xe4e5bu: goto L_e4e5b;
      case 0xe4e65u: goto L_e4e65;
      case 0xe4e6fu: goto L_e4e6f;
      case 0xe4e79u: goto L_e4e79;
      case 0xe4e83u: goto L_e4e83;
      case 0xe4e8du: goto L_e4e8d;
      case 0xe4e97u: goto L_e4e97;
      case 0xe4ea1u: goto L_e4ea1;
      case 0xe4eabu: goto L_e4eab;
      case 0xe4eb5u: goto L_e4eb5;
      case 0xe4ebfu: goto L_e4ebf;
      case 0xe4ec9u: goto L_e4ec9;
      case 0xe4ed3u: goto L_e4ed3;
      case 0xe4eddu: goto L_e4edd;
      case 0xe4ee7u: goto L_e4ee7;
      case 0xe4ef1u: goto L_e4ef1;
      case 0xe4ef8u: goto L_e4ef8;
      case 0xe4effu: goto L_e4eff;
      case 0xe4f08u: goto L_e4f08;
      case 0xe4f0fu: goto L_e4f0f;
      case 0xe4f16u: goto L_e4f16;
      case 0xe4f1du: goto L_e4f1d;
      case 0xe4f24u: goto L_e4f24;
      case 0xe4f2bu: goto L_e4f2b;
      case 0xe4f32u: goto L_e4f32;
      case 0xe4f39u: goto L_e4f39;
      case 0xe4f4bu: goto L_e4f4b;
      case 0xe4f52u: goto L_e4f52;
      default: x86_jump(c, t); return; } }
L_e4d9d:
    X86_TICK(c, 9);
    // 0e4d9d  mov esi, 0x31
    X86_AT(c, 0xe4d9du);
    c.r[6] = 0x31u;
    // 0e4da2  jmp 0xe4f52
    X86_AT(c, 0xe4da2u);
    goto L_e4f52;
L_e4da7:
    X86_TICK(c, 9);
    // 0e4da7  mov esi, 0x32
    X86_AT(c, 0xe4da7u);
    c.r[6] = 0x32u;
    // 0e4dac  jmp 0xe4f52
    X86_AT(c, 0xe4dacu);
    goto L_e4f52;
L_e4db1:
    X86_TICK(c, 9);
    // 0e4db1  mov esi, 0x33
    X86_AT(c, 0xe4db1u);
    c.r[6] = 0x33u;
    // 0e4db6  jmp 0xe4f52
    X86_AT(c, 0xe4db6u);
    goto L_e4f52;
L_e4dbb:
    X86_TICK(c, 9);
    // 0e4dbb  mov esi, 0x34
    X86_AT(c, 0xe4dbbu);
    c.r[6] = 0x34u;
    // 0e4dc0  jmp 0xe4f52
    X86_AT(c, 0xe4dc0u);
    goto L_e4f52;
L_e4dc5:
    X86_TICK(c, 9);
    // 0e4dc5  mov esi, 0x35
    X86_AT(c, 0xe4dc5u);
    c.r[6] = 0x35u;
    // 0e4dca  jmp 0xe4f52
    X86_AT(c, 0xe4dcau);
    goto L_e4f52;
L_e4dcf:
    X86_TICK(c, 9);
    // 0e4dcf  mov esi, 0x36
    X86_AT(c, 0xe4dcfu);
    c.r[6] = 0x36u;
    // 0e4dd4  jmp 0xe4f52
    X86_AT(c, 0xe4dd4u);
    goto L_e4f52;
L_e4dd9:
    X86_TICK(c, 9);
    // 0e4dd9  mov esi, 0x37
    X86_AT(c, 0xe4dd9u);
    c.r[6] = 0x37u;
    // 0e4dde  jmp 0xe4f52
    X86_AT(c, 0xe4ddeu);
    goto L_e4f52;
L_e4de3:
    X86_TICK(c, 9);
    // 0e4de3  mov esi, 0x38
    X86_AT(c, 0xe4de3u);
    c.r[6] = 0x38u;
    // 0e4de8  jmp 0xe4f52
    X86_AT(c, 0xe4de8u);
    goto L_e4f52;
L_e4ded:
    X86_TICK(c, 9);
    // 0e4ded  mov esi, 0x39
    X86_AT(c, 0xe4dedu);
    c.r[6] = 0x39u;
    // 0e4df2  jmp 0xe4f52
    X86_AT(c, 0xe4df2u);
    goto L_e4f52;
L_e4df7:
    X86_TICK(c, 9);
    // 0e4df7  mov esi, 0x30
    X86_AT(c, 0xe4df7u);
    c.r[6] = 0x30u;
    // 0e4dfc  jmp 0xe4f52
    X86_AT(c, 0xe4dfcu);
    goto L_e4f52;
L_e4e01:
    X86_TICK(c, 9);
    // 0e4e01  mov esi, 0x41
    X86_AT(c, 0xe4e01u);
    c.r[6] = 0x41u;
    // 0e4e06  jmp 0xe4f52
    X86_AT(c, 0xe4e06u);
    goto L_e4f52;
L_e4e0b:
    X86_TICK(c, 9);
    // 0e4e0b  mov esi, 0x42
    X86_AT(c, 0xe4e0bu);
    c.r[6] = 0x42u;
    // 0e4e10  jmp 0xe4f52
    X86_AT(c, 0xe4e10u);
    goto L_e4f52;
L_e4e15:
    X86_TICK(c, 9);
    // 0e4e15  mov esi, 0x43
    X86_AT(c, 0xe4e15u);
    c.r[6] = 0x43u;
    // 0e4e1a  jmp 0xe4f52
    X86_AT(c, 0xe4e1au);
    goto L_e4f52;
L_e4e1f:
    X86_TICK(c, 9);
    // 0e4e1f  mov esi, 0x44
    X86_AT(c, 0xe4e1fu);
    c.r[6] = 0x44u;
    // 0e4e24  jmp 0xe4f52
    X86_AT(c, 0xe4e24u);
    goto L_e4f52;
L_e4e29:
    X86_TICK(c, 9);
    // 0e4e29  mov esi, 0x45
    X86_AT(c, 0xe4e29u);
    c.r[6] = 0x45u;
    // 0e4e2e  jmp 0xe4f52
    X86_AT(c, 0xe4e2eu);
    goto L_e4f52;
L_e4e33:
    X86_TICK(c, 9);
    // 0e4e33  mov esi, 0x46
    X86_AT(c, 0xe4e33u);
    c.r[6] = 0x46u;
    // 0e4e38  jmp 0xe4f52
    X86_AT(c, 0xe4e38u);
    goto L_e4f52;
L_e4e3d:
    X86_TICK(c, 9);
    // 0e4e3d  mov esi, 0x47
    X86_AT(c, 0xe4e3du);
    c.r[6] = 0x47u;
    // 0e4e42  jmp 0xe4f52
    X86_AT(c, 0xe4e42u);
    goto L_e4f52;
L_e4e47:
    X86_TICK(c, 9);
    // 0e4e47  mov esi, 0x48
    X86_AT(c, 0xe4e47u);
    c.r[6] = 0x48u;
    // 0e4e4c  jmp 0xe4f52
    X86_AT(c, 0xe4e4cu);
    goto L_e4f52;
L_e4e51:
    X86_TICK(c, 9);
    // 0e4e51  mov esi, 0x49
    X86_AT(c, 0xe4e51u);
    c.r[6] = 0x49u;
    // 0e4e56  jmp 0xe4f52
    X86_AT(c, 0xe4e56u);
    goto L_e4f52;
L_e4e5b:
    X86_TICK(c, 9);
    // 0e4e5b  mov esi, 0x4a
    X86_AT(c, 0xe4e5bu);
    c.r[6] = 0x4Au;
    // 0e4e60  jmp 0xe4f52
    X86_AT(c, 0xe4e60u);
    goto L_e4f52;
L_e4e65:
    X86_TICK(c, 9);
    // 0e4e65  mov esi, 0x4b
    X86_AT(c, 0xe4e65u);
    c.r[6] = 0x4Bu;
    // 0e4e6a  jmp 0xe4f52
    X86_AT(c, 0xe4e6au);
    goto L_e4f52;
L_e4e6f:
    X86_TICK(c, 9);
    // 0e4e6f  mov esi, 0x4c
    X86_AT(c, 0xe4e6fu);
    c.r[6] = 0x4Cu;
    // 0e4e74  jmp 0xe4f52
    X86_AT(c, 0xe4e74u);
    goto L_e4f52;
L_e4e79:
    X86_TICK(c, 9);
    // 0e4e79  mov esi, 0x4d
    X86_AT(c, 0xe4e79u);
    c.r[6] = 0x4Du;
    // 0e4e7e  jmp 0xe4f52
    X86_AT(c, 0xe4e7eu);
    goto L_e4f52;
L_e4e83:
    X86_TICK(c, 9);
    // 0e4e83  mov esi, 0x4e
    X86_AT(c, 0xe4e83u);
    c.r[6] = 0x4Eu;
    // 0e4e88  jmp 0xe4f52
    X86_AT(c, 0xe4e88u);
    goto L_e4f52;
L_e4e8d:
    X86_TICK(c, 9);
    // 0e4e8d  mov esi, 0x4f
    X86_AT(c, 0xe4e8du);
    c.r[6] = 0x4Fu;
    // 0e4e92  jmp 0xe4f52
    X86_AT(c, 0xe4e92u);
    goto L_e4f52;
L_e4e97:
    X86_TICK(c, 9);
    // 0e4e97  mov esi, 0x50
    X86_AT(c, 0xe4e97u);
    c.r[6] = 0x50u;
    // 0e4e9c  jmp 0xe4f52
    X86_AT(c, 0xe4e9cu);
    goto L_e4f52;
L_e4ea1:
    X86_TICK(c, 9);
    // 0e4ea1  mov esi, 0x51
    X86_AT(c, 0xe4ea1u);
    c.r[6] = 0x51u;
    // 0e4ea6  jmp 0xe4f52
    X86_AT(c, 0xe4ea6u);
    goto L_e4f52;
L_e4eab:
    X86_TICK(c, 9);
    // 0e4eab  mov esi, 0x52
    X86_AT(c, 0xe4eabu);
    c.r[6] = 0x52u;
    // 0e4eb0  jmp 0xe4f52
    X86_AT(c, 0xe4eb0u);
    goto L_e4f52;
L_e4eb5:
    X86_TICK(c, 9);
    // 0e4eb5  mov esi, 0x53
    X86_AT(c, 0xe4eb5u);
    c.r[6] = 0x53u;
    // 0e4eba  jmp 0xe4f52
    X86_AT(c, 0xe4ebau);
    goto L_e4f52;
L_e4ebf:
    X86_TICK(c, 9);
    // 0e4ebf  mov esi, 0x54
    X86_AT(c, 0xe4ebfu);
    c.r[6] = 0x54u;
    // 0e4ec4  jmp 0xe4f52
    X86_AT(c, 0xe4ec4u);
    goto L_e4f52;
L_e4ec9:
    X86_TICK(c, 9);
    // 0e4ec9  mov esi, 0x55
    X86_AT(c, 0xe4ec9u);
    c.r[6] = 0x55u;
    // 0e4ece  jmp 0xe4f52
    X86_AT(c, 0xe4eceu);
    goto L_e4f52;
L_e4ed3:
    X86_TICK(c, 9);
    // 0e4ed3  mov esi, 0x56
    X86_AT(c, 0xe4ed3u);
    c.r[6] = 0x56u;
    // 0e4ed8  jmp 0xe4f52
    X86_AT(c, 0xe4ed8u);
    goto L_e4f52;
L_e4edd:
    X86_TICK(c, 9);
    // 0e4edd  mov esi, 0x57
    X86_AT(c, 0xe4eddu);
    c.r[6] = 0x57u;
    // 0e4ee2  jmp 0xe4f52
    X86_AT(c, 0xe4ee2u);
    goto L_e4f52;
L_e4ee7:
    X86_TICK(c, 9);
    // 0e4ee7  mov esi, 0x58
    X86_AT(c, 0xe4ee7u);
    c.r[6] = 0x58u;
    // 0e4eec  jmp 0xe4f52
    X86_AT(c, 0xe4eecu);
    goto L_e4f52;
L_e4ef1:
    X86_TICK(c, 9);
    // 0e4ef1  mov esi, 0x59
    X86_AT(c, 0xe4ef1u);
    c.r[6] = 0x59u;
    // 0e4ef6  jmp 0xe4f52
    X86_AT(c, 0xe4ef6u);
    goto L_e4f52;
L_e4ef8:
    X86_TICK(c, 9);
    // 0e4ef8  mov esi, 0x5a
    X86_AT(c, 0xe4ef8u);
    c.r[6] = 0x5Au;
    // 0e4efd  jmp 0xe4f52
    X86_AT(c, 0xe4efdu);
    goto L_e4f52;
L_e4eff:
    X86_TICK(c, 9);
    // 0e4eff  sub esi, esi
    X86_AT(c, 0xe4effu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0e4f01  call 0xe20f4
    X86_AT(c, 0xe4f01u);
    push32(c, 0xe4f06u); f_000e20f4(c); X86_RET(c, 0xe4f06u);
    X86_TICK(c, 7);
    // 0e4f06  jmp 0xe4f40
    X86_AT(c, 0xe4f06u);
    goto L_e4f40;
L_e4f08:
    X86_TICK(c, 9);
    // 0e4f08  mov esi, 0x20
    X86_AT(c, 0xe4f08u);
    c.r[6] = 0x20u;
    // 0e4f0d  jmp 0xe4f52
    X86_AT(c, 0xe4f0du);
    goto L_e4f52;
L_e4f0f:
    X86_TICK(c, 9);
    // 0e4f0f  mov esi, 3
    X86_AT(c, 0xe4f0fu);
    c.r[6] = 0x3u;
    // 0e4f14  jmp 0xe4f52
    X86_AT(c, 0xe4f14u);
    goto L_e4f52;
L_e4f16:
    X86_TICK(c, 9);
    // 0e4f16  mov esi, 4
    X86_AT(c, 0xe4f16u);
    c.r[6] = 0x4u;
    // 0e4f1b  jmp 0xe4f52
    X86_AT(c, 0xe4f1bu);
    goto L_e4f52;
L_e4f1d:
    X86_TICK(c, 9);
    // 0e4f1d  mov esi, 1
    X86_AT(c, 0xe4f1du);
    c.r[6] = 0x1u;
    // 0e4f22  jmp 0xe4f52
    X86_AT(c, 0xe4f22u);
    goto L_e4f52;
L_e4f24:
    X86_TICK(c, 9);
    // 0e4f24  mov esi, 5
    X86_AT(c, 0xe4f24u);
    c.r[6] = 0x5u;
    // 0e4f29  jmp 0xe4f52
    X86_AT(c, 0xe4f29u);
    goto L_e4f52;
L_e4f2b:
    X86_TICK(c, 9);
    // 0e4f2b  mov esi, 6
    X86_AT(c, 0xe4f2bu);
    c.r[6] = 0x6u;
    // 0e4f30  jmp 0xe4f52
    X86_AT(c, 0xe4f30u);
    goto L_e4f52;
L_e4f32:
    X86_TICK(c, 9);
    // 0e4f32  mov esi, 7
    X86_AT(c, 0xe4f32u);
    c.r[6] = 0x7u;
    // 0e4f37  jmp 0xe4f52
    X86_AT(c, 0xe4f37u);
    goto L_e4f52;
L_e4f39:
    X86_TICK(c, 9);
    // 0e4f39  sub esi, esi
    X86_AT(c, 0xe4f39u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0e4f3b  call 0xe5378
    X86_AT(c, 0xe4f3bu);
    push32(c, 0xe4f40u); f_000e5378(c); X86_RET(c, 0xe4f40u);
L_e4f40:
    X86_TICK(c, 9);
    // 0e4f40  push edi
    X86_AT(c, 0xe4f40u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e4f41  call 0xe693c
    X86_AT(c, 0xe4f41u);
    push32(c, 0xe4f46u); f_000e693c(c); X86_RET(c, 0xe4f46u);
    X86_TICK(c, 9);
    // 0e4f46  add esp, 4
    X86_AT(c, 0xe4f46u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e4f49  jmp 0xe4f52
    X86_AT(c, 0xe4f49u);
    goto L_e4f52;
L_e4f4b:
    X86_TICK(c, 9);
    // 0e4f4b  sub esi, esi
    X86_AT(c, 0xe4f4bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0e4f4d  call 0xe53ac
    X86_AT(c, 0xe4f4du);
    push32(c, 0xe4f52u); f_000e53ac(c); X86_RET(c, 0xe4f52u);
L_e4f52:
    X86_TICK(c, 2);
    // 0e4f52  mov eax, esi
    X86_AT(c, 0xe4f52u);
    c.r[0] = c.r[6];
L_e4f54:
    X86_TICK(c, 28);
    // 0e4f54  pop edi
    X86_AT(c, 0xe4f54u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e4f55  pop esi
    X86_AT(c, 0xe4f55u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e4f56  pop ebx
    X86_AT(c, 0xe4f56u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e4f57  leave 
    X86_AT(c, 0xe4f57u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e4f58  ret 
    X86_AT(c, 0xe4f58u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4b60u, "ran off the end of a function");
}
void f_000e4f52(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0e4f52  mov eax, esi
    X86_AT(c, 0xe4f52u);
    c.r[0] = c.r[6];
    // 0e4f54  pop edi
    X86_AT(c, 0xe4f54u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e4f55  pop esi
    X86_AT(c, 0xe4f55u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e4f56  pop ebx
    X86_AT(c, 0xe4f56u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e4f57  leave 
    X86_AT(c, 0xe4f57u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e4f58  ret 
    X86_AT(c, 0xe4f58u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4f52u, "ran off the end of a function");
}
void f_000e4f5c(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0e4f5c  push ebp
    X86_AT(c, 0xe4f5cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e4f5d  mov ebp, esp
    X86_AT(c, 0xe4f5du);
    c.r[5] = c.r[4];
    // 0e4f5f  sub esp, 0x60
    X86_AT(c, 0xe4f5fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x60u, 0, 4); }
    // 0e4f62  push ebx
    X86_AT(c, 0xe4f62u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e4f63  push esi
    X86_AT(c, 0xe4f63u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e4f64  push edi
    X86_AT(c, 0xe4f64u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e4f65  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe4f65u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e4f68  push edi
    X86_AT(c, 0xe4f68u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e4f69  call 0xe693c
    X86_AT(c, 0xe4f69u);
    push32(c, 0xe4f6eu); f_000e693c(c); X86_RET(c, 0xe4f6eu);
    X86_TICK(c, 20);
    // 0e4f6e  sub eax, eax
    X86_AT(c, 0xe4f6eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e4f70  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xe4f70u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0e4f73  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xe4f73u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0e4f76  add esp, 4
    X86_AT(c, 0xe4f76u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e4f79  cmp dword ptr [ebp + 0x10], 0x50
    X86_AT(c, 0xe4f79u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0x50u, 0, 4);
    // 0e4f7d  jle 0xe4f86
    X86_AT(c, 0xe4f7du);
    if (x86_cc(c, 14)) { goto L_e4f86; }
    X86_TICK(c, 2);
    // 0e4f7f  mov dword ptr [ebp + 0x10], 0x51
    X86_AT(c, 0xe4f7fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)), 0x51u);
L_e4f86:
    X86_TICK(c, 2);
    // 0e4f86  sub esi, esi
    X86_AT(c, 0xe4f86u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_e4f88:
    X86_TICK(c, 15);
    // 0e4f88  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe4f88u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e4f8b  mov al, byte ptr [eax + esi*1]
    X86_AT(c, 0xe4f8bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6]))));
    // 0e4f8e  and al, al
    X86_AT(c, 0xe4f8eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0e4f90  je 0xe4f9e
    X86_AT(c, 0xe4f90u);
    if (x86_cc(c, 4)) { goto L_e4f9e; }
    X86_TICK(c, 11);
    // 0e4f92  cmp esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe4f92u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4);
    // 0e4f95  jge 0xe4f9e
    X86_AT(c, 0xe4f95u);
    if (x86_cc(c, 13)) { goto L_e4f9e; }
    X86_TICK(c, 11);
    // 0e4f97  mov byte ptr [ebp + esi*1 - 0x60], al
    X86_AT(c, 0xe4f97u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFFA0u)), g8(c, 0));
    // 0e4f9b  inc esi
    X86_AT(c, 0xe4f9bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e4f9c  jmp 0xe4f88
    X86_AT(c, 0xe4f9cu);
    X86_POLL(c, 0xe4f88u); goto L_e4f88;
L_e4f9e:
    X86_TICK(c, 12);
    // 0e4f9e  sub eax, eax
    X86_AT(c, 0xe4f9eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e4fa0  mov byte ptr [ebp + esi*1 - 0x60], al
    X86_AT(c, 0xe4fa0u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFFA0u)), g8(c, 0));
    // 0e4fa4  dec dword ptr [ebp + 0x10]
    X86_AT(c, 0xe4fa4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0e4fa7  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe4fa7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_e4faa:
    X86_TICK(c, 9);
    // 0e4faa  push edi
    X86_AT(c, 0xe4faau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e4fab  call 0xe4748
    X86_AT(c, 0xe4fabu);
    push32(c, 0xe4fb0u); f_000e4748(c); X86_RET(c, 0xe4fb0u);
    X86_TICK(c, 12);
    // 0e4fb0  xchg ebx, eax
    X86_AT(c, 0xe4fb0u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0e4fb1  add esp, 4
    X86_AT(c, 0xe4fb1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e4fb4  cmp bl, 1
    X86_AT(c, 0xe4fb4u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0e4fb7  jne 0xe4fcd
    X86_AT(c, 0xe4fb7u);
    if (x86_cc(c, 5)) { goto L_e4fcd; }
    X86_TICK(c, 7);
    // 0e4fb9  call 0x8b
    X86_AT(c, 0xe4fb9u);
    push32(c, 0xe4fbeu); f_0000008b(c); X86_RET(c, 0xe4fbeu);
    X86_TICK(c, 11);
    // 0e4fbe  push 0x20
    X86_AT(c, 0xe4fbeu);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0e4fc0  push edi
    X86_AT(c, 0xe4fc0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e4fc1  call 0xe6e28
    X86_AT(c, 0xe4fc1u);
    push32(c, 0xe4fc6u); f_000e6e28(c); X86_RET(c, 0xe4fc6u);
    X86_TICK(c, 9);
    // 0e4fc6  sub eax, eax
    X86_AT(c, 0xe4fc6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e4fc8  jmp 0xe505d
    X86_AT(c, 0xe4fc8u);
    goto L_e505d;
L_e4fcd:
    X86_TICK(c, 7);
    // 0e4fcd  cmp bl, 4
    X86_AT(c, 0xe4fcdu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0e4fd0  jne 0xe5005
    X86_AT(c, 0xe4fd0u);
    if (x86_cc(c, 5)) { goto L_e5005; }
    X86_TICK(c, 7);
    // 0e4fd2  call 0x8b
    X86_AT(c, 0xe4fd2u);
    push32(c, 0xe4fd7u); f_0000008b(c); X86_RET(c, 0xe4fd7u);
    X86_TICK(c, 11);
    // 0e4fd7  push 0x20
    X86_AT(c, 0xe4fd7u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0e4fd9  push edi
    X86_AT(c, 0xe4fd9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e4fda  call 0xe6e28
    X86_AT(c, 0xe4fdau);
    push32(c, 0xe4fdfu); f_000e6e28(c); X86_RET(c, 0xe4fdfu);
    X86_TICK(c, 4);
    // 0e4fdf  sub esi, esi
    X86_AT(c, 0xe4fdfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0e4fe1  add esp, 8
    X86_AT(c, 0xe4fe1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_e4fe4:
    X86_TICK(c, 11);
    // 0e4fe4  cmp esi, dword ptr [ebp - 4]
    X86_AT(c, 0xe4fe4u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4);
    // 0e4fe7  jge 0xe4ff6
    X86_AT(c, 0xe4fe7u);
    if (x86_cc(c, 13)) { goto L_e4ff6; }
    X86_TICK(c, 19);
    // 0e4fe9  mov al, byte ptr [ebp + esi*1 - 0x60]
    X86_AT(c, 0xe4fe9u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFFA0u))));
    // 0e4fed  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe4fedu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e4ff0  mov byte ptr [edx + esi*1], al
    X86_AT(c, 0xe4ff0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + c.r[6])), g8(c, 0));
    // 0e4ff3  inc esi
    X86_AT(c, 0xe4ff3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e4ff4  jmp 0xe4fe4
    X86_AT(c, 0xe4ff4u);
    X86_POLL(c, 0xe4fe4u); goto L_e4fe4;
L_e4ff6:
    X86_TICK(c, 17);
    // 0e4ff6  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe4ff6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e4ff9  mov byte ptr [eax + esi*1], 0
    X86_AT(c, 0xe4ff9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6])), 0x0u);
    // 0e4ffd  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe4ffdu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e5000  jmp 0xe50c1
    X86_AT(c, 0xe5000u);
    goto L_e50c1;
L_e5005:
    X86_TICK(c, 7);
    // 0e5005  cmp bl, 3
    X86_AT(c, 0xe5005u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0e5008  jne 0xe5046
    X86_AT(c, 0xe5008u);
    if (x86_cc(c, 5)) { goto L_e5046; }
    X86_TICK(c, 7);
    // 0e500a  call 0x8b
    X86_AT(c, 0xe500au);
    push32(c, 0xe500fu); f_0000008b(c); X86_RET(c, 0xe500fu);
    X86_TICK(c, 12);
    // 0e500f  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0xe500fu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0e5013  jle 0xe4faa
    X86_AT(c, 0xe5013u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xe4faau); goto L_e4faa; }
    X86_TICK(c, 11);
    // 0e5015  push 0x20
    X86_AT(c, 0xe5015u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0e5017  push edi
    X86_AT(c, 0xe5017u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e5018  call 0xe6e28
    X86_AT(c, 0xe5018u);
    push32(c, 0xe501du); f_000e6e28(c); X86_RET(c, 0xe501du);
    X86_TICK(c, 17);
    // 0e501d  lea eax, [ebp - 0xc]
    X86_AT(c, 0xe501du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0e5020  push eax
    X86_AT(c, 0xe5020u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e5021  lea ecx, [ebp - 8]
    X86_AT(c, 0xe5021u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0e5024  push ecx
    X86_AT(c, 0xe5024u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e5025  push edi
    X86_AT(c, 0xe5025u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e5026  call 0xe7514
    X86_AT(c, 0xe5026u);
    push32(c, 0xe502bu); f_000e7514(c); X86_RET(c, 0xe502bu);
    X86_TICK(c, 22);
    // 0e502b  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xe502bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0e502e  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xe502eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0e5031  sub eax, 2
    X86_AT(c, 0xe5031u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0e5034  push eax
    X86_AT(c, 0xe5034u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e5035  push edi
    X86_AT(c, 0xe5035u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e5036  call 0xe7260
    X86_AT(c, 0xe5036u);
    push32(c, 0xe503bu); f_000e7260(c); X86_RET(c, 0xe503bu);
    X86_TICK(c, 15);
    // 0e503b  dec dword ptr [ebp - 4]
    X86_AT(c, 0xe503bu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0e503e  add esp, 0x20
    X86_AT(c, 0xe503eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0e5041  jmp 0xe4faa
    X86_AT(c, 0xe5041u);
    X86_POLL(c, 0xe4faau); goto L_e4faa;
L_e5046:
    X86_TICK(c, 7);
    // 0e5046  cmp bl, 0x3f
    X86_AT(c, 0xe5046u);
    (void)x86_sub(c, g8(c, 3), 0x3Fu, 0, 1);
    // 0e5049  jne 0xe5062
    X86_AT(c, 0xe5049u);
    if (x86_cc(c, 5)) { goto L_e5062; }
    X86_TICK(c, 7);
    // 0e504b  call 0x8b
    X86_AT(c, 0xe504bu);
    push32(c, 0xe5050u); f_0000008b(c); X86_RET(c, 0xe5050u);
    X86_TICK(c, 11);
    // 0e5050  push 0x20
    X86_AT(c, 0xe5050u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0e5052  push edi
    X86_AT(c, 0xe5052u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e5053  call 0xe6e28
    X86_AT(c, 0xe5053u);
    push32(c, 0xe5058u); f_000e6e28(c); X86_RET(c, 0xe5058u);
    X86_TICK(c, 2);
    // 0e5058  mov eax, 0xffffffff
    X86_AT(c, 0xe5058u);
    c.r[0] = 0xFFFFFFFFu;
L_e505d:
    X86_TICK(c, 9);
    // 0e505d  add esp, 8
    X86_AT(c, 0xe505du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e5060  jmp 0xe50c1
    X86_AT(c, 0xe5060u);
    goto L_e50c1;
L_e5062:
    X86_TICK(c, 7);
    // 0e5062  cmp bl, 5
    X86_AT(c, 0xe5062u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0e5065  je 0xe5071
    X86_AT(c, 0xe5065u);
    if (x86_cc(c, 4)) { goto L_e5071; }
    X86_TICK(c, 7);
    // 0e5067  cmp bl, 6
    X86_AT(c, 0xe5067u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0e506a  je 0xe5071
    X86_AT(c, 0xe506au);
    if (x86_cc(c, 4)) { goto L_e5071; }
    X86_TICK(c, 7);
    // 0e506c  cmp bl, 7
    X86_AT(c, 0xe506cu);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0e506f  jne 0xe5080
    X86_AT(c, 0xe506fu);
    if (x86_cc(c, 5)) { goto L_e5080; }
L_e5071:
    X86_TICK(c, 9);
    // 0e5071  push 1
    X86_AT(c, 0xe5071u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e5073  call 0xe1944
    X86_AT(c, 0xe5073u);
    push32(c, 0xe5078u); f_000e1944(c); X86_RET(c, 0xe5078u);
    X86_TICK(c, 9);
    // 0e5078  add esp, 4
    X86_AT(c, 0xe5078u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e507b  jmp 0xe4faa
    X86_AT(c, 0xe507bu);
    X86_POLL(c, 0xe4faau); goto L_e4faa;
L_e5080:
    X86_TICK(c, 7);
    // 0e5080  and bl, bl
    X86_AT(c, 0xe5080u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e5082  je 0xe4faa
    X86_AT(c, 0xe5082u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xe4faau); goto L_e4faa; }
    X86_TICK(c, 15);
    // 0e5088  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe5088u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e508b  cmp eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe508bu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4);
    // 0e508e  jge 0xe4faa
    X86_AT(c, 0xe508eu);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xe4faau); goto L_e4faa; }
    X86_TICK(c, 25);
    // 0e5094  mov byte ptr [ebp + eax*1 - 0x60], bl
    X86_AT(c, 0xe5094u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFFA0u)), g8(c, 3));
    // 0e5098  inc dword ptr [ebp - 4]
    X86_AT(c, 0xe5098u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e509b  lea eax, [ebp - 0xc]
    X86_AT(c, 0xe509bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0e509e  push eax
    X86_AT(c, 0xe509eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e509f  lea ecx, [ebp - 8]
    X86_AT(c, 0xe509fu);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0e50a2  push ecx
    X86_AT(c, 0xe50a2u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e50a3  push edi
    X86_AT(c, 0xe50a3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e50a4  call 0xe7514
    X86_AT(c, 0xe50a4u);
    push32(c, 0xe50a9u); f_000e7514(c); X86_RET(c, 0xe50a9u);
    X86_TICK(c, 22);
    // 0e50a9  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xe50a9u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0e50ac  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xe50acu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0e50af  add eax, 2
    X86_AT(c, 0xe50afu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0e50b2  push eax
    X86_AT(c, 0xe50b2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e50b3  push edi
    X86_AT(c, 0xe50b3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e50b4  call 0xe7260
    X86_AT(c, 0xe50b4u);
    push32(c, 0xe50b9u); f_000e7260(c); X86_RET(c, 0xe50b9u);
    X86_TICK(c, 9);
    // 0e50b9  add esp, 0x18
    X86_AT(c, 0xe50b9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0e50bc  jmp 0xe4faa
    X86_AT(c, 0xe50bcu);
    X86_POLL(c, 0xe4faau); goto L_e4faa;
L_e50c1:
    X86_TICK(c, 28);
    // 0e50c1  pop edi
    X86_AT(c, 0xe50c1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e50c2  pop esi
    X86_AT(c, 0xe50c2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e50c3  pop ebx
    X86_AT(c, 0xe50c3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e50c4  leave 
    X86_AT(c, 0xe50c4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e50c5  ret 
    X86_AT(c, 0xe50c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4f5cu, "ran off the end of a function");
}
void f_000e4faa(X86Cpu& c) {
L_e4faa:
    X86_TICK(c, 9);
    // 0e4faa  push edi
    X86_AT(c, 0xe4faau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e4fab  call 0xe4748
    X86_AT(c, 0xe4fabu);
    push32(c, 0xe4fb0u); f_000e4748(c); X86_RET(c, 0xe4fb0u);
    X86_TICK(c, 12);
    // 0e4fb0  xchg ebx, eax
    X86_AT(c, 0xe4fb0u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0e4fb1  add esp, 4
    X86_AT(c, 0xe4fb1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e4fb4  cmp bl, 1
    X86_AT(c, 0xe4fb4u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0e4fb7  jne 0xe4fcd
    X86_AT(c, 0xe4fb7u);
    if (x86_cc(c, 5)) { goto L_e4fcd; }
    X86_TICK(c, 7);
    // 0e4fb9  call 0x8b
    X86_AT(c, 0xe4fb9u);
    push32(c, 0xe4fbeu); f_0000008b(c); X86_RET(c, 0xe4fbeu);
    X86_TICK(c, 11);
    // 0e4fbe  push 0x20
    X86_AT(c, 0xe4fbeu);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0e4fc0  push edi
    X86_AT(c, 0xe4fc0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e4fc1  call 0xe6e28
    X86_AT(c, 0xe4fc1u);
    push32(c, 0xe4fc6u); f_000e6e28(c); X86_RET(c, 0xe4fc6u);
    X86_TICK(c, 9);
    // 0e4fc6  sub eax, eax
    X86_AT(c, 0xe4fc6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e4fc8  jmp 0xe505d
    X86_AT(c, 0xe4fc8u);
    goto L_e505d;
L_e4fcd:
    X86_TICK(c, 7);
    // 0e4fcd  cmp bl, 4
    X86_AT(c, 0xe4fcdu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0e4fd0  jne 0xe5005
    X86_AT(c, 0xe4fd0u);
    if (x86_cc(c, 5)) { goto L_e5005; }
    X86_TICK(c, 7);
    // 0e4fd2  call 0x8b
    X86_AT(c, 0xe4fd2u);
    push32(c, 0xe4fd7u); f_0000008b(c); X86_RET(c, 0xe4fd7u);
    X86_TICK(c, 11);
    // 0e4fd7  push 0x20
    X86_AT(c, 0xe4fd7u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0e4fd9  push edi
    X86_AT(c, 0xe4fd9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e4fda  call 0xe6e28
    X86_AT(c, 0xe4fdau);
    push32(c, 0xe4fdfu); f_000e6e28(c); X86_RET(c, 0xe4fdfu);
    X86_TICK(c, 4);
    // 0e4fdf  sub esi, esi
    X86_AT(c, 0xe4fdfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0e4fe1  add esp, 8
    X86_AT(c, 0xe4fe1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_e4fe4:
    X86_TICK(c, 11);
    // 0e4fe4  cmp esi, dword ptr [ebp - 4]
    X86_AT(c, 0xe4fe4u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4);
    // 0e4fe7  jge 0xe4ff6
    X86_AT(c, 0xe4fe7u);
    if (x86_cc(c, 13)) { goto L_e4ff6; }
    X86_TICK(c, 19);
    // 0e4fe9  mov al, byte ptr [ebp + esi*1 - 0x60]
    X86_AT(c, 0xe4fe9u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFFA0u))));
    // 0e4fed  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe4fedu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e4ff0  mov byte ptr [edx + esi*1], al
    X86_AT(c, 0xe4ff0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + c.r[6])), g8(c, 0));
    // 0e4ff3  inc esi
    X86_AT(c, 0xe4ff3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e4ff4  jmp 0xe4fe4
    X86_AT(c, 0xe4ff4u);
    X86_POLL(c, 0xe4fe4u); goto L_e4fe4;
L_e4ff6:
    X86_TICK(c, 17);
    // 0e4ff6  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe4ff6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e4ff9  mov byte ptr [eax + esi*1], 0
    X86_AT(c, 0xe4ff9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6])), 0x0u);
    // 0e4ffd  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe4ffdu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e5000  jmp 0xe50c1
    X86_AT(c, 0xe5000u);
    goto L_e50c1;
L_e5005:
    X86_TICK(c, 7);
    // 0e5005  cmp bl, 3
    X86_AT(c, 0xe5005u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0e5008  jne 0xe5046
    X86_AT(c, 0xe5008u);
    if (x86_cc(c, 5)) { goto L_e5046; }
    X86_TICK(c, 7);
    // 0e500a  call 0x8b
    X86_AT(c, 0xe500au);
    push32(c, 0xe500fu); f_0000008b(c); X86_RET(c, 0xe500fu);
    X86_TICK(c, 12);
    // 0e500f  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0xe500fu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0e5013  jle 0xe4faa
    X86_AT(c, 0xe5013u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xe4faau); goto L_e4faa; }
    X86_TICK(c, 11);
    // 0e5015  push 0x20
    X86_AT(c, 0xe5015u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0e5017  push edi
    X86_AT(c, 0xe5017u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e5018  call 0xe6e28
    X86_AT(c, 0xe5018u);
    push32(c, 0xe501du); f_000e6e28(c); X86_RET(c, 0xe501du);
    X86_TICK(c, 17);
    // 0e501d  lea eax, [ebp - 0xc]
    X86_AT(c, 0xe501du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0e5020  push eax
    X86_AT(c, 0xe5020u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e5021  lea ecx, [ebp - 8]
    X86_AT(c, 0xe5021u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0e5024  push ecx
    X86_AT(c, 0xe5024u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e5025  push edi
    X86_AT(c, 0xe5025u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e5026  call 0xe7514
    X86_AT(c, 0xe5026u);
    push32(c, 0xe502bu); f_000e7514(c); X86_RET(c, 0xe502bu);
    X86_TICK(c, 22);
    // 0e502b  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xe502bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0e502e  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xe502eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0e5031  sub eax, 2
    X86_AT(c, 0xe5031u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0e5034  push eax
    X86_AT(c, 0xe5034u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e5035  push edi
    X86_AT(c, 0xe5035u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e5036  call 0xe7260
    X86_AT(c, 0xe5036u);
    push32(c, 0xe503bu); f_000e7260(c); X86_RET(c, 0xe503bu);
    X86_TICK(c, 15);
    // 0e503b  dec dword ptr [ebp - 4]
    X86_AT(c, 0xe503bu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0e503e  add esp, 0x20
    X86_AT(c, 0xe503eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0e5041  jmp 0xe4faa
    X86_AT(c, 0xe5041u);
    X86_POLL(c, 0xe4faau); goto L_e4faa;
L_e5046:
    X86_TICK(c, 7);
    // 0e5046  cmp bl, 0x3f
    X86_AT(c, 0xe5046u);
    (void)x86_sub(c, g8(c, 3), 0x3Fu, 0, 1);
    // 0e5049  jne 0xe5062
    X86_AT(c, 0xe5049u);
    if (x86_cc(c, 5)) { goto L_e5062; }
    X86_TICK(c, 7);
    // 0e504b  call 0x8b
    X86_AT(c, 0xe504bu);
    push32(c, 0xe5050u); f_0000008b(c); X86_RET(c, 0xe5050u);
    X86_TICK(c, 11);
    // 0e5050  push 0x20
    X86_AT(c, 0xe5050u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0e5052  push edi
    X86_AT(c, 0xe5052u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e5053  call 0xe6e28
    X86_AT(c, 0xe5053u);
    push32(c, 0xe5058u); f_000e6e28(c); X86_RET(c, 0xe5058u);
    X86_TICK(c, 2);
    // 0e5058  mov eax, 0xffffffff
    X86_AT(c, 0xe5058u);
    c.r[0] = 0xFFFFFFFFu;
L_e505d:
    X86_TICK(c, 9);
    // 0e505d  add esp, 8
    X86_AT(c, 0xe505du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e5060  jmp 0xe50c1
    X86_AT(c, 0xe5060u);
    goto L_e50c1;
L_e5062:
    X86_TICK(c, 7);
    // 0e5062  cmp bl, 5
    X86_AT(c, 0xe5062u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0e5065  je 0xe5071
    X86_AT(c, 0xe5065u);
    if (x86_cc(c, 4)) { goto L_e5071; }
    X86_TICK(c, 7);
    // 0e5067  cmp bl, 6
    X86_AT(c, 0xe5067u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0e506a  je 0xe5071
    X86_AT(c, 0xe506au);
    if (x86_cc(c, 4)) { goto L_e5071; }
    X86_TICK(c, 7);
    // 0e506c  cmp bl, 7
    X86_AT(c, 0xe506cu);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0e506f  jne 0xe5080
    X86_AT(c, 0xe506fu);
    if (x86_cc(c, 5)) { goto L_e5080; }
L_e5071:
    X86_TICK(c, 9);
    // 0e5071  push 1
    X86_AT(c, 0xe5071u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e5073  call 0xe1944
    X86_AT(c, 0xe5073u);
    push32(c, 0xe5078u); f_000e1944(c); X86_RET(c, 0xe5078u);
    X86_TICK(c, 9);
    // 0e5078  add esp, 4
    X86_AT(c, 0xe5078u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e507b  jmp 0xe4faa
    X86_AT(c, 0xe507bu);
    X86_POLL(c, 0xe4faau); goto L_e4faa;
L_e5080:
    X86_TICK(c, 7);
    // 0e5080  and bl, bl
    X86_AT(c, 0xe5080u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e5082  je 0xe4faa
    X86_AT(c, 0xe5082u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xe4faau); goto L_e4faa; }
    X86_TICK(c, 15);
    // 0e5088  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe5088u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e508b  cmp eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe508bu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4);
    // 0e508e  jge 0xe4faa
    X86_AT(c, 0xe508eu);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xe4faau); goto L_e4faa; }
    X86_TICK(c, 25);
    // 0e5094  mov byte ptr [ebp + eax*1 - 0x60], bl
    X86_AT(c, 0xe5094u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFFA0u)), g8(c, 3));
    // 0e5098  inc dword ptr [ebp - 4]
    X86_AT(c, 0xe5098u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e509b  lea eax, [ebp - 0xc]
    X86_AT(c, 0xe509bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0e509e  push eax
    X86_AT(c, 0xe509eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e509f  lea ecx, [ebp - 8]
    X86_AT(c, 0xe509fu);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0e50a2  push ecx
    X86_AT(c, 0xe50a2u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e50a3  push edi
    X86_AT(c, 0xe50a3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e50a4  call 0xe7514
    X86_AT(c, 0xe50a4u);
    push32(c, 0xe50a9u); f_000e7514(c); X86_RET(c, 0xe50a9u);
    X86_TICK(c, 22);
    // 0e50a9  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xe50a9u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0e50ac  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xe50acu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0e50af  add eax, 2
    X86_AT(c, 0xe50afu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0e50b2  push eax
    X86_AT(c, 0xe50b2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e50b3  push edi
    X86_AT(c, 0xe50b3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e50b4  call 0xe7260
    X86_AT(c, 0xe50b4u);
    push32(c, 0xe50b9u); f_000e7260(c); X86_RET(c, 0xe50b9u);
    X86_TICK(c, 9);
    // 0e50b9  add esp, 0x18
    X86_AT(c, 0xe50b9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0e50bc  jmp 0xe4faa
    X86_AT(c, 0xe50bcu);
    X86_POLL(c, 0xe4faau); goto L_e4faa;
L_e50c1:
    X86_TICK(c, 28);
    // 0e50c1  pop edi
    X86_AT(c, 0xe50c1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e50c2  pop esi
    X86_AT(c, 0xe50c2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e50c3  pop ebx
    X86_AT(c, 0xe50c3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e50c4  leave 
    X86_AT(c, 0xe50c4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e50c5  ret 
    X86_AT(c, 0xe50c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4faau, "ran off the end of a function");
}
void f_000e50c8(X86Cpu& c) {
    X86_TICK(c, 70);
    // 0e50c8  push ebp
    X86_AT(c, 0xe50c8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e50c9  mov ebp, esp
    X86_AT(c, 0xe50c9u);
    c.r[5] = c.r[4];
    // 0e50cb  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0xe50cbu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e50ce  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe50ceu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e50d1  mov dword ptr [ecx], eax
    X86_AT(c, 0xe50d1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1])), c.r[0]);
    // 0e50d3  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe50d3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e50d6  mov dword ptr [ecx + 4], eax
    X86_AT(c, 0xe50d6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0x4u)), c.r[0]);
    // 0e50d9  mov eax, dword ptr [ebp + 0x14]
    X86_AT(c, 0xe50d9u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0e50dc  mov dword ptr [ecx + 8], eax
    X86_AT(c, 0xe50dcu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0x8u)), c.r[0]);
    // 0e50df  mov eax, dword ptr [ebp + 0x1c]
    X86_AT(c, 0xe50dfu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0e50e2  mov dword ptr [ecx + 0xc], eax
    X86_AT(c, 0xe50e2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCu)), c.r[0]);
    // 0e50e5  mov eax, dword ptr [ebp + 0x20]
    X86_AT(c, 0xe50e5u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)));
    // 0e50e8  mov dword ptr [ecx + 0x10], eax
    X86_AT(c, 0xe50e8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0x10u)), c.r[0]);
    // 0e50eb  mov eax, dword ptr [ebp + 0x18]
    X86_AT(c, 0xe50ebu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0e50ee  mov dword ptr [ecx + 0x14], eax
    X86_AT(c, 0xe50eeu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0x14u)), c.r[0]);
    // 0e50f1  mov eax, dword ptr [ebp + 0x24]
    X86_AT(c, 0xe50f1u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u)));
    // 0e50f4  mov dword ptr [ecx + 0x1c], eax
    X86_AT(c, 0xe50f4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0x1Cu)), c.r[0]);
    // 0e50f7  mov dword ptr [ecx + 0x18], 0
    X86_AT(c, 0xe50f7u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0x18u)), 0x0u);
    // 0e50fe  mov eax, ecx
    X86_AT(c, 0xe50feu);
    c.r[0] = c.r[1];
    // 0e5100  leave 
    X86_AT(c, 0xe5100u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e5101  ret 
    X86_AT(c, 0xe5101u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe50c8u, "ran off the end of a function");
}
void f_000e5104(X86Cpu& c) {
    X86_TICK(c, 32);
    // 0e5104  push ebp
    X86_AT(c, 0xe5104u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e5105  mov ebp, esp
    X86_AT(c, 0xe5105u);
    c.r[5] = c.r[4];
    // 0e5107  push ebx
    X86_AT(c, 0xe5107u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e5108  push esi
    X86_AT(c, 0xe5108u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e5109  push edi
    X86_AT(c, 0xe5109u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e510a  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe510au);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e510d  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe510du);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e5110  lea eax, [esi*4]
    X86_AT(c, 0xe5110u);
    c.r[0] = (uint32_t)(c.r[6] * 4);
    // 0e5117  lea edx, [eax*8]
    X86_AT(c, 0xe5117u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0e511e  lea edx, [eax + edx*4]
    X86_AT(c, 0xe511eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0e5121  mov al, byte ptr [ebp + 0x10]
    X86_AT(c, 0xe5121u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 0e5124  mov byte ptr [edi + edx*1], al
    X86_AT(c, 0xe5124u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2])), g8(c, 0));
    // 0e5127  sub ebx, ebx
    X86_AT(c, 0xe5127u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_e5129:
    X86_TICK(c, 7);
    // 0e5129  cmp ebx, 0x40
    X86_AT(c, 0xe5129u);
    (void)x86_sub(c, c.r[3], 0x40u, 0, 4);
    // 0e512c  jge 0xe5152
    X86_AT(c, 0xe512cu);
    if (x86_cc(c, 13)) { goto L_e5152; }
    X86_TICK(c, 15);
    // 0e512e  mov eax, dword ptr [ebp + 0x14]
    X86_AT(c, 0xe512eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0e5131  mov al, byte ptr [eax + ebx*1]
    X86_AT(c, 0xe5131u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[3]))));
    // 0e5134  and al, al
    X86_AT(c, 0xe5134u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0e5136  je 0xe5152
    X86_AT(c, 0xe5136u);
    if (x86_cc(c, 4)) { goto L_e5152; }
    X86_TICK(c, 19);
    // 0e5138  lea edx, [esi*4]
    X86_AT(c, 0xe5138u);
    c.r[2] = (uint32_t)(c.r[6] * 4);
    // 0e513f  lea ecx, [edx*8]
    X86_AT(c, 0xe513fu);
    c.r[1] = (uint32_t)(c.r[2] * 8);
    // 0e5146  lea ecx, [edx + ecx*4]
    X86_AT(c, 0xe5146u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 4);
    // 0e5149  add ecx, ebx
    X86_AT(c, 0xe5149u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[3], 0, 4); }
    // 0e514b  mov byte ptr [edi + ecx*1 + 0x42], al
    X86_AT(c, 0xe514bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[1] + 0x42u)), g8(c, 0));
    // 0e514f  inc ebx
    X86_AT(c, 0xe514fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0e5150  jmp 0xe5129
    X86_AT(c, 0xe5150u);
    X86_POLL(c, 0xe5129u); goto L_e5129;
L_e5152:
    X86_TICK(c, 14);
    // 0e5152  lea eax, [esi*4]
    X86_AT(c, 0xe5152u);
    c.r[0] = (uint32_t)(c.r[6] * 4);
    // 0e5159  lea edx, [eax*8]
    X86_AT(c, 0xe5159u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0e5160  lea edx, [eax + edx*4]
    X86_AT(c, 0xe5160u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0e5163  lea eax, [ebx + edx*1]
    X86_AT(c, 0xe5163u);
    c.r[0] = (uint32_t)(c.r[3] + c.r[2]);
    // 0e5166  sub edx, edx
    X86_AT(c, 0xe5166u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e5168  mov byte ptr [edi + eax*1 + 0x42], dl
    X86_AT(c, 0xe5168u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[0] + 0x42u)), g8(c, 2));
    // 0e516c  mov ebx, edx
    X86_AT(c, 0xe516cu);
    c.r[3] = c.r[2];
L_e516e:
    X86_TICK(c, 7);
    // 0e516e  cmp ebx, 0x40
    X86_AT(c, 0xe516eu);
    (void)x86_sub(c, c.r[3], 0x40u, 0, 4);
    // 0e5171  jge 0xe5197
    X86_AT(c, 0xe5171u);
    if (x86_cc(c, 13)) { goto L_e5197; }
    X86_TICK(c, 15);
    // 0e5173  mov eax, dword ptr [ebp + 0x18]
    X86_AT(c, 0xe5173u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0e5176  mov al, byte ptr [eax + ebx*1]
    X86_AT(c, 0xe5176u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[3]))));
    // 0e5179  and al, al
    X86_AT(c, 0xe5179u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0e517b  je 0xe5197
    X86_AT(c, 0xe517bu);
    if (x86_cc(c, 4)) { goto L_e5197; }
    X86_TICK(c, 19);
    // 0e517d  lea edx, [esi*4]
    X86_AT(c, 0xe517du);
    c.r[2] = (uint32_t)(c.r[6] * 4);
    // 0e5184  lea ecx, [edx*8]
    X86_AT(c, 0xe5184u);
    c.r[1] = (uint32_t)(c.r[2] * 8);
    // 0e518b  lea ecx, [edx + ecx*4]
    X86_AT(c, 0xe518bu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 4);
    // 0e518e  add ecx, ebx
    X86_AT(c, 0xe518eu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[3], 0, 4); }
    // 0e5190  mov byte ptr [edi + ecx*1 + 1], al
    X86_AT(c, 0xe5190u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[1] + 0x1u)), g8(c, 0));
    // 0e5194  inc ebx
    X86_AT(c, 0xe5194u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0e5195  jmp 0xe516e
    X86_AT(c, 0xe5195u);
    X86_POLL(c, 0xe516eu); goto L_e516e;
L_e5197:
    X86_TICK(c, 46);
    // 0e5197  lea eax, [esi*4]
    X86_AT(c, 0xe5197u);
    c.r[0] = (uint32_t)(c.r[6] * 4);
    // 0e519e  lea edx, [eax*8]
    X86_AT(c, 0xe519eu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0e51a5  lea edx, [eax + edx*4]
    X86_AT(c, 0xe51a5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0e51a8  lea eax, [ebx + edx*1]
    X86_AT(c, 0xe51a8u);
    c.r[0] = (uint32_t)(c.r[3] + c.r[2]);
    // 0e51ab  mov byte ptr [edi + eax*1 + 1], 0
    X86_AT(c, 0xe51abu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[0] + 0x1u)), 0x0u);
    // 0e51b0  mov al, byte ptr [ebp + 0x1c]
    X86_AT(c, 0xe51b0u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu))));
    // 0e51b3  mov byte ptr [edi + edx*1 + 0x83], al
    X86_AT(c, 0xe51b3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] + 0x83u)), g8(c, 0));
    // 0e51ba  mov eax, edi
    X86_AT(c, 0xe51bau);
    c.r[0] = c.r[7];
    // 0e51bc  pop edi
    X86_AT(c, 0xe51bcu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e51bd  pop esi
    X86_AT(c, 0xe51bdu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e51be  pop ebx
    X86_AT(c, 0xe51beu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e51bf  leave 
    X86_AT(c, 0xe51bfu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e51c0  ret 
    X86_AT(c, 0xe51c0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5104u, "ran off the end of a function");
}
void f_000e51c4(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0e51c4  push ebp
    X86_AT(c, 0xe51c4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e51c5  mov ebp, esp
    X86_AT(c, 0xe51c5u);
    c.r[5] = c.r[4];
    // 0e51c7  push esi
    X86_AT(c, 0xe51c7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e51c8  push edi
    X86_AT(c, 0xe51c8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e51c9  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe51c9u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e51cc  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe51ccu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e51cf  mov eax, dword ptr [edi + 4]
    X86_AT(c, 0xe51cfu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)));
    // 0e51d2  cmp esi, eax
    X86_AT(c, 0xe51d2u);
    (void)x86_sub(c, c.r[6], c.r[0], 0, 4);
    // 0e51d4  jle 0xe51d7
    X86_AT(c, 0xe51d4u);
    if (x86_cc(c, 14)) { goto L_e51d7; }
    X86_TICK(c, 3);
    // 0e51d6  xchg esi, eax
    X86_AT(c, 0xe51d6u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_e51d7:
    X86_TICK(c, 65);
    // 0e51d7  mov eax, esi
    X86_AT(c, 0xe51d7u);
    c.r[0] = c.r[6];
    // 0e51d9  imul eax, dword ptr [edi + 0x14]
    X86_AT(c, 0xe51d9u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x14u))), 4);
    // 0e51dd  add eax, dword ptr [edi + 0x10]
    X86_AT(c, 0xe51ddu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x10u))), 0, 4); }
    // 0e51e0  push eax
    X86_AT(c, 0xe51e0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e51e1  mov edx, dword ptr [edi + 0xc]
    X86_AT(c, 0xe51e1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)));
    // 0e51e4  add edx, dword ptr [edi + 8]
    X86_AT(c, 0xe51e4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 0, 4); }
    // 0e51e7  dec edx
    X86_AT(c, 0xe51e7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0e51e8  push edx
    X86_AT(c, 0xe51e8u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e51e9  push eax
    X86_AT(c, 0xe51e9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e51ea  push dword ptr [edi + 0xc]
    X86_AT(c, 0xe51eau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))); push32(c, v); }
    // 0e51ed  push dword ptr [edi]
    X86_AT(c, 0xe51edu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7]))); push32(c, v); }
    // 0e51ef  call 0xe72ac
    X86_AT(c, 0xe51efu);
    push32(c, 0xe51f4u); f_000e72ac(c); X86_RET(c, 0xe51f4u);
    X86_TICK(c, 13);
    // 0e51f4  add esp, 0x14
    X86_AT(c, 0xe51f4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0e51f7  mov eax, dword ptr [edi + 0x18]
    X86_AT(c, 0xe51f7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)));
    // 0e51fa  cmp esi, eax
    X86_AT(c, 0xe51fau);
    (void)x86_sub(c, c.r[6], c.r[0], 0, 4);
    // 0e51fc  je 0xe521f
    X86_AT(c, 0xe51fcu);
    if (x86_cc(c, 4)) { goto L_e521f; }
    X86_TICK(c, 63);
    // 0e51fe  imul eax, dword ptr [edi + 0x14]
    X86_AT(c, 0xe51feu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x14u))), 4);
    // 0e5202  add eax, dword ptr [edi + 0x10]
    X86_AT(c, 0xe5202u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x10u))), 0, 4); }
    // 0e5205  push eax
    X86_AT(c, 0xe5205u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e5206  mov edx, dword ptr [edi + 0xc]
    X86_AT(c, 0xe5206u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)));
    // 0e5209  add edx, dword ptr [edi + 8]
    X86_AT(c, 0xe5209u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 0, 4); }
    // 0e520c  dec edx
    X86_AT(c, 0xe520cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0e520d  push edx
    X86_AT(c, 0xe520du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e520e  push eax
    X86_AT(c, 0xe520eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e520f  push dword ptr [edi + 0xc]
    X86_AT(c, 0xe520fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))); push32(c, v); }
    // 0e5212  push dword ptr [edi]
    X86_AT(c, 0xe5212u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7]))); push32(c, v); }
    // 0e5214  call 0xe72ac
    X86_AT(c, 0xe5214u);
    push32(c, 0xe5219u); f_000e72ac(c); X86_RET(c, 0xe5219u);
    X86_TICK(c, 4);
    // 0e5219  mov dword ptr [edi + 0x18], esi
    X86_AT(c, 0xe5219u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)), c.r[6]);
    // 0e521c  add esp, 0x14
    X86_AT(c, 0xe521cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_e521f:
    X86_TICK(c, 24);
    // 0e521f  pop edi
    X86_AT(c, 0xe521fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e5220  pop esi
    X86_AT(c, 0xe5220u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e5221  leave 
    X86_AT(c, 0xe5221u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e5222  ret 
    X86_AT(c, 0xe5222u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe51c4u, "ran off the end of a function");
}
void f_000e5224(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0e5224  push ebp
    X86_AT(c, 0xe5224u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e5225  mov ebp, esp
    X86_AT(c, 0xe5225u);
    c.r[5] = c.r[4];
    // 0e5227  push esi
    X86_AT(c, 0xe5227u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e5228  push edi
    X86_AT(c, 0xe5228u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e5229  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe5229u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e522c  push dword ptr [edi]
    X86_AT(c, 0xe522cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7]))); push32(c, v); }
    // 0e522e  call 0xe693c
    X86_AT(c, 0xe522eu);
    push32(c, 0xe5233u); f_000e693c(c); X86_RET(c, 0xe5233u);
    X86_TICK(c, 4);
    // 0e5233  sub esi, esi
    X86_AT(c, 0xe5233u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0e5235  add esp, 4
    X86_AT(c, 0xe5235u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e5238:
    X86_TICK(c, 11);
    // 0e5238  cmp esi, dword ptr [edi + 4]
    X86_AT(c, 0xe5238u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0, 4);
    // 0e523b  jge 0xe529d
    X86_AT(c, 0xe523bu);
    if (x86_cc(c, 13)) { goto L_e529d; }
    X86_TICK(c, 49);
    // 0e523d  mov eax, esi
    X86_AT(c, 0xe523du);
    c.r[0] = c.r[6];
    // 0e523f  imul eax, dword ptr [edi + 0x14]
    X86_AT(c, 0xe523fu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x14u))), 4);
    // 0e5243  add eax, dword ptr [edi + 0x10]
    X86_AT(c, 0xe5243u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x10u))), 0, 4); }
    // 0e5246  push eax
    X86_AT(c, 0xe5246u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e5247  push dword ptr [edi + 0xc]
    X86_AT(c, 0xe5247u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))); push32(c, v); }
    // 0e524a  push dword ptr [edi]
    X86_AT(c, 0xe524au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7]))); push32(c, v); }
    // 0e524c  call 0xe7260
    X86_AT(c, 0xe524cu);
    push32(c, 0xe5251u); f_000e7260(c); X86_RET(c, 0xe5251u);
    X86_TICK(c, 14);
    // 0e5251  add esp, 0xc
    X86_AT(c, 0xe5251u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e5254  cmp dword ptr [0x7a6b4], 0
    X86_AT(c, 0xe5254u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x7A6B4u))), 0x0u, 0, 4);
    // 0e525b  jne 0xe5277
    X86_AT(c, 0xe525bu);
    if (x86_cc(c, 5)) { goto L_e5277; }
    X86_TICK(c, 19);
    // 0e525d  lea eax, [esi*4]
    X86_AT(c, 0xe525du);
    c.r[0] = (uint32_t)(c.r[6] * 4);
    // 0e5264  lea edx, [eax*8]
    X86_AT(c, 0xe5264u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0e526b  lea edx, [eax + edx*4]
    X86_AT(c, 0xe526bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0e526e  mov eax, dword ptr [edi + 0x1c]
    X86_AT(c, 0xe526eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)));
    // 0e5271  lea eax, [eax + edx*1 + 1]
    X86_AT(c, 0xe5271u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] + 0x1u);
    // 0e5275  jmp 0xe528f
    X86_AT(c, 0xe5275u);
    goto L_e528f;
L_e5277:
    X86_TICK(c, 12);
    // 0e5277  lea eax, [esi*4]
    X86_AT(c, 0xe5277u);
    c.r[0] = (uint32_t)(c.r[6] * 4);
    // 0e527e  lea edx, [eax*8]
    X86_AT(c, 0xe527eu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0e5285  lea edx, [eax + edx*4]
    X86_AT(c, 0xe5285u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0e5288  mov eax, dword ptr [edi + 0x1c]
    X86_AT(c, 0xe5288u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)));
    // 0e528b  lea eax, [eax + edx*1 + 0x42]
    X86_AT(c, 0xe528bu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] + 0x42u);
L_e528f:
    X86_TICK(c, 14);
    // 0e528f  push eax
    X86_AT(c, 0xe528fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e5290  push dword ptr [edi]
    X86_AT(c, 0xe5290u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7]))); push32(c, v); }
    // 0e5292  call 0xe6cb0
    X86_AT(c, 0xe5292u);
    push32(c, 0xe5297u); f_000e6cb0(c); X86_RET(c, 0xe5297u);
    X86_TICK(c, 11);
    // 0e5297  add esp, 8
    X86_AT(c, 0xe5297u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e529a  inc esi
    X86_AT(c, 0xe529au);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e529b  jmp 0xe5238
    X86_AT(c, 0xe529bu);
    X86_POLL(c, 0xe5238u); goto L_e5238;
L_e529d:
    X86_TICK(c, 26);
    // 0e529d  mov dword ptr [edi + 0x18], 0
    X86_AT(c, 0xe529du);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)), 0x0u);
    // 0e52a4  pop edi
    X86_AT(c, 0xe52a4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e52a5  pop esi
    X86_AT(c, 0xe52a5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e52a6  leave 
    X86_AT(c, 0xe52a6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e52a7  ret 
    X86_AT(c, 0xe52a7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5224u, "ran off the end of a function");
}
void f_000e52a8(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0e52a8  push ebp
    X86_AT(c, 0xe52a8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e52a9  mov ebp, esp
    X86_AT(c, 0xe52a9u);
    c.r[5] = c.r[4];
    // 0e52ab  push esi
    X86_AT(c, 0xe52abu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e52ac  push edi
    X86_AT(c, 0xe52acu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e52ad  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe52adu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e52b0  push dword ptr [edi]
    X86_AT(c, 0xe52b0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7]))); push32(c, v); }
    // 0e52b2  call 0xe693c
    X86_AT(c, 0xe52b2u);
    push32(c, 0xe52b7u); f_000e693c(c); X86_RET(c, 0xe52b7u);
    X86_TICK(c, 4);
    // 0e52b7  sub esi, esi
    X86_AT(c, 0xe52b7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0e52b9  add esp, 4
    X86_AT(c, 0xe52b9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e52bc:
    X86_TICK(c, 11);
    // 0e52bc  cmp esi, dword ptr [edi + 4]
    X86_AT(c, 0xe52bcu);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0, 4);
    // 0e52bf  jge 0xe5321
    X86_AT(c, 0xe52bfu);
    if (x86_cc(c, 13)) { goto L_e5321; }
    X86_TICK(c, 49);
    // 0e52c1  mov eax, esi
    X86_AT(c, 0xe52c1u);
    c.r[0] = c.r[6];
    // 0e52c3  imul eax, dword ptr [edi + 0x14]
    X86_AT(c, 0xe52c3u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x14u))), 4);
    // 0e52c7  add eax, dword ptr [edi + 0x10]
    X86_AT(c, 0xe52c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x10u))), 0, 4); }
    // 0e52ca  push eax
    X86_AT(c, 0xe52cau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e52cb  push dword ptr [edi + 0xc]
    X86_AT(c, 0xe52cbu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))); push32(c, v); }
    // 0e52ce  push dword ptr [edi]
    X86_AT(c, 0xe52ceu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7]))); push32(c, v); }
    // 0e52d0  call 0xe7260
    X86_AT(c, 0xe52d0u);
    push32(c, 0xe52d5u); f_000e7260(c); X86_RET(c, 0xe52d5u);
    X86_TICK(c, 14);
    // 0e52d5  add esp, 0xc
    X86_AT(c, 0xe52d5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e52d8  cmp dword ptr [0x7a6b4], 0
    X86_AT(c, 0xe52d8u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x7A6B4u))), 0x0u, 0, 4);
    // 0e52df  jne 0xe52fb
    X86_AT(c, 0xe52dfu);
    if (x86_cc(c, 5)) { goto L_e52fb; }
    X86_TICK(c, 19);
    // 0e52e1  lea eax, [esi*4]
    X86_AT(c, 0xe52e1u);
    c.r[0] = (uint32_t)(c.r[6] * 4);
    // 0e52e8  lea edx, [eax*8]
    X86_AT(c, 0xe52e8u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0e52ef  lea edx, [eax + edx*4]
    X86_AT(c, 0xe52efu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0e52f2  mov eax, dword ptr [edi + 0x1c]
    X86_AT(c, 0xe52f2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)));
    // 0e52f5  lea eax, [eax + edx*1 + 1]
    X86_AT(c, 0xe52f5u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] + 0x1u);
    // 0e52f9  jmp 0xe5313
    X86_AT(c, 0xe52f9u);
    goto L_e5313;
L_e52fb:
    X86_TICK(c, 12);
    // 0e52fb  lea eax, [esi*4]
    X86_AT(c, 0xe52fbu);
    c.r[0] = (uint32_t)(c.r[6] * 4);
    // 0e5302  lea edx, [eax*8]
    X86_AT(c, 0xe5302u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0e5309  lea edx, [eax + edx*4]
    X86_AT(c, 0xe5309u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0e530c  mov eax, dword ptr [edi + 0x1c]
    X86_AT(c, 0xe530cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)));
    // 0e530f  lea eax, [eax + edx*1 + 0x42]
    X86_AT(c, 0xe530fu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] + 0x42u);
L_e5313:
    X86_TICK(c, 14);
    // 0e5313  push eax
    X86_AT(c, 0xe5313u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e5314  push dword ptr [edi]
    X86_AT(c, 0xe5314u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7]))); push32(c, v); }
    // 0e5316  call 0xe70ec
    X86_AT(c, 0xe5316u);
    push32(c, 0xe531bu); f_000e70ec(c); X86_RET(c, 0xe531bu);
    X86_TICK(c, 11);
    // 0e531b  add esp, 8
    X86_AT(c, 0xe531bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e531e  inc esi
    X86_AT(c, 0xe531eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e531f  jmp 0xe52bc
    X86_AT(c, 0xe531fu);
    X86_POLL(c, 0xe52bcu); goto L_e52bc;
L_e5321:
    X86_TICK(c, 26);
    // 0e5321  mov dword ptr [edi + 0x18], 0
    X86_AT(c, 0xe5321u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)), 0x0u);
    // 0e5328  pop edi
    X86_AT(c, 0xe5328u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e5329  pop esi
    X86_AT(c, 0xe5329u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e532a  leave 
    X86_AT(c, 0xe532au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e532b  ret 
    X86_AT(c, 0xe532bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe52a8u, "ran off the end of a function");
}
void f_000e532c(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0e532c  push ebp
    X86_AT(c, 0xe532cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e532d  mov ebp, esp
    X86_AT(c, 0xe532du);
    c.r[5] = c.r[4];
    // 0e532f  push ebx
    X86_AT(c, 0xe532fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e5330  push esi
    X86_AT(c, 0xe5330u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e5331  push edi
    X86_AT(c, 0xe5331u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e5332  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe5332u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e5335  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe5335u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e5338  sub ebx, ebx
    X86_AT(c, 0xe5338u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_e533a:
    X86_TICK(c, 11);
    // 0e533a  cmp ebx, dword ptr [edi + 4]
    X86_AT(c, 0xe533au);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0, 4);
    // 0e533d  jge 0xe536b
    X86_AT(c, 0xe533du);
    if (x86_cc(c, 13)) { goto L_e536b; }
    X86_TICK(c, 25);
    // 0e533f  lea eax, [ebx*4]
    X86_AT(c, 0xe533fu);
    c.r[0] = (uint32_t)(c.r[3] * 4);
    // 0e5346  lea edx, [eax*8]
    X86_AT(c, 0xe5346u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0e534d  lea edx, [eax + edx*4]
    X86_AT(c, 0xe534du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0e5350  mov eax, dword ptr [edi + 0x1c]
    X86_AT(c, 0xe5350u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)));
    // 0e5353  mov cl, byte ptr [eax + edx*1]
    X86_AT(c, 0xe5353u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2]))));
    // 0e5356  cmp cl, byte ptr [ebp + 0xc]
    X86_AT(c, 0xe5356u);
    (void)x86_sub(c, g8(c, 1), rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 1);
    // 0e5359  jne 0xe5368
    X86_AT(c, 0xe5359u);
    if (x86_cc(c, 5)) { goto L_e5368; }
    X86_TICK(c, 15);
    // 0e535b  mov al, byte ptr [eax + edx*1 + 0x83]
    X86_AT(c, 0xe535bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x83u))));
    // 0e5362  mov byte ptr [esi], al
    X86_AT(c, 0xe5362u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), g8(c, 0));
    // 0e5364  mov eax, ebx
    X86_AT(c, 0xe5364u);
    c.r[0] = c.r[3];
    // 0e5366  jmp 0xe5373
    X86_AT(c, 0xe5366u);
    goto L_e5373;
L_e5368:
    X86_TICK(c, 9);
    // 0e5368  inc ebx
    X86_AT(c, 0xe5368u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0e5369  jmp 0xe533a
    X86_AT(c, 0xe5369u);
    X86_POLL(c, 0xe533au); goto L_e533a;
L_e536b:
    X86_TICK(c, 4);
    // 0e536b  mov byte ptr [esi], 0xff
    X86_AT(c, 0xe536bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), 0xFFu);
    // 0e536e  mov eax, 0xffffffff
    X86_AT(c, 0xe536eu);
    c.r[0] = 0xFFFFFFFFu;
L_e5373:
    X86_TICK(c, 28);
    // 0e5373  pop edi
    X86_AT(c, 0xe5373u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e5374  pop esi
    X86_AT(c, 0xe5374u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e5375  pop ebx
    X86_AT(c, 0xe5375u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e5376  leave 
    X86_AT(c, 0xe5376u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e5377  ret 
    X86_AT(c, 0xe5377u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe532cu, "ran off the end of a function");
}
void f_000e5378(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0e5378  cmp dword ptr [0x7a6b4], 0
    X86_AT(c, 0xe5378u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x7A6B4u))), 0x0u, 0, 4);
    // 0e537f  jne 0xe5397
    X86_AT(c, 0xe537fu);
    if (x86_cc(c, 5)) { goto L_e5397; }
    X86_TICK(c, 11);
    // 0e5381  mov dword ptr [0x7a6b4], 0xffffffff
    X86_AT(c, 0xe5381u);
    wr32((c.sbase[3] + (uint32_t)(0x7A6B4u)), 0xFFFFFFFFu);
    // 0e538b  mov dword ptr [0x7b374], 0x7b274
    X86_AT(c, 0xe538bu);
    wr32((c.sbase[3] + (uint32_t)(0x7B374u)), 0x7B274u);
    // 0e5395  jmp 0xe53ab
    X86_AT(c, 0xe5395u);
    goto L_e53ab;
L_e5397:
    X86_TICK(c, 4);
    // 0e5397  mov dword ptr [0x7a6b4], 0
    X86_AT(c, 0xe5397u);
    wr32((c.sbase[3] + (uint32_t)(0x7A6B4u)), 0x0u);
    // 0e53a1  mov dword ptr [0x7b374], 0x7b2f4
    X86_AT(c, 0xe53a1u);
    wr32((c.sbase[3] + (uint32_t)(0x7B374u)), 0x7B2F4u);
L_e53ab:
    X86_TICK(c, 10);
    // 0e53ab  ret 
    X86_AT(c, 0xe53abu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5378u, "ran off the end of a function");
}
void f_000e53ac(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0e53ac  cmp dword ptr [0x7a7cc], 0xffffffff
    X86_AT(c, 0xe53acu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x7A7CCu))), 0xFFFFFFFFu, 0, 4);
    // 0e53b3  je 0xe53c8
    X86_AT(c, 0xe53b3u);
    if (x86_cc(c, 4)) { goto L_e53c8; }
    X86_TICK(c, 9);
    // 0e53b5  push 1
    X86_AT(c, 0xe53b5u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e53b7  call 0x69
    X86_AT(c, 0xe53b7u);
    push32(c, 0xe53bcu); f_00000069(c); X86_RET(c, 0xe53bcu);
    X86_TICK(c, 9);
    // 0e53bc  mov dword ptr [0x7a7cc], 0xffffffff
    X86_AT(c, 0xe53bcu);
    wr32((c.sbase[3] + (uint32_t)(0x7A7CCu)), 0xFFFFFFFFu);
    // 0e53c6  jmp 0xe53d9
    X86_AT(c, 0xe53c6u);
    goto L_e53d9;
L_e53c8:
    X86_TICK(c, 9);
    // 0e53c8  push 0
    X86_AT(c, 0xe53c8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e53ca  call 0x69
    X86_AT(c, 0xe53cau);
    push32(c, 0xe53cfu); f_00000069(c); X86_RET(c, 0xe53cfu);
    X86_TICK(c, 2);
    // 0e53cf  mov dword ptr [0x7a7cc], 1
    X86_AT(c, 0xe53cfu);
    wr32((c.sbase[3] + (uint32_t)(0x7A7CCu)), 0x1u);
L_e53d9:
    X86_TICK(c, 12);
    // 0e53d9  add esp, 4
    X86_AT(c, 0xe53d9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e53dc  ret 
    X86_AT(c, 0xe53dcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe53acu, "ran off the end of a function");
}
void f_000e53e0(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0e53e0  push ebp
    X86_AT(c, 0xe53e0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e53e1  mov ebp, esp
    X86_AT(c, 0xe53e1u);
    c.r[5] = c.r[4];
    // 0e53e3  push esi
    X86_AT(c, 0xe53e3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e53e4  push edi
    X86_AT(c, 0xe53e4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e53e5  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe53e5u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e53e8  mov esi, dword ptr [ebp + 0x14]
    X86_AT(c, 0xe53e8u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0e53eb  sub ecx, ecx
    X86_AT(c, 0xe53ebu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
L_e53ed:
    X86_TICK(c, 11);
    // 0e53ed  cmp ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe53edu);
    (void)x86_sub(c, c.r[1], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4);
    // 0e53f0  jge 0xe543d
    X86_AT(c, 0xe53f0u);
    if (x86_cc(c, 13)) { goto L_e543d; }
    X86_TICK(c, 21);
    // 0e53f2  lea eax, [ecx*4]
    X86_AT(c, 0xe53f2u);
    c.r[0] = (uint32_t)(c.r[1] * 4);
    // 0e53f9  lea edx, [eax*8]
    X86_AT(c, 0xe53f9u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0e5400  lea edx, [eax + edx*4]
    X86_AT(c, 0xe5400u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0e5403  mov al, byte ptr [edi + edx*1]
    X86_AT(c, 0xe5403u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2]))));
    // 0e5406  cmp al, byte ptr [ebp + 0x10]
    X86_AT(c, 0xe5406u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 1);
    // 0e5409  jne 0xe543a
    X86_AT(c, 0xe5409u);
    if (x86_cc(c, 5)) { goto L_e543a; }
    X86_TICK(c, 18);
    // 0e540b  mov al, byte ptr [edi + edx*1 + 0x83]
    X86_AT(c, 0xe540bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] + 0x83u))));
    // 0e5412  mov byte ptr [esi], al
    X86_AT(c, 0xe5412u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), g8(c, 0));
    // 0e5414  cmp dword ptr [0x7a6b4], 0
    X86_AT(c, 0xe5414u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x7A6B4u))), 0x0u, 0, 4);
    // 0e541b  jne 0xe5423
    X86_AT(c, 0xe541bu);
    if (x86_cc(c, 5)) { goto L_e5423; }
    X86_TICK(c, 9);
    // 0e541d  lea eax, [edi + edx*1 + 1]
    X86_AT(c, 0xe541du);
    c.r[0] = (uint32_t)(c.r[7] + c.r[2] + 0x1u);
    // 0e5421  jmp 0xe5442
    X86_AT(c, 0xe5421u);
    goto L_e5442;
L_e5423:
    X86_TICK(c, 15);
    // 0e5423  lea eax, [ecx*4]
    X86_AT(c, 0xe5423u);
    c.r[0] = (uint32_t)(c.r[1] * 4);
    // 0e542a  lea edx, [eax*8]
    X86_AT(c, 0xe542au);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0e5431  lea edx, [eax + edx*4]
    X86_AT(c, 0xe5431u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0e5434  lea eax, [edi + edx*1 + 0x42]
    X86_AT(c, 0xe5434u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[2] + 0x42u);
    // 0e5438  jmp 0xe5442
    X86_AT(c, 0xe5438u);
    goto L_e5442;
L_e543a:
    X86_TICK(c, 9);
    // 0e543a  inc ecx
    X86_AT(c, 0xe543au);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0e543b  jmp 0xe53ed
    X86_AT(c, 0xe543bu);
    X86_POLL(c, 0xe53edu); goto L_e53ed;
L_e543d:
    X86_TICK(c, 4);
    // 0e543d  mov byte ptr [esi], 0xff
    X86_AT(c, 0xe543du);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), 0xFFu);
    // 0e5440  sub eax, eax
    X86_AT(c, 0xe5440u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_e5442:
    X86_TICK(c, 24);
    // 0e5442  pop edi
    X86_AT(c, 0xe5442u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e5443  pop esi
    X86_AT(c, 0xe5443u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e5444  leave 
    X86_AT(c, 0xe5444u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e5445  ret 
    X86_AT(c, 0xe5445u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe53e0u, "ran off the end of a function");
}
void f_000e5448(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0e5448  push ebp
    X86_AT(c, 0xe5448u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e5449  mov ebp, esp
    X86_AT(c, 0xe5449u);
    c.r[5] = c.r[4];
    // 0e544b  sub esp, 8
    X86_AT(c, 0xe544bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0e544e  push ebx
    X86_AT(c, 0xe544eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e544f  push esi
    X86_AT(c, 0xe544fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e5450  push edi
    X86_AT(c, 0xe5450u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e5451  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe5451u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e5454  push edi
    X86_AT(c, 0xe5454u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e5455  call 0xe5224
    X86_AT(c, 0xe5455u);
    push32(c, 0xe545au); f_000e5224(c); X86_RET(c, 0xe545au);
    X86_TICK(c, 9);
    // 0e545a  sub ebx, ebx
    X86_AT(c, 0xe545au);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0e545c  call 0xe4324
    X86_AT(c, 0xe545cu);
    push32(c, 0xe5461u); f_000e4324(c); X86_RET(c, 0xe5461u);
    X86_TICK(c, 17);
    // 0e5461  sub ebx, ebx
    X86_AT(c, 0xe5461u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0e5463  mov dword ptr [ebp - 4], ebx
    X86_AT(c, 0xe5463u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[3]);
    // 0e5466  mov esi, ebx
    X86_AT(c, 0xe5466u);
    c.r[6] = c.r[3];
    // 0e5468  push esi
    X86_AT(c, 0xe5468u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e5469  push edi
    X86_AT(c, 0xe5469u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e546a  call 0xe51c4
    X86_AT(c, 0xe546au);
    push32(c, 0xe546fu); f_000e51c4(c); X86_RET(c, 0xe546fu);
    X86_TICK(c, 2);
    // 0e546f  add esp, 0xc
    X86_AT(c, 0xe546fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_e5472:
    X86_TICK(c, 12);
    // 0e5472  push dword ptr [ebp + 8]
    X86_AT(c, 0xe5472u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e5475  call 0xe4b60
    X86_AT(c, 0xe5475u);
    push32(c, 0xe547au); f_000e4b60(c); X86_RET(c, 0xe547au);
    X86_TICK(c, 12);
    // 0e547a  xchg ebx, eax
    X86_AT(c, 0xe547au);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0e547b  add esp, 4
    X86_AT(c, 0xe547bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e547e  and bl, bl
    X86_AT(c, 0xe547eu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e5480  je 0xe5472
    X86_AT(c, 0xe5480u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xe5472u); goto L_e5472; }
    X86_TICK(c, 7);
    // 0e5482  cmp bl, 4
    X86_AT(c, 0xe5482u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0e5485  je 0xe5508
    X86_AT(c, 0xe5485u);
    if (x86_cc(c, 4)) { goto L_e5508; }
    X86_TICK(c, 7);
    // 0e548b  cmp bl, 5
    X86_AT(c, 0xe548bu);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0e548e  jne 0xe549b
    X86_AT(c, 0xe548eu);
    if (x86_cc(c, 5)) { goto L_e549b; }
    X86_TICK(c, 9);
    // 0e5490  dec esi
    X86_AT(c, 0xe5490u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0e5491  and esi, esi
    X86_AT(c, 0xe5491u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e5493  jge 0xe54a8
    X86_AT(c, 0xe5493u);
    if (x86_cc(c, 13)) { goto L_e54a8; }
    X86_TICK(c, 13);
    // 0e5495  mov esi, dword ptr [edi + 4]
    X86_AT(c, 0xe5495u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)));
    // 0e5498  dec esi
    X86_AT(c, 0xe5498u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0e5499  jmp 0xe54a8
    X86_AT(c, 0xe5499u);
    goto L_e54a8;
L_e549b:
    X86_TICK(c, 7);
    // 0e549b  cmp bl, 6
    X86_AT(c, 0xe549bu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0e549e  jne 0xe54b4
    X86_AT(c, 0xe549eu);
    if (x86_cc(c, 5)) { goto L_e54b4; }
    X86_TICK(c, 13);
    // 0e54a0  inc esi
    X86_AT(c, 0xe54a0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e54a1  cmp esi, dword ptr [edi + 4]
    X86_AT(c, 0xe54a1u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0, 4);
    // 0e54a4  jl 0xe54a8
    X86_AT(c, 0xe54a4u);
    if (x86_cc(c, 12)) { goto L_e54a8; }
    X86_TICK(c, 2);
    // 0e54a6  sub esi, esi
    X86_AT(c, 0xe54a6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_e54a8:
    X86_TICK(c, 11);
    // 0e54a8  push esi
    X86_AT(c, 0xe54a8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e54a9  push edi
    X86_AT(c, 0xe54a9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e54aa  call 0xe51c4
    X86_AT(c, 0xe54aau);
    push32(c, 0xe54afu); f_000e51c4(c); X86_RET(c, 0xe54afu);
    X86_TICK(c, 9);
    // 0e54af  add esp, 8
    X86_AT(c, 0xe54afu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e54b2  jmp 0xe5472
    X86_AT(c, 0xe54b2u);
    X86_POLL(c, 0xe5472u); goto L_e5472;
L_e54b4:
    X86_TICK(c, 7);
    // 0e54b4  cmp bl, 1
    X86_AT(c, 0xe54b4u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0e54b7  jne 0xe54e3
    X86_AT(c, 0xe54b7u);
    if (x86_cc(c, 5)) { goto L_e54e3; }
    X86_TICK(c, 18);
    // 0e54b9  lea eax, [ebp - 5]
    X86_AT(c, 0xe54b9u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 0e54bc  push eax
    X86_AT(c, 0xe54bcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e54bd  push dword ptr [ebp + 0x10]
    X86_AT(c, 0xe54bdu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 0e54c0  push edi
    X86_AT(c, 0xe54c0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e54c1  call 0xe532c
    X86_AT(c, 0xe54c1u);
    push32(c, 0xe54c6u); f_000e532c(c); X86_RET(c, 0xe54c6u);
    X86_TICK(c, 11);
    // 0e54c6  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe54c6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e54c9  add esp, 0xc
    X86_AT(c, 0xe54c9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e54cc  inc eax
    X86_AT(c, 0xe54ccu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0e54cd  jne 0xe54de
    X86_AT(c, 0xe54cdu);
    if (x86_cc(c, 5)) { goto L_e54de; }
    X86_TICK(c, 11);
    // 0e54cf  push esi
    X86_AT(c, 0xe54cfu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e54d0  push edi
    X86_AT(c, 0xe54d0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e54d1  call 0xe51c4
    X86_AT(c, 0xe54d1u);
    push32(c, 0xe54d6u); f_000e51c4(c); X86_RET(c, 0xe54d6u);
    X86_TICK(c, 13);
    // 0e54d6  mov al, byte ptr [ebp + 0x10]
    X86_AT(c, 0xe54d6u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 0e54d9  add esp, 8
    X86_AT(c, 0xe54d9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e54dc  jmp 0xe5534
    X86_AT(c, 0xe54dcu);
    goto L_e5534;
L_e54de:
    X86_TICK(c, 11);
    // 0e54de  mov esi, dword ptr [ebp - 4]
    X86_AT(c, 0xe54deu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e54e1  jmp 0xe54fe
    X86_AT(c, 0xe54e1u);
    goto L_e54fe;
L_e54e3:
    X86_TICK(c, 15);
    // 0e54e3  lea eax, [ebp - 5]
    X86_AT(c, 0xe54e3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 0e54e6  push eax
    X86_AT(c, 0xe54e6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e54e7  push ebx
    X86_AT(c, 0xe54e7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e54e8  push edi
    X86_AT(c, 0xe54e8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e54e9  call 0xe532c
    X86_AT(c, 0xe54e9u);
    push32(c, 0xe54eeu); f_000e532c(c); X86_RET(c, 0xe54eeu);
    X86_TICK(c, 11);
    // 0e54ee  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe54eeu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e54f1  add esp, 0xc
    X86_AT(c, 0xe54f1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e54f4  cmp eax, 0xffffffff
    X86_AT(c, 0xe54f4u);
    (void)x86_sub(c, c.r[0], 0xFFFFFFFFu, 0, 4);
    // 0e54f7  je 0xe5472
    X86_AT(c, 0xe54f7u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xe5472u); goto L_e5472; }
    X86_TICK(c, 3);
    // 0e54fd  xchg esi, eax
    X86_AT(c, 0xe54fdu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_e54fe:
    X86_TICK(c, 11);
    // 0e54fe  push esi
    X86_AT(c, 0xe54feu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e54ff  push edi
    X86_AT(c, 0xe54ffu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e5500  call 0xe51c4
    X86_AT(c, 0xe5500u);
    push32(c, 0xe5505u); f_000e51c4(c); X86_RET(c, 0xe5505u);
    X86_TICK(c, 2);
    // 0e5505  add esp, 8
    X86_AT(c, 0xe5505u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_e5508:
    X86_TICK(c, 9);
    // 0e5508  push 2
    X86_AT(c, 0xe5508u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e550a  call 0xe9740
    X86_AT(c, 0xe550au);
    push32(c, 0xe550fu); f_000e9740(c); X86_RET(c, 0xe550fu);
    X86_TICK(c, 11);
    // 0e550f  push esi
    X86_AT(c, 0xe550fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e5510  push edi
    X86_AT(c, 0xe5510u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e5511  call 0xe51c4
    X86_AT(c, 0xe5511u);
    push32(c, 0xe5516u); f_000e51c4(c); X86_RET(c, 0xe5516u);
    X86_TICK(c, 16);
    // 0e5516  lea eax, [esi*4]
    X86_AT(c, 0xe5516u);
    c.r[0] = (uint32_t)(c.r[6] * 4);
    // 0e551d  lea edx, [eax*8]
    X86_AT(c, 0xe551du);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0e5524  lea edx, [eax + edx*4]
    X86_AT(c, 0xe5524u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0e5527  mov eax, dword ptr [edi + 0x1c]
    X86_AT(c, 0xe5527u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)));
    // 0e552a  mov al, byte ptr [eax + edx*1 + 0x83]
    X86_AT(c, 0xe552au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x83u))));
    // 0e5531  add esp, 0xc
    X86_AT(c, 0xe5531u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_e5534:
    X86_TICK(c, 28);
    // 0e5534  pop edi
    X86_AT(c, 0xe5534u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e5535  pop esi
    X86_AT(c, 0xe5535u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e5536  pop ebx
    X86_AT(c, 0xe5536u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e5537  leave 
    X86_AT(c, 0xe5537u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e5538  ret 
    X86_AT(c, 0xe5538u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5448u, "ran off the end of a function");
}
}
