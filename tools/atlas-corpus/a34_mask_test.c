/* a34_mask_test: the shape that produces `test` in most compilers, a bitwise AND
 * used only for its flags. a29 ANDed with a mask but kept the value, which
 * lowers to `and` with no flag test at all. If High C 1.73 can emit `test` at
 * all, this is the most likely way. */
int f(int a, int b) {
	if ((a & b) == 0)
		return 1;
	return 0;
}
