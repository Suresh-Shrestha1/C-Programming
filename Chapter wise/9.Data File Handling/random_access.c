//Write a program to randomly access records from a binary file.
#include <stdio.h>

struct Student {
    int roll;
    char name[30];
    float marks;
};

int main() {
    struct Student s[] = {
        {1, "Aman", 70.5},
        {2, "Ravi", 80.5},
        {3, "Sneha", 90.5}
    };
    struct Student temp;

    FILE *fp = fopen("student.dat", "wb");
    fwrite(s, sizeof(s), 1, fp);
    fclose(fp);

    fp = fopen("student.dat", "rb");
    fseek(fp, sizeof(struct Student) * 1, SEEK_SET);  // Access second record
    fread(&temp, sizeof(temp), 1, fp);
    fclose(fp);

    printf("Random Accessed Record:\n");
    printf("Roll: %d, Name: %s, Marks: %.2f\n", temp.roll, temp.name, temp.marks);
    return 0;
}

