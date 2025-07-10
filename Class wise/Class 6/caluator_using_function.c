//Build a Calculator in C programming that takes two number, operator and calculates the result, using function and return.
#include<stdio.h>

int add(int a, int b)
{
	return a+b;
}

int sub(int a, int b)
{
	return a-b;
}

int mul(int a, int b)
{
	return a*b;
}

int div(int a, int b)
{
	return a/b;
}


int main(void)
{
	int x, y, result;
	char op;
	printf("Enter the value of x: ");
	scanf("%d", &x);
	printf("Enter the value of y: ");
	scanf("%d", &y);
	printf("Enter the operator: ");
	scanf(" %c", &op);
//	if(op=='+')
//	{
//		result=add(x,y);
//	}
//	else if(op=='-')
//	{
//		result=sub(x,y);
//	}
//	else if(op=='*')
//	{
//		result=mul(x,y);
//	}
//	else if(op=='/')
//	{
//		result=div(x,y);
//	}
//	else
//	{
//		printf("Invalid operation");
//	}
	switch(op)
	{
		case '+':
			result = add(x,y);
			break;
		case '-':
			result = sub(x,y);
			break;
		case '*':
			result = mul(x,y);
			break;
		case '/':
			result = div(x,y);
			break;
		default:
			printf("Invalid Operation");
			break;
	}
	printf("The result is %d", result);
	return 0;
}
