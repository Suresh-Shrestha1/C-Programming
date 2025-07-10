//Write a program to sum two number using pointer
#include<stdio.h>
int main()
{
	int i,j;
	int *q=&i;
	int *p=&j;
	int sum;
	printf("Enter the first value: ");
	scanf("%d", &i);
	printf("Enter the second value: ");
	scanf("%d", &j);
	sum=*p+*q;
	printf("The sum is %d", sum);
	return 0;
//	int sum;
//	int a, b;
//	int *ptr, *ptr1;
//	ptr=&a;
//	ptr1=&b;
//	printf("Enter the first value: ");
//	scanf("%d",ptr);
//	printf("Enter the second value: ");
//	scanf("%d", ptr1);
//	sum=*ptr+*ptr1;
//	printf("%d", sum);
//	return 0;
}
