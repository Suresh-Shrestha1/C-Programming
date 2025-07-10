#include<stdio.h>
int main()
{
	int i,j;
	for(i=1; i<=5; i++)	//Outer loop controls the row
	{
		for(j=1; j<=i; j++)	//Inner loop controls the number of astrisks in each row
		{
			printf("%d",j);
		}
		printf("\n");	//Move to next line after each row is printed
	}
	return 0;
}
