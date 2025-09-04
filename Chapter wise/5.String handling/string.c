//Write a program to read and print a string.
#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string (can include spaces): ");
    scanf(" %[^\n]", str);  // reads entire line including spaces

    printf("You entered: %s\n", str);
    return 0;
}

