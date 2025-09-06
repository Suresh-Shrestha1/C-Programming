//Write a C program to allocate memory dynamically for a float array using calloc().
#include <stdio.h>
#include <stdlib.h>

int main() {
    float *arr;
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (float *)calloc(n, sizeof(float));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d float numbers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%f", &arr[i]);

    printf("Entered values:\n");
    for (i = 0; i < n; i++)
        printf("%.2f ", arr[i]);

    free(arr);
    return 0;
}

