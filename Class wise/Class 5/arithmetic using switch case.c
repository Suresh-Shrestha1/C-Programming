//Write a program to calculate the basic arithmetic operation (+,-,*,/) using switch case statement, 2019 BCA.
#include<stdio.h>
int main()
{
	int a, b, sum, sub, mul, div;
	char sign;
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	printf("Enter the any arthimetic operation: ");
	scanf(" %c", &sign);
	switch(sign)
	{
		case '+':
			sum=a+b;
			printf("%d",sum);
			break;
		case '-':
			sub=a-b;
			printf("%d",sub);
			break;
		case '*':
			mul=a*b;
			printf("%d",mul);
			break;
		case '/':
			div=a/b;
			printf("%d",div);
			break;
		default:
			printf("It is not valid operation.");
	}
	return 0;
}
