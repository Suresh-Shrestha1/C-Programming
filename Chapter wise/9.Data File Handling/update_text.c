//Write a program to update content of a text file.
#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "r+");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fseek(fp, 0, SEEK_SET);  // Move to beginning
    fprintf(fp, "Updated line at start.\n");
    fclose(fp);

    printf("File updated.\n");
    return 0;
}

