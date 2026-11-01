/* a32_repeated_halve: an explicit three-step halving, which is the source shape
 * that would produce `sar 1` three times if the compiler ever emitted that
 * chain. Written to separate "the compiler never emits a halving chain" from
 * "the compiler emits a shift instead of a chain for a single division". */
int f(int a) {
	a >>= 1;
	a >>= 1;
	a >>= 1;
	return a;
}
