//iii.T=2a+sqrt(b)+9c
#include<stdio.h>
#include<math.h>
int main()
{
	float a, c, b, T;
	printf("Enter the value of a, b and c:");
	scanf("%f%f%f",&a,&b,&c);
	T=2*a+sqrt(b)+9*c;
	printf("The value of T is %.2f", T);
	return 0;
}
