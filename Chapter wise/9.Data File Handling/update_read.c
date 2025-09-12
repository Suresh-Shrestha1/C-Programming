//Write a program to open an existing file using r+, update the beginning content, and read the whole file.
#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("file1.txt", "r+");  // must exist

    if (fp == NULL) {
        printf("File doesn't exist.\n");
        return 1;
    }

    fputs("Updated ", fp);  // Overwrites from beginning

    rewind(fp);

    printf("Reading updated file:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}

