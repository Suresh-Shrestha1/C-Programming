//Write a C program using structure that reads the record of 35 students with member's roll number, name, address and makes and  display record of students who have obtained greater than 250 marks.
//Hint: Use for loop to iterate to the desired number of student, if-else statement to display the student's records that has obtained grater than 250 marks.
#include<stdio.h>
struct student{
	int roll;
	char name[20];
	char add[25];
	int marks;
};
int main()
{
	int i;
	struct student st[2] ;
	printf("Enter the detials of 2 student:\n");
	for(i=0; i<=1; i++)
	{
	printf("Enter your roll: ");
	scanf("%d", &st[i].roll);
	printf("Enter your name: ");
	scanf("%s", st[i].name);
	printf("Enter your address: ");
	scanf("%s", st[i].add);
	printf("Enter your marks: ");
	scanf("%d", &st[i].marks);	
	}
	printf("Details of students whose marks is greater than 250: \n");
	for(i=0; i<=1; i++)
	{
		if(st[i].marks>250)
		{
		printf("Roll Number: %d\n", st[i].roll);	
		printf("Name: %s\n", st[i].name);
		printf("Address: %s\n", st[i].add);
		printf("Marks: %d\n", st[i].marks);	
		}
	}
	return 0;
}
