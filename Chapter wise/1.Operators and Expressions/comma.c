//Write a program to demonstrate the use of the comma operator in expressions.
#include <stdio.h>

int main() {
    int a, b, result;
    result = (a = 2, b = 3, a + b);
    printf("Result using comma operator: %d\n", result);
    return 0;
}

