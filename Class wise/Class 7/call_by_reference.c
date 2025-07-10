//Write a program to swap two variables using pointer and call by reference.
#include<stdio.h>
void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	int a, b;
	printf("Enter the value: ");
	scanf("%d", &a);
	printf("Enter the value: ");
	scanf("%d", &b);
	printf("Befor Swaping: a= %d, b=%d\n", a, b);
	swap(&a, &b);
	printf("After Swaping: a= %d, b=%d", a, b);
	return 0;
}
