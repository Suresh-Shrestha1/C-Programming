//Find the aveage age from the list. (age={20, 32, 31, 19, 18, 27})
#include<stdio.h>
int main()
{
	int i, sum=0,  avg, length;
	int age[]={20, 32, 31, 19, 18, 27};
	length=sizeof(age)/sizeof(age[0]);
	for(i=0; i<length; i++)
	{
		sum+=age[i];
	}
	avg=sum/length;
	printf("The average is %d.", avg);
	return 0;
}
