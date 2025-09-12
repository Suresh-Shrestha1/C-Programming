//Write a program to append text to an existing file.
#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "a");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(fp, "Appended line.\n");
    fclose(fp);
    printf("Data appended.\n");
    return 0;
}

