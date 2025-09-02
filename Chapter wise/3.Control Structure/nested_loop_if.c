//Write a program to print only even numbers between 1 to 10 using nested if inside a loop.
#include <stdio.h>

int main() {
	int i;
    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            printf("Even: %d\n", i);
        }
    }
    return 0;
}

