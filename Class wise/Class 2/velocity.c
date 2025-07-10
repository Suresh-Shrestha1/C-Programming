//1. WAP to evaluate each of the following expression.
//i.V=u+at
//V=velocity, u=Initial velocity, a=Acceleration, t=time
#include<stdio.h>
int main()
{
	float V, u, a, t;
	printf ("Enter the value of u, a and t: ");
	scanf("%f%f%f",&u,&a,&t);
	V=u+a*t;
	printf("The value of V is %.2f",V);
	return 0;
}
