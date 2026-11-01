/* a13_udiv_var: unsigned division by a runtime value. Unsigned needs no sign
 * extension, so the cdq prefix that marks the signed form should be absent.
 * Pairs with a10 to separate the two code paths. */
unsigned f(unsigned a, unsigned b) {
	return a / b;
}
