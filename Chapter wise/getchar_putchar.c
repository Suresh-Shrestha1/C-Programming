//Write a program to read a character using getchar() and print it using putchar().
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    ch = getchar();     // input with Enter
    printf("You entered: ");
    putchar(ch);        // output
    printf("\n");
    return 0;
}

