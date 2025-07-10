#include<stdio.h>
void add(int a, int b)
{
	int sum=a+b;
	printf("The sum is %d\n", sum);
}

int main(void)
{
	add(5,6);	//Call Your Function
	return 0;
}
