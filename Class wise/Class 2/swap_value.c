//2.Write a program to swap values of two variables with and without using third variable.
#include<stdio.h>
int main()
{
	int a, b, c; 	//c=temp
	printf("Enter the value of a and b: ");		//with using three variables
	scanf("%d%d",&a,&b);
	printf("The value before swapping is a=%d b=%d.\n", a, b);
	// Swap the values of a and b using the temporary variable c
    c = a;  // Store the value of a in c
    a = b;  // Assign the value of b to a
    b = c;  // Assign the value stored in c (original a) to b
	printf("The value after swapping is a=%d b=%d.", a, b);
	return 0;
}
