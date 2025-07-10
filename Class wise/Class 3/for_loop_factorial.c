//Write a program to find the factorial of the user input number.
#include<stdio.h>
int main(void)
{
	int i, n;
	int factorial;
	printf("Enter any number: ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		factorial=factorial*i;		//factorial *= i;
	}
	printf("The factorial number of %d is %d", n, factorial);
	return 0;
}


