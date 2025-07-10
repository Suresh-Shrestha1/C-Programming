#include<stdio.h>
void add(int a, int b)
{
	int sum=a+b;
	printf("The sum is %d\n", sum);
}

int main(void)
{
	int x, y;
	printf("Enter the value of x and y: ");
	scanf("%d %d", &x, &y);
	add(x,y);
	return 0;
}
