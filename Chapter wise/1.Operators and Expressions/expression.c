//Write a program that evaluates a complex expression.
#include <stdio.h>

int main() {
    int a = 4, b = 2, c = 3;
    int result;
    result = a + b * c - (a + c) / b;
    printf("Expression: a + b * c - (a + c) / b\n");
    printf("With values: %d + %d * %d - (%d + %d) / %d\n", a, b, c, a, c, b);
    printf("Evaluated Result: %d\n", result);
    return 0;
}

