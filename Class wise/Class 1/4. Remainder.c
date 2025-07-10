//WAP to subtract, multiply, divide and remainder of two integer using the syntax of C.
#include<stdio.h>
int main()
{
    int a, b, rem;      // Variables for the two integers and remainder
    float sub, mul, div; // Variables for subtraction, multiplication, and division results
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	sub=a-b;
	mul=a*b;
	div=a/b;	// Division, cast to float to avoid integer division
	rem=a%b;
	printf("Subtract is %.2f, Multiply is %.2f, Divide is %.2f and Remainder is %d.", sub, mul, div, rem);
	return 0;
}

