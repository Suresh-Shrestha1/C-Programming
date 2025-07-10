#include<stdio.h>
int add(int a, int b)
{
	return a+b;
}

int main(void)
{
	int x, y, sum;
	printf("Enter the value of x and y: ");
	scanf("%d%d", &x, &y);
	sum=add(x,y);
	printf("The sum of x and y is %d", sum);
	return 0;
}
