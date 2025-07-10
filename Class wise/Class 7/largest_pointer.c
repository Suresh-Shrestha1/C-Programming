//Write a program to find the biggest among three number.
#include<stdio.h>
int main()
{
	int a, b, c;
	int *ptr=&a;
	int *ptr1=&b;
	int *ptr2=&c;
	printf("Enter number:");
	scanf("%d", ptr);
	printf("Enter number:");
	scanf("%d", ptr1);
	printf("Enter number:");
	scanf("%d", ptr2);
	if(*ptr > *ptr1 && *ptr> *ptr2)
	{
		printf("The biggest number is %d", *ptr);
	}
	else if(*ptr1 > *ptr && *ptr1 > *ptr2)
	{
		printf("The biggest number is %d", *ptr1);
	}
	else
	{
		printf("The biggest number is %d", *ptr2);
	}
	return 0;
}
