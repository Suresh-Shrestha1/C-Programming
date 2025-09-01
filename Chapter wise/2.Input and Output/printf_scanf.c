//Write a program that takes name, age, and percentage as input using scanf() and displays them using printf().
#include <stdio.h>

int main() {
    char name[30];
    int age;
    float percentage;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your percentage: ");
    scanf("%f", &percentage);
    printf("\nStudent Information\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Percentage: %.2f\n", percentage);
    return 0;
}

