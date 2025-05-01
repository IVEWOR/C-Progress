#include <stdio.h>
void reverse(char* s, int n);
int main() {
	int c, n;
	n = 0;
	char characters[100];
	while ((c = getchar()) != EOF) {		
		if (c == '\n') {
			characters[n] = '\n';
			reverse(characters, n);
			printf("%s\n", characters);
			n = 0;
		} else {
			characters[n] = c;
		}
		++n;
	}
	return 0;
}

void reverse(char* s, int n) {
	int start, end;
	start = 0;
	end = n - 1;
	char curr;

	while (start < end) {
		curr = s[start];
		s[start] = s[end];
		s[end] = curr;
		++start;
		--end;
	}
}
