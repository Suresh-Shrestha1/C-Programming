//Write a program using a structure to store student details (name, roll number, and marks). Use a condition to check and display whether the student has passed or failed. Assume passing marks = 40.
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s;

    // Input student data
    printf("Enter student name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    // Display and condition check
    printf("\n--- Student Report ---\n");
    printf("Name: %s", s.name);
    printf("Roll Number: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);

    if (s.marks >= 40) {
        printf("Result: Passed ?\n");
    } else {
        printf("Result: Failed ?\n");
    }

    return 0;
}

