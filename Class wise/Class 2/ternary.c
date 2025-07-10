//6.Write a progran to input three numbers and display the maximum number among them using ternary operator.
#include<stdio.h>
int main()
{
	int a, b, c, max;
	printf("Enter the first value: ");
	scanf("%d", &a);
	printf("Enter the second value: ");
	scanf("%d", &b);
	printf("Enter the third value: ");
	scanf("%d", &c);
	max=(a>b)?((a>c)?a:c):((b>c)?b:c);		// condition? true: false;
	//First, it checks if a is greater than b. If true, it then compares a with c to determine the maximum of the three. If a is not greater than b, it compares b with c to find the maximum.
	printf("The maximum number is %d", max);
	return 0;
}
