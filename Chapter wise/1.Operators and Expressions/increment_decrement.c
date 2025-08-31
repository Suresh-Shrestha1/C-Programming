//Write a program to show pre-increment, post-increment, pre-decrement, and post-decrement.Write a program to show pre-increment, post-increment, pre-decrement, and post-decrement.
#include <stdio.h>

int main() {
    int a = 10;
    printf("Post-increment a++: %d\n", a++);
    printf("Now a = %d\n", a);
    printf("Pre-increment ++a: %d\n", ++a);
    printf("Post-decrement a--: %d\n", a--);
    printf("Now a = %d\n", a);
    printf("Pre-increment --a: %d\n", --a);
    printf("Now a = %d\n", a);
    return 0;
}

