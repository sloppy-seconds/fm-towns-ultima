/* a52_e1bf4: six ints into a fixed struct at the absolute address 0xe3f4, fields at
 * +0x24 onward.
 *
 * Target 0xe1bf4 is 46 bytes and classed base-fold: it begins `mov eax,0xe3f4`, so the
 * four bytes of that displacement are a linker relocation and cannot agree in a
 * standalone build. Under the equivalence rule those bytes are exempt, which is the
 * standard this attempt is measured against. */
struct S {
	char pad[0x24];
	int f0, f1, f2, f3, f4, f5;
};

void f(int a, int b, int c, int d, int e, int g) {
	struct S *p = (struct S *)0xe3f4;
	p->f0 = a;
	p->f1 = b;
	p->f2 = c;
	p->f3 = d;
	p->f4 = e;
	p->f5 = g;
}
