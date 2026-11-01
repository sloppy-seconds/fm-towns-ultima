/* a06_recursive: a self call. Recursion cannot be register-allocated away, so
 * this is the cleanest forced-frame case. */
int f(int n) {
	if (n <= 1)
		return 1;
	return n * f(n - 1);
}
