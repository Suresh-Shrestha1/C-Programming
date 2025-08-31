//Write a program to demonstrate the use of logical operators (AND, OR, NOT).
#include <stdio.h>

int main() {
    int a = 5, b = 10;
    printf("(a < b) && (b > 0): %d\n", (a < b) && (b > 0));
    printf("(a > b) || (b > 0): %d\n", (a > b) || (b > 0));
    printf("!(a == b): %d\n", !(a == b));
    return 0;
}

