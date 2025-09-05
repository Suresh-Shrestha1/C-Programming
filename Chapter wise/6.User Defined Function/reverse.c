//Write a program to reverse a number using recursion.
#include <stdio.h>

int reverse(int num, int rev) {
    if (num == 0){
    	return rev;
	}
    return reverse(num / 10, rev * 10 + num % 10);
}

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Reversed number = %d\n", reverse(num, 0));
    return 0;
}

