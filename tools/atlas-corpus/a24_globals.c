/* a24_globals: reads and writes a file-scope global. The address is a linker
 * relocation, which is why docs/highc-authentic-toolchain.md reclassified
 * 0xe1bf4 and 0xe1c24 as base-fold. This is the atlas entry for that class. */
int g;

int f(int a) {
	g = g + a;
	return g;
}
