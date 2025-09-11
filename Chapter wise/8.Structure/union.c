//Write a program to demonstrate how to declare a union, assign values, and access union members.
#include <stdio.h>

union Student {
    int roll;
    float marks;
};

int main() {
    union Student s;

    s.roll = 101;
    printf("Roll Number: %d\n", s.roll);

    s.marks = 85.5;
    printf("Marks: %.2f\n", s.marks);

    // Notice how roll may now be corrupted
    printf("Roll Number after assigning marks: %d\n", s.roll); // Garbage or Corrupt

    return 0;
}

