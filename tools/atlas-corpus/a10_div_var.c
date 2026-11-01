/* a10_div_var: signed division by a runtime value. This is the idiv case.
 * docs/highc-negative-result.md uses the idiv shape as the negative test that
 * ruled out v2.31, so the atlas must record what 1.73 really emits here. */
int f(int a, int b) {
	return a / b;
}
