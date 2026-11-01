/* a22_mul3: multiplication by small constants. lea with a scaled index is the
 * strength-reduced shape; a shift-and-add chain or an imul is not. The same
 * distinction decides several game routines. */
int f(int a) {
	return a * 3 + a * 5 + a * 9;
}
