//Write a program to create a file using w+ mode, write data into it, and then read it.
#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("file1.txt", "w+"); 

    if (fp == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    fputs("Hello using w+ mode!", fp);

    rewind(fp);  // Move pointer back to start to read

    printf("Reading from file:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}

