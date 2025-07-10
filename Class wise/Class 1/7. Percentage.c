//WAP to take input name, roll no, and marks obtained by a student in 4 subjects of 100 marks each and display the name, roll no, with percentage secured.
#include<stdio.h>
int main()
{
	char name[30];		//Array to store student's name
	int roll;
	float sum, per, Eng, Nep, Math, Comp;
	printf("Enter the name: ");
	scanf("%s",name);		//gets(name);
	printf("Enter the Roll Number: ");
	scanf("%d", &roll);
	printf("Enter the marks of 4 subjects: ");
	scanf("%f%f%f%f",&Eng,&Nep,&Math,&Comp);
	sum=Eng+Nep+Math+Comp;		//Calculate the total sum of the marks
	per=sum/4;
	printf("Name = %s\nRoll No = %d\nPercentage = %f",name,roll,per);
	return 0;
}
