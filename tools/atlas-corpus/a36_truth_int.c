/* a36_truth_int: a plain integer used as a condition, the shape the census found
 * in 220 game functions as `and reg,reg`. A34 established that a mask test emits
 * `test mem, reg`, so the open question is whether a bare truthiness test emits
 * `test reg, reg`, which the atlas had claimed is absent, or `cmp reg, 0`. */
int f(int a) {
	if (a)
		return 1;
	return 0;
}
