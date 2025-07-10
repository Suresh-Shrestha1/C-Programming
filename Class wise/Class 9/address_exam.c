//Locate a structure named student with members roll no, name, address. Write a program that displays name of only those students whose addressing is Kathmandu.
#include<stdio.h>
#include<string.h>
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
	printf("Enter the detials of student:\n");
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
	printf("Displaying Details of students from Kathmandu: \n");
	for(i=0; i<=1; i++)
	{
		if(strcmp(st[i].add, "Kathmandu") == 0)
		{
		printf("Roll Number: %d\n", st[i].roll);	
		printf("Name: %s\n", st[i].name);
		printf("Address: %s\n", st[i].add);
		printf("Marks: %d\n", st[i].marks);	
		}
	}
	return 0;
}
