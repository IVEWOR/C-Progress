#include <stdio.h>
int main(void) {
	int blanks = 0;
	int tabs = 0;
	int newlines = 0;
	char c;
	while ((c = getchar()) != EOF) {
		putchar(c);
		if (c == '\n') {
			newlines++;
		}
		if (c == '\t') {
			tabs++;
		}
		if (c == ' ') {
			blanks++;
		}
	}

	printf("blanks: %d | tabs: %d | newlines: %d", blanks, tabs, newlines);

	return 0;
}
