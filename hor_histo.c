#include <stdio.h>

/*
	Write a program to print a histogram of lengths of words in its input. It is easy to draw 
	the histogram with the bars horizontal; a vertical orientation is more challenging.
	
	Author: @buoyantair
*/

void main() {
	int c, i;
	int nwords, inword;
	int nwordlen;
	nwords = inword = nwordlen = 0;

	while ((c = getchar()) != '.')
		if(c == ' ' || c == '\n' || c == '\t' || c == '\r'){
			inword = 0;
			for (i = 0; i < nwordlen; ++i) {
				printf("#");
			}
			printf("\n");
			nwordlen = 0;
		} else if (inword == 0){
			inword = 1;
			++nwords;
			++nwordlen;
		} else if (inword == 1) {
			++nwordlen;
		}
	printf("nwords = %d\n", nwords);		
}
