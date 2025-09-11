//Write a program to show how a union stores data and how memory is shared.
#include <stdio.h>

union Data {
    int i;
    float f;
    char str[10];
};

int main() {
    union Data d;

    d.i = 10;
    printf("d.i = %d\n", d.i);

    d.f = 5.5;
    printf("d.f = %.1f\n", d.f);  // Overwrites d.i

    return 0;
}

