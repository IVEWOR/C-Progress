#include <stdio.h> 

float f2c(int f);

int main(void) {
	printf("%3.2f\n", f2c(100));
	return 0;
}

float f2c(int f) {
	float c;
	c = (5.0 / 9.0) * (f - 32);
	return c;
}
