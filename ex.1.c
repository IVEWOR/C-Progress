#include <stdio.h>
float main() {
	float fahr, celsius;
	float upper, lower, step;

	upper = 300;
	lower = 0;
	step = 20;

	celsius = lower;

	printf("\n Celsius to Fahr:\n\n");

	while(celsius <= upper) {
		fahr = (celsius * (9.0 / 5.0)) + 32.0;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
