/* a31_div_offset: the shape docs/highc-negative-result.md quotes from the game,
 * `(esi-6)/8`. The claim on record is that High C 1.73 emits a naive `sub` then
 * repeated `sar 1` halving chain here. a11 measured `a/8` alone and got a
 * bias-then-shift instead, so this re-tests the exact expression the claim was
 * made about rather than a near neighbour of it. */
int f(int a) {
	return (a - 6) / 8;
}
