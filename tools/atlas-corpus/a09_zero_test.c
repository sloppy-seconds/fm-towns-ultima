/* a09_zero_test: comparison against zero and a zero return value. Tests the
 * test-against-zero habit (test vs cmp vs sub) and how a false result is made
 * into 0. */
int f(int a) {
	if (a == 0)
		return 1;
	return 0;
}
