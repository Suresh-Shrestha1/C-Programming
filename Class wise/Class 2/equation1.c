//iv.H=sqrt(b)^2+p^2
#include<stdio.h>
#include<math.h>
int main()
{
	float H, b, p;
	printf("Enter the value of b and p: ");
	scanf("%f%f",&b,&p);
	H=sqrt(b*b)+p*p;
	printf("The value of H is %.2f", H);
	return 0;
}
