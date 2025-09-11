//Write a program to compare memory usage of structure and union.
#include <stdio.h>

struct MyStruct {
    int a;
    float b;
    char c;
};

union MyUnion {
    int a;
    float b;
    char c;
};

int main() {
    struct MyStruct s;
    union MyUnion u;

    printf("Size of structure = %lu bytes\n", sizeof(s));
    printf("Size of union = %lu bytes\n", sizeof(u));

    return 0;
}

