//Write a program to input three numbers and display the maximum number among them. 
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	printf("Enter third number: ");
	scanf("%d",&c);
	if(a>b&&a>c)		//a is greater than b and c
	{
		printf("The maximum number is %d",a);
	}
	else if(b>a&&b>c)		//b is greater than a and c
	{
		printf("The maximum number is %d",b);
	}
	else		//c is greater than b and b
	{
		printf("The maximum number is %d",c);
	}
	return 0;
}
