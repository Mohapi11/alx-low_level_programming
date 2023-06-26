#include <stdio.h>

int main() {
    int i;

    // Print lowercase alphabet
    for (i = 0; i < 26; i++) {
        putchar('a' + i);
    }

    // Print uppercase alphabet
    for (i = 0; i < 26; i++) {
        putchar('A' + i);
    }

    // Print new line
    putchar('\n');

    return 0;
}
