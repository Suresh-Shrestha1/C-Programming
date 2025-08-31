//Write a program to show how operator precedence affects expression evaluation.
#include <stdio.h>

int main() {
    int result = 2 + 3 * 4;
    printf("2 + 3 * 4 = %d\n", result); // Multiplication has higher precedence
    return 0;
}

