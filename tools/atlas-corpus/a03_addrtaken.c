/* a03_addrtaken: the address of a local is taken, so the local must have
 * storage. This is the shape that was measured to force a frame. */
int f(int a) {
	int x;
	int *p;
	x = a;
	p = &x;
	*p = *p + 3;
	return *p;
}
