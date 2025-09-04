//Write a program to check whether a string is a palindrome or not.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int len;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    for (int i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }

    if (strcmp(str, rev) == 0)
        printf("Palindrome string.\n");
    else
        printf("Not a palindrome.\n");

    return 0;
}

