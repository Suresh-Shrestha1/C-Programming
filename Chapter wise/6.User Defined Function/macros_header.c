//Write a program to calculate the area of circle using macros header.
#include <stdio.h>
#define PI 3.14159

int main() {
    float r;
    printf("Enter radius: ");
    scanf("%f", &r);

    printf("Area = %.2f\n", PI * r * r);
    return 0;
}

