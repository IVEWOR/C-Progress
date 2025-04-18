#include <stdio.h>

#define IN 1
#define OUT 0

int main(void) {
	int c, count = 0;
	int state = OUT;

	while ((c = getchar()) != EOF) {

		if (c == ' ' || c == '\n' || c == '\t') {

			if (state == IN) {
				printf("%d ", count);
				for (int i = 0; i < count; i++) {
					putchar('*');
				}
				putchar('\n');
				count = 0;
				state = OUT;
			}
		} else { 

			if (state == OUT) {
				state = IN;
			}

			count++;

		}
	}

		if (state == IN) {
			printf("%d ", count);
			for (int i = 0; i < count; i++) {
				putchar('*');
			}
			putchar('\n');
		}
		
	
	return 0;
}
