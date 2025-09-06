//Write a program to demonstrate the pointer arithmetic with arrays.
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;
    int i;
    for (i = 0; i < 5; i++) {
        printf("Value = %d, Address = %p\n", *(p + i), (p + i));
    }

    return 0;
}

