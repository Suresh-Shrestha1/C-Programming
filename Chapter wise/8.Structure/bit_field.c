//Write a program to demonstrate bit fields in structure.
#include <stdio.h>

struct Flag {
    unsigned int a : 1;
    unsigned int b : 3;
    unsigned int c : 2;
};

int main() {
    struct Flag f = {1, 5, 2};

    printf("a = %d, b = %d, c = %d\n", f.a, f.b, f.c);
    return 0;
}

