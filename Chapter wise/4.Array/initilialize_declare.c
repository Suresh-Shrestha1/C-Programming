//`Write a program to declare and initialize a one-dimensional array and print all its elements.
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int i;
    printf("Array elements are:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

