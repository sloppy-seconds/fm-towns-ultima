/* a12_div_odd: signed division by a non-power-of-two constant. Either a magic
 * multiply-and-shift or a real idiv. The two are trivially distinguishable in
 * the output and only one of them is a strength reduction. */
int f(int a) {
	return a / 7;
}
