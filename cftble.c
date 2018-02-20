#include <stdio.h>

void main() {
	printf("Celsius-Fahrenheit Table\n");

	float celsius, fahr;
	float upper, lower, step;

	lower = 0;
	upper = 300;
	step = 20;

	celsius = lower;
	while (celsius <= upper) {
		fahr = (celsius * (9.0 / 5.0)) + 32.0;
		printf("%6.1f %3.0f\n", celsius, fahr);
		celsius = celsius +  step;
	}
}
