//Write a program to accept a 2x2 matrix and print it.
#include <stdio.h>

int main() {
    int matrix[2][2];
    int i, j;
    printf("Enter 2x2 matrix elements:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matrix is:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

