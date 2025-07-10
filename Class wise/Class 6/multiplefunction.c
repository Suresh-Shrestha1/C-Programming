#include<stdio.h>
#include<conio.h>
void myFunction();
void myOtherFunction();

void myFunction()
{
	printf("Some text in my Function.\n");
	myOtherFunction(); // call myOtherFunction
}

//Create another function(myOtherFunction)
void myOtherFunction()
{
	printf("Hey! Some text in myOtherFunction\n");
}

int main(void)
{
	myFunction(); //call myFunction
	return 0;
}
