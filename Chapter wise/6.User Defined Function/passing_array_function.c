//Write a program to print elements of an array using a function.
#include <stdio.h>

void array(int arr[], int size) {
	int i;
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    array(numbers, 5);
    return 0;
}

