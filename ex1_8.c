#include <stdio.h>

/*
	Author: @buoyantair
*/

void main() {
	int c;
	int nb = 0;
	int nt = 0;
	int nl = 0;

	while((c = getchar()) != '.')
		switch(c) {
			case '\n':
				++nl;
				break;
			case '\t':
				++nt;
				break;
			case '\b':
				++nb;
				break;
			default:
				break;
		}
	printf("nb = %d\nnt = %d\nnl = %d\n", nb, nt, nl);
}
