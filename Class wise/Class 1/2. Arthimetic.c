//WAP to perform addition, subtraction, division and multiplication of two numbers.
#include<stdio.h>
int main()
{
	 // Declare variables for storing two numbers and results of arithmetic operations
	float a, b, add, sub, div, mul;
	// Prompt to enter two numbers by user
	printf("Enter first number: ");
	scanf("%f", &a);
	printf("Enter second number: ");
	scanf("%f", &b);
	// Perform the arithmetic operations
	add=a+b;	//Addition
	sub=a-b;	//Subtraction
	mul=a*b;	//Multiplication
	div=a/b;	//Division
	// Display the results of the arithmetic operations
	printf("The addition of %.2f and %.2f is %.2f.\n", a,b,add);
	printf("The subtraction of %.2f and %.2f is %.2f.\n", a,b,sub);
	printf("The division of %.2f and %.2f is %.2f.\n", a,b,div);
	printf("The multiplication of %.2f and %.2f is %.2f.\n", a,b,mul);
	// Return 0 to indicate successful execution
	return 0;
}

