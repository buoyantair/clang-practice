/*
	Write a program to print a histogram of the frequencies of different characters in it's 
	input.

	Author: @buoyantair
*/

#include <stdio.h>

void main() {
	int c, i, j, len, tablelen;
	tablelen = 127;
	int frequencies[tablelen];
	
	for(i = 0; i < tablelen; ++i) {
		frequencies[i] = 0;
	}

	while((c = getchar()) != '.') {
		++frequencies[c];
		++len;
	}

	for(i = 0; i < len; ++i) {
		for(j = 0; j < frequencies[i]; ++j) {
			printf("#");
		}
		printf("%d\n", frequencies[i]);
	}
}
