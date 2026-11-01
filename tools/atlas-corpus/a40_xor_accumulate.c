/* a40_xor_accumulate: xor used to clear a flag register inside a loop, the shape
 * that would make `xor reg,reg` a compiler idiom rather than an authored one. A33
 * tested `a ^= a` on a parameter and still got `sub`. This tests the other place
 * real code zeroes a register: repeatedly, as an accumulator. */
int f(int *a, int n) {
	int i;
	int acc;
	i = 0;
	acc = 0;
	while (i < n) {
		if (a[i] < 0)
			acc ^= 0xff;
		i++;
	}
	return acc;
}
