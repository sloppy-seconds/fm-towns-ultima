/* a04_params8: eight int parameters and no locals. Register-allocation habits
 * under pressure, and the argument addressing form at high offsets. */
int f(int a, int b, int c, int d, int e, int g, int h, int i) {
	return a + b + c + d + e + g + h + i;
}
