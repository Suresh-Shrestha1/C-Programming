//Write a C program to dynamically resize an integer array using realloc().
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, n, newSize, i;

    printf("Enter initial size: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter new size: ");
    scanf("%d", &newSize);

    arr = (int *)realloc(arr, newSize * sizeof(int));

    printf("Enter %d more elements:\n", newSize - n);
    for (i = n; i < newSize; i++)
        scanf("%d", &arr[i]);

    printf("New array:\n");
    for (i = 0; i < newSize; i++)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}

