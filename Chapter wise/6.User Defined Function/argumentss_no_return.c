//Write a program to add two numbers using a function (no return).
#include <stdio.h>

// Function Definition
void add(int a, int b) {
    int sum = a + b;
    printf("Sum = %d\n", sum);
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    add(x, y); // Function Call
    return 0;
}

