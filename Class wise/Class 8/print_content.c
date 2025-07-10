//Write a program in C to read and display the content written in previous file "emp.txt" in your console.
//Hint: We need to open previously crerated file and read content so we need to open file in "r" mode. The content of file can be displayed using fgetc(FILE *ptr) function. 
#include<stdio.h>
int main()
{
	FILE *fp;
	char s;
	fp=fopen("C://cLab//emp.txt", "r");
	if(fp==NULL)
	{
		printf("File doesn't exist\n");
	}
	else
	{
		printf("File opened successfully\n");
	}
	while((s=fgetc(fp))!=EOF)
	{
		printf("%c",s);
	}
	fclose(fp);
	return 0;
}
