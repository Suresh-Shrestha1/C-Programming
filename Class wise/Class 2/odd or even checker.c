//5.Write a program to check whether the number is odd or even.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter any number: ");
	scanf("%d", &n);
	if(n%2==0)
	{
		printf("The even number is %d", n);
	}
	else
	{
		printf("The odd number is %d", n);
	}
	return 0;
}
