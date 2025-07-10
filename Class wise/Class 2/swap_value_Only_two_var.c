//Write a program to swap values of two variables with and without using third variable.
#include<stdio.h>
int main()
{
	int a, b;
	printf("Enter the value of a and b: ");		//without using three variables
	scanf("%d%d",&a,&b);
	printf("The value before swapping is a=%d b=%d.\n", a, b);
	// Swap the values of a and b using arithmetic operations
    a = a + b;  // Step 1: Add a and b, and store the result in a
    b = a - b;  // Step 2: Subtract b from the new a to get the original value of a and store it in b
    a = a - b;  // Step 3: Subtract the new b (which is the original a) from the new a to get the original value of b and store it in a

	printf("The value after swapping is a=%d b=%d.", a, b);
	return 0;
}
