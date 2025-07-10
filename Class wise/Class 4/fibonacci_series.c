//Write a program to generate fibonacci series.
#include<stdio.h>
int main()
{
	int num, i; // Variables to store the number of terms and loop index
    long long t1 = 0, t2 = 1, nextterm; // Variables to store the first two terms and the next term in the series

    // Prompt the user to enter the number of terms in the Fibonacci series
    printf("Enter the number of terms: ");
    scanf("%d", &num); // Read the number of terms from the user

    // Print the first two terms of the Fibonacci series
    printf("The Fibonacci series is %lld, %lld", t1, t2);
    // Example: For num = 5, the output starts with "0, 1"

    // Generate and print the Fibonacci series
    for (i = 2; i < num; i++) // Start from the 3rd term (index 2) up to the nth term
    {
        nextterm = t1 + t2; // Calculate the next term as the sum of the previous two terms
        printf(", %lld", nextterm); // Print the next term
        t1 = t2; // Update t1 to the previous second term
        t2 = nextterm; // Update t2 to the newly calculated term
    }
	return 0;
}
