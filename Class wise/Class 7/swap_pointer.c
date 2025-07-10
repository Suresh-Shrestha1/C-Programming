//Write a program to swap two variables using pointer.
#include<stdio.h>
int main()
{
	int a, b, temp;
	int *ptr=&a;
	int *ptr1=&b;
	printf("Enter the value: ");
	scanf("%d", ptr);
	printf("Enter the value: ");
	scanf("%d", ptr1);
	printf("Befor Swaping: a= %d, b=%d\n", a, b);
	temp = *ptr;
	*ptr = *ptr1;
	*ptr1 = temp;
	printf("After Swaping: a= %d, b=%d", a, b);
	return 0;
}
