//Write a program to print each character of a string using pointer.
#include <stdio.h>

int main() {
    char *str = "HEllO";

    while (*str != '\0') {
        printf("%c ", *str);
        str++;
    }

    return 0;
}

