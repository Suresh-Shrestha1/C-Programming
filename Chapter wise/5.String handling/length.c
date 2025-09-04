//Write a program to find the length of a string using strlen().
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);
	int len = strlen(str);
    printf("Length of string = %d\n", len);

    return 0;
}

