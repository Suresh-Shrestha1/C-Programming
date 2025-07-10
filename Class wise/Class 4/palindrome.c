//Write a program to check wheter the number is palindrome or not.
#include<stdio.h>
int main()
{
	int n, orginal, reminder, reverse;
	printf("Enter the integer: ");
	scanf("%d", &n);
	original = n; // Store the original number for comparison later
    while (n != 0)// Loop to reverse the digits of the number
    {
        reminder = n % 10; // Get the last digit of 'n'
        // For example, if n = 12321, reminder will be 1 (12321 % 10 = 1)

        reverse = reverse * 10 + reminder; // Append the last digit to 'reverse'
        // Initially, reverse is 0. After first iteration, reverse = 0 * 10 + 1 = 1
        // After second iteration, reverse = 1 * 10 + 2 = 12, and so on.

        n /= 10; // Remove the last digit from 'n'
        // For example, if n = 12321, after removing the last digit, n becomes 1232 (12321 / 10 = 1232)
    }

    // Example Process:
    // - Initial n = 12321
    // - 1st iteration: reminder = 1, reverse = 1, n = 1232
    // - 2nd iteration: reminder = 2, reverse = 12, n = 123
    // - 3rd iteration: reminder = 3, reverse = 123, n = 12
    // - 4th iteration: reminder = 2, reverse = 1232, n = 1
    // - 5th iteration: reminder = 1, reverse = 12321, n = 0
    // The loop ends when n becomes 0

    // Check if the reversed number is equal to the original number
    if (reverse == original)
    {
        // If the reversed number matches the original number, it is a palindrome
        printf("%d is a palindrome number", original);
    }
    else
    {
        // If the reversed number does not match the original number, it is not a palindrome
        printf("%d is not a palindrome number", original);
    }
	return 0;
}
