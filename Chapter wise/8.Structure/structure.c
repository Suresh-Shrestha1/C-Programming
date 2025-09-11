//Write a program to define a structure for a student and display the information.
#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int marks[3];
};

int main() {
	int i;
    struct Student s = {101, "Sujan", {56, 45, 78}};

    printf("Roll: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    for (i = 0; i < 3; i++) {
        printf("Marks: %d\n ", s.marks[i]);
    }
    return 0;
}

