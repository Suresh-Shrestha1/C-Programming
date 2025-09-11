//Write a program to read and display details of 3 students using array of structures.
#include <stdio.h>

struct Student {
    int roll;
    char name[30];
};

int main() {
	int i;
    struct Student s[3];

    for (i = 0; i < 3; i++) {
        printf("Enter roll and name for student %d: ", i + 1);
        scanf("%d %[^\n]", &s[i].roll, s[i].name);
    }

    printf("\nStudent Details:\n");
    for (i = 0; i < 3; i++) {
        printf("Roll: %d, Name: %s\n", s[i].roll, s[i].name);
    }

    return 0;
}

