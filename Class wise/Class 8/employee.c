//WAP in C to create a file called emp.txt and store information about a person, in terms of his name, age and salary.
//Hint: First create a file in "w" mode, and check if it is created or not using if-else statement

#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("C://cLab//emp.txt", "w");
	if(fp==NULL)
	{
		printf("File doesn't exist\n");
	}
	else
	{
		printf("File opened successfully\n");
	}
	char name[20];
	int age;
	float salary;
	printf("Enter the employees name: ");
	scanf("%s", name);
	fprintf(fp,"Name: %s\n", name);
	printf("Enter the age of the employee: ");
	scanf("%d", &age);
	fprintf(fp,"Age: %d\n",age);
	printf("Enter the salary: ");
	scanf("%f", &salary);
	fprintf(fp,"Salary: %.2f\n", salary);
	fclose(fp);
	return 0;
}
