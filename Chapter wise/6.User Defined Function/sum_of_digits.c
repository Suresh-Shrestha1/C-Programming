//Write a program to find the sum of digits of a number using recursion.
#include <stdio.h>

int sumDigits(int n) {
    if (n == 0) {
    	return 0;
	}
    return n % 10 + sumDigits(n / 10);
}

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Sum of digits = %d\n", sumDigits(num));
    return 0;
}

