//Write a program to change a value using call by reference.
#include <stdio.h>

void change(int *a) {
    *a = 100;
}

int main() {
    int x = 10;
    change(&x); // Call by reference
    printf("Changed value: %d\n", x);
    return 0;
}

