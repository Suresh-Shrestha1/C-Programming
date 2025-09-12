//Write a program to write text to a file.
#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Hello, this is a file write demo!\n");
    fclose(fp);
    printf("Data written successfully.\n");
    return 0;
}

