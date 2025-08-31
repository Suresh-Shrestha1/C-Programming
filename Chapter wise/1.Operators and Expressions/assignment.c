//Write a program to demonstrate assignment and compound assignment operators.
#include <stdio.h>

int main() {
    int a = 5;
    a += 3;  // a = a + 3
    printf("a += 3: %d\n", a);
    a *= 2;  // a = a * 2
    printf("a *= 2: %d\n", a);
    return 0;
}

