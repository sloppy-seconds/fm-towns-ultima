/* a18_array_idx: array indexing with a runtime index. The scaled-index form of
 * the load and store is the addressing habit this probe exists to record. */
int f(int *a, int i) {
	a[i] = a[i] + 1;
	return a[i];
}
