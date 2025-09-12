//Write a program to open a file in a+ mode, add new content at the end, and read the entire content.
#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("file1.txt", "a+");  // opens or creates, appends at end

    if (fp == NULL) {
        printf("File cannot be opened.\n");
        return 1;
    }

    fputs("\nAppended using a+ mode.", fp);

    rewind(fp);  // Move pointer to start for reading

    printf("File content:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}

