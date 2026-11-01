/* a11_div_pow2: signed division by a power of two. The alternative shapes are
 * the cdq/sub/sar halving chain and a shift with a sign-correction add. Which
 * one appears is a compiler habit, not a source choice. */
int f(int a) {
	return a / 8;
}
