//WAP to find whether number is odd or even using syntax of C.
#include<stdio.h>
int main()
{
	int a;
	printf("Enter any number: ");
	scanf("%d", &a);
	if(a%2==0)		// If the remainder when divided by 2 is zero, it's even
	{
		printf("The number is even.");
	}
	else		// Otherwise, it's odd
	{
		printf("The number is odd.");
	}
	return 0;
}
