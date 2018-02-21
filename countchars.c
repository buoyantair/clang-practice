#include <stdio.h>

/* count chars in input; v1 */

void main () {
	long nc;
	nc = 0;
	
	while (getchar() != EOF) {
		++nc;
		printf("%ld\n", nc);
	}
}
