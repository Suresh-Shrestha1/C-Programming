//WAP to add and calculate the average of two number using C program.
#include<stdio.h>
int main()
{
	// Declare variables for storing two numbers, their sum, and the average
    float a, b, add, avg;
    printf("Enter first number: ");		// Prompt the user to enter the two number
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);
    add = a + b;	// Calculate the sum of the two numbers
    avg = add / 2;	// Calculate the average of the two numbers
    printf("The sum is %.2f.\n", add);			 // Display the sum of the two numbers
    printf("The average is %.2f.", avg);	 // Display the average of the two numbers
    return 0;	// Return 0 to indicate successful execution
}
