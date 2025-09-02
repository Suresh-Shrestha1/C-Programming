//Write a program to check if a number is larger or equal.
#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter a first number: ");
    scanf("%d", &num1);
    printf("Enter a second number: ");
    scanf("%d", &num2);

    if (num1 > num2 ){
        printf("Larger number is first.");
    } 
	else if (num1 < num2) {
        printf("Larger number is second.");
    } 
	else {
        printf("Both are equal");
    }

    return 0;
}

