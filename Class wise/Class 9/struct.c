//WAP using structure in c to take name, roll number and marks as input from 5 students and display result.
//Hint: Use for loop to iterate to yhe desired number of student i.e 5
#include<stdio.h>
struct student{
	char name[20];
	int roll;
	int mar;
};
int main()
{
	int i;
	struct student st[2] ;
	for(i=0; i<=1; i++)
	{
	printf("Enter your name: ");
	scanf("%s", st[i].name);
	printf("Enter your roll: ");
	scanf("%d", &st[i].roll);
	printf("Enter your marks: ");
	scanf("%d", &st[i].mar);	
	}
	printf("Student Details: \n");
	for(i=0; i<=1; i++)
	{
		printf("Name: %s\n", st[i].name);
		printf("Roll Number: %d\n", st[i].roll);
		printf("Marks: %d\n", st[i].mar);	
	}
	return 0;
}
