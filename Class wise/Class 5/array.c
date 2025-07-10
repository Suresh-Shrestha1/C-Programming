//Write a program to print all the array item using for loop.(22 35 67 88 90)
#include<stdio.h>
int main()
{
	int i;
	int arr[5]={22, 35, 67, 88, 90};
	printf("The array items are: ");
	for(i=0; i<=4; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
