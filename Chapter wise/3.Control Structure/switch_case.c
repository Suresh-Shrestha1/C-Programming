//Write a program to perform basic arithmetic using switch.
#include <stdio.h>

int main() {
    int a, b, choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Choose operation:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1: 
			printf("Sum = %d\n", a + b); 
			break;
        case 2: 
			printf("Difference = %d\n", a - b); 
			break;
        case 3: 
			printf("Product = %d\n", a * b); 
			break;
        case 4: 
            if (b != 0)
                printf("Quotient = %d\n", a / b);
            else
                printf("Cannot divide by zero\n");
            break;
        default: 
		printf("Invalid choice\n");
    }

    return 0;
}

