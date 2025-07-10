//ii.S=ut+1/2at^2
//S=Displacement, u=Initial velocity, a=Acceleration, t=time
#include<stdio.h>
int main()
{
	float S, u, t, a;
	printf("Enter the value of u, t, a: ");
	scanf("%f%f%f",&u,&t,&t);
	S=u*t+1/2*a*t*t;
	printf("The value of S is %.2f",S);
	return 0;
}
