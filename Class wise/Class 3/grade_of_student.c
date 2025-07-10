//Write a program to compute grade of students using if else adder. The grades are assigned as followed.
#include<stdio.h>
int main()
{
	float total;
	printf("Enter your total number: ");
	scanf("%f", &total);
	if(total>=90&&total<=100)		// Use logical AND (&&) to check if total is between 90 and 100
	{
		printf("Your grade is A+ with %.2f\n",total);
	}
	else if(total>=80&&total<=90)
	{
		printf("Your grade is A with %.2f\n",total);
	}
	else if(total>=70&&total<=80)
	{
		printf("Your grade is B+ with %.2f\n",total);
	}
	else if(total>=60&&total<=70)
	{
		printf("Your grade is B with %.2f\n",total);
	}
	else if(total>=50&&total<=60)
	{
		printf("Your grade is C with %.2f\n",total);
	}
	else
	{
		printf("Fail");
	}
	return 0;
}
