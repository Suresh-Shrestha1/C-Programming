//Write a program to perform linear search in an array.
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int search, found = 0, i;

    printf("Enter the number to search: ");
    scanf("%d", &search);

    for (i = 0; i < 5; i++) {
        if (arr[i] == search) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Element not found.\n");

    return 0;
}

