//Write a program to demonstrate pointer to pointer.
#include <stdio.h>

int main() {
    int a = 50;
    int *p = &a;
    int **pp = &p;

    printf("Value of a = %d\n", a);
    printf("Value using *p = %d\n", *p);
    printf("Value using **pp = %d\n", **pp);
    return 0;
}

