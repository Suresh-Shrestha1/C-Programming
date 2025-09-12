//Write a program to read content from a file and display it.
#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("data.txt", "r");
    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    printf("File content:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}

