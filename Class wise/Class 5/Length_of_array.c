//Size of array divided by size of an element.
#include<stdio.h>
int main()
{
	int myNum[]={1,44,55,66,74};
	int length=sizeof(myNum)/sizeof(myNum[0]);
	printf("%d",length);
	return 0;
}
