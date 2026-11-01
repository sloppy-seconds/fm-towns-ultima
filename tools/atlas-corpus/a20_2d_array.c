/* a20_2d_array: two runtime indices over a fixed-row array. The row multiply
 * is a constant-times-index, so this is where lea-versus-shift on a stride
 * shows up. */
int m[16][16];

int f(int i, int j) {
	return m[i][j] + m[j][i];
}
