//Write a program to count vowels in a string.
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int count = 0, i;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }

    printf("Number of vowels = %d\n", count);
    return 0;
}

