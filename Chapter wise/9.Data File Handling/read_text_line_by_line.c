//Write a program to read a text file and print it line by line.
#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "r");
    char line[100];

    if (fp == NULL) {
        printf("File cannot be opened.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}

