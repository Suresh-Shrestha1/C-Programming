//Write a program to sort an array using the selection sort algorithm.
#include <stdio.h>

int main() {
    int arr[5] = {29, 10, 14, 37, 13};
    int n = 5, i, j, min, temp;

    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min])
                min = j;
        }

        // Swap
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }

    printf("Sorted array (Selection Sort):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

