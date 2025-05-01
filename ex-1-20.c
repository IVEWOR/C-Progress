#include <stdio.h>
#define TABSIZE 4
void detab(int col);

int main(void) {
	int c;
	int col = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			putchar(c);
			col = 0;
			continue;
		}
		if (c == '\t') {
			detab(col);
			col += TABSIZE - (col % TABSIZE);
		} else {
			putchar(c);
			++col;
		}
	}
}

void detab(int col) {
	int spaces = TABSIZE - (col % TABSIZE);
	for (int i = 0; i < spaces; ++i) {
		putchar(' ');
	}
}
