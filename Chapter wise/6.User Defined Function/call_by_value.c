//Write a program to show change a value using call by value.
#include <stdio.h>

void change(int a) {
    a = 100;
    printf("Inside function: %d\n", a);
}

int main() {
    int x = 10;
    change(x); // Call by value
    printf("Outside function: %d\n", x);
    return 0;
}

