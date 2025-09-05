//Write a program to compute a^b using recursion.
#include <stdio.h>

int power(int base, int exponent) {
    if (exponent == 0){
    	return 1;
	}
    return base * power(base, exponent - 1);
}

int main() {
    int a, b;
    printf("Enter base and exponent: ");
    scanf("%d %d", &a, &b);
    printf("%d^%d = %d\n", a, b, power(a, b));
    return 0;
}

