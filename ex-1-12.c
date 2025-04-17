#include <stdio.h>
int main(void) {
	char c;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			printf("\n");
		} else {
			putchar(c);
		}
	}
}
