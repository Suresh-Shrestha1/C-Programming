//Write a program to convert a string to uppercase using strupr().
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    printf("Uppercase: %s", strupr(str));
    return 0;
}

