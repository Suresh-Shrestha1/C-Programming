//Write aprogram to find the largest and smallest among three entered numbers and also display whether and also display whether the identified largest/ smallest number is even or odd.
#include<stdio.h>
int main()
{
	int a, b, c;
	int largest, smallest;
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	printf("Enter third number: ");
	scanf("%d",&c);
//	Determine the largest number
	if(a>=b&&a>=c)
	{
		largest=a;
	}
	else if(b>=a&&b>=c)
	{
		largest=b;
	}
	else
	{
		largest=c;
	}
//Determine the smalllest number
	if(a<=b&&a<=c)
	{
		smallest=a;
	}
	else if(b<=a&&b<=c)
	{
		smallest=b;
	}
	else
	{
		smallest=c;
	}
//	Check if largest number is even or odd
	if(largest%2==0)
	{
		printf("The largest number is %d and its even.\n",largest);
	}
	else
	{
		printf("The largest number is %d and its odd.\n",largest);
	}
	//	Check if smallest number is even or odd
	if(smallest%2==0)
	{
		printf("The smallest number is %d and its even.\n",smallest);
	}
	else
	{
		printf("The smallest number is %d and its odd.\n",smallest);
	}
	return 0;
}
