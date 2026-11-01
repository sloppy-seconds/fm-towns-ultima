/* a19_struct_field: writes to fields at fixed offsets through a pointer.
 * Constant-displacement stores, and which base register survives. */
struct S {
	int a;
	int b;
	int c;
	int d;
};

void f(struct S *p, int v) {
	p->a = v;
	p->b = v + 1;
	p->c = v + 2;
	p->d = v + 3;
}
