//Write a program to find the maximum of two numbers using the conditional operator.
#include <stdio.h>

int main() {
    int a = 15, b = 20;
    int max = (a > b) ? a : b;
    printf("Maximum is: %d\n", max);
    return 0;
}

