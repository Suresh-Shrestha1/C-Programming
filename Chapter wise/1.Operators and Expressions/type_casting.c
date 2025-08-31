//Write a program to demonstrate type casting.
#include <stdio.h>

int main() {
    int a = 7;
    float b = 2.0;

    // Implicit type casting: intNum is automatically cast to float
    float res = a / b;
    printf("Implicit Casting: %d / %.1f = %.2f\n", a, b, res);

    // Explicit type casting: manually converting int to float
    float res1 = (float)a / 2;
    printf("Explicit Casting: (float)%d / 2 = %.2f\n", a, res1);

    return 0;
}

