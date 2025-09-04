//Write a program to copy a string using strcpy().
#include <stdio.h>
#include <string.h>

int main() {
    char source[100], destination[100];

    printf("Enter source string: ");
    gets(source);

    strcpy(destination, source);

    printf("Copied string: %s", destination);
    return 0;
}

