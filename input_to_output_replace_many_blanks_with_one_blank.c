#include <stdio.h>
int main(void) {
	char c;
	char previous;
	previous = '\0';
	while ((c = getchar()) != EOF) {

		if (previous == ' ' && c == ' ') {
			;
		} else {
			putchar(c);
			previous = c;
		}
		
	}
}
