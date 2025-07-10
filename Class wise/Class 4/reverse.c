//Write a program to show the number in reverse.
#include<stdio.h>
int main()
{
	int n, orginal, reminder, reverse;
	printf("Enter the integer you want to reverse: ");
	scanf("%d", &n);
    original = n; // Store the original number for later use
    // Example: If the user inputs 1234, 'n' starts as 1234
    while (n != 0)// Loop to reverse the digits of the number
    {
        reminder = n % 10; // Get the last digit of 'n'
        // For n = 1234, reminder will be 4 (1234 % 10 = 4)

        reverse = reverse * 10 + reminder; // Append the last digit to 'reverse'
        // Initially, reverse is 0. After first iteration, reverse = 0 * 10 + 4 = 4
        // After second iteration, reverse = 4 * 10 + 3 = 43, and so on.

        n /= 10; // Remove the last digit from 'n'
        // For n = 1234, after removing last digit, n becomes 123 (1234 / 10 = 123)
    }

    // Example Process:
    // - Initial n = 1234
    // - 1st iteration: reminder = 4, reverse = 4, n = 123
    // - 2nd iteration: reminder = 3, reverse = 43, n = 12
    // - 3rd iteration: reminder = 2, reverse = 432, n = 1
    // - 4th iteration: reminder = 1, reverse = 4321, n = 0
    // The loop ends when n becomes 0
	printf("The previous number is %d.\n", orginal);
	printf("The reverse number is %d.", reverse);
	return 0;
}
