#include <stdio.h>

/* count chars in input; v2 */

void main() {
	double nc;

	for (nc = 0; getchar() != EOF; ++nc)
		;
	printf("%.0f\n", nc);
}
