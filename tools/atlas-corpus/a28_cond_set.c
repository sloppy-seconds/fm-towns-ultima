/* a28_cond_set: a relational operator used as a value. Whether the compiler
 * emits a branch or a setcc-and-zero pair is a habit, and the two look very
 * different in a byte diff. */
int f(int a, int b) {
	return a < b;
}
