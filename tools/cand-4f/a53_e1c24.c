/* a53_e1c24: the same shape as 0xe1bf4 with the fields at +0x3c.
 *
 * Target 0xe1c24 is 46 bytes, classed base-fold for the same reason, and is recorded as
 * the direct twin of 0xe1bf4. If one matches under the disp32 standard the other should
 * match identically, so this is also a consistency check on the attempt. */
struct S {
	char pad[0x3c];
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
