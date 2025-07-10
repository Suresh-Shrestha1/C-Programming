//Write a program to find the sum of all the element of any array using pointer.
#include<stdio.h>
int main()
{
	int number[]={49, 34, 23, 45, 9};\
	int i;
	int len = sizeof(number)/sizeof(number[0]);
	int *ptr = number;
	int sum=0;
	for(i=0; i<len; i++)
	{
		sum+=*ptr;
		ptr++;
	}
	printf("The sum of the array element is : %d\n", sum);
	return 0;
}
