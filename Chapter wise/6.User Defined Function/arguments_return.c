//Write a function that returns the maximum of two numbers.
#include <stdio.h>

// Function Definition
int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    int result = max(x, y);
    printf("Maximum = %d\n", result);
    return 0;
}

