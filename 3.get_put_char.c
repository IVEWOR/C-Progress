#include <stdio.h>

int main() {
    int c;

    printf("Type something (press Ctrl+D to send EOF):\n");

    while ((c = getchar()) != EOF) {
        printf("getchar() != EOF is: %d\n", c != EOF);  // This will always be 1 inside the loop
        putchar(c);
    }

    printf("\nReached EOF. Value of getchar() != EOF is: 0\n");

    return 0;
}
