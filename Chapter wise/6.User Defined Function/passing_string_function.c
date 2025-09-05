//Write a program to print a string using a function.
#include <stdio.h>

void printString(char str[]) {
    printf("Entered string: %s\n", str);
}

int main() {
    char name[50];
    printf("Enter a string: ");
    gets(name);
    printString(name);
    return 0;
}

