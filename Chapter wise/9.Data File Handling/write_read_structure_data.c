//Write a program to store and read student data using structure in a file.
#include <stdio.h>

struct Student {
    int roll;
    char name[30];
    float marks;
};

int main() {
    struct Student s1 = {101, "Rahul", 89.5};
    struct Student s2;

    FILE *fp = fopen("student.dat", "wb");
    fwrite(&s1, sizeof(s1), 1, fp);
    fclose(fp);

    fp = fopen("student.dat", "rb");
    fread(&s2, sizeof(s2), 1, fp);
    fclose(fp);

    printf("Student Data Read:\n");
    printf("Roll: %d, Name: %s, Marks: %.2f\n", s2.roll, s2.name, s2.marks);
    return 0;
}

