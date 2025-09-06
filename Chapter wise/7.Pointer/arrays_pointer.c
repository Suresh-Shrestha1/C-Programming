//Write a program to use an array of pointer to strings.
#include <stdio.h>

int main() {
    const char *names[] = {"Alice", "Bob", "Charlie"};
    int i;
    for (i = 0; i < 3; i++) {
        printf("Name %d: %s\n", i + 1, names[i]);
    }

    return 0;
}

