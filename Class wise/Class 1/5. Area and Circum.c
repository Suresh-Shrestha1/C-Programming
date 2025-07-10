//WAP to calculate and display area and circumference of the circle using syntax of C.
#include<stdio.h>
#include<math.h>	// Include the math library for the pow() function
#define Pi 3.14		// Define the constant value of Pi
int main()
{
	// Declare variables for storing the radius, area, and circumference of the circle
	float r, area, circum;
	printf("Enter the radius: ");
	scanf("%f",&r);
	area=Pi*pow(r,2);		// Calculate the area of the circle using the formula: Area = Pi * r^2
	circum=2*Pi*r;			 // Calculate the circumference of the circle using the formula: Circumference = 2 * Pi * r
	printf("Area of circle is %.2f, Circumference of circle is %.2f", area, circum);
	return 0;
}
