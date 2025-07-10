//WAP to calculate simple interest and compound interest.
#include<math.h>
#include<stdio.h>
int main()
{
	float P, T, R, SI, CI;
	printf("Enter the Principle: ");
	scanf("%f",&P);
	printf("Enter the Time: ");
	scanf("%f",&T);
	printf("Enter the Rate: ");
	scanf("%f",&R);
	SI=P*T*R/100;
 float A = pow(1 + R / 100, T);  // Calculate (1 + R/100)^T
    CI = P * A - P;  // Compound Interest = P * A - P, which simplifies to P((1 + R/100)^T - 1)
	printf("Simple Interet is %.2f.\n",SI);
	printf("Compound Interest is %.2f.",CI);
	return 0;
}
