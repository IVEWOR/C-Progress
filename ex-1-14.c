#include <stdio.h>

int main(void) {
	int count, c, blanks, highest;
	blanks = highest = count = 0;

	int arr[4];

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			arr[blanks] = count;
			blanks++;
			if (count > highest) {
				highest = count;
			}
			count = 0;
		} else {
			count++;
		}
	}
	for (int i = 0; i < highest; i++) {
		for (int x = 0; x < blanks; x++) {
			if (arr[x] >= (highest - i)) {
				putchar('*');
			} else {
				putchar(' ');
			}
		}
		putchar('\n');
	}
	return 0;
}
