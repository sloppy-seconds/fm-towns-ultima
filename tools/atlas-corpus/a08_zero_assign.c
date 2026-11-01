/* a08_zero_assign: the zeroing idiom. Whether the compiler emits xor, sub,
 * and, mov imm 0, or something else when a register must become zero. */
int f(int a) {
	int z;
	z = 0;
	return a + z;
}
