//3.Write a program to input two numbers and display the maximum number among them.
#include<stdio.h>
int main()
{
	float a, b;
	printf("Enter the value of a: ");
	scanf("%f",&a);
	printf("Enter the value of b: ");
	scanf("%f",&b);
	//Compare the two number and display the appropriate message
	if(a>b)		//a is grater than b
	{
		printf("The maximum number is %.2f",a);
	}
	else if(a==b) 		//a is equal to b
	{
		printf("The same number is %.2f and %.2f",a,b);
	}
	else		//b is greater than a
	{
		printf("The maximum number is %.2f",b);	
	}
	return 0;
}
